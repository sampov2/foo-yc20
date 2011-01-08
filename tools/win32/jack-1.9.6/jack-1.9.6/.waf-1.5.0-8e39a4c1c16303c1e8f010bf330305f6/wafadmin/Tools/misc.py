#! /usr/bin/env python
# encoding: utf-8

import shutil,re,os,types
import TaskGen,Node,Task,Utils,Build,pproc
from TaskGen import feature,taskgen,after
from Logs import debug
def copy_func(tsk):
	env=tsk.env
	infile=tsk.inputs[0].abspath(env)
	outfile=tsk.outputs[0].abspath(env)
	try:
		shutil.copy2(infile,outfile)
	except OSError,IOError:
		return 1
	else:
		if tsk.chmod:os.chmod(outfile,tsk.chmod)
		return 0
def action_process_file_func(tsk):
	if not tsk.fun:raise Utils.WafError('task must have a function attached to it for copy_func to work!')
	return tsk.fun(tsk)
class cmd_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def apply_cmd(self):
	if not self.fun:raise Utils.WafError('cmdobj needs a function!')
	tsk=Task.TaskBase()
	tsk.fun=self.fun
	tsk.env=self.env
	self.tasks.append(tsk)
	tsk.install_path=self.install_path
class copy_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def apply_copy(self):
	Utils.def_attrs(self,fun=copy_func)
	self.default_install_path=0
	lst=self.to_list(self.source)
	for filename in lst:
		node=self.path.find_resource(filename)
		if not node:raise Utils.WafError('cannot find input file %s for processing'%filename)
		target=self.target
		if not target or len(lst)>1:target=node.name
		newnode=self.path.find_or_declare(target)
		tsk=self.create_task('copy')
		tsk.set_inputs(node)
		tsk.set_outputs(newnode)
		tsk.fun=self.fun
		tsk.chmod=self.chmod
		if not tsk.env:
			tsk.debug()
			raise Utils.WafError('task without an environment')
def subst_func(tsk):
	m4_re=re.compile('@(\w+)@',re.M)
	env=tsk.env
	infile=tsk.inputs[0].abspath(env)
	outfile=tsk.outputs[0].abspath(env)
	file=open(infile,'r')
	code=file.read()
	file.close()
	code=code.replace('%','%%')
	s=m4_re.sub(r'%(\1)s',code)
	dict=tsk.dict
	if not dict:
		names=m4_re.findall(code)
		for i in names:
			if env[i]and type(env[i])is types.ListType:
				dict[i]=" ".join(env[i])
			else:dict[i]=env[i]
	file=open(outfile,'w')
	file.write(s%dict)
	file.close()
	if tsk.chmod:os.chmod(outfile,tsk.chmod)
	return 0
class subst_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def apply_subst(self):
	Utils.def_attrs(self,fun=subst_func)
	self.default_install_path=0
	lst=self.to_list(self.source)
	self.dict=getattr(self,'dict',{})
	for filename in lst:
		node=self.path.find_resource(filename)
		if not node:raise Utils.WafError('cannot find input file %s for processing'%filename)
		newnode=node.change_ext('')
		if self.dict and not self.env['DICT_HASH']:
			self.env=self.env.copy()
			self.env['DICT_HASH']=hash(str(self.dict))
		tsk=self.create_task('copy')
		tsk.set_inputs(node)
		tsk.set_outputs(newnode)
		tsk.fun=self.fun
		tsk.dict=self.dict
		tsk.dep_vars=['DICT_HASH']
		tsk.install_path=self.install_path
		tsk.chmod=self.chmod
		if not tsk.env:
			tsk.debug()
			raise Utils.WafError('task without an environment')
class cmd_arg(object):
	def __init__(self,name,template='%s'):
		self.name=name
		self.template=template
		self.node=None
class input_file(cmd_arg):
	def find_node(self,base_path):
		assert isinstance(base_path,Node.Node)
		self.node=base_path.find_resource(self.name)
		if self.node is None:
			raise Utils.WafError("Input file %s not found in "%(self.name,base_path))
	def get_path(self,env,absolute):
		if absolute:
			return self.template%self.node.abspath(env)
		else:
			return self.template%self.node.srcpath(env)
class output_file(cmd_arg):
	def find_node(self,base_path):
		assert isinstance(base_path,Node.Node)
		self.node=base_path.find_or_declare(self.name)
		if self.node is None:
			raise Utils.WafError("Output file %s not found in "%(self.name,base_path))
	def get_path(self,env,absolute):
		if absolute:
			return self.template%self.node.abspath(env)
		else:
			return self.template%self.node.bldpath(env)
class cmd_dir_arg(cmd_arg):
	def __init__(self,name,template=None):
		cmd_arg.__init__(self)
		self.name=name
		self.node=None
		if template is None:
			self.template='%s'
		else:
			self.template=template
	def find_node(self,base_path):
		assert isinstance(base_path,Node.Node)
		self.node=base_path.find_dir(self.name)
		if self.node is None:
			raise Utils.WafError("Directory %s not found in "%(self.name,base_path))
class input_dir(cmd_dir_arg):
	def get_path(self,dummy_env,dummy_absolute):
		return self.template%self.node.abspath()
class output_dir(cmd_dir_arg):
	def get_path(self,env,dummy_absolute):
		return self.template%self.node.abspath(env)
class command_output(Task.Task):
	color="BLUE"
	def __init__(self,env,command,command_node,command_args,stdin,stdout,cwd,os_env,stderr):
		Task.Task.__init__(self,env,normal=1)
		assert isinstance(command,(str,Node.Node))
		self.command=command
		self.command_args=command_args
		self.stdin=stdin
		self.stdout=stdout
		self.cwd=cwd
		self.os_env=os_env
		self.stderr=stderr
		if command_node is not None:self.dep_nodes=[command_node]
		self.dep_vars=[]
	def run(self):
		task=self
		assert len(task.inputs)>0
		def input_path(node,template):
			if task.cwd is None:
				return template%node.bldpath(task.env)
			else:
				return template%node.abspath()
		def output_path(node,template):
			fun=node.abspath
			if task.cwd is None:fun=node.bldpath
			return template%fun(task.env)
		if isinstance(task.command,Node.Node):
			argv=[input_path(task.command,'%s')]
		else:
			argv=[task.command]
		for arg in task.command_args:
			if isinstance(arg,str):
				argv.append(arg)
			else:
				assert isinstance(arg,cmd_arg)
				argv.append(arg.get_path(task.env,(task.cwd is not None)))
		if task.stdin:
			stdin=file(input_path(task.stdin,'%s'))
		else:
			stdin=None
		if task.stdout:
			stdout=file(output_path(task.stdout,'%s'),"w")
		else:
			stdout=None
		if task.stderr:
			stderr=file(output_path(task.stderr,'%s'),"w")
		else:
			stderr=None
		if task.cwd is None:
			cwd=('None (actually %r)'%os.getcwd())
		else:
			cwd=repr(task.cwd)
		debug("command-output: cwd=%s, stdin=%r, stdout=%r, argv=%r"%(cwd,stdin,stdout,argv))
		if task.os_env is None:
			os_env=os.environ
		else:
			os_env=task.os_env
		command=pproc.Popen(argv,stdin=stdin,stdout=stdout,stderr=stderr,cwd=task.cwd,env=os_env)
		return command.wait()
class cmd_output_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def init_cmd_output(self):
	Utils.def_attrs(self,stdin=None,stdout=None,stderr=None,command=None,command_is_external=False,argv=[],dependencies=[],dep_vars=[],hidden_inputs=[],hidden_outputs=[],cwd=None,os_env=None)
def apply_cmd_output(self):
	if self.command is None:
		raise Utils.WafError("command-output missing command")
	if self.command_is_external:
		cmd=self.command
		cmd_node=None
	else:
		cmd_node=self.path.find_resource(self.command)
		assert cmd_node is not None,('''Could not find command '%s' in source tree.
Hint: if this is an external command,
use command_is_external=True''')%(self.command,)
		cmd=cmd_node
	if self.cwd is None:
		cwd=None
	else:
		assert isinstance(cwd,CmdDirArg)
		self.cwd.find_node(self.path)
	args=[]
	inputs=[]
	outputs=[]
	for arg in self.argv:
		if isinstance(arg,cmd_arg):
			arg.find_node(self.path)
			if isinstance(arg,input_file):
				inputs.append(arg.node)
			if isinstance(arg,output_file):
				outputs.append(arg.node)
	if self.stdout is None:
		stdout=None
	else:
		assert isinstance(self.stdout,basestring)
		stdout=self.path.find_or_declare(self.stdout)
		if stdout is None:
			raise Utils.WafError("File %s not found"%(self.stdout,))
		outputs.append(stdout)
	if self.stderr is None:
		stderr=None
	else:
		assert isinstance(self.stderr,basestring)
		stderr=self.path.find_or_declare(self.stderr)
		if stderr is None:
			Params.fatal("File %s not found"%(self.stderr,))
		outputs.append(stderr)
	if self.stdin is None:
		stdin=None
	else:
		assert isinstance(self.stdin,basestring)
		stdin=self.path.find_resource(self.stdin)
		if stdin is None:
			raise Utils.WafError("File %s not found"%(self.stdin,))
		inputs.append(stdin)
	for hidden_input in self.to_list(self.hidden_inputs):
		node=self.path.find_resource(hidden_input)
		if node is None:
			raise Utils.WafError("File %s not found in dir %s"%(hidden_input,self.path))
		inputs.append(node)
	for hidden_output in self.to_list(self.hidden_outputs):
		node=self.path.find_or_declare(hidden_output)
		if node is None:
			raise Utils.WafError("File %s not found in dir %s"%(hidden_output,self.path))
		outputs.append(node)
	if not inputs:
		raise Utils.WafError("command-output objects must have at least one input file")
	if not outputs:
		raise Utils.WafError("command-output objects must have at least one output file")
	task=command_output(self.env,cmd,cmd_node,self.argv,stdin,stdout,cwd,self.os_env,stderr)
	Utils.copy_attrs(self,task,'before after ext_in ext_out',only_if_set=True)
	self.tasks.append(task)
	task.set_inputs(inputs)
	task.set_outputs(outputs)
	task.dep_vars=self.to_list(self.dep_vars)
	for dep in self.dependencies:
		assert dep is not self
		dep.post()
		for dep_task in dep.tasks:
			task.set_run_after(dep_task)
Task.task_type_from_func('copy',vars=[],func=action_process_file_func)
TaskGen.task_gen.classes['command-output']=cmd_output_taskgen

taskgen(apply_cmd)
feature('cmd')(apply_cmd)
taskgen(apply_copy)
feature('copy')(apply_copy)
taskgen(apply_subst)
feature('subst')(apply_subst)
taskgen(init_cmd_output)
feature('command-output')(init_cmd_output)
taskgen(apply_cmd_output)
feature('command-output')(apply_cmd_output)
after('init_cmd_output')(apply_cmd_output)
