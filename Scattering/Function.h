#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include "Complex.h"
#include "LinAlg.h"

class Function{
public:
  typedef enum {Test,Single,Vector} FunctionType;
  FunctionType Type;
  int NumBF, ChgOfVar;
  double a, b;
  gVector *Sol;

  Complex val(double k[3], double tau, double xtau[3]);
  Complex bf(double tau);
  double chgvar(double u, double *t);
  double invchgvar(double t, double *u);
};


#endif
