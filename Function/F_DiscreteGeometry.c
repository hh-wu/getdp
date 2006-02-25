#define RCSID "$Id: F_DiscreteGeometry.c,v 1.4 2006-02-25 15:00:24 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 */

#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"
#include "Numeric.h"
#include "Tools.h"


/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V


/* ------------------------------------------------------------------------ */
/*  Discrete Geometric Approach                                             */
/* ------------------------------------------------------------------------ */


void  F_IncMatrixEdgesXNodes (F_ARG) {

  int k;

  GetDP_Begin("F_IncMatrixEdgesXNodes");







  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = 0. ;
    V->Val[MAX_DIM*k+1] = 0. ;
    V->Val[MAX_DIM*k+2] = 0. ;
    V->Val[MAX_DIM*k+3] = 0. ;
    V->Val[MAX_DIM*k+4] = 0. ;
    V->Val[MAX_DIM*k+5] = 0. ;
    V->Val[MAX_DIM*k+6] = 0. ;
    V->Val[MAX_DIM*k+7] = 0. ;
    V->Val[MAX_DIM*k+8] = 0. ;
  }
  V->Type = TENSOR ;

  GetDP_End ;
}


void  F_MatrixDualEdgesXEdges (F_ARG) {

  double valArg;
  int k;

  GetDP_Begin("F_MatrixDualEdgesXEdges");

  valArg = A->Val[0] ; /* For A->Type == SCALAR ... */






  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = 0. ;
    V->Val[MAX_DIM*k+1] = 0. ;
    V->Val[MAX_DIM*k+2] = 0. ;
    V->Val[MAX_DIM*k+3] = 0. ;
    V->Val[MAX_DIM*k+4] = 0. ;
    V->Val[MAX_DIM*k+5] = 0. ;
    V->Val[MAX_DIM*k+6] = 0. ;
    V->Val[MAX_DIM*k+7] = 0. ;
    V->Val[MAX_DIM*k+8] = 0. ;
  }
  V->Type = TENSOR ;

  GetDP_End ;
}



#undef F_ARG
