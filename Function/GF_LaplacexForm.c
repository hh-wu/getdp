/* $Id: GF_LaplacexForm.c,v 1.2 2000-09-07 18:47:23 geuzaine Exp $ */
#include <stdio.h>
#include <math.h>

#include "Data_Active.h"
#include "BF_Function.h"

#include "CurrentData.h"
#include "Data_Numeric.h"
#include "Data_DefineE.h"

#include "Numeric_F.h"


#define F_ARG2						\
  struct Element * Element, struct Function * Fct,	\
  void  (*xFunctionBF) (), int NumEntity, 		\
  double x, double y, double z, struct Value * Val

#define CAST  void(*)()

#define MAX_NODES        6 
#define EPSILON          1.e-10
#define EPSILON2         1.e-20

/* this is a hack... */
#define RADIUS           0.154797 


/* ------------------------------------------------------------------------ */
/*  G F _ L a p l a c e x F o r m                                           */
/* ------------------------------------------------------------------------ */

void GF_LaplacexForm (F_ARG2) {
  
  double   xs[MAX_NODES], ys[MAX_NODES], zs[MAX_NODES] ;
  int      Type_Int ;
  double   a, b, c, d, e, f, i1,  I1, r2 ;
  double   DetJ, valr, vali ;
  
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

      if(xFunctionBF == (CAST)BF_Volume) {      
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
	Msg(ERROR, "Unknown Basis Function Type for 'GF_LaplacexForm'");
      }
      break ;
      
      
    case TRIANGLE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;

      if(xFunctionBF == NULL) {
	clt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);	
	DetJ = (xs[2]-xs[0]) * (ys[1]-ys[0]) - (xs[1]-xs[0]) * (ys[2]-ys[0]) ;
	Val->Type = SCALAR ;
	Val->Val[0] = valr * DetJ ;
      }
      else if(xFunctionBF == (CAST)BF_Volume) {
	clt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);
	Val->Type = SCALAR ;
	Val->Val[0] = valr * 2  /*  *DetJ/DetJ  */ ; 
      }
      else if(xFunctionBF == (CAST)BF_Node) {
	switch(NumEntity){
	case 1 : clt2dl_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali); break;
	case 2 : clt2dl_(&x,&y,&xs[1],&xs[2],&xs[0],&ys[1],&ys[2],&ys[0],&valr,&vali); break;
	case 3 : clt2dl_(&x,&y,&xs[2],&xs[0],&xs[1],&ys[2],&ys[0],&ys[1],&valr,&vali); break;
	}
	DetJ = (xs[2]-xs[0]) * (ys[1]-ys[0]) - (xs[1]-xs[0]) * (ys[2]-ys[0]) ;
	Val->Type = SCALAR ;
	Val->Val[0] = valr * DetJ ; 
      }
      else{
	Msg(ERROR, "Unknown Basis Function Type for 'GF_LaplacexForm'");
      }
      break ;


    case QUADRANGLE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;
      xs[3] = Element->ElementSource->x[3] ; ys[3] = Element->ElementSource->y[3] ;
      
      if(xFunctionBF == NULL) {
	clt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);
	DetJ = (xs[2]-xs[0]) * (ys[1]-ys[0]) - (xs[1]-xs[0]) * (ys[2]-ys[0]) ;
	Val->Val[0] = valr * DetJ ; 
	clt2d_(&x,&y,&xs[0],&xs[2],&xs[3],&ys[0],&ys[2],&ys[3],&valr,&vali);
	DetJ = (xs[3]-xs[0]) * (ys[2]-ys[0]) - (xs[2]-xs[0]) * (ys[3]-ys[0]) ;
	Val->Val[0] += valr * DetJ ;       
	Val->Type = SCALAR ;
      }
      else if(xFunctionBF == (CAST)BF_Volume) {
	clt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);
	Val->Val[0] = valr * 2  /*  *DetJ/DetJ  */ ; 
	clt2d_(&x,&y,&xs[0],&xs[2],&xs[3],&ys[0],&ys[2],&ys[3],&valr,&vali);
	Val->Val[0] += valr * 2  /*  *DetJ/DetJ  */ ; 
	Val->Type = SCALAR ;
      }
      else{
	Msg(ERROR, "Unknown Basis Function Type for 'GF_LaplacexForm'");
      }
      break ;
      
    default :
      Msg(ERROR, "Unknown Element Type (%s) for 'GF_LaplacexForm'",
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
      
    default :
      Msg(ERROR, "Unknown Element Type (%s) for 'GF_LaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));
    }
    
    break ;
    
  default :
    Msg(ERROR, "Unknown Dimension (%d) for 'GF_LaplacexForm'", 
	(int)Fct->Para[0]);
    
  }
  
}



/* ------------------------------------------------------------------------ */
/*  G F _ G r a d L a p l a c e x F o r m                                   */
/* ------------------------------------------------------------------------ */

void GF_GradLaplacexForm (F_ARG2) {
  
  double  xs[MAX_NODES], ys[MAX_NODES], zs[MAX_NODES] ;
  double  xxs, yys, r2 ;
  double  a,b,c, a2, I1, I2 ;
  double  mx, my, valr, vali, DetJ ;
  

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
      
    case TRIANGLE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;

      if(xFunctionBF == NULL) {
	cglt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);
	Val->Type = VECTOR ;
	Val->Val[0] = valr ;
	Val->Val[1] = vali ;
	Val->Val[2] = 0. ;
      }
      if(xFunctionBF == (CAST)BF_GradNode) {
	DetJ = (xs[2]-xs[0]) * (ys[1]-ys[0]) - (xs[1]-xs[0]) * (ys[2]-ys[0]) ;
	switch(NumEntity){
	case 1 : mx = (ys[2]-ys[1])/DetJ ; my = (xs[1]-xs[2])/DetJ ; break;
	case 2 : mx = (ys[0]-ys[2])/DetJ ; my = (xs[2]-xs[0])/DetJ ; break;
	case 3 : mx = (ys[1]-ys[0])/DetJ ; my = (xs[0]-xs[1])/DetJ ; break;
	}
	cglt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);
	Val->Type = SCALAR ;
	Val->Val[0] = my*valr - mx*vali ; 
      }
      else{
	Msg(ERROR, "Unknown Basis Function Type for 'GF_GradLaplacexForm'");
      }
      break ;

    default :
      Msg(ERROR, "Unknown Element Type (%s) for 'GF_GradLaplacexForm'",
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
      
    default :
      Msg(ERROR, "Unknown Element Type (%s) for 'GF_GradLaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));
    }
    break ;
    
  default :
    Msg(ERROR, "Unknown Dimension (%d) for 'GF_GradLaplacexForm'",
	(int)Fct->Para[0]);
    
  }
}


/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d L a p l a c e x F o r m                             */
/* ------------------------------------------------------------------------ */

void GF_NPxGradLaplacexForm (F_ARG2) {

  double  xs[MAX_NODES], ys[MAX_NODES] ;
  double  xp[MAX_NODES], yp[MAX_NODES] ;
  int     Type_Int;
  double  a, b, c, d, m, n, Jp, i1, Is, I1 ;

  Val->Type = SCALAR ;

  if (Element->Num == Element->ElementSource->Num) {
    Val->Val[0] = 0.0 ;  
    return ;
  }
  
  switch ((int)Fct->Para[0]) {
    
  case _2D : 

    switch (Element->ElementSource->Type) {

    case LINE :	  
      if (Element->Type != LINE)
	Msg(ERROR, "GF_NPxGradLaplacexForm not ready for mixed geometrical elements");

      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      
      if(xFunctionBF == (CAST)BF_Volume) {
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
	  Msg(ERROR, "Degenerate case not done in 'GF_NPxGradLaplacexForm'");
	  break ;	
	case 3 :  
	  if (fabs(d) < EPSILON) {
	    I1 = 0.0 ;
	  }
	  else {
	    if(d<0) Msg(ERROR, "Unexpected value in 'GF_NPxGradLaplacexForm'");
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
	Msg(ERROR, "Unknown Basis Function Type for 'GF_NPxGradLaplacexForm'");
      }
      break ;

    default :
      Msg(ERROR, "Unknown Element Type (%s) for 'GF_NPxGradLaplacexForm'",
	  Get_StringForDefine(Element_Type, Element->ElementSource->Type));     
    }
    break ;


  default :
    Msg(ERROR, "Unknown Dimension (%d) for 'GF_NPxGradLaplacexForm'",
	(int)Fct->Para[0]);
  }
  
}



/* ------------------------------------------------------------------------ */
/*  G F _ N S x G r a d L a p l a c e x F o r m                             */
/* ------------------------------------------------------------------------ */

void GF_NSxGradLaplacexForm (F_ARG2) {
    
    Msg(ERROR, "Not done: 'GF_NSxGradLaplacexForm'");
  
}


/* ------------------------------------------------------------------------ */
/*  G F _ A p p r o x i m a t e L a p l a c e x F o r m                     */
/* ------------------------------------------------------------------------ */

void GF_ApproximateLaplacexForm (F_ARG2) {

  switch ((int)Fct->Para[1]) {

  case 0 :
    GF_LaplacexForm(Element, Fct, (CAST)BF_Volume, 1, x, y, z, Val);
    break ;

  default :
    Msg(ERROR, "Bad Parameter Value in 'GF_ApproximateLaplacexForm'");
    break;

  }

}


#undef F_ARG2
#undef CAST
