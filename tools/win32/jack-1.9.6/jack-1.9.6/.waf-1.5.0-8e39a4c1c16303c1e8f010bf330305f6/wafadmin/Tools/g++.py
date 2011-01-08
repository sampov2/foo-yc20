#! /usr/bin/env python
# encoding: utf-8

import os,optparse,sys,re
import Configure,Options,Utils
import ccroot,ar
from Configure import conftest
def find_gxx(conf):
	v=conf.env
	cxx=None
	if v['CXX']:cxx=v['CXX']
	elif'CXX'in os.environ:cxx=os.environ['CXX']
	if not cxx:cxx=conf.find_program('g++',var='CXX')
	if not cxx:cxx=conf.find_program('c++',var='CXX')
	if not cxx:conf.fatal('g++ was not found')
	try:
		if Utils.cmd_output('%s --version'%cxx).find('g++')<0:
			conf.fatal('g++ was not found, see the result of g++ --version')
	except ValueError:
		conf.fatal('g++ --version could not be executed')
	v['CXX']=cxx
	v['CXX_NAME']='gcc'
	ccroot.get_cc_version(conf,cxx,'CXX_VERSION')
def gxx_common_flags(conf):
	v=conf.env
	v['CXX_SRC_F']=''
	v['CXX_TGT_F']='-c -o '
	v['CPPPATH_ST']='-I%s'
	if not v['LINK_CXX']:v['LINK_CXX']=v['CXX']
	v['CXXLNK_SRC_F']=''
	v['CXXLNK_TGT_F']='-o '
	v['LIB_ST']='-l%s'
	v['LIBPATH_ST']='-L%s'
	v['STATICLIB_ST']='-l%s'
	v['STATICLIBPATH_ST']='-L%s'
	v['RPATH_ST']='-Wl,-rpath %s'
	v['CXXDEFINES_ST']='-D%s'
	v['SHLIB_MARKER']='-Wl,-Bdynamic'
	v['STATICLIB_MARKER']='-Wl,-Bstatic'
	v['FULLSTATIC_MARKER']='-static'
	v['program_PATTERN']='%s'
	v['shlib_CXXFLAGS']=['-fPIC','-DPIC']
	v['shlib_LINKFLAGS']=['-shared']
	v['shlib_PATTERN']='lib%s.so'
	v['staticlib_LINKFLAGS']=['-Wl,-Bstatic']
	v['staticlib_PATTERN']='lib%s.a'
	v['MACBUNDLE_LINKFLAGS']=['-bundle','-undefined dynamic_lookup']
	v['MACBUNDLE_CCFLAGS']=['-fPIC']
	v['MACBUNDLE_PATTERN']='%s.bundle'
def gxx_modifier_win32(conf):
	if sys.platform!='win32':return
	v=conf.env
	v['program_PATTERN']='%s.exe'
	v['shlib_PATTERN']='lib%s.dll'
	v['shlib_CXXFLAGS']=['']
	v['staticlib_LINKFLAGS']=['']
def gxx_modifier_cygwin(conf):
	if sys.platform!='cygwin':return
	v=conf.env
	v['program_PATTERN']='%s.exe'
	v['shlib_PATTERN']='lib%s.dll'
	v['shlib_CXXFLAGS']=['']
	v['staticlib_LINKFLAGS']=['']
def gxx_modifier_darwin(conf):
	if sys.platform!='darwin':return
	v=conf.env
	v['shlib_CXXFLAGS']=['-fPIC','-compatibility_version 1','-current_version 1']
	v['shlib_LINKFLAGS']=['-dynamiclib']
	v['shlib_PATTERN']='lib%s.dylib'
	v['staticlib_LINKFLAGS']=['']
	v['SHLIB_MARKER']=''
	v['STATICLIB_MARKER']=''
def gxx_modifier_aix5(conf):
	if sys.platform!='aix5':return
	v=conf.env
	v['program_LINKFLAGS']=['-Wl,-brtl']
	v['shlib_LINKFLAGS']=['-shared','-Wl,-brtl,-bexpfull']
	v['SHLIB_MARKER']=''
def gxx_modifier_debug(conf):
	v=conf.env
	f='cxx'
	if conf.check_flags('-O2 -DNDEBUG',kind=f):
		v['CXXFLAGS_OPTIMIZED']=['-O2','-DNDEBUG']
		v['CXXFLAGS_RELEASE']=['-O2','-DNDEBUG']
	if conf.check_flags('-g -DDEBUG',kind=f):
		v['CXXFLAGS_DEBUG']=['-g','-DDEBUG']
		v['LINKFLAGS_DEBUG']=['-g']
	if conf.check_flags('-g3 -O0 -DDEBUG',kind=f):
		v['CXXFLAGS_ULTRADEBUG']=['-g3','-O0','-DDEBUG']
		v['LINKFLAGS_ULTRADEBUG']=['-g']
	if conf.check_flags('-Wall',kind=f):
		for x in'OPTIMIZED RELEASE DEBUG ULTRADEBUG'.split():v.append_unique('CXXFLAGS_'+x,'-Wall')
	try:
		debug_level=Options.options.debug_level.upper()
	except AttributeError:
		debug_level=ccroot.DEBUG_LEVELS.CUSTOM
	v.append_value('CXXFLAGS',v['CXXFLAGS_'+debug_level])
	v.append_value('LINKFLAGS',v['LINKFLAGS_'+debug_level])
detect='''
find_gxx
find_cpp
find_ar
gxx_common_flags
gxx_modifier_win32
gxx_modifier_cygwin
gxx_modifier_darwin
gxx_modifier_aix5
cxx_load_tools
cxx_add_flags
'''

conftest(find_gxx)
conftest(gxx_common_flags)
conftest(gxx_modifier_win32)
conftest(gxx_modifier_cygwin)
conftest(gxx_modifier_darwin)
conftest(gxx_modifier_aix5)
conftest(gxx_modifier_debug)
