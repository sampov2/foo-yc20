#! /usr/bin/env python
# encoding: utf-8

import os,sys
import Configure,Options,Utils
import ccroot,ar
from Configure import conftest
def find_gcc(conf):
	v=conf.env
	cc=None
	if v['CC']:cc=v['CC']
	elif'CC'in os.environ:cc=os.environ['CC']
	if not cc:cc=conf.find_program('gcc',var='CC')
	if not cc:cc=conf.find_program('cc',var='CC')
	if not cc:conf.fatal('gcc was not found')
	try:
		if Utils.cmd_output('%s --version'%cc).find('gcc')<0:
			conf.fatal('gcc was not found, see the result of gcc --version')
	except ValueError:
		conf.fatal('gcc --version could not be executed')
	v['CC']=cc
	v['CC_NAME']='gcc'
	ccroot.get_cc_version(conf,cc,'CC_VERSION')
def gcc_common_flags(conf):
	v=conf.env
	v['CC_SRC_F']=''
	v['CC_TGT_F']='-c -o '
	v['CPPPATH_ST']='-I%s'
	if not v['LINK_CC']:v['LINK_CC']=v['CC']
	v['CCLNK_SRC_F']=''
	v['CCLNK_TGT_F']='-o '
	v['LIB_ST']='-l%s'
	v['LIBPATH_ST']='-L%s'
	v['STATICLIB_ST']='-l%s'
	v['STATICLIBPATH_ST']='-L%s'
	v['RPATH_ST']='-Wl,-rpath %s'
	v['CCDEFINES_ST']='-D%s'
	v['SHLIB_MARKER']='-Wl,-Bdynamic'
	v['STATICLIB_MARKER']='-Wl,-Bstatic'
	v['program_PATTERN']='%s'
	v['shlib_CCFLAGS']=['-fPIC','-DPIC']
	v['shlib_LINKFLAGS']=['-shared']
	v['shlib_PATTERN']='lib%s.so'
	v['staticlib_LINKFLAGS']=['-Wl,-Bstatic']
	v['staticlib_PATTERN']='lib%s.a'
	v['MACBUNDLE_LINKFLAGS']=['-bundle','-undefined dynamic_lookup']
	v['MACBUNDLE_CCFLAGS']=['-fPIC']
	v['MACBUNDLE_PATTERN']='%s.bundle'
def gcc_modifier_win32(conf):
	v=conf.env
	if sys.platform!='win32':return
	v['program_PATTERN']='%s.exe'
	v['shlib_PATTERN']='lib%s.dll'
	v['shlib_CCFLAGS']=[]
	v['staticlib_LINKFLAGS']=[]
def gcc_modifier_cygwin(conf):
	v=conf.env
	if sys.platform!='cygwin':return
	v['program_PATTERN']='%s.exe'
	v['shlib_PATTERN']='lib%s.dll'
	v['shlib_CCFLAGS']=[]
	v['staticlib_LINKFLAGS']=[]
def gcc_modifier_darwin(conf):
	v=conf.env
	if sys.platform!='darwin':return
	v['shlib_CCFLAGS']=['-fPIC','-compatibility_version 1','-current_version 1']
	v['shlib_LINKFLAGS']=['-dynamiclib']
	v['shlib_PATTERN']='lib%s.dylib'
	v['staticlib_LINKFLAGS']=[]
	v['SHLIB_MARKER']=''
	v['STATICLIB_MARKER']=''
def gcc_modifier_aix5(conf):
	v=conf.env
	if sys.platform!='aix5':return
	v['program_LINKFLAGS']=['-Wl,-brtl']
	v['shlib_LINKFLAGS']=['-shared','-Wl,-brtl,-bexpfull']
	v['SHLIB_MARKER']=''
def gcc_modifier_debug(conf):
	v=conf.env
	if conf.check_flags('-O2'):
		v['CCFLAGS_OPTIMIZED']=['-O2']
		v['CCFLAGS_RELEASE']=['-O2']
	if conf.check_flags('-g -DDEBUG'):
		v['CCFLAGS_DEBUG']=['-g','-DDEBUG']
		v['LINKFLAGS_DEBUG']=['-g']
	if conf.check_flags('-g3 -O0 -DDEBUG'):
		v['CCFLAGS_ULTRADEBUG']=['-g3','-O0','-DDEBUG']
		v['LINKFLAGS_ULTRADEBUG']=['-g']
	if conf.check_flags('-Wall'):
		for x in'OPTIMIZED RELEASE DEBUG ULTRADEBUG'.split():v.append_unique('CCFLAGS_'+x,'-Wall')
	try:
		debug_level=Options.options.debug_level.upper()
	except AttributeError:
		debug_level=ccroot.DEBUG_LEVELS.CUSTOM
	v.append_value('CCFLAGS',v['CCFLAGS_'+debug_level])
	v.append_value('LINKFLAGS',v['LINKFLAGS_'+debug_level])
detect='''
find_gcc
find_cpp
find_ar
gcc_common_flags
gcc_modifier_win32
gcc_modifier_cygwin
gcc_modifier_darwin
gcc_modifier_aix5
cc_load_tools
cc_add_flags
'''

conftest(find_gcc)
conftest(gcc_common_flags)
conftest(gcc_modifier_win32)
conftest(gcc_modifier_cygwin)
conftest(gcc_modifier_darwin)
conftest(gcc_modifier_aix5)
conftest(gcc_modifier_debug)
