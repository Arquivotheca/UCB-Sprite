# 1 "tmp.c"

































XGDB=

bindir=/usr/release/@sys/latest/bin

xbindir=$(bindir)












CC=cc






YACC=yacc
SHELL=/bin/sh
MAKE=make




CC-LD=${CC}


HAVE_VPRINTF_DEFINE = -DHAVE_VPRINTF


 







# 81 "tmp.c"



GLOBAL_CFLAGS = -g3 
CFLAGS = -g3 -I. ${HAVE_VPRINTF_DEFINE} ${GLOBAL_CFLAGS} -DMACH_IPC_COMPAT=1


LINTFLAGS = -I. ${HAVE_VPRINTF_DEFINE} 
SUN_MACH3_ENTRY = start
I386_MACH3_ENTRY= __start
PMAX_MACH3_ENTRY= __start
VAX_MACH3_ENTRY = start
LDFLAGS = -e ${${MACHINE}_MACH3_ENTRY}








OBSTACK = obstack.o
OBSTACK1 = obstack.o

# 108 "tmp.c"

REGEX = 
REGEX1 = 


# 116 "tmp.c"

ALLOCA = 
ALLOCA1 =






GNU_MALLOC = malloc.o





MALLOC_FLAGS = ${CFLAGS} -Drcheck -Dbotch=fatal_dump_core -DMSTATS


# 136 "tmp.c"

SYSV_DEFINE =



 
# 144 "tmp.c"

MUNCH_DEFINE = ${SYSV_DEFINE}

MUNCH=./munch



TERMCAP = -ltermcap



# 157 "tmp.c"

CLIBS = ${ADD_FILES} ${TERMCAP} -lmach
LD_LIBS = ${ADD_FILES} ${TERMCAP} -lmach3_vus -lc

ADD_FILES = ${OBSTACK} ${REGEX} ${ALLOCA} ${GNU_MALLOC}
ADD_DEPS = ${OBSTACK1} ${REGEX1} ${ALLOCA1} ${GNU_MALLOC}

# mach_os.c is #include'd by various "dep" files. Blech.
SFILES = blockframe.c breakpoint.c dbxread.c coffread.c command.c core.c \
	 environ.c eval.c expprint.c findvar.c infcmd.c inflow.c infrun.c \
	 mach_exception.c printcmd.c \
	 remote.c source.c stack.c standalone.c stuff.c symmisc.c symtab.c \
	 utils.c valarith.c valops.c valprint.c values.c version.c expread.y \
	 xgdb.c
# kdb-start.c

#DEPFILES = umax-dep.c gould-dep.c default-dep.c sun3-dep.c \
#	   sparc-dep.c hp9k320-dep.c hp300bsd-dep.c news-dep.c i386-dep.c \
#	   symmetry-dep.c convex-dep.c altos-dep.c isi-dep.c pyr-dep.c \
#	   1-dep.c

DEPFILES = default-dep.c i386mach-dep.c mipsmach-dep.c ns32kmach-dep.c \
	sparcmach-dep.c sun3mach-dep.c vaxmach-dep.c

# 185 "tmp.c"


PINSNS = i386-pinsn.c sparc-pinsn.c vax-pinsn.c m68k-pinsn.c \
	 ns32k-pinsn.c pyr-pinsn.c 1-pinsn.c
# gld-pinsn.c convex-pinsn.c 

HFILES = command.h defs.h environ.h expression.h frame.h getpagesize.h \
	 inferior.h symseg.h symtab.h value.h wait.h \
	 a.out.encap.h a.out.gnu.h stab.gnu.h 

OPCODES = m68k-opcode.h sparc-opcode.h vax-opcode.h \
	  ns32k-opcode.h pyr-opcode.h 1-opcode.h
# convex-opcode.h npl-opcode.h pn-opcode.h 

#MFILES = m-hp9k320.h m-hp300bsd.h m-i386.h m-i386gas.h \
#  m-i386-sv32.h m-i386g-sv32.h m-isi.h m-merlin.h \
#  m-altos.h m-news.h m-newsos3.h m-npl.h m-pn.h \
#  m-sparc.h m-sun2.h m-sun3.h m-sun2os4.h \
#  m-sun3os4.h m-sun4os4.h m-umax.h m-vax.h m-symmetry.h m-convex.h \
#  m-pyr.h m-1.h

MFILES = m-i386mach.h m-mipsmach.h m-ns32kmach.h m-sparc.h m-sun3mach.h \
	m-sun4mach.h m-vaxmach.h

# 212 "tmp.c"






READLINE = readline.c history.c funmap.c \
  emacs_keymap.c vi_keymap.c vi_mode.c keymaps.c \
  readline.h history.h keymaps.h chardefs.h \
  inc-readline.texinfo inc-history.texinfo \
  readline.texinfo history.texinfo \
  Makefile ChangeLog

MIDOBS = machidUser.o

REMOTE_EXAMPLES = remote-sa.m68k.shar remote-multi.shar

POSSLIBS = obstack.h obstack.c regex.c regex.h malloc.c alloca.c

TESTS = testbpt.c testfun.c testrec.c testreg.c testregs.c

OTHERS = Makefile.dist createtags munch config.gdb ChangeLog README TAGS \
	 gdb.texinfo .gdbinit COPYING expread.tab.c stab.def \
	 XGDB-README copying.c Projects Convex.notes copying.awk hp-include

# XXX mach_os.c is #include'd, so it shouldn't be run through lint
# or cc directly.
TAGFILES = ${SFILES} ${DEPFILES} ${PINSNS} ${HFILES} ${OPCODES} ${MFILES} \
	   ${POSSLIBS} mach_os.c main.c
TARFILES = ${TAGFILES} ${OTHERS} ${REMOTE_EXAMPLES}

OBS = main.o blockframe.o breakpoint.o findvar.o stack.o source.o \
    values.o eval.o valops.o valarith.o valprint.o printcmd.o \
    symtab.o symmisc.o coffread.o dbxread.o infcmd.o infrun.o remote.o \
    command.o utils.o expread.o expprint.o mach_exception.o pinsn.o \
    environ.o version.o \
    copying.o ${READLINEOBS} ${MIDOBS}

TSOBS = core.o inflow.o dep.o

NTSOBS = standalone.o

TSSTART = /lib/crt0.o

NTSSTART = kdb-start.o

RL_LIB = readline/libreadline.a




MD=-DM_CLIBS=-lmach







TARGET_ARCH=

all: gdb $(XGDB)

install: gdb $(XGDB)
	cp gdb $(bindir)/gdb.new
	mv $(bindir)/gdb.new $(bindir)/gdb
	-if [ "$(XGDB)" = xgdb ]; then \
		cp xgdb $(xbindir)/xgdb.new; \
		mv $(xbindir)/xgdb.new $(xbindir)xgdb; \
	fi

init.c: $(OBS) $(TSOBS) 
	rm -f init.c
	$(MUNCH) ${MUNCH_DEFINE} $(OBS) $(TSOBS) > init.c

gdb : $(OBS) $(TSOBS) ${ADD_DEPS} ${RL_LIB} init.o
	${LD} $(LDFLAGS) -o gdb init.o $(OBS) $(TSOBS) ${RL_LIB} $(LD_LIBS)

lint :
	lint -h ${LINTFLAGS} ${SFILES} dep.c pinsn.c obstack.c regex.c malloc.c alloca.c




gdb1 : gdb
	cp gdb gdb1

Makefile : Makefile.dist
	cp Makefile.dist tmp.c
	$(CC) -E >Makefile tmp.c $(MD) "-DM_MAKEDEFINE=$(MD)"
	-rm tmp.c




xgdb : $(OBS) $(TSOBS) xgdb.o ${ADD_DEPS} ${RL_LIB}
	rm -f init.c
	$(MUNCH) ${MUNCH_DEFINE} $(OBS) $(TSOBS) xgdb.o > init.c
	$(CC-LD) $(LDFLAGS) -o xgdb init.c $(OBS) $(TSOBS) xgdb.o \
	-lXaw -lXmu -lXt -lX11 ${RL_LIB} $(CLIBS)





kdb : $(NTSSTART) $(OBS) $(NTSOBS) ${ADD_DEPS} ${RL_LIB}
	rm -f init.c
	$(MUNCH) ${MUNCH_DEFINE} $(OBS) $(NTSOBS) > init.c
	$(CC) $(LDFLAGS) -c init.c $(CLIBS) 
	ld -o kdb $(NTSSTART) $(OBS) $(NTSOBS) init.o ${RL_LIB} -lc $(CLIBS)







TAGS: ${TAGFILES}
	./createtags ${TAGFILES}
tags: TAGS

gdb.tar: ${TARFILES}
	rm -f gdb.tar
	mkdir dist-gdb
	cd dist-gdb ; for i in ${TARFILES} ; do ln -s ../$$i . ; done
	mkdir dist-gdb/readline
	cd dist-gdb/readline ; for i in ${READLINE} ; do ln -s ../../readline/$$i . ; done
	tar chf gdb.tar dist-gdb
	rm -rf dist-gdb




gdb.tar.Z: gdb.tar
	if [ -f gdb.tar.Z ]; then rm -f gdb.tar.Z; else true; fi
	compress gdb.tar

clean:
	rm -f ${OBS} ${TSOBS} ${NTSOBS} ${OBSTACK} ${REGEX} ${GNU_MALLOC}
	rm -f init.c init.o
	rm -f xgdb.o xgdb
	rm -f gdb core gdb.tar gdb.tar.Z make.log
	rm -f gdb[0-9]
	cd readline ; make clean

distclean: clean expread.tab.c TAGS
	rm -f dep.c opcode.h param.h pinsn.c config.status
	rm -f y.output yacc.acts yacc.tmp
	rm -f ${TESTS} Makefile

realclean: clean
	rm -f expread.tab.c TAGS
	rm -f dep.c opcode.h param.h pinsn.c config.status
	rm -f Makefile

xgdb.o : defs.h param.h symtab.h frame.h


copying.c : COPYING copying.awk
	awk -f copying.awk < COPYING > copying.c

expread.tab.c : expread.y
	@echo 'Expect 4 shift/reduce conflict.'
	${YACC} expread.y
	mv y.tab.c expread.tab.c

expread.o : expread.tab.c defs.h param.h symtab.h frame.h expression.h
	$(CC) -c ${CFLAGS} expread.tab.c
	mv expread.tab.o expread.o

readline/libreadline.a : force_update
	cd readline ; ${MAKE} "SYSV=${SYSV_DEFINE}" \
		"DEBUG_FLAGS=${GLOBAL_CFLAGS}" "CC=${CC}" libreadline.a

force_update :


malloc.o : malloc.c
	${CC} -c ${MALLOC_FLAGS} malloc.c



dep.o : dep.c config.status defs.h param.h frame.h inferior.h obstack.h \
	a.out.encap.h mach_os.c



pinsn.o : pinsn.c config.status defs.h param.h symtab.h obstack.h symseg.h \
	  frame.h opcode.h





blockframe.o : defs.h param.h config.status symtab.h obstack.h symseg.h frame.h 
breakpoint.o : defs.h param.h config.status symtab.h obstack.h symseg.h frame.h
coffread.o : defs.h param.h config.status mipsread.c
command.o : command.h defs.h
core.o : defs.h  param.h config.status a.out.encap.h
dbxread.o : param.h config.status defs.h symtab.h obstack.h symseg.h a.out.encap.h \
	    stab.gnu.h
environ.o : environ.h 
eval.o : defs.h  param.h config.status symtab.h obstack.h symseg.h value.h expression.h 
expprint.o : defs.h symtab.h obstack.h symseg.h param.h config.status expression.h
findvar.o : defs.h param.h config.status symtab.h obstack.h symseg.h frame.h value.h 
infcmd.o : defs.h  param.h config.status symtab.h obstack.h symseg.h frame.h inferior.h \
	   environ.h value.h
inflow.o : defs.h  param.h config.status frame.h inferior.h
infrun.o : defs.h  param.h config.status symtab.h obstack.h symseg.h frame.h inferior.h \
	   wait.h
kdb-start.o : defs.h param.h config.status 
main.o : defs.h  command.h param.h config.status
malloc.o :  getpagesize.h
obstack.o : obstack.h 
printcmd.o :  defs.h param.h config.status frame.h symtab.h obstack.h symseg.h value.h \
	      expression.h 
regex.o : regex.h 
remote.o : defs.h  param.h config.status frame.h inferior.h wait.h
source.o : defs.h  symtab.h obstack.h symseg.h param.h config.status
stack.o :  defs.h param.h config.status symtab.h obstack.h symseg.h frame.h 
standalone.o : defs.h param.h config.status symtab.h obstack.h symseg.h frame.h \
	       inferior.h wait.h 
symmisc.o : defs.h symtab.h obstack.h symseg.h obstack.h 
symtab.o : defs.h  symtab.h obstack.h symseg.h param.h config.status  obstack.h
utils.o : defs.h  param.h config.status 
valarith.o : defs.h param.h config.status symtab.h obstack.h symseg.h value.h expression.h 
valops.o :  defs.h param.h config.status symtab.h obstack.h symseg.h value.h frame.h \
	    inferior.h
valprint.o :  defs.h param.h config.status symtab.h obstack.h symseg.h value.h 
values.o :  defs.h param.h config.status symtab.h obstack.h symseg.h value.h 

robotussin.h : getpagesize.h   
symtab.h : obstack.h symseg.h 
a.out.encap.h : a.out.gnu.h


MIGFLAGS = -MD
M3 = /usr
M3REL = ${M3}/release/@sys/latest
US = ${M3}/us/src/latest

VPATH = ../../local_include/unix_include:${US}/mach_include_sa:${US}/sa_include:/usr/user/src/latest/bin/machid:/usr/release/@sys/latest/include/servers:${VPATH}
LPATH = ../../../../obj/@sys/latest/release/lib/:${M3REL}/lib:${LPATH}
.EXPORT:	LPATH

machid.h machidUser.c: machid.defs
	${M3REL}/bin/mig $(MIGFLAGS) machid.defs
