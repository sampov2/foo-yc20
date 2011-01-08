#! /usr/bin/env python
# encoding: utf-8

import os,sys,imp,types,tempfile
from optparse import OptionParser
import Logs,Utils
from Constants import*
cmds='dist configure clean distclean build install uninstall check distcheck'.split()
options={}
commands={}
launch_dir=''
tooldir=''
lockfile=os.environ.get('WAFLOCK','.lock-wscript')
try:cache_global=os.path.abspath(os.environ['WAFCACHE'])
except KeyError:cache_global=''
platform=Utils.detect_platform()
conf_file='conf-runs-%s-%d.pickle'%(platform,ABI)
is_install=False
default_prefix=os.environ.get('PREFIX')
if not default_prefix:
	if platform=='win32':default_prefix=tempfile.gettempdir()
	else:default_prefix='/usr/local/'
default_jobs=os.environ.get('JOBS',-1)
if default_jobs<1:
	try:
		default_jobs=os.sysconf('SC_NPROCESSORS_ONLN')
	except:
		default_jobs=int(os.environ.get('NUMBER_OF_PROCESSORS',1))
default_destdir=os.environ.get('DESTDIR','')
def create_parser():
	Logs.debug('options: create_parser is called')
	parser=OptionParser(conflict_handler="resolve",usage="""waf [options] [commands ...]

* Main commands: configure build install clean dist distclean uninstall distcheck
* Example: ./waf build -j4""",version='waf %s'%WAFVERSION)
	parser.formatter.width=Utils.get_term_cols()
	p=parser.add_option
	p('-j','--jobs',type='int',default=default_jobs,help="amount of parallel jobs [Default: %s]"%default_jobs,dest='jobs')
	p('-f','--force',action='store_true',default=False,help='force file installation',dest='force')
	p('-k','--keep',action='store_true',default=False,help='keep running happily on independent task groups',dest='keep')
	p('-p','--progress',action='count',default=0,help='-p: progress bar; -pp: ide output',dest='progress_bar')
	p('-v','--verbose',action='count',default=0,help='verbosity level -v -vv or -vvv [Default: 0]',dest='verbose')
	p('--destdir',help="installation root [Default: '%s']"%default_destdir,default=default_destdir,dest='destdir')
	p('--nocache',action='store_true',default=False,help='compile everything, even if WAFCACHE is set',dest='nocache')
	if'configure'in sys.argv:
		p('-b','--blddir',action='store',default='',help='build dir for the project (configuration)',dest='blddir')
		p('-s','--srcdir',action='store',default='',help='src dir for the project (configuration)',dest='srcdir')
		p('--prefix',help="installation prefix (configuration only) [Default: '%s']"%default_prefix,default=default_prefix,dest='prefix')
	p('--zones',action='store',default='',help='debugging zones (task_gen, deps, tasks, etc)',dest='zones')
	p('--targets',action='store',default='',help='compile the targets given only [targets in CSV format, e.g. "target1,target2"]',dest='compile_targets')
	return parser
def parse_args_impl(parser,_args=None):
	global options,commands
	(options,args)=parser.parse_args(args=_args)
	commands={}
	for var in cmds:commands[var]=0
	if len(args)==0:commands['build']=1
	for arg in args:
		arg=arg.strip()
		if arg in cmds:
			commands[arg]=True
		else:
			print'Error: Invalid command specified ',arg
			parser.print_help()
			sys.exit(1)
	if commands['check']:
		commands['build']=True
	if commands['install']or commands['uninstall']:
		global is_install
		is_install=True
	if options.keep:options.jobs=1
	if options.jobs<1:options.jobs=1
	Logs.verbose=options.verbose
	Logs.init_log()
	if options.zones:
		Logs.zones=options.zones.split(',')
		if not Logs.verbose:Logs.verbose=1
	elif Logs.verbose==1:
		Logs.zones=['runner']
class Handler(object):
	parser=None
	def __init__(self):
		self.parser=create_parser()
		self.cwd=os.getcwd()
		Handler.parser=self
	def add_option(self,*kw,**kwargs):
		self.parser.add_option(*kw,**kwargs)
	def add_option_group(self,*args,**kwargs):
		return self.parser.add_option_group(*args,**kwargs)
	def get_option_group(self,opt_str):
		return self.parser.get_option_group(opt_str)
	def sub_options(self,dir,option_group=None):
		try:
			current=self.cwd
			self.cwd=os.path.join(self.cwd,dir)
			cur=os.path.join(self.cwd,WSCRIPT_FILE)
			mod=Utils.load_module(cur)
			if not hasattr(mod,'set_options'):
				msg="the module %s has no set_options function;\n* make sure such a function is defined\n* run configure from the root of the project"%cur
				raise Utils.WscriptError(msg)
			else:
				fun=mod.set_options
			fun(option_group or self)
		finally:
			self.cwd=current
	def tool_options(self,tool,tdir=None,option_group=None):
		
		if type(tool)is types.ListType:
			for i in tool:self.tool_options(i,tdir,option_group)
			return
		if not tdir:tdir=tooldir
		tdir=Utils.to_list(tdir)
		try:
			file,name,desc=imp.find_module(tool,tdir)
		except ImportError:
			raise Utils.WscriptError("no tool named '%s' found"%tool)
		module=imp.load_module(tool,file,name,desc)
		try:
			fun=module.set_options
		except AttributeError:
			pass
		else:
			fun(option_group or self)
	def parse_args(self,args=None):
		parse_args_impl(self.parser,args)

