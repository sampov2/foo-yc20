#! /usr/bin/env python
# encoding: utf-8

import os,sys
import Task
from TaskGen import extension,taskgen,after,before
EXT_ASM=['.s','.S','.asm','.ASM','.spp','.SPP']
as_str='${AS} ${ASFLAGS} ${_ASINCFLAGS} ${SRC} -o ${TGT}'
Task.simple_task_type('asm',as_str,'PINK',ext_out='.o')
def asm_hook(self,node):
	task=self.create_task('asm')
	try:obj_ext=self.obj_ext
	except AttributeError:obj_ext='_%d.o'%self.idx
	task.inputs=[node]
	task.outputs=[node.change_ext(obj_ext)]
	self.compiled_tasks.append(task)
	self.meths.append('asm_incflags')
def asm_incflags(self):
	if self.env['ASINCFLAGS']:self.env['_ASINCFLAGS']=self.env['ASINCFLAGS']
	if'cxx'in self.features:self.env['_ASINCFLAGS']=self.env['_CXXINCFLAGS']
	else:self.env['_ASINCFLAGS']=self.env['_CCINCFLAGS']
def detect(conf):
	comp=os.environ.get('AS','')
	if not comp:comp=conf.find_program('as',var='AS')
	if not comp:comp=conf.find_program('gas',var='AS')
	if not comp:comp=conf.env['CC']
	if not comp:return
	v=conf.env
	v['ASFLAGS']=''

extension(EXT_ASM)(asm_hook)
taskgen(asm_incflags)
after('apply_obj_vars_cc')(asm_incflags)
after('apply_obj_vars_cxx')(asm_incflags)
before('apply_link')(asm_incflags)
