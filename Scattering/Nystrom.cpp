// $Id: Nystrom.cpp,v 1.3 2002-02-10 23:05:59 geuzaine Exp $

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
  void init(double _center, double _epsilon, double _crest){
    center = _center;
    epsilon = _epsilon;
    crest = _crest;
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
//
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
      m = kern.M();
      res += (PI/(double)n * m) * f * pou;
    }
  }
    
  return part->epsilon/PI * res;
}

// Main routine

typedef enum Analysis {FULL, CRIT};

int main(int argc, char *argv[]){
  complex<double> res;
  double WaveNum[3]={1600,0,0}, t;
  int i, j, NbIntPts=10000, NbTargetPts=20, Nc;
  List_T *CritPts;
  Analysis Type=FULL;
  Scatterer scat;
  Partition part;
  Function f;

  if(argc < 2){
    Msg(INFO, "Usage: %s [-full|-critical] options...", argv[0]);
    exit(1);
  }

  i = 1;
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
      else{
	Msg(ERROR, "Unknown option"); 
      }
    }
  }

  Msg(INFO, "Options: -nbpts %d, -targets %d, -k %g", 
      NbIntPts, NbTargetPts, WaveNum[0]);

  switch(Type){

  case FULL : {
    for(i=0 ; i<NbTargetPts ; i++){
      t = 2*PI*i/(double)NbTargetPts;
      part.init(t,PI,PI); // stupid POU, equal to 1 everywhere in [-PI,PI]
      res = Nystrom(1, t,&f,WaveNum,NbIntPts,&scat,&part);
      Msg(INFO, "I(%d: %.7e) = %' '.15e %+.15e * i",
	  i+1, t, res.real(), res.imag());
    }
    break;
  }

  case CRIT : {
    int nbpts;
    double d, eps = 1., crest = 0.;//0.75*eps;
    complex<double> tmp;

    CritPts = List_Create(10,10,sizeof(double));
   
    for(i=0 ; i<NbTargetPts ; i++){
      t = 2*PI*i/(double)NbTargetPts;
      List_Reset(CritPts);
      CriticalPointsCircle(t,CritPts);
      Nc = List_Nbr(CritPts);
      Msg(INFO, "I(%.15e)", t);
      for(j=0 ; j<Nc ; j++) {
	List_Read(CritPts,j,&d);
	Msg(INFO, "Critical Point %d = %.15e", j, d);
      }

      part.init(t,eps,crest);
      nbpts = (int)(2*eps/TWO_PI*NbIntPts);
      Msg(INFO, "-> integration points: %d", nbpts);
      tmp = Nystrom(1, t,&f,WaveNum,nbpts,&scat,&part);
      Msg(INFO, "I.Singular (%d: %.7e) = %' '.15e %+.15e * i", 
	  i+1, t, tmp.real(), tmp.imag());

      

      //merge crit points intervals
      //part.init(t,epsilon,crest);
    }

    List_Delete(CritPts);

    /* test critical on target=Pi
    t = PI;
    part.init(t,eps,crest);
    nbpts = (int)(2*eps/TWO_PI*NbIntPts);
    Msg(INFO, "-> integration points: %d", nbpts);
    res1 = Nystrom(1, t,&f,WaveNum,nbpts,&scat,&part);
    Msg(INFO, "I sing (%.15e) = %' '.15e %+.15e * i", t, res1.real(), res1.imag());
    
    part.init(2*PI,sqrt(eps),sqrt(crest));
    nbpts = (int)(2*sqrt(eps)/TWO_PI*NbIntPts);
    Msg(INFO, "-> integration points: %d", nbpts);
    res2 = Nystrom(0, t,&f,WaveNum,nbpts,&scat,&part);
    Msg(INFO, "I crit (%.15e) = %' '.15e %+.15e * i", t, res2.real(), res2.imag());

    res = res1+res2;
    Msg(INFO, "I(%.15e) = %' '.15e %+.15e * i", t, res.real(), res.imag());
    */
    break;
  }

  default :
    Msg(ERROR, "Unknown analysis type");
    break;
    
  }
  
  return 0;
}

