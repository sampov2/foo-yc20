#! /usr/bin/env python
# encoding: utf-8

import os,re
from Configure import conf
import TaskGen,Task,Utils
from TaskGen import feature,taskgen
class java_taskgen(TaskGen.task_gen):
	def __init__(self,*k,**kw):
		TaskGen.task_gen.__init__(self,*k,**kw)
def apply_java(self):
	Utils.def_attrs(self,jarname='',jaropts='',classpath='',source_root='.',jar_mf_attributes={},jar_mf_classpath=[])
	nodes_lst=[]
	if not self.classpath:
		if not self.env['CLASSPATH']:
			self.env['CLASSPATH']='..'+os.pathsep+'.'
	else:
		self.env['CLASSPATH']=self.classpath
	re_foo=re.compile(self.source)
	source_root_node=self.path.find_dir(self.source_root)
	src_nodes=[]
	bld_nodes=[]
	prefix_path=source_root_node.abspath()
	for(root,dirs,filenames)in os.walk(source_root_node.abspath()):
		for x in filenames:
			file=root+'/'+x
			file=file.replace(prefix_path,'')
			if file.startswith('/'):
				file=file[1:]
			if re_foo.search(file)>-1:
				node=source_root_node.find_resource(file)
				src_nodes.append(node)
				node2=node.change_ext(".class")
				bld_nodes.append(node2)
	self.env['OUTDIR']=source_root_node.abspath(self.env)
	tsk=self.create_task('javac')
	tsk.set_inputs(src_nodes)
	tsk.set_outputs(bld_nodes)
	if self.jarname:
		tsk=self.create_task('jar_create')
		tsk.set_inputs(bld_nodes)
		tsk.set_outputs(self.path.find_or_declare(self.jarname))
		if not self.env['JAROPTS']:
			if self.jaropts:
				self.env['JAROPTS']=self.jaropts
			else:
				dirs='.'
				self.env['JAROPTS']='-C %s %s'%(self.env['OUTDIR'],dirs)
Task.simple_task_type('javac','${JAVAC} -classpath ${CLASSPATH} -d ${OUTDIR} ${SRC}',color='BLUE',before='jar_create')
Task.simple_task_type('jar_create','${JAR} ${JARCREATE} ${TGT} ${JAROPTS}',color='GREEN')
def detect(conf):
	java_path=os.environ['PATH'].split(os.pathsep)
	v=conf.env
	if os.environ.has_key('JAVA_HOME'):
		java_path=[os.path.join(os.environ['JAVA_HOME'],'bin')]+java_path
		conf.env['JAVA_HOME']=os.environ['JAVA_HOME']
	conf.find_program('javac',var='JAVAC',path_list=java_path)
	conf.find_program('java',var='JAVA',path_list=java_path)
	conf.find_program('jar',var='JAR',path_list=java_path)
	v['JAVA_EXT']=['.java']
	if os.environ.has_key('CLASSPATH'):
		v['CLASSPATH']=os.environ['CLASSPATH']
	if not v['JAR']:conf.fatal('jar is required for making java packages')
	if not v['JAVAC']:conf.fatal('javac is required for compiling java classes')
	v['JARCREATE']='cf'
def check_java_class(conf,classname,with_classpath=None):
	class_check_source="""
public class Test {
	public static void main(String[] argv) {
		Class lib;
		if (argv.length < 1) {
			System.err.println("Missing argument");
			System.exit(77);
		}
		try {
			lib = Class.forName(argv[0]);
		} catch (ClassNotFoundException e) {
			System.err.println("ClassNotFoundException");
			System.exit(1);
		}
		lib = null;
		System.exit(0);
	}
}
"""
	import shutil
	javatestdir='.waf-javatest'
	classpath=javatestdir
	if conf.env['CLASSPATH']:
		classpath+=os.pathsep+conf.env['CLASSPATH']
	if isinstance(with_classpath,str):
		classpath+=os.pathsep+with_classpath
	shutil.rmtree(javatestdir,True)
	os.mkdir(javatestdir)
	java_file=open(os.path.join(javatestdir,'Test.java'),'w')
	java_file.write(class_check_source)
	java_file.close()
	os.popen(conf.env['JAVAC']+' '+os.path.join(javatestdir,'Test.java'))
	(jstdin,jstdout,jstderr)=os.popen3(conf.env['JAVA']+' -cp '+classpath+' Test '+classname)
	found=not bool(jstderr.read())
	conf.check_message('Java class %s'%classname,"",found)
	shutil.rmtree(javatestdir,True)
	return found

taskgen(apply_java)
feature('java')(apply_java)
conf(check_java_class)
