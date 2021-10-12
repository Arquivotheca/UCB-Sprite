/* 
 * coproc.c --
 *
 *	Implements coroutines.
 *
 * Copyright 1990 Regents of the University of California
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies.  The University of California
 * makes no representations about the suitability of this
 * software for any purpose.  It is provided "as is" without
 * express or implied warranty.
 */

#ifndef lint
static char rcsid[] = "$Header: /sprite/lib/forms/RCS/proto.c,v 1.3 90/01/12 12:03:36 douglis Exp $ SPRITE (Berkeley)";
#endif /* not lint */

#include "coproc.h"

void *calloc();

COPROCtype *
CreateCoproc2 ( p )
	COPROCtype  *p;
{
    char *oldSP = (char *) (p->env[SP_OFF]);
    char *oldFP = (char *) (p->env[FP_OFF]);
    int	frameSize = oldFP - oldSP + 40;
    char *newSP = ((char *) (&p->sp[STACKSIZE]))-frameSize;
    char *newFP = newSP + frameSize - 40;
    /*
     * Double word align stack and frame.
     * Probably not necessary to sun3's but there's no harm.
     */
    int stackAlignMod =
	    (unsigned) oldSP%sizeof(double) - (unsigned) newSP%sizeof(double);
    newSP += stackAlignMod - sizeof(double);
    newFP += stackAlignMod - sizeof(double);

    bcopy(oldSP, newSP, frameSize);
    p->env[SP_OFF] = (int) newSP;
    p->env[FP_OFF] = (int) newFP;
    return p;
}

void
SwitchCoproc ( p1, p2 )
    COPROCtype *p1, *p2;
{
    if ( p1->sp[WARNSTACKLIMIT] != 0 || p1->sp[WARNSTACKLIMIT-3] != 0 ) {
	printf( "Error: SwitchCoproc: Stack overflow imminent\n" );
    }
    if (!_setjmp(p1->env)) {
	_longjmp(p2->env, 1);
    }
}
