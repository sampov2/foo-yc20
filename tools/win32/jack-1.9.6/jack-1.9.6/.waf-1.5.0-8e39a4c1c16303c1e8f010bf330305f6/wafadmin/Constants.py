#! /usr/bin/env python
# encoding: utf-8

HEXVERSION=0x10500
WAFVERSION="1.5.0"
ABI=6
CACHE_DIR='c4che'
CACHE_SUFFIX='.cache.py'
DBFILE='.wafpickle-%d'%ABI
WSCRIPT_FILE='wscript'
WSCRIPT_BUILD_FILE='wscript_build'
WAF_CONFIG_LOG='config.log'
WAF_CONFIG_H='config.h'
COMMON_INCLUDES='COMMON_INCLUDES'
SIG_NIL='iluvcuteoverload'
VARIANT='_VARIANT_'
DEFAULT='default'
SRCDIR='srcdir'
BLDDIR='blddir'
APPNAME='APPNAME'
VERSION='VERSION'
DEFINES='defines'
UNDEFINED='#undefined#variable#for#defines#'
BREAK="break"
CONTINUE="continue"
JOBCONTROL="JOBCONTROL"
MAXPARALLEL="MAXPARALLEL"
NORMAL="NORMAL"
NOT_RUN=0
MISSING=1
CRASHED=2
EXCEPTION=3
SKIPPED=8
SUCCESS=9
ASK_LATER=-1
SKIP_ME=-2
RUN_ME=-3
LOG_FORMAT="%(asctime)s %(c1)s%(zone)s%(c2)s %(message)s"
HOUR_FORMAT="%H:%M:%S"
TEST_OK=True

