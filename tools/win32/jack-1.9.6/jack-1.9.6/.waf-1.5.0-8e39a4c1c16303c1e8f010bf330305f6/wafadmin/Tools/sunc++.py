#! /usr/bin/env python
# encoding: utf-8

import os,optparse
import Utils,Options,Configure
import ccroot,ar
from Configure import conftest
def find_sxx(conf):
	v=conf.env
	cc=None
	if v['CXX']:cc=v['CXX']
	elif'CXX'in os.environ:cc=os.environ['CXX']
	if not cc:cc=conf.find_program('c++',var='CXX')
	if not cc:conf.fatal('sunc++ was not found')
	v['CXX']=cc
	v['CXX_NAME']='sun'
def sxx_common_flags(conf):
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
	v['CXXDEFINES_ST']='-D%s'
	v['SHLIB_MARKER']='-Bdynamic'
	v['STATICLIB_MARKER']='-Bstatic'
	v['program_PATTERN']='%s'
	v['shlib_CXXFLAGS']=['-Kpic','-DPIC']
	v['shlib_LINKFLAGS']=['-G']
	v['shlib_PATTERN']='lib%s.so'
	v['staticlib_LINKFLAGS']=['-Bstatic']
	v['staticlib_PATTERN']='lib%s.a'
def sxx_modifier_debug(conf,kind='cpp'):
	v=conf.env
	v['CXXFLAGS']=['']
	if conf.check_flags('-O2',kind=kind):
		v['CXXFLAGS_OPTIMIZED']=['-O2']
		v['CXXFLAGS_RELEASE']=['-O2']
	if conf.check_flags('-g -DDEBUG',kind=kind):
		v['CXXFLAGS_DEBUG']=['-g','-DDEBUG']
	if conf.check_flags('-g3 -O0 -DDEBUG',kind=kind):
		v['CXXFLAGS_ULTRADEBUG']=['-g3','-O0','-DDEBUG']
	try:
		debug_level=Options.options.debug_level.upper()
	except AttributeError:
		debug_level=ccroot.DEBUG_LEVELS.CUSTOM
	v.append_value('CXXFLAGS',v['CXXFLAGS_'+debug_level])
detect='''
find_sxx
find_cpp
find_ar
sxx_common_flags
cxx_load_tools
cxx_check_features
sxx_modifier_debug
cxx_add_flags
'''

conftest(find_sxx)
conftest(sxx_common_flags)
conftest(sxx_modifier_debug)
