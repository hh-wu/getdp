// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Ruth Sabariego
//

#include <math.h>
#include "ProData.h"
#include "ProDefine.h"
#include "BF.h"
#include "GF.h"
#include "GeoData.h"
#include "Message.h"

#define SQU(a)     ((a)*(a)) 
#define THESIGN(a) ((a)>=0 ? 1 : -1)
#define ONE_OVER_TWO_PI    1.5915494309189534E-01
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02

#define MAX_NODES        6 
#define EPSILON          1.e-8
#define EPSILON2         1.e-20
#define RADIUS           0.154797  /* this is a hack... */

/* ------------------------------------------------------------------------ */
/*  G F _ L a p l a c e x F o r m                                           */
/* ------------------------------------------------------------------------ */

void GF_LaplacexForm(GF_ARGX)
{
  double   xs[MAX_NODES], ys[MAX_NODES], zs[MAX_NODES], u[3], v[3], n[3];
  double   u2=0., v2=0., xl=0., yl=0., zl=0., zl_2=0. ;
  double   Area, m0[3], m1[3], m2[3] ;
  int      Type_Int=0, i, j = 1 ;
  double   a=0., b=0., c=0., d, e, f, i1, I1 = 0., Iua, Iva, r2;
  double   s0m=0., s0p=0., s1m=0., s1p=0., s2m=0., s2p=0., t00, t10, t20, t0m_2, t0p_2, t1p_2;
  double   r00_2=0., r10_2=0., r20_2=0., r00, r10, r20, r0p=0., r0m=0., r1p=0.;
  double   f20=0., f21=0., f22=0., B0, B1, B2 ;
  double   f30, f31, f32, N10, N20, N30 ;

  Val->Val[MAX_DIM] = 0.0 ;
  
  switch ((int)Fct->Para[0]) {
    
  case _2D : 
    
    switch (Element->ElementSource->Type) {
      
    case POINT :      
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;

      r2 = SQU(x-xs[0])+SQU(y-ys[0]) ;
      if (r2 > SQU(RADIUS)){
	Val->Type = SCALAR ;
	Val->Val[0] = - ONE_OVER_FOUR_PI * log(r2) ;
      }
      else{
	Val->Type = SCALAR ;
	Val->Val[0] = - ONE_OVER_FOUR_PI * log(SQU(RADIUS)) ;
      }
      break ;
     
    case LINE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      
      if(xFunctionBF == (void(*)())BF_Volume) {      
	a = SQU(xs[0]-xs[1]) + SQU(ys[0]-ys[1]) ;
	b = 2. * ((x-xs[0])*(xs[0]-xs[1]) + (y-ys[0])*(ys[0]-ys[1])) ;
	c = SQU(x-xs[0]) + SQU(y-ys[0]) ;     
	d = 0.5 * b / a ;  
	e = c / a ;  
	f = e - d*d ;
	
	if      (f > EPSILON)      { Type_Int = 1; }
	else if (fabs(f) < EPSILON){ Type_Int = 0; }
	else                       { Type_Int = -1; f = -f; }	
	if (Element->Num == Element->ElementSource->Num)  Type_Int = 2 ;
	if ((c == 0) || ((b == -2*a) && (c == a)))  Type_Int = 3 ;
	
	switch (Type_Int) {   
	case -1 :	
	  I1 = log(a) + 
	    ( (d+1.) * log(SQU(d+1.) - f) - 2.*(d+1.) + 
	      sqrt(f) * log((d+1.+sqrt(f))/(d+1.-sqrt(f))) ) -
	    ( d*log(d*d-f) - 2.*d + sqrt(f)*log((d+sqrt(f))/(d-sqrt(f))) ) ;
	  break ;
	case 0 :
	  I1 = log(a) + (d+1.)*log(SQU(d+1.)) - d*log(SQU(d)) - 2. ; 
	  break ;      	    
	case 1 :
	  I1 = log(a) + 
	    ( (d+1.) * log(SQU(d+1.) + f) - 2.*(d+1.) + 
	      2.*sqrt(f) * atan((d+1.)/sqrt(f)) ) -
	    ( d*log(d*d+f) - 2.*d + 2.*sqrt(f)*atan(d/sqrt(f)) )  ;
	  break ;	  	    
	case 2 : 
	  i1 = -b / (2.*a) ;
	  I1 = 2. * i1 * (log(i1) - 1.) + 
	    2. * (1.-i1) * (log(1.-i1) - 1.) + log(a) ;
	  break ;	    
	case 3 : 
	  I1 = .5 * log(a) - 1. ;
	  break ;    
	} 
	
	Val->Type = SCALAR ;
	Val->Val[0] = - ONE_OVER_FOUR_PI * I1 ; 
      }
      else {
	Message::Error("Unknown Basis Function Type for 'GF_LaplacexForm'");
      }
      break ;
      
    default :
      Message::Error("Unknown Element Type (%s) for 'GF_LaplacexForm'",
		 Get_StringForDefine(Element_Type, Element->ElementSource->Type));
    }
    
    break;
    
  case _3D :
    
    switch (Element->ElementSource->Type) {
      
    case LINE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      zs[0] = Element->ElementSource->z[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      zs[1] = Element->ElementSource->z[1] ;
      
      a = SQU(xs[0]-xs[1]) + SQU(ys[0]-ys[1]) + SQU(zs[0]-zs[1]) ;
      b = 2. * ((x-xs[0])*(xs[0]-xs[1]) + 
		(y-ys[0])*(ys[0]-ys[1]) + 
		(z-zs[0])*(zs[0]-zs[1])) ;
      c = SQU(x-xs[0]) + SQU(y-ys[0]) + SQU(z-zs[0]) + SQU(RADIUS) ;
      
      Val->Val[0] = ONE_OVER_FOUR_PI *
	log( ( 2.*sqrt(a*(a+b+c))+2.*a+b ) / ( 2.*sqrt(a*c)+b ) ) ;
      Val->Type = SCALAR ;
      break ;
    
    case TRIANGLE :
    case QUADRANGLE :
      if(xFunctionBF == (void(*)())BF_Volume) Type_Int = 1 ;
      if(xFunctionBF == (void(*)())BF_Node)   Type_Int = 2 ;

      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      zs[0] = Element->ElementSource->z[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      zs[1] = Element->ElementSource->z[1] ;
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;
      zs[2] = Element->ElementSource->z[2] ;

      if (Element->ElementSource->Type ==  QUADRANGLE) {
	     xs[3] = Element->ElementSource->x[3] ; ys[3] = Element->ElementSource->y[3] ;
	     zs[3] = Element->ElementSource->z[3] ;
	     j = 0 ;
       };
      
      for(i = j; i < 2; i++){      
	/* triangle side lengths */
	a = sqrt(SQU(xs[1]-xs[0]) + SQU(ys[1]-ys[0]) +  SQU(zs[1]-zs[0]));
	b = sqrt(SQU(xs[2]-xs[1]) + SQU(ys[2]-ys[1]) +  SQU(zs[2]-zs[1]));
	c = sqrt(SQU(xs[2]-xs[0]) + SQU(ys[2]-ys[0]) +  SQU(zs[2]-zs[0]));

	/* local system (u,v,w) centered at (xs[0],ys[0],zs[0]) */
	u[0] = (xs[1]-xs[0])/a;
	u[1] = (ys[1]-ys[0])/a;
	u[2] = (zs[1]-zs[0])/a;
      
	/* triangle normal */
	Geo_CreateNormal(Element->ElementSource->Type,xs,ys,zs,n);
	
	/* v = n /\ u */ 
	v[0] = n[1]*u[2]-n[2]*u[1];
	v[1] = n[2]*u[0]-n[0]*u[2];
	v[2] = n[0]*u[1]-n[1]*u[0];
	
	u2 = (xs[2]-xs[0])*u[0] + (ys[2]-ys[0])*u[1] + (zs[2]-zs[0])*u[2]; /* u2 coordinate */
	v2 = (xs[2]-xs[0])*v[0] + (ys[2]-ys[0])*v[1] + (zs[2]-zs[0])*v[2];  /* triangle height, v2 coordinate */
     
	/* local coordinates of the observation point (xl, yl, zl) */ 
	xl = u[0] * (x-xs[0]) +  u[1] * (y-ys[0]) + u[2] * (z-zs[0]);
	yl = v[0] * (x-xs[0]) +  v[1] * (y-ys[0]) + v[2] * (z-zs[0]);
	zl = n[0] * (x-xs[0]) +  n[1] * (y-ys[0]) + n[2] * (z-zs[0]);
		
	s0m = -( (a-xl) * (a-u2) + yl*v2 ) / b;
	s0p = s0m + b;
	s1p = ( xl * u2 + yl * v2 ) / c;
	s1m = s1p - c;
	s2m = - xl;
	s2p = a - xl;
	
	/* distance observation point projection on triangle plane to triangle local vertices*/
	/* t1m = t0p ; t2p = t0m ; t2m = t1p ; */ 
	t00 = (yl * (u2-a) + v2 * (a-xl)) / b;
	t10 = (xl * v2 - yl * u2) / c;
	t20 = yl;

	t0m_2 = (a-xl)*(a-xl) + yl*yl; 
	t0p_2 = (u2-xl)*(u2-xl) + (v2-yl)*(v2-yl); 
	t1p_2 = xl*xl + yl*yl;
	
	/* minimum distances^2 from the observation point to each triangle side*/
	zl_2 = SQU(zl) ;
	r00_2 = SQU(t00) + zl_2 ;
	r10_2 = SQU(t10) + zl_2 ;
	r20_2 = SQU(t20) + zl_2 ;
	
	/* distances from observation point to the vertices*/
	r0p = sqrt(t0p_2 + zl_2);      
	r0m = sqrt(t0m_2 + zl_2);
	r1p = sqrt(t1p_2 + zl_2);

	r00 = sqrt(r00_2);
	r10 = sqrt(r10_2);
	r20 = sqrt(r20_2);
	
	/* intermediate functions */ 
	if(r00 <= EPSILON*(fabs(s0m)+fabs(s0p)) ){ f20 = log(s0m/s0p) ; B0 = 0; }
	else{
	  if (!(r0m + s0m)) 
	    Message::Error("1/0 in GF_LaplacexForm (case _3D TRIANGLE) Num %d Obs %.15e %.15e %.15e",
		       Element->ElementSource->Num, x, y, z) ;
	  f20 = log((r0p + s0p) / (r0m + s0m));
	  B0  = atan(t00*s0p/(r00_2+fabs(zl)*r0p))-atan(t00*s0m/(r00_2+fabs(zl)*r0m));
	}
	
	if(r10 <= EPSILON*(fabs(s1m)+fabs(s1p)) ){ f21 = log(s1m/s1p); B1 = 0; }
	else{
	  if(!(r0p + s1m)) 
	    Message::Error("1/0 in GF_LaplacexForm (case _3D TRIANGLE) Num %d Obs %.15e %.15e %.15e",
		       Element->ElementSource->Num, x, y, z) ;
	  f21 = log((r1p + s1p) / (r0p + s1m));
	  B1 =  atan(t10*s1p/(r10_2+fabs(zl)*r1p))-atan(t10*s1m/(r10_2+fabs(zl)*r0p));
	}
	
	if(r20 <= EPSILON*(fabs(s2m)+fabs(s2p)) ){ f22 = log(s2m/s2p); B2 = 0; }
	else{
	  if(!(r1p+s2m))
	    Message::Error("1/0 in GF_LaplacexForm (case _3D TRIANGLE) Num %d Obs %.15e %.15e %.15e",
		       Element->ElementSource->Num, x, y, z) ;
	  f22 = log((r0m + s2p) / (r1p + s2m));
	  B2 = atan(t20*s2p/(r20_2+fabs(zl)*r0m))-atan(t20*s2m/(r20_2+fabs(zl)*r1p));
	}
			
	I1 += -fabs(zl)*(B0+B1+B2) + t00*f20+t10*f21+t20*f22 ; /* 1/r integral solution*/
	
	if (j == 0){ xs[1] = xs[2]; ys[1] = ys[2]; zs[1] = zs[2]; xs[2] = xs[3]; ys[2] = ys[3]; zs[2] = zs[3];}
      }

      
      switch ( Type_Int ){
      case 1 : /* BF_Volume */
	Area = a * v2/2 ;/* Triangle area */
	Val->Val[0] = I1 /Area ; 	
	break;

      case 2 : /* BF_Node */
	if (!v2) 	
	  Message::Error("1/0 in GF_LaplacexForm (case _3D TRIANGLE) v2 %e", v2);

	f30 = (s0p*r0p-s0m*r0m) + r00_2 * f20 ; /* f3i */
	f31 = (s1p*r1p-s1m*r0p) + r10_2 * f21 ;
	f32 = (s2p*r0m-s2m*r1p) + r20_2 * f22 ;

	m0[0] = ((ys[2] - ys[1]) * n[2] - (zs[2] - zs[1]) * n[1])*f30/b ;
	m0[1] = ((zs[2] - zs[1]) * n[0] - (xs[2] - xs[1]) * n[2])*f30/b ;
	m0[2] = ((xs[2] - xs[1]) * n[1] - (ys[2] - ys[1]) * n[0])*f30/b ;
	
	m1[0] = ((ys[0] - ys[2]) * n[2] - (zs[0] - zs[2]) * n[1])*f31/c ;
	m1[1] = ((zs[0] - zs[2]) * n[0] - (xs[0] - xs[2]) * n[2])*f31/c ;
	m1[2] = ((xs[0] - xs[2]) * n[1] - (ys[0] - ys[2]) * n[0])*f31/c ;
	
	m2[0] = (u[1] * n[2] - u[2]* n[1])*f32 ;
	m2[1] = (u[2] * n[0] - u[0]* n[2])*f32 ;
	m2[2] = (u[0] * n[1] - u[1]* n[0])*f32 ;
	
	
	Iua = (u[0] * (m0[0] + m1[0] + m2[0]) +
               u[1] * (m0[1] + m1[1] + m2[1]) + 
	       u[2] * (m0[2] + m1[2] + m2[2]))/2 ; 
	
	Iva = (v[0] * (m0[0] + m1[0] + m2[0]) +
               v[1] * (m0[1] + m1[1] + m2[1]) + 
	       v[2] * (m0[2] + m1[2] + m2[2]))/2 ; 
	
	switch(EntityNum){
	case 1 :  
	  N10 = 1 - xl/a + (u2/a -1) * yl/v2 ;
	  Val->Val[0] = N10 * I1  - Iua/a + (u2/a-1) * Iva/v2 ;
	  break;
	case 2 : 
 	  N20 = xl/a - u2/a * yl/v2 ;
 	  Val->Val[0] = N20 * I1 + Iua/a - u2/a * Iva/v2 ;
	  break;
	case 3 :  
	  N30 = yl/v2 ;
	  Val->Val[0] = N30 * I1 + Iva/v2 ;
	  break;
	}
	break;
      default :
	Message::Error("Unknown Basis Function Type for 'GF_LaplacexForm'");
      }

      Val->Val[0] *= ONE_OVER_FOUR_PI ;
      if (j == 0){ Val->Val[0] /= 2; }
      Val->Type = SCALAR ;
      break ;
    
    default :
      Message::Error("Unknown Element Type (%s) for 'GF_LaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));
    }
    break ;

  default :
    Message::Error("Unknown Dimension (%d) for 'GF_LaplacexForm'", 
	(int)Fct->Para[0]);
    
  }
}

/* ------------------------------------------------------------------------ */
/*  G F _ G r a d L a p l a c e x F o r m                                   */
/* ------------------------------------------------------------------------ */

void GF_GradLaplacexForm(GF_ARGX)
{
  double  xs[MAX_NODES], ys[MAX_NODES], zs[MAX_NODES] ;
  double  xxs, yys, r2, EPS ;
  double  a, b, c, a2, I1, I2 ;
  double  f0[3], f1[3], f2[3], N10, N20, N30 ;
  double  m0[3], m1[3], m2[3], s0[3], s1[3] ;
  double  umf2i, us0, us1, us2, vmf2i, vs0, vs1, vs2 ;
  double  u[3], v[3], n[3], u2, v2, xl, yl, zl, zl_2 ;
  double  area, I[3], Iua[3], Iva[3] ;
  double  s0m, s0p, s1m, s1p, s2m, s2p, t00, t10, t20, t0m_2, t0p_2, t1p_2;
  double  r00_2, r10_2, r20_2,  r00, r10, r20, r0p, r0m, r1p, f20, f21, f22, B0, B1, B2, B ;
  int Type_Int=0 ;

  Val->Val[MAX_DIM] =  Val->Val[MAX_DIM + 1] = Val->Val[MAX_DIM + 2] = 0. ;

  switch ((int)Fct->Para[0]) {
    
  case _2D :
    
    switch (Element->ElementSource->Type) {
      
    case POINT :
      Val->Type = VECTOR ;
      
      if (Element->Num == Element->ElementSource->Num) {
	Val->Val[0] = Val->Val[1] = Val->Val[2] = 0. ;
	return ;
      }
      
      xxs = x - Element->ElementSource->x[0] ;
      yys = y - Element->ElementSource->y[0] ;
      r2 = SQU(xxs)+SQU(yys) ;
      
      if (r2 > EPSILON2) {
	Val->Val[0] = - ONE_OVER_TWO_PI * xxs / r2 ;
	Val->Val[1] = - ONE_OVER_TWO_PI * yys / r2 ;
	Val->Val[2] = 0. ;
      }
      else {
	Val->Val[0] = Val->Val[1] = Val->Val[2] = 0. ;
      }
      break ;
      
    default :
      Message::Error("Unknown Element Type (%s) for 'GF_GradLaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));
    }
    break ;
    
    
  case _3D :
    
    switch (Element->ElementSource->Type) {
      
    case LINE :
      Val->Type = VECTOR ;

      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      zs[0] = Element->ElementSource->z[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      zs[1] = Element->ElementSource->z[1] ;
      
      a = SQU(xs[0]-xs[1]) + SQU(ys[0]-ys[1]) + SQU(zs[0]-zs[1]) ;
      b = 2. * ((x-xs[0])*(xs[0]-xs[1]) + 
		(y-ys[0])*(ys[0]-ys[1]) + 
		(z-zs[0])*(zs[0]-zs[1])) ;
      c = SQU(x-xs[0]) + SQU(y-ys[0]) + SQU(z-zs[0]) + SQU(RADIUS) ;
      
      I1 = 2./(4.*a*c-b*b) * ( (2.*a+b)/sqrt(a+b+c) - b/sqrt(c) ) ;
      I2 = 2./(-4.*a*c+b*b) * ( (2.*c+b)/sqrt(a+b+c) - 2.*sqrt(c) ) ;
      a2 = sqrt(a) ;
      
      Val->Val[0] = ONE_OVER_FOUR_PI * ( (xs[0]-x) * I1 + (xs[1]-xs[0]) * I2 ) * a2 ;
      Val->Val[1] = ONE_OVER_FOUR_PI * ( (ys[0]-y) * I1 + (ys[1]-ys[0]) * I2 ) * a2 ;
      Val->Val[2] = ONE_OVER_FOUR_PI * ( (zs[0]-z) * I1 + (zs[1]-zs[0]) * I2 ) * a2 ;
      break ;

    case TRIANGLE : 
      Val->Type = VECTOR ;

      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      zs[0] = Element->ElementSource->z[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      zs[1] = Element->ElementSource->z[1] ;
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;
      zs[2] = Element->ElementSource->z[2] ;
      

      if(xFunctionBF == (void(*)())BF_Volume) Type_Int = 1 ;
      if(xFunctionBF == (void(*)())BF_Node)   Type_Int = 2 ;

      /* triangle side lengths */
      a = sqrt(SQU(xs[1]-xs[0]) + SQU(ys[1]-ys[0]) +  SQU(zs[1]-zs[0]));
      b = sqrt(SQU(xs[2]-xs[1]) + SQU(ys[2]-ys[1]) +  SQU(zs[2]-zs[1]));
      c = sqrt(SQU(xs[2]-xs[0]) + SQU(ys[2]-ys[0]) +  SQU(zs[2]-zs[0]));
            
      /* local system (u,v,w) centered at (xs[0],ys[0],zs[0]) */
      u[0] = (xs[1]-xs[0])/a;
      u[1] = (ys[1]-ys[0])/a;
      u[2] = (zs[1]-zs[0])/a;
      
      /* triangle normal */
      Geo_CreateNormal(Element->ElementSource->Type,xs,ys,zs,n);

      v[0] = n[1]*u[2]-n[2]*u[1];
      v[1] = n[2]*u[0]-n[0]*u[2];
      v[2] = n[0]*u[1]-n[1]*u[0];
	
      u2 = (xs[2]-xs[0])*u[0] + (ys[2]-ys[0])*u[1] + (zs[2]-zs[0])*u[2]; /* u2 coordinate */
      v2 = (xs[2]-xs[0])*v[0] + (ys[2]-ys[0])*v[1] + (zs[2]-zs[0])*v[2];  /* triangle height, v2 coordinate*/

      /* local coordinates of the observation point (xl, yl, zl)*/ 
      xl = u[0] * (x-xs[0]) +  u[1] * (y-ys[0]) + u[2] * (z-zs[0]);
      yl = v[0] * (x-xs[0]) +  v[1] * (y-ys[0]) + v[2] * (z-zs[0]);
      zl = n[0] * (x-xs[0]) +  n[1] * (y-ys[0]) + n[2] * (z-zs[0]);

      area = a * v2/2 ;/* Triangle area */
      if (!zl) zl = sqrt(area) * 1e-15 ;

      s0m = -( (a-xl) * (a-u2) + yl*v2 ) / b;
      s0p = s0m + b;
      s1p = ( xl * u2 + yl * v2 ) / c;
      s1m = s1p - c;
      s2m = - xl;
      s2p = a - xl;
  
      /* distance observation point projection on triangle plane to triangle local vertices*/
      t00 = (yl * (u2-a) + v2 * (a-xl)) / b;
      t10 = (xl * v2 - yl * u2) / c;
      t20 = yl;

      t0m_2 = ((a-xl)*(a-xl) + yl*yl); 
      t0p_2 = ((u2-xl)*(u2-xl) + (v2-yl)*(v2-yl)); 
      t1p_2 = (xl*xl + yl*yl);
      
      /* minimum distances^2 from the observation point to each triangle side*/
      zl_2 = SQU(zl) ;
      r00_2 = SQU(t00) + zl_2 ;
      r10_2 = SQU(t10) + zl_2 ;
      r20_2 = SQU(t20) + zl_2 ;
     
      r00 = sqrt(r00_2);
      r10 = sqrt(r10_2);
      r20 = sqrt(r20_2);

      /* distances from observation point to the vertices*/
      r0p = sqrt(t0p_2 + zl_2);      
      r0m = sqrt(t0m_2 + zl_2);
      r1p = sqrt(t1p_2 + zl_2);
      
      EPS = EPSILON*(fabs(s0m)+fabs(s0p));

      B0 = (r00 <= EPS) ? 0. : atan(t00*s0p/(r00_2+fabs(zl)*r0p))-atan(t00*s0m/(r00_2+fabs(zl)*r0m));
      f20 = ((r0m + s0m) <= EPS) ? log(s0m/s0p) : log((r0p + s0p) / (r0m + s0m)) ;

      EPS = EPSILON*(fabs(s1m)+fabs(s1p)) ; 
      B1 = (r10 <=EPS) ? 0. : atan(t10*s1p/(r10_2+fabs(zl)*r1p))-atan(t10*s1m/(r10_2+fabs(zl)*r0p));
      f21 = ((r0p + s1m)<=EPS) ? log(s1m/s1p) : log((r1p + s1p) / (r0p + s1m));

      EPS = EPSILON*(fabs(s2m)+fabs(s2p)) ; 
      B2 =  (r20 <= EPS) ? 0. : atan(t20*s2p/(r20_2+fabs(zl)*r0m))-atan(t20*s2m/(r20_2+fabs(zl)*r1p));
      f22 = ((r1p + s2m)< EPS) ? log(s2m/s2p): log((r0m + s2p) / (r1p + s2m));
      
      B = B0 + B1 + B2 ; 

      s0[0] = (xs[2] - xs[1])/b ;
      s0[1] = (ys[2] - ys[1])/b ;
      s0[2] = (zs[2] - zs[1])/b ;

      s1[0] = (xs[0] - xs[2])/c ;
      s1[1] = (ys[0] - ys[2])/c ;
      s1[2] = (zs[0] - zs[2])/c ;

      m0[0] = s0[1] * n[2] - s0[2]* n[1] ;
      m0[1] = s0[2] * n[0] - s0[0]* n[2] ;
      m0[2] = s0[0] * n[1] - s0[1]* n[0] ;

      m1[0] = s1[1]* n[2] - s1[2] * n[1] ;
      m1[1] = s1[2]* n[0] - s1[0] * n[2] ;
      m1[2] = s1[0]* n[1] - s1[1] * n[0] ;
      
      m2[0] = u[1] * n[2] - u[2]* n[1] ;
      m2[1] = u[2] * n[0] - u[0]* n[2] ;
      m2[2] = u[0] * n[1] - u[1]* n[0] ;

      /* Grad(1/r) integral solution*/
      I[0] = -n[0] * THESIGN(zl) * B - (m0[0]*f20 + m1[0]*f21 + m2[0]*f22) ; 
      I[1] = -n[1] * THESIGN(zl) * B - (m0[1]*f20 + m1[1]*f21 + m2[1]*f22) ;
      I[2] = -n[2] * THESIGN(zl) * B - (m0[2]*f20 + m1[2]*f21 + m2[2]*f22) ;

      switch ( Type_Int ){
      case 1 : /* BF_Volume */	
	Val->Val[0] = I[0]/area ; 	
	Val->Val[1] = I[1]/area ; 	
	Val->Val[2] = I[2]/area ; 	
	break;
    
      case 2 : /* BF_Node */
	if (!v2 ) 	
	  Message::Error("1/0 in GF_LaplacexForm (case _3D TRIANGLE) v2 %e", v2);

	f0[0] = s0[0] * t00 * f20 - m0[0]*(r0p-r0m) ; /* fi */
	f0[1] = s0[1] * t00 * f20 - m0[1]*(r0p-r0m) ;
	f0[2] = s0[2] * t00 * f20 - m0[2]*(r0p-r0m) ;

	f1[0] = s1[0] * t10 * f21 - m1[0]*(r1p-r0p) ;
	f1[1] = s1[1] * t10 * f21 - m1[1]*(r1p-r0p) ;
	f1[2] = s1[2] * t10 * f21 - m1[2]*(r1p-r0p) ;

	f2[0] = u[0] * t20 * f22 - m2[0]*(r0m-r1p) ;
	f2[1] = u[1] * t20 * f22 - m2[1]*(r0m-r1p) ;
	f2[2] = u[2] * t20 * f22 - m2[2]*(r0m-r1p) ;  

	umf2i = u[0]*(m0[0]*f20 + m1[0]*f21 + m2[0]*f22) +
	        u[1]*(m0[1]*f20 + m1[1]*f21 + m2[1]*f22) + 
	        u[2]*(m0[2]*f20 + m1[2]*f21 + m2[2]*f22) ;

	us0 = u[0] * s0[0] + u[1] * s0[1] + u[2] * s0[2] ; 
	us1 = u[0] * s1[0] + u[1] * s1[1] + u[2] * s1[2] ; 
	us2 = u[0] *  u[0] + u[1] *  u[1] + u[2] *  u[2] ; 

	vmf2i = v[0]*(m0[0]*f20 + m1[0]*f21 + m2[0]*f22) + 
	        v[1]*(m0[1]*f20 + m1[1]*f21 + m2[1]*f22) + 
	        v[2]*(m0[2]*f20 + m1[2]*f21 + m2[2]*f22) ;

	vs0 = v[0] * s0[0] + v[1] * s0[1] + v[2] * s0[2] ; 
	vs1 = v[0] * s1[0] + v[1] * s1[1] + v[2] * s1[2] ; 
	vs2 = v[0] *  u[0] + v[1] *  u[1] + v[2] *  u[2] ; 

	B *= fabs(zl);
	umf2i *= zl ;
	vmf2i *= zl ;

	Iua[0] = n[0] * umf2i - B * u[0] + f0[0] * us0 + f1[0] * us1 + f2[0] * us2 ;
	Iua[1] = n[1] * umf2i - B * u[1] + f0[1] * us0 + f1[1] * us1 + f2[1] * us2 ;
	Iua[2] = n[2] * umf2i - B * u[2] + f0[2] * us0 + f1[2] * us1 + f2[2] * us2 ;
	
	Iva[0] = n[0] * vmf2i - B * v[0] + f0[0] * vs0 + f1[0] * vs1 + f2[0] * vs2 ;
	Iva[1] = n[1] * vmf2i - B * v[1] + f0[1] * vs0 + f1[1] * vs1 + f2[1] * vs2 ;
	Iva[2] = n[2] * vmf2i - B * v[2] + f0[2] * vs0 + f1[2] * vs1 + f2[2] * vs2 ;
	
	switch(EntityNum){
	case 1 :  
	  N10 = 1 - xl/a + (u2/a -1) * yl/v2 ;
	  Val->Val[0] = N10 * I[0]  - Iua[0]/a + (u2/a-1) * Iva[0]/v2 ;
	  Val->Val[1] = N10 * I[1]  - Iua[1]/a + (u2/a-1) * Iva[1]/v2 ;
	  Val->Val[2] = N10 * I[2]  - Iua[2]/a + (u2/a-1) * Iva[2]/v2 ;
	  break;
	case 2 : 
	  N20 = xl/a - u2/a * yl/v2 ;
	  Val->Val[0] = N20 * I[0] + Iua[0]/a - u2/a * Iva[0]/v2 ;
	  Val->Val[1] = N20 * I[1] + Iua[1]/a - u2/a * Iva[1]/v2 ;
	  Val->Val[2] = N20 * I[2] + Iua[2]/a - u2/a * Iva[2]/v2 ;
	  break;
	case 3 :  
	  N30 = yl/v2 ;
	  Val->Val[0] = N30 * I[0] + Iva[0]/v2 ;
	  Val->Val[1] = N30 * I[1] + Iva[1]/v2 ;
	  Val->Val[2] = N30 * I[2] + Iva[2]/v2 ;
	  break;
	}
	break;
      }
      
      Val->Val[0] *= ONE_OVER_FOUR_PI ;
      Val->Val[1] *= ONE_OVER_FOUR_PI ;
      Val->Val[2] *= ONE_OVER_FOUR_PI ;      
      break ;
      
    default :
      Message::Error("Unknown Element Type (%s) for 'GF_GradLaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));
    }
    break ;
    
  default :
    Message::Error("Unknown Dimension (%d) for 'GF_GradLaplacexForm'",
	(int)Fct->Para[0]);
    
  }
}

/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d L a p l a c e x F o r m                             */
/* ------------------------------------------------------------------------ */

void GF_NPxGradLaplacexForm(GF_ARGX)
{
  double  xs[MAX_NODES], ys[MAX_NODES] ;
  double  xp[MAX_NODES], yp[MAX_NODES], N[3] ;
  int     Type_Int;
  double  a, b, c, d, m, n, Jp, i1, Is, I1=0 ;
  struct Value ValGrad ;

  Val->Type = SCALAR ;
  Val->Val[MAX_DIM] = 0.0 ;
  
  if (Element->Num == Element->ElementSource->Num) {
    Val->Val[0] = 0.0 ;
    return ;
  }
  
  switch ((int)Fct->Para[0]) {
    
  case _2D : 

    switch (Element->ElementSource->Type) {

    case LINE :	  
      if (Element->Type != LINE)
	Message::Error("GF_NPxGradLaplacexForm not ready for mixed geometrical elements");

      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      
      if(xFunctionBF == (void(*)())BF_Volume) {
	if ((x == xs[0]) && (y == ys[0]))
	  Type_Int = 1 ; 
	else if ((x == xs[1]) && (y == ys[1]))
	  Type_Int = 2 ; 
	else                                    
	  Type_Int = 3 ; 
	
	xp[0] = Element->x[0] ; yp[0] = Element->y[0] ;
	xp[1] = Element->x[1] ; yp[1] = Element->y[1] ;
	
	a = SQU(xs[0]-xs[1]) + SQU(ys[0]-ys[1]) ;
	b = 2. * ((x-xs[0]) * (xs[0]-xs[1]) + (y-ys[0]) * (ys[0]-ys[1])) ;
	c = SQU(x-xs[0]) + SQU(y-ys[0]) ;     	
	d = 4.*a*c - b*b ;
	
	switch (Type_Int) {	  
	case 1 :  
	case 2 :  
	  Message::Error("Degenerate case not done in 'GF_NPxGradLaplacexForm'");
	  break ;	
	case 3 :  
	  if (fabs(d) < EPSILON2) {
	    I1 = 0.0 ;
	  }
	  else {
	    if(d<0) Message::Error("Unexpected value in 'GF_NPxGradLaplacexForm'");
	    i1 = sqrt(d) ;
	    Is = 2. / i1 * (atan((2.*a+b)/i1) -  atan(b/i1)) ;
	    Jp = sqrt(SQU(xp[0]-xp[1])+SQU(yp[0]-yp[1])) ;
	    m = ((ys[0]-ys[1]) * (xp[0]-xp[1]) + (xs[0]-xs[1]) * (yp[1]-yp[0])) / Jp ;
	    n = ((yp[1]-yp[0]) * (x-xs[0]) + (xp[0]-xp[1]) * (y-ys[0])) / Jp ; 	
	    I1 = m /(2.*a) * log((a+b)/c+1.) + (n - m*b/(2.*a)) * Is ;	   
	  }
	  break ;
	}
	Val->Val[0] = - ONE_OVER_TWO_PI * I1 ; 
      }
      else {	
	Message::Error("Unknown Basis Function Type for 'GF_NPxGradLaplacexForm'");
      }
      break ;

    default :
      Message::Error("Unknown Element Type (%s) for 'GF_NPxGradLaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));     
    }
    break ;

  case _3D:
    switch (Element->ElementSource->Type) {
    case TRIANGLE :
      Geo_CreateNormal(Element->Type,
		       Element->x,Element->y,Element->z, N);

      GF_GradLaplacexForm(Element, Fct, xFunctionBF, EntityNum, x, y, z, &ValGrad) ;

      Val->Val[0] = N[0]*ValGrad.Val[0] + N[1]*ValGrad.Val[1] + N[2]*ValGrad.Val[2] ;
      break ;
    default :
      Message::Error("Unknown Element Type (%s) for 'GF_NPxGradLaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));  
    }
    break ;

  default :
    Message::Error("Unknown Dimension (%d) for 'GF_NPxGradLaplacexForm'",
	(int)Fct->Para[0]);
  }
}



/* ------------------------------------------------------------------------ */
/*  G F _ N S x G r a d L a p l a c e x F o r m                             */
/* ------------------------------------------------------------------------ */

void GF_NSxGradLaplacexForm(GF_ARGX)
{
  Message::Error("Not done: 'GF_NSxGradLaplacexForm'");
}

/* ------------------------------------------------------------------------ */
/*  G F _ A p p r o x i m a t e L a p l a c e x F o r m                     */
/* ------------------------------------------------------------------------ */

void GF_ApproximateLaplacexForm(GF_ARGX)
{
  switch ((int)Fct->Para[1]) {

  case 0 :
    GF_LaplacexForm(Element, Fct, (void(*)())BF_Volume, 1, x, y, z, Val);
    break ;

  default :
    Message::Error("Bad Parameter Value in 'GF_ApproximateLaplacexForm'");
    break;

  }
}
