#define RCSID "$Id: F_Jiles.c,v 1.3 2005-06-23 01:45:00 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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
 *   Johan Gyselinck
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
#define MU0 1.25663706144e-6


double Ms = 2.1/MU0, a = 50, kkk = 82, c = 0.01, alpha = 82/(2.1/MU0) ; /* Bergqvist */



void  F_dhdb_Jiles (F_ARG) {  /* input : h,b,dh */

  double Hx, Hy, Bx, By, dHx, dHy, dHdBxx, dHdByy, dHdBxy;

  void Vector_dHdB (double Hx, double Hy, double Bx, double By, double dHx, double dHy,
		    double *dHdBxx, double *dHdByy, double *dHdBxy) ;

  GetDP_Begin("F_dhdb_Jiles") ;
  
  /* if (Current.NbrHar != 1) Msg(ERROR,"Only for time stepping"); */
  
  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Msg(ERROR,"Three vector arguments required");

  Hx  = (A+0)->Val[0] ;  Hy = (A+0)->Val[1] ;
  Bx  = (A+1)->Val[0] ;  By = (A+1)->Val[1] ;
  dHx = (A+2)->Val[0] ; dHy = (A+2)->Val[1] ;
  
  Vector_dHdB (Hx, Hy, Bx, By, dHx, dHy, &dHdBxx, &dHdByy, &dHdBxy) ;

  V->Type = TENSOR_SYM ;

  V->Val[0] = dHdBxx ; V->Val[1] = dHdBxy ; V->Val[3] = dHdByy ;
  V->Val[2] = 0 ; V->Val[4] = 0 ; V->Val[5] = 0 ;

  GetDP_End ;
}


void  F_dbdh_Jiles (F_ARG) {  /* input : h,b,dh */

  double Hx, Hy, Bx, By, dHx, dHy, dBdHxx, dBdHyy, dBdHxy;

  void Vector_dBdH (double Hx, double Hy, double Bx, double By, double dHx, double dHy,
		    double *dBdHxx, double *dBdHyy, double *dBdHxy) ;

  GetDP_Begin("F_dbdh_Jiles") ;
  
  /* if (Current.NbrHar != 1) Msg(ERROR,"Only for time stepping"); */
  
  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Msg(ERROR,"Three vector arguments required");

  Hx  = (A+0)->Val[0] ;  Hy = (A+0)->Val[1] ;
  Bx  = (A+1)->Val[0] ;  By = (A+1)->Val[1] ;
  dHx = (A+2)->Val[0] ; dHy = (A+2)->Val[1] ;
  
  Vector_dBdH (Hx, Hy, Bx, By, dHx, dHy, &dBdHxx, &dBdHyy, &dBdHxy) ;

  V->Type = TENSOR_SYM ;

  V->Val[0] = dBdHxx ; V->Val[1] = dBdHxy ; V->Val[3] = dBdHyy ;
  V->Val[2] = 0 ; V->Val[4] = 0 ; V->Val[5] = 0 ;

  GetDP_End ;
}


void  F_h_Jiles (F_ARG) { /* input : h1,b1,b2 */
  double Hx1, Hy1, Bx1, By1, Bx2, By2, Hx2, Hy2;

  void Vector_H2 (double Hx1, double Hy1, 
		  double Bx1, double By1, double Bx2, double By2, int n,
		  double *Hx2, double *Hy2) ;

  GetDP_Begin("F_h_Jiles") ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Msg(ERROR,"Three vector arguments required");
  
  Hx1 = (A+0)->Val[0] ; Hy1 = (A+0)->Val[1] ;
  Bx1 = (A+1)->Val[0] ; By1 = (A+1)->Val[1] ;
  Bx2 = (A+2)->Val[0] ; By2 = (A+2)->Val[1] ;

  Vector_H2 (Hx1, Hy1, Bx1, By1, Bx2, By2, 10, &Hx2, &Hy2) ;

  V->Type = VECTOR ;
  V->Val[0] = Hx2 ; V->Val[1] = Hy2 ; V->Val[3] = 0 ;

  GetDP_End ;
}


void  F_b_Jiles (F_ARG) { /* input : b1,h1,h2 */
  double Hx1, Hy1, Bx1, By1, Bx2, By2, Hx2, Hy2;

  void Vector_B2 (double Bx1, double By1, 
		  double Hx1, double Hy1, double Hx2, double Hy2, int n,
		  double *Bx2, double *By2) ;

  GetDP_Begin("F_b_Jiles") ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Msg(ERROR,"Three vector arguments required");
  
  Bx1 = (A+0)->Val[0] ; By1 = (A+0)->Val[1] ;
  Hx1 = (A+1)->Val[0] ; Hy1 = (A+1)->Val[1] ;
  Hx2 = (A+2)->Val[0] ; Hy2 = (A+2)->Val[1] ;

  Vector_B2 (Bx1, By1, Hx1, Hy1, Hx2, Hy2, 10, &Bx2, &By2) ;

  V->Type = VECTOR ;
  V->Val[0] = Bx2 ; V->Val[1] = By2 ; V->Val[3] = 0 ;

  GetDP_End ;
}



double F_Man (double He) {
  if (fabs(He) < 0.01*a) return Ms*He/(3.*a) ;
  else return Ms*(cosh(He/a)/sinh(He/a)-a/He) ;
}

double F_dMandHe (double He) {
  if (fabs(He) < 0.01*a) return Ms/(3.*a) ;
  else return Ms/a*(1-SQU(cosh(He/a)/sinh(He/a))+SQU(a/He)) ;
}

void FV_Man (double Hex, double Hey, double *Manx, double *Many) {
  double He, Man;

  He = sqrt(Hex*Hex+Hey*Hey) ;
  Man = F_Man(He) ;
  if ( !He ) {
    *Manx = *Many = 0 ;
  } else {
    *Manx = Man * Hex/He ;
    *Many = Man * Hey/He ;
  }

}

void FV_dMandHe (double Hex, double Hey, double *dMandHexx, double *dMandHeyy, double *dMandHexy) {

  double He, Man, dMandHe;

  He = sqrt(Hex*Hex+Hey*Hey) ;
  Man = F_Man(He) ;
  dMandHe = F_dMandHe(He) ;

  if ( !He ) {
    *dMandHexx = *dMandHeyy = dMandHe ;
    *dMandHexy = 0 ;
  } else {
    *dMandHexx = Man/He + (dMandHe - Man/He)*Hex*Hex/(He*He) ;
    *dMandHeyy = Man/He + (dMandHe - Man/He)*Hey*Hey/(He*He) ;
    *dMandHexy =          (dMandHe - Man/He)*Hex*Hey/(He*He) ;
  }
}


void FV_dMidHe (double Hex, double Hey, double Manx, double Many, double Mix, double Miy,
		double dHx, double dHy, double *dMidHexx, double *dMidHeyy, double *dMidHexy) {
  double dM, kdM;
  
  dM = sqrt( (Manx-Mix)*(Manx-Mix) + (Many-Miy)*(Many-Miy) ) ;

  if ( !dM || (Manx-Mix)*dHx + (Many-Miy)*dHy < 0 ) {
    *dMidHexx = *dMidHeyy = *dMidHexy = 0 ;
  } else {
    kdM = kkk * dM;
    *dMidHexx = (Manx-Mix)*(Manx-Mix) / kdM ;
    *dMidHeyy = (Many-Miy)*(Many-Miy) / kdM ;
    *dMidHexy = (Manx-Mix)*(Many-Miy) / kdM ;
  }

}

void Vector_H2 (double Hx1, double Hy1, 
		double Bx1, double By1, double Bx2, double By2, int n,
		double *Hx2, double *Hy2) {

  int i ;
  double Hx, Hy, dHx=0., dHy=0., Bx, By, dBx, dBy ;
  double dHdBxx, dHdByy, dHdBxy ;
  void Vector_dHdB (double Hx, double Hy, double Bx, double By, double dHx, double dHy,
		    double *dHdBxx, double *dHdByy, double *dHdBxy) ;
  Hx = Hx1 ;
  Hy = Hy1 ;
  dBx = (Bx2 - Bx1)/(double)n ; 
  dBy = (By2 - By1)/(double)n ; 

  for (i=0 ; i<n ; i++) {
    Bx = (double)(n-i)/(double)n * Bx1 + (double)i/(double)n * Bx2 ;
    By = (double)(n-i)/(double)n * By1 + (double)i/(double)n * By2 ;

    if (!i) {
      dHx = dBx ;
      dHy = dBy ;
      Vector_dHdB (Hx, Hy, Bx, By, dHx, dHy, &dHdBxx, &dHdByy, &dHdBxy) ;
      dHx = dHdBxx * dBx + dHdBxy * dBy ;
      dHy = dHdBxy * dBx + dHdByy * dBy ;
    }

    Vector_dHdB (Hx, Hy, Bx, By, dHx, dHy, &dHdBxx, &dHdByy, &dHdBxy) ;
    dHx = dHdBxx * dBx + dHdBxy * dBy ;
    dHy = dHdBxy * dBx + dHdByy * dBy ;
    Hx += dHx ;
    Hy += dHy ;
  }
  *Hx2 = Hx ;
  *Hy2 = Hy ;

}

void Vector_B2 (double Bx1, double By1, 
		double Hx1, double Hy1, double Hx2, double Hy2, int n,
		double *Bx2, double *By2) {
  int i ;
  double Hx, Hy, dHx, dHy, Bx, By ;
  double dBdHxx, dBdHyy, dBdHxy ;
  void Vector_dBdH (double Hx, double Hy, double Bx, double By, double dHx, double dHy,
		    double *dBdHxx, double *dBdHyy, double *dBdHxy) ;
  Bx = Bx1;
  By = By1;
  dHx = (Hx2 - Hx1)/(double)n ; 
  dHy = (Hy2 - Hy1)/(double)n ; 
  for (i=0 ; i<n ; i++) {
    Hx = (double)(n-i)/(double)n * Hx1 + (double)i/(double)n * Hx2 ;
    Hy = (double)(n-i)/(double)n * Hy1 + (double)i/(double)n * Hy2 ;
    Vector_dBdH (Hx, Hy, Bx, By, dHx, dHy, &dBdHxx, &dBdHyy, &dBdHxy) ;
    Bx += dBdHxx * dHx + dBdHxy * dHy ;
    By += dBdHxy * dHx + dBdHyy * dHy ;
  }
  *Bx2 = Bx;
  *By2 = By;

}

void Vector_dBdH (double Hx, double Hy, double Bx, double By, double dHx, double dHy,
		  double *dBdHxx, double *dBdHyy, double *dBdHxy) {

  double Mx, My, Hex, Hey ;
  double Manx, Many, Mix, Miy ;
  double dMandHexx, dMandHeyy, dMandHexy ;
  double dMidHexx, dMidHeyy, dMidHexy ;
  double dMdHxx, dMdHyy, dMdHxy ;
  double dxx, dyy, dxy, dd, exx, eyy, exy, fxx, fyy, fxy ;
 
  Mx = Bx/MU0 - Hx ;
  My = By/MU0 - Hy ;
  Hex = Hx + alpha * Mx ;
  Hey = Hy + alpha * My ;

  FV_Man (Hex, Hey, &Manx, &Many) ;

  Mix = (Mx - c*Manx) / (1-c) ;
  Miy = (My - c*Many) / (1-c) ;

  /*
  printf("Hx %f Hy %f \n", Hx,Hy) ;
  printf("Bx %f By %f \n", Bx,By) ;
  printf("Mx %f My %f \n", Mx,My) ;
  printf("Manx %f Many %f \n", Manx,Many) ;
  printf("Mix %f Miy %f \n", Mix,Miy) ;
  */

  FV_dMandHe (Hex, Hey, &dMandHexx, &dMandHeyy, &dMandHexy) ;
  FV_dMidHe (Hex, Hey, Manx, Many, Mix, Miy, dHx, dHy, &dMidHexx, &dMidHeyy, &dMidHexy) ;

  dxx = 1 - alpha*c*dMandHexx - alpha*(1-c)*dMidHexx ;
  dyy = 1 - alpha*c*dMandHeyy - alpha*(1-c)*dMidHeyy ;
  dxy =   - alpha*c*dMandHexy - alpha*(1-c)*dMidHexy ;
  dd = dxx*dyy - dxy*dxy ;
  exx =  dyy/dd ;  
  eyy =  dxx/dd ;  
  exy = -dxy/dd ;  
  fxx = c*dMandHexx + (1-c)*dMidHexx ;
  fyy = c*dMandHeyy + (1-c)*dMidHeyy ;
  fxy = c*dMandHexy + (1-c)*dMidHexy ;

  dMdHxx = exx*fxx + exy*fxy ;
  dMdHyy = eyy*fyy + exy*fxy ;
  dMdHxy = exx*fxy + exy*fyy ;
  /*
  printf("dMandHexx %e dMidHexx %e dMdHxx %e \n", dMandHexx,dMidHexx,dMdHxx) ;
  printf("dMandHeyy %e dMidHeyy %e dMdHyy %e \n", dMandHeyy,dMidHeyy,dMdHyy) ;
  printf("dMandHexy %e dMidHexy %e dMdHxy %e \n", dMandHexy,dMidHexy,dMdHxy) ;
  */
  *dBdHxx =  MU0 * (100.0 + dMdHxx) ; 
  *dBdHyy =  MU0 * (100.0 + dMdHyy) ; 
  *dBdHxy =  MU0 * dMdHxy ; 
}


void Vector_dHdB (double Hx, double Hy, double Bx, double By, double dHx, double dHy,
		  double *dHdBxx, double *dHdByy, double *dHdBxy) {
  double dBdHxx, dBdHyy, dBdHxy, det;
  Vector_dBdH (Hx, Hy, Bx, By, dHx, dHy, &dBdHxx, &dBdHyy, &dBdHxy) ;
  det = dBdHxx * dBdHyy - dBdHxy * dBdHxy ;
  *dHdBxx =   dBdHyy / det ;
  *dHdByy =   dBdHxx / det ;
  *dHdBxy =  -dBdHxy / det ;
}
