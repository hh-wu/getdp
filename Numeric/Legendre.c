#define RCSID "$Id: Legendre.c,v 1.8 2003-03-17 11:26:07 sabarieg Exp $"

#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Data_Numeric.h"


double Factorial( double n ){
  /* FACTORIAL(n) is the product of all the integers from 1 to n */  
  double F ;

  GetDP_Begin("Factorial");

  if ( n < 0 ) Msg(ERROR, "Factorial(n): n must be a positive integer") ;
  if ( n == 0 ) GetDP_Return(1.) ;
  if ( n <= 2 ) GetDP_Return(n) ;

  F = n ;
  while ( n > 2 ){ n-- ; F *= n ; }
  
  GetDP_Return(F);
}



double BinomialCoef( double n, double m ){
  /* Binomial Coefficients: (n m) 
     Computes de number of ways of choosing m objects from a collection of n distinct objects */

  int i ;
  double B = 1. ;

  GetDP_Begin("BinomialCoef") ;

  if (m==0 || n==m) GetDP_Return(1.) ;
  for(i = (int)n ; i > m ; i--)
    B *= (double)i/(double)(i-m);

  GetDP_Return(B);
}


double Legendre(int l, int m, double x){

  /* Computes the associated Legendre polynomial P_l^m(x).
     Here the degree l and the order m are the integers
     satisfying -l<=m<=l, while x lies in the range -1<=x<=1 */
     
  double fact, pll, pmm,  pmmp1, somx2, Cte ;
  int i, ll;
  
  GetDP_Begin("Legendre");
  
  if ( THEABS(m) > l || fabs(x) > 1.)
    Msg(ERROR, "Bad arguments for Legendre: P_l^m(x) with -l<=m<=l (int), -1<=x<=1 l = %d m = %d x = %.8g", l, m, x);
 
  Cte = (m > 0) ? 1. : Factorial((double)(l-THEABS(m)))/Factorial((double)(l+THEABS(m))) * pow(-1.,(double)THEABS(m)) ;
  m = THEABS(m) ;
  
  pmm = 1. ;
  
  if (m > 0) {
    somx2 =  sqrt((1.-x)*(1.+x)) ;
    fact = 1. ; 
    for (i=1;i<=m;i++){
      pmm *= -fact*somx2 ;
      fact += 2. ;
    }
  }
  if (l==m){
    GetDP_Return( Cte*pmm ) ;
  }
  else {
    pmmp1 = x * (2*m+1)*pmm ;
    if  (l==(m+1)){
      GetDP_Return( Cte*pmmp1 ) ;
    }
    else {
      for (ll=(m+2);ll<=l;ll++) {
	pll = (x*(2*ll-1)*pmmp1-(ll+m-1)*pmm)/(ll-m) ;
	pmm = pmmp1 ;
	pmmp1 = pll ;
      }
      GetDP_Return( Cte*pll ) ;
    }
  }
}


void LegendreRecursive(int l, int m, double x, double P[]){
  /* Computes recursively a (l+1)-terms sequence of the associated Legendre polynomial P_l^m(x).
     l and m are the integers satisfying 0<=m<=l
     x lies in the range -1<=x<=1
     l = maximum order considered, m = invariable */

  int il ;
  double Pl_m, Plm1_m ;


  GetDP_Begin("LegendreRecursive");

  P[0] = Plm1_m = Legendre(0, m, x) ;
  P[1] = Pl_m = Legendre(1, m, x) ;
 
  if (l >=2) 
    for(il = 1 ; il < l ; il ++){    
      P[il+1] = (2*il+1)*x*Pl_m/(il-m+1) + (il+m)*Plm1_m/(m-il-1) ; 
      Plm1_m = Pl_m ;
      Pl_m =  P[il+1];
    }
  else GetDP_End ;

  GetDP_End ;
}


void LegendreRecursiveM(int l, double x, double P[]){
  /* Computes recursively a (l+1)-terms sequence of the associated Legendre polynomial P_l^m(x).
     x lies in the range -1<=x<=1, l = invariable, -l<=m<=l */
  int m ;
  double Pl_m, Plm1_m ;

  GetDP_Begin("LegendreRecursiveM");

  if (fabs(x) == 1.)
    for(m = -l ; m <= l ; m ++) 
      P[l+m] = (m==0) ? pow(THESIGN(x),(double)l) : 0. ;    
  else{
    if (l==0){
      P[0] = Legendre(0, 0, x) ;
      GetDP_End ;
    }
    P[0] = Plm1_m = Legendre(l, -l, x) ;
    P[1] =  Pl_m =  Legendre(l, -l+1, x) ;    
    if (l >= 1)
      for(m = -l+1 ; m < l ; m ++){     
	P[l+m+1] = -2*m*x*Pl_m/sqrt(1-x*x) + (m*(m-1)-l*(l+1))*Plm1_m ; 
	Plm1_m = Pl_m ;
	Pl_m =  P[l+m+1];
      }
    else GetDP_End ;
  }
  
  GetDP_End ;
}


double dLegendre (int l, int m, double x){
  /* Computes the derivative of the associated Legendre polynomial P_l^m(x) */

  double dpl;

  GetDP_Begin("dLegendre");
  
  if ( THEABS(m) > l || fabs(x) > 1.)
    Msg(ERROR,
	"Bad arguments for dLegendre: -l<=m<=l (integers), -1<=x<=1. Current values: l %d m %d x %.8g", l, m, x) ;
  
  if (fabs(x)==1.) dpl = 0.;
  else    
    dpl = ((l+m)*(l-m+1)*sqrt(1-x*x)*((THEABS((m-1))>l) ? 0. :
	  Legendre(l, m-1, x)) + m*x* Legendre (l,m,x))/(1-x*x);
  
  GetDP_Return(dpl);

}


double dLegendreFinDif (int l, int m, double x){
  /* Computes the derivative of the associated Legendre polynomial P_l^m(x)
   using Finite Differences: f'(x) = (f(x+\delta x)-f(x-\delta x))/(2 \delta) */

  double dpl, delta = 1e-6;

  GetDP_Begin("dLegendreFinDif");
  
  if ( THEABS(m) > l || fabs(x) > 1.)
    Msg(ERROR, "Bad arguments for dLegendreFinDif: -l<=m<=l (integers), -1<=x<=1. Current values: l %d m %d x %.8g", l, m, x );
  
  dpl =  (Legendre (l, m, x+delta) - Legendre (l, m, x-delta))/(2*delta);
  
  GetDP_Return(dpl);

}



void PrintLegendre(int l, int m, double x, char * FileName){

  double P ;
  int i ;

  FILE * file ;

  GetDP_Begin("PrintLegendre");

  Msg(INFO, "Writing Legendre: '%s' ", FileName );
  file = fopen(FileName, "w");

  for (i = 1 ; i <= l ; i++ ){
    P = Legendre(i, m, x);
    fprintf(file, "%f \n", P);     
  }

  fclose(file);
  
  GetDP_End;
}


void SphericalHarmonics(int l, int m, double Theta, double Phi, double Yl_m[]){
  
  int am ;
  double cn, Pl_m, F, cRe ;

  GetDP_Begin("SphericalHarmonics");
  
  cn = sqrt((2*l+1)*ONE_OVER_FOUR_PI) ; /* Normalization Factor */
  am = THESIGN(m)*m ; 

  F= sqrt(Factorial((double)(l-am))/ Factorial((double)(l+am))) ;
  Pl_m = Legendre(l, am, cos(Theta));

  cRe = cn * F * Pl_m ;

  Yl_m[0] = cRe*cos(m*Phi) ;
  Yl_m[1] = cRe*sin(m*Phi) ;


  GetDP_End;
}




