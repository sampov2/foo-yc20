#! /usr/bin/env python
# encoding: utf-8

import sys
import ar
def find_gdc(conf):
	v=conf.env
	d_compiler=None
	if v['D_COMPILER']:
		d_compiler=v['D_COMPILER']
	if not d_compiler:d_compiler=conf.find_program('gdc',var='D_COMPILER')
	if not d_compiler:return 0
	v['D_COMPILER']=d_compiler
def common_flags(conf):
	v=conf.env
	v['DFLAGS']={'gdc':[],'dmd':[]}
	v['D_SRC_F']=''
	v['D_TGT_F']='-c -o '
	v['DPATH_ST']='-I%s'
	v['D_LINKER']=v['D_COMPILER']
	v['DLNK_SRC_F']=''
	v['DLNK_TGT_F']='-o '
	v['DLIB_ST']='-l%s'
	v['DLIBPATH_ST']='-L%s'
	v['DLINKFLAGS']=[]
	v['DFLAGS_OPTIMIZED']=['-O3']
	v['DFLAGS_DEBUG']=['-O0']
	v['DFLAGS_ULTRADEBUG']=['-O0']
	v['D_shlib_DFLAGS']=[]
	v['D_shlib_LINKFLAGS']=['-shared']
	v['DHEADER_ext']='.di'
	v['D_HDR_F']='-fintfc -fintfc-file='
	if sys.platform=="win32":
		v['D_program_PATTERN']='%s.exe'
		v['D_shlib_PATTERN']='lib%s.dll'
		v['D_staticlib_PATTERN']='lib%s.a'
	else:
		v['D_program_PATTERN']='%s'
		v['D_shlib_PATTERN']='lib%s.so'
		v['D_staticlib_PATTERN']='lib%s.a'
def detect(conf):
	v=conf.env
	find_gdc(conf)
	ar.find_ar(conf)
	conf.check_tool('d')
	common_flags(conf)
def set_options(opt):
	pass

