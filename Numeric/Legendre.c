#define RCSID "$Id: Legendre.c,v 1.1 2001-08-08 14:42:30 sabarieg Exp $"

#include <stdio.h>
#include <math.h>

#include "GetDP.h"


double Legendre(int l, int m, double x){

  /* Computes the associated Legendre polynomial P_l^m(x).
     Here l and m are the integers satisfying 0<=m<=l, while x lies
     in the range -1<=x<=1 */
     
  double fact,pll,pmm,pmmp1,somx2;
  int i, ll;
  
  GetDP_Begin("Legendre");
  
  if (m < 0 || m > l || fabs(x) > 1.)
    Msg(ERROR, "Bad arguments for Legendre: P_l^m(x) with 0<=m<=l (int), -1<=x<=1 ");
  
  pmm = 1. ;
  
  if (m > 0) {
    somx2 =  sqrt((1.-x)*(1.+x)) ;
    fact = 1. ; 
    for (i=1;i<=m;i++){
      pmm *= -fact*somx2 ;
      fact += 2. ;
    }
  }
  if (l==m)
    GetDP_Return(pmm) ;
  else {
    pmmp1 = x * (2*m+1)*pmm ;
    if  (l==(m+1))
      GetDP_Return(pmmp1) ;
    else {
      for (ll=(m+2);ll<=l;ll++) {
	pll = (x*(2*ll-1)*pmmp1-(ll+m-1)*pmm)/(ll-m) ;
	pmm = pmmp1 ;
	pmmp1 = pll ;
      }
      GetDP_Return(pll) ;
    }
  }
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



double dLegendre (int l, int m, double x){
  /* Computes the derivative of the associated Legendre polynomial P_l^m(x) */

  double dpl;

  GetDP_Begin("dLegendre");
  
  if (m < 0 || m > l || fabs(x) > 1.)
    Msg(ERROR, "Bad arguments for dLegendre: 0<=m<=l (integers), -1<=x<=1 ");
  
  if (fabs(x)==1.) dpl = 0.;
  else    
    dpl = ((l+m)*(l-m+1)*sqrt(x*x-1)* Legendre (l,m-1,x) - m*x* Legendre (l,m,x))/(x*x-1);
  
  GetDP_Return(dpl);

}



double dLegendreFinDif (int l, int m, double x){
  /* Computes the derivative of the associated Legendre polynomial P_l^m(x)
   using Finite Differences: f'(x) = (f(x+\delta x)-f(x-\delta x))/(2 \delta) */

  double dpl, delta = 1e-6;

  GetDP_Begin("dLegendreFinDif");
  
  if (m < 0 || m > l || fabs(x) > 1.)
    Msg(ERROR, "Bad arguments for dLegendre: 0<=m<=l (integers), -1<=x<=1 ");
  
  dpl =  (Legendre (l, m, x+delta) - Legendre (l, m, x-delta))/(2*delta);
  
  GetDP_Return(dpl);

}






