#define RCSID "$Id: F_Analytic.c,v 1.22 2005-08-06 08:30:55 geuzaine Exp $"
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
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Numeric.h"
#include "Numeric_F.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"
#include "Legendre.h"
#include "SphBessel.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V


/* ------------------------------------------------------------------------ */
/*  Problem of the sphere                                                   */
/* ------------------------------------------------------------------------ */

void  F_Sphere (F_ARG) {

  double  x, y, z ;
  double  sxr, sxi, syr, syi, szr, szi ; 
  double  mur, sigma, freq, r0, r1 ;

  GetDP_Begin("F_Sphere");

  x = Current.x; y = Current.y; z = Current.z;
  
  mur = Fct->Para[1] ; sigma = Fct->Para[2] ; freq = Fct->Para[3] ;
  r0  = Fct->Para[4] ; r1    = Fct->Para[5] ;

  if (r0 == 0.0){  /* sphere pleine */
    if (Fct->Para[0] == 0){ /* induction */
      solsph_(&x,&y,&z,&sxr,&sxi,&syr,&syi,&szr,&szi,&mur,&sigma,&freq,&r1);  
    }
    else {
      Msg(ERROR, "Not done ...");
    }
  }
  else{  /* sphere creuse */
    Msg(ERROR, "Not done ...");
  }

  if (Current.NbrHar == 1) {
    V->Val[0] = sxr ; V->Val[1] = syr ; V->Val[2] = szr ;
  }
  else {
    V->Val[0] = sxr ; V->Val[1] = syr ; V->Val[2] = szr ;
    V->Val[MAX_DIM] = sxi ; V->Val[MAX_DIM+1] = syi ; V->Val[MAX_DIM+2] = szi ;
  }

  V->Type = VECTOR ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Problem of the cylinder                                                 */
/* ------------------------------------------------------------------------ */

void  F_Cylinder (F_ARG) {
  int     type ;
  double  x, y ;
  double  valx[2], valy[2];
  double  bxr, bxi, byr, byi, phir, phii=0 ;
  double  mur, sigma, freq, b0, r0, r1 ;

  GetDP_Begin("F_Cylinder");

  valx[0] = 0.0  ; valx[1] = 0.0 ;
  valy[0] = 0.0  ; valy[1] = 0.0 ;

  x = Current.x; y = Current.y; 
  
  mur = Fct->Para[0] ; sigma = Fct->Para[1] ; freq = Fct->Para[2] ;
  b0  = Fct->Para[3] ; r0    = Fct->Para[4] ; r1   = Fct->Para[5] ;
  type = (int)Fct->Para[6] ;

  if (r0 == 0.0) 
    solcyl_(&x,&y,&bxr,&bxi,&byr,&byi,&b0,&mur,&sigma,&freq,&r1);
  else
    hollowcyl(x,y,&bxr,&byr,&phir,b0,mur,r0,r1);

  if(type == 0){
    valx[0] = bxr ; valx[1] = bxi ;
    valy[0] = byr ; valy[1] = byi ;
  }
  else{
    valx[0] = phir ; valx[1] = phii ;
  }

  if (Current.NbrHar == 1) {
    V->Val[0] = valx[0] ; V->Val[1] = valy[0] ; V->Val[2] = 0.0 ;
  }
  else {
    V->Val[0] = valx[0] ; V->Val[1] = valy[0] ; V->Val[2] = 0.0 ;
    V->Val[MAX_DIM] = valx[1] ; V->Val[MAX_DIM+1] = valy[1] ; V->Val[MAX_DIM+2] = 0.0 ;
  }

  V->Type = VECTOR ;

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  Problem of the cylinder. Scattering.                                    */
/* ------------------------------------------------------------------------ */

/*  Incident wave z-polarized                                               */

void F_JFIE_ZPolCyl(F_ARG){
  
  double k0, r, kr, e0, eta, phi, a, b, c, d, den ;
  int i, ns ;

  GetDP_Begin("F_JFIE_ZPolCyl") ;  
 
  phi = atan2( A->Val[1], A->Val[0] ) ;
 
  k0  = Fct->Para[0] ;
  eta = Fct->Para[1] ;
  e0  = Fct->Para[2] ;
  r   = Fct->Para[3] ;   
  
  kr = k0*r ;
  ns = 100 ;  

  
  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;
  
  for (i = -ns ; i <= ns ; i++ ){
    a = cos(i*(phi-(PI/2))) ;
    b = sin(i*(phi-(PI/2))) ;
    c = jn(i,kr) ;
    d =  -yn(i,kr) ;     
    
    den = c*c+d*d ;
    
    V->Val[0] += (a*c+b*d)/den ; 
    V->Val[MAX_DIM] += (b*c-a*d)/den ;
  }
  
  V->Val[0] *= -2*e0/kr/eta/PI ;
  V->Val[MAX_DIM] *= -2*e0/kr/eta/PI ;
  
  V->Type = SCALAR ;

  GetDP_End;

} 


void F_RCS_ZPolCyl(F_ARG){
  
  double k0, r, kr, rinf, krinf, phi, a, b, d,den ; 
  double lambda, bjn, rr = 0., ri = 0. ;
  int i, ns ;

  GetDP_Begin("F_RCS_ZPolCyl") ;  
 
  phi = atan2( A->Val[1], A->Val[0] ) ;
 
  k0  = Fct->Para[0] ;
  r  = Fct->Para[1] ;
  rinf   = Fct->Para[2] ; 

  kr = k0*r ;
  krinf = k0*rinf ;
  lambda = 2*PI/k0 ;

  ns = 100 ;  
  
  for (i = -ns ; i <= ns ; i++ ){
    bjn = jn(i,kr) ;
    a = bjn * cos(i*phi) ;
    b = bjn * sin(i*phi) ;
    d =  -yn(i,kr) ;     
    
    den = bjn*bjn+d*d ;
    
    rr += (a*bjn+b*d)/den ; 
    ri += (b*bjn-a*d)/den ;
  }
  
  V->Val[0] =  10*log10( 4*PI*SQU(rinf/lambda) * 2/krinf/PI *(SQU(rr)+SQU(ri)) ) ;
  V->Val[MAX_DIM] = 0. ;
  
  V->Type = SCALAR ;

  GetDP_End;

} 



/*  Incident wave polarized transversely to z                               */

void F_JFIE_TransZPolCyl(F_ARG){
  
  double k0, r, kr, h0, phi, a, b, c, d, den ;
  int i, ns ;

  GetDP_Begin("F_JFIE_TransZPolCyl") ;  
 
  phi = atan2( A->Val[1], A->Val[0] ) ;
 
  k0  = Fct->Para[0] ;
  h0  = Fct->Para[1] ;
  r   = Fct->Para[2] ;   
  
  kr = k0*r ;
  ns = 100 ;  

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;
  
  for (i = -ns ; i <= ns ; i++ ){
    a = cos(PI/2 +i*(phi-(PI/2))) ;
    b = sin(PI/2 +i*(phi-(PI/2))) ;
    c = -jn(i+1,kr) + (i/kr)*jn(i,kr) ;
    d =  yn(i+1,kr) - (i/kr)*yn(i,kr) ; 
    
    den = c*c+d*d ;
    
    V->Val[0] += (a*c+b*d)/den ; 
    V->Val[MAX_DIM] += (b*c-a*d)/den ;
  }
  
  V->Val[0] *= 2*h0/kr/PI ;
  V->Val[MAX_DIM] *= 2*h0/kr/PI ;
  
  V->Type = SCALAR ;

  GetDP_End;

} 

/* some utility functions to deal with cplx numbers */

typedef struct {
  double r;
  double i;
} cplx;

static cplx Csum(cplx a, cplx b)
{
  cplx s;

  s.r = a.r + b.r;
  s.i = a.i + b.i;
  return(s);
}

static cplx Csub(cplx a, cplx b)
{
  cplx s;

  s.r = a.r - b.r;
  s.i = a.i - b.i;
  return(s);
}

static cplx Cprod(cplx a, cplx b)
{
  cplx s;

  s.r = a.r * b.r - a.i * b.i;
  s.i = a.r * b.i + a.i * b.r;
  return(s);
}

static cplx Cdiv(cplx a, cplx b)
{
  cplx s;
  double den;

  den = b.r * b.r + b.i * b.i;
  s.r = (a.r * b.r + a.i * b.i) / den;
  s.i = (a.i * b.r - a.r * b.i) / den;
  return(s);
}

static cplx Cconj(cplx a)
{
  cplx s;

  s.r = a.r;
  s.i = -a.i;
  return(s);
}

static cplx Cneg(cplx a)
{
  cplx s;

  s.r = -a.r;
  s.i = -a.i;
  return(s);
}

static double Cmodu(cplx a)
{
  return(sqrt(a.r * a.r + a.i * a.i));
}

static cplx Cpow(cplx a, double b)
{
  cplx s;
  double mod, arg;

  mod = a.r * a.r + a.i * a.i;
  arg = atan2(a.i,a.r);
  mod = pow(mod,0.5*b);
  arg *= b;
  s.r = mod * cos(arg);
  s.i = mod * sin(arg);

  return(s);
}

static cplx Cprodr(double a, cplx b)
{
  cplx s;

  s.r = a * b.r;
  s.i = a * b.i;
  return(s);
}

/* Solution of Helmholtz equation outside an acoustically soft
   circular cylinder of radius R, under plane wave incidence
   e^{ikx} */

void F_AcousticFieldSoftCylinder(F_ARG){
  cplx I = {0.,1.}, HnkR, Hnkr, tmp;
  double k, R, r, kr, kR, theta, cost ;
  int n, ns ;

  GetDP_Begin("F_AcousticFieldSoftCylinder") ;  

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;   
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;
  
  ns = (int)k + 10;
  
  for (n = 0 ; n < ns ; n++){

    HnkR.r = jn(n,kR);
    HnkR.i = yn(n,kR);

    Hnkr.r = jn(n,kr);
    Hnkr.i = yn(n,kr);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( HnkR.r, Hnkr) ) , HnkR );

    cost = cos(n*theta);

    V->Val[0] +=  cost * tmp.r * (!n ? 0.5 : 1.);
    V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
  }
  
  V->Val[0] *= -2;
  V->Val[MAX_DIM] *= -2;
  
  V->Type = SCALAR ;

  GetDP_End;
} 

/* Radial derivative of the solution of the Helmholtz equation outside
   a circular cylinder of radius R, under plane wave incidence
   e^{ikx} */

cplx DHn(cplx *Hnkrtab, int n, double x){
  if(n == 0){
    return Cneg(Hnkrtab[1]);
  }
  else{
    return Csub( Hnkrtab[n-1] , Cprodr((double)n/x, Hnkrtab[n]) );
  }
}

void F_DrAcousticFieldSoftCylinder(F_ARG){
  cplx I = {0.,1.}, HnkR, tmp, *Hnkrtab;
  double k, R, r, kr, kR, theta, cost ;
  int n, ns ;

  GetDP_Begin("F_DrAcousticFieldSoftCylinder") ;  

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;   
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;
  
  ns = (int)k + 10;

  Hnkrtab = (cplx*)Malloc(ns*sizeof(cplx));

  for (n = 0 ; n < ns ; n++){
    Hnkrtab[n].r = jn(n,kr);
    Hnkrtab[n].i = yn(n,kr);
  }

  for (n = 0 ; n < ns ; n++){
    HnkR.r = jn(n,kR);
    HnkR.i = yn(n,kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( HnkR.r, DHn(Hnkrtab, n, kr) ) ) , HnkR );

    cost = cos(n*theta);

    V->Val[0] +=  cost * tmp.r * (!n ? 0.5 : 1.);
    V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
  }

  Free(Hnkrtab);
  
  V->Val[0] *= -2 * k;
  V->Val[MAX_DIM] *= -2 * k;
  
  V->Type = SCALAR ;

  GetDP_End;
} 

/* Solution of Helmholtz equation outside an acoustically hard
   circular cylinder of radius R, under plane wave incidence
   e^{ikx} */

void F_AcousticFieldHardCylinder(F_ARG){
  cplx I = {0.,1.}, Hnkr, dHnkR, tmp, *HnkRtab;
  double k, R, r, kr, kR, theta, cost ;
  int n, ns ;

  GetDP_Begin("F_AcousticFieldHardCylinder") ;  

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;   
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;
  
  ns = (int)k + 10;
  
  HnkRtab = (cplx*)Malloc(ns*sizeof(cplx));

  for (n = 0 ; n < ns ; n++){
    HnkRtab[n].r = jn(n,kR);
    HnkRtab[n].i = yn(n,kR);
  }

  for (n = 0 ; n < ns ; n++){
    Hnkr.r = jn(n,kr);
    Hnkr.i = yn(n,kr);

    dHnkR = DHn(HnkRtab, n, kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( dHnkR.r, Hnkr) ) , dHnkR );

    cost = cos(n*theta);

    V->Val[0] +=  cost * tmp.r * (!n ? 0.5 : 1.);
    V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
  }

  Free(HnkRtab);
  
  V->Val[0] *= -2;
  V->Val[MAX_DIM] *= -2;
  
  V->Type = SCALAR ;

  GetDP_End;
} 

/* ------------------------------------------------------------------------ */
/*  Problem of the sphere. Scattering.                                      */
/* ------------------------------------------------------------------------ */


void F_JFIE_SphTheta(F_ARG){
  
  double k0, r, kr, e0, eta, theta, phi, a1, b1, c1, d1, den1, P, P0, dP ;
  double ctheta, stheta, cteRe1, cteRe2, a2, b2, c2, d2, den2 ;
  int i, n ;

  GetDP_Begin("F_JFIE_SphTheta") ;  

  theta = atan2(sqrt( A->Val[0]* A->Val[0] + A->Val[1]*A->Val[1] ),  A->Val[2]);
  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  eta = Fct->Para[1] ;
  e0  = Fct->Para[2] ;
  r   = Fct->Para[3] ;   
  
  kr = k0*r ;
  n = 50 ;  

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == PI || theta == -PI ) theta -= 1e-7;


  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);
    
    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);

    dP = (i+1)*i* P0/stheta-(ctheta/(ctheta*ctheta-1))* P;

    cteRe1 = (2*i+1) * stheta * dP/i/(i+1);
    cteRe2 = (2*i+1) * P/stheta/i/(i+1);

    a1 = cos((1-i)*PI/2) ;
    b1 = sin((1-i)*PI/2) ;
    c1 = -AltSpherical_j_n(i+1, kr) + (i+1) * AltSpherical_j_n(i, kr)/kr ; /* Derivative */
    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1) * AltSpherical_y_n(i, kr)/kr) ;
   
    a2 =  cos((2-i)*PI/2) ;
    b2 =  sin((2-i)*PI/2) ;    
    c2 =  AltSpherical_j_n(i, kr) ;
    d2 = -AltSpherical_y_n(i, kr) ; 

    den1 = c1*c1+d1*d1 ;
    den2 = c2*c2+d2*d2 ;
    
    V->Val[0] += cteRe1*(a1*c1+b1*d1)/den1 +  cteRe2*(a2*c2+b2*d2)/den2 ; 
    V->Val[MAX_DIM] += cteRe1*(b1*c1-a1*d1)/den1 + cteRe2*(b2*c2-a2*d2)/den2 ;
  }
   
  V->Val[0] *= e0*cos(phi)/eta/kr ;
  V->Val[MAX_DIM] *= e0*cos(phi)/eta/kr  ;
  
  V->Type = SCALAR ;

  GetDP_End;

} 



void F_RCS_SphTheta(F_ARG){
  
  double k0, r, kr, e0, rinf, krinf, theta, phi, a1 =0., b1=0., d1, den1, P, P0, dP ;
  double J, J_1, dJ, ctheta, stheta, cteRe1, cteRe2, a2, b2, d2, den2, lambda ;
  int i, n ;

  GetDP_Begin("F_RCS_SphTheta") ;  

  theta = atan2(sqrt( A->Val[0]* A->Val[0] + A->Val[1]*A->Val[1] ),  A->Val[2]);
  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  e0 = Fct->Para[1] ;
  r  = Fct->Para[2] ;
  rinf   = Fct->Para[3] ;   
  
  kr = k0*r ;
  krinf = k0*rinf ;
  lambda = 2*PI/k0 ;

  n = 50 ;  

  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == PI || theta == -PI ) theta -= 1e-7;

  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);
    
    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);
    dP = (i+1)*i* P0/stheta-(ctheta/(ctheta*ctheta-1))* P;
     
    J = AltSpherical_j_n(i, kr) ;
    J_1 = AltSpherical_j_n(i+1, kr) ;
    dJ = -J_1 + (i + 1) * J/kr ; 

    cteRe1 = -(2*i+1) * stheta * dP * dJ /i/(i+1);
    cteRe2 = (2*i+1) * P * J /stheta/i/(i+1);

    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1) * AltSpherical_y_n(i, kr)/kr) ;
    
    d2 = -AltSpherical_y_n(i, kr) ;     

    den1 = dJ*dJ+d1*d1 ;
    den2 = J*J+d2*d2 ;
    
    a1 += cteRe1 * dJ /den1 +  cteRe2 * J /den2 ; 
    b1 += cteRe1*(-d1) /den1 + cteRe2*(-d2) /den2 ;
  }

  a2 = e0*cos(phi)*sin(krinf)/krinf ;
  b2 = e0*cos(phi)*cos(krinf)/krinf ;
 
  V->Val[0] = 10*log10( 4*PI*SQU(rinf/lambda)*(SQU(a1*a2-b1*b2) + SQU(a1*b2+a2*b1)) );
  V->Val[MAX_DIM] = 0. ;
  
  V->Type = SCALAR ;


  GetDP_End;
}



void F_JFIE_SphPhi(F_ARG){
  
  double k0, r, kr, e0, eta, theta, phi, a1, b1, c1, d1, den1, P, P0, dP ;
  double ctheta, stheta, cteRe1, cteRe2, a2, b2, c2, d2, den2 ;
  int i, n ;

  GetDP_Begin("F_JFIE_SphPhi") ;  

  theta = atan2( sqrt( A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1] ), A->Val[2]);
  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  eta = Fct->Para[1] ;
  e0  = Fct->Para[2] ;
  r   = Fct->Para[3] ;   
  
  kr = k0*r ;
  n = 50 ;  

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;
  
  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == PI || theta == -PI ) theta -= 1e-7;
 
  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);

    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);

    dP = (i+1)*i* P0/stheta - ctheta/(ctheta*ctheta-1)*P; /* Derivative */

    cteRe1 = (2*i+1) * P /i/(i+1)/stheta;
    cteRe2 = (2*i+1) * stheta * dP/i/(i+1);

    a1 = cos((1-i)*PI/2) ;
    b1 = sin((1-i)*PI/2) ;
    c1 = -AltSpherical_j_n(i+1, kr) + (i+1)*AltSpherical_j_n(i, kr)/kr ; /* Derivative */
    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1)*AltSpherical_y_n(i, kr)/kr) ;
    
    a2 =  cos((2-i)*PI/2) ;
    b2 =  sin((2-i)*PI/2) ;    
    c2 =  AltSpherical_j_n(i, kr) ;
    d2 =  -AltSpherical_y_n(i, kr) ;     

    den1 = c1*c1+d1*d1 ;
    den2 = c2*c2+d2*d2 ;
    
    V->Val[0] += cteRe1*(a1*c1+b1*d1)/den1 +  cteRe2*(a2*c2+b2*d2)/den2 ; 
    V->Val[MAX_DIM] += cteRe1*(b1*c1-a1*d1)/den1 + cteRe2*(b2*c2-a2*d2)/den2 ;
  }
  
  V->Val[0] *= e0*sin(phi)/eta/kr ;
  V->Val[MAX_DIM] *= e0*sin(phi)/eta/kr  ;
  
  V->Type = SCALAR ;

  GetDP_End;

}



void F_RCS_SphPhi(F_ARG){
  
  double k0, r, kr, e0, rinf, krinf, theta, phi, a1 =0., b1=0., d1, den1, P, P0, dP ;
  double J, J_1, dJ, ctheta, stheta, cteRe1, cteRe2, a2, b2, d2, den2, lambda ;
  int i, n ;

  GetDP_Begin("F_RCS_SphPhi") ;  

  theta = atan2(sqrt( A->Val[0]* A->Val[0] + A->Val[1]*A->Val[1] ),  A->Val[2]);
  phi = PI/2 ;

  k0  = Fct->Para[0] ;
  e0 = Fct->Para[1] ;
  r  = Fct->Para[2] ;
  rinf   = Fct->Para[3] ;   
  
  kr = k0*r ;
  krinf = k0*rinf ;
  lambda = 2*PI/k0 ;

  n = 50 ;  

  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == PI || theta == -PI ) theta -= 1e-7;

  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);
    
    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);
    dP = (i+1)*i* P0/stheta-(ctheta/(ctheta*ctheta-1))* P;
     
    J = AltSpherical_j_n(i, kr) ;
    J_1 = AltSpherical_j_n(i+1, kr) ;
    dJ = -J_1 + (i + 1) * J/kr ; 

    cteRe1 = -(2*i+1) * P * dJ /stheta/i/(i+1);
    cteRe2 = (2*i+1) * stheta * dP * J/i/(i+1);

    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1) * AltSpherical_y_n(i, kr)/kr) ;
    d2 = -AltSpherical_y_n(i, kr) ;     

    den1 = dJ*dJ+d1*d1 ;
    den2 = J*J+d2*d2 ;
    
    a1 += cteRe1 * dJ /den1 +  cteRe2 * J /den2 ; 
    b1 += cteRe1*(-d1) /den1 + cteRe2*(-d2) /den2 ;
  }

  a2 = e0*sin(phi)*sin(krinf)/krinf ;
  b2 = e0*sin(phi)*cos(krinf)/krinf ;
 
  V->Val[0] = 10*log10( 4*PI*SQU(rinf/lambda)*(SQU(a1*a2-b1*b2) + SQU(a1*b2+a2*b1)) );
  V->Val[MAX_DIM] = 0. ;
  
  V->Type = SCALAR ;

  GetDP_End;
} 


/* ------------------------------------------------------------------------ */
/*  Problem of the sphere. Acoustic scattering.                             */
/* ------------------------------------------------------------------------ */

/* 
   Scattering on an acoustically soft sphere (exterior Dirichlet
   problem) by incident plane wave in the direction of the negative
   z-axis

   J.J. Bowman, T.B.A. Senior and P.L.E. Uslenghi, Electromagnetic and
   Acoustic Scattering by Simple Shapes, p. 358 

   In:
   k: wave number
   a: sphere radius
   r: r coord in spherical coords
   theta: theta coord in spherical coords

   Out:
   total field V_i+V_s
*/

void  F_AcousticSoftSphere(F_ARG){
#define N 50
  double k, a, r, theta, ka, kr, fact;
  int n;
  double jnka[N], jnkr[N], hnkar[N], hnkai[N], hnkrr[N], hnkri[N];
  struct Value V_tmp, V_tmp2, V_mi, V_jnka, V_jnkr, V_hnka, V_hnkr, V_an;

  GetDP_Begin("F_AcousticSoftSphere") ;  

  k     = A->Val[0];
  a     = (A+1)->Val[0];
  r     = (A+2)->Val[0];
  theta = (A+3)->Val[0];

  kr = k*r ;
  ka = k*a ;

  V->Type         = SCALAR ;
  V->Val[0]       = 0.;
  V->Val[MAX_DIM] = 0. ;

  V_tmp.Type = V_tmp2.Type = SCALAR;
  V_mi.Type = V_jnka.Type = V_jnkr.Type = SCALAR;
  V_hnka.Type = V_hnkr.Type = V_an.Type = SCALAR;

  n = 0;
  Spherical_j_nArray(n,kr,N,&jnkr[0]);
  Spherical_j_nArray(n,ka,N,&jnka[0]);
  Spherical_h_nArray(1,n,kr,N,hnkrr,hnkri);
  Spherical_h_nArray(1,n,ka,N,hnkar,hnkai);

  /* to compare with gsl/python */
  /*
  for (n = 0 ; n < N ; n++){
    jnkr[n] = Spherical_j_n(n,kr);
    jnka[n] = Spherical_j_n(n,ka);
    Spherical_h_n(1,n,kr,&hnkrr[n],&hnkri[n]);
    Spherical_h_n(1,n,ka,&hnkar[n],&hnkai[n]);
  }
  */

  for (n = 0 ; n < N ; n++){
    V_mi.Val[0] = 0.; V_mi.Val[MAX_DIM] = -1.;
    V_tmp.Val[0] = n ; V_tmp.Val[MAX_DIM] = 0.;
    Cal_PowerValue (&V_mi, &V_tmp, &V_mi);

    V_jnkr.Val[0] = jnkr[n]; V_jnkr.Val[MAX_DIM] = 0;
    V_jnka.Val[0] = jnka[n]; V_jnka.Val[MAX_DIM] = 0;
    V_hnkr.Val[0] = hnkrr[n]; V_hnkr.Val[MAX_DIM] = hnkri[n];
    V_hnka.Val[0] = hnkar[n]; V_hnka.Val[MAX_DIM] = hnkai[n];

    Cal_ComplexDivision(V_jnka.Val,V_hnka.Val,V_an.Val);
    Cal_ComplexProduct(V_an.Val,V_hnkr.Val,V_tmp.Val);
    
    V_tmp.Val[0]       = V_jnkr.Val[0]       - V_tmp.Val[0];
    V_tmp.Val[MAX_DIM] = V_jnkr.Val[MAX_DIM] - V_tmp.Val[MAX_DIM];

    Cal_ComplexProduct(V_mi.Val,V_tmp.Val,V_tmp2.Val);

    fact = (2*n+1) * Legendre(n,0,cos(theta));

    V->Val[0]       += fact * V_tmp2.Val[0] ; 
    V->Val[MAX_DIM] += fact * V_tmp2.Val[MAX_DIM] ;
  }
#undef N   
}

void  F_AcousticHardSphere(F_ARG){

}


/* ------------------------------------------------------------------------ */
/*  Coefficients for On Surface Radiation Conditions (OSRC)                 */
/* ------------------------------------------------------------------------ */

/* 
   See:
   1) Kechroud, Antoine & Soulaimani, Nuemrical accuracy of a
   Pade-type non-reflecting..., IJNME 2005
   2) Antoine, Darbas & Lu, An improved surface radiation condition...
   CMAME, 2006(?)
*/

static double aj(int j, int N){
  return 2./(2.*N + 1.) * SQU(sin((double)j * M_PI/(2.*N + 1.))) ;
}

static double bj(int j, int N){
  return SQU(cos((double)j * M_PI/(2.*N + 1.))) ;
}

void  F_OSRC_C0(F_ARG){
  int j, N;
  double theta;
  cplx sum = {1., 0.}, z, un = {1., 0.};

  GetDP_Begin("F_OSRC_C0") ;  

  N = (int)Fct->Para[0] ;
  theta = Fct->Para[1] ;   

  z.r = cos(-theta) - 1. ;
  z.i = sin(-theta) ;
  for(j = 1; j <= N; j++){
    sum = Csum( sum, Cdiv( Cprodr(aj(j,N), z) , Csum(un, Cprodr(bj(j,N), z)))) ;
  }

  z.r = cos(theta/2.) ;
  z.i = sin(theta/2.) ;
  sum = Cprod(sum, z);
  
  V->Val[0] = sum.r;
  V->Val[MAX_DIM] = sum.i;
  V->Type = SCALAR ;

  GetDP_End;
}

void F_OSRC_Aj(F_ARG){
  int j, N;
  double theta;
  cplx z, res, un = {1., 0.};

  GetDP_Begin("F_OSRC_Aj") ;  

  j = (int)Fct->Para[0] ;
  N = (int)Fct->Para[1] ;
  theta = Fct->Para[2] ;   

  z.r = cos(-theta/2.) ;
  z.i = sin(-theta/2.) ;
  res = Cprodr(aj(j,N), z);

  z.r = cos(-theta) - 1. ;
  z.i = sin(-theta) ;
  res = Cdiv(res, Cpow( Csum(un, Cprodr(bj(j,N), z)), 2.));

  V->Val[0] = res.r;
  V->Val[MAX_DIM] = res.i;
  V->Type = SCALAR ;

  GetDP_End;
}

void F_OSRC_Bj(F_ARG){
  int j, N;
  double theta;
  cplx z, res, un = {1., 0.};

  GetDP_Begin("F_OSRC_Bj") ;  

  j = (int)Fct->Para[0] ;
  N = (int)Fct->Para[1] ;
  theta = Fct->Para[2] ;   

  z.r = cos(-theta) ;
  z.i = sin(-theta) ;
  res = Cprodr(bj(j,N), z);

  z.r = cos(-theta) - 1. ;
  z.i = sin(-theta) ;
  res = Cdiv(res, Cpow( Csum(un, Cprodr(bj(j,N), z)) , 2.));

  V->Val[0] = res.r;
  V->Val[MAX_DIM] = res.i;
  V->Type = SCALAR ;

  GetDP_End;
}

#undef F_ARG
