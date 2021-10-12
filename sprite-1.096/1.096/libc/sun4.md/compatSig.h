/*
 * compatSig.h --
 *
 *	Declarations of mapping tables between Sprite and UNIX signals.
 *	This used to be compatSig.c but now it shared between kernel and
 *	user compatibility libraries.
 *
 * Copyright 1986, 1988 Regents of the University of California
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies.  The University of California
 * makes no representations about the suitability of this
 * software for any purpose.  It is provided "as is" without
 * express or implied warranty.
 *
 * $Compat: proto.h,v 1.3 86/02/14 09:47:40 ouster Exp $ SPRITE (Berkeley)
 */

#ifndef _COMPATSIG
#define _COMPATSIG

#include "sprite.h"
/*
 * Define the mapping between Unix and Sprite signals. There are two arrays,
 * one to go from Unix to Sprite and one to go from Sprite to Unix.
 *
 * Note that the signals SIGIOT and SIGEMT that people don't usually
 * send from the keyboard and that tend not to be delivered by the
 * kernel but, rather, are used for IPC have been mapped to user-defined
 * signal numbers, rather than a standard Sprite signal. This allows more
 * of a one-to-one mapping.
 */

/*
 * Map Unix signals to Sprite signals.
 */
int compat_UnixSigToSprite[] = {
			NULL,
     /* SIGHUP */	SIG_INTERRUPT,
     /* SIGINT */	SIG_INTERRUPT,
     /* SIGDEBUG */	SIG_DEBUG,	
     /* SIGILL */	SIG_ILL_INST,
     /* SIGTRAP */	SIG_DEBUG,
     /* SIGIOT */	28,
     /* SIGEMT */	29,
     /* SIGFPE */	SIG_ARITH_FAULT,
     /* SIGKILL */	SIG_KILL,
     /* SIGMIG */	SIG_MIGRATE_TRAP,
     /* SIGSEGV */	SIG_ADDR_FAULT,
     /* SIGSYS */	NULL,
     /* SIGPIPE */	SIG_PIPE,
     /* SIGALRM */	SIG_TIMER,
     /* SIGTERM */	SIG_TERM,
     /* SIGURG */	SIG_URGENT,
     /* SIGSTOP */	SIG_SUSPEND,
     /* SIGTSTP */	SIG_TTY_SUSPEND,
     /* SIGCONT */	SIG_RESUME,
     /* SIGCHLD */	SIG_CHILD,
     /* SIGTTIN */	SIG_TTY_INPUT,
     /* SIGTTOU */	SIG_TTY_OUTPUT,
     /* SIGIO */	26,
     /* SIGXCPU */	NULL,
     /* SIGXFSZ */	NULL,
     /* SIGVTALRM */	NULL,
     /* SIGPROF */	NULL,
     /* SIGWINCH */	27,
     /* SIGMIGHOME */	SIG_MIGRATE_HOME,
     /* SIGUSR1 */	30,	/* user-defined signal 1 */
     /* SIGUSR2 */	31,	/* user-defined signal 1 */
     /* NULL */		32,	/* not a signal, but NSIG is 32 so we need
      				   an entry here. */
};

/*
 * Map Sprite signals to Unix signals.
 */
static int spriteToUnix[] = {
				NULL,
    /* SIG_DEBUG */		SIGDEBUG,
    /* SIG_ARITH_FAULT */	SIGFPE,
    /* SIG_ILL_INST */		SIGILL,
    /* SIG_ADDR_FAULT */	SIGSEGV,
    /* SIG_KILL */		SIGKILL,
    /* SIG_INTERRUPT */		SIGINT,
    /* SIG_BREAKPOINT */	SIGILL,
    /* SIG_TRACE_TRAP */	SIGILL,
    /* SIG_MIGRATE_TRAP */	SIGMIG,
    /* SIG_MIGRATE_HOME */	SIGMIGHOME,
    /* SIG_SUSPEND */		SIGSTOP,
    /* SIG_RESUME */		SIGCONT,
    /* SIG_TTY_INPUT */		SIGTTIN,
    /* SIG_PIPE */		SIGPIPE,
    /* SIG_TIMER */		SIGALRM,
    /* SIG_URGENT */		SIGURG,
    /* SIG_CHILD */		SIGCHLD,
    /* SIG_TERM */		SIGTERM,
    /* SIG_TTY_SUSPEND */	SIGTSTP,
    /* SIG_TTY_OUTPUT */	SIGTTOU,
    /* 21 */			NULL,
    /* 22 */			NULL,
    /* 23 */			NULL,
    /* 24 */			NULL,
    /* 25 */ 			NULL,
    /* 26 */			SIGIO,
    /* 27 */			SIGWINCH,
    /* 28 */			SIGIOT,
    /* 29 */			SIGEMT,
    /* 30 */			SIGUSR1,
    /* 31 */			SIGUSR2,
    /* 32 */			NULL,
};


#endif
