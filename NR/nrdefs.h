/* $Id: nrdefs.h,v 1.1 2003-03-17 23:47:10 geuzaine Exp $ */
#ifndef _NRDEFS_H_
#define _NRDEFS_H_

#include "Data_Numeric.h"

#define SQR  SQU
#define FSQR SQU
#define DSQR SQU

#define IMAX MAX
#define LMAX MAX
#define FMAX MAX
#define DMAX MAX

#define IMIN MIN
#define LMIN MIN
#define FMIN MIN
#define DMIN MIN

#define SIGN(a,b) ((b) >= 0.0 ? fabs(a) : -fabs(a))

#endif 
