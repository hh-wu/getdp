// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Ruth Sabariego
//

#include <math.h>
#include <stdio.h>
#include "Message.h"

#define THESIGN(a) ((a)>=0 ? 1 : -1)
#define THEABS(a)  ((a)>=0 ? a : -a)
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02

double Factorial(double n)
{
  /* FACTORIAL(n) is the product of all the integers from 1 to n */
  double F ;

  if ( n < 0 ){
    Message::Error("Factorial(n): n must be a positive integer") ;
    return 0;
  }
  if ( n == 0 ) return 1. ;
  if ( n <= 2 ) return n ;

  F = n ;
  while ( n > 2 ){ n-- ; F *= n ; }

  return F;
}

double BinomialCoef(double n, double m)
{
  /* Binomial Coefficients: (n m) Computes de number of ways of
     choosing m objects from a collection of n distinct objects */
  int i ;
  double B = 1. ;

  if (m==0 || n==m) return 1. ;
  for(i = (int)n ; i > m ; i--)
    B *= (double)i/(double)(i-m);

  return B;
}

double Legendre(int l, int m, double x)
{
  /* Computes the associated Legendre polynomial P_l^m(x).  Here the
     degree l and the order m are the integers satisfying -l<=m<=l,
     while x lies in the range -1<=x<=1 */

  double fact, pll=0., pmm,  pmmp1, somx2, Cte ;
  int i, ll;

  if ( THEABS(m) > l || fabs(x) > 1.){
    Message::Error("Bad arguments for Legendre: P_l^m(x) with -l<=m<=l (int),"
                   " -1<=x<=1 l = %d m = %d x = %.8g", l, m, x);
    return 0.;
  }

  Cte = (m > 0) ? 1. : Factorial((double)(l-THEABS(m))) /
    Factorial((double)(l+THEABS(m))) * pow(-1.,(double)THEABS(m)) ;
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
    return Cte*pmm ;
  }
  else {
    pmmp1 = x * (2*m+1)*pmm ;
    if  (l==(m+1)){
      return Cte*pmmp1 ;
    }
    else {
      for (ll=(m+2);ll<=l;ll++) {
	pll = (x*(2*ll-1)*pmmp1-(ll+m-1)*pmm)/(ll-m) ;
	pmm = pmmp1 ;
	pmmp1 = pll ;
      }
      return Cte*pll ;
    }
  }
}

void LegendreRecursive(int l, int m, double x, double P[])
{
  /* Computes recursively a (l+1)-terms sequence of the associated
     Legendre polynomial P_l^m(x).

     l and m are the integers satisfying 0<=m<=l
     x lies in the range -1<=x<=1
     l = maximum order considered, m = invariable */

  int il ;
  double Pl_m, Plm1_m ;

  P[0] = Plm1_m = Legendre(0, m, x) ;
  P[1] = Pl_m = Legendre(1, m, x) ;

  if (l >=2)
    for(il = 1 ; il < l ; il ++){
      P[il+1] = (2*il+1)*x*Pl_m/(il-m+1) + (il+m)*Plm1_m/(m-il-1) ;
      Plm1_m = Pl_m ;
      Pl_m =  P[il+1];
    }
}

void LegendreRecursiveM(int l, double x, double P[])
{
  /* Computes recursively a (l+1)-terms sequence of the associated
     Legendre polynomial P_l^m(x).

     x lies in the range -1<=x<=1, l = invariable, -l<=m<=l */
  int m ;
  double Pl_m, Plm1_m ;

  if (fabs(x) == 1.)
    for(m = -l ; m <= l ; m ++)
      P[l+m] = (m==0) ? pow(THESIGN(x),(double)l) : 0. ;
  else{
    if (l==0){
      P[0] = Legendre(0, 0, x) ;
      return;
    }
    P[0] = Plm1_m = Legendre(l, -l, x) ;
    P[1] =  Pl_m =  Legendre(l, -l+1, x) ;
    if (l >= 1)
      for(m = -l+1 ; m < l ; m ++){
	P[l+m+1] = -2*m*x*Pl_m/sqrt(1-x*x) + (m*(m-1)-l*(l+1))*Plm1_m ;
	Plm1_m = Pl_m ;
	Pl_m =  P[l+m+1];
      }
    else return ;
  }
}

double dLegendre (int l, int m, double x)
{
  /* Computes the derivative of the associated Legendre polynomial
     P_l^m(x) */

  double dpl;

  if ( THEABS(m) > l || fabs(x) > 1.){
    Message::Error("Bad arguments for dLegendre: -l<=m<=l (integers), -1<=x<=1."
                   " Current values: l %d m %d x %.8g", l, m, x) ;
    return 0.;
  }

  if (fabs(x)==1.) dpl = 0.;
  else
    dpl = ((l+m)*(l-m+1)*sqrt(1-x*x)*((THEABS((m-1))>l) ? 0. :
	  Legendre(l, m-1, x)) + m*x* Legendre (l,m,x))/(1-x*x);

  return dpl;

}

double dLegendreFinDif (int l, int m, double x)
{
  /* Computes the derivative of the associated Legendre polynomial
   P_l^m(x) using Finite Differences: f'(x) = (f(x+\delta
   x)-f(x-\delta x))/(2 \delta) */

  double dpl, delta = 1e-6;

  if ( THEABS(m) > l || fabs(x) > 1.){
    Message::Error("Bad arguments for dLegendreFinDif: -l<=m<=l (integers), "
                   "-1<=x<=1. Current values: l %d m %d x %.8g", l, m, x );
    return 0.;
  }

  dpl =  (Legendre (l, m, x+delta) - Legendre (l, m, x-delta))/(2*delta);

  return dpl;
}

void SphericalHarmonics(int l, int m, double Theta, double Phi, double Yl_m[])
{
  int am ;
  double cn, Pl_m, F, cRe ;

  cn = sqrt((2*l+1)*ONE_OVER_FOUR_PI) ; /* Normalization Factor */
  am = THESIGN(m)*m ;

  F= sqrt(Factorial((double)(l-am))/ Factorial((double)(l+am))) ;
  Pl_m = Legendre(l, am, cos(Theta));

  cRe = cn * F * Pl_m ;

  Yl_m[0] = cRe*cos(m*Phi) ;
  Yl_m[1] = cRe*sin(m*Phi) ;
}




