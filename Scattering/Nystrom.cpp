// $Id: Nystrom.cpp,v 1.4 2002-02-11 21:32:38 geuzaine Exp $

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex>

#include "GetDP.h"
#include "Amos_F.h"
#include "Data_Numeric.h"
#include "Tools.h"
#include "Utils.h"
#include "Bessel.h"
#include "CriticalPoints.h"

#define EPSILON 1.e-14

using namespace std;

typedef enum Analysis {FULL, CRIT};

// Function to integrate

class Function{
public:
  complex<double> val(double k[3], double tau, double xtau[3]){
    double kr = k[0]*xtau[0]+k[1]*xtau[1]+k[2]*xtau[2];
    // f = cos(tau) * e(ikr)
    return cos(tau) * (cos(kr)+I*sin(kr));
  }
};

// Parametric (in 0..2*PI) representation of the curve

class Scatterer{
public:
  void val(double u, double *x){ 
    x[0] = cos(u); 
    x[1] = sin(u); 
    x[2] = 0.; 
  }
  void der(double u, double *x){ 
    x[0] = -sin(u); 
    x[1] = cos(u); 
    x[2] = 0.; 
  }
};


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
  double center, crest, epsilon;
  List_T *parts;
  void init(double _center, double _epsilon, double _crest){
    center = _center;
    epsilon = _epsilon;
    crest = _crest;
    parts = NULL;
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
  complex<double> M2(double tau_orig, double epsilon){
    if(fabs(t-tau)>EPSILON)
      return M()-M1()*log(4.*SQU(sin((tau_orig-PI)/2.)));
    //return M()-M1()*log(4.*SQU(sin((t-tau)/2.)));
    else
      return (1. - 2.*EULER/(I*PI) - 2./(I*TWO_PI) * log(DSQU(k/2.*epsilon/PI*d))) * d;
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

  scat->val(t,xt);
  scat->der(t,dxt);

  for(j=0 ; j<=2*n-1 ; j++){
    tau_orig = TWO_PI*j/(2.*n);
    tau = (tau_orig-PI)*part->epsilon/PI+part->center;
    scat->val(tau,xtau);
    scat->der(tau,dxtau);
    pou = part->val(tau);
    f = func->val(kvec,tau,xtau);
    kern.init(t,xt,dxt,tau,xtau,dxtau,k);
    if(singular){ // combine special quadrature with trapezoidal
      w = SpecialQuadratureWeightForLog(PI,tau_orig,n);
      m1 = kern.M1();
      m2 = kern.M2(tau_orig,part->epsilon);
      res += (w * m1 + PI/(double)n * m2) * f * pou;
    }
    else{ // simple trapezoidal
      if(part->parts)
	pou *= 1.;
      m = kern.M();
      res += (PI/(double)n * m) * f * pou;
    }
  }
    
  return part->epsilon/PI * res;
}

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
int fcmp_IntervalNum(const void * a, const void * b) {
  Interval *i1 = (Interval*)a, *i2 = (Interval*)b;
  return (i1->num - i2->num);
}


// Outer integration loop on target points

void Integrate(Analysis typ, Function *f, Scatterer *scat, 
	       double kv[3], int nbtarget, int nbpts, double eps){
  Partition part;
  Interval I, *pI;
  List_T *CritPts, *Intervals;
  complex<double> res, tmp;
  double t, d, crest=0.;//0.75*eps;
  int i, j, nb, sindex;

  switch(typ){

  case FULL :
    for(i=0 ; i<nbtarget ; i++){
      t = 2*PI*i/(double)nbtarget;
      // stupid POU around t, equal to 1 everywhere in [t-PI,t+PI]
      part.init(t,PI,PI);
      res = Nystrom(1,t,f,kv,nbpts,scat,&part);
      Msg(INFO, "I(%d: %.7e) = %' '.15e %+.15e * i", i+1, t, res.real(), res.imag());
    }
    break;

  case CRIT :
    CritPts = List_Create(10,10,sizeof(double));
    Intervals = List_Create(10,10,sizeof(Interval));
   
    for(i=0 ; i<nbtarget ; i++){
      List_Reset(CritPts);
      List_Reset(Intervals);

      t = 2*PI*i/(double)nbtarget;
      CriticalPointsCircle(t,CritPts);

      // add target in crit pts list

      List_Insert(CritPts, &t, fcmp_double);
      sindex = List_ISearch(CritPts, &t, fcmp_double);

      // merge all overlapping pous in an interval list

      for(j=0 ; j<List_Nbr(CritPts) ; j++) {
	List_Read(CritPts,j,&d);
	I.num = j;
	if(j == sindex){
	  I.min = d-eps;
	  I.max = d+eps;
	  Msg(INFO, "  - target     = %.15e -> [%g,%g]", d, I.min, I.max);
	}
	else{
	  I.min = d-sqrt(eps);
	  I.max = d+sqrt(eps);
	  Msg(INFO, "  - crit. pt %d = %.15e -> [%g,%g]", j, d, I.min, I.max);
	}
	if((pI = (Interval*)List_PQuery(Intervals, &I, fcmp_Interval))){
	  if(j == sindex) pI->num = sindex;
	  pI->min = MIN(pI->min, I.min);
	  pI->max = MAX(pI->max, I.max);
	}
	else{
	  List_Add(Intervals, &I);
	}
      }
      for(j=0 ; j<List_Nbr(Intervals) ; j++) {
	List_Read(Intervals, j, &I);
	Msg(INFO, "  * [%g , %g]", I.min, I.max);
      }

      // insure periodicity
      List_Read(Intervals, 0, &I);
      pI = (Interval*)List_Pointer(Intervals, List_Nbr(Intervals)-1);
      if(I.min < 0 && pI->max > TWO_PI){
	printf("aaaaaaaa\n");
	List_PSuppress(Intervals, 0);
	if(I.num==sindex) pI->num = sindex;
	pI->min = MIN(pI->min,I.min+TWO_PI);
	pI->max = MAX(pI->max,I.max+TWO_PI);
      }

      for(j=0 ; j<List_Nbr(Intervals) ; j++) {
	List_Read(Intervals, j, &I);
	Msg(INFO, "  ** [%g , %g]", I.min, I.max);
      }

      // integrate
      res = 0.;
      for(j=0 ; j<List_Nbr(Intervals) ; j++) {
	List_Read(Intervals, j, &I);

	if(I.num==sindex){
	  part.init(t,eps,crest);
	  // change this
	  nb = (int)(2*eps/TWO_PI*nbpts);
	  Msg(INFO, "  - singular int. : %d pts in [%g , %g]", nb, t-eps, t+eps);
	  tmp = Nystrom(1,t,f,kv,nb,scat,&part);
	  Msg(INFO, "    IS = %' '.15e %+.15e * i", tmp.real(), tmp.imag());
	  
	  //check if I.min et I.max bigger than t-eps, t+eps
	  // integrate the rest
	  //part.parts = List_Create(1,1,sizeof(Partition));
	  //part2.init((min+max)/2.,(max-min)/2.,crest);
	  //List_Add(part.parts, &part2);
	  //nb = (int)(part.epsilon/TWO_PI*nbpts);
	  //Msg(INFO, "  -> special int...");
	  //tmp = Nystrom(0,t,f,kv,nb,scat,&part);
	  //Msg(INFO, "     I* = %' '.15e %+.15e * i", tmp.real(), tmp.imag());
	  
	}
	else{
	  
	  part.init((I.min+I.max)/2.,(I.max-I.min)/2.,crest);
	  // change this
	  nb = (int)(2*sqrt(part.epsilon)/TWO_PI*nbpts);
	  Msg(INFO, "  - critical int.: %d pts in [%g , %g]", nb, I.min, I.max);
	  tmp = Nystrom(0,t,f,kv,nb,scat,&part);
	  Msg(INFO, "    IC = %' '.15e %+.15e * i", tmp.real(), tmp.imag());

	}
	res += tmp;
      }
      
      Msg(INFO, "===>I(%d: %.7e) = %' '.15e %+.15e * i", i+1, t, res.real(), res.imag());
      Msg(INFO, "-----------------------------------------------------------------");

    }

    List_Delete(Intervals);
    List_Delete(CritPts);
    break;

  default :
    Msg(ERROR, "Unknown analysis type");
    break;
    
  }
}


// Main routine

int main(int argc, char *argv[]){
  double WaveNum[3]={1600.,0.,0.}, Epsilon=1.;
  int NbIntPts=10000, NbTargetPts=20;
  Analysis Type=FULL;
  Scatterer scat;
  Function f;

  if(argc < 2){
    Msg(INFO, "Usage: %s [-full|-critical] options...", argv[0]);
    exit(1);
  }

  int i = 1;
  while (i < argc) {
    if (argv[i][0] == '-') {
      if(Cmp(argv[i]+1, "full", 1)){ 
	i++; Type = FULL; Msg(INFO, "Full Nystrom integrator");
      }
      else if(Cmp(argv[i]+1, "critical", 1)){ 
	i++; Type = CRIT; Msg(INFO, "Critical point integrator");
      }
      else if(Cmp(argv[i]+1, "nbpts", 1)){ 
	i++; NbIntPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "targets", 1)){ 
	i++; NbTargetPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "k", 1)){
	i++; WaveNum[0] = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "epsilon", 1)){
	i++; Epsilon = GetNum(argc,argv,&i); 
      }
      else{
	Msg(ERROR, "Unknown option"); 
      }
    }
  }

  Msg(INFO, "Options: -nbpts %d, -targets %d, -k %g, -eps %g", 
      NbIntPts, NbTargetPts, WaveNum[0], Epsilon);

  Integrate(Type, &f, &scat, WaveNum, NbTargetPts, NbIntPts, Epsilon);
  
  return 0;
}

