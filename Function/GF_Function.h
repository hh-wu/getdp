/* $Id: GF_Function.h,v 1.4 2001-08-09 07:54:43 sabarieg Exp $ */
#ifndef _GF_FUNCTION_H_
#define _GF_FUNCTION_H_

#include "Data_Active.h"


/* ------------------------------------------------------------------------ */
/*   G r e e n   F u n c t i o n s                                          */
/* ------------------------------------------------------------------------ */

#define ARG1  struct Function * Fct, struct Value * A, struct Value * V

void  GF_Laplace                     (ARG1) ;
void  GF_GradLaplace                 (ARG1) ;
void  GF_NPxGradLaplace              (ARG1) ;
void  GF_NSxGradLaplace              (ARG1) ;
void  GF_ApproximateLaplace          (ARG1) ;

void  GF_Helmholtz                   (ARG1) ;
void  GF_GradHelmholtz               (ARG1) ;
void  GF_NSxGradHelmholtz            (ARG1) ;
void  GF_NPxGradHelmholtz            (ARG1) ;

#undef ARG1


#define ARG2						\
  struct Element * Element, struct Function * Fct,	\
  void  (*xFunctionBF) (), int EntityNum, 		\
  double x, double y, double z, struct Value * Val

void  GF_LaplacexForm                (ARG2) ;
void  GF_GradLaplacexForm            (ARG2) ;
void  GF_NPxGradLaplacexForm         (ARG2) ;
void  GF_NSxGradLaplacexForm         (ARG2) ;
void  GF_ApproximateLaplacexForm     (ARG2) ;

void  GF_HelmholtzxForm              (ARG2) ;

#undef ARG2

#endif
