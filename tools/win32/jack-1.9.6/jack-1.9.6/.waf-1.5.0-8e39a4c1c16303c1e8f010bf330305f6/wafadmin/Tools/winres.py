#! /usr/bin/env python
# encoding: utf-8

import os,sys,re
import TaskGen,Task
from Utils import quote_whitespace
from TaskGen import extension
EXT_WINRC=['.rc']
winrc_str='${WINRC} ${_CPPDEFFLAGS} ${_CXXDEFFLAGS} ${_CCDEFFLAGS} ${WINRCFLAGS} ${_CPPINCFLAGS} ${_CXXINCFLAGS} ${_CCINCFLAGS} ${WINRC_TGT_F}${TGT} ${WINRC_SRC_F}${SRC}'
def rc_file(self,node):
	obj_ext='.rc.o'
	if self.env['WINRC_TGT_F']=='/fo ':obj_ext='.res'
	rctask=self.create_task('winrc')
	rctask.set_inputs(node)
	rctask.set_outputs(node.change_ext(obj_ext))
	self.compiled_tasks.append(rctask)
Task.simple_task_type('winrc',winrc_str,color='BLUE',before='cc cxx')
def detect(conf):
	v=conf.env
	cc=os.path.basename(''.join(v['CC']).lower())
	cxx=os.path.basename(''.join(v['CXX']).lower())
	cc=re.sub('"','',cc)
	cxx=re.sub('"','',cxx)
	if cc in['gcc','cc','g++','c++']:
		winrc=conf.find_program('windres',var='WINRC')
		v['WINRC_TGT_F']='-o '
		v['WINRC_SRC_F']='-i '
	elif cc.startswith('cl.exe')or cxx.startswith('cl.exe'):
		winrc=conf.find_program('RC',var='WINRC')
		v['WINRC_TGT_F']='/fo '
		v['WINRC_SRC_F']=' '
	else:
		return 0
	if not winrc:
		conf.fatal('winrc was not found!!')
	else:
		v['WINRC']=quote_whitespace(winrc)
	v['WINRCFLAGS']=''

extension(EXT_WINRC)(rc_file)
