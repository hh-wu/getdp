// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "MallocUtils.h"
#include "Message.h"

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  Interpolation                                                           */
/* ------------------------------------------------------------------------ */

void F_InterpolationLinear(F_ARG)
{
  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a ;
  struct FunctionActive  * D ;

  if (!Fct->Active)  Fi_InitListXY (Fct, A, V) ;

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
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
}

void F_dInterpolationLinear(F_ARG)
{
  int     N, up, lo ;
  double  xp, dyp = 0., *x, *y ;
  struct FunctionActive  * D ;

  if (!Fct->Active)  Fi_InitListXY (Fct, A, V) ;

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg::Error("Bad argument for linear Interpolation (%g < %g)", xp, x[0]) ;
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
}

void F_dInterpolationLinear2(F_ARG)
{
  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a ;
  struct FunctionActive  * D ;

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitListXY2 (Fct, A, V) ;
  }    

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.xc ;  y = D->Case.Interpolation.yc ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
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
    Msg::Error("Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;
}

void F_InterpolationAkima(F_ARG)
{
  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a, a2, a3 ;
  struct FunctionActive  * D ;

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitAkima (Fct, A, V) ;
  }

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
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
    Msg::Error("Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;
}

void F_dInterpolationAkima(F_ARG)
{
  int     N, up, lo ;
  double  xp, dyp = 0., *x, *y, a, a2 ;
  struct FunctionActive  * D ;

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitAkima (Fct, A, V) ;
  }

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
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
    Msg::Error("Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;
}

void Fi_InitListXY(F_ARG)
{
  int     i, N ;
  double  *x, *y ;
  struct FunctionActive  * D ;

  D = Fct->Active =
    (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;
  N = D->Case.Interpolation.NbrPoint = Fct->NbrParameters / 2 ;
  x = D->Case.Interpolation.x = (double *)Malloc(sizeof(double)*N) ;
  y = D->Case.Interpolation.y = (double *)Malloc(sizeof(double)*N) ;

  for (i = 0 ; i < N ; i++) {
    x[i] = Fct->Para[i*2  ] ;
    y[i] = Fct->Para[i*2+1] ;
  }
}

void Fi_InitListXY2(F_ARG)
{
  int     i, N ;
  double  *x, *y, *xc, *yc ;
  struct FunctionActive  * D ;

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
}

void Fi_InitAkima(F_ARG)
{
  int     i, N ;
  double  *x, *y, *mi, *bi, *ci, *di, a ;
  struct FunctionActive  * D ;

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
}

void F_InterpolationMatrix(F_ARG)
{
  int i, j, N, NbrLines, NbrColumns;
  double xp;
  double * Matrix;

  N = Fct->NbrParameters;
  if (N <= 2) Msg::Error("Bad number of parameters for matrix interpolation (%d)", N) ;

  NbrLines   = (int)(Fct->Para[0]+0.5);
  NbrColumns = (int)(Fct->Para[1]+0.5);
  if (N-2 != NbrLines*NbrColumns)
    Msg::Error("Bad number of parameters for matrix interpolation (%d+2 instead of %d+2)",
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
}

struct IntDouble { int Int; double Double; } ;
struct IntVector { int Int; double Double[3]; } ;

void F_ValueFromIndex (F_ARG)
{
  struct FunctionActive  * D ;
  struct IntDouble * IntDouble_P;

  if (!Fct->Active)  Fi_InitValueFromIndex (Fct, A, V) ;

  D = Fct->Active ;

  IntDouble_P = (struct IntDouble *)
    List_PQuery(D->Case.ValueFromIndex.Table, &Current.NumEntity, fcmp_int);

  if (!IntDouble_P)
    Msg::Error("Unknown Entity Index in ValueFromIndex Table");
  /*
  printf("==> search %d --> found %g\n", Current.NumEntity, IntDouble_P->Double);
  */
  V->Val[0] = IntDouble_P->Double ;
  V->Type = SCALAR ;
}

void F_VectorFromIndex(F_ARG)
{
  struct FunctionActive  * D ;
  struct IntVector * IntVector_P;

  if (!Fct->Active)  Fi_InitVectorFromIndex (Fct, A, V) ;

  D = Fct->Active ;
  
  /* printf("%d \n", List_Nbr(D->Case.ValueFromIndex.Table)); */

  if (List_Nbr(D->Case.ValueFromIndex.Table)){

    IntVector_P = (struct IntVector *)
      List_PQuery(D->Case.ValueFromIndex.Table, &Current.NumEntity, fcmp_int);

    /* 
       if (!IntVector_P)  Msg::Error("Unknown Entity Index in VectorFromIndex Table");
       printf("==> search %d --> found %g\n", Current.NumEntity, IntVector_P->Double);
    */

    V->Val[0] = IntVector_P->Double[0] ;
    V->Val[1] = IntVector_P->Double[1] ;
    V->Val[2] = IntVector_P->Double[2] ;
    V->Type = VECTOR;
  }    
  else{
    V->Val[0] = 0.;
    V->Val[1] = 0.;
    V->Val[2] = 0.;
    V->Type = VECTOR; 
    /* WARNING, "Table empty: Uninitialized data or Unknown Entity
       Index in VectorFromIndex Table  */
  }    
}

void Fi_InitValueFromIndex(F_ARG)
{
  int     i, N ;
  struct IntDouble IntDouble_s;
  struct FunctionActive  * D ;

  N = Fct->Para[0];
  
  D = Fct->Active =
    (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

  D->Case.ValueFromIndex.Table = List_Create(N, 1, sizeof(struct IntDouble));

  for (i = 0 ; i < N ; i++) {
    IntDouble_s.Int = (int)(Fct->Para[i*2+1]+0.1);
    IntDouble_s.Double = Fct->Para[i*2+2];
    List_Add(D->Case.ValueFromIndex.Table, &IntDouble_s);
  }
}

void Fi_InitVectorFromIndex(F_ARG)
{
  int     i, N ;
  struct IntVector IntVector_s;
  struct FunctionActive  * D ;

  if ((Fct->NbrParameters)){

    N = Fct->Para[0];
      
    D = Fct->Active =
      (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

    D->Case.ValueFromIndex.Table = List_Create(N, 1, sizeof(struct IntVector[3]));
    
    for (i = 0 ; i < N ; i++) {
      IntVector_s.Int = (int)(Fct->Para[i*4+1]+0.1);
      IntVector_s.Double[0] = Fct->Para[i*4+2];
      IntVector_s.Double[1] = Fct->Para[i*4+3];
      IntVector_s.Double[2] = Fct->Para[i*4+4];
      List_Add(D->Case.ValueFromIndex.Table, &IntVector_s);
    }
  }
  else{
    D = Fct->Active =
      (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

    D->Case.ValueFromIndex.Table = NULL;
  }
}
