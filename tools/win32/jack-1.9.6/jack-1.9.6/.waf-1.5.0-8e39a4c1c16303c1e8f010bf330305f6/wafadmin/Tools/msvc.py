#! /usr/bin/env python
# encoding: utf-8

import os,sys,re,string,optparse
import Utils,TaskGen,Runner,Configure,Task,Options
from Logs import debug,error,warn
from Utils import quote_whitespace
from TaskGen import taskgen,after,before,feature
from Configure import conftest
import ccroot,cc,cxx,ar
from libtool import read_la_file
from os.path import exists
def msvc_linker(task):
	e=task.env
	linker=e['LINK']
	srcf=e['LINK_SRC_F']
	trgtf=e['LINK_TGT_F']
	linkflags=e.get_flat('LINKFLAGS')
	libdirs=e.get_flat('_LIBDIRFLAGS')
	libs=e.get_flat('_LIBFLAGS')
	subsystem=''
	if task.subsystem:
		subsystem='/subsystem:%s'%task.subsystem
	outfile=task.outputs[0].bldpath(e)
	manifest=outfile+'.manifest'
	pdbnode=task.outputs[0].change_ext('.pdb')
	pdbfile=pdbnode.bldpath(e)
	objs=" ".join(['"%s"'%a.abspath(e)for a in task.inputs])
	cmd="%s %s %s%s %s%s %s %s %s"%(linker,subsystem,srcf,objs,trgtf,outfile,linkflags,libdirs,libs)
	ret=task.generator.bld.exec_command(cmd,shell=False)
	if ret:return ret
	if os.path.exists(pdbfile):
		task.outputs.append(pdbnode)
	if os.path.exists(manifest):
		debug('msvc: manifesttool')
		mtool=e['MT']
		if not mtool:
			return 0
		mode=''
		if'cprogram'in task.features:
			mode='1'
		elif'cshlib'in task.features:
			mode='2'
		debug('msvc: embedding manifest')
		flags=' '.join(e['MTFLAGS']or[])
		cmd='%s %s -manifest "%s" -outputresource:"%s";#%s'%(mtool,flags,manifest,outfile,mode)
		ret=task.generator.bld.exec_command(cmd,shell=False)
	return ret
g_msvc_systemlibs="""
aclui activeds ad1 adptif adsiid advapi32 asycfilt authz bhsupp bits bufferoverflowu cabinet
cap certadm certidl ciuuid clusapi comctl32 comdlg32 comsupp comsuppd comsuppw comsuppwd comsvcs
credui crypt32 cryptnet cryptui d3d8thk daouuid dbgeng dbghelp dciman32 ddao35 ddao35d
ddao35u ddao35ud delayimp dhcpcsvc dhcpsapi dlcapi dnsapi dsprop dsuiext dtchelp
faultrep fcachdll fci fdi framedyd framedyn gdi32 gdiplus glauxglu32 gpedit gpmuuid
gtrts32w gtrtst32hlink htmlhelp httpapi icm32 icmui imagehlp imm32 iphlpapi iprop
kernel32 ksguid ksproxy ksuser libcmt libcmtd libcpmt libcpmtd loadperf lz32 mapi
mapi32 mgmtapi minidump mmc mobsync mpr mprapi mqoa mqrt msacm32 mscms mscoree
msdasc msimg32 msrating mstask msvcmrt msvcurt msvcurtd mswsock msxml2 mtx mtxdm
netapi32 nmapinmsupp npptools ntdsapi ntdsbcli ntmsapi ntquery odbc32 odbcbcp
odbccp32 oldnames ole32 oleacc oleaut32 oledb oledlgolepro32 opends60 opengl32
osptk parser pdh penter pgobootrun pgort powrprof psapi ptrustm ptrustmd ptrustu
ptrustud qosname rasapi32 rasdlg rassapi resutils riched20 rpcndr rpcns4 rpcrt4 rtm
rtutils runtmchk scarddlg scrnsave scrnsavw secur32 sensapi setupapi sfc shell32
shfolder shlwapi sisbkup snmpapi sporder srclient sti strsafe svcguid tapi32 thunk32
traffic unicows url urlmon user32 userenv usp10 uuid uxtheme vcomp vcompd vdmdbg
version vfw32 wbemuuid  webpost wiaguid wininet winmm winscard winspool winstrm
wintrust wldap32 wmiutils wow32 ws2_32 wsnmp32 wsock32 wst wtsapi32 xaswitch xolehlp
""".split()
def find_lt_names_msvc(self,libname,is_static=False):
	lt_names=['lib%s.la'%libname,'%s.la'%libname,]
	for path in self.libpaths:
		for la in lt_names:
			laf=os.path.join(path,la)
			dll=None
			if exists(laf):
				ltdict=read_la_file(laf)
				lt_libdir=None
				if ltdict.has_key('libdir')and ltdict['libdir']!='':
					lt_libdir=ltdict['libdir']
				if not is_static and ltdict.has_key('library_names')and ltdict['library_names']!='':
					dllnames=ltdict['library_names'].split()
					dll=dllnames[0].lower()
					dll=re.sub('\.dll$','',dll)
					return(lt_libdir,dll,False)
				elif ltdict.has_key('old_library')and ltdict['old_library']!='':
					olib=ltdict['old_library']
					if exists(os.path.join(path,olib)):
						return(path,olib,True)
					elif lt_libdir!=''and exists(os.path.join(lt_libdir,olib)):
						return(lt_libdir,olib,True)
					else:
						return(None,olib,True)
				else:
					raise Utils.WafError('invalid libtool object file: %s'%laf)
	return(None,None,None)
def libname_msvc(self,libname,is_static=False):
	lib=libname.lower()
	lib=re.sub('\.lib$','',lib)
	if lib in g_msvc_systemlibs:
		return lib+'.lib'
	lib=re.sub('^lib','',lib)
	if lib=='m':
		return None
	(lt_path,lt_libname,lt_static)=find_lt_names_msvc(self,lib,is_static)
	if lt_path!=None and lt_libname!=None:
		if lt_static==True:
			return os.path.join(lt_path,lt_libname)
	if lt_path!=None:
		_libpaths=[lt_path]+self.libpaths
	else:
		_libpaths=self.libpaths
	static_libs=['%ss.lib'%lib,'lib%ss.lib'%lib,'%s.lib'%lib,'lib%s.lib'%lib,]
	dynamic_libs=['lib%s.dll.lib'%lib,'lib%s.dll.a'%lib,'%s.dll.lib'%lib,'%s.dll.a'%lib,'lib%s_d.lib'%lib,'%s_d.lib'%lib,'%s.lib'%lib,]
	libnames=static_libs
	if not is_static:
		libnames=dynamic_libs+static_libs
	for path in _libpaths:
		for libn in libnames:
			if os.path.exists(os.path.join(path,libn)):
				debug('msvc: lib found: %s'%os.path.join(path,libn))
				return libn
	return None
def apply_msvc_obj_vars(self):
	debug('msvc: apply_msvc_obj_vars called for msvc')
	env=self.env
	app=env.append_unique
	cpppath_st=env['CPPPATH_ST']
	lib_st=env['LIB_ST']
	staticlib_st=env['STATICLIB_ST']
	libpath_st=env['LIBPATH_ST']
	staticlibpath_st=env['STATICLIBPATH_ST']
	for i in env['LIBPATH']:
		app('LINKFLAGS',libpath_st%i)
		if not self.libpaths.count(i):
			self.libpaths.append(i)
	for i in env['LIBPATH']:
		app('LINKFLAGS',staticlibpath_st%i)
		if not self.libpaths.count(i):
			self.libpaths.append(i)
	if not env['FULLSTATIC']:
		if env['STATICLIB']or env['LIB']:
			app('LINKFLAGS',env['SHLIB_MARKER'])
	if env['STATICLIB']:
		app('LINKFLAGS',env['STATICLIB_MARKER'])
		for i in env['STATICLIB']:
			debug('msvc: libname: %s'%i)
			libname=libname_msvc(self,i,True)
			debug('msvc: libnamefixed: %s'%libname)
			if libname!=None:
				app('LINKFLAGS',libname)
	if self.env['LIB']:
		for i in env['LIB']:
			debug('msvc: libname: %s'%i)
			libname=libname_msvc(self,i)
			debug('msvc: libnamefixed: %s'%libname)
			if libname!=None:
				app('LINKFLAGS',libname)
def apply_link_msvc(self):
	if'objects'in self.features:
		self.out_nodes=[]
		app=self.out_nodes.append
		for t in self.compiled_tasks:app(t.outputs[0])
		return
	link=getattr(self,'link',None)
	if not link:
		if'cstaticlib'in self.features:link='msvc_ar_link_static'
		elif'cxx'in self.features:link='msvc_cxx_link'
		else:link='msvc_cc_link'
	linktask=self.create_task(link)
	outputs=[t.outputs[0]for t in self.compiled_tasks]
	linktask.set_inputs(outputs)
	linktask.set_outputs(self.path.find_or_declare(ccroot.get_target_name(self)))
	linktask.features=self.features
	linktask.subsystem=getattr(self,'subsystem','')
	self.link_task=linktask
def init_msvc(self):
	if self.env['CC_NAME']=='msvc'or self.env['CXX_NAME']=='msvc':
		self.meths.remove('apply_link')
		self.meths.remove('apply_obj_vars')
	else:
		for x in['apply_link_msvc','apply_msvc_obj_vars']:
			self.meths.remove(x)
	try:_libpaths=getattr(self,'libpaths')
	except AttributeError:self.libpaths=[]
static_link_str='${STLIBLINK} ${LINK_SRC_F}${SRC} ${LINK_TGT_F}${TGT}'
Task.simple_task_type('msvc_ar_link_static',static_link_str,color='YELLOW',ext_in='.o')
Task.task_type_from_func('msvc_cc_link',vars=['LINK','LINK_SRC_F','LINK_TGT_F','LINKFLAGS','_LIBDIRFLAGS','_LIBFLAGS','MT','MTFLAGS'],color='YELLOW',func=msvc_linker,ext_in='.o')
Task.task_type_from_func('msvc_cxx_link',vars=['LINK','LINK_SRC_F','LINK_TGT_F','LINKFLAGS','_LIBDIRFLAGS','_LIBFLAGS','MT','MTFLAGS'],color='YELLOW',func=msvc_linker,ext_in='.o')
rc_str='${RC} ${RCFLAGS} /fo ${TGT} ${SRC}'
Task.simple_task_type('rc',rc_str,color='GREEN',before='cc cxx')
import winres
detect='''
find_msvc
msvc_common_flags
cc_load_tools
cxx_load_tools
cc_add_flags
cxx_add_flags
'''
def find_msvc(conf):
	if sys.platform!='win32':
		conf.fatal('MSVC module only works under native Win32 Python! cygwin is not supported yet')
	v=conf.env
	cxx=None
	if v['CXX']:cxx=v['CXX']
	elif'CXX'in os.environ:cxx=os.environ['CXX']
	if not cxx:cxx=conf.find_program('CL',var='CXX')
	if not cxx:conf.fatal('CL was not found (compiler)')
	v['CXX']=cxx
	v['CC']=v['CXX']
	v['CXX_NAME']='msvc'
	v['CC_NAME']='msvc'
	if not v['LINK_CXX']:
		link=conf.find_program('LINK')
		if link:v['LINK_CXX']=link
		else:conf.fatal('LINK was not found (linker)')
	v['LINK']=link
	if not v['LINK_CC']:v['LINK_CC']=v['LINK_CXX']
	if not v['STLIBLINK']:
		stliblink=conf.find_program('LIB')
		if not stliblink:return
		v['STLIBLINK']=stliblink
	manifesttool=conf.find_program('MT')
	if manifesttool:
		v['MT']=manifesttool
		v['MTFLAGS']=['/NOLOGO']
	conf.check_tool('winres')
	if not conf.env['WINRC']:
		warn('Resource compiler not found. Compiling resource file is disabled')
def msvc_common_flags(conf):
	v=conf.env
	v['CPPFLAGS']=['/W3','/nologo','/EHsc','/errorReport:prompt']
	v['CCDEFINES']=['WIN32']
	v['CXXDEFINES']=['WIN32']
	v['_CCINCFLAGS']=[]
	v['_CCDEFFLAGS']=[]
	v['_CXXINCFLAGS']=[]
	v['_CXXDEFFLAGS']=[]
	v['CC_SRC_F']=''
	v['CC_TGT_F']='/c /Fo'
	v['CXX_SRC_F']=''
	v['CXX_TGT_F']='/c /Fo'
	v['CPPPATH_ST']='/I%s'
	v['CPPFLAGS_CONSOLE']=['/SUBSYSTEM:CONSOLE']
	v['CPPFLAGS_NATIVE']=['/SUBSYSTEM:NATIVE']
	v['CPPFLAGS_POSIX']=['/SUBSYSTEM:POSIX']
	v['CPPFLAGS_WINDOWS']=['/SUBSYSTEM:WINDOWS']
	v['CPPFLAGS_WINDOWSCE']=['/SUBSYSTEM:WINDOWSCE']
	v['CPPFLAGS_CRT_MULTITHREADED']=['/MT']
	v['CPPFLAGS_CRT_MULTITHREADED_DLL']=['/MD']
	v['CPPDEFINES_CRT_MULTITHREADED']=['_MT']
	v['CPPDEFINES_CRT_MULTITHREADED_DLL']=['_MT','_DLL']
	v['CPPFLAGS_CRT_MULTITHREADED_DBG']=['/MTd']
	v['CPPFLAGS_CRT_MULTITHREADED_DLL_DBG']=['/MDd']
	v['CPPDEFINES_CRT_MULTITHREADED_DBG']=['_DEBUG','_MT']
	v['CPPDEFINES_CRT_MULTITHREADED_DLL_DBG']=['_DEBUG','_MT','_DLL']
	v['CCFLAGS']=['/TC']
	v['CCFLAGS_OPTIMIZED']=['/O2','/DNDEBUG']
	v['CCFLAGS_RELEASE']=['/O2','/DNDEBUG']
	v['CCFLAGS_DEBUG']=['/Od','/RTC1','/D_DEBUG','/ZI']
	v['CCFLAGS_ULTRADEBUG']=['/Od','/RTC1','/D_DEBUG','/ZI']
	v['CXXFLAGS']=['/TP']
	v['CXXFLAGS_OPTIMIZED']=['/O2','/DNDEBUG']
	v['CXXFLAGS_RELEASE']=['/O2','/DNDEBUG']
	v['CXXFLAGS_DEBUG']=['/Od','/RTC1','/D_DEBUG','/ZI']
	v['CXXFLAGS_ULTRADEBUG']=['/Od','/RTC1','/D_DEBUG','/ZI']
	v['LIB']=[]
	v['LINK_TGT_F']='/OUT:'
	v['LINK_SRC_F']=' '
	v['LIB_ST']='%s.lib'
	v['LIBPATH_ST']='/LIBPATH:%s'
	v['STATICLIB_ST']='%s.lib'
	v['STATICLIBPATH_ST']='/LIBPATH:%s'
	v['CCDEFINES_ST']='/D%s'
	v['CXXDEFINES_ST']='/D%s'
	v['_LIBDIRFLAGS']=''
	v['_LIBFLAGS']=''
	v['SHLIB_MARKER']=''
	v['STATICLIB_MARKER']=''
	v['LINKFLAGS']=['/NOLOGO','/MACHINE:X86','/ERRORREPORT:PROMPT']
	try:
		debug_level=Options.options.debug_level.upper()
	except AttributeError:
		debug_level=ccroot.DEBUG_LEVELS.CUSTOM
	v['CCFLAGS']+=v['CCFLAGS_'+debug_level]
	v['CXXFLAGS']+=v['CXXFLAGS_'+debug_level]
	v['LINKFLAGS']+=v['LINKFLAGS_'+debug_level]
	v['shlib_CCFLAGS']=['']
	v['shlib_CXXFLAGS']=['']
	v['shlib_LINKFLAGS']=['/DLL']
	v['shlib_PATTERN']='%s.dll'
	v['staticlib_LINKFLAGS']=['']
	v['staticlib_PATTERN']='%s.lib'
	v['program_PATTERN']='%s.exe'
def set_options(opt):
	opt.add_option('-d','--debug-level',action='store',default=ccroot.DEBUG_LEVELS.DEBUG,help="Specify the debug level, does nothing if CFLAGS is set in the environment. [Allowed Values: '%s']"%"', '".join(ccroot.DEBUG_LEVELS.ALL),choices=ccroot.DEBUG_LEVELS.ALL,dest='debug_level')

taskgen(apply_msvc_obj_vars)
feature('cc','cxx')(apply_msvc_obj_vars)
after('apply_obj_vars_cc')(apply_msvc_obj_vars)
after('apply_obj_vars_cxx')(apply_msvc_obj_vars)
taskgen(apply_link_msvc)
feature('cc','cxx')(apply_link_msvc)
after('apply_core')(apply_link_msvc)
before('apply_obj_vars_cc')(apply_link_msvc)
before('apply_obj_vars_cxx')(apply_link_msvc)
taskgen(init_msvc)
feature('cc','cxx')(init_msvc)
before('apply_core')(init_msvc)
conftest(find_msvc)
conftest(msvc_common_flags)
