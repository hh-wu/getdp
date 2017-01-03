// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GF_H_
#define _GF_H_

#include "ProData.h"

/* ------------------------------------------------------------------------ */
/*   G r e e n   F u n c t i o n s                                          */
/* ------------------------------------------------------------------------ */

#define GF_ARG  struct Function * Fct, struct Value * A, struct Value * V

void  GF_Laplace                     (GF_ARG) ;
void  GF_GradLaplace                 (GF_ARG) ;
void  GF_NPxGradLaplace              (GF_ARG) ;
void  GF_NSxGradLaplace              (GF_ARG) ;
void  GF_ApproximateLaplace          (GF_ARG) ;

void  GF_Helmholtz                   (GF_ARG) ;
void  GF_GradHelmholtz               (GF_ARG) ;
void  GF_NSxGradHelmholtz            (GF_ARG) ;
void  GF_NPxGradHelmholtz            (GF_ARG) ;
void  GF_HelmholtzThinWire           (GF_ARG) ;

#define GF_ARGX						\
  struct Element * Element, struct Function * Fct,	\
  void  (*xFunctionBF) (), int EntityNum, 		\
  double x, double y, double z, struct Value * Val

void  GF_LaplacexForm                (GF_ARGX) ;
void  GF_GradLaplacexForm            (GF_ARGX) ;
void  GF_NPxGradLaplacexForm         (GF_ARGX) ;
void  GF_NSxGradLaplacexForm         (GF_ARGX) ;
void  GF_ApproximateLaplacexForm     (GF_ARGX) ;

void  GF_HelmholtzxForm              (GF_ARGX) ;

#endif
