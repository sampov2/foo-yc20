#! /usr/bin/env python
# encoding: utf-8

import os,sys,types
import Utils,Build
UNDEFINED=0
DIR=1
FILE=2
BUILD=3
type_to_string={UNDEFINED:"unk",DIR:"dir",FILE:"src",BUILD:"bld"}
class Node(object):
	__slots__=("name","parent","id","childs")
	def __init__(self,name,parent,node_type=UNDEFINED):
		self.name=name
		self.parent=parent
		self.__class__.bld.id_nodes+=4
		self.id=self.__class__.bld.id_nodes+node_type
		if node_type==DIR:self.childs={}
		if Utils.split_path(name)[0]!=name:
			raise Utils.WafError('name forbidden '+name)
		if parent and name in parent.childs:
			raise Utils.WafError('node %s exists in the parent files %s already'%(name,str(parent)))
		if parent:parent.childs[name]=self
	def __str__(self):
		if not self.parent:return''
		return"%s://%s"%(type_to_string[self.id&3],self.abspath())
	def __repr__(self):
		return self.__str__()
	def __hash__(self):
		raise Utils.WafError('nodes, you are doing it wrong')
	def get_type(self):
		return self.id&3
	def set_type(self,t):
		self.id=self.id+t-self.id&3
	def dirs(self):
		return[x for x in self.childs.values()if x.id&3==DIR]
	def files(self):
		return[x for x in self.childs.values()if x.id&3==FILE]
	def get_dir(self,name,default=None):
		node=self.childs.get(name,None)
		if not node or node.id&3!=DIR:return default
		return node
	def get_file(self,name,default=None):
		node=self.childs.get(name,None)
		if not node or node.id&3!=FILE:return default
		return node
	def get_build(self,name,default=None):
		node=self.childs.get(name,None)
		if not node or node.id&3!=BUILD:return default
		return node
	def find_resource(self,lst):
		if type(lst)is types.StringType:
			lst=Utils.split_path(lst)
		if not lst[:-1]:
			parent=self
		else:
			parent=self.find_dir(lst[:-1])
			if not parent:return None
		self.__class__.bld.rescan(parent)
		name=lst[-1]
		node=parent.childs.get(name,None)
		if node:
			tp=node.id&3
			if tp==FILE or tp==BUILD:
				return node
		tree=self.__class__.bld
		if not name in tree.cache_dir_contents[parent.id]:
			return None
		path=parent.abspath()+os.sep+name
		try:
			st=Utils.h_file(path)
		except IOError:
			return None
		child=self.__class__(name,parent,FILE)
		tree.node_sigs[0][child.id]=st
		return child
	def find_or_declare(self,lst):
		if type(lst)is types.StringType:
			lst=Utils.split_path(lst)
		if not lst[:-1]:
			parent=self
		else:
			parent=self.find_dir(lst[:-1])
			if not parent:return None
		self.__class__.bld.rescan(parent)
		name=lst[-1]
		node=parent.childs.get(name,None)
		if node:
			tp=node.id&3
			if tp!=BUILD:
				raise Utils.WafError("find_or_declare returns a build node, not a source nor a directory"+str(lst))
			return node
		node=self.__class__(name,parent,BUILD)
		return node
	def find_dir(self,lst):
		if type(lst)is types.StringType:
			lst=Utils.split_path(lst)
		current=self
		for name in lst:
			self.__class__.bld.rescan(current)
			prev=current
			if not current.parent and name==current.name:
				continue
			elif not name:
				continue
			elif name=='.':
				continue
			elif name=='..':
				current=current.parent or current
			else:
				current=prev.childs.get(name,None)
				if current is None:
					dir_cont=self.__class__.bld.cache_dir_contents
					if prev.id in dir_cont and name in dir_cont[prev.id]:
						current=self.__class__(name,prev,DIR)
					else:
						return None
		return current
	def ensure_dir_node_from_path(self,lst):
		if type(lst)is types.StringType:
			lst=Utils.split_path(lst)
		current=self
		for name in lst:
			if not name:
				continue
			elif name=='.':
				continue
			elif name=='..':
				current=current.parent or current
			else:
				prev=current
				current=prev.childs.get(name,None)
				if current is None:
					current=self.__class__(name,prev,DIR)
		return current
	def exclusive_build_node(self,path):
		lst=Utils.split_path(path)
		name=lst[-1]
		if len(lst)>1:
			parent=None
			try:
				parent=self.find_dir(lst[:-1])
			except OSError:
				pass
			if not parent:
				parent=self.ensure_dir_node_from_path(lst[:-1])
				self.__class__.bld.cache_scanned_folders[parent.id]=1
			else:
				try:
					self.__class__.bld.rescan(parent)
				except OSError:
					pass
		else:
			parent=self
		node=parent.childs.get(name,None)
		if not node:
			node=self.__class__(name,parent,BUILD)
		return node
	def path_to_parent(self,parent):
		lst=[]
		p=self
		h1=parent.height()
		h2=p.height()
		while h2>h1:
			h2-=1
			lst.append(p.name)
			p=p.parent
		if lst:
			lst.reverse()
			ret=os.path.join(*lst)
		else:
			ret=''
		return ret
	def find_ancestor(self,node):
		dist=self.height()-node.height()
		if dist<0:return node.find_ancestor(self)
		cand=self
		while dist>0:
			cand=cand.parent
			dist-=1
		if cand==node:return cand
		cursor=node
		while cand.parent:
			cand=cand.parent
			cursor=cursor.parent
			if cand==cursor:return cand
	def relpath_gen(self,going_to):
		if self==going_to:return'.'
		if going_to.parent==self:return'..'
		ancestor=self.find_ancestor(going_to)
		lst=[]
		cand=self
		while not cand.id==ancestor.id:
			lst.append(cand.name)
			cand=cand.parent
		cand=going_to
		while not cand.id==ancestor.id:
			lst.append('..')
			cand=cand.parent
		lst.reverse()
		return os.sep.join(lst)
	def nice_path(self,env=None):
		tree=self.__class__.bld
		ln=tree.launch_node()
		name=self.name
		if self.id&3==FILE:return self.relpath_gen(ln)
		else:return os.path.join(tree.bldnode.relpath_gen(ln),env.variant(),self.relpath_gen(tree.srcnode))
	def is_child_of(self,node):
		p=self
		diff=self.height()-node.height()
		while diff>0:
			diff-=1
			p=p.parent
		return p.id==node.id
	def variant(self,env):
		if not env:return 0
		elif self.id&3==FILE:return 0
		else:return env.variant()
	def height(self):
		d=self
		val=-1
		while d:
			d=d.parent
			val+=1
		return val
	def abspath(self,env=None):
		if not self.name:
			return'/'
		variant=self.variant(env)
		ret=self.__class__.bld.cache_node_abspath[variant].get(self.id,None)
		if ret:return ret
		if not variant:
			if not self.parent:
				val=os.sep
			elif not self.parent.name:
				val=os.sep+self.name
			else:
				val=self.parent.abspath()+os.sep+self.name
		else:
			val=os.sep.join((self.__class__.bld.bldnode.abspath(),env.variant(),self.path_to_parent(self.__class__.bld.srcnode)))
		self.__class__.bld.cache_node_abspath[variant][self.id]=val
		return val
	def change_ext(self,ext):
		name=self.name
		k=name.rfind('.')
		if k>=0:
			name=name[:k]+ext
		else:
			name=name+ext
		node=self.parent.childs.get(name,None)
		if not node:
			node=self.__class__(name,self.parent,BUILD)
		return node
	def src_dir(self,env):
		return self.parent.srcpath(env)
	def bld_dir(self,env):
		return self.parent.bldpath(env)
	def bld_base(self,env):
		s=self.name
		s=s[:s.rfind('.')]
		return os.path.join(self.bld_dir(env),s)
	def bldpath(self,env=None):
		if self.id&3==FILE:
			return self.relpath_gen(self.__class__.bld.bldnode)
		if self.path_to_parent(self.__class__.bld.srcnode)is not'':
			return os.path.join(env.variant(),self.path_to_parent(self.__class__.bld.srcnode))
		return env.variant()
	def srcpath(self,env=None):
		if self.id&3==BUILD:
			return self.bldpath(env)
		return self.relpath_gen(self.__class__.bld.bldnode)
	def read(self,env):
		try:
			file=open(self.abspath(env),'rb')
			return file.read()
		finally:
			if file:file.close()
	def dir(self,env):
		return self.parent.abspath(env)
	def file(self):
		return self.name
	def file_base(self):
		s=self.name
		if s.rfind('.')<0:
			return s
		return s[:s.rfind('.')]
	def suffix(self):
		s=self.name
		if s.rfind('.')<0:
			return s
		return s[s.rfind('.'):]
if sys.platform=="win32":
	def find_dir_win32(self,lst):
		if type(lst)is types.StringType:
			lst=Utils.split_path(lst)
		current=self
		for name in lst:
			self.__class__.bld.rescan(current)
			prev=current
			if not current.parent and name==current.name:
				continue
			if not name:
				continue
			elif name=='.':
				continue
			elif name=='..':
				current=current.parent or current
			else:
				current=prev.childs.get(name,None)
				if current is None:
					if(name in self.__class__.bld.cache_dir_contents[prev.id]or(not prev.parent and name[1]==":")):
						current=self.__class__(name,prev,DIR)
					else:
						return None
		return current
	Node.find_dir=find_dir_win32
	def abspath_win32(self,env=None):
		variant=self.variant(env)
		ret=self.__class__.bld.cache_node_abspath[variant].get(self.id,None)
		if ret:return ret
		if not variant:
			cur=self
			lst=[]
			while cur:
				lst.append(cur.name)
				cur=cur.parent
			lst.reverse()
			val=os.sep.join(lst)
		else:
			val=os.sep.join((self.__class__.bld.bldnode.abspath(),env.variant(),self.path_to_parent(self.__class__.bld.srcnode)))
		if val.startswith("\\"):val=val[1:]
		if val.startswith("\\"):val=val[1:]
		self.__class__.bld.cache_node_abspath[variant][self.id]=val
		return val
	Node.abspath=abspath_win32
class Nodu(Node):
	pass

