#ifndef _SPLINE_H_
#define _SPLINE_H_

#include "Complex.h"

class Spline {
private:
  int N;
  void spline(double x[], double y[], int n, double yp1, double ypn, double y2[]);
  void splint(double xa[], double ya[], double y2a[], int n, double x, double *y);
  double *xx, *yr, *yi, *dyr, *dyi;
  
public:
  Spline(int n, double *nodes);
  ~Spline();  

  void init(Complex *vals);
  Complex eval(double x);
  
};


#endif
