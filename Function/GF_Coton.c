#define RCSID "$Id: GF_Coton.c,v 1.5 2003-03-18 00:55:27 geuzaine Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h" 
#include "Data_Active.h"
#include "BF_Function.h"
#include "CurrentData.h"
#include "Numeric.h"
#include "Numeric_F.h"


#define F_ARG2 								\
  struct Element * Element, struct IntegralQuantityActive * IQA,	\
  void  (*xFunctionBF) (struct Element * Element, int NumEntity, 	\
			double u, double v, double w, double Value[]),	\
  int NumEntity, double x, double y, double z, struct Value * Val




#define NbrMaxSegm       6
#define Zero_Tolerance   1.e-10
#define Zero_Tolerance2  1.e-20
#define Radius           0.154797 /* Bricolage ... */


/* Des que j'ai un peu le temps, je supprimme cette horreur, qui de toute 
   facon ne marche pas */

/*---------------------------------------------------------------------*/
/*  F a c t e u r _ 3 D                                                */
/*---------------------------------------------------------------------*/

void Facteur_3D (int NbrSegm, int SigneInt[NbrMaxSegm],
		 double xyzp[3], double xp[NbrMaxSegm], double yp[NbrMaxSegm],
		 double zp[NbrMaxSegm],
		 double Np_rel[3][NbrMaxSegm],
		 double Xq[NbrMaxSegm],
		 double Yq[NbrMaxSegm], double Zq[NbrMaxSegm],
		 double A[NbrMaxSegm], double B[NbrMaxSegm],
		 double *Ci, double F[NbrMaxSegm] , double
		 Dac[NbrMaxSegm], double Dabc[NbrMaxSegm],
		 double Dab_fc[NbrMaxSegm] , double *Aire) 
{
    
    int i, j ;
    double Planq[4], Planp[3], bin, VectInt[3], VectBin[3] ;
    
    Planq[0]=(Yq[1]-Yq[0])*(Zq[2]-Zq[0]) - (Yq[2]-Yq[0])*(Zq[1]-Zq[0]);
    Planq[1]=(Zq[1]-Zq[0])*(Xq[2]-Xq[0]) - (Zq[2]-Zq[0])*(Xq[1]-Xq[0]);
    Planq[2]=(Xq[1]-Xq[0])*(Yq[2]-Yq[0]) - (Xq[2]-Xq[0])*(Yq[1]-Yq[0]);
    
    bin = sqrt( DSQU(Planq[0])+DSQU(Planq[1])+DSQU(Planq[2]) ) ;
    *Aire =  bin / 2.;
    
    Planq[0] = Planq[0] / bin ;
    Planq[1] = Planq[1] / bin ;
    Planq[2] = Planq[2] / bin ;
    Planq[3]= -( Planq[0]*Xq[0] + Planq[1]*Yq[0] + Planq[2]*Zq[0] );
    
    /* equation du plan du triangle :
       Planq[0]*x+Planq[1]*y+Planq[2]*z+Planq[3]=0  */

    Planp[0]=(yp[1]-yp[0])*(zp[2]-zp[0]) - (yp[2]-yp[0])*(zp[1]-zp[0]);
    Planp[1]=(zp[1]-zp[0])*(xp[2]-xp[0]) - (zp[2]-zp[0])*(xp[1]-xp[0]);
    Planp[2]=(xp[1]-xp[0])*(yp[2]-yp[0]) - (xp[2]-xp[0])*(yp[1]-yp[0]);
    bin = sqrt( DSQU(Planp[0])+DSQU(Planp[1])+DSQU(Planp[2]) ) ;
    Planp[0] = Planp[0] / bin ;
    Planp[1] = Planp[1] / bin ;
    Planp[2] = Planp[2] / bin ;
    
    *Ci = Planq[0]*xyzp[0]+Planq[1]*xyzp[1]+Planq[2]*xyzp[2]+Planq[3] ;
    
    
    for ( i=0 ; i<NbrSegm ; i++) {
	j=i+1;
	if ( j==NbrSegm ) j=0 ;
	
	bin =  sqrt( (Xq[i]-Xq[j])*(Xq[i]-Xq[j]) 
		    + (Yq[i]-Yq[j])*(Yq[i]-Yq[j]) 
		    + (Zq[i]-Zq[j])*(Zq[i]-Zq[j]) ) ;
	
	/* REMARQUE ici, B[i]  est < ou > 0 */
	
	B[i] = ( (xyzp[0]-Xq[i])*(Xq[j]-Xq[i]) 
		+ (xyzp[1]-Yq[i])*(Yq[j]-Yq[i])
		+ (xyzp[2]-Zq[i])*(Zq[j]-Zq[i]) ) / bin ;
	
	F[i] =bin;
	
	bin = (xyzp[0]-Xq[i])*(xyzp[0]-Xq[i]) 
	  + (xyzp[1]-Yq[i])*(xyzp[1]-Yq[i])
	    + (xyzp[2]-Zq[i])*(xyzp[2]-Zq[i]) ;
	Dabc[i] = sqrt(bin);
	Dac[i] = sqrt( bin-B[i]*B[i] ) ; 
	A[i] = sqrt( bin - ( B[i]*B[i] + *Ci * *Ci )  ) ;
	Dab_fc[i] = sqrt( Dac[i]*Dac[i] + (F[i]-B[i])*(F[i]-B[i]) ) ;
	
	VectInt[0] = Planq[1]*(Zq[j]-Zq[i]) - Planq[2]*(Yq[j]-Yq[i]) ;
	VectInt[1] = - Planq[0]*(Zq[j]-Zq[i]) + Planq[2]*(Xq[j]-Xq[i]) ;
	VectInt[2] = Planq[0]*(Yq[j]-Yq[i]) - Planq[1]*(Xq[j]-Xq[i]) ;
	
	bin = ( VectInt[0]*(xyzp[0]-*Ci*Planq[0]-Xq[i])
	       + VectInt[1]*(xyzp[1]-*Ci*Planq[1]-Yq[i])
	       + VectInt[2]*(xyzp[2]-*Ci*Planq[2]-Zq[i]) )  ;
	
	if ( bin > Zero_Tolerance )  SigneInt[i]=1;
	else if ( bin < -Zero_Tolerance ) SigneInt[i]=-1 ;
	else SigneInt[i] = 0 ;
	
	VectBin[0]= -SigneInt[i]*(Planq[1]*VectInt[2]-Planq[2]*VectInt[1]) ; 
	VectBin[1]= -SigneInt[i]*(Planq[2]*VectInt[0]-Planq[0]*VectInt[2]) ; 
	VectBin[2]= -SigneInt[i]*(Planq[0]*VectInt[1]-Planq[1]*VectInt[0]) ; 
	
	Np_rel[0][i]=Planp[0]*Planq[0]+Planp[1]*Planq[1]
	  +Planp[2]*Planq[2];    
	Np_rel[1][i]=Planp[0]*VectInt[0]+Planp[1]*VectInt[1]
	  +Planp[2]*VectInt[2];    
	Np_rel[2][i]=Planp[0]*VectBin[0]+Planp[1]*VectBin[1]
	  +Planp[2]*VectBin[2];    
    
    } /* for i */
    
} 


/* ------------------------------------------------------------------------ */
/*  G F _ L a p l a c e x F o r m                                           */
/* ------------------------------------------------------------------------ */

void GF_LaplacexForm (F_ARG2) {
  
  double  xs[NbrMaxSegm], ys[NbrMaxSegm], zs[NbrMaxSegm] ;
  double  xp[NbrMaxSegm], yp[NbrMaxSegm], zp[NbrMaxSegm] ;
  int     i, Type_Int ;
  double  a, b, c, d, e, f, i1, i2, i3, i4, i5, Is, I1, r2 ;
  
  int   SigneInt[NbrMaxSegm], NbrSegm ;
  double IntSegm[NbrMaxSegm], A[NbrMaxSegm], B[NbrMaxSegm], C;
  double F[NbrMaxSegm], Dac[NbrMaxSegm], Dabc[NbrMaxSegm];
  double Dab_fc[NbrMaxSegm], xyzp[3], Aire;
  double Xq[NbrMaxSegm], Yq[NbrMaxSegm], Zq[NbrMaxSegm] ;
  double Np_rel[3][NbrMaxSegm] ;
  
  double  DetJ, valr, vali ;
  
  switch (IQA->Type_Dimension) {
    
  case _2D : 
    
    switch (Element->ElementSource->Type) {
      
    case POINT :      
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;

      r2 = DSQU(x-xs[0])+DSQU(y-ys[0]) ;
      if (r2 > DSQU(Radius)){
	Val->Type = SCALAR ;
	Val->Val[0] = - ONE_OVER_FOUR_PI * log(r2) ;
      }
      else{
	Val->Type = SCALAR ;
	Val->Val[0] = - ONE_OVER_FOUR_PI * log(DSQU(Radius)) ;
      }
      break ;
     
    case LINE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      
      a = DSQU(xs[0]-xs[1]) + DSQU(ys[0]-ys[1]) ;
      b = 2. * ((x-xs[0])*(xs[0]-xs[1]) + (y-ys[0])*(ys[0]-ys[1])) ;
      c = DSQU(x-xs[0]) + DSQU(y-ys[0]) ;     
      d = 0.5 * b / a ;  
      e = c / a ;  
      f = e - d*d ;
      
      if      (f > Zero_Tolerance)      { Type_Int = 1; }
      else if (fabs(f) < Zero_Tolerance){ Type_Int = 0; }
      else                              { Type_Int = -1; f = -f; }

      if ((c == 0) || ((b == -2*a) && (c == a)))  Type_Int = 3 ;
      if (Element->Num == Element->ElementSource->Num)  Type_Int = 2 ;
      
      if(xFunctionBF == BF_Volume) {
	switch (Type_Int) {   
	case -1 :	
	  I1 = log(a) + 
	    ( (d+1.) * log(DSQU(d+1.) - f) - 2.*(d+1.) + 
	      sqrt(f) * log((d+1.+sqrt(f))/(d+1.-sqrt(f))) ) -
	    ( d*log(d*d-f) - 2.*d + sqrt(f)*log((d+sqrt(f))/(d-sqrt(f))) ) ;
	  break ;
	case 0 :
	  I1 = log(a) + (d+1.)*log(DSQU(d+1.)) - d*log(DSQU(d)) - 2. ; 
	  break ;      	    
	case 1 :
	  I1 = log(a) + 
	    ( (d+1.) * log(DSQU(d+1.) + f) - 2.*(d+1.) + 
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
	Msg(ERROR, "Unknown Basis Function Type for GF_LaplacexForm");
      }
      break ;
      
      
    case TRIANGLE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;

      if(xFunctionBF == BF_Volume) {
	DetJ = (xs[2]-xs[0]) * (ys[1]-ys[0]) - (xs[1]-xs[0]) * (ys[2]-ys[0]) ;
	clt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);
	Val->Type = SCALAR ;
	Val->Val[0] = valr*DetJ/2. ; 
      }
      else if(xFunctionBF == BF_Node) {
	switch(NumEntity){
	case 1 : clt2dl_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali); break;
	case 2 : clt2dl_(&x,&y,&xs[1],&xs[2],&xs[0],&ys[1],&ys[2],&ys[0],&valr,&vali); break;
	case 3 : clt2dl_(&x,&y,&xs[2],&xs[0],&xs[1],&ys[2],&ys[0],&ys[1],&valr,&vali); break;
	}
	Val->Type = SCALAR ;
	Val->Val[0] = valr ; 
      }
      else{
	Msg(ERROR, "Unknown Basis Function Type for GF_GradLaplacexForm");
      }
      break ;


    case QUADRANGLE :
      /* !!! pas de test expres : approx IO */
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;
      xs[3] = Element->ElementSource->x[3] ; ys[3] = Element->ElementSource->y[3] ;
      
      DetJ = ( (xs[2]-xs[0]) * (ys[1]-ys[0]) - (xs[1]-xs[0]) * (ys[2]-ys[0]) ) /2. ;
      clt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&valr,&vali);
      Val->Val[0] = valr*DetJ ; 
      
      DetJ = ( (xs[3]-xs[0]) * (ys[2]-ys[0]) - (xs[2]-xs[0]) * (ys[3]-ys[0]) ) /2. ;
      clt2d_(&x,&y,&xs[0],&xs[2],&xs[3],&ys[0],&ys[2],&ys[3],&valr,&vali);
      Val->Val[0] += valr*DetJ ; 
      
      Val->Type = SCALAR ;
      break ;
      
    default :
      Msg(ERROR, "Unknown Element Type for GF_LaplacexForm");
      break;
    }
    
    break;
    


  case _3D :
    
    switch (Element->ElementSource->Type) {
      
    case LINE :
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      zs[0] = Element->ElementSource->z[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      zs[1] = Element->ElementSource->z[1] ;
      
      a = DSQU(xs[0]-xs[1]) + DSQU(ys[0]-ys[1]) + DSQU(zs[0]-zs[1]) ;
      b = 2. * ((x-xs[0])*(xs[0]-xs[1]) + (y-ys[0])*(ys[0]-ys[1]) + 
		(z-zs[0])*(zs[0]-zs[1])) ;
      c = DSQU(x-xs[0]) + DSQU(y-ys[0]) + DSQU(z-zs[0]) ;
      
      c += DSQU(Radius) ;
      
      Val->Val[0] = ONE_OVER_FOUR_PI *
	log( ( 2.*sqrt(a*(a+b+c))+2.*a+b ) / ( 2.*sqrt(a*c)+b ) ) ;
      Val->Type = SCALAR ;
      break ;
      
    case TRIANGLE :	  
      NbrSegm=3;
      
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      zs[0] = Element->ElementSource->z[0] ;
      
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      zs[1] = Element->ElementSource->z[1] ;
      
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;
      zs[2] = Element->ElementSource->z[2] ;
      
      if(xFunctionBF == BF_Volume) {
	
	xyzp[0] = x ;  xyzp[1] = y ; xyzp[2] = z ;
	
	Facteur_3D (NbrSegm, SigneInt, xyzp, xp, yp, zp, Np_rel,
		    xs, ys, zs, A, B, &C, F, 
		    Dac, Dabc, Dab_fc, &Aire) ;
	
	Val->Val[0] = 0;
	C = fabs(C);
	for (i=0 ; i<NbrSegm ; i++) {
	  
	  if (F[i]-B[i] < 0)  i1 = -1 ;
	  else if (F[i] == B[i])  i1 = 0 ;
	  else  i1 = 1 ;
	  
	  if (B[i] >= 0){
	    if (C < Zero_Tolerance)  Type_Int=2 ;  
	    else  Type_Int=3 ;
	  }
	  else { 
	    B[i]=fabs(B[i]);
	    if (C < Zero_Tolerance)  Type_Int=4 ;  
	    else  Type_Int=5 ; 
	  }
	  
	  if (A[i] < Zero_Tolerance)  Type_Int=1 ;
	  
	  switch (Type_Int){
	  case 1:
	    IntSegm[i]=0;
	    break;
	  case 2:
	    IntSegm[i]= i1*A[i]*log( (fabs(F[i]-B[i])+Dab_fc[i])/Dac[i] ) 
	      + A[i]*log( (B[i]+Dabc[i])/Dac[i] );
	    break;
	  case 3:
	    IntSegm[i]= i1 *(A[i]*log(( fabs(F[i]-B[i])+Dab_fc[i])/Dac[i] )
			     - C*atan( A[i]*fabs(F[i]-B[i])/(DSQU(Dac[i])
							     +C*Dab_fc[i]) ) )
	      +  A[i]*log( (B[i]+Dabc[i])/Dac[i] )
	      - C*atan( A[i]*B[i] / (DSQU(Dac[i])+C*Dabc[i]) ) ;
	    break;
	  case 4:
	    IntSegm[i]= A[i]*log( (F[i]+B[i]+Dab_fc[i])/Dac[i] )
	      - A[i]*log( (B[i]+Dabc[i])/Dac[i] );
	    break;
	  case 5:
	    IntSegm[i]= A[i]*log( (F[i]+B[i]+Dab_fc[i])/Dac[i] )
	      - C*atan( A[i]*(F[i]+B[i]) / (DSQU(Dac[i])+C*Dab_fc[i]) )
	      -  A[i]*log( (B[i]+Dabc[i])/Dac[i] )
	      + C*atan( A[i]*B[i] / (DSQU(Dac[i])+C*Dabc[i]) ) ;
	    break;
	  }
	  
	  Val->Val[0] +=  ONE_OVER_FOUR_PI * SigneInt[i]*fabs(IntSegm[i]);
	}
	Val->Val[0] = Val->Val[0]/Aire;
	Val->Type = SCALAR ;

      }
      else{	
	Msg(ERROR, "Unknown Basis Function Type for GF_LaplacexForm");
      }
      break;
      
      
    default :
      Msg(ERROR, "Unknown Element Type for GF_LaplacexForm");
      break;
    }
    
    break ;
    
  default :
    Msg(ERROR, "Unknown Dimension for GF_LaplacexForm");
    break;
    
  }
  
}



/* ------------------------------------------------------------------------ */
/*  G F _ G r a d L a p l a c e x F o r m                                   */
/* ------------------------------------------------------------------------ */

void GF_GradLaplacexForm (F_ARG2) {
  
  double  xs[NbrMaxSegm], ys[NbrMaxSegm], zs[NbrMaxSegm] ;
  double  xxs, yys, r2 ;
  double  a,b,c, a2, I1, I2 ;
  double  mx, my, valr, vali, DetJ ;
  
  switch (IQA->Type_Dimension) {
    
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
      r2 = DSQU(xxs)+DSQU(yys) ;
      
      if (r2 > Zero_Tolerance2) {
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

      if(xFunctionBF == BF_GradNode) {
	DetJ = (xs[2]-xs[0]) * (ys[1]-ys[0]) - (xs[1]-xs[0]) * (ys[2]-ys[0]) ;
	switch(NumEntity){
	case 1 : mx = (ys[2]-ys[1])/DetJ ; my = (xs[1]-xs[2])/DetJ ; break;
	case 2 : mx = (ys[0]-ys[2])/DetJ ; my = (xs[2]-xs[0])/DetJ ; break;
	case 3 : mx = (ys[1]-ys[0])/DetJ ; my = (xs[0]-xs[1])/DetJ ; break;
	}
	/* ????? I had to intervert mx, my to make it work ???? */
	cglt2d_(&x,&y,&xs[0],&xs[1],&xs[2],&ys[0],&ys[1],&ys[2],&my,&mx,&valr,&vali);
	Val->Type = SCALAR ;
	Val->Val[0] = vali ; 
      }
      else{
	Msg(ERROR, "Unknown Basis Function Type for GF_GradLaplacexForm");
      }
      break ;

    default :
      Msg(ERROR, "Unknown Element Type for GF_LaplacexForm");
      break;
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
      
      a = DSQU(xs[0]-xs[1]) + DSQU(ys[0]-ys[1]) + DSQU(zs[0]-zs[1]) ;
      b = 2. * ((x-xs[0])*(xs[0]-xs[1]) + (y-ys[0])*(ys[0]-ys[1]) + 
		(z-zs[0])*(zs[0]-zs[1])) ;
      c = DSQU(x-xs[0]) + DSQU(y-ys[0]) + DSQU(z-zs[0]) ;
      
      c += DSQU(Radius) ;
      
      I1 = 2./(4.*a*c-b*b) * ( (2.*a+b)/sqrt(a+b+c) - b/sqrt(c) ) ;
      I2 = 2./(-4.*a*c+b*b) * ( (2.*c+b)/sqrt(a+b+c) - 2.*sqrt(c) ) ;
      a2 = sqrt(a) ;
      
      Val->Val[0] = ONE_OVER_FOUR_PI * ( (xs[0]-x) * I1 + (xs[1]-xs[0]) * I2 ) * a2 ;
      Val->Val[1] = ONE_OVER_FOUR_PI * ( (ys[0]-y) * I1 + (ys[1]-ys[0]) * I2 ) * a2 ;
      Val->Val[2] = ONE_OVER_FOUR_PI * ( (zs[0]-z) * I1 + (zs[1]-zs[0]) * I2 ) * a2 ;
      break ;
      
    default :
      Msg(ERROR, "Unknown Element Type for GF_GradLaplacexForm");
      break;
    }
    break ;
    
  default :
    Msg(ERROR, "Unknown Dimension for GF_LaplacexForm");
    break;
    
  }
}


/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d L a p l a c e x F o r m                             */
/* ------------------------------------------------------------------------ */

void GF_NPxGradLaplacexForm (F_ARG2) {

  double xp[NbrMaxSegm], yp[NbrMaxSegm], zp[NbrMaxSegm];
  double xs[NbrMaxSegm], ys[NbrMaxSegm], zs[NbrMaxSegm] ;
  int    i , Type_Int;
  double a, b, c, d, e, m, n, Jp, i1, i2, i3, i4, i5, It, Is, I1 ;

  int    SigneInt[NbrMaxSegm], NbrSegm ;
  double IntSegm[NbrMaxSegm], A[NbrMaxSegm], B[NbrMaxSegm], C;
  double F[NbrMaxSegm], Dac[NbrMaxSegm], Dabc[NbrMaxSegm];
  double Dab_fc[NbrMaxSegm], xyzp[3], Aire;
  double Np_rel[3][NbrMaxSegm], b1, b2 ;

  Val->Type = SCALAR ;

  if (Element->Num == Element->ElementSource->Num) {
    Val->Val[0] = 0.0 ;  
    return ;
  }
  
  switch (IQA->Type_Dimension) {
    
  case _2D : 

    switch (Element->ElementSource->Type) {

    case LINE :	  
    
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      
      if(xFunctionBF == BF_Volume) {
	
	if ((x == xs[0]) && (y == ys[0]))
	  Type_Int = 1 ; 
	else if ((x == xs[1]) && (y == ys[1]))
	  Type_Int = 2 ; 
	else                                    
	  Type_Int = 3 ; 
	
	xp[0] = Element->x[0] ; yp[0] = Element->y[0] ;
	xp[1] = Element->x[1] ; yp[1] = Element->y[1] ;
	
	a = DSQU(xs[0]-xs[1]) + DSQU(ys[0]-ys[1]) ;
	b = 2. * ((x-xs[0]) * (xs[0]-xs[1]) + (y-ys[0]) * (ys[0]-ys[1])) ;
	c = DSQU(x-xs[0]) + DSQU(y-ys[0]) ;     	
	d = 4.*a*c - b*b ;
	
	switch (Type_Int) {	  
	case 1 :  
	case 2 :  
	  Msg(ERROR, "Degenerate case not done in NPxGradLaplacexForm");
	  break ;	
	case 3 :  
	  if (fabs(d) < Zero_Tolerance) {
	    I1 = 0.0 ;
	  }
	  else {
	    if(d<0) Msg(ERROR, "Unexpected value in NPxGradLaplacexForm");
	    i1 = sqrt(d) ;
	    Is = 2. / i1 * (atan((2.*a+b)/i1) -  atan(b/i1)) ;
	    Jp = sqrt(DSQU(xp[0]-xp[1])+DSQU(yp[0]-yp[1])) ;
	    m = ((ys[0]-ys[1]) * (xp[0]-xp[1]) + (xs[0]-xs[1]) * (yp[1]-yp[0])) / Jp ;
	    n = ((yp[1]-yp[0]) * (x-xs[0]) + (xp[0]-xp[1]) * (y-ys[0])) / Jp ; 	
	    I1 = m /(2.*a) * log((a+b)/c+1.) + (n - m*b/(2.*a)) * Is ;	   
	  }
	  break ;
	}
	Val->Val[0] = - ONE_OVER_TWO_PI * I1 ; 
      }
      else {	
	Msg(ERROR, "Unknown Basis Function Type for GF_LaplacexForm");
      }
      break ;

    default :
      Msg(ERROR, "Unknown Element Type for GF_NPxGradLaplacexForm");
      break;
      
    }
    break ;


  case _3D :
    
    switch (Element->ElementSource->Type) {
    case TRIANGLE :	  
      
      NbrSegm=3;
      
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      zs[0] = Element->ElementSource->z[0] ;
      
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      zs[1] = Element->ElementSource->z[1] ;
      
      xs[2] = Element->ElementSource->x[2] ; ys[2] = Element->ElementSource->y[2] ;
      zs[2] = Element->ElementSource->z[2] ;           

      xp[0] = Element->x[0] ; yp[0] = Element->y[0] ;
      zp[0] = Element->z[0] ;
      
      xp[1] = Element->x[1] ; yp[1] = Element->y[1] ;
      zp[1] = Element->z[1] ;
      
      xp[2] = Element->x[2] ; yp[2] = Element->y[2] ;
      zp[2] = Element->z[2] ;           
      
      if(xFunctionBF == BF_Volume) {
	
	/* Calcul de a,b,c,f,No,Nf par fonction reutilisable
	   pour le GradGreen */
	
	xyzp[0] = x ;  xyzp[1] = y ; xyzp[2] = z ;
	
	Facteur_3D (NbrSegm, SigneInt, xyzp, xp, yp, zp, Np_rel,
		    xs, ys, zs, A, B, &C, F, 
		    Dac, Dabc, Dab_fc, &Aire) ;
	
	Val->Type = SCALAR ;
	Val->Val[0] = 0. ;
	
	for (i=0 ; i<NbrSegm ; i++) {
	  if ((A[i]<Zero_Tolerance)||(fabs(C)<Zero_Tolerance))
	    i2=i3=0;
	  else {
	    if (C>0) i1 = 1;
	    else i1 =- 1;
	    i5 = atan(fabs(B[i])/A[i]);
	    b2 = DSQU(B[i]/A[i])+1;
	    i2 = i1 * Np_rel[0][i] * (i5 - asin( sin(i5) / sqrt(A[i]*A[i]/C/C+1)))
	      - Np_rel[1][i]*((log(C/sqrt(b2))-log(A[i]+sqrt(DSQU(A[i])+DSQU(C)/b2)))/sqrt(b2)
			      +log(A[i]+sqrt(DSQU(A[i])+DSQU(C)))-log(C) );
	    
	    if (fabs(B[i])>Zero_Tolerance){
	      b2 = DSQU(A[i]/B[i])+1;
	      i2 -= Np_rel[2][i]*((log(B[i]+sqrt(DSQU(B[i])+DSQU(C)/b2))-0.5*log(DSQU(C)/b2))/sqrt(b2)
				  -log(B[i]+sqrt(DSQU(B[i])+DSQU(C)+DSQU(A[i])))+0.5*log(DSQU(C)+DSQU(A[i]))); 
	    }
	    
	    b1 = fabs(F[i]-B[i]);
	    i5 = atan( b1/A[i] );
	    b2 = DSQU(b1/A[i]+1);
	    i3 = i1 * Np_rel[0][i]*(i5-asin( sin(i5)/ sqrt(A[i]*A[i]/C/C+1)))
	      - Np_rel[1][i]*((log(C/sqrt(b2))-log(A[i]+sqrt(DSQU(A[i])+DSQU(C)/b2)))/sqrt(b2)
			      +log(A[i]+sqrt(DSQU(A[i])+DSQU(C)))-log(C) );
	    
	    if (b1>Zero_Tolerance){
	      b2 = DSQU(A[i]/b1)+1;
	      i3 -= Np_rel[2][i]*((log(b1+sqrt(DSQU(b1)+DSQU(C)/b2))-0.5*log(DSQU(C)/b2))/sqrt(b2)
				  -log(b1+sqrt(DSQU(b1)+DSQU(C)+DSQU(A[i])))+0.5*log(DSQU(C)+DSQU(A[i]))); 
	    }
	    
	  }
	  
	  if (F[i]-B[i] < -Zero_Tolerance)  i1 = -1. ;
	  else if (fabs(F[i]-B[i])<=Zero_Tolerance) i1 = 0.;
	  else i1 = 1. ;
	  
	  if (B[i]>=0) Type_Int=1;
	  else Type_Int=2; 
	  
	  switch (Type_Int){	    
	  case 1:
	    IntSegm[i]= i2+i1*i3;
	    break;
	    
	  case 2:
	    IntSegm[i]= i3-i2;
	    break;	    
	  }
	  
	  Val->Val[0] += SigneInt[i]*(IntSegm[i]);
	}  
	Val->Val[0] = - ONE_OVER_FOUR_PI * Val->Val[0] / Aire;
	
      }
      else {
	Msg(ERROR, "Unknown Basis Function Type for GF_LaplacexForm");
      }
      
      break;
    

    default :
      Msg(ERROR, "Unknown Element Type for GF_GradLaplacexForm");
      break;
    }
    break ;
    
  default :
    Msg(ERROR, "Unknown Dimension for GF_LaplacexForm");
    break;
  }
  
}



/* ------------------------------------------------------------------------ */
/*  G F _ N S x G r a d L a p l a c e x F o r m                             */
/* ------------------------------------------------------------------------ */

void GF_NSxGradLaplacexForm (F_ARG2) {
    
    Msg(ERROR, "GF_NSxGradLaplacexForm : Pas encore fait, mildjuuu !");
  
}



#undef F_ARG2
