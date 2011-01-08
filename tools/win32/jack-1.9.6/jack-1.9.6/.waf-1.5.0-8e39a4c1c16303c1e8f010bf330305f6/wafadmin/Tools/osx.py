#! /usr/bin/env python
# encoding: utf-8

import os,shutil,sys
import TaskGen,Task,Build,Options
from TaskGen import taskgen,feature,after,before
from Logs import error,debug
def create_task_macapp(self):
	if'cprogram'in self.features and self.link_task:
		apptask=self.create_task('macapp',self.env)
		apptask.set_inputs(self.link_task.outputs)
		apptask.set_outputs(self.link_task.outputs[0].change_ext('.app'))
		self.apptask=apptask
def apply_link_osx(self):
	if self.env['MACAPP']or getattr(self,'mac_app',False):
		self.create_task_macapp()
		name=self.link_task.outputs[0].name
		if self.vnum:name=name.replace('.dylib','.%s.dylib'%self.vnum)
		path=os.path.join(self.env['PREFIX'],lib,name)
		path='-install_name %s'%path
		self.env.append_value('LINKFLAGS',path)
def apply_bundle(self):
	if not'shlib'in self.features:return
	if self.env['MACBUNDLE']or getattr(self,'mac_bundle',False):
		self.env['shlib_PATTERN']='%s.bundle'
		uselib=self.to_list(self.uselib)
		if not'MACBUNDLE'in uselib:uselib.append('MACBUNDLE')
def apply_bundle_remove_dynamiclib(self):
	if not'shlib'in self.features:return
	if self.env['MACBUNDLE']or getattr(self,'mac_bundle',False):
		self.env["LINKFLAGS"].remove("-dynamiclib")
		self.env.append_value("LINKFLAGS","-bundle")
app_dirs=['Contents',os.path.join('Contents','MacOS'),os.path.join('Contents','Resources')]
app_info='''
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist SYSTEM "file://localhost/System/Library/DTDs/PropertyList.dtd">
<plist version="0.9">
<dict>
	<key>CFBundlePackageType</key>
	<string>APPL</string>
	<key>CFBundleGetInfoString</key>
	<string>Created by Waf</string>
	<key>CFBundleSignature</key>
	<string>????</string>
	<key>NOTE</key>
	<string>THIS IS A GENERATED FILE, DO NOT MODIFY</string>
	<key>CFBundleExecutable</key>
	<string>%s</string>
</dict>
</plist>
'''
def app_build(task):
	global app_dirs
	env=task.env
	i=0
	for p in task.outputs:
		srcfile=p.srcpath(env)
		debug('osx: creating directories')
		try:
			os.mkdir(srcfile)
			[os.makedirs(os.path.join(srcfile,d))for d in app_dirs]
		except(OSError,IOError):
			pass
		srcprg=task.inputs[i].srcpath(env)
		dst=os.path.join(srcfile,'Contents','MacOS')
		debug('osx: copy %s to %s'%(srcprg,dst))
		shutil.copy(srcprg,dst)
		debug('osx: generate Info.plist')
		f=file(os.path.join(srcfile,"Contents","Info.plist"),"w")
		f.write(app_info%os.path.basename(srcprg))
		f.close()
		i+=1
	return 0
def install_shlib(task):
	nums=task.vnum.split('.')
	path=self.install_path
	libname=task.outputs[0].name
	name3=libname.replace('.dylib','.%s.dylib'%task.vnum)
	name2=libname.replace('.dylib','.%s.dylib'%nums[0])
	name1=libname
	filename=task.outputs[0].abspath(task.env)
	bld=Build.bld
	bld.install_as(path+name3,filename,env=task.env)
	bld.symlink_as(path+name2,name3)
	bld.symlink_as(path+name1,name3)
def install_target_osx_cshlib(self):
	if not Options.is_install:return
	if getattr(self,'vnum','')and sys.platform!='win32':
		self.link_task.install=install_shlib
Task.task_type_from_func('macapp',vars=[],func=app_build,after="cxx_link cc_link ar_link_static")

taskgen(create_task_macapp)
taskgen(apply_link_osx)
after('apply_link')(apply_link_osx)
feature('cc','cxx')(apply_link_osx)
taskgen(apply_bundle)
before('apply_link')(apply_bundle)
before('apply_lib_vars')(apply_bundle)
feature('cc','cxx')(apply_bundle)
taskgen(apply_bundle_remove_dynamiclib)
after('apply_link')(apply_bundle_remove_dynamiclib)
feature('cc','cxx')(apply_bundle_remove_dynamiclib)
taskgen(install_target_osx_cshlib)
feature('osx')(install_target_osx_cshlib)
after('install_target_cshlib')(install_target_osx_cshlib)
