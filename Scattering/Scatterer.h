#ifndef _SCATTERER_H_
#define _SCATTERER_H_

#include "List.h"

// Parametric (in 0..2*PI) representation of the curves

class Scatterer{
public:
  typedef enum {CIRCLE,ELLIPSE,DROP} ScattererType;
  ScattererType type;
  double a, b;
  List_T *patches;
  double *nodes; // merge of all patch nodes
  List_T **criticalPointsList;

  void x(double theta, double *x); // x=x(theta), y=y(theta)
  void dx(double theta, double *dx); // dx=d x/d theta, dy=d y/d theta
  void polar(double theta, double *r, double *dr); // r=sqrt(x^2+y^2), dr=d r/d theta

  void singularPoint(double t, List_T *pts);
  void criticalPoints(int index, List_T *pts);
  void criticalPoints(int index, double k[3]);
  void shadowingPoints(double t, double shift, double k[3], List_T *pts);
  void printPoints(double t, List_T *pts);
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

int fcmp_CPoint(const void * a, const void * b);

#endif
