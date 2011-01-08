#! /usr/bin/env python
# encoding: utf-8

import os,sys
import Configure,Options,Utils
import ccroot,ar
from Configure import conftest
def find_icc(conf):
	if sys.platform=='win32':
		conf.find_icc_win32()
	else:
		conf.find_icc_other()
def find_icc_win32(conf):
	v=conf.env
	cc=None
	if v['CC']:cc=v['CC']
	elif'CC'in os.environ:cc=os.environ['CC']
	if not cc:cc=conf.find_program('ICL',var='CC')
	if not cc:conf.fatal('Intel C Compiler (icl.exe) was not found')
	v['CC']=Utils.quote_whitespace(cc)
	v['CC_NAME']='icc'
	v['CXX']=v['CC']
def find_icc_other(conf):
	v=conf.env
	cc=None
	if v['CC']:cc=v['CC']
	elif'CC'in os.environ:cc=os.environ['CC']
	if not cc:cc=conf.find_program('icc',var='CC')
	if not cc:conf.fatal('Intel C Compiler (icc) was not found')
	try:
		if Utils.cmd_output('%s --version'%cc).find('icc')<0:
			conf.fatal('icc was not found, see the result of icc --version')
	except ValueError:
		conf.fatal('icc --version could not be executed')
	v['CC']=cc
	v['CC_NAME']='icc'
	ccroot.get_cc_version(conf,cc,'CC_VERSION')
def icc_modifier_win32(conf):
	if sys.platform!='win32':return
	v=conf.env
	try:
		v['CC_NAME']='icc'
		v['CPPFLAGS'].remove('/errorReport:prompt')
	except ValueError:
		pass
if sys.platform=='win32':
	detect='''
find_icc
find_msvc
msvc_common_flags
icc_modifier_win32
cc_load_tools
cc_add_flags
'''
elif sys.platform=='cygwin':
	conf.fatal("ICC module is not supported for cygwin. Try under native Win32")
else:
	detect='''
find_icc
find_ar
gcc_common_flags
gcc_modifier_darwin
cc_load_tools
cc_add_flags
'''

conftest(find_icc)
conftest(find_icc_win32)
conftest(find_icc_other)
conftest(icc_modifier_win32)
