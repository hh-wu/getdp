#ifndef _NYSTROM_H_
#define _NYSTROM_H_

#include <complex>

using namespace std;

#define FULL_INTEGRATION     (1<<0)
#define CRITICAL_INTEGRATION (1<<1)
#define INTERACT1            (1<<2)
#define INTERACT2            (1<<3)
#define BUILD_MATRIX         (1<<4)
#define ITER_SOLVE           (1<<5)

// Function to integrate

class Function{
public:
  int num_bf, which;

  complex<double> val(double k[3], double tau, double xtau[3]){
    double kr;
    switch(which){
    case 0 : // Alain
    case 1 : // build matrix
    case 2 : // iterative solver
      kr = k[0]*xtau[0]+k[1]*xtau[1]+k[2]*xtau[2];
      return (cos(kr)+I*sin(kr));
    default :
      return 1.;
    }
  }

  complex<double> bf(double tau){
    switch(which){
    case 0 : // Alain
      return cos(tau);
    case 1 : // build matrix, global Fourier basis functions (num_bf=-N/2,...,N/2)
      return (cos(num_bf*tau)+I*sin(num_bf*tau));
    case 2 : // iterative solver
      // eval series using data[], this should be done with a FFT
      return (cos(num_bf*tau)+I*sin(num_bf*tau));
    default :
      return 1.;
    }
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


// prototypes

complex<double> Integrate(int typ, Function *f, Scatterer *scat, 
			  double kv[3], double t, int nbpts, 
			  double prescribed_eps, double rise);

#endif
