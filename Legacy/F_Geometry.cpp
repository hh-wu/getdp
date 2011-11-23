// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "NumericUtils.h"
#include "Message.h"

#define SQU(a)     ((a)*(a)) 

extern struct CurrentData Current ;

static double POINT_TO_PROJECT[3], ELLIPSE_PARAMETERS[2];

static double dist_ellipse(double t)
{
  double x, y;
  x = ELLIPSE_PARAMETERS[0] * cos(t);
  y = ELLIPSE_PARAMETERS[1] * sin(t);
  return sqrt(SQU(x - POINT_TO_PROJECT[0]) + SQU(y - POINT_TO_PROJECT[1]));
}

void F_ProjectPointOnEllipse(F_ARG)
{
  int k;
  double t1 = 0., t2 = 1.e-6, t3, f1, f2, f3, tol = 1.e-4;
  double t, x, y;

  POINT_TO_PROJECT[0] = A->Val[0];
  POINT_TO_PROJECT[1] = A->Val[1];
  POINT_TO_PROJECT[2] = A->Val[2];

  ELLIPSE_PARAMETERS[0] = Fct->Para[0] ;
  ELLIPSE_PARAMETERS[1] = Fct->Para[1] ;

  mnbrak(&t1, &t2, &t3, &f1, &f2, &f3, dist_ellipse);

  if(t1 > t2){
    t = t1;
    t1 = t3;
    t3 = t;
  }

  brent(t1, t2, t3, dist_ellipse, tol, &t);
  
  x = ELLIPSE_PARAMETERS[0] * cos(t);
  y = ELLIPSE_PARAMETERS[1] * sin(t);

  /* printf("SL(%g,%g,0,%g,%g,0){1,1};\n", A->Val[0], A->Val[1], x, y); */
   
  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = 0. ;
    V->Val[MAX_DIM*k+1] = 0. ;
    V->Val[MAX_DIM*k+2] = 0. ;
  }
  V->Val[0] = x;
  V->Val[1] = y;
  V->Type = VECTOR ;
}
