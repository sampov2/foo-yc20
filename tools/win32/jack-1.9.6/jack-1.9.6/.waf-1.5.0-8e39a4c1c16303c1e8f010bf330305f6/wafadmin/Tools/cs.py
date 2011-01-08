#! /usr/bin/env python
# encoding: utf-8

import TaskGen,Utils,Task
from Logs import error
from TaskGen import before,after,taskgen,feature
flag_vars=['FLAGS','ASSEMBLIES']
def init_cs(self):
	Utils.def_attrs(self,flags='',assemblies='',resources='',uselib='')
def apply_uselib_cs(self):
	if not self.uselib:
		return
	global flag_vars
	for var in self.to_list(self.uselib):
		for v in self.flag_vars:
			val=self.env[v+'_'+var]
			if val:self.env.append_value(v,val)
def apply_cs(self):
	assemblies_flags=[]
	for i in self.to_list(self.assemblies)+self.env['ASSEMBLIES']:
		assemblies_flags+='/r:'+i
	self.env['_ASSEMBLIES']+=assemblies_flags
	for i in self.to_list(self.resources):
		self.env['_RESOURCES'].append('/resource:'+i)
	self.env['_FLAGS']+=self.to_list(self.flags)+self.env['FLAGS']
	curnode=self.path
	nodes=[]
	for i in self.to_list(self.source):
		nodes.append(curnode.find_resource(i))
	task=self.create_task('mcs')
	task.inputs=nodes
	task.set_outputs(self.path.find_or_declare(self.target))
Task.simple_task_type('mcs','${MCS} ${SRC} /out:${TGT} ${_FLAGS} ${_ASSEMBLIES} ${_RESOURCES}',color='YELLOW')
def detect(conf):
	mcs=conf.find_program('mcs',var='MCS')
	if not mcs:mcs=conf.find_program('gmcs',var='MCS')

taskgen(init_cs)
feature('cs')(init_cs)
taskgen(apply_uselib_cs)
feature('cs')(apply_uselib_cs)
after('init_cs')(apply_uselib_cs)
taskgen(apply_cs)
feature('cs')(apply_cs)
after('apply_uselib_cs')(apply_cs)
