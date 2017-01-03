// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "ProData.h" 
#include "GF.h" 
#include "Message.h"

#define SQU(a)     ((a)*(a)) 
#define CUB(a)     ((a)*(a)*(a)) 
#define ONE_OVER_TWO_PI    1.5915494309189534E-01
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  G F _ L a p l a c e                                                     */
/* ------------------------------------------------------------------------ */

void GF_Laplace(GF_ARG)
{
  double d;

  switch((int)Fct->Para[0]){

  case _1D : /* r/2 */
    V->Val[0] = 0.5 * sqrt(SQU(Current.x - Current.xs)) ;  
    break;

  case _2D : /* 1/(2*Pi) * ln(1/r) = -1/(4*Pi)*ln(r^2) */
    d = SQU(Current.x - Current.xs) + SQU(Current.y - Current.ys) ;
    if(!d) Message::Error("Log(0) in 'GF_Laplace'") ;
    V->Val[0] = - ONE_OVER_FOUR_PI * log(d) ;
    V->Val[MAX_DIM] = 0. ; 
    break;

  case _3D : /* 1/(4*Pi*r) */
    d = SQU(Current.x - Current.xs) + SQU(Current.y - Current.ys) + 
      SQU(Current.z - Current.zs) ;
    if(!d) Message::Error("1/0 in 'GF_Laplace'") ;
    V->Val[0] = ONE_OVER_FOUR_PI / sqrt(d) ;
    V->Val[MAX_DIM] = 0. ; 
    break;
    
  default :
    Message::Error("Bad Parameter for 'GF_Laplace' (%d)", (int)Fct->Para[0]);
    break;
  }

  V->Type = SCALAR ;
  V->Val[MAX_DIM] = 0. ;  
}


/* ------------------------------------------------------------------------ */
/*  G F _ G r a d L a p l a c e                                             */
/* ------------------------------------------------------------------------ */

/* the gradient is taken relative to the destination point (x,y,z) */

void GF_GradLaplace(GF_ARG)
{
  double xxs, yys, zzs, r;

  V->Type = VECTOR ;

  switch((int)Fct->Para[0]){
  case _2D :
    xxs = Current.x-Current.xs ; 
    yys = Current.y-Current.ys ; 
    r = SQU(xxs) + SQU(yys) ;
    if(!r) Message::Error("1/0 in 'GF_GradLaplace'") ;
    V->Val[0] = - ONE_OVER_TWO_PI * xxs / r ;
    V->Val[1] = - ONE_OVER_TWO_PI * yys / r ;
    V->Val[2] = 0.0 ;
    V->Val[MAX_DIM    ] = V->Val[MAX_DIM + 1] = V->Val[MAX_DIM + 2] = 0. ;
    break ;    

  case _3D :
    xxs = Current.x-Current.xs ; 
    yys = Current.y-Current.ys ; 
    zzs = Current.z-Current.zs ;
    r = CUB(sqrt(SQU(xxs) + SQU(yys) + SQU(zzs))) ;
    if(!r) Message::Error("1/0 in 'GF_GradLaplace'") ;
    V->Val[0] = - ONE_OVER_FOUR_PI * xxs / r ;
    V->Val[1] = - ONE_OVER_FOUR_PI * yys / r ;
    V->Val[2] = - ONE_OVER_FOUR_PI * zzs / r ;
    V->Val[MAX_DIM    ] = V->Val[MAX_DIM + 1] = V->Val[MAX_DIM + 2] = 0. ;
    break ;
    
  default :
    Message::Error("Bad Parameter for 'GF_GradLaplace' (%d)", (int)Fct->Para[0]);
    break;
  }

  V->Type = VECTOR ;
  
  V->Val[MAX_DIM+0] = 0. ;  
  V->Val[MAX_DIM+1] = 0. ;  
  V->Val[MAX_DIM+2] = 0. ;  
}

/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d L a p l a c e                                       */
/* ------------------------------------------------------------------------ */

void GF_NPxGradLaplace(GF_ARG)
{
  double x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs, a, b, c, r ;

  V->Type = SCALAR ;
  V->Val[MAX_DIM] = 0. ;  

  if (Current.Element->Num == Current.ElementSource->Num) {
    V->Val[0      ] = 0. ;
    V->Val[MAX_DIM] = 0. ;
    return ;
  } 

  switch((int)Fct->Para[0]){      
  case _2D :
    x1x0 = Current.Element->x[1] - Current.Element->x[0] ; 
    y1y0 = Current.Element->y[1] - Current.Element->y[0] ;
    xxs  = Current.x-Current.xs ; 
    yys  = Current.y-Current.ys ;
    r = SQU(xxs)+SQU(yys) ;
    if(!r)   V->Val[0] = 0 ;
    else 
      V->Val[0] = - ONE_OVER_TWO_PI * (y1y0 * xxs - x1x0 * yys) 
	/ (sqrt(SQU(x1x0)+SQU(y1y0)) * r) ;
    
    V->Val[MAX_DIM] = 0. ;
    break;
    
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
      / ( (sqrt(SQU(a) + SQU(b) + SQU(c)) * 
	   CUB(sqrt(SQU(xxs) + SQU(yys) + SQU(zzs)))) ) ;
    V->Val[MAX_DIM] = 0. ;
    break ;

  default :
    Message::Error("Bad Parameter for 'GF_NPxGradLaplace' (%d)", (int)Fct->Para[0]);
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  G F _ N S x G r a d L a p l a c e                                       */
/* ------------------------------------------------------------------------ */

void GF_NSxGradLaplace(GF_ARG)
{
  double x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs, a, b, c;

  V->Type = SCALAR ;
  V->Val[MAX_DIM] = 0. ;  

  if (Current.Element->Num == Current.ElementSource->Num) {
    V->Val[0] = 0. ;
    V->Val[MAX_DIM] = 0. ;
    return ;
  }

  switch((int)Fct->Para[0]){      
  case _2D :
    x1x0 = Current.ElementSource->x[1] - Current.ElementSource->x[0] ; 
    y1y0 = Current.ElementSource->y[1] - Current.ElementSource->y[0] ;
    xxs  = Current.x-Current.xs ; 
    yys  = Current.y-Current.ys ;
    V->Val[0] = ONE_OVER_TWO_PI * (y1y0 * xxs - x1x0 * yys) 
      / (sqrt(SQU(x1x0)+SQU(y1y0)) * (SQU(xxs)+SQU(yys)) ) ;
    V->Val[MAX_DIM] = 0. ;
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
    V->Val[MAX_DIM] = 0. ;
    break ;      
  default :
    Message::Error("Bad Parameter for 'GF_NSxGradLaplace' (%d)", (int)Fct->Para[0]);
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  G F _ A p p r o x i m a t e L a p l a c e                               */
/* ------------------------------------------------------------------------ */

void GF_ApproximateLaplace(GF_ARG)
{
  Message::Error("The Approximate Integral Kernels can only be Integrated Analytically");
}
