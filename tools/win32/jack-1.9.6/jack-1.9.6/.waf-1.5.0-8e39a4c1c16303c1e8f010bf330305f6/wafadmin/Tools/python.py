#! /usr/bin/env python
# encoding: utf-8

import os,sys
import TaskGen,Utils,Utils,Runner,Options,Build
from Logs import debug,warn
from TaskGen import extension,taskgen,before,after,feature
from Configure import conf
import pproc
EXT_PY=['.py']
def init_pyext(self):
	self.default_install_path='${PYTHONDIR}'
	self.uselib=self.to_list(getattr(self,'uselib',''))
	if not'PYEXT'in self.uselib:
		self.uselib.append('PYEXT')
	self.env['MACBUNDLE']=True
def pyext_shlib_ext(self):
	self.env['shlib_PATTERN']=self.env['pyext_PATTERN']
def init_pyembed(self):
	self.uselib=self.to_list(getattr(self,'uselib',''))
	if not'PYEMBED'in self.uselib:
		self.uselib.append('PYEMBED')
def process_py(self,node):
	if Options.is_install and self.install_path:
		installed_files=Build.bld.install_files(self.install_path,node.abspath(self.env),self.env,self.chmod)
		if Options.commands['uninstall']:
			print"* removing byte compiled python files"
			for fname in installed_files:
				try:
					os.remove(fname+'c')
				except OSError:
					pass
				try:
					os.remove(fname+'o')
				except OSError:
					pass
		if Options.commands['install']:
			if self.env['PYC']or self.env['PYO']:
				print"* byte compiling python files"
			if self.env['PYC']:
				program=("""
import sys, py_compile
for pyfile in sys.argv[1:]:
	py_compile.compile(pyfile, pyfile + 'c')
""")
				argv=[self.env['PYTHON'],"-c",program]
				argv.extend(installed_files)
				retval=pproc.Popen(argv).wait()
				if retval:
					raise Utils.WafError("bytecode compilation failed")
			if self.env['PYO']:
				program=("""
import sys, py_compile
for pyfile in sys.argv[1:]:
	py_compile.compile(pyfile, pyfile + 'o')
""")
				argv=[self.env['PYTHON'],self.env['PYFLAGS_OPT'],"-c",program]
				argv.extend(installed_files)
				retval=pproc.Popen(argv).wait()
				if retval:
					raise Utils.WafError("bytecode compilation failed")
class py_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def init_py(self):
	self.default_install_path='${PYTHONDIR}'
def _get_python_variables(python_exe,variables,imports=['import sys']):
	program=list(imports)
	program.append('')
	for v in variables:
		program.append("print repr(%s)"%v)
	proc=pproc.Popen([python_exe,"-c",'\n'.join(program)],stdout=pproc.PIPE)
	output=proc.communicate()[0].split("\n")
	if proc.returncode:
		if Logs.verbose:
			warn("Python program to extract python configuration variables failed:\n%s"%'\n'.join(["line %03i: %s"%(lineno+1,line)for lineno,line in enumerate(program)]))
		raise ValueError
	return_values=[]
	for s in output:
		s=s.strip()
		if not s:
			continue
		if s=='None':
			return_values.append(None)
		elif s[0]=="'"and s[-1]=="'":
			return_values.append(s[1:-1])
		elif s[0].isdigit():
			return_values.append(int(s))
		else:break
	return return_values
def check_python_headers(conf):
	env=conf.env
	python=env['PYTHON']
	assert python,("python is %r !"%(python,))
	if Options.platform=='darwin':
		conf.check_tool('osx')
	try:
		v='prefix SO SYSLIBS SHLIBS LIBDIR LIBPL INCLUDEPY Py_ENABLE_SHARED'.split()
		(python_prefix,python_SO,python_SYSLIBS,python_SHLIBS,python_LIBDIR,python_LIBPL,INCLUDEPY,Py_ENABLE_SHARED)=_get_python_variables(python,["get_config_var('%s')"%x for x in v],['from distutils.sysconfig import get_config_var'])
	except ValueError:
		conf.fatal("Python development headers not found (-v for details).")
	conf.log.write("""Configuration returned from %r:
python_prefix = %r
python_SO = %r
python_SYSLIBS = %r
python_SHLIBS = %r
python_LIBDIR = %r
python_LIBPL = %r
INCLUDEPY = %r
Py_ENABLE_SHARED = %r
"""%(python,python_prefix,python_SO,python_SYSLIBS,python_SHLIBS,python_LIBDIR,python_LIBPL,INCLUDEPY,Py_ENABLE_SHARED))
	env['pyext_PATTERN']='%s'+python_SO
	if python_SYSLIBS is not None:
		for lib in python_SYSLIBS.split():
			if lib.startswith('-l'):
				lib=lib[2:]
			env.append_value('LIB_PYEMBED',lib)
	if python_SHLIBS is not None:
		for lib in python_SHLIBS.split():
			if lib.startswith('-l'):
				lib=lib[2:]
			env.append_value('LIB_PYEMBED',lib)
	code='''
#ifdef __cplusplus
extern "C" {
#endif
 void Py_Initialize(void);
 void Py_Finalize(void);
#ifdef __cplusplus
}
#endif
int main(int argc, char *argv[]) { Py_Initialize(); Py_Finalize(); return 0; }
'''
	result=1
	name='python'+env['PYTHON_VERSION']
	if python_LIBDIR is not None:
		path=[python_LIBDIR]
		result=conf.check_cc(lib=name,uselib='PYEMBED',libpath=path)
	if result and python_LIBPL is not None:
		path=[python_LIBPL]
		result=conf.check_cc(lib=name,uselib='PYEMBED',libpath=path)
	if result:
		path=[os.path.join(python_prefix,"libs")]
		name='python'+env['PYTHON_VERSION'].replace('.','')
		result=conf.check_cc(lib=name,uselib='PYEMBED',libpath=path)
	if not result:
		env['LIBPATH_PYEMBED']=path
		env.append_value('LIB_PYEMBED',name)
	if(sys.platform=='win32'or sys.platform.startswith('os2')or sys.platform=='darwin'or Py_ENABLE_SHARED):
		env['LIBPATH_PYEXT']=env['LIBPATH_PYEMBED']
		env['LIB_PYEXT']=env['LIB_PYEMBED']
	python_config=conf.find_program('python%s-config'%('.'.join(env['PYTHON_VERSION'].split('.')[:2])),var='PYTHON_CONFIG')
	if python_config:
		includes=[]
		for incstr in os.popen("%s %s --includes"%(python,python_config)).readline().strip().split():
			if(incstr.startswith('-I')or incstr.startswith('/I')):
				incstr=incstr[2:]
			if incstr not in includes:
				includes.append(incstr)
		conf.log.write("Include path for Python extensions ""(found via python-config --includes): %r\n"%(list(includes),))
		env['CPPPATH_PYEXT']=list(includes)
		env['CPPPATH_PYEMBED']=list(includes)
	else:
		conf.log.write("Include path for Python extensions ""(found via distutils module): %r\n"%(list(includes),))
		env['CPPPATH_PYEXT']=[INCLUDEPY]
		env['CPPPATH_PYEMBED']=[INCLUDEPY]
	if env['CC']:
		version=os.popen("%s --version"%env['CC']).readline()
		if'(GCC)'in version or'gcc'in version:
			env.append_value('CCFLAGS_PYEMBED','-fno-strict-aliasing')
			env.append_value('CCFLAGS_PYEXT','-fno-strict-aliasing')
	if env['CXX']:
		version=os.popen("%s --version"%env['CXX']).readline()
		if'(GCC)'in version or'g++'in version:
			env.append_value('CXXFLAGS_PYEMBED','-fno-strict-aliasing')
			env.append_value('CXXFLAGS_PYEXT','-fno-strict-aliasing')
	test_env=env.copy()
	test_env.append_value('CPPPATH',env['CPPPATH_PYEMBED'])
	test_env.append_value('LIBPATH',env['LIBPATH_PYEMBED'])
	test_env.append_value('LIB',env['LIB_PYEMBED'])
	test_env.append_value('CXXFLAGS',env['CXXFLAGS_PYEMBED'])
	test_env.append_value('CCFLAGS',env['CCFLAGS_PYEMBED'])
	conf.check_cc(header_name='Python.h',define_name='HAVE_PYTHON_H',env=test_env,fragment='''#include <Python.h>\nint main(int argc, char *argv[]) { Py_Initialize(); Py_Finalize(); return 0; }\n''',errmsg='Could not find the python development headers',mandatory=1)
def check_python_version(conf,minver=None):
	assert minver is None or isinstance(minver,tuple)
	python=conf.env['PYTHON']
	assert python,("python is %r !"%(python,))
	cmd=[python,"-c","import sys\nfor x in sys.version_info: print str(x)"]
	debug('python: Running python command %r'%cmd)
	proc=pproc.Popen(cmd,stdout=pproc.PIPE)
	lines=proc.communicate()[0].split()
	assert len(lines)==5,"found %i lines, expected 5: %r"%(len(lines),lines)
	pyver_tuple=(int(lines[0]),int(lines[1]),int(lines[2]),lines[3],int(lines[4]))
	result=(minver is None)or(pyver_tuple>=minver)
	if result:
		pyver='.'.join([str(x)for x in pyver_tuple[:2]])
		conf.env['PYTHON_VERSION']=pyver
		if'PYTHONDIR'in os.environ:
			pydir=os.environ['PYTHONDIR']
		else:
			if sys.platform=='win32':
				(python_LIBDEST,)=_get_python_variables(python,["get_config_var('LIBDEST')"],['from distutils.sysconfig import get_config_var'])
			else:
				python_LIBDEST=None
			if python_LIBDEST is None:
				if conf.env['LIBDIR']:
					python_LIBDEST=os.path.join(conf.env['LIBDIR'],"python"+pyver)
				else:
					python_LIBDEST=os.path.join(conf.env['PREFIX'],"lib","python"+pyver)
			pydir=os.path.join(python_LIBDEST,"site-packages")
		if hasattr(conf,'define'):
			conf.define('PYTHONDIR',pydir)
		conf.env['PYTHONDIR']=pydir
	pyver_full='.'.join(map(str,pyver_tuple[:3]))
	if minver is None:
		conf.check_message_custom('Python version','',pyver_full)
	else:
		minver_str='.'.join(map(str,minver))
		conf.check_message('Python version',">= %s"%(minver_str,),result,option=pyver_full)
	if not result:
		conf.fatal("Python too old.")
def check_python_module(conf,module_name):
	result=not pproc.Popen([conf.env['PYTHON'],"-c","import %s"%module_name],stderr=pproc.PIPE,stdout=pproc.PIPE).wait()
	conf.check_message('Python module',module_name,result)
	if not result:
		conf.fatal("Python module not found.")
def detect(conf):
	python=conf.find_program('python',var='PYTHON')
	if not python:return
	v=conf.env
	v['PYCMD']='"import sys, py_compile;py_compile.compile(sys.argv[1], sys.argv[2])"'
	v['PYFLAGS']=''
	v['PYFLAGS_OPT']='-O'
	v['PYC']=getattr(Options.options,'pyc',1)
	v['PYO']=getattr(Options.options,'pyo',1)
def set_options(opt):
	opt.add_option('--nopyc',action='store_false',default=1,help='Do not install bytecode compiled .pyc files (configuration) [Default:install]',dest='pyc')
	opt.add_option('--nopyo',action='store_false',default=1,help='Do not install optimised compiled .pyo files (configuration) [Default:install]',dest='pyo')

taskgen(init_pyext)
before('apply_incpaths')(init_pyext)
feature('pyext')(init_pyext)
before('apply_bundle')(init_pyext)
taskgen(pyext_shlib_ext)
before('apply_link')(pyext_shlib_ext)
before('apply_lib_vars')(pyext_shlib_ext)
after('apply_bundle')(pyext_shlib_ext)
feature('pyext')(pyext_shlib_ext)
taskgen(init_pyembed)
before('apply_incpaths')(init_pyembed)
feature('pyembed')(init_pyembed)
extension(EXT_PY)(process_py)
taskgen(init_py)
before('apply_core')(init_py)
after('vars_target_cprogram')(init_py)
after('vars_target_cstaticlib')(init_py)
feature('py')(init_py)
conf(check_python_headers)
conf(check_python_version)
conf(check_python_module)
