#! /usr/bin/env python
# encoding: utf-8

import TaskGen
def decide_ext(self,node):
	c_ext='.tab.c'
	if node.name.endswith('.yc'):c_ext='.tab.cc'
	if'-d'in self.env['BISONFLAGS']:
		return[c_ext,c_ext.replace('c','h')]
	else:
		return c_ext
TaskGen.declare_chain(name='bison',action='cd ${SRC[0].bld_dir(env)} && ${BISON} ${BISONFLAGS} ${SRC[0].abspath()} -o ${TGT[0].name}',ext_in='.y .yc .yy',decider=decide_ext,before='cc cxx',)
def detect(conf):
	bison=conf.find_program('bison',var='BISON')
	if not bison:conf.fatal("bison was not found")
	v=conf.env
	v['BISONFLAGS']='-d'

