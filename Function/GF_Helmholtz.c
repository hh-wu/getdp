#define RCSID "$Id: GF_Helmholtz.c,v 1.13 2004-01-19 16:51:15 geuzaine Exp $"
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
#include "Cal_Value.h"
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
/*  G F _ H e l m h o l t z                                                 */
/* ------------------------------------------------------------------------ */

void GF_Helmholtz (F_ARG) {
 
  double  r, phi_r, phi, c, s, kr, k0r, bjn, byn, cr ;
  double xxs, yys, zzs, sbjn, sbyn, Pl ;
  double P[NBR_MAX_EXP], jsph[NBR_MAX_EXP], ysph[NBR_MAX_EXP] ;
  int ns, Nd, i_FMM, j_FMM ;

  GetDP_Begin("GF_Helmholtz");

  if(Current.NbrHar != 2)
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_Helmholtz'");
  

  V->Type = SCALAR ;
  
  switch((int)Fct->Para[0]){      
  case _2D :
    switch(Current.FMM.Flag_GF){            
    case 0 :
      r = sqrt(SQU(Current.x-Current.xs)+
	       SQU(Current.y-Current.ys)) ;
      if(!r) Msg(ERROR, "1/0 in 'GF_Helmholtz'") ;
      kr = Fct->Para[1]*r;

      V->Val[0]       = -y0(kr)/4 ; 
      V->Val[MAX_DIM] = -j0(kr)/4 ;
      break ;
      
    case 1 : /* Aggregation */
      Nd = Current.FMM.NbrDir ;
    
      r = sqrt( SQU(Current.xs-Current.FMM.Xgc)+ SQU(Current.ys-Current.FMM.Ygc)) ;
      phi_r = atan2(Current.ys- Current.FMM.Ygc, Current.xs-Current.FMM.Xgc) ;     
      kr = Fct->Para[1]*r;
      
      if (r==0) 
	for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	  V[i_FMM].Type = SCALAR ;
	  V[i_FMM].Val[0] = 1. ;
	  V[i_FMM].Val[MAX_DIM] = 0. ;
	}
      else
	for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	  phi = Current.FMM.Phi[i_FMM] ;
	  V[i_FMM].Type = SCALAR ;
	  V[i_FMM].Val[0]       =  cos(kr*sin(phi+phi_r)) ;
	  V[i_FMM].Val[MAX_DIM] = -sin(kr*sin(phi+phi_r)) ;	  
	}
      break;

    case 2 : /* Disaggregation */
      Nd =  Current.FMM.NbrDir ;

      r = sqrt( SQU(Current.x - Current.FMM.Xgc)+ SQU(Current.y - Current.FMM.Ygc)) ;
      phi_r = atan2(Current.y - Current.FMM.Ygc, Current.x - Current.FMM.Xgc) ;
      kr = Fct->Para[1]*r;

      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	V[i_FMM].Type = SCALAR ;
	phi = Current.FMM.Phi[i_FMM];
	V[i_FMM].Val[0]       = cos(kr*sin(phi+phi_r)) ;
	V[i_FMM].Val[MAX_DIM] = sin(kr*sin(phi+phi_r)) ;
      }
      break;

    case 3 : /* Translation */
      Nd =  Current.FMM.NbrDir ;
      ns = (Nd-1)/2 ;
      cr = 1./4./Nd ; 

      kr = Fct->Para[1] * sqrt( SQU(Current.x - Current.xs)+ SQU(Current.y - Current.ys)) ;
      phi_r = atan2(Current.ys - Current.y, Current.xs - Current.x) ;
      
      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	V[i_FMM].Type = SCALAR ;
	phi = Current.FMM.Phi[i_FMM];
	V[i_FMM].Val[0]       = - cr*yn(0,kr);
	V[i_FMM].Val[MAX_DIM] = - cr*jn(0,kr);

	for (j_FMM = 1 ; j_FMM <= ns ;  j_FMM++){ 
	  c = cos(j_FMM*(phi+phi_r-PI));
	  s = sin(j_FMM*(phi+phi_r-PI));
	  bjn = jn(j_FMM,kr);
	  byn = yn(j_FMM,kr);
	  V[i_FMM].Val[0]       += -2.*cr* (j_FMM%2 ?  bjn*s : byn*c) ;
	  V[i_FMM].Val[MAX_DIM] += -2.*cr* (j_FMM%2 ? -byn*s : bjn*c) ; 
	}
      }
      break;      

    default :
      Msg(ERROR, "Case 2D: Bad Flag_GF 'GF_Helmholtz' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break;

  case _3D :
    switch(Current.FMM.Flag_GF){          
    case 0 :
      r = sqrt(SQU(Current.x-Current.xs)+
	       SQU(Current.y-Current.ys)+
	       SQU(Current.z-Current.zs)) ;
      if(!r) Msg(ERROR, "1/0 in 'GF_Helmholtz'") ;
      kr = Fct->Para[1]*r;     
      V->Val[0]       =  ONE_OVER_FOUR_PI * cos(kr) / r ; 
      V->Val[MAX_DIM] = -ONE_OVER_FOUR_PI * sin(kr) / r ;
      break ;

    case 1 : /* Aggregation */
      Nd = Current.FMM.NbrDir ;
      xxs = Current.xs-Current.FMM.Xgc ;
      yys = Current.ys-Current.FMM.Ygc ;
      zzs = Current.zs-Current.FMM.Zgc ;

      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	kr = Fct->Para[1] * (xxs*Current.FMM.Kdir[i_FMM][0] +
			     yys*Current.FMM.Kdir[i_FMM][1] +
			     zzs*Current.FMM.Kdir[i_FMM][2] ) ;	
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0]       =  cos(kr) ;
	V[i_FMM].Val[MAX_DIM] = -sin(kr) ;	  
      }
      break;

    case 2 : /* Disaggregation */
      Nd = Current.FMM.NbrDir ;
      xxs = Current.x-Current.FMM.Xgc ;
      yys = Current.y-Current.FMM.Ygc ;
      zzs = Current.z-Current.FMM.Zgc ;

      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	kr = Fct->Para[1] * (xxs*Current.FMM.Kdir[i_FMM][0] +
			     yys*Current.FMM.Kdir[i_FMM][1] +
			     zzs*Current.FMM.Kdir[i_FMM][2] ) ;	
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0]       = cos(kr) ;
	V[i_FMM].Val[MAX_DIM] = sin(kr) ;	  
      }       
      break;

    case 3: /* Translation */
      Nd =  Current.FMM.NbrDir ;
      ns =  (int)sqrt((double)Nd/2) ;
      cr = - Fct->Para[1] * ONE_OVER_FOUR_PI * ns/2/Nd ; 

      xxs = Current.x - Current.xs ;
      yys = Current.y - Current.ys ;
      zzs = Current.z - Current.zs ;
      r =  sqrt( SQU(xxs) + SQU(yys) + SQU(zzs) ) ; 
      k0r = Fct->Para[1] * r ;     

      Spherical_j_nArray(0, k0r, ns+1, jsph) ;
      Spherical_y_nArray(0, k0r, ns+1, ysph) ;
      
      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0] = V[i_FMM].Val[MAX_DIM] = 0. ;
	kr = (xxs*Current.FMM.Kdir[i_FMM][0] + 
	      yys*Current.FMM.Kdir[i_FMM][1] +
	      zzs*Current.FMM.Kdir[i_FMM][2])/r ; 

	LegendreRecursive( ns, 0, kr, P);
    	
	for (j_FMM = 0 ; j_FMM <= ns ; j_FMM++){ 
	  s = ((j_FMM/2)%2)? -1 : 1 ;	 
	  sbjn = jsph[j_FMM] ;
	  sbyn = ysph[j_FMM] ;
	  Pl = (2*j_FMM+1)* P[j_FMM] ;

	  V[i_FMM].Val[0]       += s * Pl * ((j_FMM%2) ?   sbjn : sbyn ) ;
	  V[i_FMM].Val[MAX_DIM] += s * Pl * ((j_FMM%2) ? (-sbyn): sbjn ) ;
	}

	V[i_FMM].Val[0]       *= cr*Current.FMM.Weight[i_FMM];
	V[i_FMM].Val[MAX_DIM] *= cr*Current.FMM.Weight[i_FMM];
      }

      break;      
    default :
      Msg(ERROR, "Case 3D: Bad Flag_GF 'GF_Helmholtz' (%d)", Current.FMM.Flag_GF);  
      break;

    }
    break;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_Helmholtz' (%d)", (int)Fct->Para[0]);
    break;
  }
     
  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  G F _ G r a d H e l m h o l t z                                         */
/* ------------------------------------------------------------------------ */

/* the gradient is taken relative to the destination point (x,y,z) */

void GF_GradHelmholtz (F_ARG) {

  double  xxs, yys, zzs, r, phi_r, phi ;
  double  c1, c2, cr, ci, c, s ;
  double k0r, kr, bjn, byn, sbjn, sbyn, Pl;
  double P[NBR_MAX_EXP], jsph[NBR_MAX_EXP], ysph[NBR_MAX_EXP];
  int  ns, Nd, i_FMM, j_FMM ;


  GetDP_Begin("GF_GradHelmholtz");
  
  if(Current.NbrHar != 2)
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_GradHelmholtz'");
  
  V->Type = VECTOR ;

  switch((int)Fct->Para[0]){
  case _2D :    
    switch(Current.FMM.Flag_GF){
    case 0:
      xxs  = Current.x-Current.xs ;
      yys  = Current.y-Current.ys ;
      r = sqrt(SQU(xxs)+SQU(yys)) ;
      k0r = Fct->Para[1]*r;

      if (!r) Cal_ZeroValue(V);
      else {
	c1 = Fct->Para[1]/4/r ;
	cr = c1 * y1(k0r);
	ci = c1 * j1(k0r);
	V->Val[0] = xxs * cr ; V->Val[MAX_DIM  ] = xxs * ci ;
	V->Val[1] = yys * cr ; V->Val[MAX_DIM+1] = yys * ci ;
      }
      break ;
      
    case 1 : /* FMM mode Aggregation: The Grad is considered here->VECTOR */      
      Nd = Current.FMM.NbrDir ;
  
      xxs = Current.xs - Current.FMM.Xgc ;
      yys = Current.ys - Current.FMM.Ygc ;	
      r = sqrt(SQU(xxs)+SQU(yys)) ;
      phi_r = atan2(yys, xxs) ;
      k0r = Fct->Para[1]*r ;
      
      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	phi = Current.FMM.Phi[i_FMM];
	cr = - Fct->Para[1] * sin(k0r*sin(phi+phi_r)) ;
	ci = - Fct->Para[1] * cos(k0r*sin(phi+phi_r)) ;

	V[i_FMM].Type = VECTOR ;
	V[i_FMM].Val[0]         = cr*sin(phi) ;
	V[i_FMM].Val[1]         = cr*cos(phi) ;
	V[i_FMM].Val[MAX_DIM]   = ci*sin(phi) ;
	V[i_FMM].Val[MAX_DIM+1] = ci*cos(phi) ;
      }
      break;
      
    case 2 : /* FMM mode Disaggregation. Grad in Aggreg -> Disagg == SCALAR */
      Nd =  Current.FMM.NbrDir ;
      
      r = sqrt( SQU(Current.x - Current.FMM.Xgc)+ SQU(Current.y - Current.FMM.Ygc)) ;
      phi_r = atan2(Current.y - Current.FMM.Ygc, Current.x - Current.FMM.Xgc) ;
      k0r = Fct->Para[1]*r;

      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	phi = Current.FMM.Phi[i_FMM];
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0]       = cos(k0r*sin(phi+phi_r)) ;
	V[i_FMM].Val[MAX_DIM] = sin(k0r*sin(phi+phi_r)) ;
      }
      break;
      
    case 3 : /* Translation */
      Nd = Current.FMM.NbrDir ;
      ns = (Nd-1)/2 ;      
      cr = 1./4./Nd ;

      k0r = Fct->Para[1] * sqrt( SQU(Current.x - Current.xs)+ SQU(Current.y - Current.ys)) ;
      phi_r = atan2(Current.ys - Current.y, Current.xs - Current.x) ;
      
      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	phi = Current.FMM.Phi[i_FMM];
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0]       = -cr*yn(0,k0r);
	V[i_FMM].Val[MAX_DIM] = -cr*jn(0,k0r);

	for (j_FMM = 1 ; j_FMM <= ns ;  j_FMM++){ 
	  c = cos(j_FMM*(phi+phi_r-PI));
	  s = sin(j_FMM*(phi+phi_r-PI));
	  bjn = jn(j_FMM,k0r);
	  byn = yn(j_FMM,k0r);
	  V[i_FMM].Val[0]       += -2.*cr* (j_FMM%2 ?  bjn*s : byn*c) ;
	  V[i_FMM].Val[MAX_DIM] += -2.*cr* (j_FMM%2 ? -byn*s : bjn*c) ; 
	}
      }
      break;
      
    default :
      Msg(ERROR, "Case 2D: Bad Flag_GF 'GF_GradHelmholtz' (%d)", Current.FMM.Flag_GF);  
      break;
    }         
    break; 
   
  case _3D :    
    switch(Current.FMM.Flag_GF){   
    case 0 :
      xxs  = Current.x-Current.xs ;
      yys  = Current.y-Current.ys ;
      zzs  = Current.z-Current.zs ;      
      r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
      kr = Fct->Para[1] * r ;
      
      if (!r) Cal_ZeroValue(V);
      else {
	c1 = - ONE_OVER_FOUR_PI / CUB(r) ;
	c2 =  ONE_OVER_FOUR_PI * Fct->Para[1] / SQU(r) ;
	cr =  c1 * cos(kr) - c2 * sin(kr) ;
	ci = -c1 * sin(kr) - c2 * cos(kr) ;

	V->Val[0] = xxs * cr ; V->Val[MAX_DIM  ] = xxs * ci ;
	V->Val[1] = yys * cr ; V->Val[MAX_DIM+1] = yys * ci ;
	V->Val[2] = zzs * cr ; V->Val[MAX_DIM+2] = zzs * ci ;
      }
      break ;

    case 1 : /* FMM mode Aggregation. Grad considered here-> Aggreg == VECTOR */
      Nd =  Current.FMM.NbrDir ;
      xxs = Current.xs-Current.FMM.Xgc ;
      yys = Current.ys-Current.FMM.Ygc ;
      zzs = Current.zs-Current.FMM.Zgc ;
     
      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	kr =  Fct->Para[1]*(xxs*Current.FMM.Kdir[i_FMM][0] +
			    yys*Current.FMM.Kdir[i_FMM][1] +
			    zzs*Current.FMM.Kdir[i_FMM][2] ) ;
	
	V[i_FMM].Type = VECTOR ;
	V[i_FMM].Val[0]          = - Fct->Para[1] * Current.FMM.Kdir[i_FMM][0]* sin(kr) ;
	V[i_FMM].Val[1]          = - Fct->Para[1] * Current.FMM.Kdir[i_FMM][1]* sin(kr) ;
	V[i_FMM].Val[2]          = - Fct->Para[1] * Current.FMM.Kdir[i_FMM][2]* sin(kr) ;
	V[i_FMM].Val[MAX_DIM]    = - Fct->Para[1] * Current.FMM.Kdir[i_FMM][0]* cos(kr) ;
	V[i_FMM].Val[MAX_DIM +1] = - Fct->Para[1] * Current.FMM.Kdir[i_FMM][1]* cos(kr) ;
	V[i_FMM].Val[MAX_DIM +2] = - Fct->Para[1] * Current.FMM.Kdir[i_FMM][2]* cos(kr) ;
      }
      break;

    case 2 : /* FMM mode Disaggregation. Grad in Aggreg -> Disagg == SCALAR */
      Nd =  Current.FMM.NbrDir ;
      xxs = Current.x-Current.FMM.Xgc ;
      yys = Current.y-Current.FMM.Ygc ;
      zzs = Current.z-Current.FMM.Zgc ;

      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	kr = Fct->Para[1] * (xxs*Current.FMM.Kdir[i_FMM][0] +
			     yys*Current.FMM.Kdir[i_FMM][1] +
			     zzs*Current.FMM.Kdir[i_FMM][2] ) ;
	
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0]       = cos(kr) ;
	V[i_FMM].Val[MAX_DIM] = sin(kr) ;	  
      }       
      break;

    case 3: /* Translation */
      Nd =  Current.FMM.NbrDir ;
      ns =  (int)sqrt((double)Nd/2) ;
      cr = - Fct->Para[1] * ONE_OVER_FOUR_PI * ns/2/Nd ; /* Remaining factors of Green Function & Integration */

      xxs = Current.x - Current.xs ;
      yys = Current.y - Current.ys ;
      zzs = Current.z - Current.zs ;

      r =  sqrt( SQU(xxs) + SQU(yys) + SQU(zzs) ) ; 
      k0r = Fct->Para[1] * r ;     

      Spherical_j_nArray(0, k0r, ns+1, jsph) ;
      Spherical_y_nArray(0, k0r, ns+1, ysph) ;

      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0] = V[i_FMM].Val[MAX_DIM] = 0. ;
	kr = (xxs*Current.FMM.Kdir[i_FMM][0] + 
	      yys*Current.FMM.Kdir[i_FMM][1] +
	      zzs*Current.FMM.Kdir[i_FMM][2])/r ; 
	LegendreRecursive( ns, 0, kr, P);

	for (j_FMM = 0 ; j_FMM <= ns ; j_FMM++){ 
	  s = ((j_FMM/2)%2)? -1 : 1 ;	  
	  sbjn = jsph[j_FMM] ;
	  sbyn = ysph[j_FMM] ;
	  Pl = (2*j_FMM+1) * P[j_FMM] ;
	  
	  V[i_FMM].Val[0]       += s * Pl * ((j_FMM%2) ?   sbjn : sbyn ) ;
	  V[i_FMM].Val[MAX_DIM] += s * Pl * ((j_FMM%2) ? (-sbyn): sbjn ) ;
	}

	V[i_FMM].Val[0] *=  cr*Current.FMM.Weight[i_FMM];
	V[i_FMM].Val[MAX_DIM] *= cr*Current.FMM.Weight[i_FMM];
      }
      break;
   
    default :
      Msg(ERROR, "Case 3D: Bad Flag_GF 'GF_GradHelmholtz' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break;   
   
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

  if(Current.NbrHar != 2)
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_NPxGradHelmholtz'");
  
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
  double  phi_r, phi ;
  double  c, s, kr, bjn, byn ;
  int  ns, Nd, i_FMM, j_FMM ;

  
  GetDP_Begin("GF_NSxGradHelmholtz");
  
  if(Current.NbrHar != 2)
    Msg(ERROR, "Wrong Number of Harmonics in 'GF_NSxGradHelmholtz'");

  V->Type = SCALAR ;

  switch((int)Fct->Para[0]){      
  case _2D :
    switch(Current.FMM.Flag_GF){     
    case 0 :
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

    case 1 : /* FMM mode Aggregation: The Grad is considered here->Scalar product with the normal */      
      Nd =  Current.FMM.NbrDir ;

      xxs = Current.xs - Current.FMM.Xgc ;
      yys = Current.ys - Current.FMM.Ygc ;	
      r = sqrt(SQU(xxs)+SQU(yys)) ;
      phi_r = atan2(yys, xxs) ;
      kr = Fct->Para[1]*r ;
      
      if(Current.Element->Num == NO_ELEMENT)
	Current.Element = Current.ElementSource ;
     
      ny = - Current.Element->x[1] + Current.Element->x[0] ;
      nx = Current.Element->y[1] - Current.Element->y[0] ; 
      n = sqrt(SQU(nx)+SQU(ny)) ;      
      nx = nx / n ;
      ny = ny / n ;

      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	phi = Current.FMM.Phi[i_FMM];
	cr = - Fct->Para[1] * sin(kr*sin(phi+phi_r)) ;
	ci = - Fct->Para[1] * cos(kr*sin(phi+phi_r)) ;

	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0]         = nx*cr*sin(phi) + ny*cr*cos(phi) ;
	V[i_FMM].Val[MAX_DIM]   = nx*ci*sin(phi) + ny*ci*cos(phi) ;
      }

      break;

    case 2 : /* FMM mode Disaggregation */
     Nd =  Current.FMM.NbrDir ;

     xxs = Current.x - Current.FMM.Xgc ;
     yys = Current.y - Current.FMM.Ygc ;
     
     r = sqrt(SQU(xxs)+SQU(yys)) ;
     phi_r = atan2(yys, xxs) ;     
     kr = Fct->Para[1] * r;
     
     for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
       V[i_FMM].Type = SCALAR ;
       phi = Current.FMM.Phi[i_FMM];
       V[i_FMM].Val[0]       = cos(kr*sin(phi+phi_r)) ;
       V[i_FMM].Val[MAX_DIM] = sin(kr*sin(phi+phi_r)) ;
     }
     break;
     
    case 3 : /* Translation */
      Nd =  Current.FMM.NbrDir ;
      ns =  (Nd-1)/2 ;
      cr = 1./4./Nd ;

      kr = Fct->Para[1] * sqrt( SQU(Current.x - Current.xs)+ SQU(Current.y - Current.ys)) ;
      phi_r = atan2(Current.ys - Current.y, Current.xs - Current.x) ;
      
      for (i_FMM = 0 ; i_FMM < Nd ;  i_FMM++){ 
	phi = Current.FMM.Phi[i_FMM];
	V[i_FMM].Type = SCALAR ;
	V[i_FMM].Val[0]       = -cr*yn(0,kr);
	V[i_FMM].Val[MAX_DIM] = -cr*jn(0,kr);
	
	for (j_FMM = 1 ; j_FMM <= ns ;  j_FMM++){ 
	  c = cos(j_FMM*(phi+phi_r-PI));
	  s = sin(j_FMM*(phi+phi_r-PI));
	  bjn = jn(j_FMM,kr);
	  byn = yn(j_FMM,kr);
	  V[i_FMM].Val[0]       += -2.*cr* (j_FMM%2 ?  bjn*s : byn*c) ;
	  V[i_FMM].Val[MAX_DIM] += -2.*cr* (j_FMM%2 ? -byn*s : bjn*c) ; 
	}
      }
      break;     
      
    default :
      Msg(ERROR, "Case 2D: Bad Flag_GF 'GF_NSxGradHelmholtz' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break; 
    
  case _3D :
    switch(Current.FMM.Flag_GF){
    case 0 :
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
      Msg(ERROR, "Case 3D: Bad Flag_GF 'GF_NSxGradHelmholtz' (%d)", Current.FMM.Flag_GF);  
      break;
    }
    break;

  default :
    Msg(ERROR, "Bad Parameter for 'GF_NSxGradHelmholtz' (%d)", (int)Fct->Para[0]);
    break;
  }
  
  GetDP_End ;
}



