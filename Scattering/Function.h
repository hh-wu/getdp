#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include "Complex.h"
#include "List.h"
#include "Scatterer.h"

class Function{
public:
  typedef enum {ANALYTIC,INTERPOLATED} FunctionType;
  FunctionType type;
  int applyChgVar;

  Complex ansatz(double k[3], double xt[3], double xtau[3]);
  Complex density(Scatterer *scat, double tau);
  Complex density(Scatterer *scat, int index, double tau);
  double chgVar(double u, double *t);
  void invChgVar(double t, double *u);
};

double GetInInterval(double t, double t1, double t2);
int IsInInterval(double t, double t1, double t2);

#endif
