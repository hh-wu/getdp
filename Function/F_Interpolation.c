#define RCSID "$Id: F_Interpolation.c,v 1.3 2005-06-23 01:45:00 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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


/* ------------------------------------------------------------------------ */
/*  Interpolation                                                           */
/* ------------------------------------------------------------------------ */

void  F_InterpolationLinear (F_ARG) {

  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_InterpolationLinear");

  if (!Fct->Active)  Fi_InitListXY (Fct, A, V) ;

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = (y[up] - y[lo]) / (x[up] - x[lo]) ;
    yp =  y[up] + ( xp - x[up] ) * a ;
  }

  V->Val[0] = yp ;
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationLinear (F_ARG) {

  int     N, up, lo ;
  double  xp, dyp = 0., *x, *y ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_dInterpolationLinear");

  if (!Fct->Active)  Fi_InitListXY (Fct, A, V) ;

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear Interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    dyp = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    dyp = (y[up] - y[lo]) / (x[up] - x[lo]) ;
  }

  V->Val[0] = dyp ;
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationLinear2 (F_ARG) {

  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_dInterpolationLinear2");

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitListXY2 (Fct, A, V) ;
  }    

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.xc ;  y = D->Case.Interpolation.yc ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = (y[up] - y[lo]) / (x[up] - x[lo]) ;
    yp =  y[up] + ( xp - x[up] ) * a ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}



void  F_InterpolationAkima (F_ARG) {

  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a, a2, a3 ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_InterpolationAkima");

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitAkima (Fct, A, V) ;
  }

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = xp - x[lo] ; a2 = a*a ; a3 = a2*a ;
    yp =  y[lo]
      + D->Case.Interpolation.bi[lo] * a
      + D->Case.Interpolation.ci[lo] * a2
      + D->Case.Interpolation.di[lo] * a3 ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationAkima (F_ARG) {

  int     N, up, lo ;
  double  xp, dyp = 0., *x, *y, a, a2 ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_dInterpolationAkima");

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitAkima (Fct, A, V) ;
  }

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    dyp = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = xp - x[lo] ; a2 = a*a ; 
    dyp = D->Case.Interpolation.bi[lo]
      + D->Case.Interpolation.ci[lo] * 2. * a
      + D->Case.Interpolation.di[lo] * 3. * a2 ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = dyp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


void  Fi_InitListXY (F_ARG) {

  int     i, N ;
  double  *x, *y ;
  struct FunctionActive  * D ;

  GetDP_Begin("Fi_InitListXY");

  D = Fct->Active =
    (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;
  N = D->Case.Interpolation.NbrPoint = Fct->NbrParameters / 2 ;
  x = D->Case.Interpolation.x = (double *)Malloc(sizeof(double)*N) ;
  y = D->Case.Interpolation.y = (double *)Malloc(sizeof(double)*N) ;

  for (i = 0 ; i < N ; i++) {
    x[i] = Fct->Para[i*2  ] ;
    y[i] = Fct->Para[i*2+1] ;
  }

  GetDP_End ;
}


void  Fi_InitListXY2 (F_ARG) {

  int     i, N ;
  double  *x, *y, *xc, *yc ;
  struct FunctionActive  * D ;

  GetDP_Begin("Fi_InitListXY2");

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;
  xc = D->Case.Interpolation.xc = (double *)Malloc(sizeof(double)*N) ;
  yc = D->Case.Interpolation.yc = (double *)Malloc(sizeof(double)*N) ;

  xc[0] = 0. ;
  yc[0] = (x[1]*y[1]-x[0]*y[0]) / (x[1]*x[1]-x[0]*x[0]) ;

  for (i = 1 ; i < N ; i++) {

    xc[i] = 0.5 * (x[i]+x[i-1]) ;
    yc[i] = (x[i]*y[i]-x[i-1]*y[i-1]) / (x[i]*x[i]-x[i-1]*x[i-1]) ;

    /*
    xc[i] = x[i] ;
    yc[i] = (y[i]-y[i-1]) / (x[i]-x[i-1]) ;
    */
  }

  GetDP_End ;
}


void  Fi_InitAkima (F_ARG) {

  int     i, N ;
  double  *x, *y, *mi, *bi, *ci, *di, a ;
  struct FunctionActive  * D ;

  GetDP_Begin("Fi_InitAkima");

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;
  mi = D->Case.Interpolation.mi = (double *)Malloc(sizeof(double)*(N+4)) ;
  mi += 2 ;
  bi = D->Case.Interpolation.bi = (double *)Malloc(sizeof(double)*N) ;
  ci = D->Case.Interpolation.ci = (double *)Malloc(sizeof(double)*N) ;
  di = D->Case.Interpolation.di = (double *)Malloc(sizeof(double)*N) ;

  for (i = 0 ; i < N-1 ; i++)
    mi[i] = (y[i+1]-y[i]) / (x[i+1]-x[i]) ;
  mi[N-1] = 2.*mi[N-2] - mi[N-3] ;
  mi[N  ] = 2.*mi[N-1] - mi[N-2] ;
  mi[ -1] = 2.*mi[  0] - mi[  1] ;
  mi[ -2] = 2.*mi[ -1] - mi[  0] ;

  for (i = 0 ; i < N ; i++)
    if ( (a = fabs(mi[i+1]-mi[i]) + fabs(mi[i-1]-mi[i-2])) > 1.e-30 )
      bi[i] =
	( fabs(mi[i+1]-mi[i]) * mi[i-1] + fabs(mi[i-1]-mi[i-2]) * mi[i] ) / a ;
    else
      bi[i] = (mi[i] + mi[i-1]) / 2. ;

  for (i = 0 ; i < N-1 ; i++) {
    a = (x[i+1]-x[i]) ;
    ci[i] = ( 3.*mi[i] - 2.*bi[i] - bi[i+1] ) / a ;
    di[i] = ( bi[i] + bi[i+1] - 2.*mi[i] ) / (a*a) ;
  }

  GetDP_End ;
}



void  F_InterpolationMatrix (F_ARG) {

  int i, j, N, NbrLines, NbrColumns;
  double xp;
  double * Matrix;


  GetDP_Begin("F_InterpolationMatrix");

  N = Fct->NbrParameters;
  if (N <= 2) Msg(ERROR,"Bad number of parameters for matrix interpolation (%d)", N) ;

  NbrLines   = (int)(Fct->Para[0]+0.5);
  NbrColumns = (int)(Fct->Para[1]+0.5);
  if (N-2 != NbrLines*NbrColumns)
    Msg(ERROR,"Bad number of parameters for matrix interpolation (%d+2 instead of %d+2)",
	N-2, NbrLines*NbrColumns) ;

  Matrix = Fct->Para+2;

  xp = A->Val[0] ;
 
  fprintf(stderr, "\n");
  for (i = 0 ; i < NbrLines ; i++) {
    fprintf(stderr, "  Line %d :", i);
    for (j = 0 ; j < NbrColumns ; j++) {
      fprintf(stderr, " %g", *(Matrix+i*NbrColumns+j));
    }
    fprintf(stderr, "\n");
  }

  V->Val[0] = 1. ;
  V->Type = SCALAR ;

  GetDP_End ;
}



#undef F_ARG
