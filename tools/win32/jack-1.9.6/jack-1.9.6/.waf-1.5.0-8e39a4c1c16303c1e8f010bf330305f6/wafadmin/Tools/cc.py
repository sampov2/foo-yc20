#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import TaskGen,Build,Utils,Task
from Logs import debug
import ccroot
from TaskGen import feature,before,extension,after
g_cc_flag_vars=['CCDEPS','FRAMEWORK','FRAMEWORKPATH','STATICLIB','LIB','LIBPATH','LINKFLAGS','RPATH','CCFLAGS','CPPPATH','CPPFLAGS','CCDEFINES']
EXT_CC=['.c']
TaskGen.bind_feature('cc',['apply_core'])
g_cc_type_vars=['CCFLAGS','LINKFLAGS']
class cc_taskgen(ccroot.ccroot_abstract):
	pass
def init_cc(self):
	self.p_flag_vars=set(self.p_flag_vars).union(g_cc_flag_vars)
	self.p_type_vars=set(self.p_type_vars).union(g_cc_type_vars)
	if not self.env['CC_NAME']:
		raise Utils.WafError("At least one compiler (gcc, ..) must be selected")
def apply_obj_vars_cc(self):
	env=self.env
	app=env.append_unique
	cpppath_st=env['CPPPATH_ST']
	for i in env['INC_PATHS']:
		app('_CCINCFLAGS',cpppath_st%i.bldpath(env))
		app('_CCINCFLAGS',cpppath_st%i.srcpath(env))
	for i in env['CPPPATH']:
		app('_CCINCFLAGS',cpppath_st%i)
	app('_CCINCFLAGS',cpppath_st%'.')
	app('_CCINCFLAGS',cpppath_st%env.variant())
	tmpnode=self.path
	app('_CCINCFLAGS',cpppath_st%tmpnode.bldpath(env))
	app('_CCINCFLAGS',cpppath_st%tmpnode.srcpath(env))
def apply_defines_cc(self):
	tree=Build.bld
	self.defines=getattr(self,'defines',[])
	lst=self.to_list(self.defines)+self.to_list(self.env['CCDEFINES'])
	milst=[]
	for defi in lst:
		if not defi in milst:
			milst.append(defi)
	libs=self.to_list(self.uselib)
	for l in libs:
		val=self.env['CCDEFINES_'+l]
		if val:milst+=val
	self.env['DEFLINES']=["%s %s"%(x[0],Utils.trimquotes('='.join(x[1:])))for x in[y.split('=')for y in milst]]
	y=self.env['CCDEFINES_ST']
	self.env['_CCDEFFLAGS']=[y%x for x in milst]
def c_hook(self,node):
	task=self.create_task('cc')
	try:obj_ext=self.obj_ext
	except AttributeError:obj_ext='_%d.o'%self.idx
	task.defines=self.scanner_defines
	task.inputs=[node]
	task.outputs=[node.change_ext(obj_ext)]
	self.compiled_tasks.append(task)
cc_str='${CC} ${CCFLAGS} ${CPPFLAGS} ${_CCINCFLAGS} ${_CCDEFFLAGS} ${CC_SRC_F}${SRC} ${CC_TGT_F}${TGT}'
link_str='${LINK_CC} ${CCLNK_SRC_F}${SRC} ${CCLNK_TGT_F}${TGT} ${LINKFLAGS} ${_LIBDIRFLAGS} ${_LIBFLAGS}'
cls=Task.simple_task_type('cc',cc_str,'GREEN',ext_out='.o',ext_in='.c')
cls.scan=ccroot.scan
cls.vars.append('CCDEPS')
cls=Task.simple_task_type('cc_link',link_str,color='YELLOW',ext_in='.o')
cls.maxjobs=1
TaskGen.declare_order('apply_incpaths','apply_defines_cc','apply_core','apply_lib_vars','apply_obj_vars_cc','apply_obj_vars')

feature('cc')(init_cc)
before('apply_type_vars')(init_cc)
after('default_cc')(init_cc)
feature('cc')(apply_obj_vars_cc)
feature('cc')(apply_defines_cc)
extension(EXT_CC)(c_hook)
