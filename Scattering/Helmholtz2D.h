#ifndef _HELMHOLTZ_2D_H_
#define _HELMHOLTZ_2D_H_

#include "Context.h"

class GFHelmholtzParametric2D{
private:
  double t,tau,xt[3],dxt[3],xtau[3],dxtau[3],dist[3];
  double k,r,kr,d;

public:
  void init(double _t, double _xt[3], double _dxt[3], 
	    double _tau, double _xtau[3], double _dxtau[3],
	    double _k);
  Complex M();
  Complex M1();
  Complex M2(double t_pp, double tau_pp, double jac);
  double singLogQuadWeight(double t, double tau, int n);
}; 

// prototypes

Complex Integrate2D(Ctx *ctx, int index, double t);
Complex Evaluate2D(Ctx *ctx, int farfield, double x[3]);

#endif
