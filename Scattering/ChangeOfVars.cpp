// $Id: ChangeOfVars.cpp,v 1.3 2002-06-17 07:59:48 geuzaine Exp $

#include "Utils.h"

// default: no change of variable :-)

double cv_none(double s, int deriv){
  if(!deriv)
    return s;
  else
    return 1.;
}

// Leonid's chg of vars: maps [0,2pi] into [0,2pi] and behaves as x^4
// on the both ends.

double cv_leonid(double s, int deriv){
  double res, si, co;

  si = sin(s/2.-PI/2.);

  if(!deriv){
    res = PI+2*PI*si/(1+SQU(si));
  }
  else{
    co = cos(s/2.-PI/2.);
    res = PI*CUB(co)/SQU(1+SQU(si));
  }

  return res;
}

// Colton & Kress change of variables for the corner singularity
// (p. 74). p derivatives vanish at s=0 and s=2pi. slope in the middle
// equals 2. Approx 1/2 points "equally distributed", and 1/2
// concentrated near {0,2pi}.

static double v(double s, int p){
  return (1./p-0.5) * CUB((PI-s)/PI) + 1./p * (s-PI)/PI + 0.5;
}

static double dvds(double s, int p){
  return -3 * (1./p-0.5) * SQU(PI-s) / CUB(PI) + 1./(p*PI);
}

double cv_colton(double s, int deriv){
  int where, p=8;
  double vsp, res;

  // handle cases where s is not in [0,2\pi]
  if(s<0.){
    s = TWO_PI + s;
    where = -1;
  }
  else if(s<TWO_PI){
    where = 0;
  }
  else{
    s = s - TWO_PI;
    where = 1;
  }

  vsp = pow(v(s,p),p);

  if(!deriv){
    res = TWO_PI * vsp/(vsp+pow(v(TWO_PI-s,p),p));
    if(where < 0){
      res = - (TWO_PI-res);
    }
    else if(where == 0){
    }
    else{
      res = TWO_PI+res;
    }
  }
  else{
    res = TWO_PI * p * (pow(v(s,p),p-1) * dvds(s,p) * pow(v(TWO_PI-s,p),p) +
			vsp * pow(v(TWO_PI-s,p),p-1) * dvds(TWO_PI-s,p)) /
      SQU(vsp + pow(v(TWO_PI-s,p),p)) ;
  }

  return res;
}

// Boyd's tan/atan chg of vars

double cv_boyd(double s, int deriv){
  double res, q=0.5;

  if(!deriv){
    res = 2*atan(q*tan(s/2.)) ;
    if(res) res +=TWO_PI;
  }
  else{
    res = 2.*(q/2.*(1.+SQU(tan(s/2.)))) / (1.+SQU(q)*SQU(tan(s/2.))) ;
  }

  return res;
}


// "Double Boyd" for better resolution of the circle shadowing points
// e.g. q=2 for k=1600, q=4 for k=3200, etc. This works, but is not
// perfect since one has eventually too few points in some places.

double cv_doubleboyd(double s, int deriv){
  double res, q=2;

  if(!deriv){
    if(s<PI){
      res = atan(q*tan(s)) ;
      if(s>PI/2.) res += PI;
    }
    else{
      res = atan(q*tan(s-PI))+PI ;
      if(s>3*PI/2.) res += PI;
    }
  }
  else{
    // NOT DONE!
    res = 1.;
  }

  return res;
}

// Shadowing point change of vars. Piecewise linear from
// [0,2pi]->[0,2pi]. The curve joins the points (0,0), (x1,y1),
// (x2,y2), (x3,y3), (x4,y4), (2pi,2pi). Parameters {a,e} and b define
// the refinement region and the refinement "strength".
// Unfortunately, this one does not seem to work very well... Maybe
// due to the "abrupt" slope changes

double cv_shadow(double s, int deriv){
  double res;
  double a=1., e=a/3., b=a/2.;

  double x1=PI/2+e-a, x2=PI/2+e+a, x3=3*PI/2-e-a, x4=3*PI/2-e+a;
  double y1=PI/2-b, y2=PI/2+b, y3=3*PI/2-b, y4=3*PI/2+b;

  if(!deriv){
    if(s<x1)
      res = y1/x1*s;
    else if(s<x2)
      res = y1 + (y2-y1)/(x2-x1)*(s-x1);
    else if(s<x3)
      res = y2 + (y3-y2)/(x3-x2)*(s-x2);
    else if(s<x4)
      res = y3 + (y4-y3)/(x4-x3)*(s-x3);
    else
      res = y4 + (TWO_PI-y4)/(TWO_PI-x4)*(s-x4);
  }
  else{
    if(s<x1)
      res = y1/x1;
    else if(s<x2)
      res = (y2-y1)/(x2-x1);
    else if(s<x3)
      res = (y3-y2)/(x3-x2);
    else if(s<x4)
      res = (y4-y3)/(x4-x3);
    else
      res = (TWO_PI-y4)/(TWO_PI-x4);
  }

  return res;
}
