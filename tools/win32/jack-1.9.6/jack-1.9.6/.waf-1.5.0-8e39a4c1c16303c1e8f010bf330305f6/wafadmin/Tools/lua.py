#! /usr/bin/env python
# encoding: utf-8

import TaskGen
from TaskGen import taskgen,feature
TaskGen.declare_chain(name='luac',action='${LUAC} -s -o ${TGT} ${SRC}',ext_in='.lua',ext_out='.luac',reentrant=0,install='LUADIR',)
def init_lua(self):
	self.default_chmod=0755
def detect(conf):
	luac=conf.find_program('luac',var='LUAC')
	if not luac:conf.fatal('cannot find the compiler "luac"')

taskgen(init_lua)
feature('lua')(init_lua)
