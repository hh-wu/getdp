#define RCSID "$Id: F_BiotSavart.c,v 1.2 2003-03-18 00:55:26 geuzaine Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h" 
#include "Data_Active.h"
#include "CurrentData.h"
#include "Numeric.h"
#include "Data_FMM.h"
#include "Legendre.h"
#include "SphBessel.h"


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
    Msg(ERROR, "Bad dimension for Biot Savart");  
    break;
  }

  
  GetDP_End ;
}

#undef F_ARG

