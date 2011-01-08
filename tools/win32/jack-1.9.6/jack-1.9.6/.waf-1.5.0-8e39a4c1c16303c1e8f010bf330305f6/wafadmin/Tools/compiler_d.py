#! /usr/bin/env python
# encoding: utf-8

import os,sys,imp,types
import Utils,Configure,Options
def detect(conf):
	if getattr(Options.options,'check_dmd_first',None):
		test_for_compiler=['dmd','gdc']
	else:
		test_for_compiler=['gdc','dmd']
	for d_compiler in test_for_compiler:
		conf.check_tool(d_compiler)
		if conf.env['D_COMPILER']:
			conf.check_message("%s"%d_compiler,'',True)
			conf.env["COMPILER_D"]=d_compiler
			return
		conf.check_message("%s"%d_compiler,'',False)
def set_options(opt):
	d_compiler_opts=opt.add_option_group("D Compiler Options")
	d_compiler_opts.add_option('--check-dmd-first',action="store_true",help='checks for the gdc compiler before dmd (default is the other way round)',dest='check_dmd_first',default=False)
	for d_compiler in['gdc','dmd']:
		opt.tool_options('%s'%d_compiler,option_group=d_compiler_opts)

