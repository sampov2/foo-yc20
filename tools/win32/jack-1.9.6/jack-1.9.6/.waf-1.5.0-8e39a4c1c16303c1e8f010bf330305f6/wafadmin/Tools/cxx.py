#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import TaskGen,Task,Utils
from Logs import debug
import ccroot
from TaskGen import feature,before,extension,after
g_cxx_flag_vars=['CXXDEPS','FRAMEWORK','FRAMEWORKPATH','STATICLIB','LIB','LIBPATH','LINKFLAGS','RPATH','CXXFLAGS','CCFLAGS','CPPPATH','CPPFLAGS','CXXDEFINES']
EXT_CXX=['.cpp','.cc','.cxx','.C','.c++']
TaskGen.bind_feature('cxx',['apply_core'])
g_cxx_type_vars=['CXXFLAGS','LINKFLAGS']
class cxx_taskgen(ccroot.ccroot_abstract):
	pass
def init_cxx(self):
	if not'cc'in self.features:
		self.mappings['.c']=TaskGen.task_gen.mappings['.cxx']
	self.p_flag_vars=set(self.p_flag_vars).union(g_cxx_flag_vars)
	self.p_type_vars=set(self.p_type_vars).union(g_cxx_type_vars)
	if not self.env['CXX_NAME']:
		raise Utils.WafError("At least one compiler (g++, ..) must be selected")
def apply_obj_vars_cxx(self):
	env=self.env
	app=env.append_unique
	cxxpath_st=env['CPPPATH_ST']
	for i in env['INC_PATHS']:
		app('_CXXINCFLAGS',cxxpath_st%i.bldpath(env))
		app('_CXXINCFLAGS',cxxpath_st%i.srcpath(env))
	for i in env['CPPPATH']:
		app('_CXXINCFLAGS',cxxpath_st%i)
	app('_CXXINCFLAGS',cxxpath_st%'.')
	app('_CXXINCFLAGS',cxxpath_st%self.env.variant())
	tmpnode=self.path
	app('_CXXINCFLAGS',cxxpath_st%tmpnode.bldpath(env))
	app('_CXXINCFLAGS',cxxpath_st%tmpnode.srcpath(env))
def apply_defines_cxx(self):
	self.defines=getattr(self,'defines',[])
	lst=self.to_list(self.defines)+self.to_list(self.env['CXXDEFINES'])
	milst=[]
	for defi in lst:
		if not defi in milst:
			milst.append(defi)
	libs=self.to_list(self.uselib)
	for l in libs:
		val=self.env['CXXDEFINES_'+l]
		if val:milst+=self.to_list(val)
	self.env['DEFLINES']=["%s %s"%(x[0],Utils.trimquotes('='.join(x[1:])))for x in[y.split('=')for y in milst]]
	y=self.env['CXXDEFINES_ST']
	self.env['_CXXDEFFLAGS']=[y%x for x in milst]
def cxx_hook(self,node):
	task=self.create_task('cxx')
	try:obj_ext=self.obj_ext
	except AttributeError:obj_ext='_%d.o'%self.idx
	task.defines=self.scanner_defines
	task.inputs=[node]
	task.outputs=[node.change_ext(obj_ext)]
	self.compiled_tasks.append(task)
cxx_str='${CXX} ${CXXFLAGS} ${CPPFLAGS} ${_CXXINCFLAGS} ${_CXXDEFFLAGS} ${CXX_SRC_F}${SRC} ${CXX_TGT_F}${TGT}'
link_str='${LINK_CXX} ${CXXLNK_SRC_F}${SRC} ${CXXLNK_TGT_F}${TGT} ${LINKFLAGS} ${_LIBDIRFLAGS} ${_LIBFLAGS}'
cls=Task.simple_task_type('cxx',cxx_str,color='GREEN',ext_out='.o',ext_in='.cxx')
cls.scan=ccroot.scan
cls.vars.append('CXXDEPS')
cls=Task.simple_task_type('cxx_link',link_str,color='YELLOW',ext_in='.o')
cls.maxjobs=1
TaskGen.declare_order('apply_incpaths','apply_defines_cxx','apply_core','apply_lib_vars','apply_obj_vars_cxx','apply_obj_vars')

feature('cxx')(init_cxx)
before('apply_type_vars')(init_cxx)
after('default_cc')(init_cxx)
feature('cxx')(apply_obj_vars_cxx)
feature('cxx')(apply_defines_cxx)
extension(EXT_CXX)(cxx_hook)
