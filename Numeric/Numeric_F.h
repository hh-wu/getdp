/* $Id: Numeric_F.h,v 1.2 2000-09-07 18:47:27 geuzaine Exp $ */
#ifndef _SOLVERMISC_F_H_
#define _SOLVERMISC_F_H_

#include "Compat.h"

#ifdef _UNDERSCORE
#define solcyl_     solcyl
#define solsph_     solsph
#define cglt2d_     cglt2d
#define clt2d_      clt2d
#define clt2dl_     clt2dl
#endif

EXTERN_C_BEGIN

extern void solsph_(double*,double*,double*,double*,double*,double*,double*,double*,
		    double*,double*,double*,double*,double*);  
extern void solcyl_(double*,double*,double*,double*,double*,double*,double*,double*,
		    double*,double*,double*);
extern void cglt2d_(double*,double*,double*,double*,double*,double*,
		    double*,double*,double*,double*);
extern void clt2d_ (double*,double*,double*,double*,double*,double*,
		    double*,double*,double*,double*);
extern void clt2dl_(double*,double*,double*,double*,double*,double*,
		    double*,double*,double*,double*);

EXTERN_C_END

#endif
