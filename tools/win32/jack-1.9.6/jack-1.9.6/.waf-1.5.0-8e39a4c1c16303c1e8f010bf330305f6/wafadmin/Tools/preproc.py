#! /usr/bin/env python
# encoding: utf-8

import re,sys,os,string,types
if __name__=='__main__':
	sys.path=['.','..']+sys.path
import Logs,Build,Utils
from Logs import debug,error
import traceback
class PreprocError(Utils.WafError):
	pass
POPFILE='-'
go_absolute=0
standard_includes=['/usr/include']
if sys.platform=="win32":
	standard_includes=[]
use_trigraphs=0
'apply the trigraph rules first'
strict_quotes=0
g_optrans={'not':'!','and':'&&','bitand':'&','and_eq':'&=','or':'||','bitor':'|','or_eq':'|=','xor':'^','xor_eq':'^=','compl':'~',}
re_lines=re.compile('^[ \t]*(#|%:)[ \t]*(ifdef|ifndef|if|else|elif|endif|include|import|define|undef|pragma)[ \t]*(.*)\r*$',re.IGNORECASE|re.MULTILINE)
re_mac=re.compile("^[a-zA-Z_]\w*")
re_fun=re.compile('^[a-zA-Z_][a-zA-Z0-9_]*[(]')
re_pragma_once=re.compile('^\s*once\s*',re.IGNORECASE)
re_nl=re.compile('\\\\\r*\n',re.MULTILINE)
re_cpp=re.compile(r"""(/\*[^*]*\*+([^/*][^*]*\*+)*/)|//[^\n]*|("(\\.|[^"\\])*"|'(\\.|[^'\\])*'|.[^/"'\\]*)""",re.MULTILINE)
trig_def=[('??'+a,b)for a,b in zip("=-/!'()<>",r'#~\|^[]{}')]
chr_esc={'0':0,'a':7,'b':8,'t':9,'n':10,'f':11,'v':12,'r':13,'\\':92,"'":39}
NUM='i'
OP='O'
IDENT='T'
STR='s'
CHAR='c'
tok_types=[NUM,STR,IDENT,OP]
exp_types=[r"""0[xX](?P<hex>[a-fA-F0-9]+)(?P<qual1>[uUlL]*)|L*?'(?P<char>(\\.|[^\\'])+)'|(?P<n1>\d+)[Ee](?P<exp0>[+-]*?\d+)(?P<float0>[fFlL]*)|(?P<n2>\d*\.\d+)([Ee](?P<exp1>[+-]*?\d+))?(?P<float1>[fFlL]*)|(?P<n4>\d+\.\d*)([Ee](?P<exp2>[+-]*?\d+))?(?P<float2>[fFlL]*)|(?P<oct>0*)(?P<n0>\d+)(?P<qual2>[uUlL]*)""",r'L?"([^"\\]|\\.)*"',r'[a-zA-Z_]\w*',r'%:%:|<<=|>>=|\.\.\.|<<|<%|<:|<=|>>|>=|\+\+|\+=|--|->|-=|\*=|/=|%:|%=|%>|==|&&|&=|\|\||\|=|\^=|:>|!=|##|[\(\)\{\}\[\]<>\?\|\^\*\+&=:!#;,%/\-\?\~\.]',]
re_clexer=re.compile('|'.join(["(?P<%s>%s)"%(name,part)for name,part in zip(tok_types,exp_types)]),re.M)
accepted='a'
ignored='i'
undefined='u'
skipped='s'
def repl(m):
	s=m.group(1)
	if s is not None:return' '
	s=m.group(3)
	if s is None:return''
	return s
def filter_comments(filename):
	f=open(filename,"r")
	code=f.read()
	f.close()
	if use_trigraphs:
		for(a,b)in trig_def:code=code.split(a).join(b)
	code=re_nl.sub('',code)
	code=re_cpp.sub(repl,code)
	return[(m.group(2),m.group(3))for m in re.finditer(re_lines,code)]
prec={}
ops=['* / %','+ -','<< >>','< <= >= >','== !=','& | ^','&& ||',',']
for x in range(len(ops)):
	syms=ops[x]
	for u in syms.split():
		prec[u]=x
def reduce_nums(val_1,val_2,val_op):
	try:a=0+val_1
	except TypeError:a=int(val_1)
	try:b=0+val_2
	except TypeError:b=int(val_2)
	d=val_op
	if d=='%':c=a%b
	elif d=='+':c=a+b
	elif d=='-':c=a-b
	elif d=='*':c=a*b
	elif d=='/':c=a/b
	elif d=='^':c=a^b
	elif d=='|':c=a|b
	elif d=='||':c=int(a or b)
	elif d=='&':c=a&b
	elif d=='&&':c=int(a and b)
	elif d=='==':c=int(a==b)
	elif d=='!=':c=int(a!=b)
	elif d=='<=':c=int(a<=b)
	elif d=='<':c=int(a<b)
	elif d=='>':c=int(a>b)
	elif d=='>=':c=int(a>=b)
	elif d=='^':c=int(a^b)
	elif d=='<<':c=a<<b
	elif d=='>>':c=a>>b
	else:c=0
	return c
def get_expr(lst,defs,ban):
	if not lst:return([],[],[])
	(p,v)=lst[0]
	if p==NUM:
		return(p,v,lst[1:])
	elif p==STR:
		try:
			(p2,v2)=lst[1]
			if p2==STR:return(p,v+v2,lst[2:])
		except IndexError:pass
		return(p,v,lst[1:])
	elif p==OP:
		if v in['+','-','!','~','#']:
			(p2,v2,lst2)=get_expr(lst[1:],defs,ban)
			if v=='#':
				if p2!=IDENT:raise PreprocError,"ident expected %s"%str(lst)
				return get_expr([(STR,v2)]+lst2,defs,ban)
			if p2!=NUM:raise PreprocError,"num expected %s"%str(lst)
			if v=='+':return(p2,v2,lst2)
			elif v=='-':return(p2,-int(v2),lst2)
			elif v=='!':return(p2,int(not int(v2)),lst2)
			elif v=='~':return(p2,~int(v2),lst2)
			return(p2,v2,lst2)
		elif v=='(':
			count_par=0
			i=0
			for _,v in lst:
				if v==')':
					count_par-=1
					if count_par==0:break
				elif v=='(':count_par+=1
				i+=1
			else:
				raise PreprocError,"rparen expected %s"%str(lst)
			ret=process_tokens(lst[1:i],defs,ban)
			if len(ret)==1:
				(p,v)=ret[0]
				return(p,v,lst[i+1:])
			else:
				raise PreprocError,"cannot reduce %s"%str(lst)
	elif p==IDENT:
		if len(lst)>1:
			(p2,v2)=lst[1]
			if v2=="##":
				(p3,v3)=lst[2]
				if p3!=IDENT and p3!=NUM and p3!=OP:
					raise PreprocError,"%s: ident expected after '##'"%str(lst)
				return get_expr([(p,v+v3)]+lst[3:],defs,ban)
		if v.lower()=='defined':
			(p2,v2)=lst[1]
			off=2
			if v2=='(':
				(p2,v2)=lst[2]
				if p2!=IDENT:raise PreprocError,'expected an identifier after a "defined("'
				(p3,v3)=lst[3]
				if v3!=')':raise PreprocError,'expected a ")" after a "defined(x"'
				off=4
			elif p2!=IDENT:
				raise PreprocError,'expected a "(" or an identifier after a defined'
			x=0
			if v2 in defs:x=1
			return(NUM,x,lst[off:])
		elif not v in defs or v in ban:
			if"waf_include"in ban:return(p,v,lst[1:])
			else:return(NUM,0,lst[1:])
		if type(defs[v])is types.StringType:
			v,k=extract_macro(defs[v])
			defs[v]=k
		macro_def=defs[v]
		if not macro_def[0]:
			lst=macro_def[1]+lst[1:]
			return get_expr(lst,defs,ban)
		else:
			params=[]
			i=1
			p2,v2=lst[i]
			if p2!=OP or v2!='(':raise PreprocError,"invalid function call '%s'"%v
			one_param=[]
			count_paren=0
			try:
				while 1:
					i+=1
					p2,v2=lst[i]
					if p2==OP and count_paren==0:
						if v2=='(':
							one_param.append((p2,v2))
							count_paren+=1
						elif v2==')':
							if one_param:params.append(one_param)
							lst=lst[i+1:]
							break
						elif v2==',':
							if not one_param:raise PreprocError,"empty param in funcall %s"%p
							params.append(one_param)
							one_param=[]
						else:
							one_param.append((p2,v2))
					else:
						one_param.append((p2,v2))
						if v2=='(':count_paren+=1
						elif v2==')':count_paren-=1
			except IndexError,e:
				raise
			accu=[]
			table=macro_def[0]
			for p2,v2 in macro_def[1]:
				if p2==IDENT and v2 in table:accu+=params[table[v2]]
				else:
					if v2=='__VA_ARGS__':
						va_toks=[]
						st=len(macro_def[0])
						pt=len(params)
						for x in params[pt-st+1:]:
							va_toks.extend(x)
							va_toks.append((OP,','))
						if va_toks:va_toks.pop()
						if len(accu)>1:
							(p3,v3)=accu[-1]
							(p4,v4)=accu[-2]
							if v3=='##':
								accu.pop()
								if v4==','and pt<st:
									accu.pop()
						accu+=va_toks
					else:
						accu.append((p2,v2))
			return get_expr(accu+lst,defs,ban+[v])
def process_tokens(lst,defs,ban):
	accu=[]
	while lst:
		p,v,nlst=get_expr(lst,defs,ban)
		if p==NUM:
			if not nlst:return[(p,v)]
			op1,ov1=nlst[0]
			if op1!=OP:
				raise PreprocError,"op expected %s"%str(lst)
			if ov1=='?':
				i=0
				count_par=0
				for _,k in nlst:
					if k==')':count_par-=1
					elif k=='(':count_par+=1
					elif k==':'and count_par==0:break
					i+=1
				else:raise PreprocError,"ending ':' expected %s"%str(lst)
				if reduce_nums(v,0,'+'):lst=nlst[1:i]
				else:lst=nlst[i+1:]
				continue
			elif ov1==',':
				lst=nlst[1:]
				continue
			p2,v2,nlst=get_expr(nlst[1:],defs,ban)
			if p2!=NUM:raise PreprocError,"num expected after op %s"%str(lst)
			if nlst:
				op3,ov3=nlst[0]
				if prec[ov3]<prec[ov1]:
					p4,v4,nlst2=get_expr(nlst[1:],defs,ban)
					v5=reduce_nums(v2,v4,ov3)
					lst=[(p,v),(op1,ov1),(NUM,v5)]+nlst2
					continue
			lst=[(NUM,reduce_nums(v,v2,ov1))]+nlst
			continue
		elif p==STR:
			if nlst:raise PreprocError,"sequence must terminate with a string %s"%str(nlst)
			return[(p,v)]
		return(None,None,[])
def eval_macro(lst,adefs):
	ret=process_tokens(lst,adefs,[])
	if not ret:raise PreprocError,"missing tokens to evaluate %s"%str(lst)
	p,v=ret[0]
	return int(v)!=0
class c_parser(object):
	def __init__(self,nodepaths=None,defines=None):
		self.lines=[]
		if defines is None:
			self.defs={}
		else:
			self.defs=dict(defines)
		self.state=[]
		self.env=None
		self.count_files=0
		self.deps=[]
		self.deps_paths=[]
		self.currentnode_stack=[]
		self.nodepaths=nodepaths or[]
		self.nodes=[]
		self.names=[]
		self.curfile=''
		self.ban_includes=[]
		try:
			self.parse_cache=Build.bld.parse_cache
		except AttributeError:
			Build.bld.parse_cache={}
			self.parse_cache=Build.bld.parse_cache
	def tryfind(self,filename):
		self.curfile=filename
		found=self.currentnode_stack[-1].find_resource(filename)
		for n in self.nodepaths:
			if found:
				break
			found=n.find_resource(filename)
		if not found:
			if not filename in self.names:
				self.names.append(filename)
			return
		self.nodes.append(found)
		if filename[-4:]!='.moc':
			self.addlines(found)
	def addlines(self,node):
		self.currentnode_stack.append(node.parent)
		filepath=node.abspath(self.env)
		self.count_files+=1
		if self.count_files>30000:raise PreprocError,"recursion limit exceeded, bailing out"
		pc=self.parse_cache
		debug('preproc: reading file %r'%filepath)
		try:
			lns=pc[filepath]
		except KeyError:
			pass
		else:
			self.lines=lns+self.lines
			return
		try:
			lines=filter_comments(filepath)
			lines.append((POPFILE,''))
			pc[filepath]=lines
			self.lines=lines+self.lines
		except IOError:
			raise PreprocError,"could not read the file %s"%filepath
		except Exception:
			if Logs.verbose>0:
				error("parsing %s failed"%filepath)
				traceback.print_exc()
	def start(self,node,env):
		debug('preproc: scanning %s (in %s)'%(node.name,node.parent.name))
		self.env=env
		variant=node.variant(env)
		self.addlines(node)
		if env['DEFLINES']:
			self.lines=[('define',x)for x in env['DEFLINES']]+self.lines
		while self.lines:
			(type,line)=self.lines.pop(0)
			if type==POPFILE:
				self.currentnode_stack.pop()
				continue
			try:
				self.process_line(type,line)
			except Exception,ex:
				if Logs.verbose:
					error("line parsing failed (%s): %s"%(str(ex),line))
					traceback.print_exc()
	def process_line(self,token,line):
		ve=Logs.verbose
		if ve:debug('preproc: line is %s - %s state is %s'%(token,line,self.state))
		state=self.state
		if token in['ifdef','ifndef','if']:
			state.append(undefined)
		elif token=='endif':
			state.pop()
		if not token in['else','elif','endif']:
			if skipped in self.state or ignored in self.state:
				return
		if token=='if':
			ret=eval_macro(tokenize(line),self.defs)
			if ret:state[-1]=accepted
			else:state[-1]=ignored
		elif token=='ifdef':
			m=re_mac.search(line)
			if m and m.group(0)in self.defs:state[-1]=accepted
			else:state[-1]=ignored
		elif token=='ifndef':
			m=re_mac.search(line)
			if m and m.group(0)in self.defs:state[-1]=ignored
			else:state[-1]=accepted
		elif token=='include'or token=='import':
			(type,inc)=extract_include(line,self.defs)
			if inc in self.ban_includes:return
			if token=='import':self.ban_includes.append(inc)
			if ve:debug('preproc: include found %s    (%s) '%(inc,type))
			if type=='"'or not strict_quotes:
				if not inc in self.deps:
					self.deps.append(inc)
				self.tryfind(inc)
		elif token=='elif':
			if state[-1]==accepted:
				state[-1]=skipped
			elif state[-1]==ignored:
				if eval_macro(tokenize(line),self.defs):
					state[-1]=accepted
		elif token=='else':
			if state[-1]==accepted:state[-1]=skipped
			elif state[-1]==ignored:state[-1]=accepted
		elif token=='define':
			m=re_mac.search(line)
			if m:
				name=m.group(0)
				if ve:debug('preproc: define %s   %s'%(name,line))
				self.defs[name]=line
			else:
				raise PreprocError,"invalid define line %s"%line
		elif token=='undef':
			m=re_mac.search(line)
			if m and m.group(0)in self.defs:
				self.defs.__delitem__(m.group(0))
		elif token=='pragma':
			if re_pragma_once.search(line.lower()):
				self.ban_includes.append(self.curfile)
def extract_macro(txt):
	t=tokenize(txt)
	if re_fun.search(txt):
		p,name=t[0]
		p,v=t[1]
		if p!=OP:raise PreprocError,"expected open parenthesis"
		i=1
		pindex=0
		params={}
		prev='('
		while 1:
			i+=1
			p,v=t[i]
			if prev=='(':
				if p==IDENT:
					params[v]=pindex
					pindex+=1
					prev=p
				elif p==OP and v==')':
					break
				else:
					raise PreprocError,"unexpected token"
			elif prev==IDENT:
				if p==OP and v==',':
					prev=v
				elif p==OP and v==')':
					break
				else:
					raise PreprocError,"comma or ... expected"
			elif prev==',':
				if p==IDENT:
					params[v]=pindex
					pindex+=1
					prev=p
				elif p==OP and v=='...':
					raise PreprocError,"not implemented"
				else:
					raise PreprocError,"comma or ... expected"
			elif prev=='...':
				raise PreprocError,"not implemented"
			else:
				raise PreprocError,"unexpected else"
		print(name,[params,t[i+1:]])
		return(name,[params,t[i+1:]])
	else:
		(p,v)=t[0]
		return(v,[[],t[1:]])
re_include=re.compile('^\s*(<(?P<a>.*)>|"(?P<b>.*)")')
def extract_include(txt,defs):
	m=re_include.search(txt)
	if m:
		if m.group('a'):return'<',m.group('a')
		if m.group('b'):return'"',m.group('b')
	tokens=tokenize(txt)
	tokens=process_tokens(tokens,defs,['waf_include'])
	p,v=tokens[0]
	if p!=STR:raise PreprocError,"could not parse include %s"%txt
	return('"',v)
def parse_char(txt):
	if not txt:raise PreprocError,"attempted to parse a null char"
	if txt[0]!='\\':
		return ord(txt)
	c=txt[1]
	if c=='x':
		if len(txt)==4 and txt[3]in string.hexdigits:return int(txt[2:],16)
		return int(txt[2:],16)
	elif c.isdigit():
		if c=='0'and len(txt)==2:return 0
		for i in 3,2,1:
			if len(txt)>i and txt[1:1+i].isdigit():
				return(1+i,int(txt[1:1+i],8))
	else:
		try:return chr_esc[c]
		except KeyError:raise PreprocError,"could not parse char literal '%s'"%txt
def tokenize(s):
	ret=[]
	for match in re_clexer.finditer(s):
		m=match.group
		for name in tok_types:
			v=m(name)
			if v:
				if name==IDENT:
					try:v=g_optrans[v];name=OP
					except KeyError:
						if v.lower()=="true":
							v=1
							name=NUM
						elif v.lower()=="false":
							v=0
							name=NUM
				elif name==NUM:
					if m('oct'):v=int(v,8)
					elif m('hex'):v=int(m('hex'),16)
					elif m('n0'):v=m('n0')
					else:
						v=m('char')
						if v:v=parse_char(v)
						else:v=m('n2')or m('n4')
				elif name==OP:
					if v=='%:':v='#'
					elif v=='%:%:':v='##'
				ret.append((name,v))
				break
	return ret

