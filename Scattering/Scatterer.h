#ifndef _SCATTERER_H_
#define _SCATTERER_H_

#include "List.h"

// Parametric (in 0..2*PI) representation of the curves

class Scatterer{
public:
  typedef enum {CIRCLE,ELLIPSE} ScattererType;
  ScattererType type;
  double a, b;

  void coord(double u, double *x);
  void deriv(double u, double *x);
  void criticalPoints(double t, List_T *pts);
  void shadowingPoints(double k[3], List_T *pts);
};

#endif
