#! /usr/bin/env python
# encoding: utf-8

import os,sys,re
import TaskGen,Utils,preproc,Logs,Build,Options
from Logs import error,debug,warn
from Utils import md5
from TaskGen import taskgen,after,before,feature
from Constants import*
import config_c
get_version_re=re.compile('\d+\.\d+(\.?\d+)*')
def get_cc_version(conf,cc,version_var):
	v=conf.env
	output=Utils.cmd_output('%s -dumpversion'%cc)
	if output:
		match=get_version_re.search(output)
		if match:
			v[version_var]=match.group(0)
			conf.check_message('compiler','version',1,v[version_var])
			return v[version_var]
	warn('could not determine the compiler version')
class DEBUG_LEVELS:
	ULTRADEBUG="ultradebug"
	DEBUG="debug"
	RELEASE="release"
	OPTIMIZED="optimized"
	CUSTOM="custom"
	ALL=[ULTRADEBUG,DEBUG,RELEASE,OPTIMIZED,CUSTOM]
def scan(self):
	debug('ccroot: _scan_preprocessor(self, node, env, path_lst)')
	all_nodes=[]
	all_names=[]
	seen=[]
	for node in self.inputs:
		gruik=preproc.c_parser(nodepaths=self.env['INC_PATHS'],defines=self.defines)
		gruik.start(node,self.env)
		if Logs.verbose:
			debug('deps: nodes found for %s: %s %s'%(str(node),str(gruik.nodes),str(gruik.names)))
			debug('deps: deps found for %s: %s'%(str(node),str(gruik.deps)))
		for x in gruik.nodes:
			if id(x)in seen:continue
			seen.append(id(x))
			all_nodes.append(x)
		for x in gruik.names:
			if not x in all_names:
				all_names.append(x)
	return(all_nodes,gruik.names)
class ccroot_abstract(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
		if len(k)>1:
			self.features.append('c'+k[1])
def default_cc(self):
	Utils.def_attrs(self,includes='',defines='',rpaths='',uselib='',uselib_local='',add_objects='',p_flag_vars=[],p_type_vars=[],scanner_defines={},compiled_tasks=[],link_task=None)
def get_target_name(self):
	tp='program'
	for x in self.features:
		if x in['cshlib','cstaticlib']:
			tp=x.lstrip('c')
	pattern=self.env[tp+'_PATTERN']
	if not pattern:pattern='%s'
	name=self.target
	k=name.rfind('/')
	return name[0:k+1]+pattern%name[k+1:]
def apply_verif(self):
	if not'objects'in self.features:
		if not self.source:
			raise Utils.WafError('no source files specified for %s'%self)
		if not self.target:
			raise Utils.WafError('no target for %s'%self)
def install_shlib(self):
	nums=self.vnum.split('.')
	path=self.install_path
	libname=self.outputs[0].name
	name3=libname+'.'+self.vnum
	name2=libname+'.'+nums[0]
	name1=libname
	filename=self.outputs[0].abspath(self.env)
	bld=Build.bld
	bld.install_as(os.path.join(path,name3),filename,env=self.env)
	bld.symlink_as(os.path.join(path,name2),name3)
	bld.symlink_as(os.path.join(path,name1),name3)
def vars_target_cprogram(self):
	self.default_install_path='${PREFIX}/bin'
	self.default_chmod=0755
def vars_target_cstaticlib(self):
	self.default_install_path='${PREFIX}/lib'
def install_target_cstaticlib(self):
	if not Options.is_install:return
	self.link_task.install_path=self.install_path
def install_target_cshlib(self):
	if getattr(self,'vnum','')and sys.platform!='win32':
		tsk=self.link_task
		tsk.vnum=self.vnum
		tsk.install=install_shlib
def apply_incpaths(self):
	lst=[]
	for lib in self.to_list(self.uselib):
		for path in self.env['CPPPATH_'+lib]:
			if not path in lst:
				lst.append(path)
	if preproc.go_absolute:
		for path in preproc.standard_includes:
			if not path in lst:
				lst.append(path)
	for path in self.to_list(self.includes):
		if not path in lst:
			lst.append(path)
			if(not preproc.go_absolute)and os.path.isabs(path):
				self.env.prepend_value('CPPPATH',path)
	tree=Build.bld
	inc_lst=[]
	for path in lst:
		node=None
		if os.path.isabs(path):
			if preproc.go_absolute:
				node=Build.bld.root.find_dir(path)
		else:
			node=self.path.find_dir(path)
		if node:
			inc_lst.append(node)
	self.env['INC_PATHS']+=inc_lst
def apply_type_vars(self):
	for x in self.features:
		if not x in['cprogram','cstaticlib','cshlib']:
			continue
		x=x.lstrip('c')
		st=self.env[x+'_USELIB']
		if st:self.uselib=self.uselib+' '+st
		for var in self.p_type_vars:
			compvar='%s_%s'%(x,var)
			value=self.env[compvar]
			if value:self.env.append_value(var,value)
def apply_link(self):
	link=getattr(self,'link',None)
	if not link:
		if'cstaticlib'in self.features:link='ar_link_static'
		elif'cxx'in self.features:link='cxx_link'
		else:link='cc_link'
	linktask=self.create_task(link)
	outputs=[t.outputs[0]for t in self.compiled_tasks]
	linktask.set_inputs(outputs)
	linktask.set_outputs(self.path.find_or_declare(get_target_name(self)))
	linktask.chmod=self.chmod
	self.link_task=linktask
def apply_lib_vars(self):
	env=self.env
	uselib=self.to_list(self.uselib)
	seen=[]
	names=self.to_list(self.uselib_local)[:]
	while names:
		x=names.pop(0)
		if x in seen:
			continue
		y=self.name_to_obj(x)
		if not y:
			raise Utils.WafError("object '%s' was not found in uselib_local (required by '%s')"%(x,self.name))
		if getattr(y,'uselib_local',None):
			lst=y.to_list(y.uselib_local)
			for u in lst:
				if not u in seen:
					names.append(u)
		y.post()
		seen.append(x)
		if'cshlib'in y.features or'cprogram'in y.features:
			env.append_value('LIB',y.target)
		elif'cstaticlib'in y.features:
			env.append_value('STATICLIB',y.target)
		tmp_path=y.path.bldpath(self.env)
		if not tmp_path in env['LIBPATH']:env.prepend_value('LIBPATH',tmp_path)
		if y.link_task is not None:
			self.link_task.set_run_after(y.link_task)
			dep_nodes=getattr(self.link_task,'dep_nodes',[])
			self.link_task.dep_nodes=dep_nodes+y.link_task.outputs
		morelibs=y.to_list(y.uselib)
		for v in morelibs:
			if v in uselib:continue
			uselib=[v]+uselib
		if getattr(y,'export_incdirs',None):
			cpppath_st=self.env['CPPPATH_ST']
			for x in self.to_list(y.export_incdirs):
				node=y.path.find_dir(x)
				if not node:raise Utils.WafError('object %s: invalid folder %s in export_incdirs'%(y.target,x))
				self.env.append_unique('INC_PATHS',node)
	for x in uselib:
		for v in self.p_flag_vars:
			val=self.env[v+'_'+x]
			if val:self.env.append_value(v,val)
def apply_objdeps(self):
	seen=[]
	names=self.to_list(self.add_objects)
	while names:
		x=names[0]
		if x in seen:
			names=names[1:]
			continue
		y=self.name_to_obj(x)
		if not y:
			raise Utils.WafError("object '%s' was not found in uselib_local (required by add_objects '%s')"%(x,self.name))
		if y.add_objects:
			added=0
			lst=y.to_list(y.add_objects)
			lst.reverse()
			for u in lst:
				if u in seen:continue
				added=1
				names=[u]+names
			if added:continue
		y.post()
		seen.append(x)
		self.link_task.inputs+=y.out_nodes
def apply_obj_vars(self):
	v=self.env
	lib_st=v['LIB_ST']
	staticlib_st=v['STATICLIB_ST']
	libpath_st=v['LIBPATH_ST']
	staticlibpath_st=v['STATICLIBPATH_ST']
	rpath_st=v['RPATH_ST']
	app=v.append_unique
	if v['FULLSTATIC']:
		v.append_value('LINKFLAGS',v['FULLSTATIC_MARKER'])
	for i in v['RPATH']:
		if i and rpath_st:
			app('LINKFLAGS',rpath_st%i)
	for i in v['LIBPATH']:
		app('LINKFLAGS',libpath_st%i)
		app('LINKFLAGS',staticlibpath_st%i)
	if v['STATICLIB']:
		v.append_value('LINKFLAGS',v['STATICLIB_MARKER'])
		k=[(staticlib_st%i)for i in v['STATICLIB']]
		app('LINKFLAGS',k)
	if not v['FULLSTATIC']:
		if v['STATICLIB']or v['LIB']:
			v.append_value('LINKFLAGS',v['SHLIB_MARKER'])
	app('LINKFLAGS',[lib_st%i for i in v['LIB']])
def apply_vnum(self):
	if sys.platform!='darwin'and sys.platform!='win32':
		try:
			nums=self.vnum.split('.')
		except AttributeError:
			pass
		else:
			try:name3=self.soname
			except AttributeError:name3=self.link_task.outputs[0].name+'.'+nums[0]
			self.env.append_value('LINKFLAGS','-Wl,-h,'+name3)
def process_obj_files(self):
	if not hasattr(self,'obj_files'):return
	for x in self.obj_files:
		node=self.path.find_resource(x)
		self.link_task.inputs.append(node)
def add_obj_file(self,file):
	if not hasattr(self,'obj_files'):self.obj_files=[]
	if not'process_obj_files'in self.meths:self.meths.append('process_obj_files')
	self.obj_files.append(file)
def make_objects_available(self):
	self.out_nodes=[]
	app=self.out_nodes.append
	for t in self.compiled_tasks:app(t.outputs[0])
c_attrs={'cxxflag':'CXXFLAGS','cflag':'CCFLAGS','ccflag':'CCFLAGS','linkflag':'LINKFLAGS','ldflag':'LINKFLAGS','lib':'LIB','libpath':'LIBPATH','staticlib':'STATICLIB','staticlibpath':'STATICLIBPATH','rpath':'RPATH',}
def add_extra_flags(self):
	for x in self.__dict__.keys():
		y=x.lower()
		if y[-1]=='s':
			y=y[:-1]
		if c_attrs.get(y,None):
			self.env.append_unique(c_attrs[y],getattr(self,x))

feature('cc','cxx')(default_cc)
before('init_cc','init_cxx')(default_cc)
feature('cprogram','dprogram','cstaticlib','dstaticlib','cshlib','dshlib')(apply_verif)
feature('cprogram','dprogram')(vars_target_cprogram)
before('apply_core')(vars_target_cprogram)
feature('cstaticlib','dstaticlib','cshlib','dshlib')(vars_target_cstaticlib)
before('apply_core')(vars_target_cstaticlib)
feature('cprogram','dprogram','cstaticlib','dstaticlib','cshlib','dshlib')(install_target_cstaticlib)
after('apply_objdeps','apply_link')(install_target_cstaticlib)
feature('cshlib','dshlib')(install_target_cshlib)
after('apply_objdeps','apply_link')(install_target_cshlib)
feature('cc','cxx')(apply_incpaths)
after('apply_type_vars')(apply_incpaths)
feature('cc','cxx')(apply_type_vars)
taskgen(apply_link)
feature('cprogram','cshlib','cstaticlib')(apply_link)
after('apply_core')(apply_link)
feature('cc','cxx')(apply_lib_vars)
after('apply_vnum')(apply_lib_vars)
feature('objects')(apply_objdeps)
after('apply_obj_vars','apply_vnum')(apply_objdeps)
feature('cprogram','cshlib','cstaticlib')(apply_obj_vars)
after('apply_lib_vars')(apply_obj_vars)
feature('cprogram','cshlib','cstaticlib')(apply_vnum)
after('apply_link')(apply_vnum)
taskgen(process_obj_files)
after('apply_link')(process_obj_files)
taskgen(add_obj_file)
feature('objects')(make_objects_available)
after('apply_core')(make_objects_available)
taskgen(add_extra_flags)
feature('cc','cxx')(add_extra_flags)
before('init_cxx','init_cc')(add_extra_flags)
