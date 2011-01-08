#! /usr/bin/env python
# encoding: utf-8
import sys
if sys.hexversion < 0x020400f0: from sets import Set as set
import sys,random,time,threading,Queue,traceback
import Build,Utils,Logs,Options
import pproc
from Logs import debug,error
from Constants import*
GAP=15
run_old=threading.Thread.run
def run(*args,**kwargs):
	try:
		run_old(*args,**kwargs)
	except(KeyboardInterrupt,SystemExit):
		raise
	except:
		sys.excepthook(*sys.exc_info())
threading.Thread.run=run
class TaskConsumer(threading.Thread):
	def __init__(self,m):
		threading.Thread.__init__(self)
		self.setDaemon(1)
		self.master=m
		self.start()
	def run(self):
		try:
			self.loop()
		except:
			pass
	def loop(self):
		m=self.master
		while 1:
			tsk=m.ready.get()
			if m.stop:
				m.out.put(tsk)
				continue
			try:
				tsk.generator.bld.printout(tsk.display())
				if tsk.__class__.stat:ret=tsk.__class__.stat(tsk)
				else:ret=tsk.call_run()
			except Exception,e:
				tsk.err_msg=Utils.ex_stack()
				tsk.hasrun=EXCEPTION
				m.error_handler(tsk)
				m.out.put(tsk)
				continue
			if ret:
				tsk.err_code=ret
				tsk.hasrun=CRASHED
			else:
				try:
					tsk.post_run()
				except OSError:
					tsk.hasrun=MISSING
				else:
					tsk.hasrun=SUCCESS
			if tsk.hasrun!=SUCCESS:
				m.error_handler(tsk)
			m.out.put(tsk)
class Parallel(object):
	def __init__(self,bld,j=2):
		self.numjobs=j
		self.manager=bld.task_manager
		self.total=self.manager.total()
		self.outstanding=[]
		self.maxjobs=sys.maxint
		self.frozen=[]
		self.ready=Queue.Queue(0)
		self.out=Queue.Queue(0)
		self.count=0
		self.stuck=0
		self.processed=1
		self.consumers=None
		self.stop=False
		self.error=False
	def get_next(self):
		if not self.outstanding:
			return None
		return self.outstanding.pop(0)
	def postpone(self,tsk):
		if random.randint(0,1):
			self.frozen.insert(0,tsk)
		else:
			self.frozen.append(tsk)
	def refill_task_list(self):
		while self.count>self.numjobs+GAP or self.count>self.maxjobs:
			self.get_out()
		while not self.outstanding:
			if self.count:
				self.get_out()
			if self.frozen:
				self.outstanding+=self.frozen
				self.frozen=[]
			elif not self.count:
				(self.maxjobs,tmp)=self.manager.get_next_set()
				if tmp:self.outstanding+=tmp
				break
	def get_out(self):
		ret=self.out.get()
		self.manager.add_finished(ret)
		if not self.stop and getattr(ret,'more_tasks',None):
			self.outstanding+=ret.more_tasks
			self.total+=len(ret.more_tasks)
		self.count-=1
	def error_handler(self,tsk):
		if not Options.options.keep:
			self.stop=True
		self.error=True
	def start(self):
		while not self.stop:
			self.refill_task_list()
			tsk=self.get_next()
			if not tsk:
				if self.count:
					continue
				else:
					break
			if tsk.hasrun:
				self.processed+=1
				self.manager.add_finished(tsk)
			try:
				st=tsk.runnable_status()
			except Exception,e:
				tsk.err_msg=Utils.ex_stack()
				tsk.hasrun=EXCEPTION
				self.processed+=1
				self.error_handler(tsk)
				self.manager.add_finished(tsk)
				continue
			if st==ASK_LATER:
				self.postpone(tsk)
			elif st==SKIP_ME:
				self.processed+=1
				tsk.hasrun=SKIPPED
				self.manager.add_finished(tsk)
			else:
				tsk.position=(self.processed,self.total)
				self.count+=1
				self.ready.put(tsk)
				self.processed+=1
				if not self.consumers:
					self.consumers=[TaskConsumer(self)for i in xrange(self.numjobs)]
		assert(self.count==0 or self.stop)

