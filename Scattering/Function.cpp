// $Id: Function.cpp,v 1.3 2002-03-06 02:06:39 geuzaine Exp $

#include "GetDP.h"
#include "Data_Numeric.h"
#include "Function.h"

double angle_02pi (double t){
  while(t > TWO_PI || t < 0.){
    if (t > 0)
      t -= TWO_PI;
    else
      t += TWO_PI;
  }
  return t;
}

void Function::chgvar(double u, double *t, double *jac){

  switch(ChgOfVar){

  case 1 : // based on leonid's [-1,1]->[-1,1] mapping
    u = angle_02pi(u);
    *jac = PI*pow(cos(u),3.)/(4-4*pow(cos(u),2.)+pow(cos(u),4.));
    if(u>=0. && u<PI/2.){
      *t = PI*sin(u)/(1+pow(sin(u),2));
    }
    else if(u>=PI/2. && u<3*PI/2.){
      *t = PI+PI*sin(u-PI)/(1+pow(sin(u-PI),2));
      *jac *= -1;
    }
    else{
      *t = 2.*PI+PI*sin(u)/(1+pow(sin(u),2));
    }
    break;

  case 2 : // test
    *t = 2*PI*sin(u/4.);
    *jac = 0.5*PI*cos(u/4.);
    break;

  case 0 : // none
  default :
    *t = u;
    *jac = 1.;
    break;

  }

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

  switch(Type){
    
  case Test : 
    // Alain
    return cos(tau);
    
  case Single : 
    // build matrix, global Fourier basis functions (NumBF=-N/2,...,N/2)
    return (cos(NumBF*tau)+I*sin(NumBF*tau));
    
  case Vector : 
    // eval series using the vector Sol (should be done with FFT)
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
