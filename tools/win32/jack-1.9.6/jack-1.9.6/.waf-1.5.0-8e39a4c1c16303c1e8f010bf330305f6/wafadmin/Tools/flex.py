#! /usr/bin/env python
# encoding: utf-8

import TaskGen
def decide_ext(self,node):
	if'cxx'in self.features:return'.lex.cc'
	else:return'.lex.c'
TaskGen.declare_chain(name='flex',action='${FLEX} -o${TGT} ${FLEXFLAGS} ${SRC}',ext_in='.l',decider=decide_ext,before='cc cxx',)
def detect(conf):
	flex=conf.find_program('flex',var='FLEX')
	if not flex:conf.fatal("flex was not found")
	v=conf.env
	v['FLEXFLAGS']=''

