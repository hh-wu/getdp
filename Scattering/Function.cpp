// $Id: Function.cpp,v 1.17 2002-06-17 07:27:29 geuzaine Exp $

#include "Utils.h"
#include "Function.h"
#include "Scatterer.h"
#include "Patch.h"
#include "ChangeOfVars.h"
#include "nrutil.h"

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
    //return 1.;
    return (cos(kr)+I*sin(kr));

  case INTERPOLATED : // iterative solver
    kr = k[0]*(xtau[0]-xt[0]) + k[1]*(xtau[1]-xt[1]) + k[2]*(xtau[2]-xt[2]) ;
    //return 1; 
    return (cos(kr)+I*sin(kr));

  default :
    return 1.;
  }
}

Complex Function::density(Scatterer *scat, int index, double tau){
  Patch *p;

  switch(type){
  case ANALYTIC :
    return density(scat, tau);
  default :
    p = (Patch*)List_Pointer(scat->patches,0);
    //printf("nbdof=%d index=%d val=%g\n", p->nbdof, index,  p->localVals[index].real());
    return p->localVals[index];
  }

}

Complex Function::density(Scatterer *scat, double tau){
  int k;
  Complex val;
  Patch *p;

  switch(type){
    
  case ANALYTIC : // comparison with Alain/Oscar
    
    return cos(tau);
    //return 1./sqrt(tau);
    //return 1.;

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
	  val += p->fft->eval(tau2);

	  //use this with the direct (slow) FFT without low order
	  //interpolation on finer grid. Ony OK if there is *no*
	  //change of variable!
	  //val += p->fft->eval(tau2*TWO_PI/(bp-ap));
	}
      }
    }

    //printf("%g %g %g\n", tau, val.real(), val.imag());

    return val;

  default :
    return 1.;
  }
}

// wrapper

double Function::chgVar(double u, double *t){
  double jac;

  switch(applyChgVar){

  case 1 :
    *t = cv_colton(u,0);
    jac = cv_colton(u,1);
    break;

  case 0 : // none
  default :
    *t = u;
    jac = 1.;
    break;

  }
  
  return jac;

}

// invert chg of vars : bissection

static double THEINVPOINT;

double bisfunc(double x){
  return cv_colton(x,0) - THEINVPOINT ;
}

#define JMAX 10000

double rtbis(double (*func)(double), double x1, double x2, double xacc){
  void nrerror(char error_text[]);
  int j;
  double dx,f,fmid,xmid,rtb;
  
  f=(*func)(x1);
  fmid=(*func)(x2);
  if (f*fmid >= 0.0) nrerror("Root must be bracketed for bisection in rtbis");
  rtb = f < 0.0 ? (dx=x2-x1,x1) : (dx=x1-x2,x2);
  for (j=1;j<=JMAX;j++) {
    fmid=(*func)(xmid=rtb+(dx *= 0.5));
    if (fmid <= 0.0) rtb=xmid;
    //if (fabs(dx) < xacc || fmid == 0.0) return rtb;
    if (fabs(dx) < xacc) return rtb;
  }
  nrerror("Too many bisections in rtbis");
  return 0.0;
}

#undef JMAX

void Function::invChgVar(double u, double *t){
  int where;

  switch(applyChgVar){

  case 1 :
    // handle cases where u is not in [0,2\pi]
    if(u<0.){
      THEINVPOINT = TWO_PI + u;
      where = -1;
    }
    else if(u<TWO_PI){
      THEINVPOINT = u;
      where = 0;
    }
    else{
      THEINVPOINT = u - TWO_PI;
      where = 1;
    }
    *t = rtbis(bisfunc,-0.1,TWO_PI+0.1,1.0e-16);
    if(where < 0){
      *t = - (TWO_PI-*t);
    }
    else if(where > 0){
      *t = TWO_PI+*t;
    }

    //printf("invchv: in %g out %g\n", u, *t);

    break;

  case 0 : // none
  default :
    *t = u;
    break;

  }

}
