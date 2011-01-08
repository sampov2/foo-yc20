#! /usr/bin/env python
# encoding: utf-8

import os,sys,re,optparse
import ccroot
import TaskGen,Utils,Task,Configure,Logs,Build
from Logs import debug,error
from TaskGen import taskgen,feature,after,before,extension
EXT_D=['.d','.di','.D']
D_METHS=['apply_core','apply_vnum','apply_objdeps']
def filter_comments(filename):
	f=open(filename,'r')
	txt=f.read()
	f.close()
	buf=[]
	i=0
	max=len(txt)
	while i<max:
		c=txt[i]
		if c=='"':
			i+=1
			c=''
			while i<max:
				p=c
				c=txt[i]
				i+=1
				if i==max:return buf
				if c=='"':
					cnt=0
					while i<cnt and i<max:
						if txt[i-2-cnt]=='\\':cnt+=1
						else:break
					if(cnt%2)==0:break
		elif c=="'":
			i+=1
			if i==max:return buf
			c=txt[i]
			if c=='\\':
				i+=1
				if i==max:return buf
				c=txt[i]
				if c=='x':
					i+=2
				elif c=='u':
					i+=4
			i+=1
			if i==max:return buf
			c=txt[i]
			if c!='\'':error("uh-oh, invalid character")
		elif c=='/':
			if i==max:break
			c=txt[i+1]
			if c=='+':
				i+=1
				nesting=1
				prev=0
				while i<max:
					c=txt[i]
					if c=='+':
						prev=1
					elif c=='/':
						if prev:
							nesting-=1
							if nesting==0:break
						else:
							if i<max:
								i+=1
								c=txt[i]
								if c=='+':
									nesting+=1
							else:
								return buf
					else:
						prev=0
					i+=1
			elif c=='*':
				i+=1
				while i<max:
					c=txt[i]
					if c=='*':
						prev=1
					elif c=='/':
						if prev:break
					else:
						prev=0
					i+=1
			elif c=='/':
				i+=1
				c=txt[i]
				while i<max and c!='\n':
					i+=1
					c=txt[i]
		else:
			buf.append(c)
		i+=1
	return buf
class d_parser(object):
	def __init__(self,env,incpaths):
		self.allnames=[]
		self.re_module=re.compile("module\s+([^;]+)")
		self.re_import=re.compile("import\s+([^;]+)")
		self.re_import_bindings=re.compile("([^:]+):(.*)")
		self.re_import_alias=re.compile("[^=]+=(.+)")
		self.env=env
		self.nodes=[]
		self.names=[]
		self.incpaths=incpaths
	def tryfind(self,filename):
		found=0
		for n in self.incpaths:
			found=n.find_resource(filename.replace('.','/')+'.d')
			if found:
				self.nodes.append(found)
				self.waiting.append(found)
				break
		if not found:
			if not filename in self.names:
				self.names.append(filename)
	def get_strings(self,code):
		self.module=''
		lst=[]
		mod_name=self.re_module.search(code)
		if mod_name:
			self.module=re.sub('\s+','',mod_name.group(1))
		import_iterator=self.re_import.finditer(code)
		if import_iterator:
			for import_match in import_iterator:
				import_match_str=re.sub('\s+','',import_match.group(1))
				bindings_match=self.re_import_bindings.match(import_match_str)
				if bindings_match:
					import_match_str=bindings_match.group(1)
				matches=import_match_str.split(',')
				for match in matches:
					alias_match=self.re_import_alias.match(match)
					if alias_match:
						match=alias_match.group(1)
					lst.append(match)
		return lst
	def start(self,node):
		self.waiting=[node]
		while self.waiting:
			nd=self.waiting.pop(0)
			self.iter(nd)
	def iter(self,node):
		path=node.abspath(self.env)
		code="".join(filter_comments(path))
		names=self.get_strings(code)
		for x in names:
			if x in self.allnames:continue
			self.allnames.append(x)
			self.tryfind(x)
def scan(self):
	env=self.env
	gruik=d_parser(env,env['INC_PATHS'])
	gruik.start(self.inputs[0])
	if Logs.verbose:
		debug('deps: nodes found for %s: %s %s'%(str(self.inputs[0]),str(gruik.nodes),str(gruik.names)))
	return(gruik.nodes,gruik.names)
def get_target_name(self):
	v=self.env
	tp='program'
	for x in self.features:
		if x in['dshlib','dstaticlib']:
			tp=x.lstrip('d')
	return v['D_%s_PATTERN'%tp]%self.target
d_params={'dflags':{'gdc':'','dmd':''},'importpaths':'','libs':'','libpaths':'','generate_headers':False,}
def init_d(self):
	for x in d_params:
		setattr(self,x,getattr(self,x,d_params[x]))
class d_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
		if len(k)>1:
			self.features.append('d'+k[1])
TaskGen.bind_feature('d',D_METHS)
def init_d(self):
	Utils.def_attrs(self,dflags={'gdc':'','dmd':''},importpaths='',libs='',libpaths='',uselib='',uselib_local='',generate_headers=False,compiled_tasks=[],add_objects=[],link_task=None)
def apply_d_libs(self):
	uselib=self.to_list(self.uselib)
	seen=[]
	local_libs=self.to_list(self.uselib_local)
	libs=[]
	libpaths=[]
	env=self.env
	while local_libs:
		x=local_libs.pop()
		if x in seen:
			continue
		else:
			seen.append(x)
		y=self.name_to_obj(x)
		if not y:
			raise Utils.WafError('object not found in uselib_local: obj %s uselib %s'%(self.name,x))
		if y.uselib_local:
			added=0
			lst=y.to_list(y.uselib_local)
			lst.reverse()
			for u in lst:
				if u in seen:continue
				added=1
				local_libs=[u]+local_libs
			if added:continue
		y.post()
		seen.append(x)
		if'dshlib'in y.features or'dstaticlib'in y.features:
			libs.append(y.target)
		tmp_path=y.path.bldpath(env)
		if not tmp_path in libpaths:libpaths=[tmp_path]+libpaths
		if y.link_task is not None:
			self.link_task.set_run_after(y.link_task)
			dep_nodes=getattr(self.link_task,'dep_nodes',[])
			self.link_task.dep_nodes=dep_nodes+y.link_task.outputs
		morelibs=y.to_list(y.uselib)
		for v in morelibs:
			if v in uselib:continue
			uselib=[v]+uselib
	self.uselib=uselib
def apply_d_link(self):
	link=getattr(self,'link',None)
	if not link:
		if'dstaticlib'in self.features:link='ar_link_static'
		else:link='d_link'
	linktask=self.create_task(link)
	outputs=[t.outputs[0]for t in self.compiled_tasks]
	linktask.set_inputs(outputs)
	linktask.set_outputs(self.path.find_or_declare(get_target_name(self)))
	self.link_task=linktask
def apply_d_vars(self):
	env=self.env
	dpath_st=env['DPATH_ST']
	lib_st=env['DLIB_ST']
	libpath_st=env['DLIBPATH_ST']
	dflags={'gdc':[],'dmd':[]}
	importpaths=self.to_list(self.importpaths)
	libpaths=[]
	libs=[]
	uselib=self.to_list(self.uselib)
	for i in uselib:
		if env['DFLAGS_'+i]:
			for dflag in self.to_list(env['DFLAGS_'+i][env['COMPILER_D']]):
				if not dflag in dflags[env['COMPILER_D']]:
					dflags[env['COMPILER_D']]+=[dflag]
	dflags[env['COMPILER_D']]=self.to_list(self.dflags[env['COMPILER_D']])+dflags[env['COMPILER_D']]
	for dflag in dflags[env['COMPILER_D']]:
		if not dflag in env['DFLAGS'][env['COMPILER_D']]:
			env['DFLAGS'][env['COMPILER_D']]+=[dflag]
	for x in self.features:
		if not x in['dprogram','dstaticlib','dshlib']:
			continue
		x.lstrip('d')
		d_shlib_dflags=env['D_'+x+'_DFLAGS']
		if d_shlib_dflags:
			for dflag in d_shlib_dflags:
				if not dflag in env['DFLAGS'][env['COMPILER_D']]:
					env['DFLAGS'][env['COMPILER_D']]+=[dflag]
	env['_DFLAGS']=env['DFLAGS'][env['COMPILER_D']]
	for i in uselib:
		if env['DPATH_'+i]:
			for entry in self.to_list(env['DPATH_'+i]):
				if not entry in importpaths:
					importpaths.append(entry)
	for path in importpaths:
		if os.path.isabs(path):
			env.append_unique('_DIMPORTFLAGS',dpath_st%path)
		else:
			node=self.path.find_dir(path)
			self.env.append_unique('INC_PATHS',node)
			env.append_unique('_DIMPORTFLAGS',dpath_st%node.srcpath(env))
			env.append_unique('_DIMPORTFLAGS',dpath_st%node.bldpath(env))
	for i in uselib:
		if env['LIBPATH_'+i]:
			for entry in self.to_list(env['LIBPATH_'+i]):
				if not entry in libpaths:
					libpaths+=[entry]
	libpaths=self.to_list(self.libpaths)+libpaths
	for path in libpaths:
		env.append_unique('_DLIBDIRFLAGS',libpath_st%path)
	for i in uselib:
		if env['LIB_'+i]:
			for entry in self.to_list(env['LIB_'+i]):
				if not entry in libs:
					libs+=[entry]
	libs=libs+self.to_list(self.libs)
	for lib in libs:
		env.append_unique('_DLIBFLAGS',lib_st%lib)
	for i in uselib:
		dlinkflags=env['DLINKFLAGS_'+i]
		if dlinkflags:
			for linkflag in dlinkflags:
				env.append_unique('DLINKFLAGS',linkflag)
def add_shlib_d_flags(self):
	for linkflag in self.env['D_shlib_LINKFLAGS']:
		self.env.append_unique('DLINKFLAGS',linkflag)
def d_hook(self,node):
	task=self.create_task(self.generate_headers and'd_with_header'or'd')
	try:obj_ext=self.obj_ext
	except AttributeError:obj_ext='_%d.o'%self.idx
	task.inputs=[node]
	task.outputs=[node.change_ext(obj_ext)]
	self.compiled_tasks.append(task)
	if self.generate_headers:
		header_node=node.change_ext(self.env['DHEADER_ext'])
		task.outputs+=[header_node]
d_str='${D_COMPILER} ${_DFLAGS} ${_DIMPORTFLAGS} ${D_SRC_F}${SRC} ${D_TGT_F}${TGT}'
d_with_header_str='${D_COMPILER} ${_DFLAGS} ${_DIMPORTFLAGS} \
${D_HDR_F}${TGT[1].bldpath(env)} \
${D_SRC_F}${SRC} \
${D_TGT_F}${TGT[0].bldpath(env)}'
link_str='${D_LINKER} ${DLNK_SRC_F}${SRC} ${DLNK_TGT_F}${TGT} ${DLINKFLAGS} ${_DLIBDIRFLAGS} ${_DLIBFLAGS}'
cls=Task.simple_task_type('d',d_str,'GREEN')
cls.scan=scan
Task.simple_task_type('d_with_header',d_with_header_str,'GREEN')
Task.simple_task_type('d_link',link_str,color='YELLOW')
def generate_header(self,filename,install_path):
	if not hasattr(self,'header_lst'):self.header_lst=[]
	self.meths.append('process_header')
	self.header_lst.append([filename,install_path])
def process_header(self):
	env=self.env
	for i in getattr(self,'header_lst',[]):
		node=self.path.find_resource(i[0])
		if not node:
			raise Utils.WafError('file not found on d obj '+i[0])
		task=self.create_task('d_header')
		task.set_inputs(node)
		task.set_outputs(node.change_ext('.di'))
d_header_str='${D_COMPILER} ${D_HEADER} ${SRC}'
Task.simple_task_type('d_header',d_header_str,color='BLUE')

feature('d')(init_d)
before('apply_type_vars')(init_d)
feature('d')(init_d)
before('apply_d_libs')(init_d)
feature('d')(apply_d_libs)
after('apply_d_link')(apply_d_libs)
before('apply_vnum')(apply_d_libs)
feature('dprogram','dshlib','dstaticlib')(apply_d_link)
after('apply_core')(apply_d_link)
feature('d')(apply_d_vars)
after('apply_core')(apply_d_vars)
feature('dshlib')(add_shlib_d_flags)
after('apply_d_vars')(add_shlib_d_flags)
extension(EXT_D)(d_hook)
taskgen(generate_header)
taskgen(process_header)
before('apply_core')(process_header)
