// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
//
// Contributor(s):
//   Johan Gyselinck
//

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "Message.h"
#include <iostream>

#define SQU(a)     ((a)*(a)) 
#define MU0 1.25663706144e-6

/* ------------------------------------------------------------------------ */
/*
  Vectorized Jiles-Atherton hysteresis model
  J. Gyselinck, P. Dular, N. Sadowski, J. Leite and J.P.A. Bastos,
  "Incorporation of a Jiles-Atherton vector hysteresis model in 
  2D FE magnetic field computations. Application of the Newton-Raphson method", 
  Vol. 23, No. 3, pp. 685-693, 2004.
 */

void F_dhdb_Jiles(F_ARG)
{
  /* input : h,b,dh */

  double Hx, Hy, Bx, By, dHx, dHy, dHdBxx, dHdByy, dHdBxy;
  struct FunctionActive  * D ;

  void Vector_dHdB (double Hx, double Hy, double Bx, double By, double dHx, double dHy, 
                    struct FunctionActive *D,
		    double *dHdBxx, double *dHdByy, double *dHdBxy) ;
  
  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("Three vector arguments required");

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  // Parameters for the Jiles-Atherton model in D
  // dhdb_Jiles(h, b, h-h[1]){List[{Ms a k c, alpha}]} 
  //  Ms = 2.1/mu0 (T), a = 50 (A/m), k = 82 (A/m), c = 0.01, alpha = k/Ms ; // Bergqvist 
  D = Fct->Active ;

  Hx  = (A+0)->Val[0] ;  Hy = (A+0)->Val[1] ;
  Bx  = (A+1)->Val[0] ;  By = (A+1)->Val[1] ;
  dHx = (A+2)->Val[0] ; dHy = (A+2)->Val[1] ;
  
  Vector_dHdB (Hx, Hy, Bx, By, dHx, dHy, D, &dHdBxx, &dHdByy, &dHdBxy) ;

  V->Type = TENSOR_SYM ;

  V->Val[0] = dHdBxx ; V->Val[1] = dHdBxy ; V->Val[3] = dHdByy ;
  V->Val[2] = 0 ; V->Val[4] = 0 ; V->Val[5] = 0 ;
}

void F_dbdh_Jiles(F_ARG)
{
  /* input : h,b,dh */

  double Hx, Hy, Bx, By, dHx, dHy, dBdHxx, dBdHyy, dBdHxy;
  struct FunctionActive *D;

  void Vector_dBdH (double Hx, double Hy, double Bx, double By, double dHx, double dHy, 
                    struct FunctionActive *D,
		    double *dBdHxx, double *dBdHyy, double *dBdHxy) ;
  
  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("Three vector arguments required");

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  // Parameters for the Jiles-Atherton model in D
  // dhdb_Jiles(h, b, h-h[1]){List[{Ms a k c, alpha}]} 
  //  Ms = 2.1/mu0 (T), a = 50 (A/m), k = 82 (A/m), c = 0.01, alpha = k/Ms ; // Bergqvist 

  D = Fct->Active ;

  Hx  = (A+0)->Val[0] ;  Hy = (A+0)->Val[1] ;
  Bx  = (A+1)->Val[0] ;  By = (A+1)->Val[1] ;
  dHx = (A+2)->Val[0] ; dHy = (A+2)->Val[1] ;
  
  Vector_dBdH (Hx, Hy, Bx, By, dHx, dHy, D, &dBdHxx, &dBdHyy, &dBdHxy) ;

  V->Type = TENSOR_SYM ;

  V->Val[0] = dBdHxx ; V->Val[1] = dBdHxy ; V->Val[3] = dBdHyy ;
  V->Val[2] = 0 ; V->Val[4] = 0 ; V->Val[5] = 0 ;
}

void F_h_Jiles(F_ARG)
{
  /* input : h1,b1,b2 */
  double Hx1, Hy1, Bx1, By1, Bx2, By2, Hx2, Hy2;
  struct FunctionActive *D;

  void Vector_H2 (double Hx1, double Hy1, 
		  double Bx1, double By1, double Bx2, double By2, int n,
                  struct FunctionActive *D,
		  double *Hx2, double *Hy2) ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("Three vector arguments required");

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  // Parameters for the Jiles-Atherton model in D
  // dhdb_Jiles(h, b, h-h[1]){List[{Ms a k c alpha}]} 
  // Ms = 2.1/mu0 (T), a = 50 (A/m), k = 82 (A/m), c = 0.01, alpha = k/Ms ; // Bergqvist 
  D = Fct->Active ;

  
  Hx1 = (A+0)->Val[0] ; Hy1 = (A+0)->Val[1] ;
  Bx1 = (A+1)->Val[0] ; By1 = (A+1)->Val[1] ;
  Bx2 = (A+2)->Val[0] ; By2 = (A+2)->Val[1] ;

  Vector_H2 (Hx1, Hy1, Bx1, By1, Bx2, By2, 10, D, &Hx2, &Hy2) ;

  V->Type = VECTOR ;
  V->Val[0] = Hx2 ; V->Val[1] = Hy2 ; V->Val[2] = 0 ;
}

void F_b_Jiles(F_ARG)
{ 
  /* input : b1,h1,h2 */
  double Hx1, Hy1, Bx1, By1, Bx2, By2, Hx2, Hy2;
  struct FunctionActive  * D ;

  void Vector_B2 (double Bx1, double By1, 
		  double Hx1, double Hy1, double Hx2, double Hy2, int n,
                  struct FunctionActive *D,
		  double *Bx2, double *By2) ;

  if( (A+0)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR )
    Message::Error("Three vector arguments required");

  if (!Fct->Active)  Fi_InitListX (Fct, A, V) ;
  // Parameters for the Jiles-Atherton model in D
  // dhdb_Jiles(h, b, h-h[1]){List[{Ms a k c alpha}]} 
  //  Ms = 2.1/mu0 (T), a = 50 (A/m), k = 82 (A/m), c = 0.01, alpha = k/Ms ; // Bergqvist 
  D = Fct->Active ;

  Bx1 = (A+0)->Val[0] ; By1 = (A+0)->Val[1] ;
  Hx1 = (A+1)->Val[0] ; Hy1 = (A+1)->Val[1] ;
  Hx2 = (A+2)->Val[0] ; Hy2 = (A+2)->Val[1] ;

  Vector_B2 (Bx1, By1, Hx1, Hy1, Hx2, Hy2, 10, D, &Bx2, &By2) ;

  V->Type = VECTOR ;
  V->Val[0] = Bx2 ; V->Val[1] = By2 ; V->Val[2] = 0 ;
}

double F_Man (double He, double Ms, double a) 
{
  if (fabs(He) < 0.01*a) return Ms*He/(3.*a) ;
  else return Ms*(cosh(He/a)/sinh(He/a)-a/He) ;
}

double F_dMandHe (double He, double Ms, double a)
{
  if (fabs(He) < 0.01*a) return Ms/(3.*a) ;
  else return Ms/a*(1-SQU(cosh(He/a)/sinh(He/a))+SQU(a/He)) ;
}

void FV_Man (double Hex, double Hey, double Ms, double a, double *Manx, double *Many) 
{
  double He, Man;

  He = sqrt(Hex*Hex+Hey*Hey) ;
  Man = F_Man(He,Ms,a) ;
  if ( !He ) {
    *Manx = *Many = 0 ;
  } else {
    *Manx = Man * Hex/He ;
    *Many = Man * Hey/He ;
  }

}

void FV_dMandHe(double Hex, double Hey, double Ms, double a, double *dMandHexx,
		double *dMandHeyy, double *dMandHexy)
{
  double He, Man, dMandHe;

  He = sqrt(Hex*Hex+Hey*Hey) ;
  Man = F_Man(He,Ms,a) ;
  dMandHe = F_dMandHe(He,Ms,a) ;

  if ( !He ) {
    *dMandHexx = *dMandHeyy = dMandHe ;
    *dMandHexy = 0 ;
  } else {
    *dMandHexx = Man/He + (dMandHe - Man/He)*Hex*Hex/(He*He) ;
    *dMandHeyy = Man/He + (dMandHe - Man/He)*Hey*Hey/(He*He) ;
    *dMandHexy =          (dMandHe - Man/He)*Hex*Hey/(He*He) ;
  }
}

void FV_dMidHe(double Hex, double Hey, double Manx, double Many, 
	       double Mix, double Miy, double dHx, double dHy, double k, 
	       double *dMidHexx, double *dMidHeyy, double *dMidHexy)
{
  double dM, kdM;
  
  dM = sqrt( (Manx-Mix)*(Manx-Mix) + (Many-Miy)*(Many-Miy) ) ;

  if ( !dM || (Manx-Mix)*dHx + (Many-Miy)*dHy < 0 ) {
    *dMidHexx = *dMidHeyy = *dMidHexy = 0 ;
  } else {
    kdM = k * dM;
    *dMidHexx = (Manx-Mix)*(Manx-Mix) / kdM ;
    *dMidHeyy = (Many-Miy)*(Many-Miy) / kdM ;
    *dMidHexy = (Manx-Mix)*(Many-Miy) / kdM ;
  }

}

void Vector_H2(double Hx1, double Hy1, 
	       double Bx1, double By1, double Bx2, double By2, int n,
               struct FunctionActive *D,
	       double *Hx2, double *Hy2)
{
  int i ;
  double Hx, Hy, dHx=0., dHy=0., Bx, By, dBx, dBy ;
  double dHdBxx, dHdByy, dHdBxy ;
  void Vector_dHdB (double Hx, double Hy, double Bx, double By, double dHx, double dHy, 
                    struct FunctionActive *D,
		    double *dHdBxx, double *dHdByy, double *dHdBxy) ;
  Hx = Hx1 ;
  Hy = Hy1 ;
  dBx = (Bx2 - Bx1)/(double)n ; 
  dBy = (By2 - By1)/(double)n ; 

  for (i=0 ; i<n ; i++) {
    Bx = (double)(n-i)/(double)n * Bx1 + (double)i/(double)n * Bx2 ;
    By = (double)(n-i)/(double)n * By1 + (double)i/(double)n * By2 ;

    if (!i) {
      dHx = dBx ;
      dHy = dBy ;
      Vector_dHdB (Hx, Hy, Bx, By, dHx, dHy, D, &dHdBxx, &dHdByy, &dHdBxy) ;
      dHx = dHdBxx * dBx + dHdBxy * dBy ;
      dHy = dHdBxy * dBx + dHdByy * dBy ;
    }
    
    Vector_dHdB (Hx, Hy, Bx, By, dHx, dHy, D, &dHdBxx, &dHdByy, &dHdBxy) ;
    dHx = dHdBxx * dBx + dHdBxy * dBy ;
    dHy = dHdBxy * dBx + dHdByy * dBy ;
    Hx += dHx ;
    Hy += dHy ;
  }
  *Hx2 = Hx ;
  *Hy2 = Hy ;
}

void Vector_B2(double Bx1, double By1, 
	       double Hx1, double Hy1, double Hx2, double Hy2, int n,
               struct FunctionActive *D,
	       double *Bx2, double *By2)
{
  int i ;
  double Hx, Hy, dHx, dHy, Bx, By ;
  double dBdHxx, dBdHyy, dBdHxy ;
  void Vector_dBdH (double Hx, double Hy, double Bx, double By, double dHx, double dHy, 
                    struct FunctionActive *D,
		    double *dBdHxx, double *dBdHyy, double *dBdHxy) ;
  Bx = Bx1;
  By = By1;
  dHx = (Hx2 - Hx1)/(double)n ; 
  dHy = (Hy2 - Hy1)/(double)n ; 
  for (i=0 ; i<n ; i++) {
    Hx = (double)(n-i)/(double)n * Hx1 + (double)i/(double)n * Hx2 ;
    Hy = (double)(n-i)/(double)n * Hy1 + (double)i/(double)n * Hy2 ;
    Vector_dBdH (Hx, Hy, Bx, By, dHx, dHy, D, &dBdHxx, &dBdHyy, &dBdHxy) ;
    Bx += dBdHxx * dHx + dBdHxy * dHy ;
    By += dBdHxy * dHx + dBdHyy * dHy ;
  }
  *Bx2 = Bx;
  *By2 = By;

}

void Vector_dBdH(double Hx, double Hy, double Bx, double By, double dHx, double dHy, 
                 struct FunctionActive *D,
		 double *dBdHxx, double *dBdHyy, double *dBdHxy)
{
  double Mx, My, Hex, Hey ;
  double Manx, Many, Mix, Miy ;
  double dMandHexx, dMandHeyy, dMandHexy ;
  double dMidHexx, dMidHeyy, dMidHexy ;
  double dMdHxx, dMdHyy, dMdHxy ;
  double dxx, dyy, dxy, dd, exx, eyy, exy, fxx, fyy, fxy ;
  double Ms, a, k, c, alpha;    // parameters of J-A model

  if (D->Case.Interpolation.NbrPoint != 5) 
    Message::Error("Jiles-Atherton parameters missing (List[{Ms, a, k, c}])");
  Ms    = D->Case.Interpolation.x[0] ;
  a     = D->Case.Interpolation.x[1] ;
  k     = D->Case.Interpolation.x[2] ;
  c     = D->Case.Interpolation.x[3] ;
  alpha = D->Case.Interpolation.x[4] ;

  
  Mx = Bx/MU0 - Hx ;
  My = By/MU0 - Hy ;
  Hex = Hx + alpha * Mx ;
  Hey = Hy + alpha * My ;

  FV_Man (Hex, Hey, Ms, a, &Manx, &Many) ;

  Mix = (Mx - c*Manx) / (1-c) ;
  Miy = (My - c*Many) / (1-c) ;

  FV_dMandHe (Hex, Hey, Ms, a, &dMandHexx, &dMandHeyy, &dMandHexy) ;
  FV_dMidHe (Hex, Hey, Manx, Many, Mix, Miy, dHx, dHy, k, &dMidHexx, &dMidHeyy, &dMidHexy) ;

  dxx = 1 - alpha*c*dMandHexx - alpha*(1-c)*dMidHexx ;
  dyy = 1 - alpha*c*dMandHeyy - alpha*(1-c)*dMidHeyy ;
  dxy =   - alpha*c*dMandHexy - alpha*(1-c)*dMidHexy ;
  dd = dxx*dyy - dxy*dxy ;
  exx =  dyy/dd ;  
  eyy =  dxx/dd ;  
  exy = -dxy/dd ;  
  fxx = c*dMandHexx + (1-c)*dMidHexx ;
  fyy = c*dMandHeyy + (1-c)*dMidHeyy ;
  fxy = c*dMandHexy + (1-c)*dMidHexy ;

  dMdHxx = exx*fxx + exy*fxy ;
  dMdHyy = eyy*fyy + exy*fxy ;
  dMdHxy = exx*fxy + exy*fyy ;

  *dBdHxx =  MU0 * (1.0 + dMdHxx) ; //From the formulas, it is 1, but there was a 100, why?
  *dBdHyy =  MU0 * (1.0 + dMdHyy) ; //it does not modify greatly the result
  *dBdHxy =  MU0 * dMdHxy ; 
}

void Vector_dHdB(double Hx, double Hy, double Bx, double By, double dHx, double dHy, 
                 struct FunctionActive *D,
		 double *dHdBxx, double *dHdByy, double *dHdBxy)
{
  double dBdHxx, dBdHyy, dBdHxy, det;

  Vector_dBdH (Hx, Hy, Bx, By, dHx, dHy, D, &dBdHxx, &dBdHyy, &dBdHxy) ;
  det = dBdHxx * dBdHyy - dBdHxy * dBdHxy ;
  *dHdBxx =   dBdHyy / det ;
  *dHdByy =   dBdHxx / det ;
  *dHdBxy =  -dBdHxy / det ;
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

double Fi_h_Ducharne (double *hi, double *bi, double *M, int NL, int NC, double h0, double b0, double b)
{
    double db, dh, dHdB, s;
    int i, N = 200 ; // fixed number of steps for numerical integration
    double max_b=bi[NC-1], min_b=bi[0] ;
    double max_h=hi[NC-1], min_h=hi[0] ;

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
    double b0, h0, b[3], h[3], *bi, *hi, *M, dHdB[3], s;
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


 // Functions for Vectorial Incremental Nonconservative Consistent Hysteresis Model - V. Francois

double h_ba (double h, double b_rev, double Ms_rev, double d){
  double z=(b_rev)/(MU0+Ms_rev*tanh(h/d)/h);
  return(z);
}

void F_nu_Vinch(F_ARG){
  /* input : norm(b_rev)=norm(b_tot-sum(\alpha_i)) */
  /* output : nu */
  	  
  double b_rev,h,Ms_rev,alpha,chi_mag,nu;
  b_rev=(A)->Val[0];
  Ms_rev=0.15;//0.11;
  alpha=65;
  h=1; // start point for the solution of the implicit equation

  if(b_rev==0) // singularity for b=a
    chi_mag=Ms_rev/alpha/MU0;
  else { // Picard iteration to find h
    double TOL=1e-6 ;  
    while( fabs(h-h_ba(h,b_rev,Ms_rev,alpha)) > TOL ){
      h=h_ba(h,b_rev,Ms_rev,alpha); //is convergence assured?
    }
    chi_mag=Ms_rev*tanh(h/alpha)/h/MU0;
  }
  nu=1/MU0/(1+chi_mag);
  V->Val[0] = nu; 
}

double norm(const double v[]){
  return sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
}

bool limiter(const double max, double v[]){
  double mod = norm(v);
  if(mod >= max){
    for (int n=0; n<3; n++)
      v[n]*=max/mod;
    return true;
  }
  return false;
}

// pour info
// #define F_ARG   struct Function * Fct, struct Value * A, struct Value * V
// http://www.gnu.org/software/gsl/manual/html_node/Multimin-Examples.html

// #include <gsl/gsl_errno.h>
// #include <gsl/gsl_math.h>
#include <gsl/gsl_multimin.h>

double omega_f(const gsl_vector *v, void *params){
  double J[3],dJ[3];
  struct Value *A = (struct Value *) params;
  double chi=(A+3)->Val[0];
  double Js=(A+4)->Val[0];
  double alpha=(A+5)->Val[0];

  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(0.9999*Js,J) ;
  double norm_J = norm(J);
  for (int i=0; i<3; i++)  dJ[i] = J[i]-(A+2)->Val[i]; // J-Jp 

  double temp=norm_J/Js;
  double val = Js*alpha*(temp*atanh(temp)+0.5*log(1-SQU(temp))); // u(J)
  val -= J[0]*(A)->Val[0] + J[1]*(A)->Val[1] + J[2]*(A)->Val[2]; // -J.h
  val += chi*norm(dJ); // chi | J-Jp |
  return(val);
}

void omega_df (const gsl_vector *v, void *params, gsl_vector *df){
  double J[3],dJ[3],grad[3];
  struct Value *A = (struct Value *) params;
  double chi=(A+3)->Val[0];
  double Js=(A+4)->Val[0];
  double alpha=(A+5)->Val[0];

  for (int i=0; i<3; i++) J[i] = gsl_vector_get(v, i);
  limiter(0.9999*Js,J);
  double norm_J = norm(J);
  for (int i=0; i<3; i++)  dJ[i] = J[i]-(A+2)->Val[i]; // J-Jp 
  double norm_dJ = norm(dJ); 

  for (int i=0; i<3; i++) {
    grad[i]=0;
    if (norm_J) grad[i] += alpha*atanh(norm_J/Js)*J[i]/norm_J;
    grad[i] -= (A)->Val[i];
    if (norm_dJ) grad[i] += chi*dJ[i]/norm_dJ;
  }   
  for (int i=0; i<3; i++) gsl_vector_set(df, i, grad[i]);
}

void omega_fdf (const gsl_vector *x, void *params, double *f, gsl_vector *df) {
  *f = omega_f(x, params); 
  omega_df(x, params, df);
}


void F_Update_a(F_ARG) {
  size_t iter = 0;
  int status;
  double omegap;
  gsl_vector *grad;
  grad = gsl_vector_alloc (3);

  const gsl_multimin_fdfminimizer_type *T;
  gsl_multimin_fdfminimizer *s;
  gsl_vector *x;
  gsl_multimin_function_fdf my_func;
     
  my_func.n = 3;
  my_func.f = omega_f;
  my_func.df = omega_df;
  my_func.fdf = omega_fdf;
  my_func.params = A;

  x = gsl_vector_alloc (3);
  for (int i=0; i<3; i++) gsl_vector_set(x, i, (A+2)->Val[i]);
     
  // http://www.gnu.org/software/gsl/manual/html_node/Multimin-Algorithms-with-Derivatives.html

  T = gsl_multimin_fdfminimizer_conjugate_fr;
  s = gsl_multimin_fdfminimizer_alloc (T, 3);

  gsl_multimin_fdfminimizer_set (s, &my_func, x, 0.01, 1e-4);
     
  do {
    iter++;
    omegap = s->f;
    status = gsl_multimin_fdfminimizer_iterate (s);
    if (status) break;
    //status = gsl_multimin_test_gradient (s->gradient, 1e-3);
     
    // if (status == GSL_SUCCESS)
    //   printf ("Minimum found at:\n");
    // printf ("%5d % .5e % .5e % .5e % .5e\n", iter,
    // 	    gsl_vector_get (s->x, 0), 
    // 	    gsl_vector_get (s->x, 1), 
    // 	    gsl_vector_get (s->x, 2), 
    // 	    s->f);

    // omega_df(s->x, A, grad);
    // printf("F_Update: %2d % .5e % .5e % .5e % .5e % .5e\n", (int)iter, 
    // 	   (A)->Val[1], gsl_vector_get(s->x,1), (A+2)->Val[1], omega_f(s->x,A), gsl_vector_get(grad, 1));
  }
  while( (fabs(s->f-omegap)>1e-2) && iter < 100);
  //while (status == GSL_CONTINUE && iter < 100);

  if(iter==99)
    printf("F_Update Error: %3d % .5e % .5e % .5e % .5e\n", 
  	   (int)iter, (A)->Val[1], gsl_vector_get(s->x,1), (A+2)->Val[1], omega_f(s->x,A));

  for (int i=0 ; i<3 ; i++) V->Val[i] = gsl_vector_get (s->x, i); //(A)->Val[k]; 

  gsl_multimin_fdfminimizer_free (s);
  gsl_vector_free (x);
}

/*
double fct_omega(double h[], double a[], double a_old[], double chi, double Js, double alpha){
  double g2,g3,Dissip,norm_h,norm_a,norm_diff;
  double diff[3];
  double omega;

  norm_h = norm(h); // magnetic field h
  norm_a = norm(a); // magnetisation J assumed to be < Js
  for (int n=0; n<3; n++) { // J-Jp
    diff[n] = a[n]-a_old[n];
  }
  norm_diff = norm(diff);

  g2=Js*alpha*((norm_a/Js)*atanh((norm_a)/Js)+0.5*log(fabs(pow(norm_a/Js,2)-1))); // u(J)
  g3=-(a[0]*h[0]+a[1]*h[1]+a[2]*h[2]); // -J.h
  Dissip=chi*norm_diff; // chi | J-Jp |
  omega=g2+g3+Dissip;
  return(omega);
}

void fct_d_omega (double h[], double a[], double a_old[], double chi, double Js, double alpha, double* domega){
  double dg2_da[3],dg3_da[3],dissip[3],norm_a,norm_diff;
  double diff[3];

  norm_a = norm(a);
  for (int n=0; n<3; n++) {
    dg2_da[n]=alpha*atanh((norm_a)/Js);
    dg3_da[n]=-h[n];
    diff[n]=a[n]-a_old[n];
  }
  norm_diff = norm(diff);

  if(norm_a!=0){
    for (int n=0; n<3; n++) {
      dg2_da[n]=dg2_da[n]*a[n]/norm_a;
    }
  }
  else {
    for (int n=0; n<3; n++) {
      dg2_da[n]=0;
    }
  }
  
  if(norm_diff!=0){
    for (int n=0; n<3; n++) {
      dissip[n]=chi*diff[n]/norm_diff;
    }
  }
  else {
    for (int n=0; n<3; n++) {
      dissip[n]=0;
    }
  }
  for (int n=0; n<3; n++) {
    domega[n]=dg2_da[n]+dg3_da[n]+dissip[n];
  }
}

void F_Update_a(F_ARG) {
  // input:  h, a, a_old, chi, Js, alpha
  // output: a
  
  double a_old[3]={0,0,0};
  double h[3]={0,0,0};
  double a[3]={0,0,0};
  double better_a[3]={0,0,0};
  double rfactor=0.1;
  double tol=1e-6; 
  double* d_omega = new double[3];
  double omega, better_omega;
  double chi,Js,alpha;
  
  for (int n=0; n<3; n++) {
    h[n]=(A)->Val[n];
    a[n]=(A+1)->Val[n];
    a_old[n]=(A+2)->Val[n];
  }
  chi=(A+3)->Val[0];
  Js=(A+4)->Val[0];
  alpha=(A+5)->Val[0];

  limiter(0.99*Js,a);
  limiter(0.99*Js,a_old);

  fct_d_omega(h,a,a_old,chi,Js,alpha,d_omega); 
  omega=fct_omega(h,a,a_old,chi,Js,alpha); 
  better_omega=1e200;

  int count=0;
  // while( (fabs(d_omega[0])/(1+fabs(omega))*rfactor>tol || 
  //         fabs(d_omega[1])/(1+fabs(omega))*rfactor>tol || 
  //         fabs(d_omega[2])/(1+fabs(omega))*rfactor>tol)) {
    //if domega!=0 --> we look for "a" that gives min(omega)

  while((fabs(omega-better_omega) > tol) && (count<100) ){

    for (int n=0; n<3; n++) { //iteration gradient descent
      better_a[n] = a[n]-rfactor*d_omega[n];
    }
    limiter(0.99*Js,better_a);

    better_omega = fct_omega(h,better_a,a_old,chi,Js,alpha); //updating omega

    if( (better_omega < (omega-tol/10) ) && 
	( sqrt(better_a[0]*better_a[0]+better_a[1]*better_a[1]+better_a[2]*better_a[2]) < Js ) ){ 
      //Watch out: better_omega < omega otherwise, oscillations between 2 omega identical !   
      fct_d_omega(h,better_a,a_old,chi,Js,alpha,d_omega); //update table pointed by domega
      omega=better_omega; 
      // if(a[0]==a_old[0] && a[1]==a_old[1] && a[2]==a_old[2]) {
      // 	rfactor=0.1; 
      // 	//reinitialize rfactor which may have become extremely small to the angular starting point
      // }
      for (int n=0; n<3; n++) {
	a[n]=better_a[n];
      }
    }
    else {
      rfactor=rfactor/2;
    }
    Message::Info("%3d % .2e % .2e % .2e % .2e % .2e",
		  count,rfactor,norm(a),norm(d_omega),omega,better_omega);
    count++;    
  }
  for (int k=0 ; k<3 ; k++) {
    V->Val[k]=better_a[k];//(A)->Val[k]; 
  }
  //Message::Info("%3d % .2e % .2e", count,omega,d_omega[1]);

  delete[] d_omega;
}
*/
