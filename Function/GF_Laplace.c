#define RCSID "$Id: GF_Laplace.c,v 1.5 2000-10-30 01:29:47 geuzaine Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h" 
#include "Data_Active.h"
#include "CurrentData.h"
#include "Data_Numeric.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG     struct Function * Fct, struct Value * A, struct Value * V

/* ------------------------------------------------------------------------ */
/*  G F _ L a p l a c e                                                     */
/* ------------------------------------------------------------------------ */

extern int Flag_RemoveSingularity ;

void  GF_Laplace (F_ARG) {
  double d ;

  GetDP_Begin("GF_Laplace");

  if (Current.NbrHar != 1) Msg(ERROR, "Wrong Number of Harmonics in 'GF_Laplace'");

  switch((int)Fct->Para[0]){

  case _1D : /* r/2 */
    V->Val[0] = 0.5 * sqrt(SQU(Current.x-Current.xs)) ;  
    break;

  case _2D : /* 1/(2*Pi) * ln(1/r) */
    d = SQU(Current.x-Current.xs) + SQU(Current.y-Current.ys) ;
    if(!d) Msg(ERROR, "Log(0) in 'GF_Laplace'") ;
    V->Val[0] = - ONE_OVER_FOUR_PI * log(d) ;  
    break;

  case _3D : /* 1/(4*Pi*r) */
    if(0){/* Flag_RemoveSingularity */
      printf("  ->removed in %d %d \n", Current.Element->Num, Current.ElementSource->Num);
      V->Val[0] = ONE_OVER_FOUR_PI ;
    }
    else{
      d = SQU(Current.x-Current.xs) + SQU(Current.y-Current.ys) + SQU(Current.z-Current.zs) ;
      if(!d) Msg(ERROR, "1/0 in 'GF_Laplace'") ;
      V->Val[0] = ONE_OVER_FOUR_PI / sqrt(d) ;
    }
    break;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_Laplace' (%d)", (int)Fct->Para[0]);
    break;
  }

  V->Type = SCALAR ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  G F _ G r a d L a p l a c e                                             */
/* ------------------------------------------------------------------------ */

/* the gradient is taken relative to the destination point (x,y,z) */

void GF_GradLaplace (F_ARG) {

  double xxs, yys, zzs, r ;

  GetDP_Begin("GF_GradLaplace");

  switch((int)Fct->Para[0]){
  case _2D :
    xxs = Current.x-Current.xs ; 
    yys = Current.y-Current.ys ; 
    r = SQU(xxs)+SQU(yys) ;
    if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace'") ;
    V->Val[0] = - ONE_OVER_TWO_PI * xxs / r ;
    V->Val[1] = - ONE_OVER_TWO_PI * yys / r ;
    V->Val[2] = 0.0 ;
    break ;    
  case _3D :
    xxs = Current.x-Current.xs ; 
    yys = Current.y-Current.ys ; 
    zzs = Current.z-Current.zs ;
    r = CUB(sqrt(SQU(xxs)+SQU(yys)+SQU(zzs))) ;
    if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace'") ;
    V->Val[0] = - ONE_OVER_FOUR_PI * xxs / r ;
    V->Val[1] = - ONE_OVER_FOUR_PI * yys / r ;
    V->Val[2] = - ONE_OVER_FOUR_PI * zzs / r ;
    break ;      
  default :
    Msg(ERROR, "Bad Parameter for 'GF_GradLaplace' (%d)", (int)Fct->Para[0]);
    break;
  }

  V->Type = VECTOR ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d L a p l a c e                                       */
/* ------------------------------------------------------------------------ */

void GF_NPxGradLaplace (F_ARG) {

  double x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs, a, b, c ;

  GetDP_Begin("GF_NPxGradLaplace");

  V->Type = SCALAR ;

  if (Current.Element->Num == Current.ElementSource->Num) {
    V->Val[0] = 0. ;
    GetDP_End ;
  }

  switch((int)Fct->Para[0]){      
  case _2D :
    x1x0 = Current.Element->x[1] - Current.Element->x[0] ; 
    y1y0 = Current.Element->y[1] - Current.Element->y[0] ;
    xxs  = Current.x-Current.xs ; 
    yys  = Current.y-Current.ys ;
    V->Val[0] = - ONE_OVER_TWO_PI * (y1y0 * xxs - x1x0 * yys) 
      / (sqrt(SQU(x1x0)+SQU(y1y0)) * (SQU(xxs)+SQU(yys))) ;
    break ;    
  case _3D :
    x1x0 = Current.Element->x[1] - Current.Element->x[0] ;
    y1y0 = Current.Element->y[1] - Current.Element->y[0] ;
    z1z0 = Current.Element->z[1] - Current.Element->z[0] ;
    x2x0 = Current.Element->x[2] - Current.Element->x[0] ; 
    y2y0 = Current.Element->y[2] - Current.Element->y[0] ;
    z2z0 = Current.Element->z[2] - Current.Element->z[0] ;
    a = y1y0 * z2z0 - z1z0 * y2y0 ;
    b = z1z0 * x2x0 - x1x0 * z2z0 ;
    c = x1x0 * y2y0 - y1y0 * x2x0 ;
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;
    V->Val[0] = - ONE_OVER_FOUR_PI * (a * xxs + b * yys + c * zzs)
      / ( (sqrt(SQU(a)+SQU(b)+SQU(c)) * 
	   CUB(sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)))) ) ;
    break ;      
  default :
    Msg(ERROR, "Bad Parameter for 'GF_NPxGradLaplace' (%d)", (int)Fct->Para[0]);
    break;
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  G F _ N S x G r a d L a p l a c e                                       */
/* ------------------------------------------------------------------------ */

void GF_NSxGradLaplace (F_ARG) {

  double x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs, a, b, c ;

  GetDP_Begin("GF_NSxGradLaplace");

  V->Type = SCALAR ;

  if (Current.Element->Num == Current.ElementSource->Num) {
    V->Val[0] = 0. ;
    GetDP_End ;
  }

  switch((int)Fct->Para[0]){      
  case _2D :
    x1x0 = Current.ElementSource->x[1] - Current.ElementSource->x[0] ; 
    y1y0 = Current.ElementSource->y[1] - Current.ElementSource->y[0] ;
    xxs  = Current.x-Current.xs ; 
    yys  = Current.y-Current.ys ;
    V->Val[0] = ONE_OVER_TWO_PI * (y1y0 * xxs - x1x0 * yys) 
      / (sqrt(SQU(x1x0)+SQU(y1y0)) * (SQU(xxs)+SQU(yys)) ) ;
    break ;    
  case _3D :
    x1x0 = Current.ElementSource->x[1] - Current.ElementSource->x[0] ;
    y1y0 = Current.ElementSource->y[1] - Current.ElementSource->y[0] ;
    z1z0 = Current.ElementSource->z[1] - Current.ElementSource->z[0] ;
    x2x0 = Current.ElementSource->x[2] - Current.ElementSource->x[0] ; 
    y2y0 = Current.ElementSource->y[2] - Current.ElementSource->y[0] ;
    z2z0 = Current.ElementSource->z[2] - Current.ElementSource->z[0] ;
    a = y1y0 * z2z0 - z1z0 * y2y0 ;
    b = z1z0 * x2x0 - x1x0 * z2z0 ;
    c = x1x0 * y2y0 - y1y0 * x2x0 ;
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;
    V->Val[0] = ONE_OVER_FOUR_PI * (a * xxs + b * yys + c * zzs)
      / ( (sqrt(SQU(a)+SQU(b)+SQU(c)) * 
	   CUB(sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)))) ) ;
    break ;      
  default :
    Msg(ERROR, "Bad Parameter for 'GF_NSxGradLaplace' (%d)", (int)Fct->Para[0]);
    break;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G F _ A p p r o x i m a t e L a p l a c e                               */
/* ------------------------------------------------------------------------ */

void  GF_ApproximateLaplace (F_ARG) {
  
  GetDP_Begin("GF_ApproxilateLaplace");

  Msg(ERROR, "The Approximate Integral Kernels can only be Integrated Analytically");

  GetDP_End ;
}

#undef F_ARG
