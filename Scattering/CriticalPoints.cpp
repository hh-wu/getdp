// $Id: CriticalPoints.cpp,v 1.2 2002-02-09 19:52:41 geuzaine Exp $

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Data_Numeric.h"

//  This routine finds the critical points of the phase of the
//  integral equation in the case of a circle.  See the writeup by
//  Fernando for explanation
//
//  We have the following formulas: 
//
//  tau = Pi - t0 + 4nPi        if 0 leq tau-t0 leq 2Pi
//  tau = Pi/3 + t0/3 + 4nPi/3  if 0 leq tau-t0 leq 2Pi
//
// for "some" n (which we determine n the code)  

void CriticalPointsCircle(double t0, double Tau[3], int *Nc){
  int ind, n, nc;
  double tmp, tau[4];

  // compute critical points

  ind=1;
  for(n=-2; n<=2; n++){
    tmp=PI-t0+4.*n*PI;
    if( ((tmp-t0)>=0) && ((tmp-t0)<=TWO_PI)){
      tau[ind]=tmp;
      //Msg(INFO, "1 - n=%d tmp=%g",n, tmp);
      ind++;
    }
  }
  for(n=-2; n<=2; n++){
    tmp=PI/3.+t0/3.+4.*n*PI/3.;
    if(((tmp-t0)>=0) && ((tmp-t0)<=TWO_PI)){
      tau[ind]=tmp;
      //Msg(INFO, "2 - n=%d tmp=%g",n, tmp);
      ind++;
    }
  }
  nc=ind-1;
  for(n=1; n<=nc; n++){
    while(tau[n] > TWO_PI) 
      tau[n]-=TWO_PI;
  }
  if(nc >= 2){
    if(tau[1] > tau[2]){
      tmp=tau[2];
      tau[2]=tau[1];
      tau[1]=tmp;
    }
  }
  if(nc >= 3){
    if(tau[2] > tau[3]){
      tmp=tau[3];
      tau[3]=tau[2];
      tau[2]=tmp;
    }
  }

  //for(n=1; n<=nc; n++) Msg(INFO, "tau[%d]=%g", n, tau[n]);

  // suppress duplicates

  if(nc==2){ 
    if(fabs(tau[1]-tau[2]) < 1e-14)
      nc=nc-1;
  }
  else if(nc == 3){
    if((fabs(tau[1]-tau[2]) < 1e-14) &&
       (fabs(tau[2]-tau[3]) < 1e-14)){
      nc=nc-2;
    }
    else{
      if((fabs(tau[1]-tau[2]) < 1e-14)){
	nc=nc-1;
	tau[2]=tau[3];
      }
      else{
	if((fabs(tau[2]-tau[3]) < 1e-14)){
	  nc=nc-1;
	}
      }
    }
  }
  
  Tau[0] = tau[1];
  Tau[1] = tau[2];
  Tau[2] = tau[3];
  *Nc = nc;

}
