#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include "Complex.h"
#include "LinAlg.h"

class Function{
public:
  typedef enum {Test,Single,Vector} FunctionType;
  FunctionType Type;
  int NumBF, ChgOfVar;
  gVector *Sol;

  Complex val(double k[3], double tau, double xtau[3]);
  Complex bf(double tau);
  void    chgvar(double u, double *t, double *jac);
};

// prototypes

void ChgVar(double u, double *t, double *jac);

#endif
