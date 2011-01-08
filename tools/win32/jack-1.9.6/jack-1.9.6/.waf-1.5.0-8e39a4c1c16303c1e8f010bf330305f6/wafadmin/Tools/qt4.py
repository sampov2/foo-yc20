#! /usr/bin/env python
# encoding: utf-8

try:
	from xml.sax import make_parser
	from xml.sax.handler import ContentHandler
except ImportError:
	has_xml=False
	ContentHandler=object
else:
	has_xml=True
import os,sys
import ccroot,cxx
import TaskGen,Task,Utils,Runner,Options,Build
from TaskGen import taskgen,feature,after,extension
from Logs import error
from Constants import*
MOC_H=['.h','.hpp','.hxx','.hh']
EXT_RCC=['.qrc']
EXT_UI=['.ui']
EXT_QT4=['.cpp','.cc','.cxx','.C']
class MTask(Task.Task):
	scan=ccroot.scan
	before=['cxx_link','ar_link_static']
	def __init__(self,parent):
		Task.Task.__init__(self,parent.env)
		self.moc_done=0
		self.parent=parent
	def runnable_status(self):
		if self.moc_done:
			for t in self.run_after:
				if not t.hasrun:
					return ASK_LATER
			self.signature()
			return Task.Task.runnable_status(self)
		else:
			self.add_moc_tasks()
			return ASK_LATER
	def add_moc_tasks(self):
		tree=Build.bld
		parn=self.parent
		node=self.inputs[0]
		try:
			self.signature()
		except:
			print"TODO"
		else:
			delattr(self,'cache_sig')
		moctasks=[]
		mocfiles=[]
		variant=node.variant(parn.env)
		try:
			tmp_lst=tree.raw_deps[self.unique_id()]
			tree.raw_deps[self.unique_id()]=[]
		except KeyError:
			tmp_lst=[]
		for d in tmp_lst:
			if not d.endswith('.moc'):continue
			if d in mocfiles:
				error("paranoia owns")
				continue
			mocfiles.append(d)
			ext=''
			try:ext=Options.options.qt_header_ext
			except AttributeError:pass
			if not ext:
				base2=d[:-4]
				path=node.parent.srcpath(parn.env)
				for i in MOC_H:
					try:
						os.stat(os.path.join(path,base2+i))
					except OSError:
						pass
					else:
						ext=i
						break
				if not ext:raise Utils.WafError("no header found for %s which is a moc file"%str(d))
			h_node=node.parent.find_resource(base2+i)
			m_node=h_node.change_ext('.moc')
			tree.node_deps[(self.unique_id(),m_node.name)]=h_node
			task=Task.TaskBase.classes['moc'](parn.env,normal=0)
			task.set_inputs(h_node)
			task.set_outputs(m_node)
			generator=Build.bld.generator
			generator.outstanding.insert(0,task)
			generator.total+=1
			moctasks.append(task)
		tmp_lst=tree.raw_deps[self.unique_id()]=mocfiles
		lst=tree.node_deps.get(self.unique_id(),())
		for d in lst:
			name=d.name
			if name.endswith('.moc'):
				task=Task.TaskBase.classes['moc'](parn.env,normal=0)
				task.set_inputs(tree.node_deps[(self.unique_id(),name)])
				task.set_outputs(d)
				generator=Build.bld.generator
				generator.outstanding.insert(0,task)
				generator.total+=1
				moctasks.append(task)
		self.run_after=moctasks
		self.moc_done=1
	run=Task.TaskBase.classes['cxx'].__dict__['run']
def translation_update(task):
	outs=[a.abspath(task.env)for a in task.outputs]
	outs=" ".join(outs)
	lupdate=task.env['QT_LUPDATE']
	for x in task.inputs:
		file=x.abspath(task.env)
		cmd="%s %s -ts %s"%(lupdate,file,outs)
		Utils.pprint('BLUE',cmd)
		task.generator.bld.exec_command(cmd)
class XMLHandler(ContentHandler):
	def __init__(self):
		self.buf=[]
		self.files=[]
	def startElement(self,name,attrs):
		if name=='file':
			self.buf=[]
	def endElement(self,name):
		if name=='file':
			self.files.append(''.join(self.buf))
	def characters(self,cars):
		self.buf.append(cars)
def scan(self):
	node=self.inputs[0]
	parser=make_parser()
	curHandler=XMLHandler()
	parser.setContentHandler(curHandler)
	fi=open(self.inputs[0].abspath(self.env))
	parser.parse(fi)
	fi.close()
	nodes=[]
	names=[]
	root=self.inputs[0].parent
	for x in curHandler.files:
		x=x.encode('utf8')
		nd=root.find_resource(x)
		if nd:nodes.append(nd)
		else:names.append(x)
	return(nodes,names)
def create_rcc_task(self,node):
	rcnode=node.change_ext('_rc.cpp')
	rcctask=self.create_task('rcc')
	rcctask.inputs=[node]
	rcctask.outputs=[rcnode]
	cpptask=self.create_task('cxx')
	cpptask.inputs=[rcnode]
	cpptask.outputs=[rcnode.change_ext('.o')]
	cpptask.defines=self.scanner_defines
	self.compiled_tasks.append(cpptask)
	return cpptask
def create_uic_task(self,node):
	uictask=self.create_task('ui4')
	uictask.inputs=[node]
	uictask.outputs=[node.change_ext('.h')]
class qt4_taskgen(cxx.cxx_taskgen):
	def __init__(self,*kw):
		cxx.cxx_taskgen.__init__(self,*kw)
		self.features.append('qt4')
def apply_qt4(self):
	if getattr(self,'lang',None):
		lst=[]
		trans=[]
		for l in self.to_list(self.lang):
			t=Task.TaskBase.classes['ts2qm'](self.env)
			t.set_inputs(self.path.find_resource(l+'.ts'))
			t.set_outputs(t.inputs[0].change_ext('.qm'))
			lst.append(t.outputs[0])
			if self.update:
				trans.append(t.inputs[0])
		if getattr(self,'update',None)and Options.options.trans_qt4:
			u=Task.TaskCmd(translation_update,self.env,2)
			u.inputs=[a.inputs[0]for a in self.compiled_tasks]
			u.outputs=trans
		if getattr(self,'langname',None):
			t=Task.TaskBase.classes['qm2rcc'](self.env)
			t.set_inputs(lst)
			t.set_outputs(self.path.find_or_declare(self.langname+'.qrc'))
			t.path=self.path
			k=create_rcc_task(self,t.outputs[0])
			self.link_task.inputs.append(k.outputs[0])
	lst=[]
	for flag in self.to_list(self.env['CXXFLAGS']):
		if len(flag)<2:continue
		if flag[0:2]=='-D'or flag[0:2]=='-I':
			lst.append(flag)
	self.env['MOC_FLAGS']=lst
def find_sources_in_dirs(self,dirnames,excludes=[],exts=[]):
	lst=[]
	excludes=self.to_list(excludes)
	dirnames=self.to_list(dirnames)
	ext_lst=exts or self.mappings.keys()+TaskGen.task_gen.mappings.keys()
	self.lang=getattr(self,'lang','')
	for name in dirnames:
		anode=self.path.find_dir(name)
		Build.bld.rescan(anode)
		for name in Build.bld.cache_dir_contents[anode.id]:
			(base,ext)=os.path.splitext(name)
			if ext in ext_lst:
				if not name in lst:
					if name in excludes:continue
					lst.append((anode.path_to_parent(self.path)or'.')+'/'+name)
			elif ext=='.ts':
				self.lang+=' '+base
	lst.sort()
	self.source=self.source+' '+(" ".join(lst))
setattr(qt4_taskgen,'find_sources_in_dirs',find_sources_in_dirs)
def cxx_hook(self,node):
	task=MTask(self)
	self.tasks.append(task)
	try:obj_ext=self.obj_ext
	except AttributeError:obj_ext='_%d.o'%self.idx
	task.defines=self.scanner_defines
	task.inputs=[node]
	task.outputs=[node.change_ext(obj_ext)]
	self.compiled_tasks.append(task)
def process_qm2rcc(task):
	outfile=task.outputs[0].abspath(task.env)
	f=open(outfile,'w')
	f.write('<!DOCTYPE RCC><RCC version="1.0">\n<qresource>\n')
	for k in task.inputs:
		f.write(' <file>')
		f.write(k.path_to_parent(task.path))
		f.write('</file>\n')
	f.write('</qresource>\n</RCC>')
	f.close()
b=Task.simple_task_type
b('moc','${QT_MOC} ${MOC_FLAGS} ${SRC} ${MOC_ST} ${TGT}',color='BLUE',vars=['QT_MOC','MOC_FLAGS'])
cls=b('rcc','${QT_RCC} -name ${SRC[0].name} ${SRC[0].abspath(env)} ${RCC_ST} -o ${TGT}',color='BLUE',before='cxx moc',after="qm2rcc")
cls.scan=scan
b('ui4','${QT_UIC} ${SRC} -o ${TGT}',color='BLUE',before='cxx moc')
b('ts2qm','${QT_LRELEASE} ${QT_LRELEASE_FLAGS} ${SRC} -qm ${TGT}',color='BLUE',before='qm2rcc')
Task.task_type_from_func('qm2rcc',vars=[],func=process_qm2rcc,color='BLUE',before='rcc',after='ts2qm')
def detect_qt4(conf):
	env=conf.env
	opt=Options.options
	qtlibs=getattr(opt,'qtlibs','')
	qtincludes=getattr(opt,'qtincludes','')
	qtbin=getattr(opt,'qtbin','')
	useframework=getattr(opt,'use_qt4_osxframework',True)
	qtdir=getattr(opt,'qtdir','')
	if not qtdir:qtdir=os.environ.get('QT4_ROOT','')
	if not qtdir:
		try:
			lst=os.listdir('/usr/local/Trolltech/')
			lst.sort()
			lst.reverse()
			qtdir='/usr/local/Trolltech/%s/'%lst[0]
		except OSError:
			pass
	if not qtdir:
		try:
			path=os.environ['PATH'].split(':')
			for qmk in['qmake-qt4','qmake4','qmake']:
				qmake=conf.find_program(qmk,path)
				if qmake:
					version=Utils.cmd_output(qmake+" -query QT_VERSION").strip().split('.')
					if version[0]=="4":
						qtincludes=Utils.cmd_output(qmake+" -query QT_INSTALL_HEADERS").strip()
						qtdir=Utils.cmd_output(qmake+" -query QT_INSTALL_PREFIX").strip()+"/"
						qtbin=Utils.cmd_output(qmake+" -query QT_INSTALL_BINS").strip()+"/"
						break
		except(OSError,ValueError):
			pass
	if not qtlibs:qtlibs=os.path.join(qtdir,'lib')
	vars="QtCore QtGui QtNetwork QtOpenGL QtSql QtSvg QtTest QtXml QtWebKit Qt3Support".split()
	framework_ok=False
	if sys.platform=="darwin"and useframework:
		for i in vars:
			e=conf.create_framework_configurator()
			e.path=[qtlibs,'/Library/Frameworks']
			e.name=i
			e.remove_dot_h=True
			e.run()
			if not i=='QtCore':
				for r in env['CCFLAGS_'+i.upper()]:
					if r.startswith('-F'):
						env['CCFLAGS_'+i.upper()].remove(r)
						break
		if conf.is_defined("HAVE_QTOPENGL")and not'-framework OpenGL'in env["LINKFLAGS_QTOPENGL"]:
			env["LINKFLAGS_QTOPENGL"]+=['-framework OpenGL']
		if conf.is_defined("HAVE_QTGUI"):
			if not'-framework AppKit'in env["LINKFLAGS_QTGUI"]:
				env["LINKFLAGS_QTGUI"]+=['-framework AppKit']
			if not'-framework ApplicationServices'in env["LINKFLAGS_QTGUI"]:
				env["LINKFLAGS_QTGUI"]+=['-framework ApplicationServices']
		framework_ok=True
		if not conf.is_defined("HAVE_QTGUI"):
			if not qtincludes:qtincludes=os.path.join(qtdir,'include')
			env['QTINCLUDEPATH']=qtincludes
			lst=[qtincludes,'/usr/share/qt4/include/','/opt/qt4/include']
			conf.check(header_name='QtGui/QFont',define_name='HAVE_QTGUI',mandatory=1,includes=lst)
	if not qtbin:qtbin=os.path.join(qtdir,'bin')
	binpath=[qtbin,'/usr/share/qt4/bin/']+os.environ['PATH'].split(':')
	def find_bin(lst,var):
		for f in lst:
			ret=conf.find_program(f,path_list=binpath)
			if ret:
				env[var]=ret
				break
	find_bin(['uic-qt3','uic3'],'QT_UIC3')
	find_bin(['uic-qt4','uic'],'QT_UIC')
	try:
		version=Utils.cmd_output(env['QT_UIC']+" -version 2>&1").strip()
	except ValueError:
		conf.fatal('your uic compiler is for qt3, add uic for qt4 to your path')
	version=version.replace('Qt User Interface Compiler ','')
	version=version.replace('User Interface Compiler for Qt','')
	if version.find(" 3.")!=-1:
		conf.check_message('uic version','(too old)',0,option='(%s)'%version)
		sys.exit(1)
	conf.check_message('uic version','',1,option='(%s)'%version)
	find_bin(['moc-qt4','moc'],'QT_MOC')
	find_bin(['rcc'],'QT_RCC')
	find_bin(['lrelease-qt4','lrelease'],'QT_LRELEASE')
	find_bin(['lupdate-qt4','lupdate'],'QT_LUPDATE')
	env['UIC3_ST']='%s -o %s'
	env['UIC_ST']='%s -o %s'
	env['MOC_ST']='-o'
	env['QT_LRELEASE_FLAGS']=['-silent']
	if not framework_ok:
		vars_debug=[a+'_debug'for a in vars]
		pkgconfig=env['pkg-config']or'PKGCONFIG_PATH=%s:%s/pkgconfig:/usr/lib/qt4/lib/pkgconfig:/opt/qt4/lib/pkgconfig:/usr/lib/qt4/lib:/opt/qt4/lib pkg-config --silence-errors'%(qtlibs,qtlibs)
		for i in vars_debug+vars:
			try:
				conf.check_cfg(package=i,args='--cflags --libs',path=pkgconfig)
			except ValueError:
				pass
		def process_lib(vars_,coreval):
			for d in vars_:
				var=d.upper()
				if var=='QTCORE':continue
				value=env['LIBPATH_'+var]
				if value:
					core=env[coreval]
					accu=[]
					for lib in value:
						if lib in core:continue
						accu.append(lib)
					env['LIBPATH_'+var]=accu
		process_lib(vars,'LIBPATH_QTCORE')
		process_lib(vars_debug,'LIBPATH_QTCORE_DEBUG')
		if Options.options.want_rpath:
			def process_rpath(vars_,coreval):
				for d in vars_:
					var=d.upper()
					value=env['LIBPATH_'+var]
					if value:
						core=env[coreval]
						accu=[]
						for lib in value:
							if var!='QTCORE':
								if lib in core:
									continue
							accu.append('-Wl,--rpath='+lib)
						env['RPATH_'+var]=accu
			process_rpath(vars,'LIBPATH_QTCORE')
			process_rpath(vars_debug,'LIBPATH_QTCORE_DEBUG')
	env['QTLOCALE']=str(env['PREFIX'])+'/share/locale'
def detect(conf):
	if sys.platform=='win32':conf.fatal('Qt4.py will not work on win32 for now - ask the author')
	detect_qt4(conf)
def set_options(opt):
	opt.add_option('--want-rpath',type='int',default=1,dest='want_rpath',help='set rpath to 1 or 0 [Default 1]')
	opt.add_option('--header-ext',type='string',default='',help='header extension for moc files',dest='qt_header_ext')
	for i in"qtdir qtincludes qtlibs qtbin".split():
		opt.add_option('--'+i,type='string',default='',dest=i)
	if sys.platform=="darwin":
		opt.add_option('--no-qt4-framework',action="store_false",help='do not use the framework version of Qt4 in OS X',dest='use_qt4_osxframework',default=True)
	opt.add_option('--translate',action="store_true",help="collect translation strings",dest="trans_qt4",default=False)

extension(EXT_RCC)(create_rcc_task)
extension(EXT_UI)(create_uic_task)
taskgen(apply_qt4)
feature('qt4')(apply_qt4)
after('apply_link')(apply_qt4)
extension(EXT_QT4)(cxx_hook)
