#define RCSID "$Id: GF_Laplace.c,v 1.11 2003-03-18 00:55:27 geuzaine Exp $"
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
   Fct->Para[1] == wave number
*/


/* ------------------------------------------------------------------------ */
/*  G F _ L a p l a c e                                                     */
/* ------------------------------------------------------------------------ */

extern int Flag_RemoveSingularity ;

void  GF_Laplace (F_ARG) {

  double d, cte, r, phi_r, r_l, r_l_1, F, a, b, c1, c2  ;
  double xxs, yys, zzs, Theta, Phi, cTheta ;
  double Plm ; 

  int i, k, l, m, Nd ; 

  GetDP_Begin("GF_Laplace");


  switch((int)Fct->Para[0]){

  case _1D : /* r/2 */
    V->Val[0] = 0.5 * sqrt(SQU(Current.x-Current.xs)) ;  
    break;

  case _2D : /* 1/(2*Pi) * ln(1/r) = -1/(4*Pi)*ln(r^2) */
    switch(Current.FMM.Flag_GF){
    case DIRECT :
      d = SQU(Current.x-Current.xs) + SQU(Current.y-Current.ys) ;
      if(!d) Msg(ERROR, "Log(0) in 'GF_Laplace'") ;
      V->Val[0] = - ONE_OVER_FOUR_PI * log(d) ;
      V->Val[MAX_DIM] = 0. ; 
      break;

    case AGGREGATION :
      Nd = Current.FMM.NbrDir ;
      /* Normalization with regard to the maximum distance in the FMM group, (x-xc)/Rx */
      r = sqrt(SQU(Current.xs-Current.FMM.Xgc) + SQU(Current.ys-Current.FMM.Ygc))/Current.FMM.Rsrc ; 
      phi_r = atan2(Current.ys-Current.FMM.Ygc, Current.xs-Current.FMM.Xgc) ;    
      
      cte = - ONE_OVER_TWO_PI ;
      V[0].Type = SCALAR ;
      V[0].Val[0]       = cte ;
      V[0].Val[MAX_DIM] = 0. ;
      
      for (i = 1 ; i < Nd ; i++){
	cte *= r ; 
	V[i].Type = SCALAR ;
	V[i].Val[0]       = cte * cos(i*phi_r) ;
	V[i].Val[MAX_DIM] = cte * sin(i*phi_r) ;
      }
      break;

    case DISAGGREGATION :
     Nd = Current.FMM.NbrDir ;
     /* Normalization with regard to the maximum distance in the FMM group,   (yc-y)/Ry */
     r = sqrt(SQU(Current.FMM.Xgc-Current.x) + SQU(Current.FMM.Ygc-Current.y))/Current.FMM.Robs ;
     phi_r = atan2(Current.FMM.Ygc-Current.y, Current.FMM.Xgc-Current.x) ;
     cte = 1. ;
     V[0].Type = SCALAR ;
     V[0].Val[0]       = cte ;
     V[0].Val[MAX_DIM] = 0.  ;
     for (i = 1 ; i < Nd ;  i++){ 
       cte *= r ;
       V[i].Type = SCALAR ;
       V[i].Val[0]       = cte * cos(i*phi_r) ;
       V[i].Val[MAX_DIM] = cte * sin(i*phi_r) ;
     }
     break ;

    case TRANSLATION : /* 2D */
      Nd = Current.FMM.NbrDir ;/* (x, y, z) Destination, (xs, ys, zs) Origin */
      r = sqrt( SQU(Current.x-Current.xs) + SQU(Current.y-Current.ys)) ; /* (yc-xc) */  
      phi_r = atan2(Current.y-Current.ys, Current.x-Current.xs) ;

      if(!r) Msg(ERROR, "1/0 in 'GF_Laplace (Translation - 2D)'") ;
     
      a = 1. ;  c1 = 1. ;
      for (i = 0 ; i < Nd ;  i++){
	b = 1. ; c2 = 1. ;
	for (k = 0 ; k < Nd ; k++){
	  if ( i == 0  && k == 0){
	    V[0].Type = SCALAR ;
	    V[0].Val[0]       = log(r) ; /* log(yc-xc) */
	    V[0].Val[MAX_DIM] = phi_r  ;
	  }
	  else{
	    F = -BinomialCoef(i+k, k)/(i+k);
	    /* Normalization (Rx^i * Ry^k) */
	    cte  = F * a * b * c1 *c2 ;
	    V[i*Nd + k].Type = SCALAR ;
	    V[i*Nd + k].Val[0]       =   cte * cos((i+k)*phi_r) ;
	    V[i*Nd + k].Val[MAX_DIM] = - cte * sin((i+k)*phi_r) ;
	  }      
	  b *= Current.FMM.Rsrc;
	  c2 /= r;
	}
	a *= Current.FMM.Robs;
	c1 /= r ;
      }       
      break;
 
   default :
      Msg(ERROR, "Case 2D: Bad Flag_GF 'GF_Laplace' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break;

  case _3D : /* 1/(4*Pi*r) */
    switch(Current.FMM.Flag_GF){          
    case DIRECT :         
      if(0){/* Flag_RemoveSingularity */
	printf("  ->removed in %d %d \n", Current.Element->Num, Current.ElementSource->Num);
	V->Val[0] = ONE_OVER_FOUR_PI ;
      }
      else{
	d = SQU(Current.x-Current.xs) + SQU(Current.y-Current.ys) + SQU(Current.z-Current.zs) ;
	if(!d) Msg(ERROR, "1/0 in 'GF_Laplace'") ;
        V->Val[0] = ONE_OVER_FOUR_PI / sqrt(d) ;
      }
      V->Val[MAX_DIM] = 0. ; 
      break;
      /* Not normalization for 3D */
    case AGGREGATION : /* 3D */
      Nd = Current.FMM.NbrDir ;
      xxs = Current.xs - Current.FMM.Xgc ;
      yys = Current.ys - Current.FMM.Ygc ;
      zzs = Current.zs - Current.FMM.Zgc ;

      r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
      Theta = atan2(sqrt(SQU(xxs)+SQU(yys)), zzs) ; 
      Phi   = atan2(yys, xxs) ;
      cTheta = cos(Theta);

      r_l = 1.;
      for (l = 0 ; l < Nd ; l++){
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;	 	  
	  cte = r_l/Factorial(l+m) * Plm ;  
	  V[l*(l+1)+m].Type = SCALAR ;  	  
	  V[l*(l+1)+m].Val[0]       =  cte * cos(m*Phi) ;
	  V[l*(l+1)+m].Val[MAX_DIM] = -cte * sin(m*Phi) ;
	}
	r_l *= r ;
      }
      break;

    case DISAGGREGATION : /* 3D */
      Nd = Current.FMM.NbrDir ;
      xxs = (- Current.x + Current.FMM.Xgc) ;
      yys = (- Current.y + Current.FMM.Ygc) ;
      zzs = (- Current.z + Current.FMM.Zgc) ;     

      r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;  
      Theta = atan2(sqrt(SQU(xxs)+SQU(yys)), zzs) ;
      Phi   = atan2(yys, xxs) ;      
      cTheta = cos(Theta) ;

      r_l = 1. ;
      for (l = 0 ; l < Nd ; l++){
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;
	  cte = r_l/Factorial(l+m) * Plm ;

	  V[l*(l+1)+m].Type = SCALAR ;  	  
	  V[l*(l+1)+m].Val[0]       =  cte * cos(m*Phi) ;
	  V[l*(l+1)+m].Val[MAX_DIM] = -cte * sin(m*Phi) ;
	}
	r_l *= r ;
      }
      break;

    case TRANSLATION: /* 3D */
      Nd =  Current.FMM.NbrDir ;     
      xxs = Current.x - Current.xs ;
      yys = Current.y - Current.ys ;
      zzs = Current.z - Current.zs ;
      
      r =  sqrt(SQU(xxs) + SQU(yys) + SQU(zzs)); /* Distance between FMM group centers */ 
      if(!r) Msg(ERROR, "1/r in 'GF_Laplace (Translation - 3D)'") ;

      Theta = atan2(sqrt(SQU(xxs)+SQU(yys)), zzs) ; 
      Phi   = atan2(yys, xxs) ;      
      cTheta = cos(Theta) ;

      r_l_1 = ONE_OVER_FOUR_PI ;
      for (l = 0 ; l < 2*Nd ; l++){
	r_l_1 /= r ;
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;  	  
	  cte = Factorial((double)(l-m)) * r_l_1 * Plm ;
	  V[l*(l+1)+m].Type = SCALAR ; 
	  V[l*(l+1)+m].Val[0]       =  cte * cos(m*Phi) ;
	  V[l*(l+1)+m].Val[MAX_DIM] =  cte * sin(m*Phi) ;
	}
      }	
      break;

    default :
      Msg(ERROR, "Case 3D: Bad Flag_GF 'GF_Laplace' (%d)", Current.FMM.Flag_GF);  
      break;
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

  double xxs, yys, zzs, Theta, Phi, sTheta, cTheta, sPhi, cPhi, Plm, dPlm;
  double cte, r, phi_r, cphi_r, sphi_r, cr, r_l_2, a, b ;
  double r_l, r_l_1, r_2, rxy, rxy_2, srxy, c1, tx1, ty1, tx2, ty2 ;
  int i, Nd, k, l, m ;   


  GetDP_Begin("GF_GradLaplace");

  V->Type = VECTOR ;

  switch((int)Fct->Para[0]){
  case _2D :
    switch(Current.FMM.Flag_GF){
    case DIRECT :
      xxs = Current.x-Current.xs ; 
      yys = Current.y-Current.ys ; 
      r = SQU(xxs)+SQU(yys) ;
      if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace'") ;
     
      V->Val[0] = - ONE_OVER_TWO_PI * xxs / r ;
      V->Val[1] = - ONE_OVER_TWO_PI * yys / r ;
      V->Val[2] = 0.0 ;
      V->Val[MAX_DIM    ] = V->Val[MAX_DIM + 1] = V->Val[MAX_DIM + 2] = 0. ;
      break ;    


    case AGGREGATION : /* 2D -> SCALAR */
      Nd = Current.FMM.NbrDir ;
      r = sqrt(SQU(Current.FMM.Xgc-Current.xs) + SQU(Current.FMM.Ygc-Current.ys))/Current.FMM.Rsrc;  /* (x-xc)/Rx */
      phi_r = atan2( Current.FMM.Ygc-Current.ys, Current.FMM.Xgc-Current.xs) ;    
      cte =  - ONE_OVER_TWO_PI/r ; 
      for (i = 0 ; i < Nd ; i++){
	cte *= r; 
	V[i].Type = SCALAR ;
	V[i].Val[0]       = cte * cos(i*phi_r) ;
	V[i].Val[MAX_DIM] = cte * sin(i*phi_r) ;
      } 
      break;

    case DISAGGREGATION : /* 2D -> VECTOR */
     Nd = Current.FMM.NbrDir ;
     xxs = -Current.FMM.Xgc + Current.x;
     yys = -Current.FMM.Ygc + Current.y;
     r = sqrt(SQU(xxs) + SQU(yys))/Current.FMM.Robs;
     phi_r = atan2(yys, xxs) ;
     if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace (Disaggregation - 2D)'") ;
     cte = -1/r/r ; 
     for (i = 0 ; i < Nd ; i++){
	cte *= r ; 
	cphi_r = cos((i+1)*phi_r) ;
	sphi_r = sin((i+1)*phi_r) ;
	V[i].Type       = VECTOR ;
	V[i].Val[0]         = (xxs * cphi_r + yys * sphi_r) * cte;
	V[i].Val[1]         = (yys * cphi_r - xxs * sphi_r) * cte;
	V[i].Val[2]         = 0.;
	V[i].Val[MAX_DIM]   = -V[i].Val[1];	
	V[i].Val[MAX_DIM+1] =  V[i].Val[0];
	V[i].Val[MAX_DIM+2] = 0.;
      }
     break ;

    case TRANSLATION :/* 2D */
      Nd = Current.FMM.NbrDir ;  /* (x, y, z) Destination, (xs, ys, zs) Origin */ 
      r = sqrt(SQU(Current.xs-Current.x) + SQU(Current.ys-Current.y)) ;  
      phi_r = atan2(Current.ys-Current.y, Current.xs-Current.x) ;
      
      if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace (Translation - 2D)'") ;

      a = 1/Current.FMM.Rsrc ;
      for (i = 0 ; i < Nd ;  i++){
	a *= Current.FMM.Rsrc/r ;
	b = r/Current.FMM.Robs/Current.FMM.Robs ;	
	for (k = 0 ; k < Nd ; k++){
	  b *= Current.FMM.Robs/r ;
	  cte = BinomialCoef(i+k, k)* a * b  ;

	  V[i*Nd + k].Type = SCALAR ;
	  V[i*Nd + k].Val[0]       =   cte * cos((i+k+1)*phi_r) ;
	  V[i*Nd + k].Val[MAX_DIM] = - cte * sin((i+k+1)*phi_r) ;
 	}	
      }        

      break;

    default:
      Msg(ERROR, "Case 2D: Bad Flag_GF 'GF_GradLaplace' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break ;

  case _3D :
    switch(Current.FMM.Flag_GF){
    case DIRECT :
      xxs = Current.x-Current.xs ; 
      yys = Current.y-Current.ys ; 
      zzs = Current.z-Current.zs ;
      r = CUB(sqrt(SQU(xxs)+SQU(yys)+SQU(zzs))) ;
      
      if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace'") ;
     
      V->Val[0] = - ONE_OVER_FOUR_PI * xxs / r ;
      V->Val[1] = - ONE_OVER_FOUR_PI * yys / r ;
      V->Val[2] = - ONE_OVER_FOUR_PI * zzs / r ;
      V->Val[MAX_DIM    ] = V->Val[MAX_DIM + 1] = V->Val[MAX_DIM + 2] = 0. ;
      break ;

    case AGGREGATION : /* 3D */
      Nd = Current.FMM.NbrDir ;

      xxs = Current.xs - Current.FMM.Xgc ;
      yys = Current.ys - Current.FMM.Ygc ;
      zzs = Current.zs - Current.FMM.Zgc ;

      r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
      Theta = atan2( sqrt(SQU(xxs)+SQU(yys)), zzs ) ; 
      Phi   = atan2(yys, xxs) ;
      cTheta = cos(Theta);

      r_l = 1. ;
      for (l = 0 ; l < Nd ; l++){
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;
	  cte = r_l/Factorial(l+m) * Plm ;

	  V[l*(l+1)+m].Type = SCALAR ;  	  
	  V[l*(l+1)+m].Val[0]       =  cte * cos(m*Phi) ;
	  V[l*(l+1)+m].Val[MAX_DIM] = -cte * sin(m*Phi) ;
	}
	r_l *= r ; 
      }
      break;

    case DISAGGREGATION : /* 3D  -> VECTOR */
      Nd = Current.FMM.NbrDir ;
      xxs = -Current.x + Current.FMM.Xgc ;
      yys = -Current.y + Current.FMM.Ygc ;
      zzs = -Current.z + Current.FMM.Zgc ;     

      r_2   = SQU(xxs)+SQU(yys)+SQU(zzs) ;
      r = sqrt(r_2) ;
      if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace (Disaggregation - 3D)'") ;

      rxy_2 = SQU(xxs)+SQU(yys) ;
      rxy =  sqrt(rxy_2) ;

      Theta = atan2(rxy, zzs) ; 
      Phi   = atan2(yys, xxs) ;
      cTheta = cos(Theta) ;
      sTheta = sin(Theta) ;
      srxy =  sTheta * rxy ;

      c1 = sTheta *  zzs/rxy ;
      tx1 = xxs * c1 ;
      ty1 = yys * c1 ;
      tx2 = r_2 * xxs/rxy_2 ; 
      ty2 = r_2 * yys/rxy_2 ;

      r_l_2 = -1/r/r;

      for (l = 0 ; l < Nd ; l++){
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;	
	  dPlm = dLegendre(l, m, cTheta) ;

	  sPhi = sin(m*Phi) ;
	  cPhi = cos(m*Phi) ;
	  cr =   r_l_2/Factorial(l+m) ;

	  V[l*(l+1)+m].Type = VECTOR ;
	  V[l*(l+1)+m].Val[0]         =  cr *( Plm * m * ty2 * sPhi-
					      dPlm * tx1 * cPhi + l * xxs * Plm * cPhi) ;	
	  V[l*(l+1)+m].Val[MAX_DIM  ] = -cr *(-Plm * m * ty2 * cPhi-
					      dPlm * tx1 * sPhi + l * xxs * Plm * sPhi) ;
	  V[l*(l+1)+m].Val[1]         =  cr *(-Plm * m * tx2 * sPhi -
					      dPlm * ty1 * cPhi + l * yys * Plm * cPhi) ;	  
	  V[l*(l+1)+m].Val[MAX_DIM+1] = -cr *( Plm * m * tx2 * cPhi-
					      dPlm * ty1 * sPhi + l * yys * Plm * sPhi) ;
	  V[l*(l+1)+m].Val[2]         =  cr *(dPlm * srxy * cPhi + l * zzs * Plm * cPhi) ;	  
	  V[l*(l+1)+m].Val[MAX_DIM+2] = -cr *(dPlm * srxy * sPhi + l * zzs * Plm * sPhi) ;	
	}	
	r_l_2 *= r ;
      }    
      break;

    case TRANSLATION : /* 3D */
      Nd =  Current.FMM.NbrDir ;     

      xxs = Current.x - Current.xs ;
      yys = Current.y - Current.ys ;
      zzs = Current.z - Current.zs ;
      r =  sqrt(SQU(xxs) + SQU(yys) + SQU(zzs)) ; 
      if(!r) Msg(ERROR, "1/r in 'GF_GradLaplace (Translation - 3D)'") ;
      Theta = atan2( sqrt(SQU(xxs)+SQU(yys)), zzs ) ; 
      Phi   = atan2(yys, xxs) ;      
      cTheta = cos(Theta) ;
     
      r_l_1 = -ONE_OVER_FOUR_PI ;
      for (l = 0 ; l < 2*Nd ; l++){
	r_l_1 /= r ;
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;
	  cte =  Factorial(l-m) * r_l_1 * Plm ;
	  V[l*(l+1)+m].Type = SCALAR ; 
	  V[l*(l+1)+m].Val[0]       =  cte * cos(m*Phi) ;
	  V[l*(l+1)+m].Val[MAX_DIM] =  cte * sin(m*Phi) ;
	}
      }
      break;

    default:
      Msg(ERROR, "Case 3D: Bad Flag_GF 'GF_GradLaplace' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_GradLaplace' (%d)", (int)Fct->Para[0]);
    break;
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d L a p l a c e                                       */
/* ------------------------------------------------------------------------ */

void GF_NPxGradLaplace (F_ARG) {

  int i, Nd, k, l, m ; 
  double x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs, a, b, c, n ;
  double r, cte, cr, phi_r, sphi_r, cphi_r, r_l_2, r_l, r_l_1 ;
  double Theta, Phi, sTheta, cTheta, Plm, dPlm, sPhi, cPhi ;
  double r_2, rxy, rxy_2, srxy, c1, tx1, ty1, tx2, ty2 ;


  GetDP_Begin("GF_NPxGradLaplace") ; /* It computes the Scalar product Normal[] * GradLaplace */ 

  V->Type = SCALAR ;

  if ((Current.Element->Num == Current.ElementSource->Num) && !Flag_FMM) {
    V->Val[0      ] = 0. ;
    V->Val[MAX_DIM] = 0. ;
    GetDP_End ;
  } 

  switch((int)Fct->Para[0]){      
  case _2D :
    switch(Current.FMM.Flag_GF){
    case DIRECT : /* Normal on Element */
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

    case AGGREGATION :/* 2D -> SCALAR */
      Nd = Current.FMM.NbrDir ;
      r = sqrt(SQU(Current.FMM.Xgc-Current.xs) + SQU(Current.FMM.Ygc-Current.ys))/Current.FMM.Rsrc;  /* (x-xc)/Rx */
      phi_r = atan2( Current.FMM.Ygc-Current.ys, Current.FMM.Xgc-Current.xs) ;    
      cte = -ONE_OVER_TWO_PI ;
      
      V[0].Type = SCALAR ;
      V[0].Val[0]       = cte ;
      V[0].Val[MAX_DIM] = 0.  ;
      for (i = 1 ; i < Nd ; i++){
	cte *= r ; 
	V[i].Type = SCALAR ;
	V[i].Val[0]       = cte * cos(i*phi_r) ;
	V[i].Val[MAX_DIM] = cte * sin(i*phi_r) ;
      } 
      break;

    case DISAGGREGATION :/* 2D */
      Nd = Current.FMM.NbrDir ;
      x1x0 = Current.Element->x[1] - Current.Element->x[0] ;
      y1y0 = Current.Element->y[1] - Current.Element->y[0] ; 
      xxs = - Current.FMM.Xgc + Current.x ; 
      yys = - Current.FMM.Ygc + Current.y ; 
    
      r = sqrt(SQU(xxs) + SQU(yys))/Current.FMM.Robs ;
      phi_r = atan2(yys, xxs) ;  
      
      if(!r) Msg(ERROR, "1/0 in 'GF_NPxGradLaplace (Disaggregation - 2D)' Integration point == Group center") ;
  
      cte = -1/r/r/sqrt(SQU(x1x0)+SQU(y1y0)) ; 
      for (i = 0 ; i < Nd ; i++){
	cte *= r ; 
	cphi_r = cos((i+1)*phi_r) ;
	sphi_r = sin((i+1)*phi_r) ;

	V[i].Type         = SCALAR ;
	V[i].Val[0]       = ( y1y0 * (xxs * cphi_r + yys * sphi_r) - x1x0 * (yys * cphi_r - xxs * sphi_r)) * cte ;
	V[i].Val[MAX_DIM] = (-y1y0 * (yys * cphi_r - xxs * sphi_r) - x1x0 * (xxs * cphi_r + yys * sphi_r)) * cte ;
 
      }      
      break;
      
    case TRANSLATION : /* 2D */
      Nd = Current.FMM.NbrDir ;  /* (x, y, z) Destination, (xs, ys, zs) Origin */ 
      r = sqrt(SQU(Current.xs-Current.x) + SQU(Current.ys-Current.y)) ;  
      phi_r = atan2(Current.ys-Current.y, Current.xs-Current.x) ;
      
      if(!r) Msg(ERROR, "1/0 in 'GF_GradLaplace (Translation - 2D)'") ;
      
      a = 1/Current.FMM.Rsrc ;      
      for (i = 0 ; i < Nd ;  i++){
	a *= Current.FMM.Rsrc/r ;
	b = r/Current.FMM.Robs/Current.FMM.Robs ;
	
	for (k = 0 ; k < Nd ; k++){
	  b *= Current.FMM.Robs/r ;
	  cte = BinomialCoef(i+k, k)* a * b ;
	
	  V[i*Nd + k].Type = SCALAR ;
	  V[i*Nd + k].Val[0]       =   cte * cos((i+k+1)*phi_r) ;
	  V[i*Nd + k].Val[MAX_DIM] = - cte * sin((i+k+1)*phi_r) ;
 	}
      }    
      break;
      
    default :
      Msg(ERROR, "Case 2D: Bad Flag_GF 'GF_NPxGradLaplace' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break ;   
    
  case _3D :
    switch(Current.FMM.Flag_GF){
    case DIRECT : /* Normal on Element */
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
      V->Val[MAX_DIM] = 0. ;
      break ;
      
    case AGGREGATION : /* SCALAR Grad 3D -> VECTOR in Disaggregation */
      Nd = Current.FMM.NbrDir ;

      xxs = Current.xs - Current.FMM.Xgc ;
      yys = Current.ys - Current.FMM.Ygc ;
      zzs = Current.zs - Current.FMM.Zgc ;
      
      r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
      Theta = atan2(sqrt(SQU(xxs)+SQU(yys)), zzs) ; 
      Phi   = atan2(yys, xxs) ;
      cTheta = cos(Theta);

      r_l = 1.;
      for (l = 0 ; l < Nd ; l++){
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;	 	  
	  cte = r_l/Factorial(l+m) * Plm ;  
	  V[l*(l+1)+m].Type = SCALAR ;  	  
	  V[l*(l+1)+m].Val[0]       =  cte * cos(m*Phi) ;
	  V[l*(l+1)+m].Val[MAX_DIM] = -cte * sin(m*Phi) ;
	}
	r_l *= r ;
      }
      break ;

    case DISAGGREGATION : /* Grad 3D -> VECTOR */      
      x1x0 = Current.Element->x[1] - Current.Element->x[0] ;
      y1y0 = Current.Element->y[1] - Current.Element->y[0] ;
      z1z0 = Current.Element->z[1] - Current.Element->z[0] ;
      x2x0 = Current.Element->x[2] - Current.Element->x[0] ; 
      y2y0 = Current.Element->y[2] - Current.Element->y[0] ;
      z2z0 = Current.Element->z[2] - Current.Element->z[0] ;
      a = y1y0 * z2z0 - z1z0 * y2y0 ; /* Normal */
      b = z1z0 * x2x0 - x1x0 * z2z0 ;
      c = x1x0 * y2y0 - y1y0 * x2x0 ;

      n = sqrt(SQU(a)+SQU(b)+SQU(c)) ;  
      a /= n ;/* Normalized Normal on Element */
      b /= n ;
      c /= n ;

      Nd = Current.FMM.NbrDir ;

      xxs = -Current.x + Current.FMM.Xgc ;
      yys = -Current.y + Current.FMM.Ygc ;
      zzs = -Current.z + Current.FMM.Zgc ;    
     
      r_2   = SQU(xxs)+SQU(yys)+SQU(zzs) ;
      r = sqrt(r_2) ;
      if(!r) Msg(ERROR, "1/0 in 'GF_NPxGradLaplace (Disaggregation - 3D)' r %e ",r) ;

      rxy_2 = SQU(xxs)+SQU(yys) ;
      rxy =  sqrt(rxy_2) ;
      if(!rxy) Msg(ERROR, "1/0 in 'GF_NPxGradLaplace (Disaggregation - 3D)' rxy %e",rxy ) ;

      Theta = atan2(rxy, zzs) ; 
      Phi   = atan2(yys, xxs) ;
      cTheta = cos(Theta) ;
      sTheta = sin(Theta) ;
      srxy =  sTheta * rxy ;

      c1 = sTheta *  zzs/rxy ;
      tx1 = xxs * c1 ;
      ty1 = yys * c1 ;
      tx2 = r_2 * xxs/rxy_2 ; 
      ty2 = r_2 * yys/rxy_2 ;

      r_l_2 = -1/r/r;

      for (l = 0 ; l < Nd ; l++){
	for (m = -l ; m <= l ; m++){
	  Plm  = Legendre(l, m, cTheta) ;	
	  dPlm = dLegendre(l, m, cTheta) ;

	  sPhi = sin(m*Phi) ;
	  cPhi = cos(m*Phi) ;
	  cr =   r_l_2/Factorial(l+m) ;

	  V[l*(l+1)+m].Type = SCALAR ;

	  V[l*(l+1)+m].Val[0] = a * cr *( Plm * m * ty2 * sPhi - dPlm * tx1 * cPhi + l * xxs * Plm * cPhi) +
	                        b * cr *(-Plm * m * tx2 * sPhi - dPlm * ty1 * cPhi + l * yys * Plm * cPhi) +
	                        c * cr *(dPlm * srxy * cPhi + l * zzs * Plm * cPhi) ;

	  V[l*(l+1)+m].Val[MAX_DIM] = -a * cr *(-Plm * m * ty2 * cPhi - dPlm * tx1 * sPhi + l * xxs * Plm * sPhi)-
	                               b * cr *( Plm * m * tx2 * cPhi - dPlm * ty1 * sPhi + l * yys * Plm * sPhi)-
	                               c * cr *(dPlm * srxy * sPhi + l * zzs * Plm * sPhi) ;
	}	
	r_l_2 *= r ;
      }

      break ;

    case TRANSLATION :
      Nd =  Current.FMM.NbrDir ;     

      xxs = Current.x - Current.xs ;
      yys = Current.y - Current.ys ;
      zzs = Current.z - Current.zs ;

      r =  sqrt(SQU(xxs) + SQU(yys) + SQU(zzs)) ; 
      if(!r) Msg(ERROR, "1/0 in 'GF_NPxGradLaplace (Translation - 3D)'") ;
      
      Theta = atan2(sqrt(SQU(xxs)+SQU(yys)), zzs) ; 
      Phi   = atan2(yys, xxs) ;      
      cTheta = cos(Theta) ;

      r_l_1 = ONE_OVER_FOUR_PI ;
      for (l = 0 ; l < 2*Nd ; l++){
	r_l_1 /= r ;
	for (m = -l ; m <= l ; m++){
     	  Plm = Legendre(l, m, cTheta) ;
	  cte =  Factorial((double)(l-m)) * r_l_1 * Plm ;
	  V[l*(l+1)+m].Type = SCALAR ; 
	  V[l*(l+1)+m].Val[0]       =  cte * cos(m*Phi) ;
	  V[l*(l+1)+m].Val[MAX_DIM] =  cte * sin(m*Phi) ;
	}
      }
      break;

    default:
      Msg(ERROR, "Case 3D: Bad Flag_GF 'GF_NPxGradLaplace' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break;
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
    V->Val[MAX_DIM] = 0. ;
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

