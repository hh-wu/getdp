#define RCSID "$Id: GF_Helmholtz.c,v 1.5 2001-03-05 08:50:42 sabarieg Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h" 
#include "Data_Active.h"
#include "Cal_Value.h"
#include "CurrentData.h"
#include "Data_Numeric.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG     struct Function * Fct, struct Value * A, struct Value * V

/* 
   Fct->Para[0] == dimension 
   Fct->Para[1] == wave number
*/

/* ------------------------------------------------------------------------ */
/*  G F _ H e l m h o l t z                                                 */
/* ------------------------------------------------------------------------ */

void GF_Helmholtz (F_ARG) {
  double  r ;

  GetDP_Begin("GF_Helmholtz");

  if(Current.NbrHar != 2){
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_GradHelmholtz'");
  }

  V->Type = SCALAR ;

  switch((int)Fct->Para[0]){      
  case _2D :
    r = sqrt(SQU(Current.x-Current.xs)+
	     SQU(Current.y-Current.ys)) ;
    if(!r) Msg(ERROR, "1/0 in 'GF_Helmholtz'") ;
    V->Val[0]       = - y0(Fct->Para[1]*r)/4 ; 
    V->Val[MAX_DIM] = - j0(Fct->Para[1]*r)/4 ;
    break ;
  case _3D :
    r = sqrt(SQU(Current.x-Current.xs)+
	     SQU(Current.y-Current.ys)+
	     SQU(Current.z-Current.zs)) ;
    if(!r) Msg(ERROR, "1/0 in 'GF_Helmholtz'") ;
    V->Val[0]       =  ONE_OVER_FOUR_PI * cos(Fct->Para[1]*r) / r ; 
    V->Val[MAX_DIM] = -ONE_OVER_FOUR_PI * sin(Fct->Para[1]*r) / r ;
    break ;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_Helmoltz' (%d)", (int)Fct->Para[0]);
    break;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  G F _ G r a d H e l m h o l t z                                         */
/* ------------------------------------------------------------------------ */

/* the gradient is taken relative to the destination point (x,y,z) */

void GF_GradHelmholtz (F_ARG) {
  double  xxs, yys, zzs, r ;
  double  c1, c2, cr, ci ;

  GetDP_Begin("GF_GradHelmholtz");

  if(Current.NbrHar != 2){
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_GradHelmholtz'");
  }

  V->Type = VECTOR ;

  switch((int)Fct->Para[0]){      
  case _3D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;
        
    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
    
    if(!r) Cal_ZeroValue(V);
    else {
	  c1 = - ONE_OVER_FOUR_PI / CUB(r) ;
	  c2 =  ONE_OVER_FOUR_PI * Fct->Para[1] / SQU(r) ;
	  cr = (c1 * cos(Fct->Para[1]*r) - c2 * sin(Fct->Para[1]*r)) ;
	  ci = (c1 * sin(Fct->Para[1]*r) + c2 * cos(Fct->Para[1]*r)) ;
	  V->Val[0] = xxs * cr ; V->Val[MAX_DIM  ] = xxs * ci ;
	  V->Val[1] = yys * cr ; V->Val[MAX_DIM+1] = yys * ci ;
	  V->Val[2] = zzs * cr ; V->Val[MAX_DIM+2] = zzs * ci ;

    }
    break ;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_GradHelmoltz' (%d)", (int)Fct->Para[0]);
    break;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d H e l m h o l t z                                   */
/* ------------------------------------------------------------------------ */

void GF_NPxGradHelmholtz (F_ARG) {
  
  double  x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs ;
  double  nx, ny, nz, n, r ;
  double  cr, ci, ccr, cci ;

  GetDP_Begin("GF_NPxHelmholtz");

  if(Current.NbrHar != 2){
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_NPxGradHelmholtz'");
  }

  V->Type = VECTOR ;

  if (Current.Element->Num == Current.ElementSource->Num) {
    Cal_ZeroValue(V);
    return ;
  }

  switch((int)Fct->Para[0]){      
  case _3D :
    x1x0 = Current.Element->x[1] - Current.Element->x[0] ;
    y1y0 = Current.Element->y[1] - Current.Element->y[0] ;
    z1z0 = Current.Element->z[1] - Current.Element->z[0] ;
    x2x0 = Current.Element->x[2] - Current.Element->x[0] ; 
    y2y0 = Current.Element->y[2] - Current.Element->y[0] ;
    z2z0 = Current.Element->z[2] - Current.Element->z[0] ;
    nx = y1y0 * z2z0 - z1z0 * y2y0 ;
    ny = z1z0 * x2x0 - x1x0 * z2z0 ;
    nz = x1x0 * y2y0 - y1y0 * x2x0 ;
    n = sqrt(SQU(nx)+SQU(ny)+SQU(nz)) ;
    nx = nx/n ;
    ny = ny/n ;
    nz = nz/n ;

    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;

    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;

    cr = -ONE_OVER_FOUR_PI / CUB(r) ;
    ci =  ONE_OVER_FOUR_PI * Fct->Para[1] / SQU(r) ;

    ccr = (cr * cos(Fct->Para[1]*r) - ci * sin(Fct->Para[1]*r)) ;
    cci = (cr * sin(Fct->Para[1]*r) + ci * cos(Fct->Para[1]*r)) ;

    V->Val[0] = (ny * zzs - nz *yys) * ccr ;
    V->Val[1] = (nz * xxs - nx *zzs) * ccr ;
    V->Val[2] = (nx * yys - ny *xxs) * ccr ;
    
    printf("NxGradHelmholtz \n");
    printf(" V->Val[0] = %g \n", V->Val[0]);
    printf(" V->Val[1] = %g \n", V->Val[1]);
    printf(" V->Val[0] = %g \n", V->Val[0]);
    
    V->Val[MAX_DIM  ] = (ny * zzs - nz *yys) * cci ;
    V->Val[MAX_DIM+1] = (nz * xxs - nx *zzs) * cci ;
    V->Val[MAX_DIM+2] = (nx * yys - ny *xxs) * cci ;
    break ;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_NPxGradHelmoltz' (%d)", (int)Fct->Para[0]);
    break;
  }
  
  GetDP_End ;
}



