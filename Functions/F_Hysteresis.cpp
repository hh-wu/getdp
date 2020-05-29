// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.
//
// Contributor(s):
//   Johan Gyselinck
//   Kevin Jacques
//

#include <math.h>
#include <string.h>
#include "ProData.h"
#include "F.h"
#include "Message.h"
#include <iostream>

#define SQU(a) ((a)*(a))
#define CUB(a) ((a)*(a)*(a))
#define MU0 1.25663706144e-6

#define FLAG_WARNING_INFO_INV         1
#define FLAG_WARNING_INFO_APPROACH    2
#define FLAG_WARNING_STOP_INV         10

#define FLAG_WARNING_DISPABOVEITER    1

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*
  Vectorized Jiles-Atherton hysteresis model
  J. Gyselinck, P. Dular, N. Sadowski, J. Leite and J.P.A. Bastos,
  "Incorporation of a Jiles-Atherton vector hysteresis model in
  2D FE magnetic field computations. Application of the Newton-Raphson method",
  Vol. 23, No. 3, pp. 685-693, 2004.
 */

double F_Man(double He, double Ms, double a)
{
  // Anhysteretic magnetisation
  if(fabs(He) < 0.01*a)
    //return Ms*He/(3.*a) ; // Aprox. up to 1st order
    return Ms*(He/(3.*a)-1/45*CUB(He/a)) ; // Approx. up to 3rd order
  else return Ms*(cosh(He/a)/sinh(He/a)-a/He) ;
}

double F_dMandHe(double He, double Ms, double a)
{
  // Derivative of the magnetisation Man with respect to the effective field He
  if(fabs(He) < 0.01*a)
    //return Ms/(3.*a) ; // Aprox. up to 1st order
    return Ms/(3.*a)-Ms/(15*a)*SQU(He/a) ; // Approx. up to 3rd order
  else return Ms/a*(1-SQU(cosh(He/a)/sinh(He/a))+SQU(a/He)) ;
}

void FV_Man(double He[3], double Ms, double a, double Man[3])
{
  double nHe = sqrt(He[0]*He[0]+He[1]*He[1]+He[2]*He[2]) ;
  if( !nHe ) {
    Man[0] = Man[1] = Man[2]= 0. ;
  }
  else {
    double auxMan = F_Man(nHe, Ms, a) ;
    Man[0] = auxMan * He[0]/nHe ;
    Man[1] = auxMan * He[1]/nHe ;
    Man[2] = auxMan * He[2]/nHe ;
  }
}

void FV_dMandHe(double He[3], double Ms, double a, double dMandHe[6])
{
  double nHe = sqrt(He[0]*He[0]+He[1]*He[1]+He[2]*He[2]) ;
  double Man = F_Man(nHe, Ms, a) ;
  double ndMandHe = F_dMandHe(nHe,Ms,a) ;

  if( !nHe ) {
    dMandHe[0] = dMandHe[3] = dMandHe[5] = ndMandHe ;
    dMandHe[1] = dMandHe[2] = dMandHe[4] = 0. ;
  }
  else {
    dMandHe[0] = Man/nHe + (ndMandHe - Man/nHe)*He[0]*He[0]/(nHe*nHe) ;
    dMandHe[3] = Man/nHe + (ndMandHe - Man/nHe)*He[1]*He[1]/(nHe*nHe) ;
    dMandHe[5] = Man/nHe + (ndMandHe - Man/nHe)*He[2]*He[2]/(nHe*nHe) ;
    dMandHe[1] =           (ndMandHe - Man/nHe)*He[0]*He[1]/(nHe*nHe) ;
    dMandHe[2] =           (ndMandHe - Man/nHe)*He[0]*He[2]/(nHe*nHe) ;
    dMandHe[4] =           (ndMandHe - Man/nHe)*He[1]*He[2]/(nHe*nHe) ;
  }
}

void FV_dMidHe(double He[3], double Man[3],
         double Mi[3], double dH[3], double k,
         double dMidHe[6])
{
  double dM = sqrt( (Man[0]-Mi[0])*(Man[0]-Mi[0]) + (Man[1]-Mi[1])*(Man[1]-Mi[1]) + (Man[2]-Mi[2])*(Man[2]-Mi[2]) ) ;

  if ( !dM || (Man[0]-Mi[0])*dH[0] + (Man[1]-Mi[1])*dH[1] + (Man[2]-Mi[2])*dH[2] <= 0 ) {
    dMidHe[0] = dMidHe[3] = dMidHe[5] = dMidHe[1] = dMidHe[2] =  dMidHe[4] = 0. ;
  } else {
    double kdM = k * dM;
    dMidHe[0] = (Man[0]-Mi[0])*(Man[0]-Mi[0]) / kdM ;
    dMidHe[3] = (Man[1]-Mi[1])*(Man[1]-Mi[1]) / kdM ;
    dMidHe[5] = (Man[2]-Mi[2])*(Man[2]-Mi[2]) / kdM ;
    dMidHe[1] = (Man[0]-Mi[0])*(Man[1]-Mi[1]) / kdM ;
    dMidHe[2] = (Man[0]-Mi[0])*(Man[2]-Mi[2]) / kdM ;
    dMidHe[4] = (Man[1]-Mi[1])*(Man[2]-Mi[2]) / kdM ;
  }
}

void Vector_dBdH(double H[3], double B[3], double dH[3],
                 struct FunctionActive *D, double dBdH[6])
{
  double M[3], He[3], Man[3], Mi[3] ;
  double dMandHe[6], dMidHe[6], dMdH[6] ;
  double d[6], e[6], f[6] ;

  if(D->Case.Interpolation.NbrPoint != 5)
    Message::Error("Jiles-Atherton parameters missing: {List[{Ms, a, k, c, alpha}]}");
  double Ms    = D->Case.Interpolation.x[0] ;
  double a     = D->Case.Interpolation.x[1] ;
  double kk    = D->Case.Interpolation.x[2] ;
  double c     = D->Case.Interpolation.x[3] ;
  double alpha = D->Case.Interpolation.x[4] ;

  for(int i=0 ; i<3 ; i++){
    M[i]  = B[i]/MU0 - H[i] ; // Magnetisation
    He[i] = H[i] + alpha * M[i] ; // Effective field
  }

  FV_Man(He, Ms, a, Man) ;

  for(int i=0 ; i<3 ; i++)
    Mi[i] = (M[i]-c*Man[i]) / (1-c) ; // Irreversible magnetisation

  FV_dMandHe(He, Ms, a, dMandHe) ;
  FV_dMidHe(He, Man, Mi, dH, kk, dMidHe) ;

  d[0] = 1 - alpha*c*dMandHe[0] - alpha*(1-c)*dMidHe[0] ; // xx
  d[3] = 1 - alpha*c*dMandHe[3] - alpha*(1-c)*dMidHe[3] ; // yy
  d[5] = 1 - alpha*c*dMandHe[5] - alpha*(1-c)*dMidHe[5] ; // zz
  d[1] =   - alpha*c*dMandHe[1] - alpha*(1-c)*dMidHe[1] ; // xy
  d[2] =   - alpha*c*dMandHe[2] - alpha*(1-c)*dMidHe[2] ; // xz
  d[4] =   - alpha*c*dMandHe[4] - alpha*(1-c)*dMidHe[4] ; // yz

  double dd = d[0] * (d[3] *d[5] - d[4] *d[4])
            - d[1] * (d[1] *d[5] - d[4] *d[2])
            + d[2] * (d[1] *d[4] - d[3] *d[2]);

  if(!dd)
    Message::Error("Null determinant of denominator of dm/dh!");

  e[0] =  (d[3]*d[5]-d[4]*d[4])/dd ;
  e[1] = -(d[1]*d[5]-d[2]*d[4])/dd ;
  e[2] =  (d[1]*d[4]-d[2]*d[3])/dd ;
  e[3] =  (d[0]*d[5]-d[2]*d[2])/dd ;
  e[4] = -(d[0]*d[4]-d[1]*d[2])/dd ;
  e[5] =  (d[0]*d[3]-d[1]*d[1])/dd ;

  for(int i=0 ; i<6 ; i++)
    f[i] = c*dMandHe[i] + (1-c)*dMidHe[i] ;

  dMdH[0] = e[0]*f[0]+e[1]*f[1]+e[2]*f[2] ;
  dMdH[1] = e[0]*f[1]+e[1]*f[3]+e[2]*f[4] ;
  dMdH[2] = e[0]*f[2]+e[1]*f[4]+e[2]*f[5] ;
  dMdH[3] = e[1]*f[1]+e[3]*f[3]+e[4]*f[4] ;
  dMdH[4] = e[1]*f[2]+e[3]*f[4]+e[4]*f[5] ;
  dMdH[5] = e[2]*f[2]+e[4]*f[4]+e[5]*f[5] ;

  double slope_factor = 1; // choose 1e2 for increasing slope, for reducing NR iterations (better convergence)

  dBdH[0] =  MU0 * (slope_factor + dMdH[0]) ;
  dBdH[3] =  MU0 * (slope_factor + dMdH[3]) ;
  dBdH[5] =  MU0 * (slope_factor + dMdH[5]) ;
  dBdH[1] =  MU0 * dMdH[1] ;
  dBdH[2] =  MU0 * dMdH[2] ;
  dBdH[4] =  MU0 * dMdH[4] ;
}

void Vector_dHdB(double H[3], double B[3], double dH[3],
                 struct FunctionActive *D,
     double dHdB[6])
{
  double dBdH[6] ;

  // Inverting the matrix representation of the db/dh we get dh/db
  Vector_dBdH(H, B, dH, D, dBdH) ;

  double det =  dBdH[0] * (dBdH[3] *dBdH[5] - dBdH[4] *dBdH[4])
              - dBdH[1] * (dBdH[1] *dBdH[5] - dBdH[4] *dBdH[2])
              + dBdH[2] * (dBdH[1] *dBdH[4] - dBdH[3] *dBdH[2]);
  if(!det)
    Message::Error("Null determinant of db/dh!");

  dHdB[0] =  (dBdH[3]*dBdH[5]-dBdH[4]*dBdH[4])/det ;
  dHdB[1] = -(dBdH[1]*dBdH[5]-dBdH[2]*dBdH[4])/det ;
  dHdB[2] =  (dBdH[1]*dBdH[4]-dBdH[2]*dBdH[3])/det ;
  dHdB[3] =  (dBdH[0]*dBdH[5]-dBdH[2]*dBdH[2])/det ;
  dHdB[4] = -(dBdH[0]*dBdH[4]-dBdH[1]*dBdH[2])/det ;
  dHdB[5] =  (dBdH[0]*dBdH[3]-dBdH[1]*dBdH[1])/det ;
}

void F_dhdb_Jiles(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input : h, b ,dh
  // dhdb_Jiles[{h}, {d a}, {h}-{h}[1] ]{List[hyst_FeSi]}
  // Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha};==> struct FunctionActive *D

  double H[3], B[3], dH[3], dHdB[6] ;
  struct FunctionActive  * D ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("Three vector arguments required");

  if(!Fct->Active)  Fi_InitListX(Fct, A, V) ;
  D = Fct->Active ;

  for(int k=0 ; k<3 ; k++){
    H[k]  = (A+0)->Val[k] ;
    B[k]  = (A+1)->Val[k] ;
    dH[k] = (A+2)->Val[k] ;
  }

  Vector_dHdB(H, B, dH, D, dHdB) ;

  V->Type = TENSOR_SYM ;// xx, xy, xz, yy, yz, zz
  for(int k=0 ; k<6 ; k++)  V->Val[k] = dHdB[k] ;
}

void F_dbdh_Jiles(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input : h, b, dh
  // dbdh_Jiles[{h}, {b}, {h}-{h}[1] ]{List[hyst_FeSi]}
  // Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha};==> struct FunctionActive *D

  double H[3], B[3], dH[3], dBdH[6] ;
  struct FunctionActive *D;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("dbdh_Jiles requires three vector: {h} at t_i, {b} at t_i and ({h}-{h}[1]), i.e {h} at t_i - {h} at t_{i-1}");

  if(!Fct->Active)  Fi_InitListX(Fct, A, V) ;
  D = Fct->Active ;

  for(int k=0 ; k<3 ; k++){
    H[k]  = (A+0)->Val[k] ;
    B[k]  = (A+1)->Val[k] ;
    dH[k] = (A+2)->Val[k] ;
  }

  Vector_dBdH(H, B, dH, D, dBdH) ;

  V->Type = TENSOR_SYM ;
  for(int k=0 ; k<6 ; k++)  V->Val[k] = dBdH[k] ;
}

void F_h_Jiles(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input : h1, b1, b2
  // h_Jiles[ {h}[1], {b}[1], {b} ]{List[hyst_FeSi]}
  // Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha};

  double Hone[3], Bone[3], Btwo[3], Htwo[3] ;
  struct FunctionActive *D;

  void Vector_H2(double Hone[3], double Bone[3], double Btwo[3], int n,
                  struct FunctionActive *D, double Htwo[3]) ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("h_Jiles requires three vector arguments: {h} at t_{i-1}, {b} at t_{i-1} and {b} at t_i");

  if(!Fct->Active)  Fi_InitListX(Fct, A, V) ;
  D = Fct->Active ;

  for(int k=0 ; k<3 ; k++) {
    Hone[k] = (A+0)->Val[k] ;
    Bone[k] = (A+1)->Val[k] ;
    Btwo[k] = (A+2)->Val[k] ;
  }

  Vector_H2(Hone, Bone, Btwo, 10, D, Htwo) ;

  V->Type = VECTOR ;
  for(int k=0 ; k<3 ; k++)  V->Val[k] = Htwo[k] ;
}

void F_b_Jiles(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input : b1, h1, h2
  // b_Jiles[ {b}[1], {h}[1], {h} ]{List[hyst_FeSi]}
  // Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha};

  double Bone[3], Hone[3], Btwo[3], Htwo[3] ;
  struct FunctionActive  * D ;

  void Vector_B2(double Bone[3], double Hone[3], double Htwo[3], int n,
                  struct FunctionActive *D, double Btwo[3]) ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("b_Jiles requires three vector arguments: {b} at t_{i-1}, "
                   "{h} at t_{i-1} and {h} at t_i");

  if(!Fct->Active)  Fi_InitListX(Fct, A, V) ;
  D = Fct->Active ;

  for(int k = 0; k < 3 ; k++){
    Bone[k] = (A+0)->Val[k] ;
    Hone[k] = (A+1)->Val[k] ;
    Htwo[k] = (A+2)->Val[k] ;
  }
  Vector_B2(Bone, Hone, Htwo, 10, D, Btwo) ;

  V->Type = VECTOR ;
  for(int k = 0; k < 3 ; k++) V->Val[k] = Btwo[k] ;
}


void Vector_H2(double Hone[3], double Bone[3], double Btwo[3], int n,
                  struct FunctionActive *D, double Htwo[3])
{
  double H[3], dH[3], B[3], dB[3] ;
  double dHdB[6] ;

  for(int k=0 ; k<3 ; k++) {
    H[k]  = Hone[k];
    dB[k] = (Btwo[k] - Bone[k])/(double)n ;
  }

  for(int i=0 ; i<n ; i++) {
    for(int k=0 ; k<3 ; k++)
      B[k] = (double)(n-i)/(double)n * Bone[k] + (double)i/(double)n * Btwo[k] ;
    if(!i) {
      for(int k=0; k<3; k++) dH[k] = dB[k] ;

      Vector_dHdB(H, B, dH, D, dHdB) ;
      dH[0] = dHdB[0] * dB[0] + dHdB[1] * dB[1] + dHdB[2] * dB[2] ;
      dH[1] = dHdB[1] * dB[0] + dHdB[3] * dB[1] + dHdB[4] * dB[2] ;
      dH[2] = dHdB[2] * dB[0] + dHdB[4] * dB[1] + dHdB[5] * dB[2] ;
    }
    Vector_dHdB(H, B, dH, D, dHdB) ;
    dH[0] = dHdB[0] * dB[0] + dHdB[1] * dB[1] + dHdB[2] * dB[2] ;
    dH[1] = dHdB[1] * dB[0] + dHdB[3] * dB[1] + dHdB[4] * dB[2] ;
    dH[2] = dHdB[2] * dB[0] + dHdB[4] * dB[1] + dHdB[5] * dB[2] ;

    for(int k=0 ; k<3 ; k++)  H[k] += dH[k] ;
  }

  for(int k=0 ; k<3 ; k++) Htwo[k] = H[k] ;
}

void Vector_B2(double Bone[3], double Hone[3], double Htwo[3], int n,
               struct FunctionActive *D, double Btwo[3])
{
  double H[3], dH[3], B[3] ;
  double dBdH[6] ;

  for(int k=0 ; k<3 ; k++) {
    B[k]  = Bone[k];
    dH[k] = (Htwo[k] - Hone[k])/(double)n ;
  }

  for(int i=0 ; i<n ; i++) {
    for(int k=0 ; k<3 ; k++)
      H[k] = (double)(n-i)/(double)n * Hone[k] + (double)i/(double)n * Htwo[k] ;

    Vector_dBdH(H, B, dH, D, dBdH) ;

    B[0] += dBdH[0] * dH[0] + dBdH[1] * dH[1] + dBdH[2] * dH[2] ;
    B[1] += dBdH[1] * dH[0] + dBdH[3] * dH[1] + dBdH[4] * dH[2] ;
    B[2] += dBdH[2] * dH[0] + dBdH[4] * dH[1] + dBdH[5] * dH[2] ;
  }

  for(int k=0 ; k<3 ; k++) Btwo[k] = B[k] ;
}

/* ------------------------------------------------------------------------ */
/*
   Ducharne's model of static hysteresis

   Raulet, M.A.; Ducharne, B.; Masson, J.P.; Bayada, G.;
   "The magnetic field diffusion equation including dynamic hysteresis:
   a linear formulation of the problem",
   IEEE Trans. Mag., vol. 40, no. 2, pp. 872-875 (2004).

   The magnetic field h is computed for the path: (b0,h0)  --->  (b,h)
   The final flux density b is imposed.

   In practice, the magnetic field is given by:

              /b
       h(b) = |  (dh/db).db
              /b0

   where the values of (dh/db) are functions of (b,h) and are interpolated
   from a provided table {bi, hi, M, NL, NC}, obtained e.g. experimentally.

   bi  Flux density (T) for the tabulated values
   hi  Magnetic field (A/m) for the tabulated values
   M   Matrix with the slopes of reversal paths
   NL  Number of lines
   NC  Number of columns
   b0  Initial flux density (T)
   h0  Initial magnetic field (A/m)
   b   Final flux density (T)

*/
/* ------------------------------------------------------------------------ */

double Fi_h_Ducharne(double *hi, double *bi, double *M, int NL, int NC,
                      double h0, double b0, double b)
{
  double db, dh, dHdB, s;
  int i, N = 200 ; // fixed number of steps for numerical integration

  db = (b - b0)/N ;
  s = (b - b0 < 0) ? -1. : 1. ;
  for(i=0 ; i < N ; ++i) {
    bool IsInGrid = Fi_InterpolationBilinear(hi, bi, M, NL, NC, s*h0, s*b0, &dHdB);
    if(!IsInGrid) dHdB = MU0 ;
    dh = dHdB * db;
    h0 += dh;
    b0 += db;
  }
  return h0 ;
}

void F_h_Ducharne(F_ARG)
{
  int    NL, NC, i;
  double b0, h0, b, h, *bi, *hi, *M;
  struct FunctionActive  * D;

  if(!Fct->Active)  Fi_InitListMatrix(Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  hi = D->Case.ListMatrix.x ;
  bi = D->Case.ListMatrix.y ;
  M =  D->Case.ListMatrix.data ;

  for(i=0 ; i<3 ; ++i) {
    // (h0,b0) = state of the model, and b
    h0 = (A+0)->Val[i] ;
    b0 = (A+1)->Val[i] ;
    b  = (A+2)->Val[i] ;

    // Compute the magnetic field
    h = Fi_h_Ducharne(hi, bi, M, NL, NC, h0, b0, b);
    V->Val[i] = h;
  }

  V->Type = VECTOR ;
}

void F_nu_Ducharne(F_ARG)
{
  int    NL, NC, i;
  double b0, h0, b[3], h[3], *bi, *hi, *M;
  struct FunctionActive  * D;

  if(!Fct->Active) Fi_InitListMatrix(Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  hi = D->Case.ListMatrix.x ;
  bi = D->Case.ListMatrix.y ;
  M  = D->Case.ListMatrix.data ;

  for(i=0 ; i<3 ; ++i) {
    // Get (h0,b0) = state of the model, and b
    h0 = (A+0)->Val[i] ;
    b0 = (A+1)->Val[i] ;
    b[i] = (A+2)->Val[i] ;

    // Compute h
    h[i] = Fi_h_Ducharne(hi, bi, M, NL, NC, h0, b0, b[i]);
  }

  V->Type = TENSOR_SYM ;
  V->Val[0] = (b[0] == 0) ? 1/(1e4*MU0) : h[0]/b[0]  ;  V->Val[1] = 0.0  ;  V->Val[2] = 0 ;
  V->Val[3] = (b[1] == 0) ? 1/(1e4*MU0) : h[1]/b[1]  ;  V->Val[4] = 0 ;
  V->Val[5] = (b[2] == 0) ? 1/(1e4*MU0) : h[2]/b[2]  ;
}

void F_dhdb_Ducharne(F_ARG)
{
  int    NL, NC, i;
  double b0, h0, b[3], *bi, *hi, *M, dHdB[3], s;
  struct FunctionActive  * D;

  if(!Fct->Active)  Fi_InitListMatrix(Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  hi = D->Case.ListMatrix.x ;
  bi = D->Case.ListMatrix.y ;
  M  = D->Case.ListMatrix.data ;

  for(i=0 ; i<3 ; ++i) {
    // Get (h0,b0) = state of the model, and b
    h0 = (A+0)->Val[i] ;
    b0 = (A+1)->Val[i] ;
    b[i] = (A+2)->Val[i] ;
    s = (b[i] - b0 < 0) ? -1 : +1;

    bool IsInGrid = Fi_InterpolationBilinear(hi, bi, M, NL, NC, s*h0, s*b0, &(dHdB[i]));
    if(!IsInGrid) dHdB[i] = MU0 ;
  }

  V->Type = TENSOR_SYM ;
  V->Val[0] = dHdB[0]  ;  V->Val[1] = 0.0  ;  V->Val[2] = 0 ;
  V->Val[3] = dHdB[1]  ;  V->Val[4] = 0 ;
  V->Val[5] = dHdB[2]  ;
}

double norm(const double a[3])
{
  return sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
}

//==============================================================
// K. Jacques functions for the Energy-Based Hysteresis Model
//==============================================================

//---------------------------------------------------------
// SENSITIVE PARAMETERS SET AS GLOBAL VALUES
//---------------------------------------------------------

int    FLAG_DIM;
int    FLAG_SYM;
int    FLAG_CENTRAL_DIFF;
int    FLAG_INVMETHOD;
int    FLAG_JACEVAL;
int    FLAG_APPROACH;
int    FLAG_MINMETHOD;
int    FLAG_ANHYLAW;
int    FLAG_WARNING;
double TOLERANCE_JS;
double TOLERANCE_0;
double TOLERANCE_NR;
int    MAX_ITER_NR;
double TOLERANCE_OM;
int    MAX_ITER_OM ;
int    FLAG_ANA ;
double TOLERANCE_NJ ;
double DELTA_0;
double DELTAJ_0;
double SLOPE_FACTOR;
int    FLAG_HOMO;
int    NCOMP;

void set_sensi_param(struct FunctionActive *D)
{
  ::FLAG_DIM            = D->Case.Interpolation.x[0] ;
  ::FLAG_SYM            = 0;
  ::FLAG_CENTRAL_DIFF   = 1;
  int j = 5+2*D->Case.Interpolation.x[1];
  //int j = 11 ;
  ::FLAG_INVMETHOD      = D->Case.Interpolation.x[j+1] ;
  /*
  FLAG_INVMETHOD = 1 --> NR_ana (homemade)
  FLAG_INVMETHOD = 2 --> NR_num (homemade)
  FLAG_INVMETHOD = 3 --> Good_bfgs (homemade)
  */
  ::FLAG_JACEVAL  = D->Case.Interpolation.x[j+2] ;
  /*
  FLAG_JACEVAL  = 1 --> JAC_ana
  FLAG_JACEVAL  = 2 --> JAC_num
  */
  ::FLAG_APPROACH      = D->Case.Interpolation.x[j+3] ;
  /*
  FLAG_APPROACH = 1 --> variational approach (Jk)
  FLAG_APPROACH = 2 --> Vector Play Model approach (hrk)
  FLAG_APPROACH = 3 --> full differential approach (hrk)
  */
  ::FLAG_MINMETHOD      = D->Case.Interpolation.x[j+4] ;
  /*
  FLAG_MINMETHOD = 1 --> steepest descent (homemade)
  FLAG_MINMETHOD = 2 --> conjugate fr (gsl)
  FLAG_MINMETHOD = 3 --> conjugate pr (gsl)
  FLAG_MINMETHOD = 4 --> bfgs2 (gsl)
  FLAG_MINMETHOD = 5 --> bfgs (gsl)
  FLAG_MINMETHOD = 6 --> steepest descent (gsl)
  FLAG_MINMETHOD = 11   --> steepest descent+ (homemade)\n"
  FLAG_MINMETHOD = 22   --> conjugate Fletcher-Reeves (homemade)\n"
  FLAG_MINMETHOD = 33   --> conjugate Polak-Ribiere (homemade)\n"
  FLAG_MINMETHOD = 333  --> conjugate Polak-Ribiere+ (homemade)\n"
  FLAG_MINMETHOD = 1999 --> conjugate Dai Yuan 1999 (p.85) (homemade)\n"
  FLAG_MINMETHOD = 2005 --> conjugate Hager Zhang 2005 (p.161) (homemade)\n"
  FLAG_MINMETHOD = 77   --> newton (homemade)\n", ::FLAG_MINMETHOD);
  */
  ::FLAG_ANHYLAW      = D->Case.Interpolation.x[j+5] ;
  /*
  FLAG_ANHYLAW = 1 --> hyperbolic tangent
  FLAG_ANHYLAW = 2 --> double langevin function
  */
  ::FLAG_WARNING        = D->Case.Interpolation.x[j+6] ;
  /*
  #define FLAG_WARNING_INFO_INV         1
  #define FLAG_WARNING_INFO_APPROACH    2
  #define FLAG_WARNING_STOP_INV         10

  #define FLAG_WARNING_DISPABOVEITER    1
  */

  ::TOLERANCE_JS        = D->Case.Interpolation.x[j+7] ; // SENSITIVE_PARAM (1.e-3) // 1.e-4
  ::TOLERANCE_0         = D->Case.Interpolation.x[j+8] ; // SENSITIVE_PARAM (1.e-7)

  ::TOLERANCE_NR        = D->Case.Interpolation.x[j+9] ; // SENSITIVE_PARAM (1.e-7) // 1.e-8 needed for diff with NR,1.e-5
  ::MAX_ITER_NR         = D->Case.Interpolation.x[j+10] ; // SENSITIVE_PARAM (200)

  ::TOLERANCE_OM        = D->Case.Interpolation.x[j+11] ; // SENSITIVE_PARAM (1.e-11)// 1.e-15 allows to work for square if TOLERANCE_NJ=1.e-3 & DELTA_0=1.e-5 for numjac)
  ::MAX_ITER_OM         = D->Case.Interpolation.x[j+12] ; // SENSITIVE_PARAM (700)

  ::FLAG_ANA            = D->Case.Interpolation.x[j+13] ; // SENSITIVE_PARAM (0='only numerical jacobian')
  ::TOLERANCE_NJ        = D->Case.Interpolation.x[j+14] ; // SENSITIVE_PARAM (1.e-5 for square;
                                                          //                  1.e-3 for VinchT.pro & transfo.pro)
  ::DELTA_0             = D->Case.Interpolation.x[j+15] ; // SENSITIVE_PARAM (1.e-3 for square;
                                                          //                  1.e0 for VinchT & transfo)
  ::DELTAJ_0            = 1e-3; //only used with VAR approach when a Numerical approx of the hessian dd_omega is called in Taylor approx
  ::SLOPE_FACTOR        = 1; // or 1e2 for better convergence
  ::FLAG_HOMO           = D->Case.Interpolation.x[j+16] ; //

  /*
  int LenX= D->Case.ListMatrix.NbrLines-(j+17);
  printf("oh my: %d\n", LenX   );
  for (int n=0; n<LenX;n++)
   printf("h(%d): %g\n", n, D->Case.Interpolation.x[j+17+n]   );
  getchar();
  */

  switch(::FLAG_SYM)
  {
    case 1:
      ::NCOMP=6;
    break;
    case 0:
      ::NCOMP=9;
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'set_sensi_param'.\n");
    break;
  }
}

struct params_Cells_EB
{
  int idcell, N;
  double Ja, ha, Jb, hb;
  double *kappa, *w, *Xp;
  double h[3];
  int compout;
  double Jp[3];
};
//----------------------------------------------------------

//************************************************
// Usefull Mathematical functions :
//************************************************

bool limiter(const double Js, double v[3])
{
  double max = (1-::TOLERANCE_JS)*Js ;
  double mod = norm(v);
  if(mod >= max){

    for (int n=0; n<3; n++)
      v[n] *= max/mod;
    return true;
    //Message::Warning("Js=%g, norm(J)=%g", Js, mod);
  }
  return false;
}

double Mul_VecVec(const double *v1, const double *v2)
{
  return v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2];
}

void Mul_TensorVec(const double *M, const double *v, double *Mv, const int transpose_M)
{
  switch(::FLAG_SYM)
  {
    case 1:
      Mv[0]=M[0]*v[0]+M[1]*v[1]+M[2]*v[2];
      Mv[1]=M[1]*v[0]+M[3]*v[1]+M[4]*v[2];
      Mv[2]=M[2]*v[0]+M[4]*v[1]+M[5]*v[2];
    break;
    case 0:
      if(transpose_M==1)
      {
        Mv[0]=M[0]*v[0]+M[3]*v[1]+M[6]*v[2];
        Mv[1]=M[1]*v[0]+M[4]*v[1]+M[7]*v[2];
        Mv[2]=M[2]*v[0]+M[5]*v[1]+M[8]*v[2];
      }
      else
      {
        Mv[0]=M[0]*v[0]+M[1]*v[1]+M[2]*v[2];
        Mv[1]=M[3]*v[0]+M[4]*v[1]+M[5]*v[2];
        Mv[2]=M[6]*v[0]+M[7]*v[1]+M[8]*v[2];
      }
    break;
    default:
      Message::Error("Invalid parameter for function 'Mul_TensorVec'");
    break;
  }
}

void Mul_TensorSymTensorSym(double *A, double *B, double *C)
{
  //----------------------
  //What is done actually: C[9] = A[6] . B[6]
  //----------------------
  C[0]=A[0]*B[0]+A[1]*B[1]+A[2]*B[2];
  C[1]=A[0]*B[1]+A[1]*B[3]+A[2]*B[4];
  C[2]=A[0]*B[2]+A[1]*B[4]+A[2]*B[5];
  C[3]=A[1]*B[0]+A[3]*B[1]+A[4]*B[2];
  C[4]=A[1]*B[1]+A[3]*B[3]+A[4]*B[4];
  C[5]=A[1]*B[2]+A[3]*B[4]+A[4]*B[5];
  C[6]=A[2]*B[0]+A[4]*B[1]+A[5]*B[2];
  C[7]=A[2]*B[1]+A[4]*B[3]+A[5]*B[4];
  C[8]=A[2]*B[2]+A[4]*B[4]+A[5]*B[5];
}

void Mul_TensorNonSymTensorNonSym(double *A, double *B, double *C) // NOT USED
{
  //----------------------
  //What is done actually: C[9] = A[9] . B[9]
  //----------------------
  C[0]=A[0]*B[0]+A[1]*B[3]+A[2]*B[6];
  C[1]=A[0]*B[1]+A[1]*B[4]+A[2]*B[7];
  C[2]=A[0]*B[2]+A[1]*B[5]+A[2]*B[8];
  C[3]=A[3]*B[0]+A[4]*B[3]+A[5]*B[6];
  C[4]=A[3]*B[1]+A[4]*B[4]+A[5]*B[7];
  C[5]=A[3]*B[2]+A[4]*B[5]+A[5]*B[8];
  C[6]=A[6]*B[0]+A[7]*B[3]+A[8]*B[6];
  C[7]=A[6]*B[1]+A[7]*B[4]+A[8]*B[7];
  C[8]=A[6]*B[2]+A[7]*B[5]+A[8]*B[8];
}

void Mul_TensorNonSymTensorSym(double *A, double *B, double *C) //NOT USED
{
  /*
  //----------------------
  //What is done actually: C[9] = A[9] . B[6]
  //----------------------
  // Non Sym Output C + 3D case
  C[0] =  A[0] * B[0]+A[1] * B[1]+A[2] * B[2]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[3]+A[2] * B[4]; //xy
  C[2] =  A[0] * B[2]+A[1] * B[4]+A[2] * B[5]; //xz
  C[3] =  A[3] * B[0]+A[4] * B[1]+A[5] * B[2]; //yx
  C[4] =  A[3] * B[1]+A[4] * B[3]+A[5] * B[4]; //yy
  C[5] =  A[3] * B[2]+A[4] * B[4]+A[5] * B[5]; //yz
  C[6] =  A[6] * B[0]+A[7] * B[1]+A[8] * B[2]; //zx
  C[7] =  A[6] * B[1]+A[7] * B[3]+A[8] * B[4]; //zy
  C[8] =  A[6] * B[2]+A[7] * B[4]+A[8] * B[5]; //zz

  // Non Sym Output C + 2D case
  C[0] =  A[0] * B[0]+A[1] * B[1]+A[2] * B[2]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[3]+A[2] * B[4]; //xy
  C[2] =  0.;                                  //xz
  C[3] =  A[3] * B[0]+A[4] * B[1]+A[5] * B[2]; //yx
  C[4] =  A[3] * B[1]+A[4] * B[3]+A[5] * B[4]; //yy
  C[5] =  0.;                                  //yz
  C[6] =  0.;                                  //zx
  C[7] =  0.;                                  //zy
  C[8] =  1.;                                  //zz

  // Sym Output C + 3D case
  C[0] =  A[0] * B[0]+A[1] * B[1]+A[2] * B[2]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[3]+A[2] * B[4]; //xy
  C[2] =  A[0] * B[2]+A[1] * B[4]+A[2] * B[5]; //xz
  C[3] =  A[3] * B[1]+A[4] * B[3]+A[5] * B[4]; //yy
  C[4] =  A[3] * B[2]+A[4] * B[4]+A[5] * B[5]; //yz
  C[5] =  A[6] * B[2]+A[7] * B[4]+A[8] * B[5]; //zz

  // Sym Output C + 2D case
  C[0] =  A[0] * B[0]+A[1] * B[1]+A[2] * B[2]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[3]+A[2] * B[4]; //xy
  C[2] =  0.;                                  //xz
  C[3] =  A[3] * B[1]+A[4] * B[3]+A[5] * B[4]; //yy
  C[4] =  0.;                                  //yz
  C[5] =  1.;                                  //zz
  //----------------------
  */

  C[0] =  A[0] * B[0]+A[1] * B[1]+A[2] * B[2]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[3]+A[2] * B[4]; //xy
  switch(::FLAG_SYM)
  {
    case 1: // Symmetrical Tensor
      C[3] =  A[3] * B[1]+A[4] * B[3]+A[5] * B[4]; //yy
      switch(::FLAG_DIM) {
        case 2: // 2D case
          C[5] = 1.; // zz
          C[2] = C[4] = 0.; //xz //yz
        break;
        case 3: // 3D case
          C[2] =  A[0] * B[2]+A[1] * B[4]+A[2] * B[5]; //xz
          C[4] =  A[3] * B[2]+A[4] * B[4]+A[5] * B[5]; //yz
          C[5] =  A[6] * B[2]+A[7] * B[4]+A[8] * B[5]; //zz
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Mul_TensorSymTensorNonSym'.");
        break;
      }
    break;
    case 0: // Non Symmetrical Tensor
      C[3] =  A[3] * B[0]+A[4] * B[1]+A[5] * B[2]; //yx
      C[4] =  A[3] * B[1]+A[4] * B[3]+A[5] * B[4]; //yy
      switch(::FLAG_DIM) {
        case 2: // 2D case
          C[8] = 1.; // zz
          C[2] = C[5] = C[6] = C[7] = 0.; //xz //yz //zx //zy
        break;
        case 3: // 3D case
          C[2] =  A[0] * B[2]+A[1] * B[4]+A[2] * B[5]; //xz
          C[5] =  A[3] * B[2]+A[4] * B[4]+A[5] * B[5]; //yz
          C[6] =  A[6] * B[0]+A[7] * B[1]+A[8] * B[2]; //zx
          C[7] =  A[6] * B[1]+A[7] * B[3]+A[8] * B[4]; //zy
          C[8] =  A[6] * B[2]+A[7] * B[4]+A[8] * B[5]; //zz
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Mul_TensorSymTensorNonSym'.");
        break;
      }
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Mul_TensorSymTensorNonSym'.\n");
    break;
  }
}


void Mul_TensorSymTensorNonSym(double *A, double *B, double *C)
{

  /*
  //----------------------
  //What is done actually: C[9] = A[6] . B[9]
  //----------------------
  // Non Sym Output C + 3D case
  C[0] =  A[0] * B[0]+A[1] * B[3]+A[2] * B[6]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[4]+A[2] * B[7]; //xy
  C[2] =  A[0] * B[2]+A[1] * B[5]+A[2] * B[8]; //xz
  C[3] =  A[1] * B[0]+A[3] * B[3]+A[4] * B[6]; //yx
  C[4] =  A[1] * B[1]+A[3] * B[4]+A[4] * B[7]; //yy
  C[5] =  A[1] * B[2]+A[3] * B[5]+A[4] * B[8]; //yz
  C[6] =  A[2] * B[0]+A[4] * B[3]+A[5] * B[6]; //zx
  C[7] =  A[2] * B[1]+A[4] * B[4]+A[5] * B[7]; //zy
  C[8] =  A[2] * B[2]+A[4] * B[5]+A[5] * B[8]; //zz

  // Non Sym Output C + 2D case
  C[0] =  A[0] * B[0]+A[1] * B[3]+A[2] * B[6]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[4]+A[2] * B[7]; //xy
  C[2] =  0.;                                  //xz
  C[3] =  A[1] * B[0]+A[3] * B[3]+A[4] * B[6]; //yx
  C[4] =  A[1] * B[1]+A[3] * B[4]+A[4] * B[7]; //yy
  C[5] =  0.;                                  //yz
  C[6] =  0.;                                  //zx
  C[7] =  0.;                                  //zy
  C[8] =  1.;                                  //zz

  // Sym Output C + 3D case
  C[0] =  A[0] * B[0]+A[1] * B[3]+A[2] * B[6]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[4]+A[2] * B[7]; //xy
  C[2] =  A[0] * B[2]+A[1] * B[5]+A[2] * B[8]; //xz
  C[3] =  A[1] * B[1]+A[3] * B[4]+A[4] * B[7]; //yy
  C[4] =  A[1] * B[2]+A[3] * B[5]+A[4] * B[8]; //yz
  C[5] =  A[2] * B[2]+A[4] * B[5]+A[5] * B[8]; //zz

  // Sym Output C + 2D case
  C[0] =  A[0] * B[0]+A[1] * B[3]+A[2] * B[6]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[4]+A[2] * B[7]; //xy
  C[2] =  0.;                                  //xz
  C[3] =  A[1] * B[1]+A[3] * B[4]+A[4] * B[7]; //yy
  C[4] =  0.;                                  //yz
  C[5] =  1.;                                  //zz
  //----------------------
  */

  C[0] =  A[0] * B[0]+A[1] * B[3]+A[2] * B[6]; //xx
  C[1] =  A[0] * B[1]+A[1] * B[4]+A[2] * B[7]; //xy
  switch(::FLAG_SYM)
  {
    case 1: // Symmetrical Tensor
      C[3] =  A[1] * B[1]+A[3] * B[4]+A[4] * B[7]; //yy
      switch(::FLAG_DIM) {
        case 2: // 2D case
          C[5] = 1.; // zz
          C[2] = C[4] = 0.; //xz //yz
        break;
        case 3: // 3D case
          C[2] =  A[0] * B[2]+A[1] * B[5]+A[2] * B[8]; //xz
          C[4] =  A[1] * B[2]+A[3] * B[5]+A[4] * B[8]; //yz
          C[5] =  A[2] * B[2]+A[4] * B[5]+A[5] * B[8]; //zz
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Mul_TensorSymTensorNonSym'.");
        break;
      }
    break;
    case 0: // Non Symmetrical Tensor
      C[3] =  A[1] * B[0]+A[3] * B[3]+A[4] * B[6]; //yx
      C[4] =  A[1] * B[1]+A[3] * B[4]+A[4] * B[7]; //yy
      switch(::FLAG_DIM) {
        case 2: // 2D case
          C[8] = 1.; // zz
          C[2] = C[5] = C[6] = C[7] = 0.; //xz //yz //zx //zy
        break;
        case 3: // 3D case
          C[2] =  A[0] * B[2]+A[1] * B[5]+A[2] * B[8]; //xz
          C[5] =  A[1] * B[2]+A[3] * B[5]+A[4] * B[8]; //yz
          C[6] =  A[2] * B[0]+A[4] * B[3]+A[5] * B[6]; //zx
          C[7] =  A[2] * B[1]+A[4] * B[4]+A[5] * B[7]; //zy
          C[8] =  A[2] * B[2]+A[4] * B[5]+A[5] * B[8]; //zz
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Mul_TensorSymTensorNonSym'.");
        break;
      }
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Mul_TensorSymTensorNonSym'.\n");
    break;
  }
}

void Inv_Tensor3x3(double *T, double *invT)
{
  double det;
  switch(::FLAG_DIM)
  {
    case 2:
      det =  T[0] * T[4] - T[1] * T[3];
      if (!det)
        Message::Error("Null determinant of invT! Case %d", ::FLAG_DIM);
      invT[0]= T[4]/det;
      invT[1]= -T[1]/det;
      invT[3]= -T[3]/det;
      invT[4]= T[0]/det;
      invT[2]=  invT[5] = invT[6] =  invT[7] = 0.;
      invT[8]= 1.;

    break;
    case 3:
      det= T[0]*T[4]*T[8]+T[1]*T[5]*T[6]+T[2]*T[3]*T[7]
          -T[2]*T[4]*T[6]-T[0]*T[5]*T[7]-T[1]*T[3]*T[8];
      if (!det)
        Message::Error("Null determinant of invT! Case %d", ::FLAG_DIM);
      invT[0]=(T[4]*T[8]-T[5]*T[7])/det;
      invT[1]=(T[2]*T[7]-T[1]*T[8])/det;
      invT[2]=(T[1]*T[5]-T[2]*T[4])/det;
      invT[3]=(T[5]*T[6]-T[3]*T[8])/det;
      invT[4]=(T[0]*T[8]-T[2]*T[6])/det;
      invT[5]=(T[2]*T[3]-T[0]*T[5])/det;
      invT[6]=(T[3]*T[7]-T[4]*T[6])/det;
      invT[7]=(T[1]*T[6]-T[0]*T[7])/det;
      invT[8]=(T[0]*T[4]-T[1]*T[3])/det;

    break;
    default:
      Message::Error("Invalid parameter for function 'Inv_Tensor3x3'");
    break;
  }
}

void Inv_TensorSym3x3(double *T, double *invT)
{
  double det ;
  switch(::FLAG_DIM)
  {
    case 2:
      det =  T[0] * T[3] - T[1] * T[1];
      if (!det)
        Message::Error("Null determinant of Sym invT! Case %d", ::FLAG_DIM);
      invT[0] =  T[3]/det ;
      invT[1] = -T[1]/det ;
      invT[3] =  T[0]/det ;
      invT[2] =  invT[4] =  0. ;
      invT[5] =  1.;
    break;

    case 3:
      det =  T[0] * (T[3] * T[5] - T[4] * T[4])
           - T[1] * (T[1] * T[5] - T[4] * T[2])
           + T[2] * (T[1] * T[4] - T[3] * T[2]);
      if (!det)
        Message::Error("Null determinant of Sym invT! Case %d", ::FLAG_DIM);
      invT[0] =  (T[3]*T[5]-T[4]*T[4])/det ;
      invT[1] = -(T[1]*T[5]-T[2]*T[4])/det ;
      invT[2] =  (T[1]*T[4]-T[2]*T[3])/det ;
      invT[3] =  (T[0]*T[5]-T[2]*T[2])/det ;
      invT[4] = -(T[0]*T[4]-T[1]*T[2])/det ;
      invT[5] =  (T[0]*T[3]-T[1]*T[1])/det ;
    break;

    default:
      Message::Error("Invalid parameter for function 'Inv_TensorSym3x3'");
    break;
  }
}

// pour info
// #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
// http://www.gnu.org/software/gsl/manual/html_node/Multimin-Examples.html


#if defined(HAVE_GSL)
#include <gsl/gsl_vector.h>
#include <gsl/gsl_multiroots.h>
#include <gsl/gsl_multimin.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_min.h>
#include <gsl/gsl_roots.h>
#endif

//************************************************
// Anhysteretic curve Characteristics :
//************************************************

// 1. Hyperbolic tangent ( used parameters : Js, alpha)
double Janhy(double nhr, double Js, double alpha)
{
    double y=nhr/alpha;
   if (fabs(y)<(::TOLERANCE_0))
      return Js*y;
   else
      return Js*tanh(y);

}
double dJanhy(double nhr, double Js, double alpha)
{
  double y=nhr/alpha;
   if (fabs(y)<(::TOLERANCE_0))
       return Js/alpha;
   else if (fabs(y)>350) // otherwise overflow
       return 0;
   else
       return Js/alpha*(1.-SQU(tanh(y)));
}
double Xanhy(double nhr,double Js, double alpha)
{
   double y=nhr/alpha;
   if (fabs(y)<(::TOLERANCE_0))
       return Js/alpha;
   else
       return Js*tanh(y)/nhr;
}

double dXanhy(double nhr,double Js, double alpha)
{
   double y=nhr/alpha;
   if (fabs(y)<(::TOLERANCE_0))
       return 2./3.*Js*y/alpha;  // DOUBT : need to add .../ fxc ??
   else
       return (dJanhy(nhr,Js,alpha)-Xanhy(nhr,Js,alpha))/nhr;
}

double IJanhy(double nhr, double Js, double alpha)  // = Co-energy
{
    double y=nhr/alpha;
   if (fabs(y)<(::TOLERANCE_0))
       return Js*alpha*SQU(y)/2.;
   else
       return Js*alpha*log(cosh(y));
}

double InvJanhy(double nJ, double Js, double alpha) // = y + y^3/3 + y^5/5 + y^7/7
{
   double x=nJ/Js;
   if (fabs(x)<(::TOLERANCE_0))
       return alpha*x;
   else
       return alpha*atanh(x);
}

double dInvJanhy(double nJ, double Js, double alpha)
{
    double x=nJ/Js;
    return (alpha/Js)*(1/(1-SQU(x))); // Warning : case x -> 1 <=> J -> Js
}


// 2. Double Langevin function ( used parameters : Ja, ha, Jb, hb)
double Lang(double nhr, double Ja, double ha) //Langevin function = x/3-x^3/45+2*x^5/945-x^7/4725+...
{
   double y=nhr/ha;
   if (fabs(y)<(::TOLERANCE_0))
       return Ja*y/3.;
   else
       return Ja*(1./tanh(y)-1./y);

}

double dLang(double nhr, double Ja, double ha)
{
   double y=nhr/ha;
   if (fabs(y)<(::TOLERANCE_0))
       return Ja/ha/3. ;
   else if (fabs(y)>350) // otherwise overflow
       return 0 ;
   else
       return Ja/ha*(1./SQU(y)-1./SQU(sinh(y))) ;
}

double LangOverx(double nhr, double Ja, double ha)
{   double y=nhr/ha;
   if (fabs(y)<(::TOLERANCE_0))
       return Ja/ha/3.;
   else
       return Ja*(1./tanh(y)-1./y)/nhr;
}

double dLangOverx(double nhr, double Ja, double ha)
{
   double y=nhr/ha;
   if (fabs(y)<(::TOLERANCE_0))
       return 2./45.*Ja*y/ha; // DOUBT : need to add .../ fxc ??
   else
       return (dLang(nhr,Ja,ha)-LangOverx(nhr,Ja,ha))/nhr;
}

double ILang(double nhr, double Ja, double ha)
{
   double y=nhr/ha;
   if (fabs(y)<(::TOLERANCE_0))
       return Ja*ha*SQU(y)/6.;
   else     // ILdx(x)=log(sinh(x)/x) gives infinity for x>~300
       return Ja*ha*( y + log(1.-exp(-2.*y)) - log(2.*y) );
}

double Janhy(double nhr, double Ja, double ha, double Jb, double hb)
{
  return Lang(nhr,Ja,ha)+Lang(nhr,Jb,hb);
}

double dJanhy(double nhr, double Ja, double ha, double Jb, double hb)
{
  return dLang(nhr,Ja,ha)+dLang(nhr,Jb,hb);
}

double Xanhy(double nhr, double Ja, double ha, double Jb, double hb)
{
  return LangOverx(nhr,Ja,ha)+LangOverx(nhr,Jb,hb);
}

double dXanhy(double nhr, double Ja, double ha, double Jb, double hb)
{
  return dLangOverx(nhr,Ja,ha)+dLangOverx(nhr,Jb,hb);
}

double IJanhy(double nhr, double Ja, double ha, double Jb, double hb)  // = Co-energy
{
  return ILang(nhr,Ja,ha)+ILang(nhr,Jb,hb);
}

double InvJanhy(double nJ, double Ja, double ha, double Jb, double hb)
{
    double y=nJ;
    if (fabs(y)<(::TOLERANCE_0))
        return y/dJanhy(0.,Ja,ha,Jb,hb);
    ///* Fictitious slope above 1e6 (09/06/2016)-------------
    double tmp = y - Janhy(1100,Ja,ha,Jb,hb);
    if (tmp>0)
      return 1100+1e16*tmp;
     //*///---------------------------------------------------------------------------
    int i=0;
    double x=0.0;
    double dJan=dJanhy(x,Ja,ha,Jb,hb);
    dJan=(dJan>1e-10)?dJan:1e-10; // Limitation
    double dx = (y-Janhy(x,Ja,ha,Jb,hb))/dJan;
    int imax=100;
      while ( ((fabs(dx)/((1>fabs(x))?1:fabs(x))) > ::TOLERANCE_NR) && (i<imax) )
      {
          dJan = dJanhy(x,Ja,ha,Jb,hb);
          dJan = (dJan>1e-10)?dJan:1e-10; // Limitation
          dx = (y-Janhy(x,Ja,ha,Jb,hb))/dJan;
          x +=  dx;
          i++;
      }
      return x;
}

double dInvJanhy_hr(double nhr, double Ja, double ha, double Jb, double hb)
{
  double dJdhr=dJanhy(nhr, Ja, ha, Jb, hb);
  if (dJdhr==0.)
  {
    Message::Warning("dJdhr is too small to be inverted in function 'dInvJanhy_hr'.");
    return 1.;
  }
  else
    return 1/dJdhr;
}


double u_hr(double nhr, double Ja, double ha, double Jb, double hb)  // = Energy with hr as input
{
  return Janhy(nhr,Ja,ha,Jb,hb)*nhr - IJanhy(nhr,Ja,ha,Jb,hb);
}

double u_J(double nJ, double Js, double alpha) // = Energy with J as input = IInvJanhy // only valid for TANH version
{
  return alpha*Js *( nJ/Js*atanh(nJ/Js) + 0.5*log(fabs(SQU(nJ/Js)-1)) );
}

void Vector_Jk_From_hrk(const double hrk[3],
                       void * params,
                       double Jk[3])
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;
  double wk=1;
  if (p->idcell>=0 && p->idcell<p->N)
    wk  = p->w[p->idcell];
  double Ja  = wk*p->Ja;
  double Jb  = wk*p->Jb;
  double ha = p->ha ;
  double hb = p->hb ;

  double nhrk = norm(hrk);
  double Xan = 0;

  switch(::FLAG_ANHYLAW) {
    case 1: // Hyperbolic Tangent Case
        Xan = Xanhy(nhrk, Ja, ha);
    break;
    case 2: // Double Langevin Function Case
        Xan = Xanhy(nhrk, Ja, ha, Jb, hb);
    break;
    default:
      Message::Error("Invalid parameter (AnhyLaw = 1 (Tanh) or 2 (DLan) )"
                     "for function 'Vector_Jk_From_hrk'.");
    break;
  }
  for (int n = 0; n < 3 ; n++)
    Jk[n] = Xan * hrk[n];
}

void Vector_hrk_From_Jk(const double Jk[3],
                        void * params,
                        double hrk[3])
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;
  double wk=1;
  if (p->idcell >= 0 && p->idcell < p->N)
    wk  = p->w[p->idcell];
  double Ja  = wk*p->Ja;
  double Jb  = wk*p->Jb;
  double ha  = p->ha;
  double hb  = p->hb;

  double nhrk = 0;
  double nJk  = norm(Jk);
  switch(::FLAG_ANHYLAW) {
    case 1: // Hyperbolic Tangent Case
        nhrk = InvJanhy(nJk, Ja, ha) ;
    break;
    case 2: // Double Langevin Function Case
        nhrk = InvJanhy(nJk, Ja, ha, Jb, hb) ;
    break;
    default:
      Message::Error("Invalid parameter (AnhyLaw = 1 (Tanh) or 2 (DLan) )"
                     "for function 'Vector_hrk_From_Jk'.");
    break;
  }

  for (int n=0; n<3; n++)
    hrk[n] = (nJk) ?  (nhrk/nJk)*Jk[n] : 0. ;
    //hrk[n] = (nJk>(::TOLERANCE_0)) ?  (nhrk/nJk)*Jk[n] : 0. ;
}


void Tensor_dJkdhrk(const double hr[3],
                      void * params,
                      double mutg[6])
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;
  double wk=1.;
  if (p->idcell>=0 && p->idcell<p->N)
    wk  = p->w[p->idcell];
  double Ja  = wk*p->Ja;
  double Jb  = wk*p->Jb;
  double ha = p->ha ;
  double hb = p->hb ;

  double nhr  = norm(hr);
  double Xan=0., dXandH2=0.;

  switch(::FLAG_ANHYLAW) {
    case 1: // Hyperbolic Tangent Case
      Xan      = Xanhy(nhr, Ja, ha);
      dXandH2  = (nhr>(::TOLERANCE_0)) ? (dXanhy(nhr, Ja, ha)/(2*nhr)) : 0. ;
    break;
    case 2: // Double Langevin Function Case
      Xan      = Xanhy(nhr, Ja, ha, Jb, hb);
      dXandH2  = (nhr>(::TOLERANCE_0)) ? (dXanhy(nhr, Ja, ha, Jb, hb)/(2*nhr)) : 0. ;
    break;
    default:
      Message::Error("Invalid parameter (AnhyLaw = 1 (Tanh) or 2 (DLan) )"
        "for function 'Tensor_dJkdhrk'.");
    break;
  }

  mutg[0] = Xan  + 2 * dXandH2 * ( hr[0]* hr[0] ) ;//xx
  mutg[3] = Xan  + 2 * dXandH2 * ( hr[1]* hr[1] ); //yy
  mutg[1] =        2 * dXandH2 * ( hr[1]* hr[0] ); //xy
  switch(::FLAG_DIM) {
    case 2: // 2D case
      mutg[5] = 1.;
      mutg[2] = mutg[4] = 0.;
    break;
    case 3: // 3D case
      mutg[5]= Xan  + 2 * dXandH2 * ( hr[2]* hr[2] ) ; //zz
      mutg[2]=        2 * dXandH2 * ( hr[2]* hr[0] ) ; //xz
      mutg[4]=        2 * dXandH2 * ( hr[2]* hr[1] ) ; //yz
    break;
    default:
      Message::Error("Invalid parameter (dimension = 2 or 3)"
        "for function 'Tensor_dJkdhrk'. Analytic Jacobian computation.");
    break;
  }

}


//************************************************
// Pseudo-Potential Functional Characteristics :
//************************************************

#if defined(HAVE_GSL) // due to the use of gsl_vector
double omega_f(const gsl_vector *v, void *params)  // not in F.h
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;
  double wk  = p->w[p->idcell];
  double Ja  = wk*p->Ja;
  double Jb  = wk*p->Jb;

  double h[3];
  for (int n=0; n<3; n++)
    h[n]  = p->h[n];

  double J[3];
  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(Ja+Jb, J) ;

  double omega = fct_omega_VAR(h, J, params) ;
  return omega;
}

void omega_df (const gsl_vector *v, void *params, gsl_vector *df)  // not in F.h
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;
  double wk  = p->w[p->idcell];
  double Ja  = wk*p->Ja;
  double Jb  = wk*p->Jb;

  double h[3];
  for (int n=0; n<3; n++)
    h[n]  = p->h[n];

  double J[3];
  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(Ja+Jb, J);

  double d_omega[3];
  fct_d_omega_VAR (J,d_omega,h, params ) ;
  for (int i=0; i<3; i++) gsl_vector_set(df, i, d_omega[i]);
}

void omega_fdf (const gsl_vector *x, void *params, double *f, gsl_vector *df)  // not in F.h
{
  *f = omega_f(x, params);
  omega_df(x, params, df);
}
#endif

double fct_omega_VAR(const double h[3],
                     const double Jk[3],
                     void * params )
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double kappa  = p->kappa[p->idcell];
  double wk     = p->w[p->idcell];
  double Ja     = wk*p->Ja;
  double ha     = p->ha ;
  double Jb     = wk*p->Jb;
  double hb     = p->hb ;

  double Jkp[3];
  for (int n=0; n<3; n++)
    Jkp[n] = p->Xp[n+3*p->idcell];

  double diff[3];
  for (int n=0; n<3; n++)
    diff[n] = Jk[n]-Jkp[n]; // J-Jp

  // magnetisation Jk assumed to be < the saturation magnetisation Js
  double nJk = norm(Jk), u=0., nhr=0.;

  // TODO: build a generic u function
  switch(::FLAG_ANHYLAW) {
    case 1: // Hyperbolic Tangent Case
      u     = u_J(nJk,Ja,ha); // magnetic energy u(J)
    break;
    case 2: // Double Langevin Function Case
      nhr   = InvJanhy(nJk, Ja, ha, Jb, hb);
      u     = u_hr(nhr,Ja,ha,Jb,hb); // magnetic energy u(J)
    break;
    default:
      Message::Error("Invalid parameter (AnhyLaw = 1 (Tanh) or 2 (DLan) )"
        "for function 'fct_omega_VAR'.");
    break;
  }

  double Jh     = Jk[0] * h[0] + Jk[1] * h[1] + Jk[2] * h[2]; // -J.h
  double Dissip = kappa * norm(diff) ; // kappa | J-Jp |

  return (u-Jh+Dissip);
}


void fct_d_omega_VAR(const double Jk[3],
                     double *d_omega,
                     double h[3],
                     void * params )
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double kappa  = p->kappa[p->idcell];

  double Jkp[3], dJk[3], hrk[3];

  for (int n=0; n<3; n++)
    Jkp[n] = p->Xp[n+3*p->idcell];

  for (int n=0; n<3; n++)
    dJk[n] = Jk[n]-Jkp[n];
  double ndJk = norm(dJk);

  Vector_hrk_From_Jk(Jk, params, hrk);

  d_omega[0] = d_omega[1] = d_omega[2] = 0.;
  for (int n = 0; n < 3; n++) {
    d_omega[n] += hrk[n] - h[n];
    if(ndJk) d_omega[n] += kappa * dJk[n]/ndJk ;
  }
}


void fct_dd_omega_VAR(const double h[3],
                      const double Jk[3],
                      void * params,
                      double *ddfdJ2)
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double Jkp[3];
  for (int n=0; n<3; n++)
    Jkp[n] = p->Xp[n+3*p->idcell];

  double kappa  = p->kappa[p->idcell];
  double wk     = p->w[p->idcell];
  double Ja     = wk*p->Ja;
  double ha     = p->ha ;
  double Jb     = wk*p->Jb;
  double hb     = p->hb ;

  double dJk[3];
  for (int n=0; n<3; n++)
    dJk[n] = Jk[n]-Jkp[n];

  double nJk  = norm(Jk);
  double ndJk = norm(dJk);

  if ( (::FLAG_ANA) && (nJk>(::TOLERANCE_NJ) && ndJk>(::TOLERANCE_NJ))){
    Message::Debug("--- fct_dd_omega_VAR: Analytical Jacobian ---");

    double kappaOverndJk = kappa/ndJk;
    double nhr=0.; double dhrdJkOvernJk2=0.; double nhrOvernJk=0.;

    switch(::FLAG_ANHYLAW) {
      case 1: // Hyperbolic Tangent Case
          nhr = InvJanhy(nJk, Ja, ha) ;
          nhrOvernJk = nhr/nJk;
          dhrdJkOvernJk2 = dInvJanhy(nJk, Ja, ha) /SQU(nJk);
      break;
      case 2: // Double Langevin Function Case
          nhr = InvJanhy(nJk, Ja, ha, Jb, hb) ;
          nhrOvernJk = nhr/nJk;
          dhrdJkOvernJk2 = dInvJanhy_hr(nhr, Ja, ha, Jb, hb) /SQU(nJk);
      break;
      default:
        Message::Error("Invalid parameter (AnhyLaw = 1 (Tanh) or 2 (DLan) )"
          "for function 'fct_dd_omega_VAR'.");
      break;
    }

    ddfdJ2[0] = dhrdJkOvernJk2  * (Jk[0]*Jk[0])
              + nhrOvernJk      * (1. - (1/SQU(nJk))*(Jk[0]*Jk[0]))
              + kappaOverndJk   * (1. - (1/SQU(ndJk))*(dJk[0]*dJk[0])) ; //xx
    ddfdJ2[1] = dhrdJkOvernJk2  * (Jk[1]*Jk[0])
              + nhrOvernJk      * (   - (1/SQU(nJk))*(Jk[1]*Jk[0]))
              + kappaOverndJk   * (   - (1/SQU(ndJk))*(dJk[1]*dJk[0])) ; //xy
    switch(::FLAG_SYM)
    {
      case 1: // Symmetric tensor
        ddfdJ2[3] = dhrdJkOvernJk2 * (Jk[1]*Jk[1])
                  + nhrOvernJk     * (1. - (1/SQU(nJk))*(Jk[1]*Jk[1]))
                  + kappaOverndJk  * (1. - (1/SQU(ndJk))*(dJk[1]*dJk[1])) ; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            ddfdJ2[5] = 1.;
            ddfdJ2[2] = ddfdJ2[4] = 0.;
          break;
          case 3: // 3D case
            ddfdJ2[5] = dhrdJkOvernJk2  * (Jk[2]*Jk[2])
                      + nhrOvernJk      * (1. - (1/SQU(nJk))*(Jk[2]*Jk[2]))
                      + kappaOverndJk   * (1. - (1/SQU(ndJk))*(dJk[2]*dJk[2])) ; //zz
            ddfdJ2[2] = dhrdJkOvernJk2  * (Jk[2]*Jk[0])
                      + nhrOvernJk      * (   - (1/SQU(nJk))*(Jk[2]*Jk[0]))
                      + kappaOverndJk   * (   - (1/SQU(ndJk))*(dJk[2]*dJk[0])) ; //xz
            ddfdJ2[4] = dhrdJkOvernJk2  * (Jk[2]*Jk[1])
                      + nhrOvernJk      * (   - (1/SQU(nJk))*(Jk[2]*Jk[1]))
                      + kappaOverndJk   * (   - (1/SQU(ndJk))*(dJk[2]*dJk[1])) ; //yz
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3)"
              "for function 'fct_dd_omega_VAR'. Analytic Jacobian computation.");
          break;
        }
      break;
      case 0: // Non Symmetric Tensor
        ddfdJ2[3] = ddfdJ2[1]; //yx
        ddfdJ2[4] = dhrdJkOvernJk2  * (Jk[1]*Jk[1])
                  + nhrOvernJk      * (1. - (1/SQU(nJk))*(Jk[1]*Jk[1]))
                  + kappaOverndJk   * (1. - (1/SQU(ndJk))*(dJk[1]*dJk[1])) ; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            ddfdJ2[8] = 1.; // zz
            ddfdJ2[2] = ddfdJ2[5] = ddfdJ2[6] =ddfdJ2[7] =0.; //xz //xy //zx //zy
          break;
          case 3: // 3D case
            ddfdJ2[8] = dhrdJkOvernJk2  * (Jk[2]*Jk[2])
                      + nhrOvernJk      * (1. - (1/SQU(nJk))*(Jk[2]*Jk[2]))
                      + kappaOverndJk   * (1. - (1/SQU(ndJk))*(dJk[2]*dJk[2])) ; //zz
            ddfdJ2[2] = dhrdJkOvernJk2  * (Jk[2]*Jk[0])
                      + nhrOvernJk      * (   - (1/SQU(nJk))*(Jk[2]*Jk[0]))
                      + kappaOverndJk   * (   - (1/SQU(ndJk))*(dJk[2]*dJk[0])) ; //xz
            ddfdJ2[5] = dhrdJkOvernJk2  * (Jk[2]*Jk[1])
                      + nhrOvernJk      * (   - (1/SQU(nJk))*(Jk[2]*Jk[1]))
                      + kappaOverndJk   * (   - (1/SQU(ndJk))*(dJk[2]*dJk[1])) ; //yz
            ddfdJ2[6] = ddfdJ2[2]; //zx
            ddfdJ2[7] = ddfdJ2[5]; //zy
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3)"
              "for function 'fct_dd_omega_VAR'. Analytic Jacobian computation.");
          break;
        }
      break;
      default:
        Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
          "for function 'fct_dd_omega_VAR'.\n");
      break;
    }
  }
  else
  {
    Message::Debug("--- fct_dd_omega_VAR: Numerical Jacobian ---");
    double hcopy[3]={h[0],h[1],h[2]}; // because h is constant double
    Tensor_num(fct_d_omega_VAR, Jk, ::DELTAJ_0, hcopy, params, ddfdJ2);
  }
}

//************************************************
// Usefull Functions for the Full Differential Approach
//************************************************

void fct_ehirr_DIFF_3d(const double x[2],
                       double ehi[3])
{
  const double theta = x[0];
  const double phi   = x[1];

  ehi[0]=sin(phi)*cos(theta);
  ehi[1]=sin(phi)*sin(theta);
  ehi[2]=cos(phi)  ;
}


void fct_hr_DIFF_3d(const double x[2],
                    const double kappa,
                    const double ehi[3],
                    const double h[3],
                    double xup[3])
{
  for (int n=0 ; n<3 ; n++)
    xup[n]=h[n] + kappa*ehi[n];
}

void fct_fall_DIFF_3d (const double ang[2],
                       void *params,
                       double fall[3])
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;
  double kappa  = p->kappa[p->idcell];
  double h[3]   = { p->h[0] , p->h[1] , p->h[2]  };
  double Jp[3]  = { p->Jp[0], p->Jp[1], p->Jp[2] };

  double xup[3];
  double dJ[3];
  double ehi[3];
  fct_ehirr_DIFF_3d(ang,ehi);
  fct_hr_DIFF_3d(ang, kappa, ehi,h, xup);

  Vector_Jk_From_hrk (xup, params, dJ); // dJ contains Jup here
  for (int n=0; n<3; n++)
    dJ[n] -= Jp[n]; // dJ = Jup - Jp as it should be here

  fall[0] =  dJ[1]*ehi[2] -  dJ[2]*ehi[1];
  fall[1] =  dJ[2]*ehi[0] -  dJ[0]*ehi[2];
  fall[2] =  dJ[0]*ehi[1] -  dJ[1]*ehi[0];
}


// due to the use of gsl_vector, GSL_SUCCESS, gsl_multiroot_fsolver, ...
#if defined(HAVE_GSL)
int fct_f_DIFF_3d ( const gsl_vector * gsl_ang,
                    void *params,
                    gsl_vector * f) // not in F.h
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double ang[2];
  for (int n=0; n<2; n++)
    ang[n]=gsl_vector_get (gsl_ang, n);

  double fall[3];
  fct_fall_DIFF_3d(ang,params,fall);

  // remove compout from fall:
  int i=0;
  for (int n=0; n<3; n++)
  {
    if(p->compout!=n)
    {
      gsl_vector_set (f, i, fall[n]);
      i++;
    }
  }
  /* Actually do this:
    if (p->compout==0)
    {
      gsl_vector_set (f, 0, fall[1]);
      gsl_vector_set (f, 1, fall[2]);
    }
    else if (p->compout==1)
    {
      gsl_vector_set (f, 0, fall[0]);
      gsl_vector_set (f, 1, fall[2]);
    }
    else //if (p-> compout==2)
    {
      gsl_vector_set (f, 0, fall[0]);
      gsl_vector_set (f, 1, fall[1]);
    }
  */
  return GSL_SUCCESS;
}

void print_state_3d (int iterb,
                     const char *s_name,
                     int status,
                     gsl_multiroot_fsolver * s)  // not in F.h
{
  if(::FLAG_WARNING>=FLAG_WARNING_INFO_APPROACH
    && iterb>=FLAG_WARNING_DISPABOVEITER)
  {
    if (iterb == FLAG_WARNING_DISPABOVEITER)
      printf ("using %s method",
              s_name);

      printf ("\niter = %3u x = % .3f % .3f "
              "f(x) = % .3e % .3e",
              iterb,
              gsl_vector_get (s->x, 0),
              gsl_vector_get (s->x, 1),
              gsl_vector_get (s->f, 0),
              gsl_vector_get (s->f, 1));

    if (status == GSL_SUCCESS)
      printf (" (Converged)\n");
  }
}
#endif


void Vector_hirr_DIFF_2d(double x,
                         double kappa,
                         double ex[3])
{
  ex[0]=kappa*cos(x);
  ex[1]=kappa*sin(x);
  ex[2]=0;
}

void fct_hr_DIFF_2d(double x,
                    double kappa,
                    double h[3],
                    double xup[3])
{
  double hi[3];
  Vector_hirr_DIFF_2d(x, kappa, hi);
  for (int n=0 ; n<3 ; n++)
    xup[n]=h[n]-hi[n];
}

double fct_f_DIFF_2d (double y,
                      void *params)
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double kappa  = p->kappa[p->idcell];

  double h[3]  ,Jp[3] ;
  for (int n=0; n<3; n++){
    Jp[n]   = p->Jp[n];
    h[n]    = p->h[n] ;
  }

  double xup[3], dJ[3];
  fct_hr_DIFF_2d(y, kappa, h, xup);
  Vector_Jk_From_hrk (xup, params, dJ); // dJ contains Jup here
  for (int n=0; n<3; n++)
    dJ[n] -= Jp[n]; // dJ = Jup - Jp as it should be here

  return dJ[0]*sin(y)-dJ[1]*cos(y);
}

#if defined(HAVE_GSL) // due to the use of GSL_SUCCESS
void print_state_2d ( int iterb,
                      const char *s_name,
                      int status,
                      double al,
                      double br,
                      double alpha,
                      double err)  // not in F.h
{
  if(::FLAG_WARNING>=FLAG_WARNING_INFO_APPROACH
    && iterb>=FLAG_WARNING_DISPABOVEITER )
  {
    if( iterb==FLAG_WARNING_DISPABOVEITER)
    {
      printf ("using %s method\n",
              s_name);
      printf ("%5s [%9s, %9s] %9s %9s\n",
              "iter", "lower", "upper", "alpha", "err(est)");
    }

    if (status == GSL_SUCCESS)
      printf ("Converged:\n");

    printf ("%5d [%.7f, %.7f] "
            "%.7f %.7f\n",
            iterb, al, br,
            alpha, err);
  }
}
#endif

//************************************************
// Energy-Based Model - Vector Update
//************************************************

void Vector_Update_Jk_VAR(const double h[3],
                          double Jk[3],
                          double Jk0[3],
                          void * params)
{
  double Jkp[3];
  double hcopy[3]={h[0],h[1],h[2]}; // because h is constant double

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  for (int n=0; n<3; n++){
    Jkp[n]  = p->Xp[n+3*p->idcell];
    p->h[n] = h[n];
  }

  double kappa  = p->kappa[p->idcell];
  double wk     = p->w[p->idcell];
  double Ja     = wk*p->Ja;
  double Jb     = wk*p->Jb;

  //No minimization needed when |h-hrp|<kappa! ==> |nhirrp|<kappa ==> Jk = Jkp
  double hrp[3];

  Vector_hrk_From_Jk(Jkp,params, hrp);
  double hirrp[3];
  for (int n = 0; n < 3; n++)
    hirrp[n]=h[n] - hrp[n];

  double nhirrp=norm(hirrp);

  if (nhirrp<=kappa)
  {
    for (int n = 0; n < 3; n++)
      Jk[n]=Jkp[n];
    return;
  }

  // If one wants to start from Jk = Jk from VPM Approach------------------
  double hr[3], Jk_VPM[3];
  Vector_Update_hrk_VPM_ (h, hr, hrp, kappa);
  Vector_Jk_From_hrk (hr, params, Jk_VPM); // dJ contains Jup here
  double nJ0[3];
  for (int n=0; n<3; n++) nJ0[n] = Jk_VPM[n]-Jkp[n];

  // diff hr induced an imperceptible diff Jk in that case => kill early
  if (norm(nJ0)<1e-16*norm(Jk_VPM) )
  {
    for (int n = 0; n < 3; n++)
      Jk[n]=Jkp[n];
    return;
  }
  double J0[3];
  for (int n=0; n<3; n++) J0[n] = Jk_VPM[n];
  switch(::FLAG_MINMETHOD) {
    case 1:
    {
      //-------------------------------------------------------------------
      // Updating Jk with a steepest descent algorithm
      //-------------------------------------------------------------------

      double min_Jk[3] ;
      for (int n=0 ; n<3 ; n++) min_Jk[n] = J0[n];
      double d_omega[3] ;
      double sdfactor  = 0.1; //suitable value of tol for most applications
      double TOL = ::TOLERANCE_OM;
      double Js=(Ja+Jb);
      for (int n=0; n<3; n++) Jk[n] = J0[n];

      limiter(Js, Jk ); // avoiding possible NaN with atanh

      fct_d_omega_VAR(Jk, d_omega, hcopy, params) ; // updating the derivative of omega
      double omega = fct_omega_VAR(h,Jk, params); // updating omega

      double min_omega = 1e+22 ;

      int iter = 0 ;
      const int MAX_ITER = ::MAX_ITER_OM;
      while( iter < MAX_ITER &&
             (fabs(d_omega[0])/(1+fabs(omega))*sdfactor > TOL ||
              fabs(d_omega[1])/(1+fabs(omega))*sdfactor > TOL ||
              fabs(d_omega[2])/(1+fabs(omega))*sdfactor > TOL ))
      {
        for (int n = 0; n < 3; n++)
          min_Jk[n] = Jk[n] - sdfactor * d_omega[n] ; // gradient descent algorithm

        limiter(Js, min_Jk);
        min_omega = fct_omega_VAR(h,min_Jk, params);  //updating omega

        if( min_omega < omega-TOL/10 && norm(min_Jk) < Js ){
          fct_d_omega_VAR(min_Jk,  d_omega,hcopy, params) ;  //update the derivative d_omega
          omega = min_omega;
          //if(Jk[0]==Jkp[0] && Jk[1]==Jkp[1] && Jk[2]==Jkp[2])
          if( fabs(Jk[0]-Jkp[0])<= TOL &&
              fabs(Jk[1]-Jkp[1])<= TOL &&
              fabs(Jk[2]-Jkp[2])<= TOL    ) //(diff zero)
            sdfactor=0.1; // re-initialize rfactor which may have become very small due to an angulous starting point

          for (int n=0; n<3; n++) Jk[n] = min_Jk[n];
        }
        else sdfactor = sdfactor/2 ;

        iter++ ;
      }
      if (::FLAG_WARNING>=FLAG_WARNING_INFO_APPROACH && iter==MAX_ITER)
        Message::Warning("\t\tMinimization status : the minimization has not converged yet,"
          "after %d iteration(s)", MAX_ITER);

      for (int n=0 ; n<3 ; n++)
        Jk[n] = min_Jk[n];
    }
    break;
    case 11:   //steepest descent
    case 22:   //Fletcher-Reeves
    case 33:   //Polak-Ribiere
    case 333:  //Polak-Ribiere+
    case 1999: //85 Dai Yuan 1999
    case 2005: //161 Hager Zhang 2005
    case 77:   //newton
    {
      //-------------------------------------------------------------------
      // NEW Updating Jk with a steepest descent algorithm
      //-------------------------------------------------------------------

      int    FLAG_TAYLORCRIT = 1;
      double GTOL            = 1e-7;//::TOLERANCE_OM;
      double TOL_DX          = ::TOLERANCE_OM;
      double TOL_TAYLOR      = 1e-8;
      double TOL_LOOSECRIT   = 1e-14;
      /*
      double GTOL            = 1e-5*norm(J0);//::TOLERANCE_OM;
      double TOL_DX          = ::TOLERANCE_OM*norm(J0);
      double TOL_TAYLOR      = 1e-12*norm(J0);
      double TOL_LOOSECRIT   = 1e-14*norm(J0);
      */

      //for cg
      double deltak, beta = 0, ykpk, yk2;
      double gfkp1[3], yk[3];

      //for sd & cg
      double gnorm, pknorm, pk2, min_fval, gfkpk, xkpk;
      double xknorm, a1,a2,alpha_max,sqrdelta, sum_ddfdJ2_pkpkT = 0;
      double xk[3], min_xk[3] ,gfk[3], pk[3], pkpkT[6] ;
      double alpha  = 0.1; //suitable value of tol for most applications
      double Js=(Ja+Jb);

      for (int n=0; n<3; n++)
        xk[n] = J0[n];

      double old_fval = fct_omega_VAR(h,xk, params); // updating omega
      fct_d_omega_VAR(xk,  gfk,hcopy, params) ; // updating the derivative of omega = gfk
      for (int n = 0; n < 3; n++)
        pk[n]=-gfk[n];
      gnorm=norm(gfk);
      pknorm=norm(pk);

      int ncomp=::NCOMP;
      double *ddfdJ2; ddfdJ2 = new double[ncomp];

      int k = 1 ;
      const int MAX_ITER = ::MAX_ITER_OM;

      //while( k <= MAX_ITER && gnorm > GTOL )
      //while( k <= MAX_ITER && alpha*pknorm>TOL_DX )
      while( k <= MAX_ITER && alpha*pknorm>TOL_DX && gnorm > GTOL )
      {
        xkpk=xk[0]*pk[0]+xk[1]*pk[1]+xk[2]*pk[2];
        xknorm=norm(xk);
        pk2 = SQU(pknorm);
        sqrdelta=sqrt(SQU(xkpk)-pk2*(SQU(xknorm)-SQU(Js)));
        a1=(pk2!=0)? (- xkpk- sqrdelta )/pk2: 0.;
        a2=(pk2!=0)? (- xkpk+ sqrdelta )/pk2: 0.;
        alpha_max=(a1>a2)?a1:a2;
        gfkpk=gfk[0]*pk[0]+gfk[1]*pk[1]+gfk[2]*pk[2];
        int k_ls=1;
        //while( gnorm > GTOL )
        //while(alpha*pknorm>TOL_DX)
        while(alpha*pknorm>TOL_DX && gnorm > GTOL)
        {
          if (gfkpk>0)
            break;

          alpha=(alpha<alpha_max)? alpha: alpha_max;

          if (FLAG_TAYLORCRIT && alpha*pknorm<=TOL_TAYLOR) //taylorcrit
          {
            fct_dd_omega_VAR(h,xk,params,ddfdJ2);
            // compute pkpkT
            pkpkT[0]=pk[0]*pk[0]; //xx
            pkpkT[1]=pk[0]*pk[1]; //xy
            pkpkT[2]=pk[0]*pk[2]; //xz
            pkpkT[3]=pk[1]*pk[1]; //yy
            pkpkT[4]=pk[1]*pk[2]; //yz
            pkpkT[5]=pk[2]*pk[2]; //zz
            // compute new alpha
            switch(::FLAG_SYM)
            {
              case 1: // ddfdJ2 Symmetric tensor
                sum_ddfdJ2_pkpkT= ddfdJ2[0]*pkpkT[0]+
                                  ddfdJ2[3]*pkpkT[3]+
                                  ddfdJ2[5]*pkpkT[5]+
                                  2*ddfdJ2[1]*pkpkT[1]+
                                  2*ddfdJ2[2]*pkpkT[2]+
                                  2*ddfdJ2[4]*pkpkT[4];
              break;
              case  0: // ddfdJ2 Non Symmetric tensor
                sum_ddfdJ2_pkpkT= ddfdJ2[0]*pkpkT[0]+
                                  ddfdJ2[1]*pkpkT[1]+
                                  ddfdJ2[2]*pkpkT[2]+
                                  ddfdJ2[3]*pkpkT[1]+
                                  ddfdJ2[4]*pkpkT[3]+
                                  ddfdJ2[5]*pkpkT[4]+
                                  ddfdJ2[6]*pkpkT[2]+
                                  ddfdJ2[7]*pkpkT[4]+
                                  ddfdJ2[8]*pkpkT[5];
              break;
              default:
                Message::Error("Invalid parameter (sym = 0 or 1)"
                  "for function 'Vector_Update_Jk_VAR'.");
              break;
            }
            alpha=((sum_ddfdJ2_pkpkT)!=0)? -gfkpk/sum_ddfdJ2_pkpkT:0.;

            if (alpha> alpha_max)
            {
              Message::Warning("alpha from taylor %g >= alpha_max %g",alpha,alpha_max);
              alpha=alpha_max/(k+1);
            }
            for (int n = 0; n < 3; n++)
              min_xk[n] = xk[n] + alpha * pk[n] ;
            min_fval = fct_omega_VAR(h,min_xk, params);//updating omega

            for (int n=0; n<3; n++)
              xk[n] = min_xk[n];
            old_fval=min_fval;

            break;
          } // end taylorcrit

          if (!FLAG_TAYLORCRIT && alpha*pknorm<TOL_LOOSECRIT)
            break;

          for (int n = 0; n < 3; n++)
            min_xk[n] = xk[n] + alpha * pk[n] ;
          min_fval = fct_omega_VAR(h,min_xk, params);//updating omega

          if( min_fval < old_fval && norm(min_xk) < Js )
          {
            alpha=((k+1)/k)*alpha; //sure that alpha > alphap with this
            // Is this useful ? .............
            if(xk[0]==J0[0] && xk[1]==J0[1] && xk[2]==J0[2])
            //if( fabs(xk[0]-J0[0])<TOL &&
            //    fabs(xk[1]-J0[1])<TOL &&
            //    fabs(xk[2]-J0[2])<TOL    ) //(diff zero)
              alpha=0.1; // re-initialize alpha which may have become
                         // very small due to an angulous starting point
            //...............................

            for (int n=0; n<3; n++)
              xk[n] = min_xk[n];
            old_fval=min_fval;
            break;
          }
          else
          {
            alpha = alpha/2 ;
          }
          k_ls+=1;
        } //end first while


        if ( (gfkpk<0) &&
             ( (alpha*pknorm<TOL_LOOSECRIT) || (gnorm <= GTOL ) )
           )
          break;

        switch(::FLAG_MINMETHOD) {
          case 11: //steepest descent
          {
            fct_d_omega_VAR(xk, gfk, hcopy,  params) ; //update the derivative d_omega
            for (int n = 0; n < 3; n++)
              pk[n]=-gfk[n];
          }
          break;
          case 22: //conjugate gradient
          case 33:
          case 333:
          case 1999:
          case 2005:
          {
            deltak = gfk[0]*gfk[0]+gfk[1]*gfk[1]+gfk[2]*gfk[2];
            fct_d_omega_VAR(xk,  gfkp1, hcopy, params) ; //update the derivative d_omega
            for (int n=0; n<3; n++)
              yk[n]=gfkp1[n]-gfk[n];

            switch(::FLAG_MINMETHOD) {
              case 22: //Fletcher-Reeves
                beta= (gfkp1[0]*gfkp1[0]+gfkp1[1]*gfkp1[1]+gfkp1[2]*gfkp1[2])/deltak;
              break;
              case 33: //Polak-Ribiere
                beta= (yk[0]*gfkp1[0]+yk[1]*gfkp1[1]+yk[2]*gfkp1[2])/deltak;
              break;
              case 333: //Polak-Ribiere+ #original
                beta= (yk[0]*gfkp1[0]+yk[1]*gfkp1[1]+yk[2]*gfkp1[2])/deltak;
                beta = (beta>0)? beta : 0;
              break;
              case 1999: //85 Dai Yuan 1999
                beta= (gfkp1[0]*gfkp1[0]+gfkp1[1]*gfkp1[1]+gfkp1[2]*gfkp1[2])
                      /(yk[0]*pk[0]+yk[1]*pk[1]+yk[2]*pk[2]);
              break;
              case 2005: //161 Hager Zhang 2005
                yk2=(yk[0]*yk[0]+yk[1]*yk[1]+yk[2]*yk[2]);
                ykpk=(yk[0]*pk[0]+yk[1]*pk[1]+yk[2]*pk[2]);
                beta=0;
                for (int n = 0; n < 3; n++)
                  beta+= (yk[n]-2*pk[n]*(yk2/ykpk))*(gfkp1[n]/ykpk);
              break;
              default:
              break;
            }

            for (int n = 0; n < 3; n++)
            {
              pk[n] = -gfkp1[n]+ beta*pk[n];
              gfk[n]=  gfkp1[n];
            }

          }
          break;
          case 77: //newton
          {
            fct_d_omega_VAR(xk, gfk, hcopy, params) ; //update the derivative d_omega
            fct_dd_omega_VAR(h,xk,params,ddfdJ2);
            int ncomp = ::NCOMP;
            double *iddfdJ2; iddfdJ2 = new double[ncomp];
            switch(::FLAG_SYM)
            {
              case 1: // Symmetric tensor
                Inv_TensorSym3x3(ddfdJ2, iddfdJ2); // T, invT
                pk[0]= -(iddfdJ2[0]*gfk[0]+iddfdJ2[1]*gfk[1]+iddfdJ2[2]*gfk[2]);
                pk[1]= -(iddfdJ2[1]*gfk[0]+iddfdJ2[3]*gfk[1]+iddfdJ2[4]*gfk[2]);
                pk[2]= -(iddfdJ2[2]*gfk[0]+iddfdJ2[4]*gfk[1]+iddfdJ2[6]*gfk[2]);
              break;
              case 0: // Non Symmetric Tensor
                Inv_Tensor3x3(ddfdJ2, iddfdJ2); // T, invT
                pk[0]= -(iddfdJ2[0]*gfk[0]+iddfdJ2[1]*gfk[1]+iddfdJ2[2]*gfk[2]);
                pk[1]= -(iddfdJ2[3]*gfk[0]+iddfdJ2[4]*gfk[1]+iddfdJ2[5]*gfk[2]);
                pk[2]= -(iddfdJ2[6]*gfk[0]+iddfdJ2[7]*gfk[1]+iddfdJ2[8]*gfk[2]);
              break;
              default:
                Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for newton"
                  "in function 'Vector_Update_Jk_VAR'.\n");
              break;
            }
            //alpha=1;

            delete [] iddfdJ2;
          }
          break;
          default:
          break;
        }
        gnorm=norm(gfk);
        pknorm=norm(pk);
        k++;
      } // end second while
      delete [] ddfdJ2;
      if (::FLAG_WARNING>=FLAG_WARNING_INFO_APPROACH && k>=MAX_ITER)
        Message::Warning("\t\tMinimization status : the minimization has not converged yet,"
          "after %d iteration(s)", MAX_ITER);
      for (int n=0 ; n<3 ; n++)
        Jk[n] = xk[n];
    }
    break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    {
      //-------------------------------------------------------------------
      // Updating Jk with gnu gsl
      //-------------------------------------------------------------------

#if !defined(HAVE_GSL)
      Message::Error("FLAG_MINMETHOD = %d requires the GSL in function 'Vector_Update_Jk_VAR'.\n"
                        "FLAG_MINMETHOD = 1 --> steepest descent (homemade)\n"
                        "FLAG_MINMETHOD = 2 --> conjugate fr (gsl)\n"
                        "FLAG_MINMETHOD = 3 --> conjugate pr (gsl)\n"
                        "FLAG_MINMETHOD = 4 --> bfgs2 (gsl)\n"
                        "FLAG_MINMETHOD = 5 --> bfgs (gsl)\n"
                        "FLAG_MINMETHOD = 6 --> steepest descent (gsl)\n"
                        "FLAG_MINMETHOD = 11   --> steepest descent (homemade)\n"
                        "FLAG_MINMETHOD = 22   --> conjugate Fletcher-Reeves (homemade)\n"
                        "FLAG_MINMETHOD = 33   --> conjugate Polak-Ribiere (homemade)\n"
                        "FLAG_MINMETHOD = 333  --> conjugate Polak-Ribiere+ (homemade)\n"
                        "FLAG_MINMETHOD = 1999 --> conjugate Dai Yuan 1999 (p.85) (homemade)\n"
                        "FLAG_MINMETHOD = 2005 --> conjugate Hager Zhang 2005 (p.161) (homemade)\n"
                        "FLAG_MINMETHOD = 77   --> newton (homemade)\n", ::FLAG_MINMETHOD);
#else

      const int MAX_ITER = ::MAX_ITER_OM;
      int iter = 0, status;
      double step_size = 0.01;   // 0.01 at basic
      double TOL = ::TOLERANCE_OM;
      double tol = TOL; //(0.1 recommended for bfgs and steepest descent else tol=TOL)
      double omegap;

      double J[3] = { J0[0], J0[1], J0[2] };

      //http://www.gnu.org/software/gsl/manual/html_node/Multimin-Algorithms-with-Derivatives.html
      const gsl_multimin_fdfminimizer_type *TYPE = 0;
      switch(::FLAG_MINMETHOD) {
        case 2:
          TYPE = gsl_multimin_fdfminimizer_conjugate_fr;
        break;
        case 3:
          TYPE = gsl_multimin_fdfminimizer_conjugate_pr;
        break;
        case 4:
          //FIXME: test GSL version (requires 1.?)
          TYPE = gsl_multimin_fdfminimizer_vector_bfgs2; // not work
        break;
        case 5:
          TYPE = gsl_multimin_fdfminimizer_vector_bfgs;
        break;
        case 6:
          // (The steepest descent method is inefficient and is included only for demonstration purposes)
          TYPE = gsl_multimin_fdfminimizer_steepest_descent;
        break;
        default:
        break;
      }

      gsl_multimin_function_fdf my_func;

      my_func.n      = 3;
      my_func.f      = omega_f  ;
      my_func.df     = omega_df ;
      my_func.fdf    = omega_fdf;
      my_func.params = params;

      gsl_vector* x = gsl_vector_alloc (3);
      for (int i=0; i<3; i++) gsl_vector_set(x, i, J[i]) ; // initial value for the minimizer

      gsl_multimin_fdfminimizer *solver = gsl_multimin_fdfminimizer_alloc(TYPE, 3);
      gsl_multimin_fdfminimizer_set (solver, &my_func, x, step_size, tol);

      do {
        iter++;
        omegap = solver->f;
        status = gsl_multimin_fdfminimizer_iterate (solver);
        if (status) break; // check if solver is stuck
      }  while( fabs(solver->f-omegap)>TOL && iter < MAX_ITER);


      if (::FLAG_WARNING>=FLAG_WARNING_INFO_APPROACH && iter==MAX_ITER)
        Message::Warning("Minimization status : the iteration has not converged yet,"
          "after %d iteration(s)", iter);

      for (int n=0 ; n<3 ; n++)
        Jk[n] = gsl_vector_get (solver->x, n) ;

      gsl_multimin_fdfminimizer_free (solver);
      gsl_vector_free (x);
#endif
    }
    break;
    default:
      Message::Error("Invalid parameter (FLAG_MINMETHOD = 1,2,..6,11,22,33,333,1999,2005,77) for function 'Vector_Update_Jk_VAR'.\n"
                        "FLAG_MINMETHOD = 1 --> steepest descent (homemade)\n"
                        "FLAG_MINMETHOD = 2 --> conjugate fr (gsl)\n"
                        "FLAG_MINMETHOD = 3 --> conjugate pr (gsl)\n"
                        "FLAG_MINMETHOD = 4 --> bfgs2 (gsl)\n"
                        "FLAG_MINMETHOD = 5 --> bfgs (gsl)\n"
                        "FLAG_MINMETHOD = 6 --> steepest descent (gsl)\n"
                        "FLAG_MINMETHOD = 11   --> steepest descent (homemade)\n"
                        "FLAG_MINMETHOD = 22   --> conjugate Fletcher-Reeves (homemade)\n"
                        "FLAG_MINMETHOD = 33   --> conjugate Polak-Ribiere (homemade)\n"
                        "FLAG_MINMETHOD = 333  --> conjugate Polak-Ribiere+ (homemade)\n"
                        "FLAG_MINMETHOD = 1999 --> conjugate Dai Yuan 1999 (p.85) (homemade)\n"
                        "FLAG_MINMETHOD = 2005 --> conjugate Hager Zhang 2005 (p.161) (homemade)\n"
                        "FLAG_MINMETHOD = 77   --> newton (homemade)\n");
    break;
  }
}

void Vector_Update_hrk_DIFF_3d( const double h[3],
                                double hr[3],
                                void *params)  // not in F.h
{
#if !defined(HAVE_GSL)
  Message::Error("FLAG_APPROACH = %d requires the GSL for the moment in Vector_Update_hrk_DIFF\n"
                      "FLAG_APPROACH = 1 --> Variational Approach\n"
                      "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                      "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)", ::FLAG_APPROACH);
#else

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double hrp[3];
  for (int n=0; n<3; n++)
    hrp[n] = p->Xp[n+3*p->idcell];

  double kappa  = p->kappa[p->idcell];

  // Full Differential Case
  if (kappa==0) // When kappa =0, we automatically know that hr=h !!!
  {
    for (int n=0; n<3; n++)
      hr[n]=h[n];
  }
  else
  {
    double tmp[3];
    for (int n=0; n<3; n++)
      tmp[n] = h[n]-hrp[n];

    if (norm(tmp)>kappa)
    {
      int status;
      int iterb = 0, max_iterb = ::MAX_ITER_NR;
      double TOL = ::TOLERANCE_OM;

      for (int n=0 ; n<3 ; n++)
        p->h[n]=h[n];
      Vector_Jk_From_hrk (hrp, params, p->Jp); // init p->Jp

      const size_t nang = 2;
      char solver_type[100]="'Multivariate Angles Root Finding for Update hr' ";

      const gsl_multiroot_fsolver_type *T;
      gsl_multiroot_fsolver *s;

      double xinit[2]= {atan2(-tmp[1],-tmp[0]), acos(-tmp[2]/norm(tmp))};

      double finit[3];
      fct_fall_DIFF_3d(xinit, params,finit);

      p->compout=0;
      double finitmin=abs(finit[0]);
      for (int n=1; n<3; n++)
      {
        if (abs(finit[n])<finitmin)
        {
          finitmin=abs(finit[n]);
          p->compout=n;
        }
      }

      gsl_multiroot_function f = {&fct_f_DIFF_3d, nang, params};

      gsl_vector *x = gsl_vector_alloc(nang);

      gsl_vector_set (x, 0, xinit[0]);
      gsl_vector_set (x, 1, xinit[1]);

      T = gsl_multiroot_fsolver_hybrids; // BEST
      //T = gsl_multiroot_fsolver_hybrid;
      //T = gsl_multiroot_fsolver_dnewton; // may lead to Error   : GSL: matrix is singular
      //T = gsl_multiroot_fsolver_broyden; // may lead to Error   : GSL: matrix is singular

      s = gsl_multiroot_fsolver_alloc (T, 2);
      gsl_multiroot_fsolver_set (s, &f, x);

      strcat(solver_type,gsl_multiroot_fsolver_name(s));

      do
        {
          iterb++;
          status = gsl_multiroot_fsolver_iterate (s);

          if (status)   //check if solver is stuck
            break;

          status =
            gsl_multiroot_test_residual (s->f, TOL);

          print_state_3d (iterb, solver_type, status, s);
        }
      while (status == GSL_CONTINUE && iterb < max_iterb);

      double x0[2];
      x0[0]=gsl_vector_get (s->x, 0);
      x0[1]=gsl_vector_get (s->x, 1);


      double ehi[3];
      fct_ehirr_DIFF_3d(x0, ehi);
      for (int n=0; n<3; n++)
        hr[n]=h[n]+kappa*ehi[n];

      gsl_multiroot_fsolver_free (s);
      gsl_vector_free (x);
    }
    else
    {
      for (int n=0; n<3; n++)
        hr[n]=hrp[n];
    }
  }
#endif
}


void Vector_Update_hrk_DIFF_2d (const double h[3],
                                double hr[3],
                                void * params) // not in F.h
{
#if !defined(HAVE_GSL)
  Message::Error("FLAG_APPROACH = %d requires the GSL for the moment in Vector_Update_hrk_DIFF\n"
                      "FLAG_APPROACH = 1 --> Variational Approach\n"
                      "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                      "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)", ::FLAG_APPROACH);
#else

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double hrp[3];
  for (int n=0; n<3; n++)
    hrp[n] = p->Xp[n+3*p->idcell];

  double kappa  = p->kappa[p->idcell];

  // Full Differential Case
  if (kappa==0) // When kappa =0, we automatically know that hr=h !!!
  {
    for (int n=0; n<3; n++)
      hr[n]=h[n];
  }
  else
  {
    double tmp[3];
    for (int n=0; n<3; n++)
      tmp[n] = h[n]-hrp[n];

    if (norm(tmp)>kappa)
    {
      int status;
      int iterb = 0, max_iterb = ::MAX_ITER_NR;
      double TOL = ::TOLERANCE_OM;

      for (int n=0 ; n<3 ; n++)
        p->h[n]=h[n];
      Vector_Jk_From_hrk(hrp, params, p->Jp); // init p->Jp

      char solver_type[100]="'1D Brent for Update hr' ";
      const gsl_root_fsolver_type *T;
      gsl_root_fsolver *s;
      double xinit= atan2(tmp[1],tmp[0]);
      double r = xinit;
      double al, br;
      double phi = acos(kappa/norm(tmp));
      al=xinit-phi; br=xinit+phi;
      double x0;

      double ffa=fct_f_DIFF_2d(al, params);
      double ffb=fct_f_DIFF_2d(br, params);
      if (ffa * ffb>0)
      {
        if (::FLAG_WARNING>=FLAG_WARNING_INFO_APPROACH)
          Message::Warning("ff(a)*ff(b) > 0 : ff(a)=%g; ff(b)=%g kappa=%g",ffa,ffb,kappa);
        x0=xinit;
      }
      else
      {
        gsl_function F;

        F.function = &fct_f_DIFF_2d;
        F.params = params;

        //T = gsl_root_fsolver_bisection;
        T = gsl_root_fsolver_brent; // BEST
        //T = gsl_root_fsolver_falsepos;

        s = gsl_root_fsolver_alloc (T);
        gsl_root_fsolver_set (s, &F, al, br);
        strcat(solver_type,gsl_root_fsolver_name(s));

        do
          {
            iterb++;
            status = gsl_root_fsolver_iterate (s);

            r = gsl_root_fsolver_root (s);
            al = gsl_root_fsolver_x_lower (s);
            br = gsl_root_fsolver_x_upper (s);

            status
              = gsl_root_test_interval (al, br, TOL, TOL);

            print_state_2d(iterb, solver_type,
                           status, al, br, r, br - al);
          }
        while (status == GSL_CONTINUE && iterb < max_iterb);

        gsl_root_fsolver_free (s);
        x0=r;
      }
      double hi[3];
      Vector_hirr_DIFF_2d(x0,  kappa, hi);
      for (int n=0; n<3; n++)
        hr[n]=h[n]-hi[n];
    }
    else
    {
      for (int n=0; n<3; n++)
        hr[n]=hrp[n];
    }
  }
#endif
}


void Vector_Update_hrk_DIFF(  const double h[3],
                              double hr[3],
                              double hr0[3],
                              void * params)
{
  // Full Differential Case
  switch(::FLAG_DIM)
  {
    case 2: // 2D case
      Vector_Update_hrk_DIFF_2d(h,hr,params);
    break;
    case 3: // 3D case
      Vector_Update_hrk_DIFF_3d(h,hr,params);
    break;
    default:
      Message::Error("Invalid parameter (dimension = 2 or 3)"
        "for function 'Vector_Update_hrk_DIFF'.");
    break;
  }
}

void Vector_Update_hrk_VPM( const double h[3],
                            double hr[3],
                            double hr0[3],
                            void * params)
{
  // Vector Play Model Approach
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double hrp[3];
  for (int n=0; n<3; n++)
    hrp[n] = p->Xp[n+3*p->idcell];
  double kappa  = p->kappa[p->idcell];

  Vector_Update_hrk_VPM_( h, hr, hrp,  kappa);
}

void Vector_Update_hrk_VPM_ ( const double h[3],
                             double hr[3],
                             const double hrp[3],
                             const double kappa)
{
  // Vector Play Model Approach
  double dhr[3];
  for (int n=0; n<3; n++)
    dhr[n] = h[n]-hrp[n];
  double ndhr = norm(dhr);
  if (ndhr >= kappa) {
    for (int n=0; n<3; n++)
      hr[n]=(ndhr>0)? h[n]-kappa*(dhr[n]/ndhr) : h[n];
  }
  else {
    for (int n=0; n<3; n++)
      hr[n]=hrp[n];
  }
}

void Vector_b_EB (const double h[3],
                  double b[3],
                  double *Xk_all,
                  void * params)
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double hrtot[3], hrk[3];
  for (int n=0; n<3; n++)
  {
     hrtot[n]=0.;
     hrk[n]=0.;
     b[n] = ::SLOPE_FACTOR* MU0 * h[n]; // Slope forcing
  }

  double wk, Xk[3];
  for (int k=0; k<p->N; k++) {
    p->idcell = k;
    wk   = p->w[k];
    for (int n=0; n<3; n++)
      Xk[n]  = Xk_all[n+3*k];
    switch(::FLAG_APPROACH) {
      case 1: // Variationnal Case
      {
        Vector_Update_Jk_VAR(h,Xk,Xk, params);
        for (int n=0; n<3; n++)
          Xk_all[n+3*k] = Xk[n]; // up Xk_all
        switch (::FLAG_HOMO) {
          case 0:
          {
            for (int n=0; n<3; n++)
              b[n] += Xk[n];
          }
          break;
          case 1:
          {
            // Find hrk
            Vector_hrk_From_Jk(Xk,params, hrk);
            // hrtot = sum hrk
            for (int n=0; n<3; n++)
              hrtot[n] +=  wk*hrk[n];
          }
          break;
          default:
            Message::Error("Flag_Homo not defined (1 or 0)"
              "for function 'Vector_b_EB'.");
          break;
        }

      }
      break;
      case 2: // VPM Approach
      case 3: // Full Differential Approach
      {
        switch(::FLAG_APPROACH) {
          case 2:
            Vector_Update_hrk_VPM(h,Xk,Xk, params);
          break;
          case 3:
            Vector_Update_hrk_DIFF(h,Xk,Xk, params);
          break;
        }
        for (int n=0; n<3; n++)
          Xk_all[n+3*k] = Xk[n]; // up Xk_all
        switch (::FLAG_HOMO) {
          case 0:
          {
            double Jk[3];
            Vector_Jk_From_hrk(Xk,params,Jk);
            for (int n=0; n<3; n++)
              b[n] += Jk[n];
          }
          break;
          case 1:
          {
            // hrtot = sum hrk
            for (int n=0; n<3; n++)
              hrtot[n] +=  wk* Xk[n];
          }
          break;
          default:
            Message::Error("Flag_Homo not defined (1 or 0)"
              "for function 'Vector_b_EB'.");
          break;
        }
      }
      break;
      default:
        Message::Error("Invalid parameter (FLAG_APPROACH = 1,2 or 3) for function 'Vector_b_EB'.\n"
                      "FLAG_APPROACH = 1 --> Variational Approach\n"
                      "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                      "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)");
      break;
    }
  }

  if (::FLAG_HOMO==1)
  {
    double Jtot[3];
    p->idcell=-1; // due to the need to take global Ja, Jb (not Jak=wk*Ja, Jbk=wk*Jb) !
    Vector_Jk_From_hrk(hrtot,params,Jtot);
    for (int n=0; n<3; n++)
      b[n] += Jtot[n];
  }
}

void Vector_h_EB  ( const double b[3],
                    double bc[3],
                    double h[3],
                    double *Xk_all,
                    void * params )
{
  // Use an Inversion Method to deduce the h associated to b.

  // First, update bc and Xk_all:
  Vector_b_EB(h, bc, Xk_all, params);
  // * This recompute the bc (and Jkall) from h - which is a hinit - to start the NR
  // (instead of taking the bc (and Jkall) given in argument...
  // thus, the bc and Jkall given in argument are not necessary now.)

  // * h can be {h}[1], ie. the h found at the last timestep. (original approach)
  // in this case, bc={b}[1] could be used also
  // in order to avoid the re-evaluation of Vector_b_EB.
  // However, this is not totally correct because
  // bc=b_EB({h[1]}) and {b}[1] are not exactly the same
  // but are as close as the stopping criterion defined for
  // the NR process allows to tolerate.

  // * h can be {h}, ie. the h from the last iteration, (new since 2/3/2018)
  // Note: this works because there is a small lag through iterations
  // between the dof{h} that depends on {b} and dof{b} that depends on dof{h}
  // as can be seen in the formulation in magstadyna.pro (a-v formulation).
  // Therefore the arguments b={b} and bc=b_EB({h}) are different,
  // otherwise the NR stop criterion would be directly satisfied.

  // * This is even more recommended when ExtrapolatePolynomial
  // is activated to init the next generated Timestep, because
  // bc=b_EB({h}) has not yet been computed with the new predicted {h}

  double TOL = ::TOLERANCE_NR;
  const int MAX_ITER = ::MAX_ITER_NR;

  double dh[3], dx[3], df[3],res[3], b_bc[3] ;
  double Ib_bcI;

  int ncomp = ::NCOMP;
  double *dbdh; dbdh = new double[ncomp];
  double *dhdb; dhdb = new double[ncomp];
  for (int n=0; n<ncomp; n++) {dbdh[n]=0.; dhdb[n]=0.;}

  for (int n=0; n<3; n++) dh[n]=10.*::DELTA_0;
  double ndh=norm(dh);

  int iter = 0 ;
  while( iter < MAX_ITER &&
         ((fabs(bc[0]-b[0])/(1+fabs(b[0]))) > TOL ||
          (fabs(bc[1]-b[1])/(1+fabs(b[1]))) > TOL ||
          (fabs(bc[2]-b[2])/(1+fabs(b[2]))) > TOL ))
  {

    ::DELTA_0=norm(dh)/10; //DELTA_00 +++

    switch(::FLAG_INVMETHOD) {
    //---------------------------------------------
    // CASE 1 : NR
    //---------------------------------------------
    case 1: // NR
      {
        Tensor_dbdh_ana(h, Xk_all, params , dbdh); // eval dbdh
        switch(::FLAG_SYM)
        {
          case 1:
            Inv_TensorSym3x3(dbdh, dhdb);
          break;
          case 0:
            Inv_Tensor3x3(dbdh, dhdb);
          break;
          default:
            Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
              "for function 'Vector_h_EB'.\n");
          break;
        }
      }
    break;
    //---------------------------------------------
    // CASE 2 : NR_num
    //---------------------------------------------
    case 2: // NR_num
      {
        Tensor_num(Vector_b_EB, h, ::DELTA_0, Xk_all, params, dbdh);
        switch(::FLAG_SYM)
        {
          case 1:
            Inv_TensorSym3x3(dbdh, dhdb);
          break;
          case 0:
            Inv_Tensor3x3(dbdh, dhdb);
          break;
          default:
            Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
              "for function 'Vector_h_EB'.\n");
          break;
        }
      }
    break;
    //---------------------------------------------
    // CASE 3 : Good_BFGS
    //---------------------------------------------
    case 3: // Good_BFGS
      {
        if (iter>0 )
          Tensor_dhdb_GoodBFGS(dx,df,dhdb);
        else
        {
          Tensor_dbdh_ana(h, Xk_all, params, dbdh ); // eval dbdh analytically
          //Tensor_num(Vector_b_EB, h, ::DELTA_0, Xk_all, params, dbdh); // eval dbdh numerically
          switch(::FLAG_SYM)
          {
            case 1:
              Inv_TensorSym3x3(dbdh, dhdb);
            break;
            case 0:
              Inv_Tensor3x3(dbdh, dhdb);
            break;
            default:
              Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
                "for function 'Vector_h_EB'.\n");
            break;
          }
        }
      }
    break;
    default:
      Message::Error("Invalid parameter (FLAG_INVMETHOD = 1,2,3) for function 'Vector_h_EB'.\n"
                     "FLAG_INVMETHOD = 1 --> NR_ana (homemade)\n"
                     "FLAG_INVMETHOD = 2 --> NR_num (homemade)\n"
                     "FLAG_INVMETHOD = 3 --> Good_BFGS (homemade)");
      break;
    }

    for (int n=0; n<3; n++) b_bc[n]=b[n]-bc[n];
    Ib_bcI=norm(b_bc);

    Mul_TensorVec(dhdb, b_bc, dh, 0);

    //............................................... (WHILE LOOP) // dh/2
    double b_btest[3], htest[3];
    for (int n=0 ; n<3 ; n++)
    {
      df[n] = -bc[n];
      dh[n] = 2*dh[n];
    }
    int counter=0;
    ndh=norm(dh);
    do
    {
      ndh=ndh/2;
      for (int n=0 ; n<3 ; n++)
      {
        dh[n]=dh[n]/2;
        htest[n] = h[n]+dh[n];
      }
      Vector_b_EB(htest, bc, Xk_all, params); // Update bc, Jk_all
      for (int n=0 ; n<3 ; n++){
        b_btest[n]=b[n]-bc[n];
      }
      counter++;
      if (::FLAG_WARNING>=FLAG_WARNING_INFO_INV && counter>1)
        Message::Warning("activated dh/2 in inversion process %d",counter);
    }
    while ( (norm(b_btest) > Ib_bcI) &&
            counter<10 && ndh>::TOLERANCE_NR);

    for (int n=0 ; n<3 ; n++){
      dx[n]= dh[n];
      h[n] = htest[n];
      df[n] += bc[n];
    }
    //...............................................

    if(::FLAG_WARNING>=FLAG_WARNING_INFO_INV && iter>=FLAG_WARNING_DISPABOVEITER){
      //printf("dh(%d)=[%.8g,%.8g,%.8g];\t",iter,dh[0],dh[1],dh[2] );
      printf("h(%d)=[%.8g,%.8g,%.8g];\t",iter,h[0],h[1],h[2] );
      printf("b(%d)=[%.8g,%.8g,%.8g];\t",iter,bc[0],bc[1],bc[2] );
      for (int n=0 ; n<3 ; n++)
        res[n]=(fabs(bc[n]-b[n])/(1+fabs(b[n])));
      printf("residu(%d) = %.8g ([%.8g,%.8g,%.8g])\n", iter, norm(res), res[0],res[1],res[2]);
    }
    iter++;
  }

  if (::FLAG_WARNING>=FLAG_WARNING_STOP_INV)
    Message::Warning("Inversion status = %d iteration(s) needed",iter);

  // Show b et h obtained at the end of the NR loop :
  if (::FLAG_WARNING>=FLAG_WARNING_INFO_INV && iter==MAX_ITER){
    Message::Warning("Inversion status = the inversion has not converged yet, after %d iteration(s)",iter);
    if (::FLAG_WARNING>=FLAG_WARNING_INFO_INV){
      Message::Warning("b_desired : [%.10g, %.10g, %.10g]", b[0],b[1],b[2]);
      Message::Warning("b_get     : [%.10g, %.10g, %.10g]", bc[0],bc[1],bc[2]);
      Message::Warning("h_get     : [%.10g, %.10g, %.10g]", h[0],h[1],h[2]);
      if (::FLAG_WARNING >= FLAG_WARNING_STOP_INV){
        if(getchar()){
        }
      }
    }
  }

  delete [] dbdh;
  delete [] dhdb;
}

//************************************************
// Energy-Based Model - Tensor Construction
//************************************************

void Tensor_dJkdh_VAR ( const double h[3],
                        const double Jk[3],
                        void * params,
                        double *dJkdh)
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double Jkp[3];
  for (int n=0; n<3; n++)
    Jkp[n] = p->Xp[n+3*p->idcell];

  double dJk[3];
  for (int n=0; n<3; n++)
    dJk[n] = Jk[n]-Jkp[n];

  double nJk  = norm(Jk);
  double ndJk = norm(dJk);

  if ((::FLAG_ANA) && (nJk>(::TOLERANCE_NJ) && ndJk>(::TOLERANCE_NJ))){
    Message::Debug("--- Tensor_dJkdh_VAR: Analytical Jacobian ---");

    int ncomp = ::NCOMP;
    double *idJkdh; idJkdh = new double[ncomp];
    fct_dd_omega_VAR(h,Jk,params,idJkdh);
    switch(::FLAG_SYM)
    {
      case 1: // Symmetric tensor
        Inv_TensorSym3x3(idJkdh, dJkdh); // T, invT
      break;
      case 0: // Non Symmetric Tensor
        Inv_Tensor3x3(idJkdh, dJkdh); // T, invT
      break;
      default:
        Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
          "for function 'Tensor_dJkdh_VAR'.\n");
      break;
    }
    delete [] idJkdh;
  }
  else{
    Message::Debug("--- Tensor_dJkdh_VAR: Numerical Jacobian ---");
    double Jkdummy[3]={0,0,0};
    Tensor_num(Vector_Update_Jk_VAR, h, ::DELTA_0, Jkdummy, params, dJkdh);
  }
}

void Tensor_dJkdh_VPMorDIFF ( const double h[3],
                              const double hrk[3],
                              void * params,
                              double *dJkdh)
{
  // dJkdhrk -----------------------------------------------------------------------------------
  // -> dJkdhrk is always symmetric
  double dJkdhrk[6];
  Tensor_dJkdhrk(hrk , params, dJkdhrk);

  // dhrkdh -----------------------------------------------------------------------------------
  // -> dhrkdh is symmetric in that case but still stored with non-syn (9 comp)
  double dhrkdh[9];
  switch(::FLAG_APPROACH)
  {
    case 2: // VPM
      Tensor_dhrkdh_VPM_ana(h,hrk,params,dhrkdh);
    break;
    case 3: //  FULL DIFF
      Tensor_dhrkdh_DIFF_ana(h,hrk,dJkdhrk,params,dhrkdh);
    break;
    default:
      Message::Error("Invalid parameter (FLAG_APPROACH = 2 or 3) for function 'Tensor_dJkdh_VPMorDIFF'.\n"
                    "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                    "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)");
    break;
  }

  // Product dJkdh = dJkdhrk * dhrkdh ------------------------------------------------------------
  Mul_TensorSymTensorNonSym(dJkdhrk,dhrkdh,dJkdh);
}

void Tensor_dhrkdh_DIFF_ana ( const double h[3],
                              const double hrk[3],
                              const double dJkdhrk[6],
                              void * params,
                              double *dhrkdh)
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double hrkp[3];
  for (int n=0; n<3; n++)
    hrkp[n] = p->Xp[n+3*p->idcell];

  double kappa  = p->kappa[p->idcell];

  double h_hrkp[3];
  for (int n=0; n<3; n++)
    h_hrkp[n] = h[n]-hrkp[n];

  double Ih_hrkpI  = norm(h_hrkp);

  if (Ih_hrkpI>kappa)
  {
    double dJ[3], mutgu[6];

    for (int n=0; n<6; n++)
      mutgu[n] = dJkdhrk[n];
    double Jkp[3];
    Vector_Jk_From_hrk( hrkp,params,Jkp);
    Vector_Jk_From_hrk( hrk,params,dJ);
    for (int n=0; n<3; n++)
      dJ[n] -= Jkp[n];

    double ndJ = norm(dJ);

    if (kappa>0 && ndJ>(::TOLERANCE_0))
    {
      double temp[6], temp2[9];

      temp[0]=1. - (dJ[0]*dJ[0])/SQU(ndJ);
      temp[1]=   - (dJ[0]*dJ[1])/SQU(ndJ);
      temp[2]=   - (dJ[0]*dJ[2])/SQU(ndJ);
      temp[3]=1. - (dJ[1]*dJ[1])/SQU(ndJ);
      temp[4]=   - (dJ[1]*dJ[2])/SQU(ndJ);
      temp[5]=1. - (dJ[2]*dJ[2])/SQU(ndJ);

      Mul_TensorSymTensorSym(temp,mutgu,temp2);

      temp2[0]=1. + (kappa/ndJ) * temp2[0];
      temp2[1]=     (kappa/ndJ) * temp2[1];
      temp2[2]=     (kappa/ndJ) * temp2[2];
      temp2[3]=     (kappa/ndJ) * temp2[3];
      temp2[4]=1. + (kappa/ndJ) * temp2[4];
      temp2[5]=     (kappa/ndJ) * temp2[5];
      temp2[6]=     (kappa/ndJ) * temp2[6];
      temp2[7]=     (kappa/ndJ) * temp2[7];
      temp2[8]=1. + (kappa/ndJ) * temp2[8];
      Inv_Tensor3x3(temp2,dhrkdh);

      // OR one can use a numerical approximation for dhrkdh:
      // double hrkdummy[3]={0,0,0};
      // Tensor_num(Vector_Update_hrk_DIFF, h, ::DELTA_0, hrkdummy, params, dhrkdh);
    }
    else // IF kappa==0 or ndJ<=(::TOLERANCE_0)
    {
      dhrkdh[0] = dhrkdh[4] = dhrkdh[8] = 1.; //xx //yy //zz
      dhrkdh[1] = dhrkdh[2] = dhrkdh[3] = dhrkdh[5] = dhrkdh[6] = dhrkdh[7] = 0.; //xy //xz //yx //yz //zx //zy
    }
  }
  else // IF Ih_hrkpI<=kappa :
  {
    // should be zero always in practice but may induce convergence issue.
    double hrkdummy[3]={0,0,0};
    Tensor_num(Vector_Update_hrk_DIFF, h, ::DELTA_0, hrkdummy, params, dhrkdh);
  }
}

void Tensor_dhrkdh_VPM_ana ( const double h[3],
                             const double hrk[3],
                             void * params,
                             double *dhrkdh)
{
  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  double hrkp[3];
  for (int n=0; n<3; n++)
    hrkp[n] = p->Xp[n+3*p->idcell];

  double kappa  = p->kappa[p->idcell];

  double dhrk[3];
  for (int n=0; n<3; n++)
    dhrk[n] = h[n]-hrkp[n];

  double Ih_hrkpI  = norm(dhrk);

  if (Ih_hrkpI>kappa)
  {
    if (kappa>0.)
    {
      dhrkdh[0] = (1-kappa/Ih_hrkpI)
                + (kappa/CUB(Ih_hrkpI)) * (dhrk[0]*dhrk[0]) ; //xx
      dhrkdh[4] = (1-kappa/Ih_hrkpI)
                + (kappa/CUB(Ih_hrkpI)) * (dhrk[1]*dhrk[1]) ; //yy
      dhrkdh[1] = (kappa/CUB(Ih_hrkpI)) * (dhrk[1]*dhrk[0]) ; //xy
      dhrkdh[3] = dhrkdh[1]; //yx
      switch(::FLAG_DIM) {
        case 2: // 2D case
          dhrkdh[8] = 1.;
          dhrkdh[2] = dhrkdh[5] = dhrkdh[6] = dhrkdh[7] = 0.;
        break;
        case 3: // 3D case
          dhrkdh[8] = (1-kappa/Ih_hrkpI)
                    + (kappa/CUB(Ih_hrkpI))*(dhrk[2]*dhrk[2]) ; //zz
          dhrkdh[2] = (kappa/CUB(Ih_hrkpI))*(dhrk[2]*dhrk[0]) ; //xz
          dhrkdh[6] = dhrkdh[2]; //zx
          dhrkdh[5] = (kappa/CUB(Ih_hrkpI))*(dhrk[2]*dhrk[1]) ; //yz
          dhrkdh[7] = dhrkdh[5]; //zy
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3)"
            "for function 'Tensor_dhrkdh_VPM_ana'. Analytic Jacobian computation.");
        break;
      }
    }
    else // IF kappa==0
    {
      dhrkdh[0] = dhrkdh[4] = dhrkdh[8] = 1.; //xx //yy //zz
      dhrkdh[1] = dhrkdh[2] = dhrkdh[3] = dhrkdh[5] = dhrkdh[6] = dhrkdh[7] = 0.; //xy //xz //yx //yz //zx //zy
    }
  }
  else // IF Ih_hrkpI<=kappa :
  {
    // should be zero always in practice but may induce convergence issue.
    double hrkdummy[3]={0,0,0};
    Tensor_num(Vector_Update_hrk_VPM, h, ::DELTA_0, hrkdummy, params, dhrkdh);
  }
}


void Tensor_dbdh_ana ( const double h[3],
                       const double *Xk_all,
                       void * params,
                       double *dbdh)
{

  struct params_Cells_EB *p = (struct params_Cells_EB *) params;

  int N         = p->N ;

  double hrtot[3], hrk[3];
  for (int n=0; n<3; n++)
  {
     hrtot[n]=0.;
     hrk[n]=0.;
  }

  switch(::FLAG_SYM)
  {
    case 1:
      dbdh[0] = dbdh[3] = dbdh[5] = ::SLOPE_FACTOR*MU0 ; //Slope forcing
      dbdh[1] = dbdh[2] = dbdh[4] = 0. ;
    break;
    case 0:
      dbdh[0] = dbdh[4] = dbdh[8] = ::SLOPE_FACTOR*MU0 ; //Slope forcing
      dbdh[1] = dbdh[2] = dbdh[3] = dbdh[5] = dbdh[6] = dbdh[7] = 0. ;
    break;
    default:
      Message::Error("Invalid parameter (sym = 0 or 1)"
        "for function 'Tensor_dbdh_ana'.");
    break;
  }

  int ncomp=::NCOMP;
  double *dJkdh; dJkdh = new double[ncomp];
  double *dJtotdh; dJtotdh = new double[ncomp];
  for (int n=0; n<ncomp; n++) {
    dJkdh[n]=0.;
    dJtotdh[n]=0.;
  }

  double mutgtot[6], mutg[6], dhrkdJk[6];
  double dhrkdh[9], dhrtotdh[9];

  for (int n=0; n<9; n++)
    dhrtotdh[n]=0.;

  double wk, Xk[3] ;
  for (int k=0; k<N; k++) {
    p->idcell = k;
    wk    = p->w[k];
    for (int n=0; n<3; n++)
      Xk[n]  = Xk_all[n+3*k];
    switch(::FLAG_HOMO)
    {
      case 0:
      {
        switch(::FLAG_APPROACH) {
          case 1: // Variationnal Case
            Tensor_dJkdh_VAR(h, Xk, params, dJkdh);
          break;
          case 2: // Differential Case
          case 3:
            Tensor_dJkdh_VPMorDIFF(h, Xk, params, dJkdh);
          break;
          default:
            Message::Error("Invalid parameter (FLAG_APPROACH = 1,2 or 3) for function 'Tensor_dbdh_ana'.\n"
                          "FLAG_APPROACH = 1 --> Variational Approach\n"
                          "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                          "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)");
          break;
        }
        for (int n=0; n<ncomp; n++)
          dbdh[n] += dJkdh[n] ;
      }
      break;
      case 1:
      {
        switch(::FLAG_APPROACH) {
          case 1: // Variationnal Case
            // Find hrk
            Vector_hrk_From_Jk(Xk,params, hrk);
            // hrtot = sum wk hrk
            for (int n=0; n<3; n++)
              hrtot[n] +=  wk*hrk[n];

            // Build dhrkdh
            Tensor_dJkdh_VAR(h, Xk, params, dJkdh);
            Tensor_dJkdhrk(hrk , params, mutg);
            Inv_TensorSym3x3(mutg, dhrkdJk);
            Mul_TensorSymTensorNonSym(dhrkdJk, dJkdh, dhrkdh);

            //dhrtotdh = sum wk * dhrkdh
            for (int n=0; n<9; n++)
              dhrtotdh[n] +=  wk*dhrkdh[n];

          break;
          case 2: // Differential Case
          case 3:
          {
            // hrtot = sum wk hrk
            for (int n=0; n<3; n++)
              hrtot[n] +=  wk*Xk[n];

            // Build dhrkdh
            // -> dhrkdh is symmetric in that case but still stored with non-syn
            switch(::FLAG_APPROACH)
            {
              case 2: // VPM
                Tensor_dhrkdh_VPM_ana(h, Xk, params, dhrkdh);
              break;
              case 3: //  FULL DIFF
                Tensor_dJkdhrk(Xk, params, mutg);
                Tensor_dhrkdh_DIFF_ana(h,Xk,mutg,params,dhrkdh);
              break;
            }

            //dhrtotdh = sum wk * dhrkdh
            for (int n=0; n<9; n++)
              dhrtotdh[n] +=  wk*dhrkdh[n];
          }
          break;
          default:
            Message::Error("Invalid parameter (FLAG_APPROACH = 1,2 or 3) for function 'Tensor_dbdh_ana'.\n"
                          "FLAG_APPROACH = 1 --> Variational Approach\n"
                          "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                          "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)");
          break;
        }
      }
      break;
      default:
        Message::Error("Flag_Homo not defined (1 or 0)"
          "for function 'Tensor_dbdh_ana'.");
      break;
    }

  }

  if (::FLAG_HOMO==1)
  {
    //Build mutgtot
    p->idcell=-1; // due to the need to take global Ja, Jb (not Jak=wk*Ja, Jbk=wk*Jb) !
    Tensor_dJkdhrk(hrtot,params, mutgtot) ;

    //dJtotdh= mutgtot*dhrtotdh
    Mul_TensorSymTensorNonSym(mutgtot,dhrtotdh, dJtotdh) ;

    //dbdh= dbdh+dJtotdh
    for (int n=0; n<9; n++)
      dbdh[n] += dJtotdh[n];
  }
  delete [] dJkdh;
  delete [] dJtotdh;
}


void Tensor_num ( void (*f) (const double*, double*, double*, void *),
                 const double x[3],
                 const double delta0,
                 double *Xk_all,
                 void * params,
                 double *dfdx)
{

  //int dim = D->Case.Interpolation.x[0] ;

  //double delta0  = ::DELTA_0 ;
  // Different following the different directions ??? TO CHECK
  /*
  double EPSILON = 1 ; // PARAM (1) // 1e-8  // Take this again because Test_Basic_SimpleDiff_Num not working otherwise
  double delta[3] = { (fabs(h[0])>EPSILON) ? (fabs(h[0])) * delta0 : delta0,
                      (fabs(h[1])>EPSILON) ? (fabs(h[1])) * delta0 : delta0,
                      (fabs(h[2])>EPSILON) ? (fabs(h[2])) * delta0 : delta0 } ;
  //*/

  /*
  double delta[3] = {((norm(h)>EPSILON) ? (norm(h)+1) * delta0 : delta0),
                     ((norm(h)>EPSILON) ? (norm(h)+1) * delta0 : delta0),
                     ((norm(h)>EPSILON) ? (norm(h)+1) * delta0 : delta0) } ;
  */
  /*
  double delta[3] = {((norm(h)>EPSILON) ? norm(h) * delta0 : delta0),
                     ((norm(h)>EPSILON) ? norm(h) * delta0 : delta0),
                     ((norm(h)>EPSILON) ? norm(h) * delta0 : delta0) } ;
  */
  double delta[3]={delta0,delta0,delta0};

  double fxr[3]={0.,0.,0.};
  double fxl[3]={0.,0.,0.};
  double fyr[3]={0.,0.,0.};
  double fyl[3]={0.,0.,0.};
  double fzr[3]={0.,0.,0.};
  double fzl[3]={0.,0.,0.};

  double xxr[3]={x[0]+delta[0], x[1]          ,x[2]};
  double xyr[3]={x[0],          x[1]+delta[1] ,x[2]};
  double xzr[3]={x[0],          x[1]          ,x[2]+delta[2]};


  f(xxr, fxr, Xk_all, params );
  f(xyr, fyr, Xk_all, params);

  double xxl[3],xyl[3],xzl[3];
  for (int n=0; n<3; n++) {xxl[n]=x[n]; xyl[n]=x[n]; xzl[n]=x[n];}
  switch(::FLAG_CENTRAL_DIFF)
  {
    case 1: // Central Differences
      xxl[0]=x[0]-delta[0];
      xyl[1]=x[1]-delta[1];
      xzl[2]=x[2]-delta[2];
      f(xxl, fxl, Xk_all, params);
      f(xyl, fyl, Xk_all, params);
    break;
    case 0: // Forward Differences
      f(x, fxl, Xk_all, params );
      for (int n=0; n<3; n++) fyl[n] = fxl[n] ;
    break;
    default:
      Message::Error("Invalid parameter (central diff = 0 or 1)"
        "for function 'Tensor_num'.");
    break;
  }

  dfdx[0]= (fxr[0]-fxl[0])/(xxr[0]-xxl[0]); //xx

  //dfdx[1]= (fxr[1]-fxl[1])/(xxr[0]-xxl[0]);//yx // This one was used originally
  dfdx[1]= (fyr[0]-fyl[0])/(xyr[1]-xyl[1]);  //xy // other possibility (more natural)
  // ------
  switch(::FLAG_SYM)
  {
    case 1:// Symmetric tensor
      dfdx[3]= (fyr[1]-fyl[1])/(xyr[1]-xyl[1]); //yy
      switch(::FLAG_DIM)
      {
        case 2: // 2D case
          dfdx[5] = 1.; //zz
          dfdx[2] = dfdx[4]= 0.; //xz // yz
        break;
        case 3: // 3D case
          f(xzr, fzr, Xk_all, params);
          switch(::FLAG_CENTRAL_DIFF)
          {
            case 1: // Central Differences
              f(xzl, fzl, Xk_all, params);
            break;
            case 0: // Forward Differences
              for (int n=0; n<3; n++) fzl[n] = fxl[n] ;
            break;
            default:
              Message::Error("Invalid parameter (central diff = 0 or 1)"
                "for function 'Tensor_num'.");
            break;
          }
          dfdx[5]= (fzr[2]-fzl[2])/(xzr[2]-xzl[2]); //zz
          //dfdx[2]= (fxr[2]-fxl[2])/(xxr[0]-xxl[0]); //zx // This one was used originally
          dfdx[2]= (fzr[0]-fzl[0])/(xzr[2]-xzl[2]); //xz //other possibility (more natural)
          //dfdx[4]= (fyr[2]-fyl[2])/(xyr[1]-xyl[1]); //zy // This one was used originally
          dfdx[4]= (fzr[1]-fzl[1])/(xzr[2]-xzl[2]); //yz //other possibility (more natural)
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3)"
            "for function 'Tensor_num'.");
        break;
      }
    break;
    case  0:// Non Symmetric tensor
      dfdx[3]= (fxr[1]-fxl[1])/(xxr[0]-xxl[0]); //yx
      dfdx[4]= (fyr[1]-fyl[1])/(xyr[1]-xyl[1]); //yy
      switch(::FLAG_DIM)
      {
        case 2: // 2D case
          dfdx[8] = 1.; //zz
          dfdx[2] = dfdx[5] = dfdx[6] = dfdx[7] = 0.; //xz //yz //zx //zy
        break;
        case 3: // 3D case
          f(xzr, fzr, Xk_all, params );
          switch(::FLAG_CENTRAL_DIFF)
          {
            case 1: // Central Differences
              f(xzl, fzl , Xk_all, params );
            break;
            case 0: // Forward Differences
              for (int n=0; n<3; n++) fzl[n] = fxl[n] ;
            break;
            default:
              Message::Error("Invalid parameter (central diff = 0 or 1)"
                "for function 'Tensor_num'.");
            break;
          }
          dfdx[8] = (fzr[2]-fzl[2])/(xzr[2]-xzl[2]);//zz
          dfdx[2] = (fzr[0]-fzl[0])/(xzr[2]-xzl[2]);//xz
          dfdx[5] = (fzr[1]-fzl[1])/(xzr[2]-xzl[2]);//yz
          dfdx[6] = (fxr[2]-fxl[2])/(xxr[0]-xxl[0]); //zx
          dfdx[7] = (fyr[2]-fyl[2])/(xyr[1]-xyl[1]); //zy
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3)"
            "for function 'Tensor_num'.");
        break;
      }
    break;
    default:
      Message::Error("Invalid parameter (sym = 0 or 1)"
        "for function 'Tensor_num'.");
    break;
  }
}

void Tensor_dhdb_GoodBFGS(const double dx[3],const double df[3], double *dhdb)
{

  double iJn_1df[3], dfiJn_1[3];
  double dxdf, dfiJn_1df ;

  ///* New: Deal with Symmetrical or Asymmetrical Tensor consideration (13/06/2016)-------------
  Mul_TensorVec(dhdb,df, iJn_1df, 0);
  Mul_TensorVec(dhdb,df, dfiJn_1, 1);
  dxdf=Mul_VecVec(dx,df);
  dfiJn_1df=Mul_VecVec(df,iJn_1df);

  switch(::FLAG_SYM)
  {
    case 1: // Symmetric tensor
      dhdb[0] = dhdb[0]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[0]) -  ( iJn_1df[0]*dx[0] + dx[0]*dfiJn_1[0] )/dxdf ; //xx
      dhdb[3] = dhdb[3]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[1]*dx[1]) -  ( iJn_1df[1]*dx[1] + dx[1]*dfiJn_1[1] )/dxdf ; //yy
      dhdb[1] = dhdb[1]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[1]) -  ( iJn_1df[0]*dx[1] + dx[0]*dfiJn_1[1] )/dxdf ; //xy
      switch(::FLAG_DIM)
      {
        case 2: // 2D case
          dhdb[5] = 1.; //zz
          dhdb[2] = dhdb[4] = 0.; //xz //yz
        break;
        case 3: // 3D case
          dhdb[5] = dhdb[5]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[2]*dx[2]) -  ( iJn_1df[2]*dx[2] + dx[2]*dfiJn_1[2] )/dxdf ; //zz
          dhdb[2] = dhdb[2]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[2]) -  ( iJn_1df[0]*dx[2] + dx[0]*dfiJn_1[2] )/dxdf ; //xz
          dhdb[4] = dhdb[4]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[1]*dx[2]) -  ( iJn_1df[1]*dx[2] + dx[1]*dfiJn_1[2] )/dxdf ; //yz
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3)"
            "for function 'Tensor_dhdb_GoodBFGS'.");
        break;
      }
    break;
    case  0: // Non Symmetric tensor
      dhdb[0] = dhdb[0]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[0]) -  ( iJn_1df[0]*dx[0] + dx[0]*dfiJn_1[0] )/dxdf ; //xx
      dhdb[4] = dhdb[4]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[1]*dx[1]) -  ( iJn_1df[1]*dx[1] + dx[1]*dfiJn_1[1] )/dxdf ; //yy
      dhdb[1] = dhdb[1]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[1]) -  ( iJn_1df[0]*dx[1] + dx[0]*dfiJn_1[1] )/dxdf ; //xy
      dhdb[3] = dhdb[3]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[1]*dx[0]) -  ( iJn_1df[1]*dx[0] + dx[1]*dfiJn_1[0] )/dxdf ; //yx
      switch(::FLAG_DIM)
      {
        case 2: // 2D case
          dhdb[8] = 1.; //zz
          dhdb[2] = dhdb[5] = dhdb[6] = dhdb[7] = 0.; //xz //yz //zx //zy
        break;
        case 3: // 3D case
          dhdb[8] = dhdb[8]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[2]*dx[2]) -  ( iJn_1df[2]*dx[2] + dx[2]*dfiJn_1[2] )/dxdf ; //zz
          dhdb[2] = dhdb[2]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[2]) -  ( iJn_1df[0]*dx[2] + dx[0]*dfiJn_1[2] )/dxdf ; //xz
          dhdb[5] = dhdb[5]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[1]*dx[2]) -  ( iJn_1df[1]*dx[2] + dx[1]*dfiJn_1[2] )/dxdf ; //yz
          dhdb[6] = dhdb[6]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[2]*dx[0]) -  ( iJn_1df[2]*dx[0] + dx[2]*dfiJn_1[0] )/dxdf ; //zx
          dhdb[7] = dhdb[7]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[2]*dx[1]) -  ( iJn_1df[2]*dx[1] + dx[2]*dfiJn_1[1] )/dxdf ; //zy
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3)"
            "for function 'Tensor_dhdb_GoodBFGS'.");
        break;
      }
    break;
    default:
      Message::Error("Invalid parameter (sym = 0 or 1)"
        "for function 'Tensor_dhdb_GoodBFGS'.");
    break;
  }
  //*///-------------------------------------------------------------------------------------------
}

//*///-------------------------------------------------------------------------------------------

//************************************************
// Functions usable in a .pro file
//************************************************

void F_Cell_EB(F_ARG) {

  // Updating the Cell variable : Jk (for variationnal approach) or hrk (for differential approach)
  // ---------------------------------------------
  // input:
  // (A+0)->Val = number corresponding to the cell studied -- k
  // (A+1)->Val = magnetic field -- h
  // (A+2)->Val = material magnetization (var) or reversible magnetic field (diff) at previous time step -- xkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: updated Jk

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  if( (A+0)->Type != SCALAR ||
      (A+1)->Type != VECTOR ||
      (A+2)->Type != VECTOR )
    Message::Error("Function 'Cell_EB' requires one scalar argument (n)"
      "and two vector arguments (h, Jkp)");

///* //Init Creation of EB parameters structure
  struct params_Cells_EB params;
  params.idcell = ((A+0)->Val[0])-1;
  params.N = D->Case.Interpolation.x[1] ;
  params.Ja= D->Case.Interpolation.x[2] ;
  params.ha= D->Case.Interpolation.x[3] ;
  params.Jb= D->Case.Interpolation.x[4] ;
  params.hb= D->Case.Interpolation.x[5] ;

  params.kappa=new double[params.N];
  params.w=new double[params.N];

  params.w[params.idcell]     = D->Case.Interpolation.x[6+2*params.idcell];
  params.kappa[params.idcell] = D->Case.Interpolation.x[7+2*params.idcell];

  double h[3];
  for (int n=0; n<3; n++)
    h[n] = (A+1)->Val[n];

  params.Xp=new double[3*params.N];
  for (int n=0; n<3; n++)
    params.Xp[n+3*params.idcell] = (A+2)->Val[n];

  //End Creation of EB parameters structure
  double Xk[3];

  switch(::FLAG_APPROACH)
  {
    case 1: // Variationnal Case
      Vector_Update_Jk_VAR(h,Xk,Xk,&params);
    break;
    case 2: // Vector Play Model Case
      Vector_Update_hrk_VPM(h,Xk,Xk,&params);
    break;
    case 3: // Full Differential Case
      Vector_Update_hrk_DIFF(h,Xk,Xk,&params);
    break;
    default:
      Message::Error("Invalid parameter (FLAG_APPROACH = 1,2 or 3) for function 'Update_Cell'.\n"
                    "FLAG_APPROACH = 1 --> Variational Approach\n"
                    "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                    "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)");
    break;
  }
  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = Xk[n];
}

void F_h_EB(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = last computed magnetic field (for example at previous time step -- hp) // usefull for initialization
  // (A+1)    ->Val = magnetic induction -- b
  // (A+2+1*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: magnetic field -- h

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  ///* //Init Creation of EB parameters structure
  struct params_Cells_EB params;
  params.N = D->Case.Interpolation.x[1] ;
  params.Ja= D->Case.Interpolation.x[2] ;
  params.ha= D->Case.Interpolation.x[3] ;
  params.Jb= D->Case.Interpolation.x[4] ;
  params.hb= D->Case.Interpolation.x[5] ;

  params.kappa=new double[params.N];
  params.w=new double[params.N];
  for (int k=0; k<params.N; k++){
    params.w[k]     = D->Case.Interpolation.x[6+2*k];
    params.kappa[k] = D->Case.Interpolation.x[7+2*k];
  }

  params.Xp=new double[3*params.N];
  for (int k=0; k<params.N; k++) {
    for (int n=0; n<3; n++) {
      params.Xp[n+3*k] = (A+2+1*k)->Val[n];
    }
  }
  //End Creation of EB parameters structure

  double Xk_all[3*params.N];
  double h[3], b[3], bc[3] ;
  for (int n=0; n<3; n++) {
     h[n]  = (A+0)->Val[n]; // h is initialized at hp
     b[n]  = (A+1)->Val[n];
     bc[n] =0.;
  }

  Vector_h_EB(b, bc, h, Xk_all, &params); // Update h

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = h[n];

  delete [] params.kappa;
  delete [] params.w;
  delete [] params.Xp;
}

void F_b_EB(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field  -- h
  // (A+1+1*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: magnetic induction -- b

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  ///* //Init Creation of EB parameters structure
  struct params_Cells_EB params;
  params.N = D->Case.Interpolation.x[1] ;
  params.Ja= D->Case.Interpolation.x[2] ;
  params.ha= D->Case.Interpolation.x[3] ;
  params.Jb= D->Case.Interpolation.x[4] ;
  params.hb= D->Case.Interpolation.x[5] ;

  params.kappa=new double[params.N];
  params.w=new double[params.N];
  for (int k=0; k<params.N; k++){
    params.w[k]     = D->Case.Interpolation.x[6+2*k];
    params.kappa[k] = D->Case.Interpolation.x[7+2*k];
  }

  params.Xp=new double[3*params.N];
  for (int k=0; k<params.N; k++) {
    for (int n=0; n<3; n++) {
      params.Xp[n+3*k] = (A+1+1*k)->Val[n];
    }
  }
  //End Creation of EB parameters structure

  double Xk_all[3*params.N];
  double h[3], b[3];
  for (int n=0; n<3; n++)
    h[n] = (A+0)->Val[n];

  Vector_b_EB(h, b, Xk_all, &params);

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = b[n];

  delete [] params.kappa;
  delete [] params.w;
  delete [] params.Xp;
}

void F_hrev_EB(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)->Val = number corresponding to the cell studied -- k
  // (A+1+1*k)->Val = magnetic material field variable xk (either J if Var approach or hr if Diff approach)
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: reversible magnetic field -- hr

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

///* //Init Creation of EB parameters structure
  struct params_Cells_EB params;
  params.idcell = ((A+0)->Val[0])-1;
  params.N = D->Case.Interpolation.x[1] ;
  params.Ja= D->Case.Interpolation.x[2] ;
  params.ha= D->Case.Interpolation.x[3] ;
  params.Jb= D->Case.Interpolation.x[4] ;
  params.hb= D->Case.Interpolation.x[5] ;

  params.w=new double[params.N];
  params.w[params.idcell]     = D->Case.Interpolation.x[6+2*params.idcell];
  //End Creation of EB parameters structure

  double hrk[3], xk[3];
  switch(::FLAG_APPROACH) {
    case 1:
        for (int n=0; n<3; n++)
          xk[n]  = (A+1)->Val[n];
        Vector_hrk_From_Jk(xk,&params, hrk);
    break;
    case 2:
    case 3:
      for (int n=0; n<3; n++)
        hrk[n]  = (A+1)->Val[n];
    break;
    default:
      Message::Error("Invalid parameter (FLAG_APPROACH = 1,2 or 3) for function 'F_hr_EB'.\n"
                      "FLAG_APPROACH = 1 --> Variational Approach\n"
                      "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                      "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)");
    break;
  }

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = hrk[n];

  delete [] params.w;

}


void F_Jrev_EB(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)->Val = number corresponding to the cell studied -- k
  // (A+1+1*k)->Val = magnetic material field variable xk (either J if Var approach or hr if Diff approach)
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: magnetic magnetization -- J

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  ///* //Init Creation of EB parameters structure
  struct params_Cells_EB params;
  params.idcell = ((A+0)->Val[0])-1;
  params.N = D->Case.Interpolation.x[1] ;
  params.Ja= D->Case.Interpolation.x[2] ;
  params.ha= D->Case.Interpolation.x[3] ;
  params.Jb= D->Case.Interpolation.x[4] ;
  params.hb= D->Case.Interpolation.x[5] ;

  params.w=new double[params.N];
  params.w[params.idcell]     = D->Case.Interpolation.x[6+2*params.idcell];
  //End Creation of EB parameters structure

  double Jk[3], xk[3];
  switch(::FLAG_APPROACH) {
    case 1:
      for (int n=0; n<3; n++)
        Jk[n]  = (A+1)->Val[n];
    break;
    case 2:
    case 3:
        for (int n=0; n<3; n++)
          xk[n]  = (A+1)->Val[n];
        Vector_Jk_From_hrk(xk,&params, Jk);
    break;
    default:
      Message::Error("Invalid parameter (FLAG_APPROACH = 1,2 or 3) for function 'F_Jr_EB'.\n"
                      "FLAG_APPROACH = 1 --> Variational Approach\n"
                      "FLAG_APPROACH = 2 --> Vector Play Model approach\n"
                      "FLAG_APPROACH = 3 --> Full Differential Approach (gsl)");
    break;
  }

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = Jk[n];
}

void F_dbdh_EB(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field -- h
  // (A+1+1*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: differential reluctivity -- dbdh

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  ///* //Init Creation of EB parameters structure
  struct params_Cells_EB params;
  params.N = D->Case.Interpolation.x[1] ;
  params.Ja= D->Case.Interpolation.x[2] ;
  params.ha= D->Case.Interpolation.x[3] ;
  params.Jb= D->Case.Interpolation.x[4] ;
  params.hb= D->Case.Interpolation.x[5] ;

  params.kappa=new double[params.N];
  params.w=new double[params.N];
  for (int k=0; k<params.N; k++){
    params.w[k]     = D->Case.Interpolation.x[6+2*k];
    params.kappa[k] = D->Case.Interpolation.x[7+2*k];
  }

  params.Xp=new double[3*params.N];
  for (int k=0; k<params.N; k++) {
    for (int n=0; n<3; n++) {
      params.Xp[n+3*k] = (A+1+1*k)->Val[n];
    }
  }
  //End Creation of EB parameters structure

  double h[3];
  for (int n=0; n<3; n++)
     h[n]  = (A+0)->Val[n];

  double Xk_all[3*params.N], bdummy[3];
  Vector_b_EB(h, bdummy, Xk_all, &params); // to update Xk_all


  // Init dbdh
  int ncomp = ::NCOMP;
  switch(::FLAG_SYM)
  {
    case 1:
      V->Type = TENSOR_SYM ;
    break;
    case 0:
      V->Type = TENSOR ;
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
        "for function 'F_dhdb_EB'.\n");
    break;
  }
  double *dbdh; dbdh = new double[ncomp];
  for (int n=0; n<ncomp; n++) dbdh[n]=0.;

  switch(::FLAG_JACEVAL) {
      case 1:
        Tensor_dbdh_ana(h, Xk_all, &params, dbdh); // eval dbdh
      break;
      case 2:
        Tensor_num(Vector_b_EB, h, ::DELTA_0, Xk_all, &params, dbdh); // eval dbdh numerically
      break;
      default:
        Message::Error("Invalid parameter (FLAG_JACEVAL = 1,2) for function 'F_dhdb_EB'.\n"
                       "FLAG_JACEVAL = 1 --> analytical Jacobian dbdh\n"
                       "FLAG_JACEVAL = 2 --> numerical Jacobian dbdh");
      break;
  }

  for (int k=0 ; k<ncomp ; k++)
    V->Val[k] = dbdh[k] ;

  delete [] dbdh;
  delete [] params.kappa;
  delete [] params.w;
  delete [] params.Xp;
}

void F_dhdb_EB(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field -- h
  // (A+1+1*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: differential reluctivity -- dhdb

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  ///* //Init Creation of EB parameters structure
  struct params_Cells_EB params;
  params.N = D->Case.Interpolation.x[1] ;
  params.Ja= D->Case.Interpolation.x[2] ;
  params.ha= D->Case.Interpolation.x[3] ;
  params.Jb= D->Case.Interpolation.x[4] ;
  params.hb= D->Case.Interpolation.x[5] ;

  params.kappa=new double[params.N];
  params.w=new double[params.N];
  for (int k=0; k<params.N; k++){
    params.w[k]     = D->Case.Interpolation.x[6+2*k];
    params.kappa[k] = D->Case.Interpolation.x[7+2*k];
  }

  params.Xp=new double[3*params.N];
  for (int k=0; k<params.N; k++) {
    for (int n=0; n<3; n++) {
      params.Xp[n+3*k] = (A+1+1*k)->Val[n];
    }
  }
  //End Creation of EB parameters structure

  double h[3];
  for (int n=0; n<3; n++)
     h[n]  = (A+0)->Val[n];

  double Xk_all[3*params.N],bdummy[3];
  Vector_b_EB(h, bdummy, Xk_all, &params); // to update Xk_all

  // Init dbdh
  int ncomp = ::NCOMP;
  switch(::FLAG_SYM)
  {
    case 1:
      V->Type = TENSOR_SYM ;
    break;
    case 0:
      V->Type = TENSOR ;
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
        "for function 'F_dhdb_EB'.\n");
    break;
  }
  double *dbdh; dbdh = new double[ncomp];
  double *dhdb; dhdb = new double[ncomp];
  for (int n=0; n<ncomp; n++) {dbdh[n]=0.; dhdb[n]=0.;}

  switch(::FLAG_JACEVAL) {
    case 1:
      Tensor_dbdh_ana(h, Xk_all, &params, dbdh); // eval dbdh
    break;
    case 2:
      Tensor_num(Vector_b_EB, h, ::DELTA_0, Xk_all, &params, dbdh); // eval dbdh numerically
    break;
    default:
      Message::Error("Invalid parameter (FLAG_JACEVAL = 1,2) for function 'F_dhdb_EB'.\n"
                     "FLAG_JACEVAL = 1 --> analytical Jacobian dhdb\n"
                     "FLAG_JACEVAL = 2 --> numerical Jacobian dhdb");
    break;
  }

  switch(::FLAG_SYM)
  {
    case 1:
      Inv_TensorSym3x3(dbdh, dhdb); // dimension, T, invT
    break;
    case 0:
      Inv_Tensor3x3(dbdh, dhdb); // dimension, T, invT
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1)"
        "for function 'F_dhdb_EB'.\n");
    break;
  }

  for (int k=0 ; k<ncomp ; k++)
    V->Val[k] = dhdb[k] ;

  delete [] dhdb;
  delete [] dbdh;
  delete [] params.kappa;
  delete [] params.w;
  delete [] params.Xp;
}

//************************************************
// Energy-Based Model - GetDP Functions (DEPRECIATED):
//************************************************

void F_Update_Cell_K(F_ARG) {
  // Updating the Cell variable : Jk (for variationnal approach) or hrk (for differential approach)
  // ---------------------------------------------
  // input:
  // (A+0)->Val = number corresponding to the cell studied -- k
  // (A+1)->Val = magnetic field -- h
  // (A+2)->Val = material magnetization (var) or reversible magnetic field (diff) -- xk // USELESS recomputed inside
  // (A+3)->Val = material magnetization (var) or reversible magnetic field (diff) at previous time step -- xkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: updated Jk

  //Message::Warning("Function 'Update_Cell_K[k, {h}, {xk}, {xk}[1] ]' will be depecriated, please replace by 'Cell_EB[k, {h}, {xk}[1]]'");
  for (int n=0; n<3; n++) {
    (A+2)->Val[n]=(A+3)->Val[n];
  }
  F_Cell_EB(Fct,A,V);
}

void F_h_Vinch_K(F_ARG){
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = last computed magnetic field (for example at previous time step -- hp) // usefull for initialization
  // (A+1)    ->Val = magnetic induction -- b
  // (A+2)    ->Val = magnetic induction corresponding to the last computed magnetic field (for example at previous time step -- bp) // USELESS hp is enhough
  // (A+3+2*k)->Val = material magnetization -- Jk // USELESS because recomputed
  // (A+4+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: magnetic field -- h

  //Message::Warning("Function 'h_Vinch_K[{h},{b},{b}[1], {xk}, {xk}[1], ...]' will be depecriated, please replace by 'h_EB[{h},{b}, {xk}[1], ...]'");
  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  int N = D->Case.Interpolation.x[1] ;
  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)
      (A+2+1*k)->Val[n]=(A+4+2*k)->Val[n];
  }
  F_h_EB(Fct,A,V);
}

void F_b_Vinch_K(F_ARG){
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field  -- h
  // (A+1+2*k)->Val = material magnetization -- Jk  // USELESS because recomputed
  // (A+2+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: magnetic induction -- b
  //Message::Warning("Function 'b_Vinch_K[{h}, {xk}, {xk}[1], ...]' will be depecriated, please replace by 'b_EB[{h}, {xk}[1]]'");

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  int N = D->Case.Interpolation.x[1] ;
  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)
      (A+1+1*k)->Val[n]=(A+2+2*k)->Val[n];
  }
  F_b_EB(Fct,A,V);
}

void F_hr_Vinch_K(F_ARG){
  //Message::Warning("Function 'hr_Vinch_K[...]' will be depecriated, please replace by 'hr_EB[...]'");
  F_hrev_EB(Fct,A,V);
}
void F_Jr_Vinch_K(F_ARG){
  //Message::Warning("Function 'Jr_Vinch_K[...]' will be depecriated, please replace by 'Jrev_EB[...]'");
  F_Jrev_EB(Fct,A,V);
}
void F_dbdh_Vinch_K(F_ARG){
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field -- h
  // (A+1+2*k)->Val = material magnetization -- Jk // USELESS if recomputed with Vector_b_EB here after
  // (A+2+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: differential reluctivity -- dbdh

  //Message::Warning("Function 'dbdh_Vinch_K[{h}, {xk}, {xk}[1], ...]' will be depecriated, please replace by 'dbdh_EB[{h}, {xk}[1], ...]'");
  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  int N = D->Case.Interpolation.x[1] ;
  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)
      (A+1+1*k)->Val[n]=(A+2+2*k)->Val[n];
  }
  F_dbdh_EB(Fct,A,V);
}
void F_dhdb_Vinch_K(F_ARG){
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field -- h
  // (A+1+2*k)->Val = material magnetization -- Jk // USELESS if recomputed with Vector_b_EB here after
  // (A+2+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, kappa_1, ..., w_N, kappa_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: differential reluctivity -- dhdb

  //Message::Warning("Function 'dhdb_Vinch_K[{h}, {xk}, {xk}[1], ...]' will be depecriated, please replace by 'dhdb_EB[{h}, {xk}[1], ...]'");

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  int N = D->Case.Interpolation.x[1] ;
  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)
      (A+1+1*k)->Val[n]=(A+2+2*k)->Val[n];
  }
  F_dhdb_EB(Fct,A,V);
}
