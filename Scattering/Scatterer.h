#ifndef _SCATTERER_H_
#define _SCATTERER_H_

#include "List.h"
#include "Data_Numeric.h"

// Parametric (in 0..2*PI) representation of the curve

class Scatterer{
public:
  typedef enum {Circle} ScattererType;
  ScattererType Type;

  void Val(double u, double *x){
    switch(Type){
    case Circle:
      x[0] = cos(u); 
      x[1] = sin(u); 
      x[2] = 0.; 
      break;
    }
  }

  void Der(double u, double *x){ 
    switch(Type){
    case Circle:
      x[0] = -sin(u); 
      x[1] = cos(u); 
      x[2] = 0.; 
      break;
    }
  }

  void CriticalPoints(double t, List_T *pts);
};

#endif
