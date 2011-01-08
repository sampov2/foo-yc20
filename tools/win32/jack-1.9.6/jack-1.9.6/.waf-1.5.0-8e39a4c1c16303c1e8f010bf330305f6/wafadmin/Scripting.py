#! /usr/bin/env python
# encoding: utf-8

import os,sys,shutil,traceback,time
import Utils,Configure,Build,Logs,Options,Environment
from Logs import error,warn,info
from Constants import*
g_gz='bz2'
def add_subdir(dir,bld):
	try:bld.rescan(bld.path)
	except OSError:raise Utils.WscriptError("No such directory "+bld.path.abspath())
	old=bld.path
	new=bld.path.find_dir(dir)
	if new is None:
		raise Utils.WscriptError("subdir not found (%s), restore is %s"%(dir,bld.path))
	bld.path=new
	try:
		file_path=os.path.join(new.abspath(),WSCRIPT_BUILD_FILE)
		file=open(file_path,'r')
		exec file
		if file:file.close()
	except IOError:
		file_path=os.path.join(new.abspath(),WSCRIPT_FILE)
		module=Utils.load_module(file_path)
		module.build(bld)
	bld.path=old
def configure():
	tree=Build.BuildContext()
	err='The %s is not given in %s:\n * define a top level attribute named "%s"\n * run waf configure --%s=xxx'
	src=getattr(Options.options,SRCDIR,None)
	if not src:src=getattr(Utils.g_module,SRCDIR,None)
	if not src:raise Utils.WscriptError(err%(SRCDIR,os.path.abspath('.'),SRCDIR,SRCDIR))
	src=os.path.abspath(src)
	bld=getattr(Options.options,BLDDIR,None)
	if not bld:bld=getattr(Utils.g_module,BLDDIR,None)
	if not bld:raise Utils.WscriptError(err%(BLDDIR,os.path.abspath('.'),BLDDIR,BLDDIR))
	bld=os.path.abspath(bld)
	tree.load_dirs(src,bld,False)
	conf=Configure.ConfigurationContext(srcdir=src,blddir=bld)
	conf.sub_config('')
	conf.store(tree)
	env=Environment.Environment()
	env[BLDDIR]=bld
	env[SRCDIR]=src
	env['argv']=sys.argv
	env['hash']=conf.hash
	env['files']=conf.files
	env['commands']=Options.commands
	env['options']=Options.options.__dict__
	env.store(Options.lockfile)
def prepare_impl(t,cwd,ver,wafdir):
	Options.tooldir=[t]
	Options.launch_dir=cwd
	if'--version'in sys.argv:
		opt_obj=Options.Handler()
		opt_obj.parse_args()
		sys.exit(0)
	msg1='Waf: *** Nothing to do! Please run waf from a directory containing a file named "%s"'%WSCRIPT_FILE
	build_dir_override=None
	candidate=None
	cwd=Options.launch_dir
	lst=os.listdir(cwd)
	search_for_candidate=True
	if WSCRIPT_FILE in lst:
		candidate=cwd
	elif'configure'in sys.argv and not WSCRIPT_BUILD_FILE in lst:
		calldir=os.path.abspath(os.path.dirname(sys.argv[0]))
		if WSCRIPT_FILE in os.listdir(calldir):
			candidate=calldir
			search_for_candidate=False
		else:
			error("arg[0] directory does not contain a wscript file")
			sys.exit(1)
		build_dir_override=cwd
	while search_for_candidate:
		if len(cwd)<=3:
			break
		dirlst=os.listdir(cwd)
		if WSCRIPT_FILE in dirlst:
			candidate=cwd
		if'configure'in sys.argv and candidate:
			break
		if Options.lockfile in dirlst:
			break
		cwd=cwd[:cwd.rfind(os.sep)]
	if not candidate:
		if'-h'in sys.argv or'--help'in sys.argv:
			warn('No wscript file found: the help message may be incomplete')
			opt_obj=Options.Handler()
			opt_obj.parse_args()
		else:
			error(msg1)
		sys.exit(0)
	os.chdir(candidate)
	Utils.set_main_module(os.path.join(candidate,WSCRIPT_FILE))
	if build_dir_override:
		d=getattr(Utils.g_module,BLDDIR,None)
		if d:
			msg=' Overriding build directory %s with %s'%(d,build_dir_override)
			warn(msg)
		Utils.g_module.blddir=build_dir_override
	opt_obj=Options.Handler()
	opt_obj.sub_options('')
	opt_obj.parse_args()
	fun=getattr(Utils.g_module,'init',None)
	if fun:fun()
	for x in['dist','distclean','distcheck']:
		if Options.commands[x]:
			fun=getattr(Utils.g_module,x,None)
			if fun:
				fun()
			else:
				eval(x+'()')
			sys.exit(0)
	main()
def prepare(t,cwd,ver,wafdir):
	if WAFVERSION!=ver:
		msg='Version mismatch: waf %s <> wafadmin %s (wafdir %s)'%(ver,WAFVERSION,wafdir)
		print'\033[91mError: %s\033[0m'%msg
		sys.exit(1)
	try:
		prepare_impl(t,cwd,ver,wafdir)
	except Utils.WafError,e:
		error(e)
		sys.exit(1)
def main():
	if Options.commands['configure']:
		ini=time.time()
		configure()
		ela=''
		if not Options.options.progress_bar:ela=time.strftime(' (%H:%M:%S)',time.gmtime(time.time()-ini))
		info('Configuration finished successfully%s; project is now ready to build.'%ela)
		sys.exit(0)
	bld=Build.BuildContext()
	try:
		proj=Environment.Environment(Options.lockfile)
	except IOError:
		if Options.commands['clean']:
			raise Utils.WafError("Nothing to clean (project not configured)")
		else:
			if Configure.autoconfig:
				warn("Reconfiguring the project")
				configure()
				bld=Build.BuildContext()
				proj=Environment.Environment(Options.lockfile)
			else:
				raise Utils.WafError("Project not configured (run 'waf configure' first)")
	if Configure.autoconfig:
		if not Options.commands['clean']and not Options.commands['uninstall']:
			reconf=0
			h=0
			try:
				for file in proj['files']:
					mod=Utils.load_module(file)
					h=Utils.hash_function_with_globals(h,mod.configure)
				reconf=(h!=proj['hash'])
			except Exception,ex:
				warn("Reconfiguring the project (an exception occurred: %s)"%(str(ex),))
				reconf=1
			if reconf:
				warn("Reconfiguring the project (the configuration has changed)")
				back=(Options.commands,Options.options,Logs.zones,Logs.verbose)
				Options.commands=proj['commands']
				Options.options.__dict__=proj['options']
				configure()
				(Options.commands,Options.options,Logs.zones,Logs.verbose)=back
				bld=Build.BuildContext()
				proj=Environment.Environment(Options.lockfile)
	bld.load_dirs(proj[SRCDIR],proj[BLDDIR])
	bld.load_envs()
	f=getattr(Utils.g_module,'build',None)
	if f:
		f(bld)
	else:
		main_wscript=None
		for(file_path,module)in Utils.g_loaded_modules.items():
			if module.__name__=='wscript_main':
				main_wscript=file_path
				break
		raise Utils.WscriptError("Could not find the function 'def build(bld).'",main_wscript)
	pre_build=getattr(Utils.g_module,'pre_build',None)
	if pre_build:pre_build()
	if Options.commands['build']or Options.is_install:
		if Options.commands['uninstall']:
			import Task
			def runnable_status(self):
				return SKIP_ME
			setattr(Task.Task,'runnable_status',runnable_status)
		ini=time.time()
		bld.compile()
		if Options.options.progress_bar:print''
		if Options.is_install:
			bld.install()
		ela=''
		if not Options.options.progress_bar:
			ela=time.strftime(' (%H:%M:%S)',time.gmtime(time.time()-ini))
		if Options.commands['install']:msg='Compilation and installation finished successfully%s'%ela
		elif Options.commands['uninstall']:msg='Uninstallation finished successfully%s'%ela
		else:msg='Compilation finished successfully%s'%ela
		info(msg)
	if Options.commands['clean']:
		try:
			bld.clean()
			info('Cleaning finished successfully')
		finally:
			bld.save()
	fun=getattr(Utils.g_module,'shutdown',None)
	if fun:fun()
excludes='.bzr .bzrignore .git .gitignore .svn CVS .cvsignore .arch-ids {arch} SCCS BitKeeper .hg Makefile Makefile.in config.log'.split()
dist_exts='~ .rej .orig .pyc .pyo .bak .tar.bz2 tar.gz .zip'.split()
def dont_dist(name,src,build_dir):
	global excludes,dist_exts
	if(name.startswith(',,')or name.startswith('++')or(src=='.'and name==Options.lockfile)or name in excludes or name==build_dir):
		return True
	for ext in dist_exts:
		if name.endswith(ext):
			return True
	return False
def copytree(src,dst,build_dir):
	names=os.listdir(src)
	os.makedirs(dst)
	for name in names:
		srcname=os.path.join(src,name)
		dstname=os.path.join(dst,name)
		if dont_dist(name,src,build_dir):
			continue
		if os.path.isdir(srcname):
			copytree(srcname,dstname,build_dir)
		else:
			shutil.copy2(srcname,dstname)
def distclean():
	lst=os.listdir('.')
	for f in lst:
		if f==Options.lockfile:
			try:
				proj=Environment.Environment(f)
				shutil.rmtree(proj[BLDDIR])
			except(OSError,IOError):
				pass
			try:
				os.remove(f)
			except(OSError,IOError):
				pass
		if f.startswith('.waf-'):
			shutil.rmtree(f,ignore_errors=True)
	info('distclean finished successfully')
def dist(appname='',version=''):
	import tarfile
	if not appname:appname=getattr(Utils.g_module,APPNAME,'noname')
	if not version:version=getattr(Utils.g_module,VERSION,'1.0')
	tmp_folder=appname+'-'+version
	arch_name=tmp_folder+'.tar.'+g_gz
	try:
		shutil.rmtree(tmp_folder)
	except(OSError,IOError):
		pass
	try:
		os.remove(arch_name)
	except(OSError,IOError):
		pass
	copytree('.',tmp_folder,getattr(Utils.g_module,BLDDIR,None))
	dist_hook=getattr(Utils.g_module,'dist_hook',None)
	if dist_hook:
		os.chdir(tmp_folder)
		try:
			dist_hook()
		finally:
			os.chdir('..')
	tar=tarfile.open(arch_name,'w:'+g_gz)
	tar.add(tmp_folder)
	tar.close()
	info('Your archive is ready -> %s'%arch_name)
	if os.path.exists(tmp_folder):shutil.rmtree(tmp_folder)
	return arch_name
def distcheck(appname='',version=''):
	import tempfile,tarfile
	import pproc
	if not appname:appname=getattr(Utils.g_module,APPNAME,'noname')
	if not version:version=getattr(Utils.g_module,VERSION,'1.0')
	waf=os.path.abspath(sys.argv[0])
	tarball=dist(appname,version)
	t=tarfile.open(tarball)
	for x in t:t.extract(x)
	t.close()
	instdir=tempfile.mkdtemp('.inst','%s-%s'%(appname,version))
	cwd_before=os.getcwd()
	retval=pproc.Popen('%(waf)s configure && %(waf)s ''&& %(waf)s check && %(waf)s install --destdir=%(instdir)s'' && %(waf)s uninstall --destdir=%(instdir)s'%vars(),shell=True).wait()
	if retval:
		raise Utils.WafError('distcheck failed with code %i'%(retval))
	if os.path.exists(instdir):
		raise Utils.WafError("distcheck succeeded, but files were left in %s"%(instdir))
	else:
		info('distcheck finished successfully')

