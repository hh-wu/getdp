// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

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
    Message::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp){} ;  lo = up - 1 ;
    a = (y[up] - y[lo]) / (x[up] - x[lo]) ;
    yp =  y[up] + ( xp - x[up] ) * a ;
  }

  // Using interpolation function also in multi-harmonic case
  // Input is scalar, output is also scalar, rest of Val is set to zero...
  // Not very elegant, but was already done like that for NbrHar=2...
  // Should we add here a warning?
  // Message::Warning("Function 'Interpolation' interpolates only real values, i.e. result is a real scalar");
  V->Val[0] = yp;
  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }

  /*
  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else if (Current.NbrHar == 2) {
    V->Val[0] = yp ;
    V->Val[1] = 0. ;
  }
  else {
    Message::Error("Function 'Interpolation' not valid for Complex");
  }
  */

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
    Message::Error("Bad argument for linear Interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    dyp = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
  }
  else {
    up = 0 ;  while (x[++up] < xp){} ;  lo = up - 1 ;
    dyp = (y[up] - y[lo]) / (x[up] - x[lo]) ;
  }

  // Allowing interpolation of a real in multi-harmonic case (to change...)
  V->Val[0] = dyp;
  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }

  /*
  if (Current.NbrHar == 1)
    V->Val[0] = dyp ;
  else if (Current.NbrHar == 2) {
    V->Val[0] = dyp ;
    V->Val[1] = 0. ;
  }
  else {
    Message::Error("Function 'dInterpolation' not valid for Complex");
  }
  */
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
    Message::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp){} ;  lo = up - 1 ;
    a = (y[up] - y[lo]) / (x[up] - x[lo]) ;
    yp =  y[up] + ( xp - x[up] ) * a ;
  }

  // Allowing interpolation of a real in multi-harmonic case (to change...)
   V->Val[0] = yp;
  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
  /*
  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else if (Current.NbrHar == 2) {
    V->Val[0] = yp ;
    V->Val[1] = 0. ;
  }
  else {
    Message::Error("Function 'dInterpolation' not valid for Complex");
  }
  */

  V->Type = SCALAR ;
}

void F_InterpolationAkima(F_ARG)
{
  // Third order interpolation with slope control
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
    Message::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp){} ;  lo = up - 1 ;
    a = xp - x[lo] ; a2 = a*a ; a3 = a2*a ;
    yp =  y[lo]
      + D->Case.Interpolation.bi[lo] * a
      + D->Case.Interpolation.ci[lo] * a2
      + D->Case.Interpolation.di[lo] * a3 ;
  }

  // Allowing interpolation of a real in multi-harmonic case (to change...)
  V->Val[0] = yp;
  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }

  /*
  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else if (Current.NbrHar == 2) {
    V->Val[0] = yp ;
    V->Val[1] = 0. ;
  }
  else {
    Message::Error("Function 'InterpolationAkima' not valid for Complex");
  }
  */

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
    Message::Error("Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    dyp = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
  }
  else {
    up = 0 ;  while (x[++up] < xp){} ;  lo = up - 1 ;
    a = xp - x[lo] ; a2 = a*a ;
    dyp = D->Case.Interpolation.bi[lo]
      + D->Case.Interpolation.ci[lo] * 2. * a
      + D->Case.Interpolation.di[lo] * 3. * a2 ;
  }


  // Extension to multi-harmonic case (to change...)
  V->Val[0] = dyp;
  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
  /*
  if (Current.NbrHar == 1)
    V->Val[0] = dyp ;
  else if (Current.NbrHar == 2) {
    V->Val[0] = dyp ;
    V->Val[1] = 0. ;
  }
  else {
    Message::Error("Function 'dInterpolationAkima' not valid for Complex");
  }
  */
  V->Type = SCALAR ;
}


bool Fi_InterpolationBilinear(double *x, double *y, double *M, int NL, int NC,
                              double xp, double yp, double *zp)
{
  double a11, a12, a21, a22;
  int i, j;

  // Interpolate point (xp,yp) in a regular grid
  // x[i] <= xp < x[i+1]
  // y[j] <= yp < y[j+1]

  *zp = 0.0 ;

  // When (xp,yp) lays outside the boundaries of the table:
  // the nearest border is taken
  if (xp < x[0]) xp = x[0];
  else if (xp > x[NL-1]) xp = x[NL-1];
  for (i=0 ; i<NL-1 ; ++i) if (x[i+1] >= xp  &&  xp >= x[i]) break;
  i = (i >= NL) ? NL-1 : i;

  if (yp < y[0]) yp = y[0];
  else if (yp > y[NC-1]) yp = y[NC-1];
  for (j=0 ; j<NC-1 ; ++j) if (y[j+1] >= yp  &&  yp >= y[j]) break;
  j = (j >= NC) ? NC-1 : j;


  a11 = M[   i  + NL * j    ];
  a21 = M[(i+1) + NL * j    ];
  a12 = M[   i  + NL * (j+1)];
  a22 = M[(i+1) + NL * (j+1)];

  *zp = 1/((x[i+1]-x[i])*(y[j+1]-y[j])) *
    ( a11 * ( x[i+1]-xp) * ( y[j+1]-yp) +
      a21 * (-x[i  ]+xp) * ( y[j+1]-yp) +
      a12 * ( x[i+1]-xp) * (-y[j  ]+yp) +
      a22 * (-x[i  ]+xp) * (-y[j  ]+yp) );

  return true ;
}


bool Fi_dInterpolationBilinear(double *x, double *y, double *M, int NL, int NC,
                               double xp, double yp, double *dzp_dx, double *dzp_dy)
{
  double a11, a12, a21, a22;
  int i, j;

  // When (xp,yp) lays outside the boundaries of the table:
  // the nearest border is taken
  if (xp < x[0]) xp = x[0];
  else if (xp > x[NL-1]) xp = x[NL-1];
  for (i=0 ; i<NL-1 ; ++i) if (x[i+1] >= xp  &&  xp >= x[i]) break;
  i = (i >= NL) ? NL-1 : i;

  if (yp < y[0]) yp = y[0];
  else if (yp > y[NC-1]) yp = y[NC-1];
  for (j=0 ; j<NC-1 ; ++j) if (y[j+1] >= yp  &&  yp >= y[j]) break;
  j = (j >= NC) ? NC-1 : j;


  a11 = M[   i  + NL * j    ];
  a21 = M[(i+1) + NL * j    ];
  a12 = M[   i  + NL * (j+1)];
  a22 = M[(i+1) + NL * (j+1)];

  *dzp_dx = 1/((x[i+1]-x[i])*(y[j+1]-y[j])) *
    ( (a21-a11) * ( y[j+1]-yp) +
      (a22-a12) * (-y[j  ]+yp) );

  *dzp_dy = 1/((x[i+1]-x[i])*(y[j+1]-y[j])) *
      ( (a12-a11) * ( x[i+1]-xp) +
        (a22-a21) * (-x[i  ]+xp) );

  return true ;
}

void F_InterpolationBilinear(F_ARG)
{
/*
    It performs a bilinear interpolation at point (xp,yp) based
    on a two-dimensional table (sorted grid).

    Input parameters:
    NL  Number of lines
    NC  Number of columns
    x   values (ascending order) linked to the NL lines of the table
    y   values (ascending order) linked to the NC columns of the table
    M   Matrix M(x,y) = M[x+NL*y]

    xp  x coordinate of interpolation point
    yp  y coordinate of interpolation point

    R. Scorretti
*/

  int     NL, NC;
  double  xp, yp, zp = 0., *x, *y, *M;
  struct FunctionActive  * D;

  if( (A+0)->Type != SCALAR || (A+1)->Type != SCALAR)
    Message::Error("Two Scalar arguments required!");

  if (!Fct->Active)  Fi_InitListMatrix (Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  x = D->Case.ListMatrix.x ;
  y = D->Case.ListMatrix.y ;
  M = D->Case.ListMatrix.data ;

  xp = (A+0)->Val[0] ;
  yp = (A+1)->Val[0] ;

  bool IsInGrid = Fi_InterpolationBilinear (x, y, M, NL, NC, xp, yp, &zp);
  if (!IsInGrid) Message::Error("Extrapolation not allowed (xp=%g ; yp=%g)", xp, yp) ;

  V->Type = SCALAR ;
  V->Val[0] = zp ;
}

void F_dInterpolationBilinear(F_ARG)
{
/*
    It delivers the derivative of the bilinear interpolation at point (xp, yp)
    based on a two-dimensional table (sorted grid).

    Input parameters:
    NL  Number of lines
    NC  Number of columns
    x   values (ascending order) linked to the NL lines of the table
    y   values (ascending order) linked to the NC columns of the table
    M   Matrix M(x,y) = M[x+NL*y]

    xp  x coordinate of interpolation point
    yp  y coordinate of interpolation point

*/

  int     NL, NC;
  double  xp, yp, dzp_dx = 0., dzp_dy = 0., *x, *y, *M;
  struct FunctionActive  * D;

  if( (A+0)->Type != SCALAR || (A+1)->Type != SCALAR)
    Message::Error("Two Scalar arguments required!");

  if (!Fct->Active)  Fi_InitListMatrix (Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  x = D->Case.ListMatrix.x ;
  y = D->Case.ListMatrix.y ;
  M = D->Case.ListMatrix.data ;

  xp = (A+0)->Val[0] ;
  yp = (A+1)->Val[0] ;

  bool IsInGrid = Fi_dInterpolationBilinear (x, y, M, NL, NC, xp, yp, &dzp_dx, &dzp_dy);
  if (!IsInGrid) Message::Error("Extrapolation not allowed (xp=%g ; yp=%g)", xp, yp) ;

  V->Type = VECTOR ;
  V->Val[0] = dzp_dx ;
  V->Val[1] = dzp_dy ;
  V->Val[2] = 0. ;
}


void Fi_InitListMatrix(F_ARG)
{
  int     i=0, k, NL, NC, sz ;
  struct FunctionActive  * D ;

  /*
    The original table structure:
          |  y(1)         y(2)         ...     y(NC)
    ------+--------------------------------------------
    x(1)  |  data(1)    data(NL+1)     ...      .
    x(2)  |  data(2)    data(NL+2)              .
    .     .             .              .
    .     .             .
    x(NL) |  data(NL)   data(2*NL)  ...     data(NL*NC)

    is furnished with the following format:
    [ NL, NC, x(1..NL), y(1..NC), data(1..NL*NC) ]

    R. Scorretti
 */

  D = Fct->Active =
    (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

  NL = Fct->Para[i++];
  NC = Fct->Para[i++];

  sz = 2 + NL + NC + NL*NC ; // expected size of list matrix
  if (Fct->NbrParameters != sz)
    Message::Error("Bad size of input data (expected = %d ; found = %d). "
                   "List with format: x(NbrLines=%d), y(NbrColumns=%d), "
                   "matrix(NbrLines*NbrColumns=%d)",
                   sz, Fct->NbrParameters, NL, NC, NL*NC);

  // Initialize structure and allocate memory
  D->Case.ListMatrix.NbrLines = NL;
  D->Case.ListMatrix.NbrColumns = NC;
  D->Case.ListMatrix.x = (double *) malloc (sizeof(double)*NL);
  D->Case.ListMatrix.y = (double *) malloc (sizeof(double)*NC);
  D->Case.ListMatrix.data = (double *) malloc (sizeof(double)*NL*NC);

  // Assign values
  for (k=0 ; k<NL ; ++k) D->Case.ListMatrix.x[k] = Fct->Para[i++];
  for (k=0 ; k<NC ; ++k) D->Case.ListMatrix.y[k] = Fct->Para[i++];
  for (k=0 ; k<NL*NC ; ++k) D->Case.ListMatrix.data[k] = Fct->Para[i++];
}

void Fi_InitListX(F_ARG)
{
  int     i, N ;
  double  *x ;
  struct FunctionActive  * D ;

  D = Fct->Active =
    (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;
  N = D->Case.Interpolation.NbrPoint = Fct->NbrParameters ;
  x = D->Case.Interpolation.x = (double *)Malloc(sizeof(double)*N) ;

  for (i = 0 ; i < N ; i++)
    x[i] = Fct->Para[i] ;
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


struct IntDouble { int Int; double Double; } ;
struct IntVector { int Int; double Double[3]; } ;

void F_ValueFromIndex (F_ARG)
{
  struct FunctionActive  * D ;
  struct IntDouble * IntDouble_P;

  if (!Fct->Active)  Fi_InitValueFromIndex (Fct, A, V) ;

  D = Fct->Active ;

  if (List_Nbr(D->Case.ValueFromIndex.Table)){
    IntDouble_P = (struct IntDouble *)
      List_PQuery(D->Case.ValueFromIndex.Table, &Current.NumEntity, fcmp_int);
    if(IntDouble_P){
      V->Val[0] = IntDouble_P->Double ;
      V->Type = SCALAR ;
      return;
    }
  }

  Message::Warning("Unknown entity index %d in ValueFromIndex table",
                   Current.NumEntity);
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

void F_VectorFromIndex(F_ARG)
{
  struct FunctionActive  * D ;
  struct IntVector * IntVector_P;

  if (!Fct->Active)  Fi_InitVectorFromIndex (Fct, A, V) ;

  D = Fct->Active ;

  if (List_Nbr(D->Case.ValueFromIndex.Table)){
    IntVector_P = (struct IntVector *)
      List_PQuery(D->Case.ValueFromIndex.Table, &Current.NumEntity, fcmp_int);
    if (IntVector_P){
      V->Val[0] = IntVector_P->Double[0] ;
      V->Val[1] = IntVector_P->Double[1] ;
      V->Val[2] = IntVector_P->Double[2] ;
      V->Type = VECTOR;
      return;
    }
  }
  Message::Warning("Unknown entity index %d in VectorFromIndex table",
                   Current.NumEntity);
  V->Val[0] = 0.;
  V->Val[1] = 0.;
  V->Val[2] = 0.;
  V->Type = VECTOR;
}

void Fi_InitValueFromIndex(F_ARG)
{
  int     i, N ;
  struct IntDouble IntDouble_s;
  struct FunctionActive  * D ;

  if ((Fct->NbrParameters)){
    N = (int)Fct->Para[0];
    D = Fct->Active =
      (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;
    D->Case.ValueFromIndex.Table = List_Create(N + 1, 1, sizeof(struct IntDouble));
    for (i = 0 ; i < N ; i++) {
      IntDouble_s.Int = (int)(Fct->Para[i*2+1]+0.1);
      IntDouble_s.Double = Fct->Para[i*2+2];
      List_Add(D->Case.ValueFromIndex.Table, &IntDouble_s);
    }
  }
  else{
    D = Fct->Active =
      (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;
    D->Case.ValueFromIndex.Table = NULL;
  }
}

void Fi_InitVectorFromIndex(F_ARG)
{
  int     i, N ;
  struct IntVector IntVector_s;
  struct FunctionActive  * D ;

  if ((Fct->NbrParameters)){
    N = (int)Fct->Para[0];
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
