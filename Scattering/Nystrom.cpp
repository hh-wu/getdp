// $Id: Nystrom.cpp,v 1.19 2002-02-28 01:00:04 geuzaine Exp $

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex>

using namespace std;

#include "GetDP.h"
#include "Amos_F.h"
#include "Data_Numeric.h"
#include "LinAlg.h"
#include "Tools.h"
#include "Utils.h"
#include "Bessel.h"
#include "CriticalPoints.h"
#include "Nystrom.h"

#define EPSILON 1.e-14

// Partition of unity stuff

class Partition{
private:
  // pou(x,c) = 1 , - 1 < -c < x < c < 1 
  //          = smooth((|x|-c)/(1-c)) , otherwise
  // with smooth(x) = exp(2*exp(-1/x)/(x-1) 
  double smooth(double x){
    if(x==0.) return 1.;
    else if(x==1.)  return 0.;
    else return exp(2.*exp(-1./x)/(x-1));
  }
  double pou(double x, double c){
    if(fabs(x) > 1.) return 0.;
    else if(fabs(x) <= c) return 1.;
    else return smooth((fabs(x)-c)/(1.-c));
  }
public:
  double center, epsilon, crest;
  List_T *subparts;
  void init(double _center, double _epsilon, double _rise){
    center = _center;
    epsilon = _epsilon;
    if(epsilon>PI)
      Msg(ERROR, "Epsilon is too large (%g > PI)", _epsilon);
    crest = _epsilon-fabs(_rise);
    if(crest<0.) 
      Msg(ERROR, "Invalid rise (%g > epsilon)", _rise);
    subparts = NULL;
  }
  double val(double t){
    return pou((t-center)/epsilon,crest/epsilon);
  }
};


// Helmholtz kernels

class GFHelmholtzParametric2D{
  double t,tau,xt[3],dxt[3],xtau[3],dxtau[3],dist[3];
  double k,r,kr,d;
public:
  void init(double _t, double _xt[3], double _dxt[3], 
	    double _tau, double _xtau[3], double _dxtau[3],
	    double _k){
    double dist[3];
    t = _t;
    tau = _tau;
    for(int i=0;i<3;i++){
      xt[i] = _xt[i];
      dxt[i] = _dxt[i];
      xtau[i] = _xtau[i];
      dxtau[i] = _dxtau[i];
      dist[i] = _xt[i] - _xtau[i];
    }
    r = NORM3(dist);
    k = _k;
    kr = k*r;
    d = sqrt(SQU(dxtau[0])+SQU(dxtau[1])) ;
  }
  complex<double> M(){
    return Bessel_h(1,0,kr) * d;
  }
  complex<double> M1(){
    return -2./(I*TWO_PI) * Bessel_j(0,kr) * d;
  }
  complex<double> M2(double tau_orig, double jac){
    if(fabs(t-tau)>EPSILON)
      return M()-M1()*log(4.*SQU(sin((tau_orig-PI)/2.)));
    //return M()-M1()*log(4.*SQU(sin((t-tau)/2.)));
    else
      return (1. - 2.*EULER/(I*PI) - 2./(I*TWO_PI) * log(DSQU(k/2.*jac*d))) * d;
    //return (1. - 2.*EULER/(I*PI) - 2./(I*TWO_PI) * log(DSQU(k/2.*d))) * d;
  }
}; 


// Special quadrature weights for Nystrom integrator

double SpecialQuadratureWeightForLog(double t, double tau, int n){
  double m, w=0.;
  for(m=1. ; m<=n-1 ; m++) w += cos(m*(t-tau))/m;
  return -TWO_PI/n*w - PI/(n*n)*cos(n*(t-tau));
}


// Nystrom integrator (cf. single layer potential formulation in
// Colton & Kress, p. 69) for
//
// I(t) = \int_{a-eps}^{a+eps} 
//            H_0^(1)(k*r(t,tau))
//          * \sqrt{x_1'(tau)^2+x_2'(tau)^2}
//          * f(tau) * pou(tau) dtau 
//
// where the integrand is 2*eps-periodic thanks to the partition of
// unity (pou), centered on 'a'.
//
// Nystrom integrator given in Colton & Kress being only valid for a
// 2*PI-periodic integrand, from 0 to 2*PI, the change of variables
// 
// tau = (tau'-PI)*eps/PI+a
// dtau = eps/PI*dtau'
//
// is applied, to give:
//
// I(t) = \int_{0}^{2*PI} 
//            H_0^(1)(k*r(t,(tau-PI)*eps/PI+a))
//          * \sqrt{x_1'((tau-PI)*eps/PI+a))^2+x_2'((tau-a)*eps/PI+a))^2}
//          * f((tau-a)*eps/PI+a)) * pou((tau-a)*eps/PI+a)) 
//          * eps/PI dtau 
//
// The decomposition of the logarithmic singularity is then made as in
// Colton & Kress. Warning: the jacobian eps/PI also appears in the
// decomposition of the kernel.

complex<double> Nystrom(int singular, double t, Function *func, double kvec[3], 
			int nbpts, Scatterer *scat, Partition *part){
  complex<double> res=0., f, m, m1, m2;
  double xt[3], dxt[3], xtau[3], dxtau[3], tau, tau_orig, pou, w;
  int j, n = nbpts/2;
  double k = NORM3(kvec);
  GFHelmholtzParametric2D kern;

  if(!nbpts) return 0.;

  scat->val(t,xt);
  scat->der(t,dxt);

  for(j=0 ; j<=2*n-1 ; j++){
    tau_orig = TWO_PI*j/(2.*n);
    tau = (tau_orig-PI)*part->epsilon/PI+part->center;
    pou = part->val(tau);
    if(pou){
      scat->val(tau,xtau);
      scat->der(tau,dxtau);
      f = func->val(kvec,tau,xtau) * func->bf(tau);
      kern.init(t,xt,dxt,tau,xtau,dxtau,k);
      if(singular){ // combine special quadrature with trapezoidal
	w = SpecialQuadratureWeightForLog(PI,tau_orig,n);
	m1 = kern.M1();
	m2 = kern.M2(tau_orig,part->epsilon/PI);
	res += (w * m1 + PI/(double)n * m2) * f * pou;
      }
      else{ // simple trapezoidal
	if(List_Nbr(part->subparts)){
	  Partition *part2 = (Partition*)List_Pointer(part->subparts,0);
	  double pou2 = part2->val(tau);
	  pou -= pou2;
	}
	if(pou){
	  m = kern.M();
	  res += (PI/(double)n * m) * f * pou;
	}
      }
    }
  }
    
  return part->epsilon/PI * res;
}

// compute the tangency points (2) separate the integral in 2 parts,
// and apply the following change of variables in each integral:
//
// 

complex<double> NystromNew(int singular, double t, Function *func, double kvec[3], 
			   int nbpts, Scatterer *scat, Partition *part){
  complex<double> res=0., f, m, m1, m2;
  double xt[3], dxt[3], xtau[3], dxtau[3], tau, tau_orig, pou, w;
  int j, n = nbpts/2, chgofvars=1;
  double k = NORM3(kvec);
  GFHelmholtzParametric2D kern;

  if(!nbpts) return 0.;

  scat->val(t,xt);
  scat->der(t,dxt);

  for(j=0 ; j<=2*n-1 ; j++){
    tau_orig = TWO_PI*j/(2.*n);
    tau = (tau_orig-PI)*part->epsilon/PI+part->center;
    
    if(chgofvars){
      
    }


    pou = part->val(tau);
    if(pou){
      scat->val(tau,xtau);
      scat->der(tau,dxtau);
      f = func->val(kvec,tau,xtau) * func->bf(tau);
      kern.init(t,xt,dxt,tau,xtau,dxtau,k);
      if(singular){ // combine special quadrature with trapezoidal
	w = SpecialQuadratureWeightForLog(PI,tau_orig,n);
	m1 = kern.M1();
	m2 = kern.M2(tau_orig,part->epsilon/PI);
	res += (w * m1 + PI/(double)n * m2) * f * pou;
      }
      else{ // simple trapezoidal
	if(List_Nbr(part->subparts)){
	  Partition *part2 = (Partition*)List_Pointer(part->subparts,0);
	  double pou2 = part2->val(tau);
	  pou -= pou2;
	}
	if(pou){
	  m = kern.M();
	  res += (PI/(double)n * m) * f * pou;
	}
      }
    }
  }
    
  return part->epsilon/PI * res;
}

// Stuff for interval comparison

typedef struct{
  int num;
  double min, max;
} Interval;

int fcmp_Interval(const void * a, const void * b) {
  Interval *i1 = (Interval*)a, *i2 = (Interval*)b;
  if(i1->max < i2->min) return -1;
  else if(i1->min > i2->max) return 1;
  else return 0;
}

// Integrate, given the target point 't'

complex<double> Integrate(int typ, Function *f, Scatterer *scat, 
			  double kv[3], double t, int nbpts, 
			  double prescribed_eps, double rise){
  Partition part, part2;
  Interval I, *pI;
  static List_T *CritPts=List_Create(10,10,sizeof(double));
  static List_T *Intervals=List_Create(10,10,sizeof(Interval));
  complex<double> res, tmp, tmp2;
  double d, eps, s_eps;
  int j, nb, s_index, i_index;

  if(typ & FULL_INTEGRATION){ // full Nystrom integrator

    // stupid pou around t, equal to 1 everywhere in [t-PI,t+PI]
    part.init(t,PI,0.);
    return Nystrom(1,t,f,kv,nbpts,scat,&part);

  }

  if(typ & INTERACT1){ // interactive integration around one critical point

    // compute critical points
    List_Reset(CritPts);
    CriticalPointsCircle(t,CritPts);

    // add target in crit pts list
    List_Insert(CritPts, &t, fcmp_double);
    s_index = List_ISearch(CritPts, &t, fcmp_double);

    // around which point should we integrate?
    printf("Target = %g\n", t);
    for(j=0 ; j<List_Nbr(CritPts) ; j++) {
      List_Read(CritPts,j,&d);
      printf("%d (%s) = %g\n", j, (j==s_index)?"sing":"crit", d);
    }
    printf("Pt num to integrate around? "); scanf("%d", &i_index);
    printf("Epsilon? "); scanf("%lf", &eps);
    printf("Rise? "); scanf("%lf", &rise);
    printf("Number of integration points? "); scanf("%d", &nb);
    List_Read(CritPts, i_index, &d);
    j = (s_index==i_index);
    Msg(DEBUG, "%s int. : %d pts in [%g , %g]", j ? "Sing." : "Crit.", nb, d-eps, d+eps);

    part.init(d,eps,rise);
    return Nystrom(j,t,f,kv,nb,scat,&part);

  }

  // compute critical points
  List_Reset(CritPts);
  CriticalPointsCircle(t,CritPts);
  
  // add target in crit pts list
  List_Insert(CritPts, &t, fcmp_double);
  s_index = List_ISearch(CritPts, &t, fcmp_double);
  
  // merge all overlapping pous in an interval list
  List_Reset(Intervals);
  for(j=0 ; j<List_Nbr(CritPts) ; j++) {
    List_Read(CritPts,j,&d);
    I.num = j;
    if(typ == INTERACT2){
      printf("Epsilon for t=%g?\n", d); 
      scanf("%lf", &eps);
      if(j == s_index) s_eps = eps;
    }
    else{
      if(j == s_index) eps = s_eps = prescribed_eps;
      else eps = sqrt(prescribed_eps);
    }
    I.min = d-eps;
    I.max = d+eps;
    Msg(DEBUG, "  - %s pt %d = %.15e -> [%g,%g]", 
	(j == s_index) ? "target" : "crit.", j, d, I.min, I.max);
    if((pI = (Interval*)List_PQuery(Intervals, &I, fcmp_Interval))){
      if(j == s_index) pI->num = s_index;
      pI->min = MIN(pI->min, I.min);
      pI->max = MAX(pI->max, I.max);
    }
    else{
      List_Add(Intervals, &I);
    }
  }
  
  for(j=0 ; j<List_Nbr(Intervals) ; j++) {
    List_Read(Intervals, j, &I);
    Msg(DEBUG, "  * [%g , %g]", I.min, I.max);
  }
  
  // insure periodicity
  if(List_Nbr(Intervals)>1){
    pI = (Interval*)List_Pointer(Intervals, 0);
    List_Read(Intervals, List_Nbr(Intervals)-1, &I);
    if(I.max > TWO_PI+pI->min){
      Msg(DEBUG, "  ! Flipping last interval");
      I.min -= TWO_PI;
      I.max -= TWO_PI;
      if(s_index==I.num) t-=TWO_PI;
      List_PSuppress(Intervals, List_Nbr(Intervals)-1);
      if((pI = (Interval*)List_PQuery(Intervals, &I, fcmp_Interval))){
	if(s_index==I.num) pI->num = s_index;
	pI->min = MIN(pI->min, I.min);
	pI->max = MAX(pI->max, I.max);
      }
      else{
	List_Add(Intervals, &I);
      }
    }
  }
  
  for(j=0 ; j<List_Nbr(Intervals) ; j++) {
    List_Read(Intervals, j, &I);
    Msg(DEBUG, "  ** [%g , %g]", I.min, I.max);
  }
  
  // integrate
  res = 0.;
  for(j=0 ; j<List_Nbr(Intervals) ; j++) {
    List_Read(Intervals, j, &I);
    
    if(I.num==s_index){
      part.init(t,s_eps,rise);
      if(typ & INTERACT2){
	printf("Nb int. pts for singular part.? "); 
	scanf("%d", &nb);
      }
      else{
	nb = (int)(2*s_eps/TWO_PI*nbpts); // change this
      }
      Msg(DEBUG, "  - singular int. : %d pts in [%g , %g]", nb, t-s_eps, t+s_eps);
      tmp = Nystrom(1,t,f,kv,nb,scat,&part);
      Msg(DEBUG, "    IS = %' '.15e %+.15e * i", tmp.real(), tmp.imag());
      
      // if the singular integration is embedded in a larger one
      if((I.max-I.min) > 2.*s_eps) {
	part.init((I.min+I.max)/2,(I.max-I.min)/2.,rise);
	part.subparts = List_Create(1,1,sizeof(Partition));
	part2.init(t,s_eps,rise);
	List_Add(part.subparts, &part2);
	if(typ & INTERACT2){
	  printf("Nb int. pts for special critical part.? "); 
	  scanf("%d", &nb);
	}
	else{
	  nb = (int)(2*sqrt(part.epsilon)/TWO_PI*nbpts); // change this
	}
	Msg(DEBUG, "  - critical int. in [%g,%g] \\ [%g,%g]",I.min,I.max,t-s_eps, t+s_eps);
	tmp2 = Nystrom(0,t,f,kv,nb,scat,&part);
	Msg(DEBUG, "    IC* = %' '.15e %+.15e * i", tmp2.real(), tmp2.imag());
	List_Delete(part.subparts);
	part.subparts = NULL;
	tmp += tmp2;
      }
      
    }
    else{
      part.init((I.min+I.max)/2.,(I.max-I.min)/2.,rise);
      if(typ & INTERACT2){
	printf("Nb int. pts for critical part.? "); 
	scanf("%d", &nb);
      }
      else{
	nb = (int)(2*sqrt(part.epsilon)/TWO_PI*nbpts);//change this
      }
      Msg(DEBUG, "  - critical int.: %d pts in [%g , %g]", nb, I.min, I.max);
      tmp = Nystrom(0,t,f,kv,nb,scat,&part);
      Msg(DEBUG, "    IC = %' '.15e %+.15e * i", tmp.real(), tmp.imag());
    }
    
    res += tmp;
  }
  
  return res;

}

