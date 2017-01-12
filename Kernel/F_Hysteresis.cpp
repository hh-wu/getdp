// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
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
#define FLAG_WARNING_INFO_ROOTFINDING 2
#define FLAG_WARNING_INFO_MIN         3
#define FLAG_WARNING_DISP_INV         11
#define FLAG_WARNING_DISP_ROOTFINDING 12
#define FLAG_WARNING_STOP_INV         101
#define FLAG_WARNING_STOP_ROOTFINDING 102
#define FLAG_WARNING_ITER             100

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

  dBdH[0] =  MU0 * (1e0 + dMdH[0]) ; // 100 for better convergence, forcing a bit of slope in NR iterations (slope forcing)
  dBdH[3] =  MU0 * (1e0 + dMdH[3]) ;
  dBdH[5] =  MU0 * (1e0 + dMdH[5]) ;
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


///*=========================================================================== BEGIN (NOT USED FOR NOW)
// Functions for Vectorial Incremental Nonconservative Consistent Hysteresis
// Model
// NOT USED FOR NOW (26/06/2016)

double chi_mag_Vinch(double b_rev, double Js0, double alpha)
{
  double h = 0.;
  double chi_mag ;

  if(!b_rev)
    chi_mag = Js0/alpha/MU0 ; // value at the limit
  else { // Newton iteration to find h
    double TOL=1e-7;
    double r, drdh, dh;
    int MAX_ITER=50, iter=0;
    do {
      iter++;
      r    = MU0 * h + Js0 * tanh(h/alpha) - b_rev ;
      drdh = MU0     + Js0/alpha/SQU(cosh(h/alpha)) ;
      dh   = -r/drdh ;
      h   += dh ;
    }  while( (fabs(dh) > TOL) && (iter < MAX_ITER) );
    //Message::Info("%d %.2f %.2f NR iterations in chi_mag_Vinch", iter, b_rev, h);

    if(iter>=MAX_ITER)
      Message::Error("Newton did not converge: h = %lf \n", h);
    chi_mag = Js0/MU0* ((fabs(h)<1e-4) ? 1/alpha : tanh(h/alpha)/h ) ;
  }

  return chi_mag ;

}

void F_nu_Vinch(F_ARG)
{
  // input  :
  // (A+0)->Val[0] = norm of the reversible inductance
  //       -- norm(b_rev) = norm(b_tot-sum(\Js_k))
  // (A+1)->Val[0] = saturation magnetisation of the reversible case
  //       -- Js_0
  // (A+2)->Val[0] = characteristic magnetic field inversely proportional to the
  //       slope of the curve at origin -- alpha
  // output : nu

  double vb_rev[3]  = {(A+0)->Val[0], (A+0)->Val[1], (A+0)->Val[2]};
  double b_rev  = norm(vb_rev);
  //double b_rev  = (A+0)->Val[1]; // I am taking just the Y-component, so I keep track of the sign..
  double Js0    = (A+1)->Val[0];
  double alpha  = (A+2)->Val[0];

  double  chi_mag = chi_mag_Vinch(b_rev, Js0, alpha);

  //printf("chi_mag %.3f h %.3f nu_vinch %.3f \n", chi_mag, h, 1/MU0/(1+chi_mag) );
  //V->Type = SCALAR;
  //V->Val[0] = 1/MU0/(1+chi_mag); // reluctivity

  V->Type = TENSOR_SYM ; // For extension to vectorial case ... Now it does not make any difference, of course.
  V->Val[0] = 1/MU0/(1+chi_mag)  ;  V->Val[1] = 0.0  ;  V->Val[2] = 0.0 ;
  V->Val[3] = 1/MU0/(1+chi_mag)  ;  V->Val[4] = 0.0 ;
  V->Val[5] = 1/MU0/(1+chi_mag)  ;
}

void F_mu_Vinch(F_ARG)
{
  // input  :
  // (A+0)->Val[0] = norm of the reversible inductance
  //       -- norm(b_rev) = norm(b_tot-sum(\Js_k))
  // (A+1)->Val[0] = saturation magnetisation of the reversible case
  //       -- Js_0
  // (A+2)->Val[0] = characteristic magnetic field inversely proportional to the
  //       slope of the curve at origin -- alpha
  // output : nu

  double vb_rev[3]  = {(A+0)->Val[0], (A+0)->Val[1], (A+0)->Val[2]};
  double b_rev  = norm(vb_rev);
  //double b_rev  = (A+0)->Val[1]; // I am taking just the Y-component, so I keep track of the sign..
  double Js0    = (A+1)->Val[0];
  double alpha  = (A+2)->Val[0];

  double  chi_mag = chi_mag_Vinch(b_rev, Js0, alpha);

  //printf("chi_mag %.3f h %.3f nu_vinch %.3f \n", chi_mag, h, 1/MU0/(1+chi_mag) );
  //V->Type = SCALAR;
  //V->Val[0] = 1/MU0/(1+chi_mag); // reluctivity

  V->Type = TENSOR_SYM ; // For extension to vectorial case ... Now it does not make any difference, of course.
  V->Val[0] = MU0*(1+chi_mag)  ;  V->Val[1] = 0.0  ;  V->Val[2] = 0 ;
  V->Val[3] = MU0*(1+chi_mag)  ;  V->Val[4] = 0 ;
  V->Val[5] = MU0*(1+chi_mag)  ;
}

double F_Man_Vinch(double h, double Js0, double alpha)
{
  // Anhysteretic magnetisation
  double chi_mag = Js0/MU0* ((fabs(h)<1e-4) ? 1/alpha : tanh(h/alpha)/h ) ;
  return chi_mag ;
}

double F_dMandH_Vinch(double h, double Js0, double alpha)
{
  double dmdh =  Js0/MU0 * ( (fabs(h)<1e-4) ? 0. : 1/alpha/SQU(cosh(h/alpha))/h - tanh(h/alpha)/h/h) ;
  return dmdh ;
}

void FV_Man_Vinch(double H[3], double Js0, double alpha, double Man[3])
{
  double nH = sqrt(H[0]*H[0]+H[1]*H[1]+H[2]*H[2]) ;
  if ( !nH ) {
    Man[0] = Man[1] = Man[2]= 0. ;
  }
  else {
    double auxMan = F_Man_Vinch(nH, Js0, alpha) ;
    Man[0] = auxMan * H[0]/nH ;
    Man[1] = auxMan * H[1]/nH ;
    Man[2] = auxMan * H[2]/nH ;
  }
}

void FV_dMandH_Vinch(double H[3], double Js0, double alpha, double dMandH[6])
{
  double nH2 = H[0]*H[0]+H[1]*H[1]+H[2]*H[2] ;
  double nH = sqrt(nH2) ;
  double Man = F_Man_Vinch(nH, Js0, alpha) ;
  double ndMandH = F_dMandH_Vinch(nH,Js0,alpha) ;

  if( !nH ) {
    dMandH[0] = dMandH[3] = dMandH[5] = ndMandH ;
    dMandH[1] = dMandH[2] = dMandH[4] = 0 ;
  }
  else {
    dMandH[0] = Man/nH + (ndMandH - Man/nH)*H[0]*H[0]/nH2 ;
    dMandH[3] = Man/nH + (ndMandH - Man/nH)*H[1]*H[1]/nH2 ;
    dMandH[5] = Man/nH + (ndMandH - Man/nH)*H[2]*H[2]/nH2 ;
    dMandH[1] =          (ndMandH - Man/nH)*H[0]*H[1]/nH2 ;
    dMandH[2] =          (ndMandH - Man/nH)*H[0]*H[2]/nH2 ;
    dMandH[4] =          (ndMandH - Man/nH)*H[1]*H[2]/nH2 ;
  }
}

void F_dbdh_Vinch(F_ARG)
{
  // input  :
  // (A+0)->Val = magnetic field
  // (A+1)->Val[0] = saturation magnetisation of the reversible case
  //       -- Js_0
  // (A+2)->Val[0] = characteristic magnetic field inversely proportional to the
  //       slope of the curve at origin -- alpha
  // output : dnudb2

  double H[3]  = {(A+0)->Val[0], (A+0)->Val[1], (A+0)->Val[2]};
  double Js0    = (A+1)->Val[0];
  double alpha  = (A+2)->Val[0];
  double dMdH[6] ;

  // differential susceptibility db/dh  = MU0 (1 + dm/dh)
  // m = chi = Js0*tanh(h/alpha)/(MU0*h);

  FV_dMandH_Vinch(H, Js0, alpha, dMdH) ;

  V->Type = TENSOR_SYM ; // Vectorial extension or not does not make any difference for the time being...
  V->Val[0] = MU0 * (1 + dMdH[0]) ;  V->Val[1] = MU0 *dMdH[1]  ;  V->Val[2] = MU0 *dMdH[2] ;
  V->Val[3] = MU0 * (1 + dMdH[3]) ;  V->Val[4] = MU0 *dMdH[3] ;
  V->Val[5] = MU0 * (1 + dMdH[5]) ;
}

void F_h_Vinch(F_ARG)
{
  // input  :
  // (A+0)->Val =  Curl a
  // (A+1)->Val = \sum J_k
  // (A+2)->Val[0] = saturation magnetisation of the reversible case
  //       -- Js_0
  // (A+3)->Val[0] = characteristic magnetic field inversely proportional to the
  //       slope of the curve at origin -- alpha

  double B[3]  = {(A+0)->Val[0], (A+0)->Val[1], (A+0)->Val[2]};
  double Jk[3] = {(A+1)->Val[0], (A+1)->Val[1], (A+1)->Val[2]};
  double Js0    = (A+2)->Val[0];
  double alpha  = (A+3)->Val[0];


  double Brev[3]  = {B[0]-Jk[0], B[1]-Jk[1], B[2]-Jk[2]};
  double nBrev  = norm(Brev);

  double chi_mag = chi_mag_Vinch(nBrev, Js0, alpha);

  V->Type = VECTOR ;
  for (int k=0 ; k<3 ; k++)  V->Val[k] = 1/MU0/(1+chi_mag) * (B[k]-Jk[k]) ;
}


void F_dhdb_Vinch(F_ARG)
{
  // input  :
  // (A+0)->Val = magnetic field
  // (A+1)->Val[0] = saturation magnetisation of the reversible case
  //       -- Js_0
  // (A+2)->Val[0] = characteristic magnetic field inversely proportional to the
  //       slope of the curve at origin -- alpha
  // output : dnudb2

  double H[3]  = {(A+0)->Val[0], (A+0)->Val[1], (A+0)->Val[2]};
  double Js0    = (A+1)->Val[0];
  double alpha  = (A+2)->Val[0];
  double dMdH[6], dBdH[6], dHdB[6] ;

  // differential susceptibility db/dh  = MU0 (1 + dm/dh)
  // m = chi = Js0*tanh(h/alpha)/(MU0*h);

  FV_dMandH_Vinch(H, Js0, alpha, dMdH) ;

  dBdH[0] = MU0 * (1 + dMdH[0]) ;
  dBdH[3] = MU0 * (1 + dMdH[3]) ;
  dBdH[5] = MU0 * (1 + dMdH[5]) ;
  dBdH[1] = MU0 * dMdH[1]  ;
  dBdH[2] = MU0 * dMdH[2]  ;
  dBdH[4] = MU0 * dMdH[4]  ;

  double det =  dBdH[0] * (dBdH[3] *dBdH[5] - dBdH[4] *dBdH[4])
              - dBdH[1] * (dBdH[1] *dBdH[5] - dBdH[4] *dBdH[2])
              + dBdH[2] * (dBdH[1] *dBdH[4] - dBdH[3] *dBdH[2]);

  if (!det)
    Message::Error("Null determinant of db/dh!");

  dHdB[0] =  (dBdH[3]*dBdH[5]-dBdH[4]*dBdH[4])/det ;
  dHdB[1] = -(dBdH[1]*dBdH[5]-dBdH[2]*dBdH[4])/det ;
  dHdB[2] =  (dBdH[1]*dBdH[4]-dBdH[2]*dBdH[3])/det ;
  dHdB[3] =  (dBdH[0]*dBdH[5]-dBdH[2]*dBdH[2])/det ;
  dHdB[4] = -(dBdH[0]*dBdH[4]-dBdH[1]*dBdH[2])/det ;
  dHdB[5] =  (dBdH[0]*dBdH[3]-dBdH[1]*dBdH[1])/det ;

  V->Type = TENSOR_SYM ;
  for (int i=0 ; i<6 ; i++)
    V->Val[i] = dHdB[i] ;
}
//*/=========================================================================== END (NOT USED FOR NOW)

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
int    FLAG_ROOTFINDING1D;
int    FLAG_VARORDIFF;
int    FLAG_MINMETHOD;
int    FLAG_TANORLANG;
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
double SLOPE_FACTOR;

void set_sensi_param(struct FunctionActive *D)
{
  ::FLAG_DIM            = D->Case.Interpolation.x[0] ; 
  ::FLAG_SYM            = 0;
  ::FLAG_CENTRAL_DIFF   = 1;
  int j = 11 ;
  ::FLAG_INVMETHOD      = D->Case.Interpolation.x[j+1] ;
  /*
  FLAG_INVMETHOD = 1 --> NR_ana (homemade)
  FLAG_INVMETHOD = 2 --> NR_num (homemade)
  FLAG_INVMETHOD = 3 --> bfgs (homemade)
  FLAG_INVMETHOD = 4 --> hybridsj (gsl)
  FLAG_INVMETHOD = 5 --> hybridj (gsl)
  FLAG_INVMETHOD = 6 --> newton (gsl)
  FLAG_INVMETHOD = 7 --> gnewton (gsl)
  */
  ::FLAG_ROOTFINDING1D  = D->Case.Interpolation.x[j+2] ;
  /*
  FLAG_ROOTFINDING1D  = 0 --> Not done
  FLAG_ROOTFINDING1D  = 1 --> (1D minimization) golden section (gsl)
  FLAG_ROOTFINDING1D  = 2 --> (1D minimization) brent (gsl)
  FLAG_ROOTFINDING1D  = 3 --> (1D minimization) quad golden (gsl)
  FLAG_ROOTFINDING1D  = 4 --> (1D root bracketing) bisection (gsl)
  FLAG_ROOTFINDING1D  = 5 --> (1D root bracketing) brent (gsl)
  FLAG_ROOTFINDING1D  = 6 --> (1D root bracketing) falsepos (gsl)
  FLAG_ROOTFINDING1D  = 7 --> (1D root finding with derivatives) newton (gsl)
  FLAG_ROOTFINDING1D  = 8 --> (1D root finding with derivatives) secant (gsl)
  FLAG_ROOTFINDING1D  = 9 --> (1D root finding with derivatives) steffenson (gsl)
  */
  ::FLAG_VARORDIFF      = D->Case.Interpolation.x[j+3] ;
  /*
  FLAG_VARORDIFF = 1 --> variational approach (Jk)
  FLAG_VARORDIFF = 2 --> simple differential approach (hrk)
  FLAG_VARORDIFF = 3 --> full differential approach (hrk)
  */
  ::FLAG_MINMETHOD      = D->Case.Interpolation.x[j+4] ;
  /*
  FLAG_MINMETHOD = 1 --> steepest descent (homemade)
  FLAG_MINMETHOD = 2 --> conjugate fr (gsl)
  FLAG_MINMETHOD = 3 --> conjugate pr (gsl)
  FLAG_MINMETHOD = 4 --> bfgs2 (gsl)
  FLAG_MINMETHOD = 5 --> bfgs (gsl)
  FLAG_MINMETHOD = 6 --> steepest descent (gsl)
  */
  ::FLAG_TANORLANG      = D->Case.Interpolation.x[j+5] ;
  /*
  FLAG_TANORLANG = 1 --> hyperbolic tangent
  FLAG_TANORLANG = 2 --> double langevin function
  */
  ::FLAG_WARNING        = D->Case.Interpolation.x[j+6] ;
  /*
  FLAG_WARNING   = 1 --> Inversion Loop

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
  ::SLOPE_FACTOR        = 1e2;
}
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

double Mul_VecVec_K(const double *v1, const double *v2)
{
  return v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2];
}

void Mul_TensorVec_K(const double *M, const double *v, double *Mv, const int transpose_M)
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
      Message::Error("Invalid parameter for function 'Mul_TensorVec_K'");
    break;
  }
}

void Mul_TensorSymTensorSym_K(double *A, double *B, double *C)
{
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

void Inv_Tensor3x3_K(double *T, double *invT)
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
      Message::Error("Invalid parameter for function 'Inv_Tensor3x3_K'");
    break;
  }
}

void Inv_TensorSym3x3_K(double *T, double *invT)
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
      Message::Error("Invalid parameter for function 'Inv_TensorSym3x3_K'");
    break;
  }
}

// pour info
// #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
// http://www.gnu.org/software/gsl/manual/html_node/Multimin-Examples.html

#if !defined(HAVE_GSL)

//================================================= BEGIN (NOT USED FOR NOW)
// NOT USED FOR NOW
void F_Update_Jk(F_ARG)
{
  Message::Error("F_Update_Jk requires the GSL");
}
void F_Update_Jk_sd(F_ARG)
{
  Message::Error("F_Update_Jk_sd requires the GSL");
}
//================================================= END (NOT USED FOR NOW)

void F_Update_Cell_K(F_ARG)
{
  Message::Error("F_Update_Cell_K requires the GSL");
}
void F_b_Vinch_K(F_ARG)
{
  Message::Error("F_b_Vinch_K requires the GSL");
}
void F_h_Vinch_K(F_ARG)
{
  Message::Error("F_dbdh_Vinch_K requires the GSL");
}
void F_dbdh_Vinch_K(F_ARG)
{
  Message::Error("F_Update_Cell_K requires the GSL");
}
void F_dhdb_Vinch_K(F_ARG)
{
  Message::Error("F_dhdb_Vinch_K requires the GSL");
}
#else
#include <gsl/gsl_vector.h>
#include <gsl/gsl_multiroots.h>
#include <gsl/gsl_multimin.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_min.h>
#include <gsl/gsl_roots.h>


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
    printf("new\n");
    double y=nJ;
    if (fabs(y)<(::TOLERANCE_0))
        return y/dJanhy(0.,Ja,ha,Jb,hb);
    ///* New Element from FH : fictitious slope above 1e6 (09/06/2016)-------------
    double tmp = y - Janhy(1e6,Ja,ha,Jb,hb);
    if (tmp>0)
      return 1e6+1e10*tmp;
     //*///---------------------------------------------------------------------------
    int i=0;
    double x=2.0;
    double dJan=dJanhy(x,Ja,ha,Jb,hb); 
    dJan=(dJan>1e-10)?dJan:1e-10; // New Limitation from FH (09/06/2016)
    double dx = (y-Janhy(x,Ja,ha,Jb,hb))/dJan;
      while ( ((fabs(dx)/((1>fabs(x))?1:fabs(x))) > ::TOLERANCE_NR) && (i<20) ) 
      {
          dJan = dJanhy(x,Ja,ha,Jb,hb);
          dJan = (dJan>1e-10)?dJan:1e-10; // New Limitation from FH (09/06/2016)
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


//************************************************
// Pseudo-Potential Functional Characteristics :
//************************************************

struct omega_f_context
{
  double h[3], Jp[3];
  double chi;
  double Ja, ha, Jb, hb;
} ;

double omega_f(const gsl_vector *v, void *params)
{
  double J[3];
  struct omega_f_context * p = (struct omega_f_context *)params;
  double h[3]  = { p->h[0] , p->h[1] , p->h[2]  };
  double Jp[3] = { p->Jp[0], p->Jp[1], p->Jp[2] };
  double chi   = p->chi;
  double Ja    = p->Ja;
  double ha    = p->ha;
  double Jb    = p->Jb;
  double hb    = p->hb;

  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(Ja+Jb, J) ;

  double omega = fct_omega(h, J, Jp, chi, Ja, ha,Jb,hb) ;
  return omega;
}

void omega_df (const gsl_vector *v, void *params, gsl_vector *df)
{
  double J[3] ;
  struct omega_f_context * p = (struct omega_f_context *)params;
  double h[3]  = {p->h[0] , p->h[1] , p->h[2] };
  double Jp[3] = {p->Jp[0], p->Jp[1], p->Jp[2]};
  double chi   = p->chi;
  double Ja    = p->Ja;
  double ha    = p->ha;
  double Jb    = p->Jb;
  double hb    = p->hb;

  double d_omega[3] = {0.,0.,0.};

  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(Ja+Jb, J);

  fct_d_omega (h, J, Jp, chi,
               Ja, ha, Jb, hb,
               d_omega);
  for (int i=0; i<3; i++) gsl_vector_set(df, i, d_omega[i]);
}

void omega_fdf (const gsl_vector *x, void *params, double *f, gsl_vector *df)
{
  *f = omega_f(x, params);
  omega_df(x, params, df);
}


double fct_omega(const double h[3], double Jk[3], const double Jkp[3], const double chi,
                 const double Ja, const double ha, const double Jb, const double hb)
{
  double diff[3];
  double nJk = norm(Jk), u=0., nhr=0.; // magnetisation Jk assumed to be < the saturation magnetisation Js
  for (int n=0; n<3; n++)
    diff[n] = Jk[n]-Jkp[n]; // J-Jp

  switch(::FLAG_TANORLANG) {
    case 1: // Hyperbolic Tangent Case
      u     = u_J(nJk,Ja,ha); // magnetic energy u(J)
    break;
    case 2: // Double Langevin Function Case
      nhr   = InvJanhy(nJk, Ja, ha, Jb, hb);
      u     = u_hr(nhr,Ja,ha,Jb,hb); // magnetic energy u(J)
    break;
    default:
      Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'fct_omega'.");
    break;
  }

  double Jh     = Jk[0] * h[0] + Jk[1] * h[1] + Jk[2] * h[2]; // -J.h
  double Dissip = chi * norm(diff) ; // chi | J-Jp |

  return(u-Jh+Dissip);
}

void fct_d_omega (const double h[3], double Jk[3], const double Jkp[3], const double chi,
                  const double Ja, const double ha, const double Jb, const double hb,
                  double *d_omega)
{
  d_omega[0] = d_omega[1] = d_omega[2] = 0.;
  double dJk[3];
  for (int n=0; n<3; n++) dJk[n] = Jk[n]-Jkp[n];

  double nJk  = norm(Jk);
  double ndJk = norm(dJk);
  double nhr=0.;

  switch(::FLAG_TANORLANG) {
    case 1: // Hyperbolic Tangent Case
      nhr   = InvJanhy(nJk, Ja, ha);
    break;
    case 2: // Double Langevin Function Case
      nhr   = InvJanhy(nJk, Ja, ha, Jb, hb);
    break;
    default:
      Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'fct_d_omega'.");
    break;
  }

  for (int n = 0; n < 3; n++) {
    if(nJk) d_omega[n] += nhr * Jk[n]/nJk;
    d_omega[n] -= h[n];
    if(ndJk) d_omega[n] += chi * dJk[n]/ndJk ;
  }
}

//************************************************
// Usefull Functions for the Full Differential Approach
//************************************************

void FullDiff_hi(double x, double chi, double ex[3])
{
  ex[0]=chi*cos(x);
  ex[1]=chi*sin(x);
  ex[2]=0;
}

struct FullDiff_params
{
  double chi;
  double tmp[3];
  double mutg[6]; // mutg is always symmetrical
};

double FullDiff_ff (double y, void *params)
{
  struct FullDiff_params *p = (struct FullDiff_params *) params;
  double chi   = p->chi;
  double tmp[3] = { p->tmp[0], p->tmp[1], p->tmp[2] };
  double mutg[6]=  {p->mutg[0] , p->mutg[1] , p->mutg[2],
                    p->mutg[3] , p->mutg[4] , p->mutg[5]};
  double hi[3];
  double dx[3];
  double dB[3];

  FullDiff_hi(y,  chi, hi);
  for (int n=0 ; n<3 ; n++)
    dx[n]=tmp[n]-hi[n];

  dB[0] = mutg[0]*dx[0] + mutg[1]*dx[1] + mutg[2]*dx[2];
  dB[1] = mutg[1]*dx[0] + mutg[3]*dx[1] + mutg[4]*dx[2];
  dB[2] = mutg[2]*dx[0] + mutg[4]*dx[1] + mutg[5]*dx[2];

  return dB[0]*sin(y)-dB[1]*cos(y);
}

//************************************************
// Multidimensional Root-Finding Usefull Functions
//************************************************

struct multiroot_params
{
  struct FunctionActive  * D;
  double b[3];
  double Jk_all[9];
  double Jkp_all[9];
};

int multiroot_f(const gsl_vector *v, void *params, gsl_vector *bc_b)
{
  struct multiroot_params *p
      = (struct multiroot_params *) params;

  struct FunctionActive  * D = p->D;
  double b[3]  = {p->b[0] , p->b[1] , p->b[2] };
  double Jk_all[9]={p->Jk_all[0] , p->Jk_all[1] , p->Jk_all[2],
                    p->Jk_all[3] , p->Jk_all[4] , p->Jk_all[5],
                    p->Jk_all[6] , p->Jk_all[7] , p->Jk_all[8]};
  double Jkp_all[9]={p->Jkp_all[0] , p->Jkp_all[1] , p->Jkp_all[2],
                    p->Jkp_all[3] , p->Jkp_all[4] , p->Jkp_all[5],
                    p->Jkp_all[6] , p->Jkp_all[7] , p->Jkp_all[8]};

  double h[3];
  for (int i=0; i<3; i++) h[i] = gsl_vector_get(v, i);

  double bc[3]={0.,0.,0.};
  Vector_b_Vinch_K(h, Jk_all, Jkp_all, D, bc);

  for (int i=0; i<3; i++) gsl_vector_set(bc_b, i, bc[i]-b[i]);

  return GSL_SUCCESS;
}

int multiroot_df(const gsl_vector *v, void *params, gsl_matrix *J)
{
  struct multiroot_params *p
      = (struct multiroot_params *) params;

  struct FunctionActive  * D = p->D;
  //double b[3]  = {p->b[0] , p->b[1] , p->b[2] };
  double Jk_all[9]={p->Jk_all[0] , p->Jk_all[1] , p->Jk_all[2],
                    p->Jk_all[3] , p->Jk_all[4] , p->Jk_all[5],
                    p->Jk_all[6] , p->Jk_all[7] , p->Jk_all[8]};
  double Jkp_all[9]={p->Jkp_all[0] , p->Jkp_all[1] , p->Jkp_all[2],
                    p->Jkp_all[3] , p->Jkp_all[4] , p->Jkp_all[5],
                    p->Jkp_all[6] , p->Jkp_all[7] , p->Jkp_all[8]};

  double h[3];
  for (int i=0; i<3; i++) h[i] = gsl_vector_get(v, i);

/* // BEFORE (10/06/2016): Only Symmetrical tensor consideration
  double dbdh[6]={0.,0.,0.,0.,0.,0.};
  Tensor_dbdh_Vinch_K(h, Jk_all, Jkp_all, D, dbdh);

  gsl_matrix_set (J, 0, 0, dbdh[0]);
  gsl_matrix_set (J, 0, 1, dbdh[1]);
  gsl_matrix_set (J, 0, 2, dbdh[2]);
  gsl_matrix_set (J, 1, 0, dbdh[1]);
  gsl_matrix_set (J, 1, 1, dbdh[3]);
  gsl_matrix_set (J, 1, 2, dbdh[4]);
  gsl_matrix_set (J, 2, 0, dbdh[2]);
  gsl_matrix_set (J, 2, 1, dbdh[4]);
  gsl_matrix_set (J, 2, 2, dbdh[5]);
*/

///* New: Deal with Symmetrical or Asymmetrical Tensor consideration (10/06/2016)-------------
int ncomp = 6;
  switch(::FLAG_SYM)
  {
    case 1:
      ncomp=6;
    break;
    case 0:
      ncomp=9;
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'multiroot_df'.\n");
    break;
  }
  double *dbdh=(double *) malloc(ncomp*sizeof(double));
  for (int n=0; n<ncomp; n++) dbdh[n]=0.;
  Tensor_dbdh_Vinch_K(h, Jk_all, Jkp_all, D, dbdh);

  gsl_matrix_set (J, 0, 0, dbdh[0]);
  gsl_matrix_set (J, 0, 1, dbdh[1]);
  gsl_matrix_set (J, 0, 2, dbdh[2]);
  switch(::FLAG_SYM)
  {
    case 1:
      gsl_matrix_set (J, 1, 0, dbdh[1]);
      gsl_matrix_set (J, 1, 1, dbdh[3]);
      gsl_matrix_set (J, 1, 2, dbdh[4]);
      gsl_matrix_set (J, 2, 0, dbdh[2]);
      gsl_matrix_set (J, 2, 1, dbdh[4]);
      gsl_matrix_set (J, 2, 2, dbdh[5]);
    break;
    case 0:
      gsl_matrix_set (J, 1, 0, dbdh[3]);
      gsl_matrix_set (J, 1, 1, dbdh[4]);
      gsl_matrix_set (J, 1, 2, dbdh[5]);
      gsl_matrix_set (J, 2, 0, dbdh[6]);
      gsl_matrix_set (J, 2, 1, dbdh[7]);
      gsl_matrix_set (J, 2, 2, dbdh[8]);
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'multiroot_df'.\n");
    break;
  }
  free(dbdh);
 //*///-------------------------------------------------------------------------------------------
  return GSL_SUCCESS;
}

int
multiroot_fdf (const gsl_vector * x, void *params,
                gsl_vector * f, gsl_matrix * J)
{
  multiroot_f (x, params, f);
  multiroot_df (x, params, J);

  return GSL_SUCCESS;
}


void print_state_multi (int iter, gsl_multiroot_fdfsolver * s)
{
  if(::FLAG_WARNING>=FLAG_WARNING_DISP_INV && iter>=FLAG_WARNING_ITER){
    printf ("iter = %3d x = % .8f % .8f % .8f "
            "f(x) = % .8e % .8e % .8e\n",
            iter,
            gsl_vector_get (s->x, 0),
            gsl_vector_get (s->x, 1),
            gsl_vector_get (s->x, 2),
            gsl_vector_get (s->f, 0),
            gsl_vector_get (s->f, 1),
            gsl_vector_get (s->f, 2));
  }
}

//************************************************
// One dimensional Root-Finding Usefull Functions
//************************************************

struct rootfinding1d_params
{
  struct FunctionActive  * D;
  double h[3];
  double b[3];
  double dh[3];
  double Jk_all[9];
  double Jkp_all[9];
};

double rootfinding1d (double alpha, void *params)
{
  struct rootfinding1d_params *p
    = (struct rootfinding1d_params *) params;

  struct FunctionActive  * D = p->D;

  double h[3]  = {p->h[0] , p->h[1] , p->h[2] };
  double b[3]  = {p->b[0] , p->b[1] , p->b[2] };
  double dh[3] = {p->dh[0], p->dh[1], p->dh[2]};
  double ba[3], ha[3]; //diffb[3];
  double Jk_all[9]={p->Jk_all[0] , p->Jk_all[1] , p->Jk_all[2],
                    p->Jk_all[3] , p->Jk_all[4] , p->Jk_all[5],
                    p->Jk_all[6] , p->Jk_all[7] , p->Jk_all[8]};
  double Jkp_all[9]={p->Jkp_all[0] , p->Jkp_all[1] , p->Jkp_all[2],
                    p->Jkp_all[3] , p->Jkp_all[4] , p->Jkp_all[5],
                    p->Jkp_all[6] , p->Jkp_all[7] , p->Jkp_all[8]};

  for (int n=0 ; n<3 ; n++)
    ha[n]=h[n]+alpha*dh[n];

  Vector_b_Vinch_K(ha, Jk_all, Jkp_all, D, ba);

  switch(::FLAG_ROOTFINDING1D)
  {
    case 1:
      double diffb[3];
      for (int n=0 ; n<3 ; n++)
        diffb[n]=(ba[n]-b[n]);///(1+fabs(b[n]));
      return norm(diffb)/(1+norm(b));
    break;
    default:
        return ((ba[0]-b[0])*dh[0]+(ba[1]-b[1])*dh[1]+(ba[1]-b[1])*dh[1])/norm(dh);
    break;
  }
}

double rootfinding1d_deriv (double alpha, void *params)
{
  struct rootfinding1d_params *p
    = (struct rootfinding1d_params *) params;

  struct FunctionActive  * D = p->D;

  double h[3]  = {p->h[0] , p->h[1] , p->h[2] };
  //double b[3]  = {p->b[0] , p->b[1] , p->b[2] };
  double dh[3] = {p->dh[0], p->dh[1], p->dh[2]};
  double ha[3], ba[3];//, diffb[3];
  double Jk_all[9]={p->Jk_all[0] , p->Jk_all[1] , p->Jk_all[2],
                    p->Jk_all[3] , p->Jk_all[4] , p->Jk_all[5],
                    p->Jk_all[6] , p->Jk_all[7] , p->Jk_all[8]};
  double Jkp_all[9]={p->Jkp_all[0] , p->Jkp_all[1] , p->Jkp_all[2],
                    p->Jkp_all[3] , p->Jkp_all[4] , p->Jkp_all[5],
                    p->Jkp_all[6] , p->Jkp_all[7] , p->Jkp_all[8]};

/* // BEFORE (13/06/2016): Only Symmetrical tensor consideration
  double dbdha[6] 
*/
///* New: Deal with Symmetrical or Asymmetrical Tensor consideration (13/06/2016)-------------
  int ncomp = 6;
  switch(::FLAG_SYM)
  {
    case 1:
      ncomp=6;
    break;
    case 0:
      ncomp=9;
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'rootfinding1d_deriv'.\n");
    break;
  }
  double *dbdha=(double *) malloc(ncomp*sizeof(double));
  for (int n=0; n<ncomp; n++) dbdha[n]=0.;
 //*///-------------------------------------------------------------------------------------------

  for (int n=0 ; n<3 ; n++)
    ha[n]=h[n]+alpha*dh[n];

  Vector_b_Vinch_K(ha, Jk_all, Jkp_all, D, ba);
/*
  for (int n=0 ; n<3 ; n++)
    diffb[n]=(ba[n]-b[n]);///(1+fabs(b[n]));
*/
  Tensor_dbdh_Vinch_K(ha, Jk_all, Jkp_all, D, dbdha); // eval dbdh

/*
  return ((diffb[0]*dbdha[0]+diffb[1]*dbdha[1]+diffb[2]*dbdha[2])*dh[0]+
          (diffb[0]*dbdha[1]+diffb[1]*dbdha[3]+diffb[2]*dbdha[4])*dh[1]+
          (diffb[0]*dbdha[2]+diffb[1]*dbdha[4]+diffb[2]*dbdha[5])*dh[2]   )/(norm(diffb)*(1+norm(b)));
*/
/*
  return ((dbdha[0]*dh[0]+dbdha[1]*dh[1]+dbdha[2]*dh[2])+
          (dbdha[1]*dh[0]+dbdha[3]*dh[1]+dbdha[4]*dh[2])+
          (dbdha[2]*dh[0]+dbdha[4]*dh[1]+dbdha[5]*dh[2])  );
*/

  /* // BEFORE (13/06/2016): Only Symmetrical tensor consideration
  return ((dh[0]*dbdha[0]+dh[1]*dbdha[1]+dh[2]*dbdha[2])*dh[0]+
          (dh[0]*dbdha[1]+dh[1]*dbdha[3]+dh[2]*dbdha[4])*dh[1]+
          (dh[0]*dbdha[2]+dh[1]*dbdha[4]+dh[2]*dbdha[5])*dh[2]   )/(norm(dh));
  */
  ///* New: Deal with Symmetrical or Asymmetrical Tensor consideration (13/06/2016)-------------
  switch(::FLAG_SYM)
  {
    case 1:
      return ((dh[0]*dbdha[0]+dh[1]*dbdha[1]+dh[2]*dbdha[2])*dh[0]+
              (dh[0]*dbdha[1]+dh[1]*dbdha[3]+dh[2]*dbdha[4])*dh[1]+
              (dh[0]*dbdha[2]+dh[1]*dbdha[4]+dh[2]*dbdha[5])*dh[2]   )/(norm(dh));
    break;
    case 0:
      return ((dh[0]*dbdha[0]+dh[1]*dbdha[1]+dh[2]*dbdha[2])*dh[0]+
              (dh[0]*dbdha[3]+dh[1]*dbdha[4]+dh[2]*dbdha[5])*dh[1]+
              (dh[0]*dbdha[6]+dh[1]*dbdha[7]+dh[2]*dbdha[8])*dh[2]   )/(norm(dh));
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'rootfinding1d_deriv'.\n");
      return 0;
    break;
  }
  free(dbdha);
   //*///-------------------------------------------------------------------------------------------
}

void rootfinding1d_fdf (double alpha, void *params,
                        double *y, double *dy)
{
  *y  = rootfinding1d(alpha, params);
  *dy = rootfinding1d_deriv(alpha, params);
}


void print_state_1d (int iterb, const char *s_name, int status,
                    double al, double br, double alpha, double err)
{
  if(::FLAG_WARNING>=FLAG_WARNING_DISP_ROOTFINDING && iterb>=FLAG_WARNING_ITER){
    if( iterb==FLAG_WARNING_ITER)
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


///* ====================================================================== BEGIN (NOT USED FOR NOW)
// NOT USED FOR NOW (26/06/2016)
void F_Update_Jk(F_ARG)
{
  const int MAX_ITER = 100;
  int iter = 0, status;
  double step_size = 0.01;
  double TOL = 1e-4;
  double omegap;

  struct omega_f_context context ;
  context.h[0]  = (A+0)->Val[0];
  context.h[1]  = (A+0)->Val[1];
  context.h[2]  = (A+0)->Val[2];

  double J[3] = { (A+1)->Val[0], (A+1)->Val[1], (A+1)->Val[2] };

  context.Jp[0] = (A+2)->Val[0];
  context.Jp[1] = (A+2)->Val[1];
  context.Jp[2] = (A+2)->Val[2];

  context.chi   = (A+3)->Val[0];
  context.Ja    = (A+4)->Val[0];
  context.ha = (A+5)->Val[0];
 //http://www.gnu.org/software/gsl/manual/html_node/Multimin-Algorithms-with-Derivatives.html

  const gsl_multimin_fdfminimizer_type *TYPE = gsl_multimin_fdfminimizer_conjugate_fr;

  //const gsl_multimin_fdfminimizer_type *TYPE = gsl_multimin_fdfminimizer_conjugate_pr;
  //const gsl_multimin_fdfminimizer_type *TYPE = gsl_multimin_fdfminimizer_vector_bfgs2;
  //const gsl_multimin_fdfminimizer_type *TYPE = gsl_multimin_fdfminimizer_vector_bfgs;
  //const gsl_multimin_fdfminimizer_type *TYPE = gsl_multimin_fdfminimizer_steepest_descent;

  gsl_multimin_function_fdf my_func;

  my_func.n      = 3;
  my_func.f      = omega_f  ;
  my_func.df     = omega_df ;
  my_func.fdf    = omega_fdf;
  my_func.params = &context;

  gsl_vector* x = gsl_vector_alloc (3);
  for (int i=0; i<3; i++) gsl_vector_set(x, i, J[i]) ; // initial value for the minimizer

  gsl_multimin_fdfminimizer *solver = gsl_multimin_fdfminimizer_alloc(TYPE, 3);
  gsl_multimin_fdfminimizer_set (solver, &my_func, x, step_size, TOL);

  do {
    iter++;
    omegap = solver->f;
    status = gsl_multimin_fdfminimizer_iterate (solver);
    if (status) break; // check if solver is stuck
  }  while( fabs(solver->f-omegap)>1e-2 && iter < MAX_ITER);


  V->Type = VECTOR ;

  for (int i=0 ; i<3 ; i++)
    V->Val[i] = gsl_vector_get (solver->x, i) ;

  
  //for (int i=0 ; i<3 ; i++)
  //  J[i] = gsl_vector_get (solver->x, i) ;
  //limiter(0.9999*context.Js, J) ;
  //for (int i=0 ; i<3 ; i++) V->Val[i] = J[i];
  

  gsl_multimin_fdfminimizer_free (solver);
  gsl_vector_free (x);
}

// NOT USED FOR NOW (26/06/2016)
void F_Update_Jk_sd(F_ARG) {

  // Updating Jk with a steepest descent algorithm
  // ---------------------------------------------
  // input:
  // (A+0)->Val = magnetic field -- h
  // (A+1)->Val = material magnetization -- Jk
  // (A+2)->Val = material magnetization at previous time step -- Jkp
  // (A+3)->Val = limit force related to the dissipation -- chi
  // (A+4)->Val = saturation magnetization -- Js
  // (A+5)->Val = characteristic magnetic field inversely proportional to the slope at origin -- alpha
  // ---------------------------------------------
  // output: updated Jk

  double h[3], Jk[3], Jkp[3] ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR ||
      (A+3)->Type != SCALAR || (A+4)->Type != SCALAR || (A+5)->Type != SCALAR )
    Message::Error("Function 'Update_Jk_sd' requires three vector arguments (h, Jk, Jkp) and three scalar arguments (chi, Js, alpha)");

  for (int n=0; n<3; n++) {
    h[n]   = (A+0)->Val[n];
    Jk[n]  = (A+1)->Val[n];
    Jkp[n] = (A+2)->Val[n];
  }
  double chi  =(A+3)->Val[0];
  double Ja   =(A+4)->Val[0];
  double ha   =(A+5)->Val[0];
  double Jb   = 0.;
  double hb   = 0.;

  Vector_Update_Jk_K(h, Jk, Jkp, chi, Ja, ha, Jb, hb);

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = Jk[n];
}
//*/===========================================================================  END (NOT USED FOR NOW)

void Vector_Update_Jk_K(const double h[3], double Jk[3], const double Jkp[3], const double chi,
                        const double Ja, const double ha, const double Jb, const double hb) 
{
//kj++ (begin) 13/10/2016 we don't need to do the minimization when |h-hrp|<chi! ==> |nhirrp|<chi ==> Jk = Jkp
double nhirrp=norm(h);
double nJkp=norm(Jkp);
double hrp[3]={0.,0.,0.};
if (nJkp>::TOLERANCE_0)
{
  double nhrp, hirrp[3];
  switch(::FLAG_TANORLANG) {
    case 1: // Hyperbolic Tangent Case
        nhrp = InvJanhy(nJkp, Ja, ha) ;
    break;
    case 2: // Double Langevin Function Case
        nhrp = InvJanhy(nJkp, Ja, ha, Jb, hb) ;
    break;
    default:
      Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'Vector_Update_Jk_K'.");
    break;
  } 
  for (int n = 0; n < 3; n++)
  {
    hrp[n]=nhrp*Jkp[n]/nJkp; // nJkp >0 as we are in the if(nJkp>0) block
    hirrp[n]=h[n] - hrp[n];  
  }
  nhirrp=norm(hirrp);
}
if (nhirrp<=chi)
{
  for (int n = 0; n < 3; n++)
    Jk[n]=Jkp[n];
  //printf("don t do minimization\n");
  return;
}

// If one wants to start from Jk = Jk from Simple Diff Approach-----------------------------
double hr[3], Jk_simple[3];
Vector_Update_Simple_hr_K(h, hr, hrp, chi);
double nhr=norm(hr);

for (int n=0; n<3; n++) Jk_simple[n] = Jkp[n]; // NEW INITIALIZATION (not tried yet, proposed 13/06/2016)
if (nhr>::TOLERANCE_0)
{
  double nJk;
    switch(::FLAG_TANORLANG) {
      case 1: // Hyperbolic Tangent Case
          nJk = Janhy(nhr, Ja, ha) ;
      break;
      case 2: // Double Langevin Function Case
          nJk = Janhy(nhr, Ja, ha, Jb, hb) ;
      break;
      default:
        Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'Vector_Update_Jk_K'.");
      break;
    } 
  for (int n=0; n<3; n++)
    Jk_simple[n]= nJk*hr[n]/nhr;   // nhr >0 as we are in the if(nhr>0) block 
}


//kj++ (end)----------------------------------------------------------------

double J0[3];
//for (int n=0; n<3; n++) J0[n] = 0.; // NEW INITIALIZATION (not done before 16/03/2016)
//for (int n=0; n<3; n++) J0[n] = Jkp[n]; // NEW INITIALIZATION (not tried yet, proposed 13/06/2016)
for (int n=0; n<3; n++) J0[n] = Jk_simple[n]; // NEW INITIALIZATION (not tried yet, proposed 13/10/2016)

  //printf("MINIMIZE !\n");
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
    for (int n=0; n<3; n++) Jk[n] = J0[n]; // NEW INITIALIZATION (not tried yet, proposed 13/06/2016)

    limiter(Js, Jk ); // avoiding possible NaN with atanh

    fct_d_omega(h, Jk, Jkp, chi, Ja, ha,Jb,hb, d_omega) ;     // updating the derivative of omega
    double omega = fct_omega(h, Jk, Jkp, chi, Ja, ha,Jb,hb) ; // updating omega

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
      min_omega = fct_omega(h, min_Jk, Jkp, chi, Ja, ha,Jb,hb); //updating omega

      if( min_omega < omega-TOL/10 && norm(min_Jk) < Js ){
        fct_d_omega(h, min_Jk, Jkp, chi, Ja, ha,Jb,hb, d_omega); //update the derivative d_omega
        omega = min_omega;
        //if(Jk[0]==Jkp[0] && Jk[1]==Jkp[1] && Jk[2]==Jkp[2])
        if(fabs(Jk[0]-Jkp[0])<TOL && fabs(Jk[1]-Jkp[1])<TOL && fabs(Jk[2]-Jkp[2])<TOL ) //(diff zero)
          sdfactor=0.1; // re-initialize rfactor which may have become very small due to an angulous starting point

        for (int n=0; n<3; n++) Jk[n] = min_Jk[n];
      }
      else sdfactor = sdfactor/2 ;

      iter++ ;
    }
    //printf("itersd needed=%d\n", iter);
    if (::FLAG_WARNING>=FLAG_WARNING_INFO_MIN && iter==MAX_ITER)
      Message::Warning("\t\tMinimization status : the minimization has not converged yet, after %d iteration(s)", MAX_ITER);

    for (int n=0 ; n<3 ; n++)
    {
      Jk[n] = min_Jk[n];
      //When Jk is too small to be represented in normalized format (SUBNORMAL number)
      //if (fpclassify(min_Jk[n]==FP_SUBNORMAL))
      //  printf("Aaaa !!!!!!!!!!!!!!!!!!!\n");
      //if(Jk[n]<1e-50)
      //  Jk[n]=0;
    }
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
    const int MAX_ITER = ::MAX_ITER_OM;
    int iter = 0, status;
    double step_size = 0.01;   // 0.01 at basic
    double TOL = ::TOLERANCE_OM;
    double tol = TOL; //(0.1 recommended for bfgs and steepest descent else tol=TOL)
    double omegap;

    struct omega_f_context context ;
    context.h[0]  = h[0];
    context.h[1]  = h[1];
    context.h[2]  = h[2];

    double J[3] = { J0[0], J0[1], J0[2] };// INITIALIZATION (not done before 16/03/2016)

    context.Jp[0] = Jkp[0];
    context.Jp[1] = Jkp[1];
    context.Jp[2] = Jkp[2];

    context.chi        = chi;
    context.Ja         = Ja;
    context.ha         = ha;
    context.Jb         = Jb;
    context.hb         = hb;

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
    my_func.params = &context;

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


    if (::FLAG_WARNING>=FLAG_WARNING_INFO_MIN && iter==MAX_ITER)
      Message::Warning("Minimization status : the iteration has not converged yet, after %d iteration(s)", iter);

    for (int n=0 ; n<3 ; n++)
      Jk[n] = gsl_vector_get (solver->x, n) ;

    gsl_multimin_fdfminimizer_free (solver);
    gsl_vector_free (x);
  }
  break;
  default:
    Message::Error("Invalid parameter (FLAG_MINMETHOD = 1,2,..6) for function 'Vector_Update_Jk_K'.\n"
                      "FLAG_MINMETHOD = 1 --> steepest descent (homemade)\n"
                      "FLAG_MINMETHOD = 2 --> conjugate fr (gsl)\n"
                      "FLAG_MINMETHOD = 3 --> conjugate pr (gsl)\n"
                      "FLAG_MINMETHOD = 4 --> bfgs2 (gsl)\n"
                      "FLAG_MINMETHOD = 5 --> bfgs (gsl)\n"
                      "FLAG_MINMETHOD = 6 --> steepest descent (gsl)");
  break;
}

}

void Vector_Update_hr_K(const double h[3], double hr[3], const double hrp[3], const double chi, 
                        const double Ja, const double ha, const double Jb, const double hb) 
{
  // Full Differential Case
  double TOL = ::TOLERANCE_NR; 
  double Xan=0., dXandH2=0.;
  double tmp[3];
  for (int n=0; n<3; n++)
    tmp[n] = h[n]-hrp[n];
  if (norm(tmp)>chi)
  {
    int status;
    int iterb = 0, max_iterb = ::MAX_ITER_NR;
    struct FullDiff_params params;
    params.chi= chi;
    for (int n=0 ; n<3 ; n++)
      params.tmp[n]=tmp[n];

    double nhrp  = norm(hrp);
    switch(::FLAG_TANORLANG) {
      case 1: // Hyperbolic Tangent Case
        Xan      = Xanhy(nhrp, Ja, ha);
        dXandH2  = (nhrp>(::TOLERANCE_0)) ? (dXanhy(nhrp, Ja, ha)/(2*nhrp)) : 0. ;
      break;
      case 2: // Double Langevin Function Case
        Xan      = Xanhy(nhrp, Ja, ha, Jb, hb);
        dXandH2  = (nhrp>(::TOLERANCE_0)) ? (dXanhy(nhrp, Ja, ha, Jb, hb)/(2*nhrp)) : 0. ;
      break;
      default:
        Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'Tensor_dJkdh_Diff_K'.");
      break;
    }
/*
    params.mutg[0]= ::SLOPE_FACTOR*MU0 + Xan + 2 * dXandH2 * hrp[0] *  hrp[0];
    params.mutg[1]=                            2 * dXandH2 * hrp[1] *  hrp[0];
    params.mutg[2]=                            2 * dXandH2 * hrp[2] *  hrp[0];
    params.mutg[3]= ::SLOPE_FACTOR*MU0 + Xan + 2 * dXandH2 * hrp[1] *  hrp[1];
    params.mutg[4]=                            2 * dXandH2 * hrp[2] *  hrp[1];
    params.mutg[5]= ::SLOPE_FACTOR*MU0 + Xan + 2 * dXandH2 * hrp[2] *  hrp[2];
*/
    params.mutg[0]= Xan + 2 * dXandH2 * hrp[0] *  hrp[0];
    params.mutg[1]=       2 * dXandH2 * hrp[1] *  hrp[0];
    params.mutg[2]=       2 * dXandH2 * hrp[2] *  hrp[0];
    params.mutg[3]= Xan + 2 * dXandH2 * hrp[1] *  hrp[1];
    params.mutg[4]=       2 * dXandH2 * hrp[2] *  hrp[1];
    params.mutg[5]= Xan + 2 * dXandH2 * hrp[2] *  hrp[2];



    char solver_type[100]="'1D Brent for Update hr' ";
    const gsl_root_fsolver_type *T;
    gsl_root_fsolver *s;
    double xinit= atan2(tmp[1],tmp[0]);
    double r = xinit;
    double al = xinit - (1./4)*M_PI, br = xinit + (1./4)*M_PI;
    double x0;

    double ffa=FullDiff_ff(al, &params);
    double ffb=FullDiff_ff(br, &params);    
    if (ffa * ffb>0)
    {
      if (::FLAG_WARNING>=FLAG_WARNING_INFO_MIN)
        Message::Warning("ff(a)*ff(b) > 0 : ff(a)=%g; ff(b)=%g",ffa,ffb);
      x0=xinit;
    }
    else
    {
      gsl_function F;

      F.function = &FullDiff_ff;
      F.params = &params;

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

          print_state_1d(iterb, solver_type, 
                         status, al, br, r, br - al); 
        }
      while (status == GSL_CONTINUE && iterb < max_iterb);

      gsl_root_fsolver_free (s);
      x0=r;
    }
    double hi[3];
    FullDiff_hi(x0,  chi, hi);
    for (int n=0; n<3; n++)
      hr[n]=h[n]-hi[n];   
  }
  else
  {
    for (int n=0; n<3; n++)
      hr[n]=hrp[n];
  }
}

void Vector_Update_Simple_hr_K(const double h[3], double hr[3], const double hrp[3], const double chi)
{
  // Simplified Differential Case
  double dhr[3];
  for (int n=0; n<3; n++)
    dhr[n] = h[n]-hrp[n];
  double ndhr = norm(dhr);
  if (ndhr >= chi) {
    for (int n=0; n<3; n++)
      hr[n]=(ndhr>0)? h[n]-chi*(dhr[n]/ndhr) : h[n];
  }
  else {
    for (int n=0; n<3; n++)
      hr[n]=hrp[n];
  }
}

void Vector_b_Vinch_K(const double h[3],
                      double *xk_all, const double *xkp_all,
                      struct FunctionActive *D,
                      double b[3])
{
  //int dim       = D->Case.Interpolation.x[0] ;
  int N         = D->Case.Interpolation.x[1] ;
  double Ja     = D->Case.Interpolation.x[2] ;
  double ha     = D->Case.Interpolation.x[3] ;
  double Jb     = D->Case.Interpolation.x[4] ;
  double hb     = D->Case.Interpolation.x[5] ;

  double xk[3], xkp[3] ;
  double chi, Jak, Jbk, Xan=0.;

  for (int n=0; n<3; n++)
     b[n] = ::SLOPE_FACTOR* MU0 * h[n]; // Slope forcing

  for (int k=0; k<N; k++) {
    Jak  = (D->Case.Interpolation.x[6+2*k])*Ja;
    Jbk  = (D->Case.Interpolation.x[6+2*k])*Jb;
    chi = D->Case.Interpolation.x[7+2*k];
    for (int n=0; n<3; n++)  {
      xk[n]  = xk_all[n+3*k];
      xkp[n] = xkp_all[n+3*k];
    }

    switch(::FLAG_VARORDIFF) {
      case 1: // Variationnal Case
      {
        Vector_Update_Jk_K(h, xk, xkp, chi, Jak, ha, Jbk, hb);
        for (int n=0; n<3; n++) {
          xk_all[n+3*k] = xk[n];
          b[n] += xk[n];
        }
      }
      break;
      ///* New: Deal with Simplified or Full Differential Approaches (13/06/2016)-------------
      case 2: // Simplified Differential Approach
      case 3: // Full Differential Approach
      {
        switch(::FLAG_VARORDIFF) {
          case 2:
          {
            Vector_Update_Simple_hr_K(h, xk, xkp, chi);
          }
          break;
          case 3:
          {
            Vector_Update_hr_K(h, xk, xkp, chi, Jak, ha, Jbk, hb);
          }
          break;
        }
         //*/////-------------------------------------------------------------------------------------------
        double nhr  = norm(xk);
        switch(::FLAG_TANORLANG) {
          case 1: // Hyperbolic Tangent Case
              Xan = Xanhy(nhr, Jak, ha);
          break;
          case 2: // Double Langevin Function Case
              Xan = Xanhy(nhr, Jak, ha, Jbk, hb);
          break;
          default:
            Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'Vector_b_Vinch_K'.");
          break;
        } 
        for (int n=0; n<3; n++) {
          xk_all[n+3*k] = xk[n];
          b[n] += Xan*xk[n];
        }
      } 
      break;
      default:
        Message::Error("Invalid parameter (VarorDiff = 1,2 or 3) for function 'Vector_b_Vinch_K'.\n"
                      "FLAG_VARORDIFF = 1 --> Variational Approach\n"
                      "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                      "FLAG_VARORDIFF = 3 --> Full Differential Approach");
      break;
    }



   // printf("xk_all at k=%d : [%g,%g,%g,%g,%g,%g,%g,%g,%g ]\n",k,xk_all[0], xk_all[1],xk_all[2],xk_all[3], xk_all[4],xk_all[5],xk_all[6], xk_all[7],xk_all[8]);
  }
}


void Tensor_dhdb_Good_BFGS(const double dx[3],const double df[3], double *dhdb)
{

  double iJn_1df[3], dfiJn_1[3];
  double dxdf, dfiJn_1df ;

/*
  // BEFORE (13/06/2016): Only Symmetrical tensor consideration
  iJn_1df[0]=dhdb[0]*df[0]+dhdb[1]*df[1]+dhdb[2]*df[2];
  iJn_1df[1]=dhdb[1]*df[0]+dhdb[3]*df[1]+dhdb[4]*df[2];
  iJn_1df[2]=dhdb[2]*df[0]+dhdb[4]*df[1]+dhdb[5]*df[2];

  dfiJn_1[0]=df[0]*dhdb[0]+df[1]*dhdb[1]+df[2]*dhdb[2];
  dfiJn_1[1]=df[0]*dhdb[1]+df[1]*dhdb[3]+df[2]*dhdb[4];
  dfiJn_1[2]=df[0]*dhdb[2]+df[1]*dhdb[4]+df[2]*dhdb[5];

  dxdf      = dx[0]*df[0]+dx[1]*df[1]+dx[2]*df[2];

  dfiJn_1df = df[0]*iJn_1df[0]+df[1]*iJn_1df[1]+df[2]*iJn_1df[2];

  dhdb[0] = dhdb[0]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[0]) -  ( iJn_1df[0]*dx[0] + dx[0]*dfiJn_1[0] )/dxdf ; //xx
  dhdb[3] = dhdb[3]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[1]*dx[1]) -  ( iJn_1df[1]*dx[1] + dx[1]*dfiJn_1[1] )/dxdf ; //yy
  dhdb[1] = dhdb[1]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[1]) -  ( iJn_1df[0]*dx[1] + dx[0]*dfiJn_1[1] )/dxdf ; //xy
 
  switch(::FLAG_DIM) {
    case 2: // 2D case
      dhdb[5] = 1.;
      dhdb[2] = dhdb[4] = 0.;
    break;
    case 3: // 3D case
      dhdb[5] = dhdb[5]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[2]*dx[2]) -  ( iJn_1df[2]*dx[2] + dx[2]*dfiJn_1[2] )/dxdf ; //zz
      dhdb[2] = dhdb[2]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[0]*dx[2]) -  ( iJn_1df[0]*dx[2] + dx[0]*dfiJn_1[2] )/dxdf ; //xz
      dhdb[4] = dhdb[4]+ ((dxdf + dfiJn_1df)/(SQU(dxdf)))*(dx[1]*dx[2]) -  ( iJn_1df[1]*dx[2] + dx[1]*dfiJn_1[2] )/dxdf ; //yz
    break;
    default:
      Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
    break;
  }
*/

  ///* New: Deal with Symmetrical or Asymmetrical Tensor consideration (13/06/2016)-------------
  Mul_TensorVec_K(dhdb,df, iJn_1df, 0);
  Mul_TensorVec_K(dhdb,df, dfiJn_1, 1);
  dxdf=Mul_VecVec_K(dx,df);
  dfiJn_1df=Mul_VecVec_K(df,iJn_1df); 

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
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dhdb_Good_BFGS'.");
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
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dhdb_Good_BFGS'.");
        break;  
      }
    break;
    default:
      Message::Error("Invalid parameter (sym = 0 or 1) for function 'Tensor_dhdb_Good_BFGS'.");
    break;
  }
  //*///-------------------------------------------------------------------------------------------
}

/// Deal with Symmetrical or Asymmetrical Tensor consideration (13/06/2016)-------------
void Tensor_dbdh_Num(const double h[3], 
                     double *xk_all, const double *xkp_all,
                     struct FunctionActive *D,
                     double *dbdh)
{
  //int dim = D->Case.Interpolation.x[0] ;

  double delta0  = ::DELTA_0 ;
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

  double bxr[3]={0.,0.,0.};
  double bxl[3]={0.,0.,0.};
  double byr[3]={0.,0.,0.};
  double byl[3]={0.,0.,0.};
  double bzr[3]={0.,0.,0.};
  double bzl[3]={0.,0.,0.};

  double xk_all0[9]; // NEW (14/06/2016) // TO DO: make it proper
  for (int n=0; n<9; n++)  { xk_all0[n]  = xk_all[n];}

  double hxr[3]={h[0]+delta[0], h[1]          ,h[2]};          
  double hyr[3]={h[0],          h[1]+delta[1] ,h[2]};          
  double hzr[3]={h[0],          h[1]          ,h[2]+delta[2]};

  Vector_b_Vinch_K(hxr, xk_all, xkp_all, D, bxr);   
  for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n]; } // NEW (14/06/2016) // TO DO: make it proper
  Vector_b_Vinch_K(hyr, xk_all, xkp_all, D, byr);   
  for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n]; } // NEW (14/06/2016) // TO DO: make it proper

  double hxl[3],hyl[3],hzl[3];
  for (int n=0; n<3; n++) {hxl[n]=h[n]; hyl[n]=h[n]; hzl[n]=h[n];} 
  switch(::FLAG_CENTRAL_DIFF)
  {
    case 1: // Central Differences
      hxl[0]=h[0]-delta[0];
      hyl[1]=h[1]-delta[1];
      hzl[2]=h[2]-delta[2];
      Vector_b_Vinch_K(hxl, xk_all, xkp_all, D, bxl); 
      for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n];  } // NEW (14/06/2016) // TO DO: make it proper
      Vector_b_Vinch_K(hyl, xk_all, xkp_all, D, byl); 
      for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n]; } // NEW (14/06/2016) // TO DO: make it proper
    break;
    case 0: // Forward Differences
      Vector_b_Vinch_K(h, xk_all, xkp_all, D, bxl); 
      for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n];  } // NEW (14/06/2016) // TO DO: make it proper
      for (int n=0; n<3; n++) byl[n] = bxl[n] ;      
    break;
    default:
      Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dbdh_Num'.");  
    break;
  }

  dbdh[0]= (bxr[0]-bxl[0])/(hxr[0]-hxl[0]); //xx // Changing hxr[0]-hxl[0] into 2*delta[0] seems to affect the convergence ... (diverged with at ts=25 with hxr[0]-hxl[0] and at ts=31 with 2*delta[0] ??? )
  
  // ------ COMPONENT AMBIGUITY :
  //dbdh[1]= (bxr[1]-bxl[1])/(hxr[0]-hxl[0]);//yx // This one was used originally
  dbdh[1]= (byr[0]-byl[0])/(hyr[1]-hyl[1]); //xy //other possibility (more natural)
  // ------

  switch(::FLAG_SYM)
  {
    case 1:// Symmetric tensor
      dbdh[3]= (byr[1]-byl[1])/(hyr[1]-hyl[1]); //yy
      switch(::FLAG_DIM) 
      {
        case 2: // 2D case
          dbdh[5] = 1.; //zz
          dbdh[2] = dbdh[4]= 0.; //xz // yz
        break;
        case 3: // 3D case
          Vector_b_Vinch_K(hzr, xk_all, xkp_all, D, bzr); 
          for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n]; } // NEW (14/06/2016) // TO DO: make it proper
          switch(::FLAG_CENTRAL_DIFF)
          {
            case 1: // Central Differences
              Vector_b_Vinch_K(hzl, xk_all, xkp_all, D, bzl); 
              for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n];  } // NEW (14/06/2016) // TO DO: make it proper
            break;
            case 0: // Forward Differences
              for (int n=0; n<3; n++) bzl[n] = bxl[n] ;      
            break;
            default:
              Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dbdh_Num'.");  
            break;
          }
          dbdh[5]= (bzr[2]-bzl[2])/(hzr[2]-hzl[2]); //zz
          //dbdh[2]= (bxr[2]-bxl[2])/(hxr[0]-hxl[0]); //zx // This one was used originally
          dbdh[2]= (bzr[0]-bzl[0])/(hzr[2]-hzl[2]); //xz //other possibility (more natural)
          //dbdh[4]= (byr[2]-byl[2])/(hyr[1]-hyl[1]); //zy // This one was used originally
          dbdh[4]= (bzr[1]-bzl[1])/(hzr[2]-hzl[2]); //yz //other possibility (more natural)
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dbdh_Num'.");  
        break;  
      }
    break;
    case  0:// Non Symmetric tensor
      dbdh[3]= (bxr[1]-bxl[1])/(hxr[0]-hxl[0]); //yx
      dbdh[4]= (byr[1]-byl[1])/(hyr[1]-hyl[1]); //yy
      switch(::FLAG_DIM) 
      {
        case 2: // 2D case
          dbdh[8] = 1.; //zz
          dbdh[2] = dbdh[5] = dbdh[6] = dbdh[7] = 0.; //xz //yz //zx //zy
        break;
        case 3: // 3D case
          Vector_b_Vinch_K(hzr, xk_all, xkp_all, D, bzr); 
          for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n];  } // NEW (14/06/2016) // TO DO: make it proper
          switch(::FLAG_CENTRAL_DIFF)
          {
            case 1: // Central Differences
              Vector_b_Vinch_K(hzl, xk_all, xkp_all, D, bzl); 
              for (int n=0; n<9; n++)  { xk_all[n]  = xk_all0[n];  } // NEW (14/06/2016) // TO DO: make it proper
            break;
            case 0: // Forward Differences
              for (int n=0; n<3; n++) bzl[n] = bxl[n] ;      
            break;
            default:
              Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dbdh_Num'.");  
            break;
          }
          dbdh[8] = (bzr[2]-bzl[2])/(hzr[2]-hzl[2]);//zz
          dbdh[2] = (bzr[0]-bzl[0])/(hzr[2]-hzl[2]);//xz
          dbdh[5] = (bzr[1]-bzl[1])/(hzr[2]-hzl[2]);//yz
          dbdh[6] = (bxr[2]-bxl[2])/(hxr[0]-hxl[0]); //zx
          dbdh[7] = (byr[2]-byl[2])/(hyr[1]-hyl[1]); //zy  
        break;
        default:
          Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dbdh_Num'.");
        break;  
      }
    break;
    default:
      Message::Error("Invalid parameter (sym = 0 or 1) for function 'Tensor_dbdh_Num'.");
    break;
  }
}


void Tensor_dbdh_Vinch_K(const double h[3], 
                         double *xk_all, const double *xkp_all,
                         struct FunctionActive *D,
                         double *dbdh)
{
  //int dim       = D->Case.Interpolation.x[0] ;
  int N         = D->Case.Interpolation.x[1] ;
  double Ja     = D->Case.Interpolation.x[2] ;
  double ha     = D->Case.Interpolation.x[3] ;
  double Jb     = D->Case.Interpolation.x[4] ;
  double hb     = D->Case.Interpolation.x[5] ;

  double xk[3], xkp[3] ;
  double chi, Jak, Jbk;

  int ncomp=6;
  switch(::FLAG_SYM)
  {
    case 1:
      ncomp=6;
      dbdh[0] = dbdh[3] = dbdh[5] = ::SLOPE_FACTOR*MU0 ; //Slope forcing
      dbdh[1] = dbdh[2] = dbdh[4] = 0. ;
    break;
    case 0:
      ncomp=9;
      dbdh[0] = dbdh[4] = dbdh[8] = ::SLOPE_FACTOR*MU0 ; //Slope forcing
      dbdh[1] = dbdh[2] = dbdh[3] = dbdh[5] = dbdh[6] = dbdh[7] = 0. ;
    break;
    default:
      Message::Error("Invalid parameter (sym = 0 or 1) for function 'Tensor_dbdh_Vinch_K'.");
    break;
  }
  double *dJkdh=(double *) malloc(ncomp*sizeof(double));
  for (int n=0; n<ncomp; n++) dJkdh[n]=0.;

  for (int k=0; k<N; k++) {
    Jak   = (D->Case.Interpolation.x[6+2*k])*Ja;
    Jbk   = (D->Case.Interpolation.x[6+2*k])*Jb;
    chi  = D->Case.Interpolation.x[7+2*k];
    for (int n=0; n<3; n++)  {
      xk[n]  = xk_all[n+3*k];
      xkp[n] = xkp_all[n+3*k];
    }

    switch(::FLAG_VARORDIFF) {
      case 1: // Variationnal Case
        Tensor_dJkdh_Vinch_K(h, xk, xkp, chi, Jak, ha, Jbk, hb, dJkdh);
      break;
      case 2: // Differential Case
      case 3:
        Tensor_dJkdh_Diff_K(h, xk, xkp, chi, Jak, ha, Jbk, hb, dJkdh);
      break;
      default:
        Message::Error("Invalid parameter (VarorDiff = 1,2 or 3) for function 'Tensor_dbdh_Vinch_K'.\n"
                      "FLAG_VARORDIFF = 1 --> Variational Approach\n"
                      "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                      "FLAG_VARORDIFF = 3 --> Full Differential Approach");
      break;
    }
    for (int n=0; n<ncomp; n++)
      dbdh[n] += dJkdh[n] ;
  }
  free(dJkdh);
}

void Tensor_dJkdh_Vinch_K(const double h[3], const double Jk[3], const double Jkp[3], const double chi, 
                          const double Ja, const double ha, const double Jb, const double hb, 
                          double *dJkdh)
{
  double dJk[3];

  for (int n=0; n<3; n++)
    dJk[n] = Jk[n]-Jkp[n];

  double nJk  = norm(Jk);
  double ndJk = norm(dJk);

  if ((::FLAG_ANA) && (nJk>(::TOLERANCE_NJ) && ndJk>(::TOLERANCE_NJ))){ 
    Message::Debug("Analytical Jacobian Js=%g, nJk=%g and ndJk=%g",Ja+Jb, nJk, ndJk);
    
    double chiOverndJk = chi/ndJk;
    double nhr=0.; double dhrdJkOvernJk2=0.; double nhrOvernJk=0.;

    switch(::FLAG_TANORLANG) {
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
        Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'Tensor_dJkdh_Vinch_K'.");
      break;
    } 

    int ncomp = 6;
    switch(::FLAG_SYM)
    {
      case 1:
        ncomp=6;
      break;
      case 0:
        ncomp=9;
      break;
      default:
        Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Tensor_dJkdh_Vinch_K'.\n");
      break;
    }
    double *idJkdh=(double *) malloc(ncomp*sizeof(double));
    for (int n=0; n<ncomp; n++) idJkdh[n]=0.;

    idJkdh[0] = dhrdJkOvernJk2  * (Jk[0]*Jk[0]) + nhrOvernJk * (1. - (1/SQU(nJk))*(Jk[0]*Jk[0])) + chiOverndJk * (1. - (1/SQU(ndJk))*(dJk[0]*dJk[0])) ; //xx
    idJkdh[1] = dhrdJkOvernJk2  * (Jk[1]*Jk[0]) + nhrOvernJk * (   - (1/SQU(nJk))*(Jk[1]*Jk[0])) + chiOverndJk * (   - (1/SQU(ndJk))*(dJk[1]*dJk[0])) ; //xy
    switch(::FLAG_SYM)
    {
      case 1: // Symmetric tensor
        idJkdh[3] = dhrdJkOvernJk2  * (Jk[1]*Jk[1]) + nhrOvernJk * (1. - (1/SQU(nJk))*(Jk[1]*Jk[1])) + chiOverndJk * (1. - (1/SQU(ndJk))*(dJk[1]*dJk[1])) ; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            idJkdh[5] = 1.;
            idJkdh[2] = idJkdh[4] = 0.;
          break;
          case 3: // 3D case
            idJkdh[5]=dhrdJkOvernJk2  * (Jk[2]*Jk[2]) + nhrOvernJk * (1. - (1/SQU(nJk))*(Jk[2]*Jk[2])) + chiOverndJk * (1. - (1/SQU(ndJk))*(dJk[2]*dJk[2])) ; //zz
            idJkdh[2]=dhrdJkOvernJk2  * (Jk[2]*Jk[0]) + nhrOvernJk * (   - (1/SQU(nJk))*(Jk[2]*Jk[0])) + chiOverndJk * (   - (1/SQU(ndJk))*(dJk[2]*dJk[0])) ; //xz
            idJkdh[4]=dhrdJkOvernJk2  * (Jk[2]*Jk[1]) + nhrOvernJk * (   - (1/SQU(nJk))*(Jk[2]*Jk[1])) + chiOverndJk * (   - (1/SQU(ndJk))*(dJk[2]*dJk[1])) ; //yz
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'dhdb_Vinch_'. Analytic Jacobian computation.");
          break;
        }

        Inv_TensorSym3x3_K(idJkdh, dJkdh); // T, invT
      break;
      case 0: // Non Symmetric Tensor
        idJkdh[3] = idJkdh[1]; //yx
        idJkdh[4] = dhrdJkOvernJk2  * (Jk[1]*Jk[1]) + nhrOvernJk * (1. - (1/SQU(nJk))*(Jk[1]*Jk[1])) + chiOverndJk * (1. - (1/SQU(ndJk))*(dJk[1]*dJk[1])) ; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            idJkdh[8] = 1.; // zz
            idJkdh[2] = idJkdh[5] = idJkdh[6] =idJkdh[7] =0.; //xz //xy //zx //zy 
          break;
          case 3: // 3D case
            idJkdh[8] = dhrdJkOvernJk2  * (Jk[2]*Jk[2]) + nhrOvernJk * (1. - (1/SQU(nJk))*(Jk[2]*Jk[2])) + chiOverndJk * (1. - (1/SQU(ndJk))*(dJk[2]*dJk[2])) ; //zz
            idJkdh[2] = dhrdJkOvernJk2  * (Jk[2]*Jk[0]) + nhrOvernJk * (   - (1/SQU(nJk))*(Jk[2]*Jk[0])) + chiOverndJk * (   - (1/SQU(ndJk))*(dJk[2]*dJk[0])) ; //xz
            idJkdh[5] = dhrdJkOvernJk2  * (Jk[2]*Jk[1]) + nhrOvernJk * (   - (1/SQU(nJk))*(Jk[2]*Jk[1])) + chiOverndJk * (   - (1/SQU(ndJk))*(dJk[2]*dJk[1])) ; //yz
            idJkdh[6] = idJkdh[2]; //zx
            idJkdh[7] = idJkdh[5]; //zy
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'dhdb_Vinch_'. Analytic Jacobian computation.");
          break;
        }

      Inv_Tensor3x3_K(idJkdh, dJkdh); // T, invT
      break;
      default:
        Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Tensor_dJkdh_Vinch_K'.\n");
      break;
    }
    free(idJkdh);
  }
  else{  // numerical Jacobian
    Message::Debug("Numerical Jacobian Js=%g, nJk=%g and ndJk=%g",Ja+Jb,nJk, ndJk);
    double delta0  = ::DELTA_0 ; 

    // Different following the different directions ??? TO CHECK
    /*
    double EPSILON = 1 ; // PARAM (1) // 1e-8
    double delta[3] = { (fabs(h[0])>EPSILON) ? (fabs(h[0])) * delta0 : delta0,
                        (fabs(h[1])>EPSILON) ? (fabs(h[1])) * delta0 : delta0,
                        (fabs(h[2])>EPSILON) ? (fabs(h[2])) * delta0 : delta0 } ;
    */
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

    /*// Not initialized in previous version !!!
    double Jkxr[3], Jkxl[3];
    double Jkyr[3], Jkyl[3];
    double Jkzr[3], Jkzl[3];
    */

    double Jkxr[3]={Jkp[0],Jkp[1],Jkp[2]}; 
    double Jkxl[3]={Jkp[0],Jkp[1],Jkp[2]};
    double Jkyr[3]={Jkp[0],Jkp[1],Jkp[2]};
    double Jkyl[3]={Jkp[0],Jkp[1],Jkp[2]};
    double Jkzr[3]={Jkp[0],Jkp[1],Jkp[2]};
    double Jkzl[3]={Jkp[0],Jkp[1],Jkp[2]};

    double hxr[3]={h[0]+delta[0], h[1]          ,h[2]};          
    double hyr[3]={h[0],          h[1]+delta[1] ,h[2]};          
    double hzr[3]={h[0],          h[1]          ,h[2]+delta[2]};

    Vector_Update_Jk_K(hxr, Jkxr, Jkp, chi, Ja, ha, Jb, hb); 
    Vector_Update_Jk_K(hyr, Jkyr, Jkp, chi, Ja, ha, Jb, hb);

    double hxl[3],hyl[3],hzl[3];
    for (int n=0; n<3; n++) {hxl[n]=h[n]; hyl[n]=h[n]; hzl[n]=h[n];} 
    switch(::FLAG_CENTRAL_DIFF)
    {
      case 1: // Central Differences
        hxl[0]=h[0]-delta[0];
        hyl[1]=h[1]-delta[1];
        hzl[2]=h[2]-delta[2];
        Vector_Update_Jk_K(hxl, Jkxl, Jkp, chi, Ja, ha, Jb, hb); 
        Vector_Update_Jk_K(hyl, Jkyl, Jkp, chi, Ja, ha, Jb, hb); 
      break;
      case 0: // Forward Differences
        Vector_Update_Jk_K(h, Jkxl, Jkp, chi, Ja, ha, Jb, hb); 
        for (int n=0; n<3; n++) Jkyl[n] = Jkxl[n] ;      
      break;
      default:
        Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dJkdh_Vinch_K'.");  
      break;
    }

    dJkdh[0]= (Jkxr[0]-Jkxl[0])/(hxr[0]-hxl[0]); //xx

    // ------ COMPONENT AMBIGUITY :
    //dJkdh[1]= (Jkxr[1]-Jkxl[1])/(hxr[0]-hxl[0]);//yx // This one was used originally
    dJkdh[1]= (Jkyr[0]-Jkyl[0])/(hyr[1]-hyl[1]); //xy //other possibility (more natural)
    // ------    

    switch(::FLAG_SYM)
    {
      case 1:// Symmetric tensor
        dJkdh[3]= (Jkyr[1]-Jkyl[1])/(hyr[1]-hyl[1]); //yy
        switch(::FLAG_DIM) 
        {
          case 2: // 2D case
            dJkdh[5] = 1.; //zz
            dJkdh[2] = dJkdh[4]= 0.; //xz // yz
          break;
          case 3: // 3D case
            Vector_Update_Jk_K(hzr, Jkzr, Jkp, chi, Ja, ha, Jb, hb); 
            switch(::FLAG_CENTRAL_DIFF)
            {
              case 1: // Central Differences
                Vector_Update_Jk_K(hzl, Jkzl, Jkp, chi, Ja, ha, Jb, hb);
              break;
              case 0: // Forward Differences
                for (int n=0; n<3; n++) Jkzl[n] = Jkxl[n] ;      
              break;
              default:
                Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dJkdh_Vinch_K'.");  
              break;
            }

            dJkdh[5]= (Jkzr[2]-Jkzl[2])/(hzr[2]-hzl[2]); //zz
            //dJkdh[2]= (Jkxr[2]-Jkxl[2])/(hxr[0]-hxl[0]); //zx // This one was used originally
            dJkdh[2]= (Jkzr[0]-Jkzl[0])/(hzr[2]-hzl[2]); //xz //other possibility (more natural)
            //dJkdh[4]= (Jkyr[2]-Jkyl[2])/(hyr[1]-hyl[1]); //zy // This one was used originally
            dJkdh[4]= (Jkzr[1]-Jkzl[1])/(hzr[2]-hzl[2]); //yz //other possibility (more natural)
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Vinch_K'.");  
          break;  
        }
      break;
      case  0:// Non Symmetric tensor
        dJkdh[3]= (Jkxr[1]-Jkxl[1])/(hxr[0]-hxl[0]); //yx
        dJkdh[4]= (Jkyr[1]-Jkyl[1])/(hyr[1]-hyl[1]); //yy
        switch(::FLAG_DIM) 
        {
          case 2: // 2D case
            dJkdh[8] = 1.; //zz
            dJkdh[2] = dJkdh[5] = dJkdh[6] = dJkdh[7] = 0.; //xz //yz //zx //zy
          break;
          case 3: // 3D case
            Vector_Update_Jk_K(hzr, Jkzr, Jkp, chi, Ja, ha, Jb, hb); 
            switch(::FLAG_CENTRAL_DIFF)
            {
              case 1: // Central Differences
                Vector_Update_Jk_K(hzl, Jkzl, Jkp, chi, Ja, ha, Jb, hb);
              break;
              case 0: // Forward Differences
                for (int n=0; n<3; n++) Jkzl[n] = Jkxl[n] ;      
              break;
              default:
                Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dJkdh_Vinch_K'.");  
              break;
            }
            dJkdh[8] = (Jkzr[2]-Jkzl[2])/(hzr[2]-hzl[2]);//zz
            dJkdh[2] = (Jkzr[0]-Jkzl[0])/(hzr[2]-hzl[2]);//xz
            dJkdh[5] = (Jkzr[1]-Jkzl[1])/(hzr[2]-hzl[2]);//yz
            dJkdh[6] = (Jkxr[2]-Jkxl[2])/(hxr[0]-hxl[0]); //zx
            dJkdh[7] = (Jkyr[2]-Jkyl[2])/(hyr[1]-hyl[1]); //zy  
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Vinch_K'.");
          break;  
        }
      break;
      default:
        Message::Error("Invalid parameter (sym = 0 or 1) for function 'Tensor_dJkdh_Vinch_K'.");
      break;
    }
  }
}

void Tensor_dhrkdh_Num(const double h[3], const double xkp[3], const double chi, 
                       const double Ja, const double ha, const double Jb, const double hb,
                       double *dhrkdh) 
{
    Message::Debug("Numerical Jacobian");// Js=%g, nJk=%g and ndJk=%g",Ja+Jb,nJk, ndJk);
    double delta0  = ::DELTA_0 ; 

/*
    double EPSILON = 1 ; // PARAM (1) // 1e-8 // Take this again because Test_Basic_SimpleDiff_Num not working otherwise
    // Different following the different directions ??? TO CHECK
    double delta[3] = { (fabs(h[0])>EPSILON) ? (fabs(h[0])) * delta0 : delta0,
                        (fabs(h[1])>EPSILON) ? (fabs(h[1])) * delta0 : delta0,
                        (fabs(h[2])>EPSILON) ? (fabs(h[2])) * delta0 : delta0 } ;
//*/
    double delta[3]={delta0,delta0,delta0};


    double hrxr[3]={xkp[0],xkp[1],xkp[2]}; 
    double hrxl[3]={xkp[0],xkp[1],xkp[2]};
    double hryr[3]={xkp[0],xkp[1],xkp[2]};
    double hryl[3]={xkp[0],xkp[1],xkp[2]};
    double hrzr[3]={xkp[0],xkp[1],xkp[2]};
    double hrzl[3]={xkp[0],xkp[1],xkp[2]};

    double hxr[3]={h[0]+delta[0], h[1]          ,h[2]};          
    double hyr[3]={h[0],          h[1]+delta[1] ,h[2]};          
    double hzr[3]={h[0],          h[1]          ,h[2]+delta[2]};

  
      switch(::FLAG_VARORDIFF) 
      {
        case 2: // Simplified Differential Case
          Vector_Update_Simple_hr_K(hxr, hrxr, xkp, chi);
          Vector_Update_Simple_hr_K(hyr, hryr, xkp, chi);
        break;
        case 3:
          Vector_Update_hr_K(hxr, hrxr, xkp, chi, Ja, ha, Jb, hb);
          Vector_Update_hr_K(hyr, hryr, xkp, chi, Ja, ha, Jb, hb);
        break;
        default:
          Message::Error("Invalid parameter (VarorDiff = 2 or 3) for function 'Tensor_dhrkdh_Num'.\n"
                        "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                        "FLAG_VARORDIFF = 3 --> Full Differential Approach");
        break;
      } 

    double hxl[3],hyl[3],hzl[3];
    for (int n=0; n<3; n++) {hxl[n]=h[n]; hyl[n]=h[n]; hzl[n]=h[n];} 
    switch(::FLAG_CENTRAL_DIFF)
    {
      case 1: // Central Differences
        hxl[0]=h[0]-delta[0];
        hyl[1]=h[1]-delta[1];
        hzl[2]=h[2]-delta[2];


        switch(::FLAG_VARORDIFF) 
        {
          case 2: // Simplified Differential Case
            Vector_Update_Simple_hr_K(hxl, hrxl, xkp, chi);
            Vector_Update_Simple_hr_K(hyl, hryl, xkp, chi);
          break;
          case 3:
            Vector_Update_hr_K(hxl, hrxl, xkp, chi, Ja, ha, Jb, hb);
            Vector_Update_hr_K(hyl, hryl, xkp, chi, Ja, ha, Jb, hb);
          break;
          default:
            Message::Error("Invalid parameter (VarorDiff = 2 or 3) for function 'Tensor_dhrkdh_Num'.\n"
                          "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                          "FLAG_VARORDIFF = 3 --> Full Differential Approach");
          break;
        } 

      break;
      case 0: // Forward Differences

        switch(::FLAG_VARORDIFF) 
        {
          case 2: // Simplified Differential Case
            Vector_Update_Simple_hr_K(h, hrxl, xkp, chi);
          break;
          case 3:
            Vector_Update_hr_K(h, hrxl, xkp, chi, Ja, ha, Jb, hb);
          break;
          default:
            Message::Error("Invalid parameter (VarorDiff = 2 or 3) for function 'Tensor_dhrkdh_Num'.\n"
                          "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                          "FLAG_VARORDIFF = 3 --> Full Differential Approach");
          break;
        } 

        for (int n=0; n<3; n++) hryl[n] = hrxl[n] ;      
      break;
      default:
        Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dhrkdh_Num'.");  
      break;
    }

    dhrkdh[0]= (hrxr[0]-hrxl[0])/(hxr[0]-hxl[0]); //xx
    dhrkdh[1]= (hryr[0]-hryl[0])/(hyr[1]-hyl[1]); //xy //other possibility (more natural)

    dhrkdh[3]= (hrxr[1]-hrxl[1])/(hxr[0]-hxl[0]); //yx
    dhrkdh[4]= (hryr[1]-hryl[1])/(hyr[1]-hyl[1]); //yy
    switch(::FLAG_DIM) 
    {
      case 2: // 2D case
        dhrkdh[8] = 1.; //zz
        dhrkdh[2] = dhrkdh[5] = dhrkdh[6] = dhrkdh[7] = 0.; //xz //yz //zx //zy
      break;
      case 3: // 3D case

        switch(::FLAG_VARORDIFF) 
        {
          case 2: // Simplified Differential Case
            Vector_Update_Simple_hr_K(hzr, hrzr, xkp, chi);
          break;
          case 3:
            Vector_Update_hr_K(hzr, hrzr, xkp, chi, Ja, ha, Jb, hb);
          break;
          default:
            Message::Error("Invalid parameter (VarorDiff = 2 or 3) for function 'Tensor_dhrkdh_Num'.\n"
                          "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                          "FLAG_VARORDIFF = 3 --> Full Differential Approach");
          break;
        } 


        switch(::FLAG_CENTRAL_DIFF)
        {
          case 1: // Central Differences

            switch(::FLAG_VARORDIFF) 
            {
              case 2: // Simplified Differential Case
                Vector_Update_Simple_hr_K(hzl, hrzl, xkp, chi);
              break;
              case 3:
                Vector_Update_hr_K(hzl, hrzl, xkp, chi, Ja, ha, Jb, hb);
              break;
              default:
                Message::Error("Invalid parameter (VarorDiff = 2 or 3) for function 'Tensor_dhrkdh_Num'.\n"
                              "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                              "FLAG_VARORDIFF = 3 --> Full Differential Approach");
              break;
            } 

          break;
          case 0: // Forward Differences
            for (int n=0; n<3; n++) hrzl[n] = hrxl[n] ;      
          break;
          default:
            Message::Error("Invalid parameter (central diff = 0 or 1) for function 'Tensor_dhrkdh_Num'.");  
          break;
        }
        dhrkdh[8] = (hrzr[2]-hrzl[2])/(hzr[2]-hzl[2]);//zz
        dhrkdh[2] = (hrzr[0]-hrzl[0])/(hzr[2]-hzl[2]);//xz
        dhrkdh[5] = (hrzr[1]-hrzl[1])/(hzr[2]-hzl[2]);//yz
        dhrkdh[6] = (hrxr[2]-hrxl[2])/(hxr[0]-hxl[0]); //zx
        dhrkdh[7] = (hryr[2]-hryl[2])/(hyr[1]-hyl[1]); //zy  
      break;
      default:
        Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dhrkdh_Num'.");
      break;  
    }  
}

void Tensor_dJkdh_Diff_K( const double h[3], const double hrk[3], const double hrkp[3], const double chi, 
                          const double Ja, const double ha, const double Jb, const double hb, 
                            double *dJkdh) //kj TODO: add this in header!!!
{
    double dJkdhrk[6], dhrkdh[9];  // dJkdhrk is always symmetrical
    double dhrk[3];
    for (int n=0; n<3; n++)
      dhrk[n] = h[n]-hrkp[n];

    double nhrk     = norm(hrk);
    double ndhrk    = norm(dhrk);

    double Xan=0.;
    double dXandH2=0.;

    //For the Diff Approach
    double nhrkp, ndhrkp, ndJ, mutg[6], temp[6], temp2[9], dhrkp[3], dJ[3];
    double Xanp=0.0;
    double dXandH2p=0.0;

    switch(::FLAG_TANORLANG) {
      case 1: // Hyperbolic Tangent Case
        Xan      = Xanhy(nhrk, Ja, ha);
        dXandH2  = (nhrk>(::TOLERANCE_0)) ? (dXanhy(nhrk, Ja, ha)/(2*nhrk)) : 0. ;
      break;
      case 2: // Double Langevin Function Case
        Xan      = Xanhy(nhrk, Ja, ha, Jb, hb);
        dXandH2  = (nhrk>(::TOLERANCE_0)) ? (dXanhy(nhrk, Ja, ha, Jb, hb)/(2*nhrk)) : 0. ;
      break;
      default:
        Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'Tensor_dJkdh_Diff_K'.");
      break;
    } 

    dJkdhrk[0] = Xan  + 2 * dXandH2 * ( hrk[0]* hrk[0] ) ;//xx
    dJkdhrk[3] = Xan  + 2 * dXandH2 * ( hrk[1]* hrk[1] ); //yy
    dJkdhrk[1] =        2 * dXandH2 * ( hrk[1]* hrk[0] ); //xy
    switch(::FLAG_DIM) {
      case 2: // 2D case
        dJkdhrk[5] = 1.;
        dJkdhrk[2] = dJkdhrk[4] = 0.;
      break;
      case 3: // 3D case
        dJkdhrk[5]= Xan  + 2 * dXandH2 * ( hrk[2]* hrk[2] ) ; //zz
        dJkdhrk[2]=        2 * dXandH2 * ( hrk[2]* hrk[0] ) ; //xz
        dJkdhrk[4]=        2 * dXandH2 * ( hrk[2]* hrk[1] ) ; //yz
      break;
      default:
        Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
      break;
    }

    // dhrk -----------------------------------------------------------------------------------
        if (chi==0.) // NB: dhrkdh is symmetric in that case but still stored with non-syn
        {
          dhrkdh[0] = dhrkdh[4] = (ndhrk>=chi) ? 1. : 0.;//xx //yy
          dhrkdh[1] = dhrkdh[3] = 0.; //xy //yx
          switch(::FLAG_DIM) {
            case 2: // 2D case
              dhrkdh[8] = 1.;
              dhrkdh[2] = dhrkdh[5] = dhrkdh[6] = dhrkdh[7] = 0.;  //xz //yz //zx //zy
            break;
            case 3: // 3D case
              dhrkdh[8]= (ndhrk>=chi) ? 1. : 0.; //zz
              dhrkdh[2] = dhrkdh[5] = dhrkdh[6] = dhrkdh[7] = 0.; //xz //yz //zx //zy
            break;
            default:
              Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
            break;
          } 
        }
        else
        {
          if (ndhrk>=chi)
          {
            switch(::FLAG_VARORDIFF)
            {
              case 2: // Simple Diff // NB: dhrkdh is symmetric in that case but still stored with non-syn
              {
                dhrkdh[0] = (1-chi/ndhrk) + (chi/CUB(ndhrk))*(dhrk[0]*dhrk[0]) ; //xx
                dhrkdh[4] = (1-chi/ndhrk) + (chi/CUB(ndhrk))*(dhrk[1]*dhrk[1]) ; //yy
                dhrkdh[1] =                 (chi/CUB(ndhrk))*(dhrk[1]*dhrk[0]) ; //xy
                dhrkdh[3] = dhrkdh[1]; //yx
                switch(::FLAG_DIM) {
                  case 2: // 2D case
                    dhrkdh[8] = 1.;
                    dhrkdh[2] = dhrkdh[5] = dhrkdh[6] = dhrkdh[7] = 0.;
                  break;
                  case 3: // 3D case
                    dhrkdh[8]= (1-chi/ndhrk) + (chi/CUB(ndhrk))*(dhrk[2]*dhrk[2]) ; //zz
                    dhrkdh[2]=                 (chi/CUB(ndhrk))*(dhrk[2]*dhrk[0]) ; //xz
                    dhrkdh[6]= dhrkdh[2]; //zx
                    dhrkdh[5]=                 (chi/CUB(ndhrk))*(dhrk[2]*dhrk[1]) ; //yz
                    dhrkdh[7]= dhrkdh[5]; //zy
                  break;
                  default:
                    Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
                  break;
                }
              break;
              }

              //------------------------------ CASE FULL DIFF ------------------------------
              case 3: //  FULL DIFF
              {
                nhrkp = norm(hrkp);
                for (int n=0; n<3; n++)
                  dhrkp[n] = hrk[n]-hrkp[n];
                ndhrkp=norm(dhrkp);
                
                //if(nhrkp>(::TOLERANCE_NJ) && ndhrkp>(::TOLERANCE_NJ) )  // not a good test. Test on ndJ seems better
                //{
                switch(::FLAG_TANORLANG) {
                  case 1: // Hyperbolic Tangent Case
                    Xanp      = Xanhy(nhrkp, Ja, ha);
                    dXandH2p  = (nhrkp>(::TOLERANCE_0)) ? (dXanhy(nhrkp, Ja, ha)/(2*nhrkp)) : 0. ;
                  break;
                  case 2: // Double Langevin Function Case
                    Xanp      = Xanhy(nhrkp, Ja, ha, Jb, hb);
                    dXandH2p  = (nhrkp>(::TOLERANCE_0)) ? (dXanhy(nhrkp, Ja, ha, Jb, hb)/(2*nhrkp)) : 0. ;
                  break;
                  default:
                    Message::Error("Invalid parameter (TanhorLang = 1 or 2) for function 'Tensor_dJkdh_Diff_K'.");
                  break;
                } 
                mutg[0] = Xanp  + 2 * dXandH2p * ( hrkp[0]* hrkp[0] ) ;//xx
                mutg[3] = Xanp  + 2 * dXandH2p * ( hrkp[1]* hrkp[1] ); //yy
                mutg[1] =         2 * dXandH2p * ( hrkp[1]* hrkp[0] ); //xy
                switch(::FLAG_DIM) {
                  case 2: // 2D case
                    mutg[5] = 1.;
                    mutg[2] = mutg[4] = 0.;
                  break;
                  case 3: // 3D case
                    mutg[5]= Xanp  + 2 * dXandH2p * ( hrkp[2]* hrkp[2] ) ; //zz
                    mutg[2]=         2 * dXandH2p * ( hrkp[2]* hrkp[0] ) ; //xz
                    mutg[4]=         2 * dXandH2p * ( hrkp[2]* hrkp[1] ) ; //yz
                  break;
                  default:
                    Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
                  break;
                }
                //printf("\nmutg=[%g %g %g\n%g %g %g\n%g %g %g]", mutg[0],mutg[1],mutg[2],mutg[1],mutg[3],mutg[4],mutg[2],mutg[4],mutg[5]);

                dJ[0]=mutg[0]*dhrkp[0]+mutg[1]*dhrkp[1]+mutg[2]*dhrkp[2];
                dJ[1]=mutg[1]*dhrkp[0]+mutg[3]*dhrkp[1]+mutg[4]*dhrkp[2];
                dJ[2]=mutg[2]*dhrkp[0]+mutg[4]*dhrkp[1]+mutg[5]*dhrkp[2]; 
                ndJ    = norm(dJ);
                //if (nhrkp<(::TOLERANCE_NJ) ||  ndhrkp<(::TOLERANCE_NJ) || ndJ<(::TOLERANCE_NJ))
                //  printf("nhrkp=%g, ndhrkp=%g, ndJ=%g\n",nhrkp,ndhrkp,ndJ );
                if(ndJ>(::TOLERANCE_0) ) // we need to add this compared to python version ????
                {
                  temp[0]=1. - (dJ[0]*dJ[0])/SQU(ndJ);
                  temp[1]=   - (dJ[0]*dJ[1])/SQU(ndJ);
                  temp[2]=   - (dJ[0]*dJ[2])/SQU(ndJ);
                  temp[3]=1. - (dJ[1]*dJ[1])/SQU(ndJ);
                  temp[4]=   - (dJ[1]*dJ[2])/SQU(ndJ);
                  temp[5]=1. - (dJ[2]*dJ[2])/SQU(ndJ);

                  Mul_TensorSymTensorSym_K(temp,mutg,temp2);

                  //printf("\ntemp2=[%g %g %g\n%g %g %g\n%g %g %g]", temp2[0],temp2[1],temp2[2],temp2[3],temp2[4],temp2[5],temp2[6],temp2[7],temp2[8]);

                  temp2[0]=1. + (chi/ndJ) * temp2[0];
                  temp2[1]=     (chi/ndJ) * temp2[1];
                  temp2[2]=     (chi/ndJ) * temp2[2];
                  temp2[3]=     (chi/ndJ) * temp2[3];
                  temp2[4]=1. + (chi/ndJ) * temp2[4];
                  temp2[5]=     (chi/ndJ) * temp2[5];
                  temp2[6]=     (chi/ndJ) * temp2[6];
                  temp2[7]=     (chi/ndJ) * temp2[7];
                  temp2[8]=1. + (chi/ndJ) * temp2[8];
                  Inv_Tensor3x3_K(temp2,dhrkdh); // TODO: DEAL WITH THIS !!!!!
                  //Tensor_dhrkdh_Num(h, hrkp, chi, Ja, ha, Jb, hb, dhrkdh);
                }
                else
                {
                  Tensor_dhrkdh_Num(h, hrkp, chi, Ja, ha, Jb, hb, dhrkdh);
                  //dhrkdh[0] =dhrkdh[1] =dhrkdh[2] =dhrkdh[3] =dhrkdh[4] =dhrkdh[5] =dhrkdh[6] =dhrkdh[7] =dhrkdh[8] =0.; // modif kj+++
                  //dhrkdh[0] =dhrkdh[4] =dhrkdh[8] = 1.0; dhrkdh[1] = dhrkdh[2] =dhrkdh[3] =dhrkdh[5] = dhrkdh[6] =dhrkdh[7]  = 0.;  //Egan alternative suggestion 
                }
              break;
              //------------------------------------------------------------------------------
              }
              
              default:
                Message::Error("Invalid parameter (VarorDiff = 2 or 3) for function 'Tensor_dJkdh_Diff_K'.\n"
                              "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                              "FLAG_VARORDIFF = 3 --> Full Differential Approach");
              break;
            }
          }
          else // IF ndhrk<chi :
          {
            Tensor_dhrkdh_Num(h, hrkp, chi, Ja, ha, Jb, hb, dhrkdh);
            //dhrkdh[0] =dhrkdh[1] =dhrkdh[2] =dhrkdh[3] =dhrkdh[4] =dhrkdh[5] =dhrkdh[6] =dhrkdh[7] =dhrkdh[8] =0.; // modif kj+++
            //dhrkdh[0] =dhrkdh[4] =dhrkdh[8] = 1.0; dhrkdh[1] = dhrkdh[2] =dhrkdh[3] =dhrkdh[5] = dhrkdh[6] =dhrkdh[7] = 0.;  //Egan alternatice suggestion (seems worst now (after 13/10/2016)!)
          }
        }

    // Product dJkdh = dJkdhrk * dhrkdh ------------------------------------------------------------


    dJkdh[0] =  dJkdhrk[0] * dhrkdh[0]+dJkdhrk[1] * dhrkdh[3]+dJkdhrk[2] * dhrkdh[6]; //xx
    dJkdh[1] =  dJkdhrk[0] * dhrkdh[1]+dJkdhrk[1] * dhrkdh[4]+dJkdhrk[2] * dhrkdh[7]; //xy
    switch(::FLAG_SYM)
    {
      case 1: // Symmetrical Tensor
        dJkdh[3] =  dJkdhrk[1] * dhrkdh[1]+dJkdhrk[3] * dhrkdh[4]+dJkdhrk[4] * dhrkdh[7]; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            dJkdh[5] = 1.; // zz
            dJkdh[2] = dJkdh[4] = 0.; //xz //yz
          break;
          case 3: // 3D case
            dJkdh[2] =  dJkdhrk[0] * dhrkdh[2]+dJkdhrk[1] * dhrkdh[5]+dJkdhrk[2] * dhrkdh[8]; //xz
            dJkdh[4] =  dJkdhrk[1] * dhrkdh[2]+dJkdhrk[3] * dhrkdh[5]+dJkdhrk[4] * dhrkdh[8]; //yz
            dJkdh[5] =  dJkdhrk[2] * dhrkdh[2]+dJkdhrk[4] * dhrkdh[5]+dJkdhrk[5] * dhrkdh[8]; //zz
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
          break;
        }
      break;
      case 0: // Non Symmetrical Tensor
        dJkdh[3] =  dJkdhrk[1] * dhrkdh[0]+dJkdhrk[3] * dhrkdh[3]+dJkdhrk[4] * dhrkdh[6]; //yx
        dJkdh[4] =  dJkdhrk[1] * dhrkdh[1]+dJkdhrk[3] * dhrkdh[4]+dJkdhrk[4] * dhrkdh[7]; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            dJkdh[8] = 1.; // zz
            dJkdh[2] = dJkdh[5] = dJkdh[6] = dJkdh[7] = 0.; //xz //yz //zx //zy
          break;
          case 3: // 3D case
            dJkdh[2] =  dJkdhrk[0] * dhrkdh[2]+dJkdhrk[1] * dhrkdh[5]+dJkdhrk[2] * dhrkdh[8]; //xz
            dJkdh[5] =  dJkdhrk[1] * dhrkdh[2]+dJkdhrk[3] * dhrkdh[5]+dJkdhrk[4] * dhrkdh[8]; //yz
            dJkdh[6] =  dJkdhrk[2] * dhrkdh[0]+dJkdhrk[4] * dhrkdh[3]+dJkdhrk[5] * dhrkdh[6]; //zx
            dJkdh[7] =  dJkdhrk[2] * dhrkdh[1]+dJkdhrk[4] * dhrkdh[4]+dJkdhrk[5] * dhrkdh[7]; //zy
            dJkdh[8] =  dJkdhrk[2] * dhrkdh[2]+dJkdhrk[4] * dhrkdh[5]+dJkdhrk[5] * dhrkdh[8]; //zz
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
          break;
        }
      break;
      default:
        Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Tensor_dJkdh_Diff_K'.\n");
      break;
    }


    //**********************************************************
    // Considering dhrkdh as a symmetric tensor
    //*********************************************************
    /*
    dJkdh[0] =  dJkdhrk[0] * dhrkdh[0]+dJkdhrk[1] * dhrkdh[1]+dJkdhrk[2] * dhrkdh[2]; //xx
    dJkdh[1] =  dJkdhrk[0] * dhrkdh[1]+dJkdhrk[1] * dhrkdh[3]+dJkdhrk[2] * dhrkdh[4]; //xy
    switch(::FLAG_SYM)
    {
      case 1: // Symmetrical Tensor
        dJkdh[3] =  dJkdhrk[1] * dhrkdh[1]+dJkdhrk[3] * dhrkdh[3]+dJkdhrk[4] * dhrkdh[4]; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            dJkdh[5] = 1.; // zz
            dJkdh[2] = dhrkdh[4] = 0.; //xz //yz
          break;
          case 3: // 3D case
            dJkdh[2] =  dJkdhrk[0] * dhrkdh[2]+dJkdhrk[1] * dhrkdh[4]+dJkdhrk[2] * dhrkdh[5]; //xz
            dJkdh[4] =  dJkdhrk[1] * dhrkdh[2]+dJkdhrk[3] * dhrkdh[4]+dJkdhrk[4] * dhrkdh[5]; //yz
            dJkdh[5] =  dJkdhrk[2] * dhrkdh[2]+dJkdhrk[4] * dhrkdh[4]+dJkdhrk[5] * dhrkdh[5]; //zz
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
          break;
        }
      break;
      case 0: // Non Symmetrical Tensor
        dJkdh[3] =  dJkdhrk[1] * dhrkdh[0]+dJkdhrk[3] * dhrkdh[1]+dJkdhrk[4] * dhrkdh[2]; //yx
        dJkdh[4] =  dJkdhrk[1] * dhrkdh[1]+dJkdhrk[3] * dhrkdh[3]+dJkdhrk[4] * dhrkdh[4]; //yy
        switch(::FLAG_DIM) {
          case 2: // 2D case
            dJkdh[8] = 1.; // zz
            dJkdh[2] = dJkdh[5] = dJkdh[6] = dJkdh[7] = 0.; //xz //yz //zx //zy
          break;
          case 3: // 3D case
            dJkdh[2] =  dJkdhrk[0] * dhrkdh[2]+dJkdhrk[1] * dhrkdh[4]+dJkdhrk[2] * dhrkdh[5]; //xz
            dJkdh[5] =  dJkdhrk[1] * dhrkdh[2]+dJkdhrk[3] * dhrkdh[4]+dJkdhrk[4] * dhrkdh[5]; //yz
            dJkdh[6] =  dJkdhrk[2] * dhrkdh[0]+dJkdhrk[4] * dhrkdh[1]+dJkdhrk[5] * dhrkdh[2]; //zx
            dJkdh[7] =  dJkdhrk[2] * dhrkdh[1]+dJkdhrk[4] * dhrkdh[3]+dJkdhrk[5] * dhrkdh[4]; //zy
            dJkdh[8] =  dJkdhrk[2] * dhrkdh[2]+dJkdhrk[4] * dhrkdh[4]+dJkdhrk[5] * dhrkdh[5]; //zz
          break;
          default:
            Message::Error("Invalid parameter (dimension = 2 or 3) for function 'Tensor_dJkdh_Diff_K'. Analytic Jacobian computation.");
          break;
        }
      break;
      default:
        Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Tensor_dJkdh_Diff_K'.\n");
      break;
    }
    */
    //**********************************************************
}

void Vector_h_Vinch_K(const double b[3], double bc[3], 
                      double *Jk_all,const double *Jkp_all, 
                      struct FunctionActive *D, 
                      double h[3] )
{
  //int dim = D->Case.Interpolation.x[0] ;

  double TOL = ::TOLERANCE_NR;
  const int MAX_ITER = ::MAX_ITER_NR;

  double Jk_all0[9]; // NEW (14/06/2016) // TO DO: make it proper
  for (int n=0; n<9; n++)  { Jk_all0[n]  = Jk_all[n]; }

  //*****************************************************************
  // MULTI DIMENSIONAL ROOT FINDING
  //*****************************************************************
  switch(::FLAG_INVMETHOD) {
  case 4: // multiroot
  case 5:
  case 6:
  case 7:
    {
      const gsl_multiroot_fdfsolver_type *T = 0;
      gsl_multiroot_fdfsolver *s = 0;
      int status;
      size_t iter = 0;

      const size_t ndim = 3;

      struct multiroot_params params;
      params.D= D;
      for (int n=0 ; n<3 ; n++)
        params.b[n]=b[n];
      for (int n=0 ; n<9 ; n++)
      {
        params.Jk_all[n]=Jk_all[n];
        params.Jkp_all[n]=Jkp_all[n];
      }

      gsl_multiroot_function_fdf f = {&multiroot_f,
                                      &multiroot_df,
                                      &multiroot_fdf,
                                      ndim, &params};

      gsl_vector *v = gsl_vector_alloc (ndim);

      for (int n=0 ; n<3 ; n++) gsl_vector_set (v, n, h[n]);

      switch(::FLAG_INVMETHOD) {
      case 4:
        T = gsl_multiroot_fdfsolver_hybridsj;
        break;
      case 5:
        T = gsl_multiroot_fdfsolver_hybridj;
        break;
      case 6:
        T = gsl_multiroot_fdfsolver_newton;
        break;
      case 7:
        T = gsl_multiroot_fdfsolver_gnewton;
        break;
      }

      s = gsl_multiroot_fdfsolver_alloc (T, ndim);
      gsl_multiroot_fdfsolver_set (s, &f, v);

      do
      {
        iter++;
        status = gsl_multiroot_fdfsolver_iterate (s);

        print_state_multi (iter, s);

        if (status)   /* check if solver is stuck */
          break;

        status =
          gsl_multiroot_test_residual (s->f, TOL);
        //gsl_multiroot_test_delta (s->dx, s->x, TOL, TOL);
      }
      while (status == GSL_CONTINUE && iter < MAX_ITER);

      for (int n=0 ; n<3 ; n++) h[n]= gsl_vector_get (s->x, n);

      if(::FLAG_WARNING>=FLAG_WARNING_INFO_INV && (status != GSL_SUCCESS || iter==MAX_ITER))
      {
        Message::Warning("Inversion status = %s, after %d iteration(s) :", gsl_strerror (status),iter);
        if(::FLAG_WARNING>=FLAG_WARNING_DISP_INV){
          Message::Warning("b_desired    : [%.10g, %.10g, %.10g]", b[0],b[1],b[2]);
          Message::Warning("x    = h_get : [%.10g, %.10g, %.10g]", h[0],h[1],h[2]);
          Message::Warning("f(x) = res   : [%.10g, %.10g, %.10g]", gsl_vector_get (s->f, 0),gsl_vector_get (s->f, 1),gsl_vector_get (s->f, 2));
          if(::FLAG_WARNING>=FLAG_WARNING_STOP_INV)
            {char c;c=getchar();}
        }
      }

      gsl_multiroot_fdfsolver_free (s);
      gsl_vector_free (v);
    }
    break;
    //*****************************************************************
    //*****************************************************************
  case 1:
  case 2:
  case 3:
    {

      /*
      // BEFORE (14/06/2016): Only Symmetrical tensor consideration
      double dh[3], dx[3], df[3],res[3] ;
      double dbdh[6];
      double dhdb[6];
      //*/
      ///* New: Deal with Symmetrical or Asymmetrical Tensor consideration (14/06/2016)-------------
      double dh[3], dx[3], df[3],res[3], b_bc[3] ;

      int ncomp = 6;
      switch(::FLAG_SYM)
      {
        case 1:
          ncomp=6;
        break;
        case 0:
          ncomp=9;
        break;
        default:
          Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Vector_h_Vinch_K'.\n");
        break;
      }
      double *dbdh=(double *) malloc(ncomp*sizeof(double));
      double *dhdb=(double *) malloc(ncomp*sizeof(double));
      for (int n=0; n<ncomp; n++) {dbdh[n]=0.; dhdb[n]=0.;}

      //*///-------------------------------------------------------------------------------------------

      int iter = 0 ;
      while( iter < MAX_ITER &&
             ((fabs(bc[0]-b[0])/(1+fabs(b[0]))) > TOL ||
              (fabs(bc[1]-b[1])/(1+fabs(b[1]))) > TOL ||
              (fabs(bc[2]-b[2])/(1+fabs(b[2]))) > TOL ))
      {
        //for (int n=0; n<9; n++)  { Jk_all[n]  = Jk_all0[n]; } //NEW (14/06/2016) does not seem to accelerate the code placed here (when we try on square Var Approach and Num Inversion) ==> commented

        switch(::FLAG_INVMETHOD) {
        case 1: // NR
          {
            Tensor_dbdh_Vinch_K(h, Jk_all, Jkp_all, D, dbdh); // eval dbdh
            switch(::FLAG_SYM)
            {
              case 1:
                Inv_TensorSym3x3_K(dbdh, dhdb);  
              break;
              case 0:
                Inv_Tensor3x3_K(dbdh, dhdb); 
              break;
              default:
                Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Vector_h_Vinch_K'.\n");
              break;
            }
          }
        break;
        case 2: // NR_num
          {
            Tensor_dbdh_Num(h, Jk_all, Jkp_all, D, dbdh);
            switch(::FLAG_SYM)
            {
              case 1:
                Inv_TensorSym3x3_K(dbdh, dhdb);  
              break;
              case 0:
                Inv_Tensor3x3_K(dbdh, dhdb); 
              break;
              default:
                Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Vector_h_Vinch_K'.\n");
              break;
            }
          }
        break; // THE BREAK WAS FORGOTTEN HERE (before 14/06/2016)
        case 3: // Good_BFGS
          {
            if (iter>0 )
              //if ((iter%10)!=0)
              //if ((iter%MAX_ITER)!=0)
              {
                Tensor_dhdb_Good_BFGS(dx,df,dhdb);
              }
            else
              {
                Tensor_dbdh_Vinch_K(h, Jk_all, Jkp_all, D, dbdh); // eval dbdh analytically
                //Tensor_dbdh_Num(h, Jk_all, Jkp_all, D, dbdh); // eval dbdh numerically
                switch(::FLAG_SYM)
                {
                  case 1:
                    Inv_TensorSym3x3_K(dbdh, dhdb);  
                  break;
                  case 0:
                    Inv_Tensor3x3_K(dbdh, dhdb); 
                  break;
                  default:
                    Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'Vector_h_Vinch_K'.\n");
                  break;
                }
              }
          }
        break;
        }
        //printf("dbdh=[\t%g,%g,%g\n\t%g,%g,%g\n\t%g,%g,%g]\n",dbdh[0],dbdh[1],dbdh[2],dbdh[1],dbdh[3],dbdh[4],dbdh[2],dbdh[4],dbdh[5] );
        //printf("dhdb=[\t%g,%g,%g\n\t%g,%g,%g\n\t%g,%g,%g]\n",dhdb[0],dhdb[1],dhdb[2],dhdb[1],dhdb[3],dhdb[4],dhdb[2],dhdb[4],dhdb[5] );

        
        for (int n=0; n<3; n++) b_bc[n]=b[n]-bc[n];
        Mul_TensorVec_K(dhdb, b_bc, dh, 0);
        
        /*
        dh[0] = dhdb[0]*(b[0]-bc[0]) + dhdb[1]*(b[1]-bc[1]) + dhdb[2]*(b[2]-bc[2]);
        dh[1] = dhdb[1]*(b[0]-bc[0]) + dhdb[3]*(b[1]-bc[1]) + dhdb[4]*(b[2]-bc[2]);
        dh[2] = dhdb[2]*(b[0]-bc[0]) + dhdb[4]*(b[1]-bc[1]) + dhdb[5]*(b[2]-bc[2]);
        //*/

        //*****************************************************************
        // ROOT FINDING 1D
        //*****************************************************************
        if((::FLAG_ROOTFINDING1D)!=0)
        {
          int status = 0;
          int iterb = 0, max_iterb = ::MAX_ITER_NR;
          struct rootfinding1d_params params;
          params.D= D;
          for (int n=0 ; n<3 ; n++)
          {
            params.h[n]=h[n];
            params.b[n]=b[n];
            params.dh[n]=dh[n];
          }
          for (int n=0 ; n<9 ; n++)
          {
            params.Jk_all[n]=Jk_all[n];
            params.Jkp_all[n]=Jkp_all[n];
          }
          switch(::FLAG_ROOTFINDING1D)
          {
            //---------------------------------------------
            // CASE 1 : 1D MINIMIZATION
            //---------------------------------------------
            case 1:
            case 2:
            case 3:
            {
              char solver_type[100]="'1D minimization' ";
              const gsl_min_fminimizer_type *T = 0;
              gsl_min_fminimizer *s;
              double m = 1.0; //m_expected = M_PI;
              double al = -1e8, br = 1e8;
              gsl_function F;

              F.function = &rootfinding1d;
              F.params = &params;

              switch(::FLAG_ROOTFINDING1D)
              {
                case 1:
                  T = gsl_min_fminimizer_goldensection;
                  break;
                case 2:
                  T = gsl_min_fminimizer_brent; // BEST
                  break;
                case 3:
                  // FIXME: test GSL version (requires 1.13)
                  //T = gsl_min_fminimizer_quad_golden;
                break;
              }

              s = gsl_min_fminimizer_alloc (T);
              gsl_min_fminimizer_set (s, &F, m, al, br);
              strcat(solver_type,gsl_min_fminimizer_name(s));

              do
              {
                iterb++;
                status = gsl_min_fminimizer_iterate (s);

                m = gsl_min_fminimizer_x_minimum (s);
                al = gsl_min_fminimizer_x_lower (s);
                br = gsl_min_fminimizer_x_upper (s);

                status
                  = gsl_min_test_interval (al, br, TOL, TOL);
                print_state_1d(iterb, solver_type, status,
                               al, br, m, br - al);
              }
              while (status == GSL_CONTINUE && iterb < max_iterb);

              gsl_min_fminimizer_free (s);

              //printf("alpha_opt=%g\n",m );
              for (int n=0 ; n<3 ; n++)
                dh[n]=m*dh[n];
            }
            break;
            //---------------------------------------------
            // CASE 2 : 1D ROOT BRACKETING
            //---------------------------------------------
            case 4:
            case 5:
            case 6:
            {
              char solver_type[100]="'1D root bracketing' ";
              const gsl_root_fsolver_type *T;
              gsl_root_fsolver *s;
              double r = 1.0;
              double al = -1e8, br = 1e8;
              gsl_function F;

              F.function = &rootfinding1d;
              F.params = &params;

              switch(::FLAG_ROOTFINDING1D)
              {
                case 4:
                  T = gsl_root_fsolver_bisection;
                  break;
                case 5:
                  T = gsl_root_fsolver_brent; // BEST
                  break;
                case 6:
                  T = gsl_root_fsolver_falsepos;
                break;
              }

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

                print_state_1d(iterb, solver_type,
                               status, al, br, r, br - al);
              }
              while (status == GSL_CONTINUE && iterb < max_iterb);

              gsl_root_fsolver_free (s);

              for (int n=0 ; n<3 ; n++)
                dh[n]=r*dh[n];
            }
            break;
            //---------------------------------------------
            // CASE 3 : 1D ROOT FINDING WITH DERIVATIVES
            //---------------------------------------------
            case 7:
            case 8:
            case 9:
            {
              char solver_type[100]="'1D root finding with derivatives' ";
              const gsl_root_fdfsolver_type *T;
              gsl_root_fdfsolver *s;
              double x0, x = 1.0;
              gsl_function_fdf FDF;

              FDF.f = &rootfinding1d;
              FDF.df = &rootfinding1d_deriv;
              FDF.fdf = &rootfinding1d_fdf;
              FDF.params = &params;

              switch(::FLAG_ROOTFINDING1D)
              {
                case 7:
                  T = gsl_root_fdfsolver_newton;
                  break;
                case 8:
                  T = gsl_root_fdfsolver_secant;
                  break;
                case 9:
                  T = gsl_root_fdfsolver_steffenson; // BEST
                break;
              }

              s = gsl_root_fdfsolver_alloc (T);
              gsl_root_fdfsolver_set (s, &FDF, x);
              strcat(solver_type,gsl_root_fdfsolver_name(s));

              do
              {
                iterb++;
                status = gsl_root_fdfsolver_iterate (s);
                x0=x;
                x = gsl_root_fdfsolver_root (s);
                status = gsl_root_test_delta (x,x0, TOL, TOL);

                print_state_1d(iterb, solver_type,
                               status, 0., 0., x, x - x0);
              }
              while (status == GSL_CONTINUE && iterb < max_iterb);

              gsl_root_fdfsolver_free (s);

              for (int n=0 ; n<3 ; n++)
                dh[n]=x*dh[n];
            }
            break;
            default:
            {
              Message::Error("Invalid parameter (FLAG_ROOTFINDING1D = 0,1,2,..9) for function 'Vector_h_Vinch_K'.\n"
                           "FLAG_ROOTFINDING1D  = 0 --> Not done\n"
                           "FLAG_ROOTFINDING1D  = 1 --> (1D minimization) golden section (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 2 --> (1D minimization) brent (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 3 --> (1D minimization) quad golden (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 4 --> (1D root bracketing) bisection (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 5 --> (1D root bracketing) brent (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 6 --> (1D root bracketing) falsepos (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 7 --> (1D root finding with derivatives) newton (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 8 --> (1D root finding with derivatives) secant (gsl)\n"
                           "FLAG_ROOTFINDING1D  = 9 --> (1D root finding with derivatives) steffenson (gsl)");
            }
            break;
          }
          if(::FLAG_WARNING>=FLAG_WARNING_INFO_ROOTFINDING && (status!=GSL_SUCCESS || iterb==max_iterb))
          { 
            Message::Warning("\tRootFinding status = %s, after %d iteration(s) :", gsl_strerror (status),iterb);
            if(::FLAG_WARNING>=FLAG_WARNING_STOP_ROOTFINDING)
            {
              char c;c=getchar();
            }
          }
        }
        //*****************************************************************
        //*****************************************************************

        //--------------------------------------------------------
        //    Méthodes de relaxation envisagées :

        //for (int n=0 ; n<3 ; n++) dh[n]=dh[n]*(1*((MAX_ITER-iter)/MAX_ITER)+0.9*(iter/MAX_ITER)); // PARAM RELAX (not done)
        /*
          if (norm(dh)>1e3*sumchi) {
          for (int n=0 ; n<3 ; n++) dh[n]=(1.0/(iter+1))*dh[n]; // Relaxation
          //Message::Warning("!!!!!!!!!!!!!!relax : before : dhx= %g, after : dhx=%g, bx=%g", (iter+1)*dh[0], dh[0], b[0]);
          }
        */
        /*
          if iter<8 {
          for (int n=0 ; n<3 ; n++) dh[n]=0.25*dh[n]; // Relaxation
          }
        */
        //-------------------------------------------------------

        for (int n=0 ; n<3 ; n++){
          dx[n]= dh[n];
          df[n] = -bc[n];
          h[n] += dh[n];
        }

        for (int n=0; n<9; n++)  { Jk_all[n]  = Jk_all0[n]; } //NEW (14/06/2016)
        Vector_b_Vinch_K(h, Jk_all, Jkp_all, D, bc); // Update bc, Jk_all

        for (int n=0 ; n<3 ; n++)
          df[n] += bc[n];

        if(::FLAG_WARNING>=FLAG_WARNING_DISP_INV && iter>=FLAG_WARNING_ITER){
          //printf("dh(%d)=[%.8g,%.8g,%.8g];\t",iter,dh[0],dh[1],dh[2] );
          printf("h(%d)=[%.8g,%.8g,%.8g];\t",iter,h[0],h[1],h[2] );
          printf("b(%d)=[%.8g,%.8g,%.8g];\t",iter,bc[0],bc[1],bc[2] );
          for (int n=0 ; n<3 ; n++)
            res[n]=(fabs(bc[n]-b[n])/(1+fabs(b[n])));
          printf("residu(%d) = %.8g ([%.8g,%.8g,%.8g])\n", iter, norm(res), res[0],res[1],res[2]);
        }
        iter++;
      }


      // Affichage de b et h obtenu à la fin de la boucle de NR :
      if (::FLAG_WARNING>=FLAG_WARNING_INFO_INV && iter==MAX_ITER){
        Message::Warning("Inversion status = the inversion has not converged yet, after %d iteration(s)",iter);
        if (::FLAG_WARNING>=FLAG_WARNING_DISP_INV){
          Message::Warning("b_desired : [%.10g, %.10g, %.10g]", b[0],b[1],b[2]);
          Message::Warning("b_get     : [%.10g, %.10g, %.10g]", bc[0],bc[1],bc[2]);
          Message::Warning("h_get     : [%.10g, %.10g, %.10g]", h[0],h[1],h[2]);
          if (::FLAG_WARNING>=FLAG_WARNING_STOP_INV)
            {char c;c=getchar();}
        }
      }

      free(dbdh);
      free(dhdb);
    }
    break;
  default:
    Message::Error("Invalid parameter (FLAG_INVMETHOD = 1,2,..7) for function 'Vector_h_Vinch_K'.\n"
                   "FLAG_INVMETHOD = 1 --> NR_ana (homemade)\n"
                   "FLAG_INVMETHOD = 2 --> NR_num (homemade)\n"
                   "FLAG_INVMETHOD = 3 --> bfgs (homemade)\n"
                   "FLAG_INVMETHOD = 4 --> hybridsj (gsl)\n"
                   "FLAG_INVMETHOD = 5 --> hybridj (gsl)\n"
                   "FLAG_INVMETHOD = 6 --> newton (gsl)\n"
                   "FLAG_INVMETHOD = 7 --> gnewton (gsl)");
    break;
  }
}
//*///-------------------------------------------------------------------------------------------




//************************************************
// Functions usable in a .pro file
//************************************************

void F_Update_Cell_K(F_ARG) {

  // Updating the Cell variable : Jk (for variationnal approach) or hrk (for differential approach)
  // ---------------------------------------------
  // input:
  // (A+0)->Val = number corresponding to the cell studied -- k
  // (A+1)->Val = magnetic field -- h
  // (A+2)->Val = material magnetization (var) or reversible magnetic field (diff) -- xk
  // (A+3)->Val = material magnetization (var) or reversible magnetic field (diff) at previous time step -- xkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, chi_1, ..., w_N, chi_N};==> struct FunctionActive *D  
  // ---------------------------------------------
  // output: updated Jk

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  int k         = ((A+0)->Val[0])-1;
  //int N         = D->Case.Interpolation.x[1] ;
  double Ja     = D->Case.Interpolation.x[2] ;
  double ha     = D->Case.Interpolation.x[3] ;
  double Jb     = D->Case.Interpolation.x[4] ;
  double hb     = D->Case.Interpolation.x[5] ;
  double wk     = D->Case.Interpolation.x[6+2*k];
  double Jak    = wk*Ja;
  double Jbk    = wk*Jb;
  double chi    = D->Case.Interpolation.x[7+2*k];


  if( (A+0)->Type != SCALAR || 
      (A+1)->Type != VECTOR || 
      (A+2)->Type != VECTOR ||
      (A+3)->Type != VECTOR )
    Message::Error("Function 'Update_Cell_K' requires one scalar argument (n) and three vector arguments (h, Jk, Jkp)");

  double h[3], xk[3], xkp[3] ;

  for (int n=0; n<3; n++) {
    h[n]   = (A+1)->Val[n];
    xk[n]  = (A+2)->Val[n];
    xkp[n] = (A+3)->Val[n];
  }

    switch(::FLAG_VARORDIFF) 
    {
      case 1: // Variationnal Case
        Vector_Update_Jk_K(h, xk, xkp, chi, Jak, ha, Jbk, hb); 
      break;
      case 2: // Simplified Differential Case
        Vector_Update_Simple_hr_K(h, xk, xkp, chi);
      break;
      case 3:
        Vector_Update_hr_K(h, xk, xkp, chi, Jak, ha, Jbk, hb);
      break;
      default:
        Message::Error("Invalid parameter (VarorDiff = 1,2 or 3) for function 'Update_Cell_K'.\n"
                      "FLAG_VARORDIFF = 1 --> Variational Approach\n"
                      "FLAG_VARORDIFF = 2 --> Simple Differential Approach\n"
                      "FLAG_VARORDIFF = 3 --> Full Differential Approach");
      break;
    } 
  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = xk[n];
}


void F_h_Vinch_K(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field at previous time step -- hp
  // (A+1)    ->Val = magnetic induction -- b
  // (A+2)    ->Val = magnetic induction at previous time step -- bp
  // (A+3+2*k)->Val = material magnetization -- Jk
  // (A+4+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, chi_1, ..., w_N, chi_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: magnetic field -- h

  //int dim = Fct->Para[0];
  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  int N = D->Case.Interpolation.x[1] ;
  double h[3], b[3], bc[3], Jk_all[3*N], Jkp_all[3*N] ;
  for (int n=0; n<3; n++) {
     h[n]  = (A+0)->Val[n]; // h is initialized at hp
     b[n]  = (A+1)->Val[n];
     bc[n] = (A+2)->Val[n]; // b computed, is initialized at bp
  }

  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)  {
      Jk_all[n+3*k]  = (A+3+2*k)->Val[n];
      Jkp_all[n+3*k] = (A+4+2*k)->Val[n];
    }
  }

  Vector_h_Vinch_K(b, bc, Jk_all, Jkp_all, D, h); // Update h

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = h[n];
}

void F_b_Vinch_K(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field  -- h
  // (A+1+2*k)->Val = material magnetization -- Jk
  // (A+2+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, chi_1, ..., w_N, chi_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: magnetic induction -- b

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  int N = D->Case.Interpolation.x[1] ;

  double h[3], b[3], Jk_all[3*N], Jkp_all[3*N];

  for (int n=0; n<3; n++)
    h[n] = (A+0)->Val[n];

  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)  {
      Jk_all[n+3*k]  = (A+1+2*k)->Val[n];
      Jkp_all[n+3*k] = (A+2+2*k)->Val[n];
    }
  }

  Vector_b_Vinch_K(h, Jk_all, Jkp_all, D, b);

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = b[n];
}

void F_dbdh_Vinch_K(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field -- h
  // (A+1+2*k)->Val = material magnetization -- Jk
  // (A+2+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, chi_1, ..., w_N, chi_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: differential reluctivity -- dbdh

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;
  set_sensi_param(D);

  int N = D->Case.Interpolation.x[1] ;
  double h[3], Jk_all[3*N], Jkp_all[3*N] ;

  int ncomp = 6;
  switch(::FLAG_SYM)
  {
    case 1:
      ncomp=6;
      V->Type = TENSOR_SYM ;
    break;
    case 0:
      ncomp=9;
      V->Type = TENSOR ;
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'F_dhdb_Vinch_K'.\n");
    break;
  } 
  double *dbdh=(double *) malloc(ncomp*sizeof(double));
  for (int n=0; n<ncomp; n++) dbdh[n]=0.; 

  for (int n=0; n<3; n++)
     h[n]  = (A+0)->Val[n];

  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)  {
      Jk_all[n+3*k]  = (A+1+2*k)->Val[n];
      Jkp_all[n+3*k] = (A+2+2*k)->Val[n];
    }
  }
  switch(::FLAG_INVMETHOD) {
      case 1: // NR
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        Tensor_dbdh_Vinch_K(h, Jk_all, Jkp_all, D, dbdh); // eval dbdh
      break;
      case 2:
        Tensor_dbdh_Num(h, Jk_all, Jkp_all, D, dbdh);
      break;
      default:
        Message::Error("Invalid parameter (FLAG_INVMETHOD = 1,2,..7) for function 'F_dhdb_Vinch_K'.\n"
                       "FLAG_INVMETHOD = 1=3=4=5=6=7 --> analytical dbdh\n"
                       "FLAG_INVMETHOD = 2           --> numerical dbdh");
      break;
  }

  for (int k=0 ; k<ncomp ; k++) 
    V->Val[k] = dbdh[k] ;

  free(dbdh);
}

void F_dhdb_Vinch_K(F_ARG) 
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = magnetic field -- h
  // (A+1+2*k)->Val = material magnetization -- Jk
  // (A+2+2*k)->Val = material magnetization at previous time step -- Jkp
  // Material parameters: e.g. param_EnergHyst = { dim, N, Ja, ha, w_1, chi_1, ..., w_N, chi_N};==> struct FunctionActive *D
  // ---------------------------------------------
  // output: differential reluctivity -- dhdb

  struct FunctionActive  * D ;
  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  set_sensi_param(D);

  //int dim = D->Case.Interpolation.x[0] ;
  int N   = D->Case.Interpolation.x[1] ;

  double h[3], Jk_all[3*N], Jkp_all[3*N];

  int ncomp = 6;
  switch(::FLAG_SYM)
  {
    case 1:
      ncomp=6;
      V->Type = TENSOR_SYM ;
    break;
    case 0:
      ncomp=9;
      V->Type = TENSOR ;
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'F_dhdb_Vinch_K'.\n");
    break;
  }

  double *dbdh=(double *) malloc(ncomp*sizeof(double));
  double *dhdb=(double *) malloc(ncomp*sizeof(double));
  for (int n=0; n<ncomp; n++) {dbdh[n]=0.; dhdb[n]=0.;}

  for (int n=0; n<3; n++)
     h[n]  = (A+0)->Val[n];

  for (int k=0; k<N; k++) {
    for (int n=0; n<3; n++)  {
      Jk_all[n+3*k]  = (A+1+2*k)->Val[n];
      Jkp_all[n+3*k] = (A+2+2*k)->Val[n];
    }
  }

  switch(::FLAG_INVMETHOD) {
    case 1: // NR
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      Tensor_dbdh_Vinch_K(h, Jk_all, Jkp_all, D, dbdh); // eval dbdh
    break;
    case 2:
      Tensor_dbdh_Num(h, Jk_all, Jkp_all, D, dbdh);
    break;
    default:
      Message::Error("Invalid parameter (FLAG_INVMETHOD = 1,2,..7) for function 'F_dhdb_Vinch_K'.\n"
                     "FLAG_INVMETHOD = 1=3=4=5=6=7 --> analytical dhdb\n"
                     "FLAG_INVMETHOD = 2           --> numerical dhdb");
    break;
  }

  switch(::FLAG_SYM)
  {
    case 1:
      Inv_TensorSym3x3_K(dbdh, dhdb); // dimension, T, invT
    break;
    case 0:
      Inv_Tensor3x3_K(dbdh, dhdb); // dimension, T, invT
    break;
    default:
      Message::Error("Invalid parameter (FLAG_SYM = 0 or 1) for function 'F_dhdb_Vinch_K'.\n");
    break;
  }


  for (int k=0 ; k<ncomp ; k++)
    V->Val[k] = dhdb[k] ;

  free(dhdb);
  free(dbdh);
}

#endif
