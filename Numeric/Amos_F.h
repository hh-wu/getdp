/* $Id: Amos_F.h,v 1.2 2001-09-06 09:49:11 geuzaine Exp $ */
#ifndef _AMOS_F_H_
#define _AMOS_F_H_

#include "Compat.h"

#ifdef _UNDERSCORE

#define zbesj_ zbesj
#define zbesy_ zbesy
#define zbesh_ zbesh
#define zbesi_ zbesi
#define zbesk_ zbesk         
  
#endif

EXTERN_C_BEGIN

void zbesj_ (double*, double*, double*, int*, int*, double*, double*, int*, int*) ; 
void zbesy_ (double*, double*, double*, int*, int*, double*, double*, int*, double*, double*, int* );
void zbesh_ (double*, double*, double*, int*, int*, int*, double*, double*, int*, int*) ;

void zbesi_ (double*, double*, double*, int*, int*, double*, double*, int*, int*) ;
void zbesk_ (double*, double*, double*, int*, int*, double*, double*, int*, int*) ;

EXTERN_C_END

#endif




