#! /usr/bin/env python
# encoding: utf-8

import os,sys
import Task
from Configure import conftest
ar_str='${AR} ${ARFLAGS} ${TGT} ${SRC} && ${RANLIB} ${RANLIBFLAGS} ${TGT}'
if sys.platform=="win32":
	ar_str='${AR} s${ARFLAGS} ${TGT} ${SRC}'
cls=Task.simple_task_type('ar_link_static',ar_str,color='YELLOW',ext_in='.o')
cls.maxjobs=1
def detect(conf):
	comp=conf.find_program('ar',var='AR')
	if not comp:return
	ranlib=conf.find_program('ranlib',var='RANLIB')
	if not ranlib:return
	v=conf.env
	v['AR']=comp
	v['ARFLAGS']='rc'
	v['RANLIB']=ranlib
	v['RANLIBFLAGS']=''
def find_ar(conf):
	v=conf.env
	conf.check_tool('ar')
	if not v['AR']:conf.fatal('ar is required for static libraries - not found')
def find_cpp(conf):
	v=conf.env
	cpp=None
	if v['CPP']:cpp=v['CPP']
	elif'CPP'in os.environ:cpp=os.environ['CPP']
	if not cpp:cpp=conf.find_program('cpp',var='CPP')
	if not cpp:cpp=v['CC']
	if not cpp:cpp=v['CXX']
	v['CPP']=cpp
def cc_add_flags(conf):
	conf.add_os_flags('CFLAGS','CCFLAGS')
	conf.add_os_flags('CPPFLAGS')
	conf.add_os_flags('LINKFLAGS')
def cxx_add_flags(conf):
	conf.add_os_flags('CXXFLAGS')
	conf.add_os_flags('CPPFLAGS')
	conf.add_os_flags('LINKFLAGS')
def cc_load_tools(conf):
	conf.check_tool('cc')
def cxx_load_tools(conf):
	conf.check_tool('cxx')

conftest(find_ar)
conftest(find_cpp)
conftest(cc_add_flags)
conftest(cxx_add_flags)
conftest(cc_load_tools)
conftest(cxx_load_tools)
