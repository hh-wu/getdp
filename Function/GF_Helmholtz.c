#define RCSID "$Id: GF_Helmholtz.c,v 1.6 2001-08-09 13:47:38 sabarieg Exp $"
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
 
  double  r, phi_r, phi ;
  int p, ns, i_FMMDir ;
  
  GetDP_Begin("GF_Helmholtz");

  if(Current.NbrHar != 2){
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_GradHelmholtz'");
  }
  
  V->Type = SCALAR ;
  
  if (Flag_FMM && Current.CurrentFMM.GFx.Fct == NULL)
    Current.CurrentFMM.GFx = *Fct; 

  if (!Current.CurrentFMM.Flag_GF){
    
    switch((int)Fct->Para[0]){      
    case _2D :
      r = sqrt(SQU(Current.x-Current.xs)+
	       SQU(Current.y-Current.ys)) ;
      if(!r) Msg(ERROR, "1/0 in 'GF_Helmholtz'") ;
      V->Val[0]       = -y0(Fct->Para[1]*r)/4 ; 
      V->Val[MAX_DIM] = -j0(Fct->Para[1]*r)/4 ;
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
      Msg(ERROR, "Bad Parameter for 'GF_Helmholtz' (%d)", (int)Fct->Para[0]);
      break;
    }
  }    
  else {
    switch((int)Fct->Para[0]){      
    case _2D :
      ns =  Current.CurrentFMM.FactorDir ;
      
      switch(Current.CurrentFMM.Flag_GF){
      case 1 : //Aggregation
	r = sqrt( SQU(Current.xs-Current.CurrentFMM.Xgc)+ SQU(Current.ys-Current.CurrentFMM.Ygc)) ;
	phi_r = atan2(Current.ys- Current.CurrentFMM.Ygc, Current.xs-Current.CurrentFMM.Xgc) ;
	
	if (r==0)
	  for (i_FMMDir = 0 ; i_FMMDir < 2*ns+1 ;  i_FMMDir++){ 
	    V[i_FMMDir].Type = SCALAR ;
	    V[i_FMMDir].Val[0] = 1. ;
	    V[i_FMMDir].Val[MAX_DIM] = 0. ;
	  }
	else
	  for (i_FMMDir = 0 ; i_FMMDir < 2*ns+1 ;  i_FMMDir++){ 
	    V[i_FMMDir].Type = SCALAR ;
	    V[i_FMMDir].Val[0] = 0. ;
	    V[i_FMMDir].Val[MAX_DIM] = 0. ;
	    
	    phi = Current.CurrentFMM.Phi[i_FMMDir] ;
	      
	    for ( p = 0; p < 2*ns+1  ; p++ ){
	      V[i_FMMDir].Val[0] += (p<=ns) ? jn(p,Fct->Para[1]*r)*cos(p*(phi_r+phi)) : jn(ns-p, Fct->Para[1]*r)*cos((ns-p)*(phi_r+phi)) ; 
  	      V[i_FMMDir].Val[MAX_DIM] += (p<=ns) ? -jn(p,Fct->Para[1]*r)*sin(p*(phi_r+phi)): -jn(ns-p, Fct->Para[1]*r)*sin((ns-p)*(phi_r+phi)) ; 
	    }
	  }
	
	
	/*  phi =  Current.CurrentFMM.Phi[Current.CurrentFMM.NumDir]; */
	
	/*  	V->Val[0] =  V->Val[MAX_DIM] = 0.; */
	
	/*          for ( p = 0; p < 2*ns +1  ; p++ ){ */
	/*  	  V->Val[0] += (p<=ns) ? jn(p,Fct->Para[1]*r)*cos(p*(phi_r+phi)) : jn(ns-p, Fct->Para[1]*r)*cos((ns-p)*(phi_r+phi)) ; */
	/*  	  V->Val[MAX_DIM] += (p<=ns) ? -jn(p,Fct->Para[1]*r)*sin(p*(phi_r+phi)): -jn(ns-p, Fct->Para[1]*r)*sin((ns-p)*(phi_r+phi)) ; */
	/*  	}	 */	
	break;

      case 2 : //Disaggregation
	r = sqrt( SQU(Current.x - Current.CurrentFMM.Xgc)+ SQU(Current.y - Current.CurrentFMM.Ygc)) ;
	phi_r = atan2((Current.y - Current.CurrentFMM.Ygc), (Current.x - Current.CurrentFMM.Xgc)) ;

	for (i_FMMDir = 0 ; i_FMMDir < 2*ns+1 ;  i_FMMDir++){ 
	  V[i_FMMDir].Type = SCALAR ;
	  phi = Current.CurrentFMM.Phi[i_FMMDir];
	  V[i_FMMDir].Val[0]       = cos(Fct->Para[1]*r*sin(phi+phi_r)) ;
	  V[i_FMMDir].Val[MAX_DIM] = sin(Fct->Para[1]*r*sin(phi+phi_r)) ;
	}
	break;

      default :
	Msg(ERROR, "Bad Flag_GF 'GF_HelmholtzFMMAg_Disag' (%d)", Current.CurrentFMM.Flag_GF);  
	break;
      }
      
      break;
    default :
      Msg(ERROR, "Bad Parameter for 'GF_HelmholtzFMMAg_Disag' (%d)", (int)Fct->Para[0]);  
      break;
    }
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
  case _2D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    r = sqrt(SQU(xxs)+SQU(yys)) ;
    if (!r) Cal_ZeroValue(V);
    else {
      c1 = Fct->Para[1]/4/r ;
      cr = c1 * y1(Fct->Para[1]*r);
      ci = c1 * j1(Fct->Para[1]*r);
      V->Val[0] = xxs * cr ; V->Val[MAX_DIM  ] = xxs * ci ;
      V->Val[1] = yys * cr ; V->Val[MAX_DIM+1] = yys * ci ;
    }
    break ;
  
  case _3D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;
        
    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
    
    if (!r) Cal_ZeroValue(V);
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
    Msg(ERROR, "Bad Parameter for 'GF_GradHelmholtz' (%d)", (int)Fct->Para[0]);
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
        
    V->Val[MAX_DIM  ] = (ny * zzs - nz *yys) * cci ;
    V->Val[MAX_DIM+1] = (nz * xxs - nx *zzs) * cci ;
    V->Val[MAX_DIM+2] = (nx * yys - ny *xxs) * cci ;
    break ;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_NPxGradHelmholtz' (%d)", (int)Fct->Para[0]);
    break;
  }
  
  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  G F _ N S x G r a d  H e l m h o l t z                                  */
/* ------------------------------------------------------------------------ */

void GF_NSxGradHelmholtz (F_ARG) {
  double  x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs, r ;
  double  nx, ny, nz, n, c1, c2, cr, ci ;
  
  GetDP_Begin("GF_NSxGradHelmholtz");
  
  if(Current.NbrHar != 2){
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_NSxGradHelmholtz'");
  }

  V->Type = SCALAR ;

  switch((int)Fct->Para[0]){      
  case _2D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    r = sqrt(SQU(xxs)+SQU(yys)) ;
    
    if(Current.Element->Num == NO_ELEMENT)
      Current.Element = Current.ElementSource ;
 
    ny = - Current.Element->x[1] + Current.Element->x[0] ;
    nx = Current.Element->y[1] - Current.Element->y[0] ; 
    n = sqrt(SQU(nx)+SQU(ny)) ;      
    nx = nx / n ;
    ny = ny / n ;

    if (!r) Cal_ZeroValue(V);
    else {
      c1 = Fct->Para[1]/4/r ;
      cr = c1 * y1(Fct->Para[1]*r);
      ci = c1 * j1(Fct->Para[1]*r);

      V->Val[0] = nx * xxs * cr +  ny * yys * cr ;
      V->Val[MAX_DIM  ] = nx * xxs * ci + ny * yys * ci ;
    }
    break ;
  
  case _3D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;
        
    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
    
    if (!r) Cal_ZeroValue(V);
    else {
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

      c1 = - ONE_OVER_FOUR_PI / CUB(r) ;
      c2 =  ONE_OVER_FOUR_PI * Fct->Para[1] / SQU(r) ;
      cr = (c1 * cos(Fct->Para[1]*r) - c2 * sin(Fct->Para[1]*r)) ;
      ci = (c1 * sin(Fct->Para[1]*r) + c2 * cos(Fct->Para[1]*r)) ;
      V->Val[0] =nx * xxs * cr + ny * yys * cr + nz *  zzs * cr  ;
      V->Val[MAX_DIM  ] = nx* xxs * ci + ny *  yys * ci + nz * zzs * ci;
    }
    break ;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_NSxGradHelmholtz' (%d)", (int)Fct->Para[0]);
    break;
  }
  
  GetDP_End ;
}






