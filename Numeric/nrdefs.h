/* $Id: nrdefs.h,v 1.2 2000-09-07 18:47:27 geuzaine Exp $ */
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
