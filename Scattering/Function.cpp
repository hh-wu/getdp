// $Id: Function.cpp,v 1.5 2002-03-20 23:06:38 geuzaine Exp $

#include "GetDP.h"
#include "Data_Numeric.h"
#include "Function.h"

double get_in_pou(double t, double t1, double t2){
  while(t > t1 || t < t2){
    if (t > t2) 
      t -= TWO_PI;
    else 
      t += TWO_PI;
  }
  return t;
}

int is_in_interval(double t, double t1, double t2){
  int i;
  double p1, p2;
  for(i=-1;i<=1;i++){
    p1 = t1 + i*TWO_PI;
    p2 = t2 + i*TWO_PI;
    if(t>=p1 && t<p2) return 1;
  }
  return 0;
}

double Function::chgvar(double u, double *t){
  double jac;

  switch(ChgOfVar){

  case 1 : // test
    if(u>=-PI && u<PI){
      *t = PI*cos((u-PI)/2.);
      jac = -PI*sin((u-PI)/2.)/2.;
      if(*t < a) *t += 2*PI;
    }
    else{
      *t = PI*cos((u+PI)/2.) + 2.*PI;
      jac = -PI*sin((u+PI)/2.)/2.;
      if(*t > b) *t -= 2*PI;
    }
    break;

  case 11 : // based on leonid's [-1,1]->[-1,1] mapping
    jac = -PI*pow(cos(u),3.)/(4-4*pow(cos(u),2.)+pow(cos(u),4.));
    if(u<-PI/2){
      *t = -1*PI + PI * sin(u+PI)/(1+pow(sin(u+PI),2)) ;
    }
    else if(u<PI/2){
      *t = 0*PI  + PI * sin(u)   /(1+pow(sin(u),2)) ;
      jac *= -1;
    }
    else if(u<PI/2+PI){
      *t = 1*PI  + PI * sin(u-PI)/(1+pow(sin(u-PI),2));
    }
    else if(u<PI/2+2*PI){
      *t = 2.*PI + PI * sin(u)   /(1+pow(sin(u),2));
      jac *= -1;
    }
    break;

  case -1 : // boyd
    jac = 1;
    *t = 2.*atan(0.5*tan(u/2.)) ;
    break;

  case 0 : // none
  default :
    *t = u;
    jac = 1.;
    break;

  }
  
  return jac;

}

double Function::invchgvar(double u, double *t){
  double jac;

  *t = u;
  jac = 1.;

  return jac;
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
    // comparision with Alain/Oscar

    return cos(tau);
    //return 1.;
    
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
