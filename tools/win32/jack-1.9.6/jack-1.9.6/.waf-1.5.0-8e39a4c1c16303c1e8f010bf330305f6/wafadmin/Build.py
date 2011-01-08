#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import os,sys,cPickle,types,imp,errno,re,glob,gc,time,shutil
import Runner,TaskGen,Node,Scripting,Utils,Environment,Task,Logs,Options
from Logs import debug,error,info
from Constants import*
SAVED_ATTRS='root srcnode bldnode node_sigs node_deps raw_deps task_sigs id_nodes'.split()
g_modcache={}
bld=None
class BuildError(Utils.WafError):
	def __init__(self,b=None,t=[]):
		self.bld=b
		self.tasks=t
		self.ret=1
		Utils.WafError.__init__(self,self.format_error())
	def format_error(self):
		lst=['Build failed']
		for tsk in self.tasks:
			txt=tsk.format_error()
			if txt:lst.append(txt)
		return'\n'.join(lst)
class BuildContext(object):
	def __init__(self):
		global bld
		bld=self
		self.task_manager=Task.TaskManager()
		self.id_nodes=0
		self.all_envs={}
		self.bdir=''
		self.path=None
		self.cache_node_abspath={}
		self.cache_scanned_folders={}
		self.uninstall=[]
		for v in'cache_node_abspath task_sigs node_deps raw_deps node_sigs'.split():
			var={}
			setattr(self,v,var)
		self.cache_dir_contents={}
		self.all_task_gen=[]
		self.task_gen_cache_names={}
		self.cache_sig_vars={}
		self.log=None
		self.root=None
		self.srcnode=None
		self.bldnode=None
		class node_class(Node.Node):
			pass
		self.node_class=node_class
		self.node_class.__module__="Node"
		self.node_class.__name__="Nodu"
		self.node_class.bld=self
	def load(self):
		try:
			env=Environment.Environment(os.path.join(self.cachedir,'build.config.py'))
		except(IOError,OSError):
			pass
		else:
			if env['version']<HEXVERSION:
				raise Utils.WafError('Version mismatch! reconfigure the project')
			for t in env['tools']:
				self.setup(**t)
		try:
			gc.disable()
			f=data=None
			Node.Nodu=self.node_class
			try:
				f=open(os.path.join(self.bdir,DBFILE),'rb')
			except(IOError,EOFError):
				pass
			try:
				if f:data=cPickle.load(f)
			except AttributeError:
				if Logs.verbose>1:raise
			if data:
				for x in SAVED_ATTRS:setattr(self,x,data[x])
			else:
				debug('build: Build cache loading failed')
		finally:
			if f:f.close()
			gc.enable()
	def save(self):
		gc.disable()
		self.root.__class__.bld=None
		Node.Nodu=self.node_class
		file=open(os.path.join(self.bdir,DBFILE),'wb')
		data={}
		for x in SAVED_ATTRS:data[x]=getattr(self,x)
		cPickle.dump(data,file,-1)
		file.close()
		self.root.__class__.bld=self
		gc.enable()
	def clean(self):
		debug('build: clean called')
		def clean_rec(node):
			for x in node.childs.keys():
				nd=node.childs[x]
				tp=nd.id&3
				if tp==Node.DIR:
					clean_rec(nd)
				elif tp==Node.BUILD:
					for env in self.all_envs.values():
						pt=nd.abspath(env)
						if pt in env['waf_config_files']:continue
						try:os.remove(pt)
						except OSError:pass
					node.childs.__delitem__(x)
		node=self.srcnode
		clean_rec(node)
		if node==self.srcnode:
			for v in'node_sigs node_deps task_sigs raw_deps cache_node_abspath'.split():
				var={}
				setattr(self,v,var)
	def compile(self):
		debug('build: compile called')
		os.chdir(self.bdir)
		self.flush()
		self.generator=Runner.Parallel(self,Options.options.jobs)
		def dw(on=True):
			if Options.options.progress_bar:
				if on:sys.stdout.write(Logs.colors.cursor_on)
				else:sys.stdout.write(Logs.colors.cursor_off)
		debug('build: executor starting')
		try:
			dw(on=False)
			self.generator.start()
		except KeyboardInterrupt:
			dw()
			os.chdir(self.srcnode.abspath())
			self.save()
			Utils.pprint('RED','Build interrupted')
			if Logs.verbose>1:raise
			else:sys.exit(68)
		except Exception:
			dw()
			raise
		else:
			dw()
			self.save()
		if self.generator.error:
			os.chdir(self.srcnode.abspath())
			raise BuildError(self,self.task_manager.tasks_done)
		os.chdir(self.srcnode.abspath())
	def install(self):
		debug('build: install called')
		self.flush()
		if Options.commands['uninstall']:
			lst=[]
			for x in self.uninstall:
				dir=os.path.dirname(x)
				if not dir in lst:lst.append(dir)
			lst.sort()
			lst.reverse()
			nlst=[]
			for y in lst:
				x=y
				while len(x)>4:
					if not x in nlst:nlst.append(x)
					x=os.path.dirname(x)
			nlst.sort()
			nlst.reverse()
			for x in nlst:
				try:os.rmdir(x)
				except OSError:pass
	def add_subdirs(self,dirs):
		for dir in Utils.to_list(dirs):
			if dir:Scripting.add_subdir(dir,self)
	def new_task_gen(self,*k,**kw):
		kw['bld']=self
		if len(k)==0:return TaskGen.task_gen(*k,**kw)
		cls_name=k[0]
		try:cls=TaskGen.task_gen.classes[cls_name]
		except KeyError:raise Utils.WscriptError('%s is not a valid task generator -> %s'%(cls_name,[x for x in TaskGen.task_gen.classes]))
		else:return cls(*k,**kw)
	def load_envs(self):
		try:
			lst=Utils.listdir(self.cachedir)
		except OSError,e:
			if e.errno==errno.ENOENT:
				raise Utils.WafError('The project was not configured: run "waf configure" first!')
			else:
				raise
		if not lst:
			raise Utils.WafError('The cache directory is empty: reconfigure the project')
		for file in lst:
			if file.endswith(CACHE_SUFFIX):
				env=Environment.Environment(os.path.join(self.cachedir,file))
				name=file.split('.')[0]
				self.all_envs[name]=env
		self.init_variants()
		for env in self.all_envs.values():
			for f in env['dep_files']:
				newnode=self.srcnode.find_or_declare(f)
				try:
					hash=Utils.h_file(newnode.abspath(env))
				except(IOError,AttributeError):
					error("cannot find "+f)
					hash=SIG_NIL
				self.node_sigs[env.variant()][newnode.id]=hash
	def setup(self,tool,tooldir=None,funs=None):
		if type(tool)is types.ListType:
			for i in tool:self.setup(i,tooldir)
			return
		if not tooldir:tooldir=Options.tooldir
		file=None
		key=str((tool,tooldir))
		module=g_modcache.get(key,None)
		if not module:
			file,name,desc=imp.find_module(tool,tooldir)
			module=imp.load_module(tool,file,name,desc)
			g_modcache[key]=module
		if hasattr(module,"setup"):module.setup(self)
		if file:file.close()
	def init_variants(self):
		debug('build: init variants')
		lstvariants=[]
		for env in self.all_envs.values():
			if not env.variant()in lstvariants:
				lstvariants.append(env.variant())
		self.lst_variants=lstvariants
		debug('build: list of variants is %s'%str(lstvariants))
		for name in lstvariants+[0]:
			for v in'node_sigs cache_node_abspath'.split():
				var=getattr(self,v)
				if not name in var:
					var[name]={}
	def load_dirs(self,srcdir,blddir,load_cache=1):
		assert(os.path.isabs(srcdir))
		assert(os.path.isabs(blddir))
		self.cachedir=os.path.join(blddir,CACHE_DIR)
		if srcdir==blddir:
			raise Utils.WafError("build dir must be different from srcdir: %s <-> %s "%(srcdir,blddir))
		self.bdir=blddir
		if load_cache:self.load()
		if not self.root:
			Node.Nodu=self.node_class
			self.root=Node.Nodu('',None,Node.DIR)
		if not self.srcnode:
			self.srcnode=self.root.ensure_dir_node_from_path(srcdir)
		debug('build: srcnode is %s and srcdir %s'%(str(self.srcnode.name),srcdir))
		self.path=self.srcnode
		try:os.makedirs(blddir)
		except OSError:pass
		if not self.bldnode:
			self.bldnode=self.root.ensure_dir_node_from_path(blddir)
		self.init_variants()
	def rescan(self,src_dir_node):
		if self.cache_scanned_folders.get(src_dir_node.id,None):return
		self.cache_scanned_folders[src_dir_node.id]=1
		if hasattr(self,'repository'):self.repository(src_dir_node)
		if sys.platform=="win32"and not src_dir_node.name:
			return
		self.listdir_src(src_dir_node,src_dir_node.abspath())
		h1=self.srcnode.height()
		h2=src_dir_node.height()
		lst=[]
		child=src_dir_node
		while h2>h1:
			lst.append(child.name)
			child=child.parent
			h2-=1
		lst.reverse()
		for variant in self.lst_variants:
			sub_path=os.path.join(self.bldnode.abspath(),variant,*lst)
			try:
				self.listdir_bld(src_dir_node,sub_path,variant)
			except OSError:
				dict=self.node_sigs[variant]
				for node in src_dir_node.childs.values():
					if node.id in dict:
						dict.__delitem__(node.id)
					if node.id!=self.bldnode.id:
						src_dir_node.childs.__delitem__(node.name)
				os.makedirs(sub_path)
	def listdir_src(self,parent_node,path):
		listed_files=set(Utils.listdir(path))
		self.cache_dir_contents[parent_node.id]=listed_files
		debug('build: folder contents '+str(listed_files))
		node_names=set([x.name for x in parent_node.childs.values()if x.id&3==Node.FILE])
		cache=self.node_sigs[0]
		to_keep=listed_files&node_names
		for x in to_keep:
			node=parent_node.childs[x]
			try:
				cache[node.id]=Utils.h_file(path+os.sep+node.name)
			except IOError:
				raise Utils.WafError("The file %s is not readable or has become a dir"%node.abspath())
		to_remove=node_names-listed_files
		if to_remove:
			cache=self.node_sigs[0]
			for name in to_remove:
				nd=parent_node.childs[name]
				if nd.id in cache:
					cache.__delitem__(nd.id)
				parent_node.childs.__delitem__(name)
	def listdir_bld(self,parent_node,path,variant):
		i_existing_nodes=[x for x in parent_node.childs.values()if x.id&3==Node.BUILD]
		listed_files=set(Utils.listdir(path))
		node_names=set([x.name for x in i_existing_nodes])
		remove_names=node_names-listed_files
		ids_to_remove=[x.id for x in i_existing_nodes if x.name in remove_names]
		cache=self.node_sigs[variant]
		for nid in ids_to_remove:
			if nid in cache:
				cache.__delitem__(nid)
	def get_env(self):
		return self.env_of_name('default')
	def set_env(self,name,val):
		self.all_envs[name]=val
	env=property(get_env,set_env)
	def add_manual_dependency(self,path,value):
		h=getattr(self,'deps_man',{})
		if isinstance(path,Node.Node):
			node=path
		elif os.path.isabs(path):
			node=self.root.find_resource(path)
		else:
			node=self.path.find_resource(path)
		try:h[node.id].append(value)
		except KeyError:h[node.id]=[value]
		self.deps_man=h
	def launch_node(self):
		try:
			return self.p_ln
		except AttributeError:
			self.p_ln=self.root.find_dir(Options.launch_dir)
			return self.p_ln
	def glob(self,pattern,relative=True):
		path=self.path.abspath()
		files=[self.root.find_resource(x)for x in glob.glob(path+os.sep+pattern)]
		if relative:
			files=[x.path_to_parent(self.path)for x in files if x]
		else:
			files=[x.abspath()for x in files if x]
		return files
	def add_group(self):
		self.flush(all=0)
		self.task_manager.add_group()
	def hash_env_vars(self,env,vars_lst):
		idx=str(id(env))+str(vars_lst)
		try:return self.cache_sig_vars[idx]
		except KeyError:pass
		lst=[env.get_flat(a)for a in vars_lst]
		ret=Utils.h_list(lst)
		debug("envhash: %s %s"%(ret.encode('hex'),str(lst)))
		self.cache_sig_vars[idx]=ret
		return ret
	def name_to_obj(self,name,env):
		cache=self.task_gen_cache_names
		if not cache:
			for x in self.all_task_gen:
				vt=x.env.variant()+'_'
				if x.name:
					cache[vt+x.name]=x
				else:
					v=vt+x.target
					if not cache.get(v,None):
						cache[v]=x
		return cache.get(env.variant()+'_'+name,None)
	def flush(self,all=1):
		self.ini=time.time()
		self.task_gen_cache_names={}
		self.name_to_obj('',self.env)
		debug('build: delayed operation TaskGen.flush() called')
		if Options.options.compile_targets:
			debug('task_gen: posting objects listed in compile_targets')
			target_objects={}
			for target_name in Options.options.compile_targets.split(','):
				target_name=target_name.strip()
				for env in self.all_envs.values():
					obj=self.name_to_obj(target_name,env)
					if obj:
						try:
							target_objects[target_name].append(obj)
						except KeyError:
							target_objects[target_name]=[obj]
				if not target_name in target_objects and all:
					raise Utils.WafError("target '%s' does not exist"%target_name)
			for target_obj in target_objects.values():
				for x in target_obj:
					x.post()
		else:
			debug('task_gen: posting objects (normal)')
			ln=self.launch_node()
			if ln.is_child_of(self.bldnode)or not ln.is_child_of(self.srcnode):
				ln=self.srcnode
			for obj in self.all_task_gen:
				if not obj.path.is_child_of(ln):continue
				obj.post()
	def env_of_name(self,name):
		if not name:
			error('env_of_name called with no name!')
			return None
		try:
			return self.all_envs[name]
		except KeyError:
			error('no such environment: '+name)
			return None
	def progress_line(self,state,total,col1,col2):
		n=len(str(total))
		Utils.rot_idx+=1
		ind=Utils.rot_chr[Utils.rot_idx%4]
		ini=self.ini
		pc=(100.*state)/total
		eta=time.strftime('%H:%M:%S',time.gmtime(time.time()-ini))
		fs="[%%%dd/%%%dd][%%s%%2d%%%%%%s][%s]["%(n,n,ind)
		left=fs%(state,total,col1,pc,col2)
		right='][%s%s%s]'%(col1,eta,col2)
		cols=Utils.get_term_cols()-len(left)-len(right)+2*len(col1)+2*len(col2)
		if cols<7:cols=7
		ratio=int((cols*state)/total)-1
		bar=('='*ratio+'>').ljust(cols)
		msg=Utils.indicator%(left,bar,right)
		return msg
	def do_install(self,src,tgt,chmod=0644):
		if Options.commands['install']:
			if not Options.options.force:
				try:
					t1=os.stat(tgt).st_mtime
					t2=os.stat(src).st_mtime
				except OSError:
					pass
				else:
					if t1>=t2:
						return False
			srclbl=src.replace(self.srcnode.abspath(None)+os.sep,'')
			info("* installing %s as %s"%(srclbl,tgt))
			try:os.remove(tgt)
			except OSError:pass
			try:
				shutil.copy2(src,tgt)
				os.chmod(tgt,chmod)
			except IOError:
				try:
					os.stat(src)
				except IOError:
					error('File %r does not exist'%src)
				raise Utils.WafError('Could not install the file %r'%tgt)
			return True
		elif Options.commands['uninstall']:
			info("* uninstalling %s"%tgt)
			self.uninstall.append(tgt)
			try:os.remove(tgt)
			except OSError:pass
			return True
	def get_install_path(self,path,env=None):
		if not env:env=self.env
		destdir=env.get_destdir()
		destpath=Utils.subst_vars(path,env)
		if destdir:
			destpath=os.path.join(destdir,destpath.lstrip(os.sep))
		return destpath
	def install_files(self,path,files,env=None,chmod=0644,relative_trick=False):
		if not Options.is_install:return[]
		if not path:return[]
		node=self.path
		if type(files)is types.StringType and'*'in files:
			gl=node.abspath()+os.sep+files
			lst=glob.glob(gl)
		else:
			lst=Utils.to_list(files)
		env=env or self.env
		destpath=self.get_install_path(path,env)
		Utils.check_dir(destpath)
		installed_files=[]
		for filename in lst:
			if not os.path.isabs(filename):
				nd=node.find_resource(filename)
				if not nd:
					raise Utils.WafError("Unable to install the file `%s': not found in %s"%(filename,node))
				if relative_trick:
					destfile=os.path.join(destpath,filename)
					Utils.check_dir(os.path.dirname(destfile))
				else:
					destfile=os.path.join(destpath,nd.name)
				filename=nd.abspath(env)
			else:
				alst=Utils.split_path(filename)
				destfile=os.path.join(destpath,alst[-1])
			if self.do_install(filename,destfile,chmod):
				installed_files.append(destfile)
		return installed_files
	def install_as(self,path,srcfile,env=None,chmod=0644):
		if not Options.is_install:return False
		if not path:return False
		if not env:env=self.env
		node=self.path
		destpath=self.get_install_path(path,env)
		dir,name=os.path.split(destpath)
		Utils.check_dir(dir)
		if not os.path.isabs(srcfile):
			filenode=node.find_resource(srcfile)
			src=filenode.abspath(env)
		else:
			src=srcfile
		return self.do_install(src,destpath,chmod)
	def symlink_as(self,path,src,env=None):
		if not Options.is_install:return
		if not path:return
		tgt=self.get_install_path(path,env)
		dir,name=os.path.split(tgt)
		Utils.check_dir(dir)
		if Options.commands['install']:
			try:
				if not os.path.islink(tgt)or os.readlink(tgt)!=src:
					info("* symlink %s (-> %s)"%(tgt,src))
					os.symlink(src,tgt)
				return 0
			except OSError:
				return 1
		elif Options.commands['uninstall']:
			try:
				info("* removing %s"%(tgt))
				os.remove(tgt)
				return 0
			except OSError:
				return 1
	def exec_command(self,cmd,shell=1):
		debug('runner: system command -> %s'%cmd)
		return Utils.exec_command(cmd,shell=shell,log=self.log)
	def printout(self,s):
		f=self.log or sys.stdout
		f.write(s)
		f.flush()

