#! /usr/bin/env python
# encoding: utf-8

import os
import TaskGen,Task
from TaskGen import taskgen,before,extension
nasm_str='${NASM} ${NASM_FLAGS} ${NASM_INCLUDES} ${SRC} -o ${TGT}'
EXT_NASM=['.s','.S','.asm','.ASM','.spp','.SPP']
def apply_nasm_vars(self):
	if hasattr(self,'nasm_flags'):
		for flag in self.to_list(self.nasm_flags):
			self.env.append_value('NASM_FLAGS',flag)
	if hasattr(self,'includes'):
		for inc in self.to_list(self.includes):
			self.env.append_value('NASM_INCLUDES','-I %s'%inc.srcpath(self.env))
def nasm_file(self,node):
	o_node=node.change_ext('.o')
	task=self.create_task('nasm')
	task.set_inputs(node)
	task.set_outputs(o_node)
	self.compiled_tasks.append(task)
	self.meths.append('apply_nasm_vars')
Task.simple_task_type('nasm',nasm_str,color='BLUE',ext_out='.o')
def detect(conf):
	nasm=conf.find_program('nasm',var='NASM')
	if not nasm:nasm=conf.find_program('yasm',var='NASM')
	if not nasm:conf.fatal('could not find nasm (or yasm), install it or set PATH env var')

taskgen(apply_nasm_vars)
before('apply_link')(apply_nasm_vars)
extension(EXT_NASM)(nasm_file)
