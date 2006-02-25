#define RCSID "$Id: F_BiotSavart.c,v 1.8 2006-02-25 15:00:24 geuzaine Exp $"
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
 *   Ruth Sabariego
 */

#include "GetDP.h" 
#include "Data_Active.h"
#include "CurrentData.h"
#include "Numeric.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG     struct Function * Fct, struct Value * A, struct Value * V

/* 
   Fct->Para[0] == dimension 
*/


/* ------------------------------------------------------------------------ */
/*  F _ B i o t S a v a r t                                                 */
/* ------------------------------------------------------------------------ */

void  F_BiotSavart (F_ARG) {

  double r, xxs, yys, zzs ;  

  GetDP_Begin("F_BiotSavart");

  V->Type = VECTOR ;

  switch((int)Fct->Para[0]){
  case _2D :
    xxs = Current.x-Current.xs ; 
    yys = Current.y-Current.ys ; 
    
    r = SQU(xxs)+SQU(yys) ;
    if(!r) Msg(ERROR, "1/0 in 'F_BiotSavart'") ;
     
    V->Val[0] = ONE_OVER_TWO_PI * xxs / r ;
    V->Val[1] = ONE_OVER_TWO_PI * yys / r ;
    V->Val[2] = 0. ;
    V->Val[MAX_DIM    ] = V->Val[MAX_DIM + 1] = V->Val[MAX_DIM + 2] = 0. ;
    break;

  case _3D :
    xxs = Current.x-Current.xs ;
    yys = Current.y-Current.ys ;
    zzs = Current.z-Current.zs ;

    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
    
    if(!r) Msg(ERROR, "1/0 in 'F_BiotSavart'") ;
    
    V->Val[0] = ONE_OVER_FOUR_PI * xxs/ CUB(r) ;
    V->Val[1] = ONE_OVER_FOUR_PI * yys/ CUB(r) ;
    V->Val[2] = ONE_OVER_FOUR_PI * zzs/ CUB(r) ;
    V->Val[MAX_DIM] =  V->Val[MAX_DIM + 1 ] = V->Val[MAX_DIM + 2 ] =0. ; 
    break;
  default:
    Msg(ERROR, "Bad dimension for BiotSavart");  
    break;
  }

  
  GetDP_End ;
}


void  F_Pocklington (F_ARG) {

  double r, xxs, yys, zzs ;
  double k , kr, cte, a, re, im ;

  GetDP_Begin("F_Pocklington");

  V->Type = SCALAR ;

  k = Fct->Para[0] ;
  a = Fct->Para[1] ;

  xxs = Current.x-Current.xs ;
  yys = Current.y-Current.ys ;
  zzs = Current.z-Current.zs ;

  r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)+ a*a ) ;
  
  if(!r) Msg(ERROR, "1/0 in 'F_Pocklington'") ;
    
  kr = k*r ;
  cte = ONE_OVER_FOUR_PI/(r*r*r*r*r);
  re = 2*SQU(r)-3*SQU(a) + SQU(kr*a);
  im = kr * (2*SQU(r)-3*SQU(a)) ;
 
  V->Val[0] = cte * (cos(kr)* re + sin(kr)*im) ;
  V->Val[MAX_DIM] = cte * (-sin(kr) * re + cos(kr)*im) ;
  
  GetDP_End ;

}
  
#undef F_ARG

