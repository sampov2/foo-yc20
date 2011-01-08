#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import os,types,shutil,sys,re,new,random,time
from Utils import md5
import Build,Runner,Utils,Node,Logs,Options
from Logs import debug,error,warn
from Constants import*
algotype=NORMAL
class TaskManager(object):
	def __init__(self):
		self.groups=[]
		self.tasks_done=[]
		self.current_group=0
	def get_next_set(self):
		ret=None
		while not ret and self.current_group<len(self.groups):
			ret=self.groups[self.current_group].get_next_set()
			if ret:return ret
			else:self.current_group+=1
		return(None,None)
	def add_group(self):
		if self.groups and not self.groups[0].tasks:
			warn('add_group: an empty group is already present')
		self.groups.append(TaskGroup())
	def add_task(self,task):
		if not self.groups:self.add_group()
		self.groups[-1].add_task(task)
	def total(self):
		total=0
		if not self.groups:return 0
		for group in self.groups:
			total+=len(group.tasks)
		return total
	def add_finished(self,tsk):
		self.tasks_done.append(tsk)
		bld=tsk.generator.bld
		if Options.is_install:
			f=None
			if'install'in tsk.__dict__:
				f=tsk.__dict__['install']
				f(tsk)
			else:
				tsk.install()
class TaskGroup(object):
	def __init__(self):
		self.tasks=[]
		self.cstr_groups={}
		self.cstr_order={}
		self.temp_tasks=[]
		self.ready=0
	def reset(self):
		for x in self.cstr_groups:
			self.tasks+=self.cstr_groups[x]
		self.tasks=self.temp_tasks+self.tasks
		self.temp_tasks=[]
		self.cstr_groups=[]
		self.cstr_order={}
		self.ready=0
	def prepare(self):
		self.ready=1
		self.make_cstr_groups()
		self.extract_constraints()
	def get_next_set(self):
		global algotype
		if algotype==NORMAL:
			tasks=self.tasks_in_parallel()
			maxj=sys.maxint
		elif algotype==JOBCONTROL:
			(maxj,tasks)=self.tasks_by_max_jobs()
		elif algotype==MAXPARALLEL:
			tasks=self.tasks_with_inner_constraints()
			maxj=sys.maxint
		else:
			raise Utils.WafError("unknown algorithm type %s"%(algotype))
		if not tasks:return()
		return(maxj,tasks)
	def make_cstr_groups(self):
		self.cstr_groups={}
		for x in self.tasks:
			h=x.hash_constraints()
			try:self.cstr_groups[h].append(x)
			except KeyError:self.cstr_groups[h]=[x]
	def add_task(self,task):
		try:self.tasks.append(task)
		except KeyError:self.tasks=[task]
	def set_order(self,a,b):
		try:self.cstr_order[a].add(b)
		except KeyError:self.cstr_order[a]=set([b,])
	def compare_exts(self,t1,t2):
		x="ext_in"
		y="ext_out"
		in_=t1.attr(x,())
		out_=t2.attr(y,())
		for k in in_:
			if k in out_:
				return-1
		in_=t2.attr(x,())
		out_=t1.attr(y,())
		for k in in_:
			if k in out_:
				return 1
		return 0
	def compare_partial(self,t1,t2):
		m="after"
		n="before"
		name=t2.__class__.__name__
		if name in t1.attr(m,()):return-1
		elif name in t1.attr(n,()):return 1
		name=t1.__class__.__name__
		if name in t2.attr(m,()):return 1
		elif name in t2.attr(n,()):return-1
		return 0
	def extract_constraints(self):
		keys=self.cstr_groups.keys()
		max=len(keys)
		for i in xrange(max):
			t1=self.cstr_groups[keys[i]][0]
			for j in xrange(i+1,max):
				t2=self.cstr_groups[keys[j]][0]
				val=(self.compare_exts(t1,t2)or self.compare_partial(t1,t2))
				if val>0:
					self.set_order(keys[i],keys[j])
				elif val<0:
					self.set_order(keys[j],keys[i])
	def tasks_in_parallel(self):
		if not self.ready:self.prepare()
		keys=self.cstr_groups.keys()
		unconnected=[]
		remainder=[]
		for u in keys:
			for k in self.cstr_order.values():
				if u in k:
					remainder.append(u)
					break
			else:
				unconnected.append(u)
		toreturn=[]
		for y in unconnected:
			toreturn.extend(self.cstr_groups[y])
		for y in unconnected:
			try:self.cstr_order.__delitem__(y)
			except KeyError:pass
			self.cstr_groups.__delitem__(y)
		if not toreturn and remainder:
			raise Utils.WafError("circular order constraint detected %r"%remainder)
		return toreturn
	def tasks_by_max_jobs(self):
		if not self.ready:self.prepare()
		if not self.temp_tasks:self.temp_tasks=self.tasks_in_parallel()
		if not self.temp_tasks:return(None,None)
		maxjobs=sys.maxint
		ret=[]
		remaining=[]
		for t in self.temp_tasks:
			m=getattr(t,"maxjobs",getattr(self.__class__,"maxjobs",sys.maxint))
			if m>maxjobs:
				remaining.append(t)
			elif m<maxjobs:
				remaining+=ret
				ret=[t]
				maxjobs=m
			else:
				ret.append(t)
		self.temp_tasks=remaining
		return(maxjobs,ret)
	def tasks_with_inner_constraints(self):
		if not self.ready:self.prepare()
		if getattr(self,"done",None):return None
		for p in self.cstr_order:
			for v in self.cstr_order[p]:
				for m in self.cstr_groups[p]:
					for n in self.cstr_groups[v]:
						n.set_run_after(m)
		self.cstr_order={}
		self.cstr_groups={}
		self.done=1
		return self.tasks[:]
class store_task_type(type):
	def __init__(cls,name,bases,dict):
		super(store_task_type,cls).__init__(name,bases,dict)
		name=cls.__name__
		if name.endswith('_task'):
			name=name.replace('_task','')
			TaskBase.classes[name]=cls
class TaskBase(object):
	__metaclass__=store_task_type
	color="GREEN"
	maxjobs=sys.maxint
	classes={}
	stat=None
	def __init__(self,*k,**kw):
		self.hasrun=NOT_RUN
		try:
			self.generator=kw['generator']
		except KeyError:
			self.generator=self
			self.bld=Build.bld
		if kw.get('normal',1):
			self.generator.bld.task_manager.add_task(self)
	def __repr__(self):
		return'\n\t{task: %s %s}'%(self.__class__.__name__,str(getattr(self,"fun","")))
	def __str__(self):
		try:self.fun
		except AttributeError:return self.__class__.__name__+'\n'
		else:return'executing: %s\n'%self.fun.__name__
	def runnable_status(self):
		return RUN_ME
	def can_retrieve_cache(self):
		return False
	def call_run(self):
		if self.can_retrieve_cache():
			return 0
		return self.run()
	def run(self):
		try:fun=self.fun
		except:return 0
		return fun(self)
	def post_run(self):
		pass
	def display(self):
		col1=Logs.colors(self.color)
		col2=Logs.colors.NORMAL
		if Options.options.progress_bar==1:
			return self.generator.bld.progress_line(self.position[0],self.position[1],col1,col2)
		if Options.options.progress_bar==2:
			try:ini=self.generator.bld.ini
			except AttributeError:ini=self.generator.bld.ini=time.time()
			ela=time.strftime('%H:%M:%S',time.gmtime(time.time()-ini))
			ins=','.join([n.name for n in self.inputs])
			outs=','.join([n.name for n in self.outputs])
			return'|Total %s|Current %s|Inputs %s|Outputs %s|Time %s|\n'%(self.position[1],self.position[0],ins,outs,ela)
		total=self.position[1]
		n=len(str(total))
		fs='[%%%dd/%%%dd] %%s%%s%%s'%(n,n)
		return fs%(self.position[0],self.position[1],col1,str(self),col2)
	def attr(self,att,default=None):
		return getattr(self,att,getattr(self.__class__,att,default))
	def hash_constraints(self):
		sum=0
		names=('before','after','ext_in','ext_out')
		sum=hash((sum,self.__class__.__name__,))
		for x in names:
			sum=hash((sum,str(self.attr(x,sys.maxint)),))
		sum=hash((sum,self.__class__.maxjobs))
		return sum
	def format_error(self):
		if getattr(self,"error_msg",None):
			return self.error_msg
		elif self.hasrun==CRASHED:
			try:
				return" -> task failed (err #%d): %r"%(self.err_code,self)
			except AttributeError:
				return" -> task failed: %r"%self
		elif self.hasrun==EXCEPTION:
			return self.err_msg
		elif self.hasrun==MISSING:
			return" -> missing files: %r"%self
		else:
			return''
	def install(self):
		bld=self.generator.bld
		d=self.attr('install')
		if self.attr('install_path'):
			lst=[a.relpath_gen(bld.srcnode)for a in self.outputs]
			perm=self.attr('chmod',0644)
			if self.attr('src'):
				lst+=[a.relpath_gen(bld.srcnode)for a in self.inputs]
			if self.attr('filename'):
				dir=self.install_path+self.attr('filename')
				bld.install_as(self.install_path,lst[0],self.env,perm)
			else:
				bld.install_files(self.install_path,lst,self.env,perm)
class Task(TaskBase):
	vars=[]
	def __init__(self,env,**kw):
		TaskBase.__init__(self,**kw)
		self.env=env
		self.inputs=[]
		self.outputs=[]
		self.deps_nodes=[]
		self.run_after=[]
	def __str__(self):
		env=self.env
		src_str=' '.join([a.nice_path(env)for a in self.inputs])
		tgt_str=' '.join([a.nice_path(env)for a in self.outputs])
		return'%s: %s -> %s\n'%(self.__class__.__name__,src_str,tgt_str)
	def __repr__(self):
		return"".join(['\n\t{task: ',self.__class__.__name__," ",",".join([x.name for x in self.inputs])," -> ",",".join([x.name for x in self.outputs]),'}'])
	def unique_id(self):
		try:
			return self.uid
		except AttributeError:
			m=md5()
			up=m.update
			up(self.env.variant())
			for x in self.inputs+self.outputs:
				up(x.abspath())
			up(self.__class__.__name__)
			up(Utils.h_fun(self.run))
			self.uid=m.digest()
			return self.uid
	def set_inputs(self,inp):
		if type(inp)is types.ListType:self.inputs+=inp
		else:self.inputs.append(inp)
	def set_outputs(self,out):
		if type(out)is types.ListType:self.outputs+=out
		else:self.outputs.append(out)
	def set_run_after(self,task):
		assert isinstance(task,TaskBase)
		self.run_after.append(task)
	def add_file_dependency(self,filename):
		node=self.generator.bld.current.find_resource(filename)
		self.deps_nodes.append(node)
	def signature(self):
		try:return self.cache_sig[0]
		except AttributeError:pass
		m=md5()
		exp_sig=self.sig_explicit_deps()
		m.update(exp_sig)
		imp_sig=self.scan and self.sig_implicit_deps()or SIG_NIL
		m.update(imp_sig)
		var_sig=self.sig_vars()
		m.update(var_sig)
		ret=m.digest()
		self.cache_sig=(ret,exp_sig,imp_sig,var_sig)
		return ret
	def runnable_status(self):
		if self.inputs and(not self.outputs):
			if not getattr(self.__class__,'quiet',None):
				error("task is invalid : no inputs or outputs (override in a Task subclass?) %r"%self)
		for t in self.run_after:
			if not t.hasrun:
				return ASK_LATER
		env=self.env
		bld=self.generator.bld
		time=None
		for node in self.outputs:
			variant=node.variant(env)
			try:
				time=bld.node_sigs[variant][node.id]
			except KeyError:
				debug("task: task %r must run as the first node does not exist"%self)
				time=None
				break
		if time is None:
			try:
				new_sig=self.signature()
			except KeyError:
				debug("task: something is wrong, computing the task signature failed")
				return RUN_ME
			return RUN_ME
		key=self.unique_id()
		try:
			prev_sig=bld.task_sigs[key][0]
		except KeyError:
			debug("task: task %r must run as it was never run before or the task code changed"%self)
			return RUN_ME
		new_sig=self.signature()
		if Logs.verbose:self.debug_why(bld.task_sigs[key])
		if new_sig!=prev_sig:
			return RUN_ME
		return SKIP_ME
	def post_run(self):
		bld=self.generator.bld
		env=self.env
		sig=self.signature()
		cnt=0
		for node in self.outputs:
			variant=node.variant(env)
			os.stat(node.abspath(env))
			bld.node_sigs[variant][node.id]=sig
			if Options.cache_global:
				ssig=sig.encode('hex')
				dest=os.path.join(Options.cache_global,ssig+'-'+str(cnt))
				try:shutil.copy2(node.abspath(env),dest)
				except IOError:warn('Could not write the file to the cache')
				cnt+=1
		bld.task_sigs[self.unique_id()]=self.cache_sig
		self.executed=1
	def can_retrieve_cache(self):
		if not Options.cache_global:return None
		if Options.options.nocache:return None
		env=self.env
		sig=self.signature()
		cnt=0
		for node in self.outputs:
			variant=node.variant(env)
			ssig=sig.encode('hex')
			orig=os.path.join(Options.cache_global,ssig+'-'+str(cnt))
			try:
				shutil.copy2(orig,node.abspath(env))
				os.utime(orig,None)
			except(OSError,IOError):
				debug('task: failed retrieving file')
				return None
			else:
				cnt+=1
				self.generator.bld.node_sigs[variant][node.id]=sig
				self.generator.bld.printout('restoring from cache %r\n'%node.bldpath(env))
		return 1
	def debug_why(self,old_sigs):
		new_sigs=self.cache_sig
		def v(x):
			return x.encode('hex')
		debug("Task %r"%self)
		msgs=['Task must run','* Source file or manual dependency','* Implicit dependency','* Environment variable']
		tmp='task: -> %s: %s %s'
		for x in xrange(len(msgs)):
			if(new_sigs[x]!=old_sigs[x]):
				debug(tmp%(msgs[x],v(old_sigs[x]),v(new_sigs[x])))
	def sig_explicit_deps(self):
		bld=self.generator.bld
		m=md5()
		for x in self.inputs:
			variant=x.variant(self.env)
			m.update(bld.node_sigs[variant][x.id])
		for x in getattr(self,'dep_nodes',[]):
			variant=x.variant(self.env)
			v=bld.node_sigs[variant][x.id]
			m.update(v)
		try:
			additional_deps=bld.deps_man
		except AttributeError:
			pass
		else:
			for x in self.inputs+self.outputs:
				try:
					d=additional_deps[x.id]
				except KeyError:
					continue
				if callable(d):
					d=d()
				for v in d:
					if isinstance(v,Node.Node):
						bld.rescan(v.parent)
						variant=v.variant(self.env)
						try:
							v=bld.node_sigs[variant][v.id]
						except KeyError:
							v=''
					m.update(v)
		return m.digest()
	def sig_vars(self):
		m=md5()
		bld=self.generator.bld
		env=self.env
		act_sig=bld.hash_env_vars(env,self.__class__.vars)
		m.update(act_sig)
		var_sig=SIG_NIL
		dep_vars=getattr(self,'dep_vars',None)
		if dep_vars:
			var_sig=bld.hash_env_vars(env,dep_vars)
			m.update(var_sig)
		for x in getattr(self.__class__,'vars',()):
			k=env[x]
			if k:
				m.update(str(k))
				vars_sig=hash((var_sig,str(k)))
		return m.digest()
	scan=None
	def sig_implicit_deps(self):
		bld=self.generator.bld
		key=self.unique_id()
		prev_sigs=bld.task_sigs.get(key,())
		if prev_sigs:
			try:
				if prev_sigs[2]==self.compute_sig_implicit_deps():
					return prev_sigs[2]
			except KeyError:
				pass
		(nodes,names)=self.scan()
		if Logs.verbose and Logs.zones:
			debug('deps: scanner for %s returned %s %s'%(str(self),str(nodes),str(names)))
		bld.node_deps[self.unique_id()]=nodes
		bld.raw_deps[self.unique_id()]=names
		sig=self.compute_sig_implicit_deps()
		return sig
	def compute_sig_implicit_deps(self):
		m=md5()
		upd=m.update
		bld=self.generator.bld
		tstamp=bld.node_sigs
		env=self.env
		for k in bld.node_deps.get(self.unique_id(),())+self.inputs:
			if not k.parent.id in bld.cache_scanned_folders:
				bld.rescan(k.parent)
			if k.id&3==Node.FILE:
				upd(tstamp[0][k.id])
			else:
				upd(tstamp[env.variant()][k.id])
		return m.digest()
def funex(c):
	exec(c)
	return f
reg_act=re.compile(r"(?P<dollar>\$\$)|(?P<subst>\$\{(?P<var>\w+)(?P<code>.*?)\})",re.M)
def compile_fun(name,line):
	extr=[]
	def repl(match):
		g=match.group
		if g('dollar'):return"$"
		elif g('subst'):extr.append((g('var'),g('code')));return"%s"
		return None
	line=reg_act.sub(repl,line)
	parm=[]
	dvars=[]
	app=parm.append
	for(var,meth)in extr:
		if var=='SRC':
			if meth:app('task.inputs%s'%meth)
			else:app('" ".join([a.srcpath(env) for a in task.inputs])')
		elif var=='TGT':
			if meth:app('task.outputs%s'%meth)
			else:app('" ".join([a.bldpath(env) for a in task.outputs])')
		else:
			if not var in dvars:dvars.append(var)
			app("p('%s')"%var)
	if parm:parm="%% (%s) "%(',\n\t\t'.join(parm))
	else:parm=''
	c='''
def f(task):
	env = task.env
	p = env.get_flat
	cmd = "%s" %s
	return task.generator.bld.exec_command(cmd)
'''%(line,parm)
	debug('action: %s'%c)
	return(funex(c),dvars)
def simple_task_type(name,line,color='GREEN',vars=[],ext_in=[],ext_out=[],before=[],after=[]):
	(fun,dvars)=compile_fun(name,line)
	fun.code=line
	return task_type_from_func(name,fun,vars or dvars,color,ext_in,ext_out,before,after)
def task_type_from_func(name,func,vars=[],color='GREEN',ext_in=[],ext_out=[],before=[],after=[]):
	params={'run':func,'vars':vars,'color':color,'name':name,'ext_in':Utils.to_list(ext_in),'ext_out':Utils.to_list(ext_out),'before':Utils.to_list(before),'after':Utils.to_list(after),}
	cls=new.classobj(name,(Task,),params)
	TaskBase.classes[name]=cls
	return cls

