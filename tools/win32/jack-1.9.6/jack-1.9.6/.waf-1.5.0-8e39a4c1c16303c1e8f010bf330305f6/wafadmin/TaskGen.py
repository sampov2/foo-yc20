#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import os,types,traceback,copy
import Build,Task,Utils,Logs,Options
from Logs import debug,error,warn
from Constants import*
typos={'sources':'source','targets':'target','include':'includes','define':'defines','importpath':'importpaths','install_var':'install_path','install_subdir':'install_path','inst_var':'install_path','inst_dir':'install_path',}
class register_obj(type):
	def __init__(cls,name,bases,dict):
		super(register_obj,cls).__init__(name,bases,dict)
		name=cls.__name__
		suffix='_taskgen'
		if name.endswith(suffix):
			task_gen.classes[name.replace(suffix,'')]=cls
class task_gen(object):
	__metaclass__=register_obj
	mappings={}
	mapped={}
	prec={}
	traits={}
	classes={}
	idx={}
	def __init__(self,*kw,**kwargs):
		self.prec={}
		self.source=''
		self.target=''
		self.meths=[]
		self.mappings={}
		self.features=list(kw)
		self.tasks=[]
		self.default_chmod=0644
		self.default_install_path=None
		if Options.is_install:
			self.inst_files=[]
		self.allnodes=[]
		self.bld=kwargs.get('bld',Build.bld)
		self.env=self.bld.env.copy()
		self.path=self.bld.path
		self.name=''
		self.bld.all_task_gen.append(self)
		self.idx=task_gen.idx[self.path.id]=task_gen.idx.get(self.path.id,0)+1
		for key,val in kwargs.iteritems():
			setattr(self,key,val)
	def __str__(self):
		return("<task_gen '%s' of type %s defined in %s>"%(self.name or self.target,self.__class__.__name__,str(self.path)))
	def __setattr__(self,name,attr):
		real=typos.get(name,name)
		if real!=name:
			warn('typo %s -> %s'%(name,real))
			if Logs.verbose>0:
				traceback.print_stack()
		object.__setattr__(self,real,attr)
	def to_list(self,value):
		if type(value)is types.StringType:return value.split()
		else:return value
	def apply_core(self):
		find_resource=self.path.find_resource
		for filename in self.to_list(self.source):
			x=self.get_hook(filename)
			if x:
				x(self,filename)
			else:
				node=find_resource(filename)
				if not node:raise Utils.WafError("source not found: '%s' in '%s'"%(filename,str(self.path)))
				self.allnodes.append(node)
		for node in self.allnodes:
			filename=node.name
			k=max(0,filename.rfind('.'))
			x=self.get_hook(filename[k:])
			if not x:
				raise Utils.WafError("Do not know how to process %s in %s, mappings are %s"%(str(node),str(self.__class__),str(self.__class__.mappings)))
			x(self,node)
	def apply(self):
		keys=set(self.meths)
		self.features=Utils.to_list(self.features)
		for x in self.features+['*']:
			keys.update(task_gen.traits.get(x,()))
		prec={}
		prec_tbl=self.prec or task_gen.prec
		for x in prec_tbl:
			if x in keys:
				prec[x]=prec_tbl[x]
		tmp=[]
		for a in keys:
			for x in prec.values():
				if a in x:break
			else:
				tmp.append(a)
		out=[]
		while tmp:
			e=tmp.pop()
			if e in keys:out.append(e)
			try:
				nlst=prec[e]
			except KeyError:
				pass
			else:
				del prec[e]
				for x in nlst:
					for y in prec:
						if x in prec[y]:
							break
					else:
						tmp.append(x)
		if prec:raise Utils.WafError("graph has a cycle %s"%str(prec))
		out.reverse()
		self.meths=out
		if not out:out.append(self.apply_core.__name__)
		debug('task_gen: posting %s %d'%(self,id(self)))
		for x in out:
			try:
				v=getattr(self,x)
			except AttributeError:
				raise Utils.WafError("tried to retrieve %s which is not a valid method"%x)
			debug('task_gen: -> %s (%d)'%(x,id(self)))
			v()
	def post(self):
		if not self.name:self.name=self.target
		if getattr(self,'posted',None):
			return
		self.apply()
		debug('task_gen: posted %s'%self.name)
		self.posted=True
	def get_hook(self,ext):
		try:return self.mappings[ext]
		except KeyError:
			try:return task_gen.mappings[ext]
			except KeyError:return None
	def create_task(self,name,env=None):
		task=Task.TaskBase.classes[name](env or self.env,generator=self)
		self.tasks.append(task)
		return task
	def name_to_obj(self,name):
		return self.bld.name_to_obj(name,self.env)
	def find_sources_in_dirs(self,dirnames,excludes=[],exts=[]):
		lst=[]
		err_msg="'%s' attribute must be a list.\n""Directories should be given either as a string separated by spaces, or as a list."
		not_a_list=lambda x:x and type(x)is not types.ListType
		if not_a_list(excludes):
			raise Utils.WscriptError(err_msg%'excludes')
		if not_a_list(exts):
			raise Utils.WscriptError(err_msg%'exts')
		dirnames=self.to_list(dirnames)
		ext_lst=exts or self.mappings.keys()+task_gen.mappings.keys()
		for name in dirnames:
			anode=self.path.find_dir(name)
			if not anode or not anode.is_child_of(self.bld.srcnode):
				raise Utils.WscriptError("Unable to use '%s' - either because it's not a relative path"", or it's not child of '%s'."%(name,self.bld.srcnode))
			self.bld.rescan(anode)
			for name in self.bld.cache_dir_contents[anode.id]:
				(base,ext)=os.path.splitext(name)
				if ext in ext_lst and not name in lst and not name in excludes:
					lst.append((anode.relpath_gen(self.path)or'.')+os.path.sep+name)
		lst.sort()
		self.source=self.to_list(self.source)
		if not self.source:self.source=lst
		else:self.source+=lst
	def clone(self,env):
		newobj=task_gen(bld=self.bld)
		for x in self.__dict__:
			if x in["env"]:
				continue
			elif x in["path","features"]:
				setattr(newobj,x,getattr(self,x))
			else:
				setattr(newobj,x,copy.copy(getattr(self,x)))
		newobj.__class__=self.__class__
		if type(env)is types.StringType:
			newobj.env=self.bld.all_envs[env].copy()
		else:
			newobj.env=env.copy()
		self.bld.all_task_gen.append(newobj)
		return newobj
	def get_inst_path(self):
		return getattr(self,'_install_path',getattr(self,'default_install_path',''))
	def set_inst_path(self,val):
		self._install_path=val
	install_path=property(get_inst_path,set_inst_path)
	def get_chmod(self):
		return getattr(self,'_chmod',getattr(self,'default_chmod',0644))
	def set_chmod(self,val):
		self._chmod=val
	chmod=property(get_chmod,set_chmod)
def declare_extension(var,func):
	try:
		for x in var:
			task_gen.mappings[x]=func
	except:
		raise Utils.WscriptError('declare extension takes either a list or a string %s'%str(var))
	task_gen.mapped[func.__name__]=func
def declare_order(*k):
	assert(len(k)>1)
	n=len(k)-1
	for i in xrange(n):
		f1=k[i]
		f2=k[i+1]
		try:
			if not f1 in task_gen.prec[f2]:task_gen.prec[f2].append(f1)
		except:
			task_gen.prec[f2]=[f1]
def declare_chain(name='',action='',ext_in='',ext_out='',reentrant=1,color='BLUE',install=0,before=[],after=[],decider=None):
	if type(action)is types.StringType:
		act=Task.simple_task_type(name,action,color=color)
	else:
		act=Task.task_type_from_func(name,action,color=color)
	act.ext_in=tuple(Utils.to_list(ext_in))
	act.ext_out=tuple(Utils.to_list(ext_out))
	act.before=Utils.to_list(before)
	act.after=Utils.to_list(after)
	def x_file(self,node):
		if decider:
			ext=decider(self,node)
		elif type(ext_out)is types.StringType:
			ext=ext_out
		if type(ext)is types.StringType:
			out_source=node.change_ext(ext)
			if reentrant:
				self.allnodes.append(out_source)
		elif type(ext)==types.ListType:
			out_source=[node.change_ext(x)for x in ext]
			if reentrant:
				for i in xrange(reentrant):
					self.allnodes.append(out_source[i])
		else:
			raise Utils.WafError("do not know how to process %s"%str(ext))
		tsk=self.create_task(name)
		tsk.set_inputs(node)
		tsk.set_outputs(out_source)
		if Options.is_install and install:
			tsk.install=install
	declare_extension(act.ext_in,x_file)
def bind_feature(name,methods):
	lst=Utils.to_list(methods)
	try:
		l=task_gen.traits[name]
	except KeyError:
		l=set()
		task_gen.traits[name]=l
	l.update(lst)
def taskgen(func):
	setattr(task_gen,func.__name__,func)
def feature(*k):
	def deco(func):
		setattr(task_gen,func.__name__,func)
		for name in k:
			try:
				l=task_gen.traits[name]
			except KeyError:
				l=set()
				task_gen.traits[name]=l
			l.update([func.__name__])
		return func
	return deco
def before(*k):
	def deco(func):
		for fun_name in k:
			try:
				if not func.__name__ in task_gen.prec[fun_name]:task_gen.prec[fun_name].append(func.__name__)
			except KeyError:
				task_gen.prec[fun_name]=[func.__name__]
		return func
	return deco
def after(*k):
	def deco(func):
		for fun_name in k:
			try:
				if not fun_name in task_gen.prec[func.__name__]:task_gen.prec[func.__name__].append(fun_name)
			except KeyError:
				task_gen.prec[func.__name__]=[fun_name]
		return func
	return deco
def extension(var):
	if type(var)is types.ListType:
		pass
	elif type(var)is types.StringType:
		var=[var]
	else:
		raise Utils.WafError('declare extension takes either a list or a string %s'%str(var))
	def deco(func):
		setattr(task_gen,func.__name__,func)
		for x in var:
			task_gen.mappings[x]=func
		task_gen.mapped[func.__name__]=func
		return func
	return deco

