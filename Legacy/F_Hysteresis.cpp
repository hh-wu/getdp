// GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.
//
// Contributor(s):
//   Johan Gyselinck
//

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "Message.h"
#include <iostream>

#define SQU(a) ((a)*(a))
#define CUB(a) ((a)*(a)*(a))
#define MU0 1.25663706144e-6

/* ------------------------------------------------------------------------ */
/*
  Vectorized Jiles-Atherton hysteresis model
  J. Gyselinck, P. Dular, N. Sadowski, J. Leite and J.P.A. Bastos,
  "Incorporation of a Jiles-Atherton vector hysteresis model in
  2D FE magnetic field computations. Application of the Newton-Raphson method",
  Vol. 23, No. 3, pp. 685-693, 2004.
 */

double F_Man (double He, double Ms, double a)
{
  // Anhysteretic magnetisation
  if (fabs(He) < 0.01*a) return Ms*He/(3.*a) ;
  else return Ms*(cosh(He/a)/sinh(He/a)-a/He) ;
}

double F_dMandHe (double He, double Ms, double a)
{
  // Derivative of the magnetisation Man with respect to the effective field He
  if (fabs(He) < 0.01*a) return Ms/(3.*a) ;
  else return Ms/a*(1-SQU(cosh(He/a)/sinh(He/a))+SQU(a/He)) ;
}

void FV_Man (double He[3], double Ms, double a, double Man[3])
{
  double nHe = sqrt(He[0]*He[0]+He[1]*He[1]+He[2]*He[2]) ;
  if ( !nHe ) {
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

  if ( !nHe ) {
    dMandHe[0] = dMandHe[3] = dMandHe[5] = ndMandHe ;
    dMandHe[1] = dMandHe[2] = dMandHe[4] = 0 ;
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

  if ( !dM || (Man[0]-Mi[0])*dH[0] + (Man[1]-Mi[1])*dH[1] + (Man[2]-Mi[2])*dH[2] < 0 ) {
    dMidHe[0] = dMidHe[3] = dMidHe[5] = dMidHe[1] = dMidHe[2] =  dMidHe[4] = 0 ;
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

  if (D->Case.Interpolation.NbrPoint != 5)
    Message::Error("Jiles-Atherton parameters missing: {List[{Ms, a, k, c, alpha}]}");
  double Ms    = D->Case.Interpolation.x[0] ;
  double a     = D->Case.Interpolation.x[1] ;
  double kk    = D->Case.Interpolation.x[2] ;
  double c     = D->Case.Interpolation.x[3] ;
  double alpha = D->Case.Interpolation.x[4] ;

  for (int i=0 ; i<3 ; i++){
    M[i]  = B[i]/MU0 - H[i] ; // Magnetisation
    He[i] = H[i] + alpha * M[i] ; // Effective field
  }

  FV_Man (He, Ms, a, Man) ;

  for (int i=0 ; i<3 ; i++)
    Mi[i] = (M[i]-c*Man[i]) / (1-c) ; // Irreversible magnetisation

  FV_dMandHe(He, Ms, a, dMandHe) ;
  FV_dMidHe(He, Man, Mi, dH, kk, dMidHe) ;

  d[0] = 1 - alpha*c*dMandHe[0] - alpha*(1-c)*dMidHe[0] ; // xx
  d[3] = 1 - alpha*c*dMandHe[3] - alpha*(1-c)*dMidHe[3] ; // yy
  d[5] = 1 - alpha*c*dMandHe[5] - alpha*(1-c)*dMidHe[5] ; // zz
  d[1] =   - alpha*c*dMandHe[1] - alpha*(1-c)*dMidHe[1] ; // xy
  d[2] =   - alpha*c*dMandHe[2] - alpha*(1-c)*dMidHe[2] ; // xz
  d[4] =   - alpha*c*dMandHe[4] - alpha*(1-c)*dMidHe[4] ; // zz

  double dd = d[0] * (d[3] *d[5] - d[4] *d[4])
            - d[1] * (d[1] *d[5] - d[4] *d[2])
            + d[2] * (d[1] *d[4] - d[3] *d[2]);

  e[0] =  (d[3]*d[5]-d[4]*d[4])/dd ;
  e[1] = -(d[1]*d[5]-d[2]*d[4])/dd ;
  e[2] =  (d[1]*d[4]-d[2]*d[3])/dd ;
  e[3] =  (d[0]*d[5]-d[2]*d[2])/dd ;
  e[4] = -(d[0]*d[4]-d[1]*d[2])/dd ;
  e[5] =  (d[0]*d[3]-d[1]*d[1])/dd ;

  for (int i=0 ; i<6 ; i++)
    f[i] = c*dMandHe[i] + (1-c)*dMidHe[i] ;

  dMdH[0] = e[0]*f[0]+e[1]*f[1]+e[2]*f[2] ;
  dMdH[1] = e[0]*f[1]+e[1]*f[3]+e[2]*f[4] ;
  dMdH[2] = e[0]*f[2]+e[1]*f[4]+e[2]*f[5] ;
  dMdH[3] = e[1]*f[1]+e[3]*f[3]+e[4]*f[4] ;
  dMdH[4] = e[1]*f[2]+e[3]*f[4]+e[4]*f[5] ;
  dMdH[5] = e[2]*f[2]+e[4]*f[4]+e[5]*f[5] ;

  dBdH[0] =  MU0 * (100.0 + dMdH[0]) ; // 100 for better convergence, forcing a bit of slope in NR iterations
  dBdH[3] =  MU0 * (100.0 + dMdH[3]) ;
  dBdH[5] =  MU0 * (100.0 + dMdH[5]) ;
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
  Vector_dBdH (H, B, dH, D, dBdH) ;

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

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  for (int k=0 ; k<3 ; k++){
    H[k]  = (A+0)->Val[k] ;
    B[k]  = (A+1)->Val[k] ;
    dH[k] = (A+2)->Val[k] ;
  }

  Vector_dHdB (H, B, dH, D, dHdB) ;

  V->Type = TENSOR_SYM ;// xx, xy, xz, yy, yz, zz
  for (int k=0 ; k<6 ; k++)  V->Val[k] = dHdB[k] ;
}

void F_dbdh_Jiles(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input : h, b, dh
  // dbdh_Jiles[{h}, {d a}, {h}-{h}[1] ]{List[hyst_FeSi]}
  // Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha};==> struct FunctionActive *D

  double H[3], B[3], dH[3], dBdH[6] ;
  struct FunctionActive *D;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("dbdh_Jiles requires three vector: {h} at t_i, {b} at t_i and ({h}-{h}[1]), i.e {h} at t_i - {h} at t_{i-1}");

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  for (int k=0 ; k<3 ; k++){
    H[k]  = (A+0)->Val[k] ;
    B[k]  = (A+1)->Val[k] ;
    dH[k] = (A+2)->Val[k] ;
  }

  Vector_dBdH (H, B, dH, D, dBdH) ;

  V->Type = TENSOR_SYM ;
  for (int k=0 ; k<6 ; k++)  V->Val[k] = dBdH[k] ;
}

void F_h_Jiles(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input : h1, b1, b2
  // h_Jiles[ {h}[1], {b}[1], {b} ]{List[hyst_FeSi]}
  // Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha};

  double Hone[3], Bone[3], Btwo[3], Htwo[3] ;
  struct FunctionActive *D;

  void Vector_H2 (double Hone[3], double Bone[3], double Btwo[3], int n,
                  struct FunctionActive *D, double Htwo[3]) ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("h_Jiles requires three vector arguments: {h} at t_{i-1}, {b} at t_{i-1} and {b} at t_i");

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  for (int k=0 ; k<3 ; k++) {
    Hone[k] = (A+0)->Val[k] ;
    Bone[k] = (A+1)->Val[k] ;
    Btwo[k] = (A+2)->Val[k] ;
  }

  Vector_H2 (Hone, Bone, Btwo, 10, D, Htwo) ;

  V->Type = VECTOR ;
  for (int k=0 ; k<3 ; k++)  V->Val[k] = Htwo[k] ;
}

void F_b_Jiles(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input : b1, h1, h2
  // b_Jiles[ {b}[1], {h}[1], {h} ]{List[hyst_FeSi]}
  // Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha};

  double Bone[3], Hone[3], Btwo[3], Htwo[3] ;
  struct FunctionActive  * D ;

  void Vector_B2 (double Bone[3], double Hone[3], double Htwo[3], int n,
                  struct FunctionActive *D, double Btwo[3]) ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("b_Jiles requires three vector arguments: {b} at t_{i-1}, "
                   "{h} at t_{i-1} and {h} at t_i");

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  D = Fct->Active ;

  for (int k = 0; k < 3 ; k++){
    Bone[k] = (A+0)->Val[k] ;
    Hone[k] = (A+1)->Val[k] ;
    Htwo[k] = (A+2)->Val[k] ;
  }
  Vector_B2 (Bone, Hone, Htwo, 10, D, Btwo) ;

  V->Type = VECTOR ;
  for (int k = 0; k < 3 ; k++) V->Val[k] = Btwo[k] ;
}


void Vector_H2 (double Hone[3], double Bone[3], double Btwo[3], int n,
                  struct FunctionActive *D, double Htwo[3])
{
  double H[3], dH[3], B[3], dB[3] ;
  double dHdB[6] ;

  for (int k=0 ; k<3 ; k++) {
    H[k]  = Hone[k];
    dB[k] = (Btwo[k] - Bone[k])/(double)n ;
  }

  for (int i=0 ; i<n ; i++) {
    for (int k=0 ; k<3 ; k++)
      B[k] = (double)(n-i)/(double)n * Bone[k] + (double)i/(double)n * Btwo[k] ;
    if (!i) {
      for (int k=0; k<3; k++) dH[k] = dB[k] ;
      Vector_dHdB (H, B, dH, D, dHdB) ;

      dH[0] = dHdB[0] * dB[0] + dHdB[1] * dB[1] + dHdB[2] * dB[2] ;
      dH[1] = dHdB[1] * dB[0] + dHdB[3] * dB[1] + dHdB[4] * dB[2] ;
      dH[2] = dHdB[2] * dB[0] + dHdB[4] * dB[1] + dHdB[5] * dB[2] ;
    }
    Vector_dHdB (H, B, dH, D, dHdB) ;
    dH[0] = dHdB[0] * dB[0] + dHdB[1] * dB[1] + dHdB[2] * dB[2] ;
    dH[1] = dHdB[1] * dB[0] + dHdB[3] * dB[1] + dHdB[4] * dB[2] ;
    dH[2] = dHdB[2] * dB[0] + dHdB[4] * dB[1] + dHdB[5] * dB[2] ;

    for (int k=0 ; k<3 ; k++)  H[k] += dH[k] ;
  }

  for (int k=0 ; k<3 ; k++) Htwo[k] = H[k] ;
}

void Vector_B2(double Bone[3], double Hone[3], double Htwo[3], int n,
               struct FunctionActive *D, double Btwo[3])
{
  double H[3], dH[3], B[3] ;
  double dBdH[6] ;

  for (int k=0 ; k<3 ; k++) {
    B[k]  = Bone[k];
    dH[k] = (Htwo[k] - Hone[k])/(double)n ;
  }

  for (int i=0 ; i<n ; i++) {
    for (int k=0 ; k<3 ; k++)
      H[k] = (double)(n-i)/(double)n * Hone[k] + (double)i/(double)n * Htwo[k] ;

    Vector_dBdH (H, B, dH, D, dBdH) ;

    B[0] += dBdH[0] * dH[0] + dBdH[1] * dH[1] + dBdH[2] * dH[2] ;
    B[1] += dBdH[1] * dH[0] + dBdH[3] * dH[1] + dBdH[4] * dH[2] ;
    B[2] += dBdH[2] * dH[0] + dBdH[4] * dH[1] + dBdH[5] * dH[2] ;
  }

  for (int k=0 ; k<3 ; k++) Btwo[k] = B[k] ;
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

double Fi_h_Ducharne (double *hi, double *bi, double *M, int NL, int NC,
                      double h0, double b0, double b)
{
  double db, dh, dHdB, s;
  int i, N = 200 ; // fixed number of steps for numerical integration

  db = (b - b0)/N ;
  s = (b - b0 < 0) ? -1. : 1. ;
  for (i=0 ; i < N ; ++i) {
    bool IsInGrid = Fi_InterpolationBilinear(hi, bi, M, NL, NC, s*h0, s*b0, &dHdB);
    if (!IsInGrid) dHdB = MU0 ;
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

  if (!Fct->Active)  Fi_InitListMatrix (Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  hi = D->Case.ListMatrix.x ;
  bi = D->Case.ListMatrix.y ;
  M =  D->Case.ListMatrix.data ;

  for (i=0 ; i<3 ; ++i) {
    // (h0,b0) = state of the model, and b
    h0 = (A+0)->Val[i] ;
    b0 = (A+1)->Val[i] ;
    b  = (A+2)->Val[i] ;

    // Compute the magnetic field
    h = Fi_h_Ducharne (hi, bi, M, NL, NC, h0, b0, b);
    V->Val[i] = h;
  }

  V->Type = VECTOR ;
}

void F_nu_Ducharne(F_ARG)
{
  int    NL, NC, i;
  double b0, h0, b[3], h[3], *bi, *hi, *M;
  struct FunctionActive  * D;

  if (!Fct->Active) Fi_InitListMatrix (Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  hi = D->Case.ListMatrix.x ;
  bi = D->Case.ListMatrix.y ;
  M  = D->Case.ListMatrix.data ;

  for (i=0 ; i<3 ; ++i) {
    // Get (h0,b0) = state of the model, and b
    h0 = (A+0)->Val[i] ;
    b0 = (A+1)->Val[i] ;
    b[i] = (A+2)->Val[i] ;

    // Compute h
    h[i] = Fi_h_Ducharne (hi, bi, M, NL, NC, h0, b0, b[i]);
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

  if (!Fct->Active)  Fi_InitListMatrix (Fct, A, V) ;

  D = Fct->Active ;
  NL = D->Case.ListMatrix.NbrLines ;
  NC = D->Case.ListMatrix.NbrColumns ;

  hi = D->Case.ListMatrix.x ;
  bi = D->Case.ListMatrix.y ;
  M  = D->Case.ListMatrix.data ;

  for (i=0 ; i<3 ; ++i) {
    // Get (h0,b0) = state of the model, and b
    h0 = (A+0)->Val[i] ;
    b0 = (A+1)->Val[i] ;
    b[i] = (A+2)->Val[i] ;
    s = (b[i] - b0 < 0) ? -1 : +1;

    bool IsInGrid = Fi_InterpolationBilinear (hi, bi, M, NL, NC, s*h0, s*b0, &(dHdB[i]));
    if (!IsInGrid) dHdB[i] = MU0 ;
  }

  V->Type = TENSOR_SYM ;
  V->Val[0] = dHdB[0]  ;  V->Val[1] = 0.0  ;  V->Val[2] = 0 ;
  V->Val[3] = dHdB[1]  ;  V->Val[4] = 0 ;
  V->Val[5] = dHdB[2]  ;
}

// Functions for Vectorial Incremental Nonconservative Consistent Hysteresis
// Model

double norm(double a[3])
{
  return sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
}

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

double F_Man_Vinch (double h, double Js0, double alpha)
{
  // Anhysteretic magnetisation
  double chi_mag = Js0/MU0* ((fabs(h)<1e-4) ? 1/alpha : tanh(h/alpha)/h ) ;
  return chi_mag ;
}

double F_dMandH_Vinch (double h, double Js0, double alpha)
{
  double dmdh =  Js0/MU0 * ( (fabs(h)<1e-4) ? 0. : 1/alpha/SQU(cosh(h/alpha))/h - tanh(h/alpha)/h/h) ;
  return dmdh ;
}

void FV_Man_Vinch (double H[3], double Js0, double alpha, double Man[3])
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

  if ( !nH ) {
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

bool limiter(const double Js, double v[3])
{
  double max = 0.9999*Js ; //0.9999
  double mod = norm(v);
  if(mod >= max){
    for (int n=0; n<3; n++)
      v[n] *= max/mod;
    return true;
  }
  return false;
}


// pour info
// #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
// http://www.gnu.org/software/gsl/manual/html_node/Multimin-Examples.html

#if !defined(HAVE_GSL)
void F_Update_Jk(F_ARG)
{
  Message::Error("F_Update_Jk requires the GSL");
}
#else

#include <gsl/gsl_vector.h>
#include <gsl/gsl_multiroots.h>
#include <gsl/gsl_multimin.h>


struct omega_f_context
{
  double h[3], Jp[3];
  double chi, Js, alpha;
} ;

double omega_f(const gsl_vector *v, void *params)
{
  double J[3], dJ[3] ;
  struct omega_f_context * p = (struct omega_f_context *)params;
  double h[3]  = { p->h[0] , p->h[1] , p->h[2]  };
  double Jp[3] = { p->Jp[0], p->Jp[1], p->Jp[2] };
  double chi   = p->chi;
  double Js    = p->Js;
  double alpha = p->alpha;

  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(Js, J) ;

  double nJ = norm(J);
  for (int i=0; i<3; i++) dJ[i] = J[i]-Jp[i]; // J-Jp

  double val =
    Js*alpha*( nJ/Js*atanh(nJ/Js) + 0.5*log(1-SQU(nJ/Js)) ) // u(J)
    - (J[0]*h[0] + J[1]*h[1] + J[2]*h[2]) // -J.h
    + chi * norm(dJ); // chi | J-Jp |

  return(val);
}

void omega_df (const gsl_vector *v, void *params, gsl_vector *df)
{
  double J[3], dJ[3] ;
  struct omega_f_context * p = (struct omega_f_context *)params;
  double h[3]  = {p->h[0] , p->h[1] , p->h[2] };
  double Jp[3] = {p->Jp[0], p->Jp[1], p->Jp[2]};
  double chi   = p->chi;
  double Js    = p->Js;
  double alpha = p->alpha;

  double grad[3] = {0.,0.,0.};

  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(Js, J);

  double nJ = norm(J);
  for (int i=0; i<3; i++)  dJ[i] = J[i]-Jp[i]; // J-Jp
  double ndJ = norm(dJ);

  for (int i=0; i<3; i++) {
    if (nJ)  grad[i] += alpha*atanh(nJ/Js)*J[i]/nJ;
    grad[i] -= h[i];
    if (ndJ) grad[i] += chi*dJ[i]/ndJ;
    gsl_vector_set(df, i, grad[i]);
  }

}

void omega_fdf (const gsl_vector *x, void *params, double *f, gsl_vector *df)
{
  *f = omega_f(x, params);
  omega_df(x, params, df);
}

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
  context.Js    = (A+4)->Val[0];
  context.alpha = (A+5)->Val[0];
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

  /*
  for (int i=0 ; i<3 ; i++)
    J[i] = gsl_vector_get (solver->x, i) ;
  limiter(0.9999*context.Js, J) ;
  for (int i=0 ; i<3 ; i++) V->Val[i] = J[i];
  */

  gsl_multimin_fdfminimizer_free (solver);
  gsl_vector_free (x);
}

#endif

//===================================================
// V. Francois original implementation with steepest descent
//===================================================

double fct_omega(double h[3], double Jk[3], double Jkp[3], double chi, double Js, double alpha)
{
  double diff[3];
  double nJk = norm(Jk); // magnetisation Jk assumed to be < the saturation magnetisation Js
  for (int n=0; n<3; n++)
    diff[n] = Jk[n]-Jkp[n]; // J-Jp

  double g2     = alpha*Js *( nJk/Js*atanh(nJk/Js) + 0.5*log(fabs(SQU(nJk/Js)-1)) ); // magnetic energy u(J)
  double g3     = Jk[0] * h[0] + Jk[1] * h[1] + Jk[2] * h[2]; // -J.h
  double Dissip = chi * norm(diff) ; // chi | J-Jp |

  return(g2-g3+Dissip);
}

void fct_d_omega (double h[3], double Jk[3], double Jkp[3],
                  double chi, double Js, double alpha, double *d_omega)
{

  d_omega[0] = d_omega[1] = d_omega[2] = 0.;
  double dJk[3];
  for (int n=0; n<3; n++) dJk[n] = Jk[n]-Jkp[n];

  double nJk  = norm(Jk);
  double ndJk = norm(dJk);

  for (int n = 0; n < 3; n++) {
    if(nJk) d_omega[n] += alpha * atanh(nJk/Js) * Jk[n]/nJk;
    d_omega[n] -= h[n];
    if(ndJk) d_omega[n] += chi * dJk[n]/ndJk ;
  }
}

//===================================================
// K. Jacques modified function
//===================================================

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
  double Js   =(A+4)->Val[0];
  double alpha=(A+5)->Val[0];

  Vector_Update_Jk_sd_K(h, Jk, Jkp, chi, Js, alpha);

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = Jk[n];
}


//===================================================
// K. Jacques additional functions
//===================================================

void Vector_Update_Jk_sd_K(double h[3], double Jk[3], double Jkp[3], double chi, double Js, double alpha) {

  // Updating Jk with a steepest descent algorithm

  double min_Jk[3] ;
  double d_omega[3] ;
  double sdfactor  = 0.1; //suitable value of tol for most applications
  double TOL = 1e-11; //11


  limiter(Js, Jk ); // avoiding possible NaN with atanh
  //limiter(Js, Jkp); // Ruth: Why doing it for previous step?

  fct_d_omega(h, Jk, Jkp, chi, Js, alpha, d_omega) ;     // updating the derivative of omega
  double omega = fct_omega(h, Jk, Jkp, chi, Js, alpha) ; // updating omega

  double min_omega = 1e+22 ;

  int iter = 0 ;
  const int MAX_ITER = 1000;
  while( iter < MAX_ITER &&
         (fabs(d_omega[0])/(1+fabs(omega))*sdfactor > TOL ||
          fabs(d_omega[1])/(1+fabs(omega))*sdfactor > TOL ||
          fabs(d_omega[2])/(1+fabs(omega))*sdfactor > TOL ))
    {
      for (int n = 0; n < 3; n++)
        min_Jk[n] = Jk[n] - sdfactor * d_omega[n] ; // gradient descent algorithm

      limiter(Js, min_Jk);
      min_omega = fct_omega(h, min_Jk, Jkp, chi, Js, alpha); //updating omega
      if (iter>MAX_ITER)
        Message::Warning("iter %d : Too many iterations to find the minimum of omega: min_omega %g, omega-TOL/10 %g",
                         iter, min_omega, omega-TOL/10);

      if( min_omega < omega-TOL/10 && norm(min_Jk) < Js ){
        fct_d_omega(h, min_Jk, Jkp, chi, Js, alpha, d_omega); //update the derivative d_omega
        omega = min_omega;
        //if(Jk[0]==Jkp[0] && Jk[1]==Jkp[1] && Jk[2]==Jkp[2])
        if(fabs(Jk[0]-Jkp[0])<1e-16 && fabs(Jk[1]-Jkp[1])<1e-16 && fabs(Jk[2]-Jkp[2])<1e-16 )
          sdfactor=0.1; // re-initialize rfactor which may have become very small due to an angulous starting point

        for (int n=0; n<3; n++) Jk[n] = min_Jk[n];
      }
      else sdfactor = sdfactor/2 ;

      iter++ ;
    }

  for (int n=0 ; n<3 ; n++)
    Jk[n] = min_Jk[n];
}

void Vector_b_Vinch_K(int N, double h[3], double alpha, double *Jk_all, double *Jkp_all, double *chi_all, double *Js_all, double b[3])
{

  double Jk[3], Jkp[3] ;
  double chi, Js;

  for (int n=0; n<3; n++)
     b[n] = MU0 * h[n];

  for (int k=0; k<N; k++) {
    chi = chi_all[k];
    Js  = Js_all[k];
    for (int n=0; n<3; n++)  {
      Jk[n]  = Jk_all[n+3*k];
      Jkp[n] = Jkp_all[n+3*k];
    }

    Vector_Update_Jk_sd_K(h, Jk, Jkp, chi, Js, alpha);

    for (int n=0; n<3; n++) {
      b[n] += Jk[n];
      Jk_all[n+3*k] = Jk[n];
    }
  }

}

void Tensor_dbdh_Vinch_K(int dim, int N, double h[3], double alpha,
                         double *Jk_all, double *Jkp_all, double *chi_all, double *Js_all,
                         double dbdh[6])
{
  double dJkdh[6];
  double Jk[3], Jkp[3] ;
  double chi, Js;

  dbdh[0] = dbdh[3] = dbdh[5] = MU0 ;
  dbdh[1] = dbdh[2] = dbdh[4] = 0. ;

  for (int k=0; k<N; k++) {
    chi  = chi_all[k];
    Js   = Js_all[k];
    for (int n=0; n<3; n++)  {
      Jk[n]  = Jk_all[n+3*k];
      Jkp[n] = Jkp_all[n+3*k];
    }

    Tensor_dJkdh_Vinch_K(dim, h, Jk, Jkp, chi, Js, alpha, dJkdh);
    for (int n=0; n<6; n++)
      dbdh[n] += dJkdh[n] ;
  }

}

void Tensor_dJkdh_Vinch_K(int dim, double h[3], double Jk[3], double Jkp[3], double chi, double Js, double alpha, double dJkdh[6])
{
  double idJkdh[6];
  double dJk[3];

  for (int n=0; n<3; n++)
    dJk[n] = Jk[n]-Jkp[n];

  double nJk  = norm(Jk);
  double ndJk = norm(dJk);


  if (nJk && ndJk){ // analytical Jacobian exists
    Message::Debug("Analytical Jacobian Js=%g, nJk=%g and ndJk=%g",Js, nJk, ndJk);
    double a1 = alpha*(1/(1-SQU(nJk/Js)))*(1/Js)*(1/SQU(nJk));
    double a2 = alpha*atanh(nJk/Js);
    /*
    idJkdh[0] = a1 * (Jk[0]*Jk[0]) + a2 * ( (1/nJk) - (1/CUB(nJk))*(Jk[0]*Jk[0]) ) + chi * ( (1/ndJk) - (1/CUB(ndJk))*(dJk[0]*dJk[0])) ; //xx
    idJkdh[1] = a1 * (Jk[1]*Jk[0]) + a2 * (         - (1/CUB(nJk))*(Jk[1]*Jk[0]) ) + chi * (          - (1/CUB(ndJk))*(dJk[1]*dJk[0])) ; //xy
    idJkdh[2] = a1 * (Jk[2]*Jk[0]) + a2 * (         - (1/CUB(nJk))*(Jk[2]*Jk[0]) ) + chi * (          - (1/CUB(ndJk))*(dJk[2]*dJk[0])) ; //xz

    idJkdh[3] = idJkdh[1]; //yx
    idJkdh[4] = a1 * (Jk[1]*Jk[1]) + a2 * ( (1/nJk) - (1/CUB(nJk))*(Jk[1]*Jk[1]) ) + chi * ( (1/ndJk) - (1/CUB(ndJk))*(dJk[1]*dJk[1])) ; //yy
    idJkdh[5] = a1 * (Jk[2]*Jk[1]) + a2 * (         - (1/CUB(nJk))*(Jk[2]*Jk[1]) ) + chi * (          - (1/CUB(ndJk))*(dJk[2]*dJk[1])) ; //yz

    idJkdh[6] = idJkdh[2] ; //zx
    idJkdh[7] = idJkdh[5] ; //zy
    idJkdh[8] = a1 * (Jk[2]*Jk[2]) + a2 * ( (1/nJk) - (1/CUB(nJk))*(Jk[2]*Jk[2]) ) + chi * ( (1/ndJk) - (1/CUB(ndJk))*(dJk[2]*dJk[2])) ; //zz
    */

    // Symmetric tensor
    idJkdh[0] = a1 * (Jk[0]*Jk[0]) + a2 * ((1/nJk) - (1/CUB(nJk))*(Jk[0]*Jk[0])) + chi * ((1/ndJk) - (1/CUB(ndJk))*(dJk[0]*dJk[0])) ; //xx
    idJkdh[3] = a1 * (Jk[1]*Jk[1]) + a2 * ((1/nJk) - (1/CUB(nJk))*(Jk[1]*Jk[1])) + chi * ((1/ndJk) - (1/CUB(ndJk))*(dJk[1]*dJk[1])) ; //yy
    idJkdh[1] = a1 * (Jk[1]*Jk[0]) + a2 * (        - (1/CUB(nJk))*(Jk[1]*Jk[0])) + chi * (          -(1/CUB(ndJk))*(dJk[1]*dJk[0])) ; //xy

    switch(dim) {
    case 2: // 2D case
      idJkdh[5] = 1.;
      idJkdh[2] = idJkdh[4] = 0.;
      break;
    case 3: // 3D case
      idJkdh[5]=a1 * (Jk[2]*Jk[2]) + a2 * ((1/nJk) - (1/CUB(nJk))*(Jk[2]*Jk[2])) + chi * ((1/ndJk) - (1/CUB(ndJk))*(dJk[2]*dJk[2])) ; //zz
      idJkdh[2]=a1 * (Jk[2]*Jk[0]) + a2 * (        - (1/CUB(nJk))*(Jk[2]*Jk[0])) + chi * (         - (1/CUB(ndJk))*(dJk[2]*dJk[0])) ; //xz
      idJkdh[4]=a1 * (Jk[2]*Jk[1]) + a2 * (        - (1/CUB(nJk))*(Jk[2]*Jk[1])) + chi * (         - (1/CUB(ndJk))*(dJk[2]*dJk[1])) ; //yz
      break;
    default:
      Message::Error("Invalid parameter (dimension = 2 or 3) for function 'dhdb_Vinch_'. Analytic Jacobian computation.");
      break;
    }

    Inv_TensorSym3x3_K(dim, idJkdh, dJkdh); // T, invT

  }
  else{  // numerical Jacobian
    Message::Debug("Numerical Jacobian Js=%g, nJk=%g and ndJk=%g",Js,nJk, ndJk);
    double EPSILON = 1e-8 ;//8
    double delta0  = 1e-5 ;

    // Different following the different directions ??? TO CHECK

    double delta[3] = { (fabs(h[0])>EPSILON) ? fabs(h[0]) * delta0 : delta0,
                        (fabs(h[1])>EPSILON) ? fabs(h[1]) * delta0 : delta0,
                        (fabs(h[2])>EPSILON) ? fabs(h[2]) * delta0 : delta0 } ;

    /*
    double delta[3] = {((norm(h)>EPSILON) ? norm(h) * delta0 : delta0),
                       ((norm(h)>EPSILON) ? norm(h) * delta0 : delta0),
                       ((norm(h)>EPSILON) ? norm(h) * delta0 : delta0) } ;
    */

    double hxr[3]={h[0]+delta[0], h[1]          ,h[2]};          double hxl[3]={h[0]-delta[0], h[1],          h[2]};
    double hyr[3]={h[0],          h[1]+delta[1] ,h[2]};          double hyl[3]={h[0],          h[1]-delta[1], h[2]};
    double hzr[3]={h[0],          h[1]          ,h[2]+delta[2]}; double hzl[3]={h[0],          h[1],          h[2]-delta[2]};

    double Jkxr[3], Jkxl[3];
    double Jkyr[3], Jkyl[3];
    double Jkzr[3], Jkzl[3];

    Vector_Update_Jk_sd_K(hxr, Jkxr, Jkp, chi, Js, alpha);
    Vector_Update_Jk_sd_K(hxl, Jkxl, Jkp, chi, Js, alpha);
    Vector_Update_Jk_sd_K(hyr, Jkyr, Jkp, chi, Js, alpha);
    Vector_Update_Jk_sd_K(hyl, Jkyl, Jkp, chi, Js, alpha);

    // Symmetric tensor
    dJkdh[0]= (Jkxr[0]-Jkxl[0])/(2*delta[0]); //xx
    dJkdh[3]= (Jkyr[1]-Jkyl[1])/(2*delta[1]); //yy
    dJkdh[1]= (Jkxr[1]-Jkxl[1])/(2*delta[0]); //yx

    switch(dim) {
    case 2: // 2D case
      dJkdh[5] = 1.;
      dJkdh[2] = dJkdh[4]= 0.;
      break;
    case 3: //3D case
      Vector_Update_Jk_sd_K(hzr, Jkzr, Jkp, chi, Js, alpha);
      Vector_Update_Jk_sd_K(hzl, Jkzl, Jkp, chi, Js, alpha);

      dJkdh[5]= (Jkzr[2]-Jkzl[2])/(2*delta[2]); //zz
      dJkdh[2]= (Jkxr[2]-Jkxl[2])/(2*delta[0]); //zx
      dJkdh[4]= (Jkyr[2]-Jkyl[2])/(2*delta[1]); //zy
      break;
    default:
      Message::Error("Invalid parameter (dimension = 2 or 3) for function 'dhdb_Vinch_'. Numeric Jacobian computation.");
      break;
    }

  }

}

void Inv_Tensor3x3_K(double T[9], double invT[9])
{
  double det= T[0]*T[4]*T[8]+T[1]*T[5]*T[6]+T[2]*T[3]*T[7]
             -T[2]*T[4]*T[6]-T[0]*T[5]*T[7]-T[1]*T[3]*T[8];

  if (!det)
    Message::Error("Null determinant of db/dh! : dbdh=[%g,%g,%g;%g,%g,%g;%g,%g,%g]",
                   T[0],T[1],T[2],T[3],T[4],T[5],T[6],T[7],T[8]);

  invT[0]=(T[4]*T[8]-T[5]*T[7])/det;
  invT[1]=(T[2]*T[7]-T[1]*T[8])/det;
  invT[2]=(T[1]*T[5]-T[2]*T[4])/det;
  invT[3]=(T[5]*T[6]-T[3]*T[8])/det;
  invT[4]=(T[0]*T[8]-T[2]*T[6])/det;
  invT[5]=(T[2]*T[3]-T[0]*T[5])/det;
  invT[6]=(T[3]*T[7]-T[4]*T[6])/det;
  invT[7]=(T[1]*T[6]-T[0]*T[7])/det;
  invT[8]=(T[0]*T[4]-T[1]*T[3])/det;
}

void Inv_TensorSym3x3_K(int dim, double T[6], double invT[6])
{
  double det ;
  switch(dim) {
  case 2:
    det =  T[0] * T[3] - T[1] * T[1];
    if (!det)
      Message::Error("Null determinant of invT! Case %d", dim);
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
      Message::Error("Null determinant of invT! Case %d", dim);
    invT[0] =  (T[3]*T[5]-T[4]*T[4])/det ;
    invT[1] = -(T[1]*T[5]-T[2]*T[4])/det ;
    invT[2] =  (T[1]*T[4]-T[2]*T[3])/det ;
    invT[3] =  (T[0]*T[5]-T[2]*T[2])/det ;
    invT[4] = -(T[0]*T[4]-T[1]*T[2])/det ;
    invT[5] =  (T[0]*T[3]-T[1]*T[1])/det ;
    break;

  default:
    Message::Error("Invalid parameter for function 'dhdb_Vinch_'");
    break;
  }

}


void F_b_Vinch_K(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = number of cells -- N
  // (A+1)    ->Val = magnetic field  -- h
  // (A+2)    ->Val = characteristic magnetic field inversely proportional to the slope at origin -- alpha
  // (A+3+4*k)->Val = material magnetization -- Jk
  // (A+4+4*k)->Val = material magnetization at previous time step -- Jkp
  // (A+5+4*k)->Val = limit force related to the dissipation -- chi
  // (A+6+4*k)->Val = saturation magnetization -- Js
  // ---------------------------------------------
  // output: magnetic induction -- b

  double h[3], Jk[3], Jkp[3] ;
  double b[3] ;
  double chi, Js;

  double N     = (A+0)->Val[0];
  double alpha = (A+2)->Val[0];

  for (int n=0; n<3; n++) {
    h[n] = (A+1)->Val[n];
    b[n] = MU0 * h[n];
  }

  for (int k=0; k<N; k++){
    for (int n=0; n<3; n++)  {
      Jk[n]  = (A+3+4*k)->Val[n];
      Jkp[n] = (A+4+4*k)->Val[n];
    }
    chi  = (A+5+4*k)->Val[0];
    Js   = (A+6+4*k)->Val[0];

    Vector_Update_Jk_sd_K(h, Jk, Jkp, chi, Js, alpha);
    for (int n=0; n<3; n++)
      b[n] += Jk[n];
  }

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = b[n];
}

void Vector_h_Vinch_K(int dim, int N, double b[3], double bc[3], double alpha,
                      double *Jk_all, double *Jkp_all, double *chi_all, double *Js_all, double h[3] )
{
  double tempbc[3], tempJk_all[3*N], bprev[3];
  double dh[3]  ;
  double dbdh[6];
  double dhdb[6];

  double TOL = 1e-8; //-8,-5
  double sumchi = 0. ;

  for (int n=0; n<3; n++)
     tempbc[n] = bc[n];

  for (int k=0; k<N; k++){
    sumchi += chi_all[k];
    for (int n=0; n<3; n++){
      tempJk_all[n+3*k]  = Jk_all[n+3*k];
    }
  }

  int iter = 0 ;
  const int MAX_ITER = 1000;
  while( iter < MAX_ITER &&
         ((fabs(tempbc[0]-b[0])/(1+fabs(b[0]))) > TOL ||
          (fabs(tempbc[1]-b[1])/(1+fabs(b[1]))) > TOL ||
          (fabs(tempbc[2]-b[2])/(1+fabs(b[2]))) > TOL )){

    Tensor_dbdh_Vinch_K(dim, N, h, alpha, tempJk_all, Jkp_all, chi_all, Js_all, dbdh); // eval dbdh
    Inv_TensorSym3x3_K(dim, dbdh, dhdb);                                               // eval (dbdh)^-1=dhdb

    dh[0] = dhdb[0]*(b[0]-tempbc[0]) + dhdb[1]*(b[1]-tempbc[1]) + dhdb[2]*(b[2]-tempbc[2]);
    dh[1] = dhdb[1]*(b[0]-tempbc[0]) + dhdb[3]*(b[1]-tempbc[1]) + dhdb[4]*(b[2]-tempbc[2]);
    dh[2] = dhdb[2]*(b[0]-tempbc[0]) + dhdb[4]*(b[1]-tempbc[1]) + dhdb[5]*(b[2]-tempbc[2]);

    /*
    //--------------------------------------------------------
    //    Méthodes de relaxation envisagées :

    if (norm(dh)>1e3*sumchi) {
    for (int n=0 ; n<3 ; n++) dh[n]=(1.0/(iter+1))*dh[n]; // Relaxation
    //Message::Warning("!!!!!!!!!!!!!!relax : before : dhx= %g, after : dhx=%g, bx=%g", (iter+1)*dh[0], dh[0], b[0]);
    }

    if iter<8 {
    for (int n=0 ; n<3 ; n++) dh[n]=0.25*dh[n]; // Relaxation
    }
    //-------------------------------------------------------
    */

    for (int n=0 ; n<3 ; n++){
      h[n] += dh[n];
      bprev[n] = tempbc[n];
    }
    Vector_b_Vinch_K(N, h, alpha, tempJk_all, Jkp_all, chi_all, Js_all, tempbc); // Update bc, Jk_all

    // Affichage de l'évolution de b et h à chaque itération :
    /*
    // if (iter>=MAX_ITER-1){
    Message::Warning("At iter %d : b_desired = [%g, %g, %g]", iter, b[0],b[1],b[2]);
    Message::Warning("At iter %d : b_get     = [%g, %g, %g]", iter, tempbc[0],tempbc[1],tempbc[2]);
    Message::Warning("At iter %d : h_get     = [%g, %g, %g]", iter, h[0],h[1],h[2]);
    }
    */
    iter++;
  }

  // Affichage de b et h obtenu à la fin de la boucle de NR :
  /*
    Message::Warning("-------NR-loop in h_Vinch_K stopped after %d iteration(s) :-------",iter);
    Message::Warning("b_desired : [%g, %g, %g]", b[0],b[1],b[2]);
    Message::Warning("b_get     : [%g, %g, %g]",tempbc[0],tempbc[1],tempbc[2]);
    Message::Warning("h_get     : [%g, %g, %g]", h[0],h[1],h[2]);
  */

  // Message d'erreur pour solution invalide (NaN ou Inf) :
  /*
    for (int i=0 ; i<3 ; i++){
    if ( //iter==MAX_ITER ||
    h[i] != h[i] ||                                       // Solution h is NaN
    h[i] == -std::numeric_limits<double>::infinity() ||   // Solution h is -Inf
    h[i] ==  std::numeric_limits<double>::infinity() ||   // Solution h is Inf
    tempbc[i] != tempbc[i] ||                                  // Solution b is NaN
    tempbc[i] == -std::numeric_limits<double>::infinity() ||   // Solution b is -Inf
    tempbc[i] ==  std::numeric_limits<double>::infinity() )    // Solution b is Inf
    {
    Message::Warning("^^^^^^^^^^^^^^iter %d : dbdh : [%g, %g, %g; %g, %g, %g; %g, %g, %g]", iter, dbdh[0], dbdh[1],dbdh[2],dbdh[3], dbdh[4],dbdh[5],dbdh[6], dbdh[7],dbdh[8]);
    Message::Warning("^^^^^^^^^^^^^^iter %d : dhdb : [%g, %g, %g; %g, %g, %g; %g, %g, %g]", iter, dhdb[0],  dhdb[1], dhdb[2],dhdb[3],  dhdb[4], dhdb[5],dhdb[6],  dhdb[7], dhdb[8]);
      Message::Warning("--------------iter %d : J1_p : [%g, %g, %g]", iter, Jkp_all[0],Jkp_all[1],Jkp_all[2]);
      Message::Warning("--------------iter %d : J2_p : [%g, %g, %g]", iter, Jkp_all[3],Jkp_all[4],Jkp_all[5]);
      Message::Warning("--------------iter %d : J3_p : [%g, %g, %g]", iter, Jkp_all[6],Jkp_all[7],Jkp_all[8]);
      Message::Warning(">>>>>>>>>>>>>>iter %d : J1   : [%g, %g, %g]", iter, tempJk_all[0],tempJk_all[1],tempJk_all[2]);
      Message::Warning(">>>>>>>>>>>>>>iter %d : J2   : [%g, %g, %g]", iter, tempJk_all[3],tempJk_all[4],tempJk_all[5]);
      Message::Warning(">>>>>>>>>>>>>>iter %d : J3   : [%g, %g, %g]", iter, tempJk_all[6],tempJk_all[7],tempJk_all[8]);
      Message::Warning("''''''''''''''iter %d : b    : [%g, %g, %g]", iter, b[0],b[1],b[2]);
      Message::Warning("''''''''''''''iter %d : b_get: [%g, %g, %g]", iter, tempbc[0],tempbc[1],tempbc[2]);
      Message::Warning("''''''''''''''iter %d : h_get: [%g, %g, %g]", iter, h[0],h[1],h[2]);
      Message::Warning("!!!!!!!!!!!!!!iter %d : dh   : [%g, %g, %g]", iter, dh[0],dh[1],dh[2]);
      Message::Error("No valid solution found (NaN or Inf)! at Iteration %d of NR-loop in h_Vinch_K",iter);
      }
    }
  */

}


void F_h_Vinch_K(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = number of cells -- N
  // (A+1)    ->Val = magnetic field at previous time step -- hp
  // (A+2)    ->Val = magnetic induction -- b
  // (A+3)    ->Val = magnetic induction at previous time step -- bp
  // (A+4)    ->Val = characteristic magnetic field inversely proportional to the slope at origin -- alpha
  // (A+5+4*k)->Val = material magnetization -- Jk
  // (A+6+4*k)->Val = material magnetization at previous time step -- Jkp
  // (A+7+4*k)->Val = limit force related to the dissipation -- chi
  // (A+8+4*k)->Val = saturation magnetization -- Js
  // ---------------------------------------------
  // output: magnetic field -- h

  int dim = Fct->Para[0];

  int N        = (A+0)->Val[0];

  double h[3], b[3], bc[3], Jk_all[3*N], Jkp_all[3*N], chi_all[N], Js_all[N] ;
  for (int n=0; n<3; n++) {
     h[n]  = (A+1)->Val[n];
     b[n]  = (A+2)->Val[n];
     bc[n] = (A+3)->Val[n];
  }
  double alpha = (A+4)->Val[0];

  for (int k=0; k<N; k++) {
    chi_all[k]  =(A+7+4*k)->Val[0];
    Js_all[k]   =(A+8+4*k)->Val[0];
    for (int n=0; n<3; n++)  {
      Jk_all[n+3*k]  = (A+5+4*k)->Val[n];
      Jkp_all[n+3*k] = (A+6+4*k)->Val[n];
    }
  }

  Vector_h_Vinch_K(dim, N, b, bc, alpha, Jk_all, Jkp_all, chi_all, Js_all, h);

  V->Type = VECTOR ;
  for (int n=0 ; n<3 ; n++) V->Val[n] = h[n];
}

void F_nu_Vinch_K(F_ARG) // NOT USED
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // (A+0)    ->Val = number of cells -- N
  // (A+1)    ->Val = magnetic field at previous time step -- hp
  // (A+2)    ->Val = magnetic induction -- b
  // (A+3)    ->Val = magnetic induction at previous time step -- bp
  // (A+4)    ->Val = characteristic magnetic field inversely proportional to the slope at origin -- alpha
  // (A+5+4*k)->Val = material magnetization -- Jk
  // (A+6+4*k)->Val = material magnetization at previous time step -- Jkp
  // (A+7+4*k)->Val = limit force related to the dissipation -- chi
  // (A+8+4*k)->Val = saturation magnetization -- Js
  // ---------------------------------------------
  // output: reluctivity -- nu

  int dim = Fct->Para[0];

  int N      = (A+0)->Val[0];
  double alpha  = (A+4)->Val[0];

  double h[3], b[3], bc[3], Jk_all[3*N], Jkp_all[3*N], chi_all[N], Js_all[N] ;

  for (int n=0; n<3; n++) {
     h[n]  = (A+1)->Val[n];
     b[n]  = (A+2)->Val[n];
     bc[n] = (A+3)->Val[n];
  }

  for (int k=0; k<N; k++) {
    chi_all[k]  =(A+7+4*k)->Val[0];
    Js_all[k]   =(A+8+4*k)->Val[0];
    for (int n=0; n<3; n++)  {
      Jk_all[n+3*k]  = (A+5+4*k)->Val[n];
      Jkp_all[n+3*k] = (A+6+4*k)->Val[n];
    }
  }

  Vector_h_Vinch_K(dim, N, b, bc, alpha, Jk_all, Jkp_all, chi_all, Js_all, h );

  V->Type = TENSOR_SYM ;
  V->Val[0] = (!b[0]) ? (1/(1e3*MU0)): h[0]/b[0]  ;  V->Val[1] = 0.0  ;  V->Val[2] = 0.0 ;
  V->Val[3] = (!b[1]) ? (1/(1e3*MU0)): h[1]/b[1]  ;  V->Val[4] = 0.0 ;
  V->Val[5] = (!b[2]) ? (1/(1e3*MU0)): h[2]/b[2]  ;
}

void F_dhdb_Vinch_K(F_ARG)
{
  // #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
  // input :
  // Fct->Para[0] = 2=> 2D problem; 3=>3D problem
  // (A+0)    ->Val = number of cells -- N
  // (A+1)    ->Val = magnetic field -- h
  // (A+2)    ->Val = characteristic magnetic field inversely proportional to the slope at origin -- alpha
  // (A+3+4*k)->Val = material magnetization -- Jk
  // (A+4+4*k)->Val = material magnetization at previous time step -- Jkp
  // (A+5+4*k)->Val = limit force related to the dissipation -- chi
  // (A+6+4*k)->Val = saturation magnetization -- Js
  // ---------------------------------------------
  // output: differential reluctivity -- dhdb

  int dim = Fct->Para[0];
  int N      = (A+0)->Val[0];
  double alpha  = (A+2)->Val[0];

  double h[3], Jk_all[3*N], Jkp_all[3*N], chi_all[N], Js_all[N] ;
  double dbdh[6], dhdb[6];

  for (int n=0; n<3; n++)
     h[n]  = (A+1)->Val[n];

  for (int k=0; k<N; k++) {
    chi_all[k]  =(A+5+4*k)->Val[0];
    Js_all[k]   =(A+6+4*k)->Val[0];
    for (int n=0; n<3; n++)  {
      Jk_all[n+3*k]  = (A+3+4*k)->Val[n];
      Jkp_all[n+3*k] = (A+4+4*k)->Val[n];
    }
  }

  Tensor_dbdh_Vinch_K(dim, N, h, alpha, Jk_all, Jkp_all, chi_all, Js_all, dbdh);
  Inv_TensorSym3x3_K(dim, dbdh, dhdb); // dimension, T, invT

  V->Type = TENSOR_SYM ;
  for (int k=0 ; k<6 ; k++)
    V->Val[k] = dhdb[k] ;
}
