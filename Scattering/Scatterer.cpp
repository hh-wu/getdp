// $Id: Scatterer.cpp,v 1.2 2002-04-12 17:11:02 geuzaine Exp $

#include "Utils.h"
#include "Tools.h"
#include "Scatterer.h"

// Parametric definition of the scatterers

void Scatterer::coord(double u, double *x){
  switch(type){
  case CIRCLE :
    x[0] = cos(u); 
    x[1] = sin(u); 
    x[2] = 0.; 
    break;
  case ELLIPSE :
    x[0] = a*cos(u); 
    x[1] = b*sin(u); 
    x[2] = 0.; 
    break;
  }
}

void Scatterer::deriv(double u, double *x){ 
  switch(type){
  case CIRCLE :
    x[0] = -sin(u); 
    x[1] = cos(u); 
    x[2] = 0.; 
    break;
  case ELLIPSE :
    x[0] = -a*sin(u); 
    x[1] = b*cos(u); 
    x[2] = 0.; 
    break;
  }
}

//  Compute all critical points (i.e. for which gradient of the total
//  phase of the integral equation vanishes) in the case of a
//  circle. They are given in closed form by, for an integer n:
//
//  0 <= t-t0 = Pi - 2*t0 + 4*n*PI <= 2*PI
//  0 <= t-t0 = (PI-2*t0)/3 + 4/3*PI*n

void Scatterer::criticalPoints(double t0, List_T *pts){
  int n;
  double tmp;

  switch(type){

  case CIRCLE :
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


void Scatterer::shadowingPoints(double k[3], List_T *pts){
  double tmp;

  switch(type){

  case CIRCLE :
    if(k[1] || k[2])
      Msg(ERROR, "Shadowing point computation not done in the general case");
    tmp = PI/2.;
    List_Insert(pts, &tmp, fcmp_double);
    tmp = 3*PI/2.;
    List_Insert(pts, &tmp, fcmp_double);
    break;

  default :
    Msg(ERROR, "Unknown type of scatterer for shadowing point computation");
    break;

  }
}
  
