#ifndef _SCATTERER_H_
#define _SCATTERER_H_

#include "List.h"

// Parametric (in 0..2*PI) representation of the curves

class Scatterer{
public:
  enum ScattererType {CIRCLE,ELLIPSE,DROP,KITE} ;
  ScattererType type;
  double a, b, currentTargetU, normalizedWaveNum[3];
  List_T *patches;
  double *nodes; // merge of all patch nodes
  List_T **criticalPointsList;

  int dim(); // 2 or 3

  void x(double u, double v, double *x); // x=x(u), y=y(u)
  void dx(double u, double v, double *dx); // dx=d x/d u, dy=d y/d u
  void ddx(double u, double v, double *ddx); // ddx=d^2 x/d u^2, dy=d^2 y/d u^2
  void n(double u, double v, double *n); // exterior normal

  void singularPoint(double t, List_T *pts);
  void criticalPoints(int index, List_T *pts);
  void criticalPoints(int index, double k[3]);
  void shadowingPoints(double t, double shift, double k[3], List_T *pts);
  void printPoints(double t, List_T *pts);

  // Newton stuff for critical point computation
  void phase2D(double *x, int n, double *fvec, double **fjac);
  int  mnewt(int ntrial, double x[], int n, double tolx, double tolf);
};

class CPoint{
public:
  double val; // should of course be generalized in 2D/3D
  int degree;
  char *name(){
    switch(degree){
    case 1: return "singular";
    case 2: return "critical";
    case 3: return "shadowing";
    default: return "unknown";
    }
  }
};

int compareCPoint(const void * a, const void * b);

#endif
