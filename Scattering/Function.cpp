// $Id: Function.cpp,v 1.1 2002-03-04 17:13:15 geuzaine Exp $

#include "GetDP.h"
#include "Data_Numeric.h"
#include "Function.h"

double angle_02pi (double A3){
  double DP = 2 * PI;
  while (A3 > DP || A3 < 0.){
    if (A3 > 0)
      A3 -= DP;
    else
      A3 += DP;
  }
  return A3;
}

void ChgVar(double u, double *t, double *jac){
  //if(u > PI) u-= 2*PI;
  //if(u < -PI) u+= 2*PI;

  u = angle_02pi(u);  
  *t = u; return;
  
  //*t = PI/2.*sin(u/2.+PI); return;
  //*t = PI*sin(u/2.); return;
  *t = 2*sin(u/2.); return;
  
  *jac = PI*cos(u/2.)/2.;
  //printf("aa %g\n",u);
  //*u = 2*PI*sin(*u/4.);
  
  return;
  /*
    if(t > 2*PI) t-= 2*PI;
    if(t < 0) t+= 2*PI;
    if(t>=0. && t<PI/2.){
    *u = PI*sin(t)/(1+SQU(sin(t)));
    // *jac = PI*pow(cos(t),3.)/(4-4*pow(cos(t),2.)+pow(cos(t),4.));
    }
    else if(t>=PI/2. && t<3*PI/2.){
    *u = PI+PI*sin(t-PI)/(1+SQU(sin(t-PI)));
    // *jac = 1;
    }
    else{
    *u = 2*PI+PI*sin(t)/(1+SQU(sin(t)));
    // *jac = 1;
    }
    //printf("t u %g %g \n", t, *u);
   */
}

Complex Function::val(double k[3], double tau, double xtau[3]){
  double kr;
  switch(Type){
  case Test : // Alain
  case Single : // build matrix
  case Vector : // iterative solver
    kr = k[0]*xtau[0]+k[1]*xtau[1]+k[2]*xtau[2];
    return (cos(kr)+I*sin(kr));
  default :
    return 1.;
  }
}

Complex Function::bf(double tau){
  int i, j, beg, end;
  Complex res, lsum, sum;
  double taunew,jac;
  
  switch(Type){
    
  case Test : 
    // Alain
    return cos(tau);
    
  case Single : 
    // build matrix, global Fourier basis functions (NumBF=-N/2,...,N/2)
    
    ChgVar(tau,&taunew,&jac);
    tau=taunew;
    return (cos(NumBF*tau)+I*sin(NumBF*tau));
    
  case Vector : 
    // eval series using the vector Sol (should be done with FFT)
    ChgVar(tau,&taunew,&jac);
    tau=taunew;
    
    LinAlg_GetLocalVectorRange(Sol,&beg,&end);
    beg /= gCOMPLEX_INCREMENT;
    end /= gCOMPLEX_INCREMENT;
    lsum = 0.;
    for(i=beg ; i<end ; i++){
      LinAlg_GetComplexInVector(&res, Sol, i-beg);
      j = -NumBF/2+i;
      lsum += (cos(j*tau)+I*sin(j*tau)) * res;
    }
    
    // sum results from all processors
    LinAlg_ReduceSum(&lsum,&sum);
    return sum;
    
  default :
    return 1.;
  }
}
