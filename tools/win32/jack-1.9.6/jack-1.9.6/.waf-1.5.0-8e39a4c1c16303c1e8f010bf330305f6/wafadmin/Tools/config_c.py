#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import os,types,imp,cPickle,sys,shlex,shutil
from Utils import md5
import Build,Utils,Configure,Task,Options,Logs
from Constants import*
from Configure import conf,conftest
stdincpath=['/usr/include/','/usr/local/include/']
stdlibpath=['/usr/lib/','/usr/local/lib/','/lib']
cfg_ver={'atleast-version':'>=','exact-version':'==','max-version':'<=',}
def parse_flags(line,uselib,env):
	lst=shlex.split(line)
	while lst:
		x=lst.pop(0)
		st=x[:2]
		ot=x[2:]
		if st=='-I'or st=='/I':
			if not ot:ot=lst.pop(0)
			env.append_unique('CPPPATH_'+uselib,ot)
		elif st=='-D':
			if not ot:ot=lst.pop(0)
			env.append_unique('CXXDEFINES_'+uselib,ot)
			env.append_unique('CCDEFINES_'+uselib,ot)
		elif st=='-l':
			if not ot:ot=lst.pop(0)
			env.append_unique('LIB_'+uselib,ot)
		elif st=='-L':
			if not ot:ot=lst.pop(0)
			env.append_unique('LIBPATH_'+uselib,ot)
		elif x=='-pthread'or x.startswith('+'):
			env.append_unique('CCFLAGS_'+uselib,x)
			env.append_unique('CXXFLAGS_'+uselib,x)
			env.append_unique('LINKFLAGS_'+uselib,x)
		elif x.startswith('-std'):
			env.append_unique('CCFLAGS_'+uselib,x)
			env.append_unique('LINKFLAGS_'+uselib,x)
def validate_cfg(self,kw):
	if not'path'in kw:
		kw['path']='pkg-config --silence-errors'
	if'atleast_pkgconfig_version'in kw:
		if not'msg'in kw:
			kw['msg']='Checking for pkg-config version >= %s'%kw['atleast_pkgconfig_version']
		return
	if'modversion'in kw:
		return
	for x in cfg_ver.keys():
		y=x.replace('-','_')
		if y in kw:
			if not'package'in kw:
				raise ValueError,'%s requires a package'%x
			if not'msg'in kw:
				kw['msg']='Checking for %s %s %s'%(kw['package'],cfg_ver[x],kw[y])
			return
	if not'msg'in kw:
		kw['msg']='Checking for %s flags'%kw['package']
	if not'okmsg'in kw:
		kw['okmsg']='ok'
	if not'errmsg'in kw:
		kw['errmsg']='not found'
def exec_cfg(self,kw):
	if'atleast_pkgconfig_version'in kw:
		try:
			Utils.cmd_output('%s --atleast-pkgconfig-version=%s'%(kw['path'],kw['atleast_pkgconfig_version']))
		except:
			if not'errmsg'in kw:
				kw['errmsg']='"pkg-config" could not be found or the version found is too old.'
			raise Configure.ConfigurationError,kw['errmsg']
		if not'okmsg'in kw:
			kw['okmsg']='ok'
		return
	for x in cfg_ver:
		y=x.replace('-','_')
		if y in kw:
			try:
				Utils.cmd_output('%s --%s=%s %s'%(kw['path'],x,kw[y],kw['package']))
			except:
				if not'errmsg'in kw:
					kw['errmsg']='Package "%s (%s %s)" could not be found or the found version is too old.'%(kw['package'],cfg_ver[x],kw[y])
				raise Configure.ConfigurationError,kw['errmsg']
			if not'okmsg'in kw:
				kw['okmsg']='ok'
			self.define('HAVE_%s'%Utils.quote_define_name(kw.get('uselib_store',kw['package'])),1,0)
			break
	if'modversion'in kw:
		try:
			version=Utils.cmd_output('%s --modversion %s'%(kw['path'],kw['modversion'])).strip()
		except ValueError:
			return''
		self.define('%s_VERSION'%Utils.quote_define_name(kw.get('uselib_store',kw['modversion'])),version)
		return version
	lst=[kw['path']]
	for key,val in kw.get('define_variable',{}).iteritems():
		lst.append('--define-variable=%s=%s'%(key,val))
	lst.append(kw.get('args',''))
	lst.append(kw['package'])
	cmd=' '.join(lst)
	try:
		ret=Utils.cmd_output(cmd)
	except:
		raise Configure.ConfigurationError,"no such package"
	if not'okmsg'in kw:
		kw['okmsg']='ok'
	parse_flags(ret,kw.get('uselib_store',kw['package'].upper()),kw.get('env',self.env))
	return ret
def check_cfg(self,*k,**kw):
	self.validate_cfg(kw)
	if'msg'in kw:
		self.check_message_1(kw['msg'])
	ret=None
	try:
		ret=self.exec_cfg(kw)
	except Configure.ConfigurationError,e:
		if'errmsg'in kw:
			self.check_message_2(kw['errmsg'],'YELLOW')
		if'mandatory'in kw:
			if Logs.verbose>1:
				raise
			else:
				self.fatal('the configuration failed (see config.log)')
	else:
		if'okmsg'in kw:
			self.check_message_2(kw['okmsg'])
	return ret
simple_c_code='int main() {return 0;}\n'
code_with_headers=''
def validate_c(self,kw):
	if not'env'in kw:
		kw['env']=self.env.copy()
	env=kw['env']
	if not'compiler'in kw:
		kw['compiler']='cc'
		if env['CXX_NAME']and Task.TaskBase.classes.get('cxx',None):
			kw['compiler']='cxx'
	if not'type'in kw:
		kw['type']='program'
	assert not(kw['type']!='program'and kw.get('execute',0)),'can only execute programs'
	def to_header(dct):
		if'header_name'in dct:
			dct=Utils.to_list(dct['header_name'])
			return''.join(['#include <%s>\n'%x for x in dct])
		return''
	if'framework_name'in kw:
		if not kw.get('header_name'):
			kw['header_name']=[]
	if'function_name'in kw:
		fu=kw['function_name']
		if not'msg'in kw:
			kw['msg']='Checking for function %s'%fu
		kw['code']=to_header(kw)+'int main(){\nvoid *p;\np=(void*)(%s);\nreturn 0;\n}\n'%fu
		if not'uselib_store'in kw:
			kw['uselib_store']=fu.upper()
		if not'define_name'in kw:
			kw['define_name']=self.have_define(fu)
	elif'header_name'in kw:
		if not'msg'in kw:
			kw['msg']='Checking for header %s'%kw['header_name']
		if'framework_name'in kw:
			fwkname=kw['framework_name']
			fwk='%s/%s.h'%(fwkname,fwkname)
			if kw.get('remove_dot_h',None):
				fwk=fwk[:-2]
			kw['header_name']=Utils.to_list(kw['header_name'])+[fwk]
			kw['msg']='Checking for framework %s'%fwkname
			kw['framework']=fwkname
		l=Utils.to_list(kw['header_name'])
		assert len(l)>0,'list of headers in header_name is empty'
		kw['code']=to_header(kw)+'int main(){return 0;}\n'
		if not'uselib_store'in kw:
			kw['uselib_store']=l[0].upper()
		if not'define_name'in kw:
			kw['define_name']=self.have_define(l[0])
	if'lib'in kw:
		if not'msg'in kw:
			kw['msg']='Checking for library %s'%kw['lib']
		if not'uselib_store'in kw:
			kw['uselib_store']=kw['lib'].upper()
	if'staticlib'in kw:
		if not'msg'in kw:
			kw['msg']='Checking for static library %s'%kw['staticlib']
		if not'uselib_store'in kw:
			kw['uselib_store']=kw['staticlib'].upper()
	if'fragment'in kw:
		kw['code']=kw['fragment']
		if not'msg'in kw:
			kw['msg']='Checking for custom code'
		if not'errmsg'in kw:
			kw['errmsg']='fail'
	for(flagsname,flagstype)in[('cxxflags','compiler'),('cflags','compiler'),('linkflags','linker')]:
		if flagsname in kw:
			if not'msg'in kw:
				kw['msg']='Checking for %s flags %s'%(flagstype,kw[flagsname])
			if not'errmsg'in kw:
				kw['errmsg']='fail'
	if not'execute'in kw:
		kw['execute']=False
	if not'errmsg'in kw:
		kw['errmsg']='not found'
	if not'okmsg'in kw:
		kw['okmsg']='ok'
	if not'code'in kw:
		kw['code']=simple_c_code
	assert('msg'in kw)
def post_check(self,*k,**kw):
	def define_or_stuff():
		nm=kw['define_name']
		if not kw['execute']and not kw.get('define_ret',None):
			self.define_cond(kw['define_name'],kw['success']is not None)
		else:
			self.define(kw['define_name'],kw['success'])
	if'header_name'in kw:
		define_or_stuff()
	elif'function_name'in kw:
		define_or_stuff()
	elif'fragment'in kw:
		if'define_name'in kw:
			define_or_stuff()
	if kw['execute']:
		is_success=kw['success']is not None
	else:
		is_success=kw['success']==0
	if is_success and'uselib_store'in kw:
		import cc,cxx
		for k in set(cc.g_cc_flag_vars).union(cxx.g_cxx_flag_vars):
			lk=k.lower()
			if k=='CPPPATH':lk='includes'
			if k=='CXXDEFINES':lk='defines'
			if k=='CCDEFINES':lk='defines'
			if lk in kw:
				self.env.append_value(k+'_'+kw['uselib_store'],kw[lk])
def check(self,*k,**kw):
	self.validate_c(kw)
	self.check_message_1(kw['msg'])
	ret=None
	try:
		ret=self.run_c_code(*k,**kw)
	except Configure.ConfigurationError,e:
		self.check_message_2(kw['errmsg'],'YELLOW')
		if'mandatory'in kw:
			if Logs.verbose>1:
				raise
			else:
				self.fatal('the configuration failed (see config.log)')
	else:
		self.check_message_2(kw['okmsg'])
	kw['success']=ret
	self.post_check(*k,**kw)
	return ret
def run_c_code(self,*k,**kw):
	if kw['compiler']=='cxx':
		tp='cxx'
		test_f_name='test.cpp'
	else:
		tp='cc'
		test_f_name='test.c'
	dir=os.path.join(self.blddir,'.wscript-trybuild')
	try:
		shutil.rmtree(dir)
	except OSError:
		pass
	os.makedirs(dir)
	bdir=os.path.join(dir,'testbuild')
	if not os.path.exists(bdir):
		os.makedirs(bdir)
	env=kw['env']
	dest=open(os.path.join(dir,test_f_name),'w')
	dest.write(kw['code'])
	dest.close()
	back=os.path.abspath('.')
	bld=Build.BuildContext()
	bld.log=self.log
	bld.all_envs.update(self.all_envs)
	bld.all_envs['default']=env
	bld.lst_variants=bld.all_envs.keys()
	bld.load_dirs(dir,bdir)
	os.chdir(dir)
	bld.rescan(bld.srcnode)
	o=bld.new_task_gen(tp,kw['type'])
	o.source=test_f_name
	o.target='testprog'
	for k,v in kw.iteritems():
		setattr(o,k,v)
	self.log.write("==>\n%s\n<==\n"%kw['code'])
	try:
		bld.compile()
	except:
		ret=Utils.ex_stack()
	else:
		ret=0
	os.chdir(back)
	if ret:
		raise Configure.ConfigurationError,str(ret)
	if kw['execute']:
		lastprog=o.link_task.outputs[0].abspath(env)
	if kw['execute']:
		data=Utils.cmd_output('"%s"'%lastprog).strip()
		ret=data
	return ret
def check_cxx(self,*k,**kw):
	kw['compiler']='cxx'
	return self.check(*k,**kw)
def check_cc(self,*k,**kw):
	kw['compiler']='cc'
	return self.check(*k,**kw)
def define(self,define,value,quote=1):
	assert define and isinstance(define,str)
	tbl=self.env[DEFINES]or Utils.ordered_dict()
	if isinstance(value,str):
		if quote==1:
			tbl[define]='"%s"'%str(value)
		else:
			tbl[define]=value
	elif isinstance(value,int):
		tbl[define]=value
	else:
		raise TypeError,'define %r -> %r must be a string or an int'%(define,value)
	self.env[DEFINES]=tbl
	self.env[define]=value
def undefine(self,define):
	assert define and isinstance(define,str)
	tbl=self.env[DEFINES]or Utils.ordered_dict()
	value=UNDEFINED
	tbl[define]=value
	self.env[DEFINES]=tbl
	self.env[define]=value
def define_cond(self,name,value):
	if value:
		self.define(name,1)
	else:
		self.undefine(name)
def is_defined(self,key):
	defines=self.env[DEFINES]
	if not defines:
		return False
	try:
		value=defines[key]
	except KeyError:
		return False
	else:
		return value!=UNDEFINED
def get_define(self,define):
	try:return self.env[DEFINES][define]
	except KeyError:return None
def have_define(self,name):
	return"HAVE_%s"%Utils.quote_define_name(name)
def write_config_header(self,configfile='',env=''):
	if not configfile:configfile=WAF_CONFIG_H
	lst=Utils.split_path(configfile)
	base=lst[:-1]
	if not env:env=self.env
	base=[self.blddir,env.variant()]+base
	dir=os.path.join(*base)
	if not os.path.exists(dir):
		os.makedirs(dir)
	dir=os.path.join(dir,lst[-1])
	self.env.append_value('waf_config_files',os.path.abspath(dir))
	waf_guard='_%s_WAF'%Utils.quote_define_name(configfile)
	dest=open(dir,'w')
	dest.write('/* Configuration header created by Waf - do not edit */\n')
	dest.write('#ifndef %s\n#define %s\n\n'%(waf_guard,waf_guard))
	if not configfile in self.env['dep_files']:
		self.env['dep_files']+=[configfile]
	tbl=env[DEFINES]or Utils.ordered_dict()
	for key in tbl.allkeys:
		value=tbl[key]
		if value is None:
			dest.write('#define %s\n'%key)
		elif value is UNDEFINED:
			dest.write('/* #undef %s */\n'%key)
		else:
			dest.write('#define %s %s\n'%(key,value))
	dest.write('\n#endif /* %s */\n'%waf_guard)
	dest.close()
def cc_check_features(self,kind='cc'):
	v=self.env
	test=Configure.check_data()
	test.code='int main() {return 0;}\n'
	test.env=v
	test.execute=1
	test.force_compiler=kind
	ret=self.run_check(test)
	self.check_message('compiler could create','programs',not(ret is False))
	if not ret:self.fatal("no programs")
	lib_obj=Configure.check_data()
	lib_obj.code="int k = 3;\n"
	lib_obj.env=v
	lib_obj.build_type="shlib"
	lib_obj.force_compiler=kind
	ret=self.run_check(lib_obj)
	self.check_message('compiler could create','shared libs',not(ret is False))
	if not ret:self.fatal("no shared libs")
	lib_obj=Configure.check_data()
	lib_obj.code="int k = 3;\n"
	lib_obj.env=v
	lib_obj.build_type="staticlib"
	lib_obj.force_compiler=kind
	ret=self.run_check(lib_obj)
	self.check_message('compiler could create','static libs',not(ret is False))
	if not ret:self.fatal("no static libs")
def cxx_check_features(self):
	return cc_check_features(self,kind='cpp')

conf(validate_cfg)
conf(exec_cfg)
conf(check_cfg)
conf(validate_c)
conf(post_check)
conf(check)
conf(run_c_code)
conf(check_cxx)
conf(check_cc)
conf(define)
conf(undefine)
conf(define_cond)
conf(is_defined)
conf(get_define)
conf(have_define)
conf(write_config_header)
conftest(cc_check_features)
conftest(cxx_check_features)
