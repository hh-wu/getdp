// $Id: Nystrom.cpp,v 1.2 2002-02-09 19:52:41 geuzaine Exp $

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex>

#include "GetDP.h"
#include "Amos_F.h"
#include "Data_Numeric.h"
#include "Bessel.h"
#include "CriticalPoints.h"

#define EPSILON 1.e-14

using namespace std;

// Function to integrate
class Function{
public:
  complex<double> val(double k[3], double tau, double xtau[3]){
    int i=0, Nnu=1;
    double nu[3]={0.5,0.,0.5};
    complex<double> res=0.;

    // mu_slow given by its Fourier coefficients
    for(int j=-Nnu; j<=Nnu; j++){
      res += nu[i]*(cos(j*tau)+I*sin(j*tau));
      i++;
    }
    // * e(ikr)
    double kr = k[0]*xtau[0]+k[1]*xtau[1]+k[2]*xtau[2];
    res *= (cos(kr)+I*sin(kr));
    return res;
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

// Partition of unity
class Partition{
public:
  typedef enum{SHARP=1,EXP=2} Type;
  Type type;
  double center, epsilon;
  void init(double t0, double eps, Type typ){
    center = t0;
    epsilon = eps;
    type = typ;
    /*
    switch(type){
    case SHARP : Msg(INFO, "Sharp partition of unity"); break;
    case EXP : Msg(INFO, "Exponential partition of unity"); break;
    default : Msg(ERROR, "Unknown type of partition of unity"); break;
    }
    */
  }
  double val(double t){
    switch(type){
    case SHARP : 
      if((center-epsilon <= t) &&  (t <= center+epsilon))
	return 1.;
      else
	return 0.;
    case EXP :
      return 1.;
    default :
      return 0.;
    }
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
  complex<double> M2(){
    if(fabs(t-tau)>EPSILON)
      return M()-M1()*log(4.*SQU(sin((t-tau)/2.)));
    else
      return (1. - 2.*EULER/(I*PI) - 2./(I*TWO_PI) * log(k*k/4.*d*d)) * d;
  }

}; 

// Special quadrature weights for Nystrom integrator
double SpecialQuadratureWeightForLog(double t, double tau, int n){
  double m, w=0.;
  for(m=1. ; m<=n-1 ; m++) w += cos(m*(t-tau))/m;
  return -TWO_PI/n*w - PI/(n*n)*cos(n*(t-tau));
}


// Nystrom integrator (cf. single layer potential in from Colton &
// Kress, p. 69) for
//
// I(t) = \int_{c-eps}^{c+eps} 
//          H_0^(1)(k*r(t,tau)) * \sqrt{x_1'(tau)^2+x_2'(tau)^2}
//          * f(tau) * pou(tau) dtau 
//
// where the integrand is made 2*eps-periodic thanks to the partition
// of unity (pou), centered at c.
//
complex<double> Nystrom(double t, Function *func, double kvec[3], 
			int nbpnts, Scatterer *scat, Partition *part){
  complex<double> res=0., f, m1, m2;
  double xt[3], dxt[3], xtau[3], dxtau[3], tau, pou, w;
  int j, n = nbpnts/2;
  double k = NORM3(kvec);
  GFHelmholtzParametric2D kern;

  scat->val(t,xt);
  scat->der(t,dxt);

  for(j=0 ; j<=2*n-1 ; j++){
    tau = part->center+part->epsilon*(j/(double)n-1.);
    scat->val(tau,xtau);
    scat->der(tau,dxtau);
    pou = part->val(tau);
    f = func->val(kvec,tau,xtau);
    w = SpecialQuadratureWeightForLog(t,tau,n);
    kern.init(t,xt,dxt,tau,xtau,dxtau,k);
    m1 = kern.M1();
    m2 = kern.M2();
    res += (w * m1 + PI/n * m2) * f * pou;
  }
    
  return res;
}

// Main routine

typedef enum Analysis {FULL, CRIT};

int main(int argc, char *argv[]){
  complex<double> res;
  double WaveNumber[3]={1600,0,0}, t;
  int i, j, NbPoints=10000, NbTargetPoints=21;
  Analysis Type=FULL;
  Scatterer scat;
  Partition part;
  Function f;

  i = 1;
  while (i < argc) {
    if (argv[i][0] == '-') {
      if      (!strcmp(argv[i]+1, "full")){ Type = FULL; i++ ; }
      else if (!strcmp(argv[i]+1, "crit")){ Type = CRIT; i++ ; }
      else if (!strcmp(argv[i]+1, "n")){ 
	i++;
	if (i<argc && argv[i][0]!='-') { NbPoints = atoi(argv[i]); i++;	}
	else{ Msg(ERROR, "Missing number"); }
      }
      else if (!strcmp(argv[i]+1, "t")){
	i++;
	if (i<argc && argv[i][0]!='-') { NbTargetPoints = atoi(argv[i]); i++; }
	else{ Msg(ERROR, "Missing number"); }
      }
      else if (!strcmp(argv[i]+1, "k")){
	i++;
	if (i<argc && argv[i][0]!='-') { WaveNumber[0] = atof(argv[i]); i++; }
	else{ Msg(ERROR, "Missing number"); }
      }
      else{
	Msg(ERROR, "Unknown option");
      }
    }
  }

  switch(Type){
  case FULL :
    Msg(INFO, "Full Nystrom integrator: %d int. pts, %d targets, k=(%g,%g,%g)", 
	NbPoints, NbTargetPoints, WaveNumber[0], WaveNumber[1], WaveNumber[2]);
    for(i=0 ; i<NbTargetPoints ; i++){
      t = 2*PI*i/(NbTargetPoints-1);
      part.init(t,PI,Partition::SHARP);
      res = Nystrom(t,&f,WaveNumber,NbPoints,&scat,&part);
      Msg(INFO, "I(%.15e) = %' '.15e %+.15e * i", t, res.real(), res.imag());
    }
    break;
  case CRIT :
    Msg(INFO, "Critical point integrator: %d int. pts, %d targets, k=(%g,%g,%g)", 
	NbPoints, NbTargetPoints, WaveNumber[0], WaveNumber[1], WaveNumber[2]);
    for(i=0 ; i<NbTargetPoints ; i++){
      t = 2*PI*i/(NbTargetPoints-1);
      double tau[3];
      int Nc;
      part.init(t,PI,Partition::EXP);
      CriticalPointsCircle(t,tau,&Nc);
      Msg(INFO, "I(%.15e)", t);
      for(j=0 ; j<Nc ; j++) Msg(INFO, "  Critical Point %d = %.15e", j, tau[j]);
    }
    break;
  default :
    Msg(ERROR, "Unknown analysis type");
    break;
  }

  return 0;
}

