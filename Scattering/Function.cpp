// $Id: Function.cpp,v 1.10 2002-05-04 01:42:46 geuzaine Exp $

#include "Utils.h"
#include "Function.h"
#include "Scatterer.h"
#include "Patch.h"

double GetInInterval(double t, double t1, double t2){
  while(t > t2 || t < t1){
    if (t > t2) 
      t -= TWO_PI;
    else 
      t += TWO_PI;
  }
  return t;
}

int IsInInterval(double t, double t1, double t2){
  int i;
  double p1, p2;
  for(i=-1;i<=1;i++){
    p1 = t1 + i*TWO_PI;
    p2 = t2 + i*TWO_PI;
    if(t>=p1 && t<p2) return 1;
  }
  return 0;
}

Complex Function::ansatz(double k[3], double xt[3], double xtau[3]){
  double kr;
  switch(type){

  case ANALYTIC : // Alain
    kr = k[0]*xtau[0]+k[1]*xtau[1]+k[2]*xtau[2];
    //kr = k[0]*(xtau[0]-xt[0]) + k[1]*(xtau[1]-xt[1]) + k[2]*(xtau[2]-xt[2]) ;
    return (cos(kr)+I*sin(kr));

  case INTERPOLATED : // iterative solver
    kr = k[0]*(xtau[0]-xt[0]) + k[1]*(xtau[1]-xt[1]) + k[2]*(xtau[2]-xt[2]) ;
    //return 1; 
    return (cos(kr)+I*sin(kr));

  default :
    return 1.;
  }
}

Complex Function::density(Scatterer *scat, double tau){
  int k;
  Complex val;
  Patch *p;

  switch(type){
    
  case ANALYTIC : // comparison with Alain/Oscar

    //return cos(tau);
    return 1.;

  case INTERPOLATED : // cubic splines or Fourier (off-grid!)

    val = 0.;
    for(k=0 ; k<List_Nbr(scat->patches); k++){
      p = (Patch*)List_Pointer(scat->patches,k);
      double ap = p->part->center - p->part->epsilon;
      double bp = p->part->center + p->part->epsilon;
      double tau2 = GetInInterval(tau,ap,ap+TWO_PI);
      if(tau2 >= ap && tau2 <= bp){
	if(p->type == Patch::SPLINE){
	  val += p->spline->eval(tau2);
	}
	else{
	  tau2 -= ap;
	  val += p->fft->eval(tau2*TWO_PI/(bp-ap));
	}
      }
    }

    //printf("%g %g %g\n", tau, val.real(), val.imag());

    return val;

  default :
    return 1.;
  }
}

// the following is not used at the moment

double Function::chgVar(double u, double *t){
  double jac;

  switch(applyChgVar){

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
    jac = 1; // todo
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

double Function::invChgVar(double u, double *t){
  double jac;

  *t = u;
  jac = 1.;

  return jac;
}
