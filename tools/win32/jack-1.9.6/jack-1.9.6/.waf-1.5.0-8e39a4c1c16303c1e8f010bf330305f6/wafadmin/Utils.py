#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import os,sys,imp,types,string,errno,traceback,inspect,re
from UserDict import UserDict
import Logs,pproc
from Constants import*
class WafError(Exception):
	def __init__(self,*args):
		self.args=args
		self.stack=traceback.extract_stack()
		Exception.__init__(self,*args)
	def __str__(self):
		return str(len(self.args)==1 and self.args[0]or self.args)
class WscriptError(WafError):
	def __init__(self,message,wscript_file=None):
		if wscript_file:
			self.wscript_file=wscript_file
			self.wscript_line=None
		else:
			(self.wscript_file,self.wscript_line)=self.locate_error()
		msg_file_line=''
		if self.wscript_file:
			msg_file_line="%s:"%self.wscript_file
			if self.wscript_line:
				msg_file_line+="%s:"%self.wscript_line
		err_message="%s error: %s"%(msg_file_line,message)
		WafError.__init__(self,err_message)
	def locate_error(self):
		stack=traceback.extract_stack()
		stack.reverse()
		for frame in stack:
			file_name=os.path.basename(frame[0])
			is_wscript=(file_name==WSCRIPT_FILE or file_name==WSCRIPT_BUILD_FILE)
			if is_wscript:
				return(frame[0],frame[1])
		return(None,None)
indicator=sys.platform=='win32'and'\x1b[A\x1b[K%s%s%s\r'or'\x1b[K%s%s%s\r'
try:
	from fnv import new as md5
	import Constants
	Constants.SIG_NIL='signofnv'
	def h_file(filename):
		m=md5()
		try:
			m.hfile(filename)
			x=m.digest()
			if x is None:raise OSError,"not a file"
			return x
		except SystemError:
			raise OSError,"not a file"+filename
except ImportError:
	try:
		from hashlib import md5
	except ImportError:
		from md5 import md5
	def h_file(filename):
		f=file(filename,'rb')
		m=md5()
		readBytes=100000
		while(readBytes):
			readString=f.read(readBytes)
			m.update(readString)
			readBytes=len(readString)
		f.close()
		return m.digest()
class ordered_dict(UserDict):
	def __init__(self,dict=None):
		self.allkeys=[]
		UserDict.__init__(self,dict)
	def __delitem__(self,key):
		self.allkeys.remove(key)
		UserDict.__delitem__(self,key)
	def __setitem__(self,key,item):
		if key not in self.allkeys:self.allkeys.append(key)
		UserDict.__setitem__(self,key,item)
def exec_command(s,shell=1,log=None):
	proc=pproc.Popen(s,shell=shell,stdout=log,stderr=log)
	return proc.wait()
if sys.platform=="win32":
	old_log=exec_command
	def exec_command(s,shell=1,log=None):
		if len(s)<2000:return old_log(s,shell=shell,log=log)
		startupinfo=pproc.STARTUPINFO()
		startupinfo.dwFlags|=pproc.STARTF_USESHOWWINDOW
		proc=pproc.Popen(s,shell=False,startupinfo=startupinfo)
		return proc.wait()
listdir=os.listdir
if sys.platform=="win32":
	def listdir_win32(s):
		if re.match('^[A-Z]:$',s):
			s+=os.sep
		if not os.path.isdir(s):
			e=OSError()
			e.errno=errno.ENOENT
			raise e
		return os.listdir(s)
	listdir=listdir_win32
def waf_version(mini=0x010000,maxi=0x100000):
	ver=HEXVERSION
	try:min_val=mini+0
	except TypeError:min_val=int(mini.replace('.','0'),16)
	if min_val>ver:
		Logs.error("waf version should be at least %s (%s found)"%(mini,ver))
		sys.exit(0)
	try:max_val=maxi+0
	except TypeError:max_val=int(maxi.replace('.','0'),16)
	if max_val<ver:
		Logs.error("waf version should be at most %s (%s found)"%(maxi,ver))
		sys.exit(0)
def python_24_guard():
	if sys.hexversion<0x20400f0:
		raise ImportError,"Waf requires Python >= 2.3 but the raw source requires Python 2.4"
def ex_stack():
	exc_type,exc_value,tb=sys.exc_info()
	exc_lines=traceback.format_exception(exc_type,exc_value,tb)
	return''.join(exc_lines)
def to_list(sth):
	if type(sth)is types.ListType:
		return sth
	else:
		return sth.split()
g_loaded_modules={}
g_module=None
def load_module(file_path,name=WSCRIPT_FILE):
	try:
		return g_loaded_modules[file_path]
	except KeyError:
		pass
	module=imp.new_module(name)
	try:
		file=open(file_path,'r')
	except(IOError,OSError):
		raise WscriptError('The file %s could not be opened!'%file_path)
	module_dir=os.path.dirname(file_path)
	sys.path.insert(0,module_dir)
	exec file in module.__dict__
	sys.path.remove(module_dir)
	if file:file.close()
	g_loaded_modules[file_path]=module
	return module
def set_main_module(file_path):
	global g_module
	g_module=load_module(file_path,'wscript_main')
def to_hashtable(s):
	tbl={}
	lst=s.split('\n')
	for line in lst:
		if not line:continue
		mems=line.split('=')
		tbl[mems[0]]=mems[1]
	return tbl
def get_term_cols():
	return 80
try:
	import struct,fcntl,termios
except ImportError:
	pass
else:
	if sys.stdout.isatty():
		def myfun():
			dummy_lines,cols=struct.unpack("HHHH",fcntl.ioctl(sys.stdout.fileno(),termios.TIOCGWINSZ,struct.pack("HHHH",0,0,0,0)))[:2]
			return cols
		try:
			myfun()
		except IOError:
			pass
		else:
			get_term_cols=myfun
rot_idx=0
rot_chr=['\\','|','/','-']
def split_path(path):
	if not path:return['']
	return path.split('/')
if sys.platform=='win32':
	def split_path(path):
		h,t=os.path.splitunc(path)
		if not h:return __split_dirs(t)
		return[h]+__split_dirs(t)[1:]
	def __split_dirs(path):
		h,t=os.path.split(path)
		if not h:return[t]
		if h==path:return[h.replace('\\','')]
		if not t:return __split_dirs(h)
		else:return __split_dirs(h)+[t]
def copy_attrs(orig,dest,names,only_if_set=False):
	for a in to_list(names):
		u=getattr(orig,a,())
		if u or not only_if_set:
			setattr(dest,a,u)
def def_attrs(self,**kw):
	for k,v in kw.iteritems():
		try:
			getattr(self,k)
		except AttributeError:
			setattr(self,k,v)
quote_define_name_table=None
def quote_define_name(path):
	global quote_define_name_table
	if not quote_define_name_table:
		invalid_chars=set([chr(x)for x in xrange(256)])-set(string.digits+string.uppercase)
		quote_define_name_table=string.maketrans(''.join(invalid_chars),'_'*len(invalid_chars))
	return string.translate(string.upper(path),quote_define_name_table)
def quote_whitespace(path):
	return(path.strip().find(' ')>0 and'"%s"'%path or path).replace('""','"')
def trimquotes(s):
	if not s:return''
	s=s.rstrip()
	if s[0]=="'"and s[-1]=="'":return s[1:-1]
	return s
def h_list(lst):
	m=md5()
	m.update(str(lst))
	return m.digest()
def h_fun(fun):
	try:
		return fun.code
	except AttributeError:
		try:
			h=inspect.getsource(fun)
		except IOError:
			h="nocode"
		try:
			fun.code=h
		except AttributeError:
			pass
		return h
_hash_blacklist_types=(types.BuiltinFunctionType,types.ModuleType,types.FunctionType,types.ClassType,types.TypeType,types.NoneType,)
def hash_function_with_globals(prevhash,func):
	assert type(func)is types.FunctionType
	for name,value in func.func_globals.iteritems():
		if type(value)in _hash_blacklist_types:
			continue
		if isinstance(value,type):
			continue
		try:
			prevhash=hash((prevhash,name,value))
		except TypeError:
			pass
	return hash((prevhash,inspect.getsource(func)))
def pprint(col,str,label=''):
	print"%s%s%s %s"%(Logs.colors(col),str,Logs.colors.NORMAL,label)
def check_dir(dir):
	try:
		os.stat(dir)
	except OSError:
		try:
			os.makedirs(dir)
		except OSError,e:
			raise WafError("Cannot create folder '%s' (original error: %s)"%(dir,e))
def cmd_output(cmd,e=None,silent=False):
	p=pproc.Popen(cmd,stdout=pproc.PIPE,shell=True,env=e)
	output=p.communicate()[0]
	if p.returncode:
		if not silent:
			msg="command execution failed: %s -> %r"%(cmd,str(output))
			raise ValueError,msg
		output=''
	return output
reg_subst=re.compile(r"(\\\\)|(\\\$)|\$\{([^}]+)\}")
def subst_vars(expr,params):
	def repl_var(m):
		if m.group(1):
			return'\\'
		if m.group(2):
			return'$'
		return params[m.group(3)]
	return reg_subst.sub(repl_var,expr)
def detect_platform():
	s=sys.platform
	for x in'cygwin linux irix sunos hpux aix darwin'.split():
		if s.find(x)>=0:
			return x
	if os.name in'posix java os2'.split():
		return os.name
	return s

