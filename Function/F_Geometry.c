#define RCSID "$Id: F_Geometry.c,v 1.2 2007-04-21 14:48:13 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 */

#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"
#include "Numeric.h"
#include "Tools.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V

static double POINT_TO_PROJECT[3], ELLIPSE_PARAMETERS[2];

static double dist_ellipse(double t)
{
  double x, y;
  x = ELLIPSE_PARAMETERS[0] * cos(t);
  y = ELLIPSE_PARAMETERS[1] * sin(t);
  return sqrt(DSQR(x - POINT_TO_PROJECT[0]) + DSQR(y - POINT_TO_PROJECT[1]));
}

void  F_ProjectPointOnEllipse(F_ARG) {

  GetDP_Begin("F_ProjectPointOnEllipse");

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

  GetDP_End ;
}

#undef F_ARG
