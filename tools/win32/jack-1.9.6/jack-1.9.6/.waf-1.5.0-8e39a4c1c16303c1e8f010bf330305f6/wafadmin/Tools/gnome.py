#! /usr/bin/env python
# encoding: utf-8

import os,re
import TaskGen,Utils,Runner,Task,Build,Options,Logs
import cc
from Logs import error
from TaskGen import taskgen,before,after,feature
n1_regexp=re.compile('<refentrytitle>(.*)</refentrytitle>',re.M)
n2_regexp=re.compile('<manvolnum>(.*)</manvolnum>',re.M)
def postinstall_schemas(prog_name):
	if Options.commands['install']:
		dir=Build.bld.get_install_path('${PREFIX}/etc/gconf/schemas/%s.schemas'%prog_name)
		if not Options.options.destdir:
			Utils.pprint('YELLOW','Installing GConf schema')
			command='gconftool-2 --install-schema-file=%s 1> /dev/null'%dir
			ret=Utils.exec_command(command)
		else:
			Utils.pprint('YELLOW','GConf schema not installed. After install, run this:')
			Utils.pprint('YELLOW','gconftool-2 --install-schema-file=%s'%dir)
def postinstall_icons():
	dir=Build.bld.get_install_path('${DATADIR}/icons/hicolor')
	if Options.commands['install']:
		if not Options.options.destdir:
			Utils.pprint('YELLOW',"Updating Gtk icon cache.")
			command='gtk-update-icon-cache -q -f -t %s'%dir
			ret=Utils.exec_command(command)
		else:
			Utils.pprint('YELLOW','Icon cache not updated. After install, run this:')
			Utils.pprint('YELLOW','gtk-update-icon-cache -q -f -t %s'%dir)
def postinstall_scrollkeeper(prog_name):
	if Options.commands['install']:
		if os.path.iswriteable('/var/log/scrollkeeper.log'):
			dir1=Build.bld.get_install_path('${PREFIX}/var/scrollkeeper')
			dir2=Build.bld.get_install_path('${DATADIR}/omf/%s'%prog_name)
			command='scrollkeeper-update -q -p %s -o %s'%(dir1,dir2)
			ret=Utils.exec_command(command)
def postinstall(prog_name='myapp',schemas=1,icons=1,scrollkeeper=1):
	if schemas:postinstall_schemas(prog_name)
	if icons:postinstall_icons()
	if scrollkeeper:postinstall_scrollkeeper(prog_name)
class gnome_doc_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def init_gnome_doc(self):
	self.default_install_path='${PREFIX}/share'
def apply_gnome_doc(self):
	self.env['APPNAME']=self.doc_module
	lst=self.to_list(self.doc_linguas)
	for x in lst:
		tsk=self.create_task('xml2po')
		node=self.path.find_resource(x+'/'+x+'.po')
		src=self.path.find_resource('C/%s.xml'%self.doc_module)
		out=self.path.find_or_declare('%s/%s.xml'%(x,self.doc_module))
		tsk.set_inputs([node,src])
		tsk.set_outputs(out)
		tsk2=self.create_task('xsltproc2po')
		out2=self.path.find_or_declare('%s/%s-%s.omf'%(x,self.doc_module,x))
		tsk2.set_outputs(out2)
		node=self.path.find_resource(self.doc_module+".omf.in")
		tsk2.inputs=[node,out]
		tsk2.run_after.append(tsk)
		if Options.is_install:
			path=self.install_path+'gnome/help/%s/%s'%(self.doc_module,x)
			Build.bld.install_files(self.install_path+'omf',out2.abspath(self.env))
			for y in self.to_list(self.doc_figures):
				try:
					os.stat(self.path.abspath()+'/'+x+'/'+y)
					Common.install_as(path+'/'+y,self.path.abspath()+'/'+x+'/'+y)
				except:
					Common.install_as(path+'/'+y,self.path.abspath()+'/C/'+y)
			Common.install_as(path+'/%s.xml'%self.doc_module,out.abspath(self.env))
class xml_to_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def init_xml_to(self):
	Utils.def_attrs(self,source='xmlfile',xslt='xlsltfile',target='hey',default_install_path='${PREFIX}',task_created=None)
def apply_xml_to(self):
	tree=Build.bld
	xmlfile=self.path.find_resource(self.source)
	xsltfile=self.path.find_resource(self.xslt)
	tsk=self.create_task('xmlto')
	tsk.set_inputs([xmlfile,xsltfile])
	tsk.set_outputs(xmlfile.change_ext('html'))
	tsk.install_path=self.install_path
def sgml_scan(self):
	node=self.inputs[0]
	env=self.env
	variant=node.variant(env)
	fi=open(node.abspath(env),'r')
	content=fi.read()
	fi.close()
	name=n1_regexp.findall(content)[0]
	num=n2_regexp.findall(content)[0]
	doc_name=name+'.'+num
	return([],[doc_name])
def sig_implicit_deps(self):
	def sgml_outputs():
		dps=Build.bld.raw_deps[self.unique_id()]
		name=dps[0]
		self.set_outputs(self.task_generator.path.find_or_declare(name))
	tree=Build.bld
	key=self.unique_id()
	prev_sigs=tree.task_sigs.get(key,())
	if prev_sigs and prev_sigs[2]==self.compute_sig_implicit_deps():
		sgml_outputs()
		return prev_sigs[2]
	(nodes,names)=self.scan()
	if Logs.verbose and Logs.zones:
		debug('deps: scanner for %s returned %s %s'%(str(self),str(nodes),str(names)))
	tree=Build.bld
	tree.node_deps[self.unique_id()]=nodes
	tree.raw_deps[self.unique_id()]=names
	sgml_outputs()
	sig=self.compute_sig_implicit_deps()
	return sig
class gnome_sgml2man_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def apply_gnome_sgml2man(self):
	assert(getattr(self,'appname',None))
	def install_result(task):
		out=task.outputs[0]
		name=out.name
		ext=name[-1]
		env=task.env
		Build.bld.install_files('DATADIR','man/man%s/'%ext,out.abspath(env),env)
	tree=Build.bld
	tree.rescan(self.path)
	for name in Build.bld.cache_dir_contents[self.path.id]:
		base,ext=os.path.splitext(name)
		if ext!='.sgml':continue
		task=self.create_task('sgml2man')
		task.set_inputs(self.path.find_resource(name))
		task.task_generator=self
		if Options.is_install:task.install=install_result
		task.scan()
cls=Task.simple_task_type('sgml2man','${SGML2MAN} -o ${TGT[0].bld_dir(env)} ${SRC}  > /dev/null',color='BLUE')
cls.scan=sgml_scan
cls.sig_implicit_deps=sig_implicit_deps
old_runnable_status=Task.Task.runnable_status
def runnable_status(self):
	old_runnable_status(self)
	return old_runnable_status(self)
cls.runnable_status=runnable_status
cls.quiet=1
Task.simple_task_type('xmlto','${XMLTO} html -m ${SRC[1].abspath(env)} ${SRC[0].abspath(env)}')
Task.simple_task_type('xml2po','${XML2PO} ${XML2POFLAGS} ${SRC} > ${TGT}',color='BLUE')
xslt_magic="""${XSLTPROC2PO} -o ${TGT[0].abspath(env)} \
--stringparam db2omf.basename ${APPNAME} \
--stringparam db2omf.format docbook \
--stringparam db2omf.lang C \
--stringparam db2omf.dtd '-//OASIS//DTD DocBook XML V4.3//EN' \
--stringparam db2omf.omf_dir ${PREFIX}/share/omf \
--stringparam db2omf.help_dir ${PREFIX}/share/gnome/help \
--stringparam db2omf.omf_in ${SRC[0].abspath(env)} \
--stringparam db2omf.scrollkeeper_cl ${SCROLLKEEPER_DATADIR}/Templates/C/scrollkeeper_cl.xml \
${DB2OMF} ${SRC[1].abspath(env)}"""
Task.simple_task_type('xsltproc2po',xslt_magic,color='BLUE')
def detect(conf):
	conf.check_tool('gnu_dirs glib2 dbus')
	sgml2man=conf.find_program('docbook2man',var='SGML2MAN')
	def getstr(varname):
		return getattr(Options.options,varname,'')
	conf.define('GNOMELOCALEDIR',os.path.join(conf.env['DATADIR'],'locale'))
	xml2po=conf.find_program('xml2po',var='XML2PO')
	xsltproc2po=conf.find_program('xsltproc',var='XSLTPROC2PO')
	conf.env['XML2POFLAGS']='-e -p'
	conf.env['SCROLLKEEPER_DATADIR']=Utils.cmd_output("scrollkeeper-config --pkgdatadir",silent=1).strip()
	conf.env['DB2OMF']=Utils.cmd_output("/usr/bin/pkg-config --variable db2omf gnome-doc-utils",silent=1).strip()
	conf.define('ENABLE_NLS',1)
	conf.define('HAVE_BIND_TEXTDOMAIN_CODESET',1)
	conf.define('HAVE_DCGETTEXT',1)
	conf.check(header_name='dlfcn.h',define_name='HAVE_DLFCN_H')
	conf.define('HAVE_GETTEXT',1)
	conf.check(header_name='inttypes.h',define_name='HAVE_INTTYPES_H')
	conf.check(header_name='locale.h',define_name='HAVE_LOCALE_H')
	conf.check(header_name='memory.h',define_name='HAVE_MEMORY_H')
	conf.check(header_name='stdint.h',define_name='HAVE_STDINT_H')
	conf.check(header_name='stdlib.h',define_name='HAVE_STDLIB_H')
	conf.check(header_name='strings.h',define_name='HAVE_STRINGS_H')
	conf.check(header_name='string.h',define_name='HAVE_STRING_H')
	conf.check(header_name='sys/stat.h',define_name='HAVE_SYS_STAT_H')
	conf.check(header_name='sys/types.h',define_name='HAVE_SYS_TYPES_H')
	conf.check(header_name='unistd.h',define_name='HAVE_UNISTD_H')
def set_options(opt):
	opt.add_option('--want-rpath',type='int',default=1,dest='want_rpath',help='set rpath to 1 or 0 [Default 1]')

taskgen(init_gnome_doc)
feature('gmome_doc')(init_gnome_doc)
taskgen(apply_gnome_doc)
feature('gnome_doc')(apply_gnome_doc)
after('init_gnome_doc')(apply_gnome_doc)
taskgen(init_xml_to)
feature('xml_to')(init_xml_to)
taskgen(apply_xml_to)
feature('xml_to')(apply_xml_to)
after('init_xml_to')(apply_xml_to)
taskgen(apply_gnome_sgml2man)
feature('gnome_sgml2man')(apply_gnome_sgml2man)
