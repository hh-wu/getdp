/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to "getdp@geuz.org".
 */

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
