// $Id: Scatterer.cpp,v 1.1 2002-03-04 17:14:20 geuzaine Exp $

#include "GetDP.h"
#include "Data_Numeric.h"
#include "Tools.h"
#include "Scatterer.h"

//  Compute all critical points (i.e. for which gradient of the total
//  phase of the integral equation vanishes) in the case of a
//  circle. They are given in closed form by, for an integer n:
//
//  0 <= t-t0 = Pi - 2*t0 + 4*n*PI <= 2*PI
//  0 <= t-t0 = (PI-2*t0)/3 + 4/3*PI*n

void Scatterer::CriticalPoints(double t0, List_T *pts){
  int n;
  double tmp;

  switch(Type){

  case Circle :
    for(n=-2 ; n<=2 ; n++){
      tmp = PI-t0+4.*n*PI;
      if((tmp-t0>=0) && (tmp-t0<=TWO_PI)){
	while(tmp > TWO_PI) tmp-=TWO_PI;
	List_Insert(pts, &tmp, fcmp_double);
      }
      tmp = (PI+t0)/3.+4./3.*n*PI;
      if((tmp-t0>=0) && (tmp-t0<=TWO_PI)){
	while(tmp > TWO_PI) tmp-=TWO_PI;
	List_Insert(pts, &tmp, fcmp_double);
      }
    }
    break;

  default :
    Msg(ERROR, "Unknown type of scatterer for critical point computation");
    break;

  }
}
