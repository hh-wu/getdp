/* $Id: Numeric_F.h,v 1.3 2000-10-21 12:18:30 geuzaine Exp $ */
#ifndef _NUMERIC_F_H_
#define _NUMERIC_F_H_

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
