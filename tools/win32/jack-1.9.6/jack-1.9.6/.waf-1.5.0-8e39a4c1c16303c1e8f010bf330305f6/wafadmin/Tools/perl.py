#! /usr/bin/env python
# encoding: utf-8

import os
import pproc
import Task,Options,Utils
from Configure import conf
from TaskGen import extension,taskgen,feature,before
xsubpp_str='${PERL} ${XSUBPP} -noprototypes -typemap ${EXTUTILS_TYPEMAP} ${SRC} > ${TGT}'
EXT_XS=['.xs']
def init_pyext(self):
	self.uselib=self.to_list(getattr(self,'uselib',''))
	if not'PERL'in self.uselib:self.uselib.append('PERL')
	if not'PERLEXT'in self.uselib:self.uselib.append('PERLEXT')
	self.env['shlib_PATTERN']=self.env['perlext_PATTERN']
def xsubpp_file(self,node):
	gentask=self.create_task('xsubpp')
	gentask.set_inputs(node)
	outnode=node.change_ext('.c')
	gentask.set_outputs(outnode)
	self.allnodes.append(outnode)
Task.simple_task_type('xsubpp',xsubpp_str,color='BLUE',before="cc cxx")
def check_perl_version(conf,minver=None):
	res=True
	if not getattr(Options.options,'perlbinary',None):
		perl=conf.find_program("perl",var="PERL")
		if not perl:
			return False
	else:
		perl=Options.options.perlbinary
		conf.env['PERL']=perl
	version=Utils.cmd_output(perl+" -e'printf \"%vd\", $^V'")
	if not version:
		res=False
		version="Unknown"
	elif not minver is None:
		ver=tuple(map(int,version.split(".")))
		if ver<minver:
			res=False
	if minver is None:
		cver=""
	else:
		cver=".".join(map(str,minver))
	conf.check_message("perl",cver,res,version)
	return res
def check_perl_module(conf,module):
	cmd=[conf.env['PERL'],'-e','use %s'%module]
	r=pproc.call(cmd,stdout=pproc.PIPE,stderr=pproc.PIPE)==0
	conf.check_message("perl module %s"%module,"",r)
	return r
def check_perl_ext_devel(conf):
	if not conf.env['PERL']:
		return False
	perl=conf.env['PERL']
	conf.env["LINKFLAGS_PERLEXT"]=Utils.cmd_output(perl+" -MConfig -e'print $Config{lddlflags}'")
	conf.env["CPPPATH_PERLEXT"]=Utils.cmd_output(perl+" -MConfig -e'print \"$Config{archlib}/CORE\"'")
	conf.env["CCFLAGS_PERLEXT"]=Utils.cmd_output(perl+" -MConfig -e'print \"$Config{ccflags} $Config{cccdlflags}\"'")
	conf.env["XSUBPP"]=Utils.cmd_output(perl+" -MConfig -e'print \"$Config{privlib}/ExtUtils/xsubpp$Config{exe_ext}\"'")
	conf.env["EXTUTILS_TYPEMAP"]=Utils.cmd_output(perl+" -MConfig -e'print \"$Config{privlib}/ExtUtils/typemap\"'")
	if not getattr(Options.options,'perlarchdir',None):
		conf.env["ARCHDIR_PERL"]=Utils.cmd_output(perl+" -MConfig -e'print $Config{sitearch}'")
	else:
		conf.env["ARCHDIR_PERL"]=getattr(Options.options,'perlarchdir')
	conf.env['perlext_PATTERN']='%s.'+Utils.cmd_output(perl+" -MConfig -e'print $Config{dlext}'")
	return True
def detect(conf):
	pass
def set_options(opt):
	opt.add_option("--with-perl-binary",type="string",dest="perlbinary",help='Specify alternate perl binary',default=None)
	opt.add_option("--with-perl-archdir",type="string",dest="perlarchdir",help='Specify directory where to install arch specific files',default=None)

taskgen(init_pyext)
before('apply_incpaths')(init_pyext)
feature('perlext')(init_pyext)
extension(EXT_XS)(xsubpp_file)
conf(check_perl_version)
conf(check_perl_module)
conf(check_perl_ext_devel)
