// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Ruth Sabariego
//   Xavier Antoine
//

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "Legendre.h"
#include "Bessel.h"
#include "MallocUtils.h"
#include "Message.h"


#define SQU(a)     ((a)*(a))

/* some utility functions to deal with complex numbers */

typedef struct {
  double r;
  double i;
} cplx;

static cplx Csum(cplx a, cplx b)
{
  cplx s;
  s.r = a.r + b.r;
  s.i = a.i + b.i;
  return(s);
}

static cplx Csub(cplx a, cplx b)
{
  cplx s;
  s.r = a.r - b.r;
  s.i = a.i - b.i;
  return(s);
}

static cplx Csubr(double a, cplx b)
{
  cplx s;
  s.r = a - b.r;
  s.i = - b.i;
  return(s);
}

static cplx Cprod(cplx a, cplx b)
{
  cplx s;
  s.r = a.r * b.r - a.i * b.i;
  s.i = a.r * b.i + a.i * b.r;
  return(s);
}

static cplx Cdiv(cplx a, cplx b)
{
  cplx s;
  double den;
  den = b.r * b.r + b.i * b.i;
  s.r = (a.r * b.r + a.i * b.i) / den;
  s.i = (a.i * b.r - a.r * b.i) / den;
  return(s);
}

static cplx Cdivr(double a, cplx b)
{
  cplx s;
  double den;
  den = b.r * b.r + b.i * b.i;
  s.r = (a * b.r) / den;
  s.i = (- a * b.i) / den;
  return(s);
}

static cplx Cconj(cplx a)
{
  cplx s;
  s.r = a.r;
  s.i = -a.i;
  return(s);
}

static cplx Cneg(cplx a)
{
  cplx s;
  s.r = -a.r;
  s.i = -a.i;
  return(s);
}

static double Cmodu(cplx a)
{
  return(sqrt(a.r * a.r + a.i * a.i));
}

static cplx Cpow(cplx a, double b)
{
  cplx s;
  double mod, arg;
  mod = a.r * a.r + a.i * a.i;
  arg = atan2(a.i,a.r);
  mod = pow(mod,0.5*b);
  arg *= b;
  s.r = mod * cos(arg);
  s.i = mod * sin(arg);

  return(s);
}

static cplx Cprodr(double a, cplx b)
{
  cplx s;
  s.r = a * b.r;
  s.i = a * b.i;
  return(s);
}

/* ------------------------------------------------------------------------ */
/*  Exact solutions for spheres                                             */
/* ------------------------------------------------------------------------ */

/* Scattering by solid PEC sphere. Returns theta-component of surface
   current */

void F_JFIE_SphTheta(F_ARG)
{
  double k0, r, kr, e0, eta, theta, phi, a1, b1, c1, d1, den1, P, P0, dP ;
  double ctheta, stheta, cteRe1, cteRe2, a2, b2, c2, d2, den2 ;
  int i, n ;

  theta = atan2(sqrt( A->Val[0]* A->Val[0] + A->Val[1]*A->Val[1] ),  A->Val[2]);
  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  eta = Fct->Para[1] ;
  e0  = Fct->Para[2] ;
  r   = Fct->Para[3] ;

  kr = k0*r ;
  n = 50 ;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == M_PI || theta == -M_PI ) theta -= 1e-7;

  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);

    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);

    dP = (i+1)*i* P0/stheta-(ctheta/(ctheta*ctheta-1))* P;

    cteRe1 = (2*i+1) * stheta * dP/i/(i+1);
    cteRe2 = (2*i+1) * P/stheta/i/(i+1);

    a1 = cos((1-i)*M_PI/2) ;
    b1 = sin((1-i)*M_PI/2) ;
    c1 = -AltSpherical_j_n(i+1, kr) + (i+1) * AltSpherical_j_n(i, kr)/kr ; /* Derivative */
    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1) * AltSpherical_y_n(i, kr)/kr) ;

    a2 =  cos((2-i)*M_PI/2) ;
    b2 =  sin((2-i)*M_PI/2) ;
    c2 =  AltSpherical_j_n(i, kr) ;
    d2 = -AltSpherical_y_n(i, kr) ;

    den1 = c1*c1+d1*d1 ;
    den2 = c2*c2+d2*d2 ;

    V->Val[0] += cteRe1*(a1*c1+b1*d1)/den1 +  cteRe2*(a2*c2+b2*d2)/den2 ;
    V->Val[MAX_DIM] += cteRe1*(b1*c1-a1*d1)/den1 + cteRe2*(b2*c2-a2*d2)/den2 ;
  }

  V->Val[0] *= e0*cos(phi)/eta/kr ;
  V->Val[MAX_DIM] *= e0*cos(phi)/eta/kr  ;

  V->Type = SCALAR ;
}

/* Scattering by solid PEC sphere. Returns theta-component of RCS */

void F_RCS_SphTheta(F_ARG)
{
  double k0, r, kr, e0, rinf, krinf, theta, phi, a1 =0., b1=0., d1, den1, P, P0, dP ;
  double J, J_1, dJ, ctheta, stheta, cteRe1, cteRe2, a2, b2, d2, den2, lambda ;
  int i, n ;

  theta = atan2(sqrt( A->Val[0]* A->Val[0] + A->Val[1]*A->Val[1] ),  A->Val[2]);
  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  e0 = Fct->Para[1] ;
  r  = Fct->Para[2] ;
  rinf   = Fct->Para[3] ;

  kr = k0*r ;
  krinf = k0*rinf ;
  lambda = 2*M_PI/k0 ;

  n = 50 ;

  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == M_PI || theta == -M_PI ) theta -= 1e-7;

  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);

    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);
    dP = (i+1)*i* P0/stheta-(ctheta/(ctheta*ctheta-1))* P;

    J = AltSpherical_j_n(i, kr) ;
    J_1 = AltSpherical_j_n(i+1, kr) ;
    dJ = -J_1 + (i + 1) * J/kr ;

    cteRe1 = -(2*i+1) * stheta * dP * dJ /i/(i+1);
    cteRe2 = (2*i+1) * P * J /stheta/i/(i+1);

    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1) * AltSpherical_y_n(i, kr)/kr) ;

    d2 = -AltSpherical_y_n(i, kr) ;

    den1 = dJ*dJ+d1*d1 ;
    den2 = J*J+d2*d2 ;

    a1 += cteRe1 * dJ /den1 +  cteRe2 * J /den2 ;
    b1 += cteRe1*(-d1) /den1 + cteRe2*(-d2) /den2 ;
  }

  a2 = e0*cos(phi)*sin(krinf)/krinf ;
  b2 = e0*cos(phi)*cos(krinf)/krinf ;

  V->Val[0] = 10*log10( 4*M_PI*SQU(rinf/lambda)*(SQU(a1*a2-b1*b2) + SQU(a1*b2+a2*b1)) );
  V->Val[MAX_DIM] = 0. ;

  V->Type = SCALAR ;
}

/* Scattering by solid PEC sphere. Returns phi-component of surface current */

void F_JFIE_SphPhi(F_ARG)
{
  double k0, r, kr, e0, eta, theta, phi, a1, b1, c1, d1, den1, P, P0, dP ;
  double ctheta, stheta, cteRe1, cteRe2, a2, b2, c2, d2, den2 ;
  int i, n ;

  theta = atan2( sqrt( A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1] ), A->Val[2]);
  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  eta = Fct->Para[1] ;
  e0  = Fct->Para[2] ;
  r   = Fct->Para[3] ;

  kr = k0*r ;
  n = 50 ;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == M_PI || theta == -M_PI ) theta -= 1e-7;

  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);

    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);

    dP = (i+1)*i* P0/stheta - ctheta/(ctheta*ctheta-1)*P; /* Derivative */

    cteRe1 = (2*i+1) * P /i/(i+1)/stheta;
    cteRe2 = (2*i+1) * stheta * dP/i/(i+1);

    a1 = cos((1-i)*M_PI/2) ;
    b1 = sin((1-i)*M_PI/2) ;
    c1 = -AltSpherical_j_n(i+1, kr) + (i+1)*AltSpherical_j_n(i, kr)/kr ; /* Derivative */
    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1)*AltSpherical_y_n(i, kr)/kr) ;

    a2 =  cos((2-i)*M_PI/2) ;
    b2 =  sin((2-i)*M_PI/2) ;
    c2 =  AltSpherical_j_n(i, kr) ;
    d2 =  -AltSpherical_y_n(i, kr) ;

    den1 = c1*c1+d1*d1 ;
    den2 = c2*c2+d2*d2 ;

    V->Val[0] += cteRe1*(a1*c1+b1*d1)/den1 +  cteRe2*(a2*c2+b2*d2)/den2 ;
    V->Val[MAX_DIM] += cteRe1*(b1*c1-a1*d1)/den1 + cteRe2*(b2*c2-a2*d2)/den2 ;
  }

  V->Val[0] *= e0*sin(phi)/eta/kr ;
  V->Val[MAX_DIM] *= e0*sin(phi)/eta/kr  ;

  V->Type = SCALAR ;
}

/* Scattering by solid PEC sphere. Returns phi-component of RCS */

void F_RCS_SphPhi(F_ARG)
{
  double k0, r, kr, e0, rinf, krinf, theta, phi, a1 =0., b1=0., d1, den1, P, P0, dP ;
  double J, J_1, dJ, ctheta, stheta, cteRe1, cteRe2, a2, b2, d2, den2, lambda ;
  int i, n ;

  theta = atan2(sqrt( A->Val[0]* A->Val[0] + A->Val[1]*A->Val[1] ),  A->Val[2]);
  phi = M_PI/2 ;

  k0  = Fct->Para[0] ;
  e0 = Fct->Para[1] ;
  r  = Fct->Para[2] ;
  rinf   = Fct->Para[3] ;

  kr = k0*r ;
  krinf = k0*rinf ;
  lambda = 2*M_PI/k0 ;

  n = 50 ;

  if ( theta == 0. ) theta += 1e-7; /* Warning! This is an approximation. */
  if ( theta == M_PI || theta == -M_PI ) theta -= 1e-7;

  for (i = 1 ; i <= n ; i++ ){
    ctheta = cos(theta);
    stheta = sin(theta);

    P =  Legendre(i,1,ctheta);
    P0 = Legendre(i,0,ctheta);
    dP = (i+1)*i* P0/stheta-(ctheta/(ctheta*ctheta-1))* P;

    J = AltSpherical_j_n(i, kr) ;
    J_1 = AltSpherical_j_n(i+1, kr) ;
    dJ = -J_1 + (i + 1) * J/kr ;

    cteRe1 = -(2*i+1) * P * dJ /stheta/i/(i+1);
    cteRe2 = (2*i+1) * stheta * dP * J/i/(i+1);

    d1 = -(-AltSpherical_y_n(i+1, kr) + (i+1) * AltSpherical_y_n(i, kr)/kr) ;
    d2 = -AltSpherical_y_n(i, kr) ;

    den1 = dJ*dJ+d1*d1 ;
    den2 = J*J+d2*d2 ;

    a1 += cteRe1 * dJ /den1 +  cteRe2 * J /den2 ;
    b1 += cteRe1*(-d1) /den1 + cteRe2*(-d2) /den2 ;
  }

  a2 = e0*sin(phi)*sin(krinf)/krinf ;
  b2 = e0*sin(phi)*cos(krinf)/krinf ;

  V->Val[0] = 10*log10( 4*M_PI*SQU(rinf/lambda)*(SQU(a1*a2-b1*b2) + SQU(a1*b2+a2*b1)) );
  V->Val[MAX_DIM] = 0. ;

  V->Type = SCALAR ;
}

/* Scattering by a perfectly conducting sphere of radius a, under plane wave
   incidence pol*e^{ik \alpha\dot\r}, with alpha = (0,0,-1) and pol =
   (1,0,0). Returns the scattered electric field anywhere outside the sphere
   (From Balanis, Advanced Engineering Electromagnetics, sec 11.8, p. 660)

   Warning This is probably wring :-)

	*/


// diffraction onde plane par une sphere diectrique en -iwt
void F_ElectricFieldDielectricSphereMwt(F_ARG)
{
  double x = A->Val[0];
  double y = A->Val[1];
  double z = A->Val[2];
  double r = sqrt(x * x + y * y + z * z);
  double theta =  atan2(sqrt(x * x + y * y), z);
  double phi = atan2(y, x);


  double k = Fct->Para[0] ;
  double a = Fct->Para[1] ;
  double kr = k * r;
  double ka = k * a;

  double epsi = 2.25;
  double ki = k*sqrt(epsi);
  double Zi = 1.0 / sqrt(epsi);
  double kia = ki * a;
  double kir = ki * r;

  int ns = (int)k + 12;

  std::vector<std::complex<double> > Hnkr(ns + 1), Hnka(ns + 1), Hnkir(ns + 1), Hnkia(ns + 1);
  for (int n = 1 ; n <= ns ; n++){
    Hnkr[n] = std::complex<double>(AltSpherical_j_n(n, kr), AltSpherical_y_n(n, kr));
    Hnka[n] = std::complex<double>(AltSpherical_j_n(n, ka), AltSpherical_y_n(n, ka));
    Hnkia[n] = std::complex<double>(AltSpherical_j_n(n, kia), AltSpherical_y_n(n, kia));
    Hnkir[n] = std::complex<double>(AltSpherical_j_n(n, kir), AltSpherical_y_n(n, kir));
  }
  double ctheta = cos(theta);
  double stheta = sin(theta);

  std::complex<double> Er(0.,0), Etheta(0.,0), Ephi(0.,0), I(0, 1.);




  if( theta ==  0.) {

   if (r >= a ) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A1 = -n * (n + 1.) / 2.;

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> dHnkia = - Hnkia[n + 1] + (n + 1.) * Hnkia[n] / kia;

      std::complex<double> aln = (dHnka.real() * Hnkia[n].real() - Zi * dHnkia.real() * Hnka[n].real() ) /
                                 (Zi*dHnkia.real() * Hnka[n] -   dHnka * Hnkia[n].real()) ;
      std::complex<double> ben = (dHnkia.real() * Hnka[n].real() - Zi * dHnka.real() * Hnkia[n].real() ) /
                                 (Zi*Hnkia[n].real() * dHnka -  dHnkia.real() * Hnka[n]) ;

      std::complex<double> dn = aln*an;

      std::complex<double> dHnkr = - Hnkr[n + 1] + (n + 1.) * Hnkr[n] / kr;
      std::complex<double> d2Hnkr = Hnkr[n] / kr;
      std::complex<double> jnkr = Hnkr[n].real() / kr;

      double Pn1 = Legendre(n, 1, ctheta);

      Er     +=  (n * (n + 1.) * d2Hnkr * dn + n * (n + 1.) * jnkr  * an ) * Pn1;
      Etheta += an * (I * aln * dHnkr * A1 + ben * Hnkr[n] * A1 + I * dHnkr.real() * A1 +  Hnkr[n].real() * A1 );
      Ephi   += an * (I * aln * dHnkr * A1 + ben * Hnkr[n] * A1 + I * dHnkr.real() * A1 +  Hnkr[n].real() * A1 );
    }

    Er *=  I * cos(phi) / kr;
    Etheta *= (1. / kr) * (cos(phi));
    Ephi *= (-1. / kr) * (sin(phi));
  }
  else {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A1 = -n * (n + 1.) / 2.;

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> dHnkia = - Hnkia[n + 1] + (n + 1.) * Hnkia[n] / kia;
      std::complex<double> dHnkir = - Hnkir[n + 1] + (n + 1.) * Hnkir[n] / kir;

      std::complex<double> den = (ki * Zi / k) * (dHnka * Hnka[n].real() -  dHnka.real() * Hnka[n] ) /
                                 (Zi*Hnkia[n].real() * dHnka -  dHnkia.real() * Hnka[n]) ;
      std::complex<double> gan = (ki * Zi / k) * (dHnka.real() * Hnka[n] -  dHnka * Hnka[n].real() ) /
                                 (Zi*dHnkia.real() * Hnka[n] -   dHnka * Hnkia[n].real()) ;

      std::complex<double> dn = gan*an;

      std::complex<double> jnkir = Hnkir[n].real() / kir;

      double Pn1 = Legendre(n, 1, ctheta);

      Er     +=  (n * (n + 1.) * jnkir  * dn ) * Pn1;
      Etheta += an * (I * gan * dHnkir.real() * A1 +  den * Hnkir[n].real() * A1 );
      Ephi   += an * (I * gan * dHnkir.real() * A1 +  den * Hnkir[n].real() * A1 );
    }

    Er *=  I * cos(phi) / kir;
    Etheta *= (1. / kir) * (cos(phi));
    Ephi *= (-1. / kir) * (sin(phi));

   }
 }

  else if( theta ==  M_PI ) {

   if (r >= a ) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A2 = -pow(-1, n + 1) * n * (n + 1.) / 2.;
      double A3 = -pow(-1, n ) * n * (n + 1.) / 2.;

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> dHnkia = - Hnkia[n + 1] + (n + 1.) * Hnkia[n] / kia;

      std::complex<double> aln = (dHnka.real() * Hnkia[n].real() - Zi * dHnkia.real() * Hnka[n].real() ) /
                                 (Zi*dHnkia.real() * Hnka[n] -   dHnka * Hnkia[n].real()) ;
      std::complex<double> ben = (dHnkia.real() * Hnka[n].real() - Zi * dHnka.real() * Hnkia[n].real() ) /
                                 (Zi*Hnkia[n].real() * dHnka -  dHnkia.real() * Hnka[n]) ;

      std::complex<double> dn = aln*an;

      std::complex<double> dHnkr = - Hnkr[n + 1] + (n + 1.) * Hnkr[n] / kr;
      std::complex<double> d2Hnkr = Hnkr[n] / kr;
      std::complex<double> jnkr = Hnkr[n].real() / kr;

      double Pn1 = Legendre(n, 1, ctheta);

      Er     +=  (n * (n + 1.) * d2Hnkr * dn + n * (n + 1.) * jnkr  * an ) * Pn1;
      Etheta += an * (I * aln * dHnkr * A3 + ben * Hnkr[n] * A2 + I * dHnkr.real() * A3 +  Hnkr[n].real() * A2 );
      Ephi   += an * (I * aln * dHnkr * A2 + ben * Hnkr[n] * A3 + I * dHnkr.real() * A2 +  Hnkr[n].real() * A3 );
    }

    Er *=  I * cos(phi) / kr;
    Etheta *= (1. / kr) * (cos(phi));
    Ephi *= (-1. / kr) * (sin(phi));
  }
  else {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A2 = -pow(-1, n + 1) * n * (n + 1.) / 2.;
      double A3 = -pow(-1, n ) * n * (n + 1.) / 2.;

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> dHnkia = - Hnkia[n + 1] + (n + 1.) * Hnkia[n] / kia;
      std::complex<double> dHnkir = - Hnkir[n + 1] + (n + 1.) * Hnkir[n] / kir;

      std::complex<double> den = (ki * Zi / k) * (dHnka * Hnka[n].real() -  dHnka.real() * Hnka[n] ) /
                                 (Zi*Hnkia[n].real() * dHnka -  dHnkia.real() * Hnka[n]) ;
      std::complex<double> gan = (ki * Zi / k) * (dHnka.real() * Hnka[n] -  dHnka * Hnka[n].real() ) /
                                 (Zi*dHnkia.real() * Hnka[n] -   dHnka * Hnkia[n].real()) ;

      std::complex<double> dn = gan*an;

      std::complex<double> jnkir = Hnkir[n].real() / kir;

      double Pn1 = Legendre(n, 1, ctheta);

      Er     +=  (n * (n + 1.) * jnkir  * dn ) * Pn1;
      Etheta += an * (I * gan * dHnkir.real() * A3 +  den * Hnkir[n].real() * A2 );
      Ephi   += an * (I * gan * dHnkir.real() * A2 +  den * Hnkir[n].real() * A3 );
    }

    Er *=  I * cos(phi) / kir;
    Etheta *= (1. / kir) * (cos(phi));
    Ephi *= (-1. / kir) * (sin(phi));

   }
 }

  else {
   if (r >= a ) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));


      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> dHnkia = - Hnkia[n + 1] + (n + 1.) * Hnkia[n] / kia;

      std::complex<double> aln = (dHnka.real() * Hnkia[n].real() - Zi * dHnkia.real() * Hnka[n].real() ) /
                                 (Zi*dHnkia.real() * Hnka[n] -   dHnka * Hnkia[n].real()) ;
      std::complex<double> ben = (dHnkia.real() * Hnka[n].real() - Zi * dHnka.real() * Hnkia[n].real() ) /
                                 (Zi*Hnkia[n].real() * dHnka -  dHnkia.real() * Hnka[n]) ;

      std::complex<double> dn = aln*an;

      std::complex<double> dHnkr = - Hnkr[n + 1] + (n + 1.) * Hnkr[n] / kr;
      std::complex<double> d2Hnkr = Hnkr[n] / kr;
      std::complex<double> jnkr = Hnkr[n].real() / kr;

      double Pn1 = Legendre(n, 1, ctheta);
      double Pn11 = Legendre(n+1, 1, ctheta);
      double dPn1 =  n * Pn11   - (n + 1) * ctheta * Pn1 ;


      Er     +=  (n * (n + 1.) * d2Hnkr * dn + n * (n + 1.) * jnkr  * an ) * Pn1;
      Etheta += an * (I * aln * dHnkr * dPn1 + ben * Hnkr[n] *  Pn1 + I * dHnkr.real() * dPn1 +  Hnkr[n].real() * Pn1 );
      Ephi   += an * (I * aln * dHnkr * Pn1  + ben * Hnkr[n] * dPn1 + I * dHnkr.real() *  Pn1 +  Hnkr[n].real() * dPn1 );
    }

    Er *=  I * cos(phi) / kr;
    Etheta *= (1. / kr) * (cos(phi)/stheta);
    Ephi *= (-1. / kr) * (sin(phi)/stheta);

  }
  else {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> dHnkia = - Hnkia[n + 1] + (n + 1.) * Hnkia[n] / kia;
      std::complex<double> dHnkir = - Hnkir[n + 1] + (n + 1.) * Hnkir[n] / kir;

      std::complex<double> den = (ki * Zi / k) * (dHnka * Hnka[n].real() -  dHnka.real() * Hnka[n] ) /
                                 (Zi*Hnkia[n].real() * dHnka -  dHnkia.real() * Hnka[n]) ;
      std::complex<double> gan = (ki * Zi / k) * (dHnka.real() * Hnka[n] -  dHnka * Hnka[n].real() ) /
                                 (Zi*dHnkia.real() * Hnka[n] -   dHnka * Hnkia[n].real()) ;

      std::complex<double> dn = gan*an;

      std::complex<double> jnkir = Hnkir[n].real() / kir;

      double Pn1 = Legendre(n, 1, ctheta);
      double Pn11 = Legendre(n+1, 1, ctheta);
      double dPn1 =  n * Pn11   - (n + 1) * ctheta * Pn1 ;

      Er     +=  (n * (n + 1.) * jnkir  * dn ) * Pn1;
      Etheta += an * (I * gan * dHnkir.real() * dPn1 +  den * Hnkir[n].real() *  Pn1 );
      Ephi   += an * (I * gan * dHnkir.real() * Pn1  +  den * Hnkir[n].real() * dPn1 );
    }

    Er *=  I * cos(phi) / kir;
    Etheta *= (1. / kir) * (cos(phi)/stheta);
    Ephi *= (-1. / kir) * (sin(phi)/stheta);

   }
 }



  // r, theta, phi components
  std::complex<double> rtp[3] = {Er, Etheta, Ephi};

  double mat[3][3];
  // r basis vector
  mat[0][0] = sin(theta) * cos(phi) ;
  mat[0][1] = sin(theta) * sin(phi) ;
  mat[0][2] = cos(theta)  ;
  // theta basis vector
  mat[1][0] = cos(theta) * cos(phi) ;
  mat[1][1] = cos(theta) * sin(phi) ;
  mat[1][2] = - sin(theta) ;
  // phi basis vector
  mat[2][0] = - sin(phi) ;
  mat[2][1] = cos(phi);
  mat[2][2] = 0.;

  // x, y, z components
  std::complex<double> xyz[3] = {0., 0., 0.};
  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
      xyz[i] = xyz[i] + mat[j][i] * rtp[j];

  V->Val[0] = xyz[0].real();
  V->Val[1] = xyz[1].real();
  V->Val[2] = xyz[2].real();
  V->Val[MAX_DIM] = xyz[0].imag();
  V->Val[MAX_DIM+1] = xyz[1].imag();
  V->Val[MAX_DIM+2] = xyz[2].imag();

  V->Type = VECTOR ;
}

// diffraction onde plane par une sphere PEC en -iwt
void F_ElectricFieldPerfectlyConductingSphereMwt(F_ARG)
{
  double x = A->Val[0];
  double y = A->Val[1];
  double z = A->Val[2];
  double r = sqrt(x * x + y * y + z * z);
  double theta =  atan2(sqrt(x * x + y * y), z);
  double phi = atan2(y, x);


  double k = Fct->Para[0] ;
  double a = Fct->Para[1] ;
  double kr = k * r;
  double ka = k * a;

  int ns = (int)k + 12;

  std::vector<std::complex<double> > Hnkr(ns + 1), Hnka(ns + 1);
  for (int n = 1 ; n <= ns ; n++){
    Hnkr[n] = std::complex<double>(AltSpherical_j_n(n, kr), AltSpherical_y_n(n, kr));
    Hnka[n] = std::complex<double>(AltSpherical_j_n(n, ka), AltSpherical_y_n(n, ka));

  }
  double ctheta = cos(theta);
  double stheta = sin(theta);

  std::complex<double> Er(0.,0), Etheta(0.,0), Ephi(0.,0), I(0, 1.);

  if( theta ==  0.) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A1 = n * (n + 1.) / 2.;
      // PS: the following is correct (Hn(z) = z hn(z) is not a standard spherical
      // bessel function!)
      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn = - dHnka.real() / dHnka;
      std::complex<double> cn = - Hnka[n].real() / Hnka[n];
      std::complex<double> dn = bn*an;

      std::complex<double> dHnkr = - Hnkr[n + 1] + (n + 1.) * Hnkr[n] / kr;
      std::complex<double> d2Hnkr = Hnkr[n] / kr;

      double Pn1 = Legendre(n, 1, ctheta);
      Er     +=  n * (n + 1.) * d2Hnkr * Pn1 * dn;
      Etheta += an * (I * bn * dHnkr * A1 + cn * Hnkr[n] * A1);
      Ephi   += an * (I * bn * dHnkr * A1  + cn * Hnkr[n] * A1);
    }

    Er *=  I * cos(phi) / kr;
    Etheta *= (1. / kr) * (cos(phi));
    Ephi *= (-1. / kr) * (sin(phi));
  }
  else if( theta ==  M_PI ) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = std::pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A2 = pow(-1, n + 1) * n * (n + 1.) / 2.;
      double A3 = pow(-1, n ) * n * (n + 1.) / 2.;

      // PS: the following is correct (Hn(z) = z hn(z) is not a standard spherical
      // bessel function!)
      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn = - dHnka.real() / dHnka;
      std::complex<double> cn = - Hnka[n].real() / Hnka[n];
      std::complex<double> dn = bn*an;

      std::complex<double> dHnkr = - Hnkr[n + 1] + (n + 1.) * Hnkr[n] / kr;
      std::complex<double> d2Hnkr = Hnkr[n] / kr;

      double Pn1 = Legendre(n, 1, ctheta);
      Er     +=  n * (n + 1.) * d2Hnkr * Pn1 * dn;
      Etheta += an * (I * bn * dHnkr *  A3 + cn * Hnkr[n] * A2 );
      Ephi   += an * (I * bn * dHnkr * A2  + cn * Hnkr[n]  * A3);
    }

    Er *=  I * cos(phi) / kr;
    Etheta *= (1.0 / kr) * cos(phi);
    Ephi *= (-1.0 / kr) * sin(phi);
  }
  else {

    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = std::pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      // PS: the following is correct (Hn(z) = z hn(z) is not a standard spherical
      // bessel function!)
      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn = - dHnka.real() / dHnka;
      std::complex<double> cn = - Hnka[n].real() / Hnka[n];
      std::complex<double> dn = bn * an;

      std::complex<double> dHnkr = - Hnkr[n + 1] + (n + 1.) * Hnkr[n] / kr;
      std::complex<double> d2Hnkr = Hnkr[n] / kr;

      double Pn1 = Legendre(n, 1, ctheta);
      double Pn11 = Legendre(n+1, 1, ctheta);
      double dPn1 =  n * Pn11   - (n + 1) * ctheta * Pn1 ;
      Er     +=  n * (n + 1.) * d2Hnkr * Pn1 * dn;
      Etheta += an * (I * bn * dHnkr *  dPn1 + cn * Hnkr[n] * Pn1 );
      Ephi   += an * (I * bn * dHnkr * Pn1  + cn * Hnkr[n]  * dPn1);
    }

    Er *=  I * cos(phi) / kr;
    Etheta *= (1. / kr) * (cos(phi)/stheta);
    Ephi *= (-1. / kr) * (sin(phi)/stheta);
  }

  // r, theta, phi components
  std::complex<double> rtp[3] = {Er, Etheta, Ephi};

  double mat[3][3];
  // r basis vector
  mat[0][0] = sin(theta) * cos(phi) ;
  mat[0][1] = sin(theta) * sin(phi) ;
  mat[0][2] = cos(theta)  ;
  // theta basis vector
  mat[1][0] = cos(theta) * cos(phi) ;
  mat[1][1] = cos(theta) * sin(phi) ;
  mat[1][2] = - sin(theta) ;
  // phi basis vector
  mat[2][0] = - sin(phi) ;
  mat[2][1] = cos(phi);
  mat[2][2] = 0.;

  // x, y, z components
  std::complex<double> xyz[3] = {0., 0., 0.};
  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
      xyz[i] = xyz[i] + mat[j][i] * rtp[j];

  V->Val[0] = xyz[0].real();
  V->Val[1] = xyz[1].real();
  V->Val[2] = xyz[2].real();
  V->Val[MAX_DIM] = xyz[0].imag();
  V->Val[MAX_DIM+1] = xyz[1].imag();
  V->Val[MAX_DIM+2] = xyz[2].imag();

  V->Type = VECTOR ;
}

// calcul la solution exact de OSRC sur la sphere
void F_ExactOsrcSolutionPerfectlyConductingSphereMwt(F_ARG)
{
  double x = A->Val[0];
  double y = A->Val[1];
  double z = A->Val[2];
  double theta =  atan2(sqrt(x * x + y * y), z);
  double phi = atan2(y, x);

  double k  = Fct->Para[0] ;
  double a  = Fct->Para[1] ;

  double ka = k * a;

  int ns = (int)k + 10;

  std::vector<std::complex<double> > Hnka(ns + 1);
  for (int n = 1 ; n <= ns ; n++){
    Hnka[n] = std::complex<double>(AltSpherical_j_n(n, ka), AltSpherical_y_n(n, ka));

  }
  double ctheta = cos(theta);
  double stheta = sin(theta);

  std::complex<double> Er(0.,0), Etheta(0.,0), Ephi(0.,0), I(0, 1.);

  if( theta == 0.) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A1 = n * (n + 1.0) / 2.;
      double mu_n = 1 - n * (n + 1.0) / (k * k);

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn = dHnka.real() ;
      std::complex<double> cn = Hnka[n].real();


      if ( k * k >= n * (n + 1) ) {
        Etheta += an * (-I * cn * A1 * sqrt(mu_n) + bn * A1 / sqrt(mu_n));
        Ephi   += an * ( I * cn * A1 * sqrt(mu_n) - bn * A1 / sqrt(mu_n)); }
      else{
        Etheta += an * (-I * cn * A1 * I * sqrt(-mu_n) - I * bn * A1 / sqrt(-mu_n));
        Ephi   += an * ( I * cn * A1 * I * sqrt(-mu_n) + I * bn * A1 / sqrt(-mu_n));
      }
    }

    Etheta *= cos(phi);
    Ephi *=  sin(phi);
  }
  else if( theta == M_PI) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = std::pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));
      double A2 = pow(-1.0, n + 1.0) * n * (n + 1.) / 2.;
      double A3 = pow(-1.0, n + 0.0) * n * (n + 1.) / 2.;
      double mu_n = 1 - n * (n + 1.0) / (k * k);

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn =  dHnka.real();
      std::complex<double> cn =  Hnka[n].real();

      if ( k * k >= n * (n+1)) {
        Etheta += an * (-I * cn * A2 * sqrt(mu_n) + bn * A3 / sqrt(mu_n));
        Ephi   += an * ( I * cn * A3 * sqrt(mu_n) - bn * A2 / sqrt(mu_n));}
      else {
        Etheta += an * (-I * cn * A2 * I * sqrt(-mu_n) - I * bn * A3 / sqrt(-mu_n));
        Ephi   += an * ( I * cn * A3 * I * sqrt(-mu_n) + I * bn * A2 / sqrt(-mu_n));
      }

    }

    Etheta *= cos(phi);
    Ephi *=  sin(phi);
  }
  else{
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = std::pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn =  dHnka.real();
      std::complex<double> cn =  Hnka[n].real();

      double mu_n = 1 - n * (n + 1.0) / (k * k);
      double Pn1 = Legendre(n, 1, ctheta);
      double Pn11 = Legendre(n+1, 1, ctheta);
      double dPn1 =  n * Pn11   - (n + 1) * ctheta * Pn1 ;

      if ( k * k >= n * (n+1)) {
        Etheta += an * (-I * cn * Pn1 * sqrt(mu_n) + bn * dPn1 / sqrt(mu_n));
        Ephi  += an * (  I * cn * dPn1 * sqrt(mu_n)  - bn * Pn1 / sqrt(mu_n));}
      else {
        Etheta += an * (-I * cn * Pn1 * I * sqrt(-mu_n) -I * bn * dPn1 / sqrt(-mu_n));
        Ephi  += an * (  I * cn * dPn1 * I * sqrt(-mu_n)  + I * bn * Pn1 / sqrt(-mu_n));
      }

    }

    Etheta *=  cos(phi)/stheta;
    Ephi *=  sin(phi) /stheta;
  }

  Etheta *=  -I / k;
  Ephi *=  -I / k;

  // r, theta, phi components
  std::complex<double> rtp[3] = {Er, Etheta, Ephi};

  double mat[3][3];
  // r basis vector
  mat[0][0] = sin(theta) * cos(phi) ;
  mat[0][1] = sin(theta) * sin(phi) ;
  mat[0][2] = cos(theta)  ;
  // theta basis vector
  mat[1][0] = cos(theta) * cos(phi) ;
  mat[1][1] = cos(theta) * sin(phi) ;
  mat[1][2] = - sin(theta) ;
  // phi basis vector
  mat[2][0] = - sin(phi) ;
  mat[2][1] = cos(phi);
  mat[2][2] = 0.;

  // x, y, z components
  std::complex<double> xyz[3] = {0., 0., 0.};
  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
      xyz[i] = xyz[i] + mat[j][i] * rtp[j];

  V->Val[0] = xyz[0].real();
  V->Val[1] = xyz[1].real();
  V->Val[2] = xyz[2].real();
  V->Val[MAX_DIM] = xyz[0].imag();
  V->Val[MAX_DIM+1] = xyz[1].imag();
  V->Val[MAX_DIM+2] = xyz[2].imag();

  V->Type = VECTOR ;
}

// returne n /\ H en -iwt
void F_CurrentPerfectlyConductingSphereMwt(F_ARG)
{
  double x = A->Val[0];
  double y = A->Val[1];
  double z = A->Val[2];

  double theta =  atan2(sqrt(x * x + y * y), z);
  double phi = atan2(y, x);

  double k  = Fct->Para[0] ;
  double a  = Fct->Para[1] ;
  double Z0 = Fct->Para[2] ;

  double ka = k * a;

  int ns = (int)k + 10;

  std::vector<std::complex<double> > Hnka(ns + 1);
  for (int n = 1 ; n <= ns ; n++){
    Hnka[n] = std::complex<double>(AltSpherical_j_n(n, ka), AltSpherical_y_n(n, ka));

  }
  double ctheta = cos(theta);
  double stheta = sin(theta);

  std::complex<double> Er(0.,0), Etheta(0.,0), Ephi(0.,0), I(0, 1.);

  if( theta == 0.) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      double A1 = n * (n + 1.0) / 2.;

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn = - dHnka.real() / dHnka;
      std::complex<double> cn = - Hnka[n].real() / Hnka[n];


      Etheta += an * (I * cn * dHnka * A1 + bn * Hnka[n] * A1);
      Ephi   += an * (I * cn * dHnka * A1  + bn * Hnka[n] * A1);
    }

    Etheta *=  (-1. / (Z0*ka)) * (sin(phi));
    Ephi *= (-1. / (Z0*ka)) * (cos(phi));
  }
  else if( theta == M_PI) {
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = std::pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));
      double A2 = pow(-1.0, n + 1.0) * n * (n + 1.) / 2.;
      double A3 = pow(-1.0, n + 0.0) * n * (n + 1.) / 2.;

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn = - dHnka.real() / dHnka;
      std::complex<double> cn = - Hnka[n].real() / Hnka[n];


      Etheta += an * (I * cn * dHnka * A3 + bn * Hnka[n] * A2);
      Ephi   += an * (I * cn * dHnka * A2 + bn * Hnka[n] * A3);
    }

    Etheta *=  (-1.0 / (Z0*ka)) * sin(phi);
    Ephi *=   (-1.0 / (Z0*ka)) * cos(phi);
  }
  else{
    for (int n = 1 ; n < ns ; n++){
      std::complex<double> an = std::pow(-I, n) * (2. * n + 1.) / (n * (n + 1.));

      std::complex<double> dHnka = - Hnka[n + 1] + (n + 1.) * Hnka[n] / ka;
      std::complex<double> bn = - dHnka.real() / dHnka;
      std::complex<double> cn = - Hnka[n].real() / Hnka[n];

      double Pn1 = Legendre(n, 1, ctheta);
      double Pn11 = Legendre(n+1, 1, ctheta);
      double dPn1 =  n * Pn11   - (n + 1) * ctheta * Pn1 ;

      Etheta += an * (I * cn * dHnka *  dPn1 + bn * Hnka[n] * Pn1 );
      Ephi  += an * (I * cn * dHnka * Pn1  + bn * Hnka[n]  * dPn1);
    }

    Etheta *=   (-1. / (Z0*ka)) * (sin(phi)/stheta);
    Ephi *=  (-1. / (Z0*ka)) * (cos(phi) /stheta);
  }

  // r, theta, phi components
  std::complex<double> rtp[3] = {Er, -Ephi, Etheta};

  double mat[3][3];
  // r basis vector
  mat[0][0] = sin(theta) * cos(phi) ;
  mat[0][1] = sin(theta) * sin(phi) ;
  mat[0][2] = cos(theta)  ;
  // theta basis vector
  mat[1][0] = cos(theta) * cos(phi) ;
  mat[1][1] = cos(theta) * sin(phi) ;
  mat[1][2] = - sin(theta) ;
  // phi basis vector
  mat[2][0] = - sin(phi) ;
  mat[2][1] = cos(phi);
  mat[2][2] = 0.;

  // x, y, z components
  std::complex<double> xyz[3] = {0., 0., 0.};
  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
      xyz[i] = xyz[i] + mat[j][i] * rtp[j];

  V->Val[0] = xyz[0].real();
  V->Val[1] = xyz[1].real();
  V->Val[2] = xyz[2].real();
  V->Val[MAX_DIM] = xyz[0].imag();
  V->Val[MAX_DIM+1] = xyz[1].imag();
  V->Val[MAX_DIM+2] = xyz[2].imag();

  V->Type = VECTOR ;
}

// version avec +iwt
/* Scattering by a perfectly conducting sphere of radius R, under plane wave
   incidence pol*e^{ik \alpha\dot\r}, with alpha = (0,0,-1) and pol =
   (1,0,0). Returns surface current (From Harrington, Time-harmonic
   electromagnetic fields, p. 294) */

void F_CurrentPerfectlyConductingSphere(F_ARG)
{
  cplx I = {0., 1.}, tmp, *hn, coef1, coef2, an, jtheta, jphi, rtp[3], xyz[3];
  double k, R, r, kR, theta, phi, Z0, ctheta, stheta, Pn0, Pn1, dPn1, mat[3][3], x, y, z ;
  int n, ns, i, j ;

  x = A->Val[0];
  y = A->Val[1];
  z = A->Val[2];
  r = sqrt(x*x+y*y+z*z);
  theta = atan2(sqrt(x*x+y*y), z);
  phi = atan2(y,x);

  // warning: approximation
  if (theta == 0. ) theta += 1e-6;
  if (theta == M_PI || theta == -M_PI) theta -= 1e-6;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  Z0 = Fct->Para[2] ; // impedance of vacuum = sqrt(mu_0/eps_0) \approx 120*pi
  kR = k * R;

  // test position to check if on sphere
  if(fabs(r - R) > 1.e-3) Message::Error("Evaluation point not on sphere");

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  hn = (cplx*)Malloc((ns + 1)*sizeof(cplx));

  for (n = 0 ; n < ns + 1 ; n++){
    hn[n].r = AltSpherical_j_n(n, kR);
    hn[n].i = - AltSpherical_y_n(n, kR);
  }

  ctheta = cos(theta);
  stheta = sin(theta);

  jtheta.r = 0;
  jtheta.i = 0;
  jphi.r = 0;
  jphi.i = 0;

  for (n = 1 ; n < ns ; n++){
    // 1 / \hat{H}_n^2 (ka)
    coef1 = Cdivr( 1.0 , hn[n] );
    // 1 / \hat{H}_n^2' (ka)
    coef2 = Cdivr( 1.0 , Csub( Cprodr( (double)(n+1) / kR , hn[n]) , hn[n+1] ) );

    Pn0 = Legendre(n, 0, ctheta);
    Pn1 = Legendre(n, 1, ctheta);

    dPn1 = (n+1)*n* Pn0/stheta - (ctheta/(ctheta*ctheta-1))* Pn1;
    an = Cprodr( (2.*n+1.) / (double)(n * (n+1.)) , Cpow(I, -n) );

    tmp = Cprod( an , Csum( Cprodr( stheta * dPn1 , coef2 ) ,
			    Cprodr( Pn1 / stheta , Cprod( I ,  coef1 )) ) );
    jtheta = Csum( jtheta, tmp );

    tmp = Cprod( an , Csub( Cprodr( Pn1 / stheta , coef2 ) ,
			    Cprodr( dPn1 * stheta , Cdiv(coef1 , I)) ) );
    jphi = Csum( jphi, tmp );
  }

  Free(hn);

  tmp = Cprodr( cos(phi)/(kR*Z0), I);
  jtheta = Cprod( jtheta, tmp );

  tmp = Cprodr( sin(phi)/(kR*Z0), I );
  jphi = Cprod( jphi, tmp );

  // r, theta, phi components
  rtp[0].r = 0;
  rtp[0].i = 0;
  rtp[1] = jtheta;
  rtp[2] = jphi;

  // r basis vector
  mat[0][0] = sin(theta) * cos(phi) ;
  mat[0][1] = sin(theta) * sin(phi) ;
  mat[0][2] = cos(theta)  ;
  // theta basis vector
  mat[1][0] = cos(theta) * cos(phi) ;
  mat[1][1] = cos(theta) * sin(phi) ;
  mat[1][2] = - sin(theta) ;
  // phi basis vector
  mat[2][0] = - sin(phi) ;
  mat[2][1] = cos(phi);
  mat[2][2] = 0.;

  // x, y, z components
  for(i = 0; i < 3; i++){
    xyz[i].r = 0;
    xyz[i].i = 0;
    for(j = 0; j < 3; j++)
      xyz[i] = Csum( xyz[i] , Cprodr(mat[j][i] , rtp[j]) );
  }

  V->Val[0] = xyz[0].r;
  V->Val[1] = xyz[1].r;
  V->Val[2] = xyz[2].r;
  V->Val[MAX_DIM] = xyz[0].i;
  V->Val[MAX_DIM+1] = xyz[1].i;
  V->Val[MAX_DIM+2] = xyz[2].i;

  V->Type = VECTOR ;
}

/* Scattering by an acoustically soft sphere (exterior Dirichlet problem) of
   radius R, under plane wave incidence e^{ikx}. Returns scattered field
   outside. (Colton and Kress, Inverse Acoustic..., p 51, eq. 3.29) */

void  F_AcousticFieldSoftSphere(F_ARG)
{
  cplx I = {0.,1.}, hnkR, hnkr, tmp;
  double k, R, r, kr, kR, theta, fact ;
  int n, ns ;

  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1] + A->Val[2]*A->Val[2]) ;
  theta = acos(A->Val[0] / r); // angle between position vector and (1,0,0)

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  for (n = 0 ; n < ns ; n++){
    hnkR.r = Spherical_j_n(n, kR);
    hnkR.i = Spherical_y_n(n, kR);

    hnkr.r = Spherical_j_n(n, kr);
    hnkr.i = Spherical_y_n(n, kr);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr(hnkR.r, hnkr) ) , hnkR );

    fact = (2*n+1) * Legendre(n, 0, cos(theta));

    V->Val[0] +=  fact * tmp.r;
    V->Val[MAX_DIM] += fact * tmp.i;
  }

  V->Val[0] *= -1;
  V->Val[MAX_DIM] *= -1;

  V->Type = SCALAR ;
}

cplx Dhn_Spherical(cplx *hntab, int n, double x)
{
  return Csub( Cprodr( (double)n/x, hntab[n] ) , hntab[n+1] );
}

/* Scattering by an acoustically soft sphere (exterior Dirichlet problem) of
   radius R, under plane wave incidence e^{ikx}. Returns radial derivative of
   scattered field outside */

void  F_DrAcousticFieldSoftSphere(F_ARG)
{
  cplx I = {0.,1.}, hnkR, tmp, *hnkrtab;
  double k, R, r, kr, kR, theta, fact ;
  int n, ns ;

  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1] + A->Val[2]*A->Val[2]) ;
  theta = acos(A->Val[0] / r); // angle between position vector and (1,0,0)

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  hnkrtab = (cplx*)Malloc((ns + 1)*sizeof(cplx));

  for (n = 0 ; n < ns + 1 ; n++){
    hnkrtab[n].r = Spherical_j_n(n, kr);
    hnkrtab[n].i = Spherical_y_n(n, kr);
  }

  for (n = 0 ; n < ns ; n++){
    hnkR.r = Spherical_j_n(n, kR);
    hnkR.i = Spherical_y_n(n, kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr(hnkR.r * k, Dhn_Spherical(hnkrtab, n, kr)) ) ,
		hnkR );

    fact = (2*n+1) * Legendre(n, 0, cos(theta));

    V->Val[0] +=  fact * tmp.r;
    V->Val[MAX_DIM] += fact * tmp.i;
  }

  Free(hnkrtab);

  V->Val[0] *= -1;
  V->Val[MAX_DIM] *= -1;

  V->Type = SCALAR ;
}

/* Scattering by an acoustically soft sphere (exterior Dirichlet problem) of
   radius R, under plane wave incidence e^{ikx}. Returns RCS.  (Colton and
   Kress, Inverse Acoustic..., p 52, eq. 3.30) */

void  F_RCSSoftSphere(F_ARG)
{
  cplx I = {0.,1.}, hnkR, tmp, res;
  double k, R, r, kR, theta, fact, val ;
  int n, ns ;

  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1] + A->Val[2]*A->Val[2]) ;
  theta = acos(A->Val[0] / r); // angle between position vector and (1,0,0)

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kR = k*R;

  res.r = 0.;
  res.i = 0. ;

  ns = (int)k + 10;

  for (n = 0 ; n < ns ; n++){
    hnkR.r = Spherical_j_n(n, kR);
    hnkR.i = Spherical_y_n(n, kR);

    tmp = Cdivr( hnkR.r, hnkR );

    fact = (2*n+1) * Legendre(n, 0, cos(theta));

    res.r += fact * tmp.r;
    res.i += fact * tmp.i;
  }

  val = Cmodu( Cprodr( 1./k , Cprod(res, I) ) );
  val *= val;
  val *= 4. * M_PI;
  val = 10. * log10(val);

  V->Val[0] = val;
  V->Val[MAX_DIM] = 0.;

  V->Type = SCALAR ;
}

/* Scattering by an acoustically hard sphere (exterior Neumann problem) of
   radius R, under plane wave incidence e^{ikx}. Returns scattered field
   outside */

void  F_AcousticFieldHardSphere(F_ARG)
{
  cplx I = {0.,1.}, hnkr, tmp, DhnkR, *hnkRtab;
  double k, R, r, kr, kR, theta, fact ;
  int n, ns ;

  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1] + A->Val[2]*A->Val[2]) ;
  theta = acos(A->Val[0] / r); // angle between position vector and (1,0,0)

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  hnkRtab = (cplx*)Malloc((ns + 1)*sizeof(cplx));

  for (n = 0 ; n < ns + 1 ; n++){
    hnkRtab[n].r = Spherical_j_n(n, kR);
    hnkRtab[n].i = Spherical_y_n(n, kR);
  }

  for (n = 0 ; n < ns ; n++){
    hnkr.r = Spherical_j_n(n, kr);
    hnkr.i = Spherical_y_n(n, kr);

    DhnkR = Dhn_Spherical(hnkRtab, n, kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr(DhnkR.r, hnkr) ) , DhnkR );

    fact = (2*n+1) * Legendre(n, 0, cos(theta));

    V->Val[0] +=  fact * tmp.r;
    V->Val[MAX_DIM] += fact * tmp.i;
  }

  Free(hnkRtab);

  V->Val[0] *= -1;
  V->Val[MAX_DIM] *= -1;

  V->Type = SCALAR ;
}

/* Scattering by an acoustically hard sphere (exterior Dirichlet problem) of
   radius R, under plane wave incidence e^{ikx}. Returns RCS */

void  F_RCSHardSphere(F_ARG)
{
  cplx I = {0.,1.}, DhnkR, tmp, res, *hnkRtab;
  double k, R, r, kR, theta, fact, val ;
  int n, ns ;

  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1] + A->Val[2]*A->Val[2]) ;
  theta = acos(A->Val[0] / r); // angle between position vector and (1,0,0)

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kR = k*R;

  res.r = 0.;
  res.i = 0. ;

  ns = (int)k + 10;

  hnkRtab = (cplx*)Malloc((ns + 1)*sizeof(cplx));

  for (n = 0 ; n < ns + 1 ; n++){
    hnkRtab[n].r = Spherical_j_n(n, kR);
    hnkRtab[n].i = Spherical_y_n(n, kR);
  }

  for (n = 0 ; n < ns ; n++){
    DhnkR = Dhn_Spherical(hnkRtab, n, kR);

    tmp = Cdivr( DhnkR.r, DhnkR );

    fact = (2*n+1) * Legendre(n, 0, cos(theta));

    res.r += fact * tmp.r;
    res.i += fact * tmp.i;
  }

  Free(hnkRtab);

  val = Cmodu( Cprodr( 1./k , Cprod(res, I) ) );
  val *= val;
  val *= 4. * M_PI;
  val = 10. * log10(val);

  V->Val[0] = val;
  V->Val[MAX_DIM] = 0.;

  V->Type = SCALAR ;
}

/* ------------------------------------------------------------------------ */
/*  Exact solutions for cylinders                                           */
/* ------------------------------------------------------------------------ */

/* Scattering by solid PEC cylinder, incident wave z-polarized.
   Returns current on cylinder surface */

void F_JFIE_ZPolCyl(F_ARG)
{
  double k0, r, kr, e0, eta, phi, a, b, c, d, den ;
  int i, ns ;

  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  eta = Fct->Para[1] ;
  e0  = Fct->Para[2] ;
  r   = Fct->Para[3] ;

  kr = k0*r ;
  ns = 100 ;


  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  for (i = -ns ; i <= ns ; i++ ){
    a = cos(i*(phi-(M_PI/2))) ;
    b = sin(i*(phi-(M_PI/2))) ;
    c = jn(i,kr) ;
    d =  -yn(i,kr) ;

    den = c*c+d*d ;

    V->Val[0] += (a*c+b*d)/den ;
    V->Val[MAX_DIM] += (b*c-a*d)/den ;
  }

  V->Val[0] *= -2*e0/kr/eta/M_PI ;
  V->Val[MAX_DIM] *= -2*e0/kr/eta/M_PI ;

  V->Type = SCALAR ;
}

/* Scattering by solid PEC cylinder, incident wave z-polarized.
   Returns RCS */

void F_RCS_ZPolCyl(F_ARG)
{
  double k0, r, kr, rinf, krinf, phi, a, b, d,den ;
  double lambda, bjn, rr = 0., ri = 0. ;
  int i, ns ;

  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  r  = Fct->Para[1] ;
  rinf   = Fct->Para[2] ;

  kr = k0*r ;
  krinf = k0*rinf ;
  lambda = 2*M_PI/k0 ;

  ns = 100 ;

  for (i = -ns ; i <= ns ; i++ ){
    bjn = jn(i,kr) ;
    a = bjn * cos(i*phi) ;
    b = bjn * sin(i*phi) ;
    d =  -yn(i,kr) ;

    den = bjn*bjn+d*d ;

    rr += (a*bjn+b*d)/den ;
    ri += (b*bjn-a*d)/den ;
  }

  V->Val[0] =  10*log10( 4*M_PI*SQU(rinf/lambda) * 2/krinf/M_PI *(SQU(rr)+SQU(ri)) ) ;
  V->Val[MAX_DIM] = 0. ;

  V->Type = SCALAR ;
}

/* Scattering by solid PEC cylinder, incident wave polarized
   transversely to z.  Returns current on cylinder surface */

void F_JFIE_TransZPolCyl(F_ARG)
{
  double k0, r, kr, h0, phi, a, b, c, d, den ;
  int i, ns ;

  phi = atan2( A->Val[1], A->Val[0] ) ;

  k0  = Fct->Para[0] ;
  h0  = Fct->Para[1] ;
  r   = Fct->Para[2] ;

  kr = k0*r ;
  ns = 100 ;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  for (i = -ns ; i <= ns ; i++ ){
    a = cos(M_PI/2 +i*(phi-(M_PI/2))) ;
    b = sin(M_PI/2 +i*(phi-(M_PI/2))) ;
    c = -jn(i+1,kr) + (i/kr)*jn(i,kr) ;
    d =  yn(i+1,kr) - (i/kr)*yn(i,kr) ;

    den = c*c+d*d ;

    V->Val[0] += (a*c+b*d)/den ;
    V->Val[MAX_DIM] += (b*c-a*d)/den ;
  }

  V->Val[0] *= 2*h0/kr/M_PI ;
  V->Val[MAX_DIM] *= 2*h0/kr/M_PI ;

  V->Type = SCALAR ;
}

/* Scattering by acoustically soft circular cylinder of radius R,
   under plane wave incidence e^{ikx}. Returns scatterered field
   outside */

void F_AcousticFieldSoftCylinder(F_ARG)
{
  cplx I = {0.,1.}, HnkR, Hnkr, tmp;
  double k, R, r, kr, kR, theta, cost ;
  int n, ns ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  for (n = 0 ; n < ns ; n++){

    HnkR.r = jn(n,kR);
    HnkR.i = yn(n,kR);

    Hnkr.r = jn(n,kr);
    Hnkr.i = yn(n,kr);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( HnkR.r, Hnkr) ) , HnkR );

    cost = cos(n*theta);

    V->Val[0] +=  cost * tmp.r * (!n ? 0.5 : 1.);
    V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
  }

  V->Val[0] *= -2;
  V->Val[MAX_DIM] *= -2;

  V->Type = SCALAR ;
}

cplx DHn(cplx *Hnkrtab, int n, double x)
{
  if(n == 0){
    return Cneg(Hnkrtab[1]);
  }
  else{
    return Csub( Hnkrtab[n-1] , Cprodr((double)n/x, Hnkrtab[n]) );
  }
}

/* Scattering by acoustically soft circular cylinder of radius R0,
   under plane wave incidence e^{ikx}, with artificial boundary
   condition at R1. Returns exact solution of the (interior!) problem
   between R0 and R1. */

void F_AcousticFieldSoftCylinderABC(F_ARG)
{
  cplx I = {0.,1.}, tmp, alpha1, alpha2, delta, am, bm, lambda, coef;
  cplx H1nkR0, *H1nkR1tab, *H2nkR1tab, H1nkr, alphaBT, betaBT, keps = {0., 0.};

  double k, R0, R1, r, kr, kR0, kR1, theta, cost, sint, kappa ;
  int n, ns, ABCtype, SingleMode ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0] * A->Val[0] + A->Val[1] * A->Val[1]) ;

  k = Fct->Para[0] ;
  R0 = Fct->Para[1] ;
  R1 = Fct->Para[2] ;
  ABCtype = (int)Fct->Para[3] ;
  SingleMode = (int)Fct->Para[4] ;
  kr = k * r;
  kR0 = k * R0;
  kR1 = k * R1;

  if(ABCtype == 1){  /* Sommerfeld */
    lambda = Cprodr(-k, I);
  }
  else if(ABCtype == 2){ /* Bayliss-Turkel */
    /*
      alphaBT[] = 1/(2*R1) - I[]/(8*k*R1^2*(1+I[]/(k*R1)));
      betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*R1)));
    */
    coef.r = 2*k;
    coef.i = 2/R1;
    alphaBT = Csubr( 1/(2*R1) , Cdiv(I , Cprodr(4*R1*R1 , coef) ) );
    betaBT = Cdiv(I , coef);
  }
  else if(ABCtype == 3){ /* Pade */
    kappa = 1./R1; /* for circular boundary only! */
    keps.r = k;
    keps.i = 0.4 * pow(k, 1./3.) * pow(kappa, 2./3.);
  }
  else{
    Message::Error("Unknown ABC type");
  }

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  H1nkR1tab = (cplx*)Malloc(ns * sizeof(cplx));
  for (n = 0 ; n < ns ; n++){
    H1nkR1tab[n].r = jn(n, kR1);
    H1nkR1tab[n].i = yn(n, kR1);
  }

  H2nkR1tab = (cplx*)Malloc(ns * sizeof(cplx));
  for (n = 0 ; n < ns ; n++){
    H2nkR1tab[n] = Cconj(H1nkR1tab[n]);
  }

  for (n = 0 ; n < ns ; n++){
    if(SingleMode >= 0 && SingleMode != n) continue;

    H1nkR0.r = jn(n, kR0);
    H1nkR0.i = yn(n, kR0);

    H1nkr.r = jn(n,kr);
    H1nkr.i = yn(n,kr);

    if(ABCtype == 2){
      lambda = Csum( Csum( Cprodr(-k, I) , alphaBT ) ,
		     Cprodr( n*n/(R1*R1) , betaBT ) );
    }
    else if(ABCtype == 3){
      lambda = Cprod( Cprodr(-k, I) ,
		      Cpow( Csubr(1 , Cdivr(n*n/(R1*R1) , Cprod(keps , keps))) , 0.5));

    }

    alpha1 = Csum( Cprodr(k, DHn(H1nkR1tab, n, kR1)) ,
		   Cprod(lambda, H1nkR1tab[n]) );
    alpha2 = Csum( Cprodr(k, DHn(H2nkR1tab, n, kR1)) ,
		   Cprod(lambda, H2nkR1tab[n]) );
    delta = Csub( Cprod( alpha1 , Cconj(H1nkR0) ) ,
		  Cprod( alpha2 , H1nkR0 ) );

    if(Cmodu(delta) < 1.e-6) break;

    am = Cdiv( Cprodr(H1nkR0.r, alpha2) ,
	       delta );
    bm = Cdiv( Cprodr(-H1nkR0.r, alpha1) ,
	       delta );

    if(SingleMode >= 0 && SingleMode == n){
      tmp = Csum( Cprod( am , H1nkr ) , Cprod( bm , Cconj(H1nkr) ) );
      cost = cos(n * theta);
      sint = sin(n * theta);
      V->Val[0] += cost * tmp.r - sint * tmp.i;
      V->Val[MAX_DIM] += cost * tmp.i + sint * tmp.r;
    }
    else{
      tmp = Cprod( Cpow(I,n) , Csum( Cprod( am , H1nkr ) ,
				     Cprod( bm , Cconj(H1nkr) ) ) );
      cost = cos(n * theta);
      V->Val[0] += cost * tmp.r * (!n ? 0.5 : 1.);
      V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
    }
  }

  Free(H1nkR1tab);
  Free(H2nkR1tab);

  if(SingleMode < 0){
    V->Val[0] *= 2;
    V->Val[MAX_DIM] *= 2;
  }

  V->Type = SCALAR ;
}

/* Scattering by acoustically soft circular cylinder of radius R,
   under plane wave incidence e^{ikx}. Returns radial derivative of
   the solution of the Helmholtz equation outside */

void F_DrAcousticFieldSoftCylinder(F_ARG)
{
  cplx I = {0.,1.}, HnkR, tmp, *Hnkrtab;
  double k, R, r, kr, kR, theta, cost ;
  int n, ns ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  Hnkrtab = (cplx*)Malloc(ns*sizeof(cplx));

  for (n = 0 ; n < ns ; n++){
    Hnkrtab[n].r = jn(n,kr);
    Hnkrtab[n].i = yn(n,kr);
  }

  for (n = 0 ; n < ns ; n++){
    HnkR.r = jn(n,kR);
    HnkR.i = yn(n,kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( HnkR.r, DHn(Hnkrtab, n, kr) ) ) , HnkR );

    cost = cos(n*theta);

    V->Val[0] +=  cost * tmp.r * (!n ? 0.5 : 1.);
    V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
  }

  Free(Hnkrtab);

  V->Val[0] *= -2 * k;
  V->Val[MAX_DIM] *= -2 * k;

  V->Type = SCALAR ;
}

/* Scattering by acoustically soft circular cylinder of radius R,
   under plane wave incidence e^{ikx}. Returns RCS */

void F_RCSSoftCylinder(F_ARG)
{
  cplx I = {0.,1.}, HnkR, Hnkr, res, tmp;
  double k, R, r, kR, theta, cost, val ;
  int n, ns ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kR = k*R;

  res.r = 0.;
  res.i = 0. ;

  ns = (int)k + 10;

  for (n = 0 ; n < ns ; n++){

    HnkR.r = jn(n,kR);
    HnkR.i = yn(n,kR);

    /* leaving r in following asymptotic formula for clarity (see
       Colton and Kress, Inverse Acoustic..., p. 65, eq. 3.59) */
    Hnkr.r = cos(k*r - n*M_PI/2. - M_PI/4.) / sqrt(k*r) * sqrt(2./M_PI);
    Hnkr.i = sin(k*r - n*M_PI/2. - M_PI/4.) / sqrt(k*r) * sqrt(2./M_PI);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( HnkR.r, Hnkr) ) , HnkR );

    cost = cos(n*theta);

    res.r += cost * tmp.r * (!n ? 0.5 : 1.);
    res.i += cost * tmp.i * (!n ? 0.5 : 1.);
  }

  res.r *= -2;
  res.i *= -2;

  val = Cmodu(res);
  val *= val;
  val *= 2. * M_PI * r;
  val = 10. * log10(val);

  V->Val[0] = val;
  V->Val[MAX_DIM] = 0.;

  V->Type = SCALAR ;
}

/* Scattering by acoustically hard circular cylinder of radius R,
   under plane wave incidence e^{ikx}. Returns scatterered field
   outside */

void F_AcousticFieldHardCylinder(F_ARG)
{
  cplx I = {0.,1.}, Hnkr, dHnkR, tmp, *HnkRtab;
  double k, R, r, kr, kR, theta, cost ;
  int n, ns ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  HnkRtab = (cplx*)Malloc(ns*sizeof(cplx));

  for (n = 0 ; n < ns ; n++){
    HnkRtab[n].r = jn(n,kR);
    HnkRtab[n].i = yn(n,kR);
  }

  for (n = 0 ; n < ns ; n++){
    Hnkr.r = jn(n,kr);
    Hnkr.i = yn(n,kr);

    dHnkR = DHn(HnkRtab, n, kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( dHnkR.r, Hnkr) ) , dHnkR );

    cost = cos(n*theta);

    V->Val[0] +=  cost * tmp.r * (!n ? 0.5 : 1.);
    V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
  }

  Free(HnkRtab);

  V->Val[0] *= -2;
  V->Val[MAX_DIM] *= -2;

  V->Type = SCALAR ;
}

/* Scattering by acoustically hard circular cylinder of radius R,
   under plane wave incidence e^{ikx}. Returns the angular derivative
   of the solution outside */

void F_DthetaAcousticFieldHardCylinder(F_ARG)
{
  cplx I = {0.,1.}, Hnkr, dHnkR, tmp, *HnkRtab;
  double k, R, r, kr, kR, theta, sint ;
  int n, ns ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kr = k*r;
  kR = k*R;

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  HnkRtab = (cplx*)Malloc(ns*sizeof(cplx));

  for (n = 0 ; n < ns ; n++){
    HnkRtab[n].r = jn(n,kR);
    HnkRtab[n].i = yn(n,kR);
  }

  for (n = 0 ; n < ns ; n++){
    Hnkr.r = jn(n,kr);
    Hnkr.i = yn(n,kr);

    dHnkR = DHn(HnkRtab, n, kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( dHnkR.r, Hnkr) ) , dHnkR );

    sint = sin(n*theta);

    V->Val[0] += - n * sint * tmp.r * (!n ? 0.5 : 1.);
    V->Val[MAX_DIM] +=  - n * sint * tmp.i * (!n ? 0.5 : 1.);
  }

  Free(HnkRtab);

  V->Val[0] *= -2 ;
  V->Val[MAX_DIM] *= -2 ;

  V->Type = SCALAR ;
}

/* Scattering by acoustically hard circular cylinder of radius R0,
   under plane wave incidence e^{ikx}, with artificial boundary
   condition at R1. Returns exact solution of the (interior!) problem
   between R0 and R1. */

void F_AcousticFieldHardCylinderABC(F_ARG)
{
  cplx I = {0.,1.}, tmp, alpha1, alpha2, delta, am, bm, lambda, coef;
  cplx *H1nkR0tab, *H2nkR0tab, *H1nkR1tab, *H2nkR1tab, H1nkr, alphaBT, betaBT;

  double k, R0, R1, r, kr, kR0, kR1, theta, cost, sint ;
  int n, ns, ABCtype, SingleMode ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0] * A->Val[0] + A->Val[1] * A->Val[1]) ;

  k = Fct->Para[0] ;
  R0 = Fct->Para[1] ;
  R1 = Fct->Para[2] ;
  ABCtype = (int)Fct->Para[3] ;
  SingleMode = (int)Fct->Para[4] ;
  kr = k * r;
  kR0 = k * R0;
  kR1 = k * R1;

  if(ABCtype == 1){ /* Sommerfeld */
    lambda = Cprodr(-k, I);
  }
  else if(ABCtype == 2){ /* Bayliss-Turkel */
    /*
      alphaBT[] = 1/(2*R1) - I[]/(8*k*R1^2*(1+I[]/(k*R1)));
      betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*R1)));
    */
    coef.r = 2*k;
    coef.i = 2/R1;
    alphaBT = Csubr( 1/(2*R1) , Cdiv(I , Cprodr(4*R1*R1 , coef) ) );
    betaBT = Cdiv(I , coef);
  }
  else{
    Message::Error("Unknown ABC type");
  }

  V->Val[0] = 0.;
  V->Val[MAX_DIM] = 0. ;

  ns = (int)k + 10;

  H1nkR0tab = (cplx*)Malloc(ns * sizeof(cplx));
  for (n = 0 ; n < ns ; n++){
    H1nkR0tab[n].r = jn(n, kR0);
    H1nkR0tab[n].i = yn(n, kR0);
  }

  H2nkR0tab = (cplx*)Malloc(ns * sizeof(cplx));
  for (n = 0 ; n < ns ; n++){
    H2nkR0tab[n] = Cconj(H1nkR0tab[n]);
  }

  H1nkR1tab = (cplx*)Malloc(ns * sizeof(cplx));
  for (n = 0 ; n < ns ; n++){
    H1nkR1tab[n].r = jn(n, kR1);
    H1nkR1tab[n].i = yn(n, kR1);
  }

  H2nkR1tab = (cplx*)Malloc(ns * sizeof(cplx));
  for (n = 0 ; n < ns ; n++){
    H2nkR1tab[n] = Cconj(H1nkR1tab[n]);
  }

  for (n = 0 ; n < ns ; n++){
    if(SingleMode >= 0 && SingleMode != n) continue;

    H1nkr.r = jn(n,kr);
    H1nkr.i = yn(n,kr);

    if(ABCtype == 2){
      lambda = Csum( Csum( Cprodr(-k, I) , alphaBT ) ,
		     Cprodr( n*n/(R1*R1) , betaBT ) );
    }

    alpha1 = Csum( Cprodr(k, DHn(H1nkR1tab, n, kR1)) ,
		   Cprod(lambda, H1nkR1tab[n]) );
    alpha2 = Csum( Cprodr(k, DHn(H2nkR1tab, n, kR1)) ,
		   Cprod(lambda, H2nkR1tab[n]) );
    delta = Cprodr( k , Csub( Cprod( alpha1 , DHn(H2nkR0tab, n, kR0) ) ,
			      Cprod( alpha2 , DHn(H1nkR0tab, n, kR0) ) ) );

    if(Cmodu(delta) < 1.e-6) break;

    am = Cdiv( Cprodr(k * DHn(H1nkR0tab, n, kR0).r, alpha2) ,
	       delta );
    bm = Cdiv( Cprodr(-k * DHn(H1nkR0tab, n, kR0).r, alpha1) ,
	       delta );

    if(SingleMode >= 0 && SingleMode == n){
      tmp = Csum( Cprod( am , H1nkr ) , Cprod( bm , Cconj(H1nkr) ) ) ;
      cost = cos(n * theta);
      sint = sin(n * theta);
      V->Val[0] += cost * tmp.r - sint * tmp.i;
      V->Val[MAX_DIM] += cost * tmp.i + sint * tmp.r;
    }
    else{
      tmp = Cprod( Cpow(I,n) , Csum( Cprod( am , H1nkr ) ,
				     Cprod( bm , Cconj(H1nkr) ) ) );
      cost = cos(n * theta);
      V->Val[0] += cost * tmp.r * (!n ? 0.5 : 1.);
      V->Val[MAX_DIM] += cost * tmp.i * (!n ? 0.5 : 1.);
    }
  }

  Free(H1nkR0tab);
  Free(H2nkR0tab);
  Free(H1nkR1tab);
  Free(H2nkR1tab);

  if(SingleMode < 0){
    V->Val[0] *= 2;
    V->Val[MAX_DIM] *= 2;
  }

  V->Type = SCALAR ;
}

/* Scattering by acoustically hard circular cylinder of radius R,
   under plane wave incidence e^{ikx}. Returns RCS. */

void F_RCSHardCylinder(F_ARG)
{
  cplx I = {0.,1.}, Hnkr, dHnkR, res, tmp, *HnkRtab;
  double k, R, r, kR, theta, cost, val ;
  int n, ns ;

  theta = atan2(A->Val[1], A->Val[0]) ;
  r = sqrt(A->Val[0]*A->Val[0] + A->Val[1]*A->Val[1]) ;

  k = Fct->Para[0] ;
  R = Fct->Para[1] ;
  kR = k*R;

  res.r = 0.;
  res.i = 0. ;

  ns = (int)k + 10;

  HnkRtab = (cplx*)Malloc(ns*sizeof(cplx));

  for (n = 0 ; n < ns ; n++){
    HnkRtab[n].r = jn(n,kR);
    HnkRtab[n].i = yn(n,kR);
  }

  for (n = 0 ; n < ns ; n++){
    /* leaving r in following asymptotic formula for clarity (see
       Colton and Kress, Inverse Acoustic..., p. 65, eq. 3.59) */
    Hnkr.r = cos(k*r - n*M_PI/2. - M_PI/4.) / sqrt(k*r) * sqrt(2./M_PI);
    Hnkr.i = sin(k*r - n*M_PI/2. - M_PI/4.) / sqrt(k*r) * sqrt(2./M_PI);

    dHnkR = DHn(HnkRtab, n, kR);

    tmp = Cdiv( Cprod( Cpow(I,n) , Cprodr( dHnkR.r, Hnkr) ) , dHnkR );

    cost = cos(n*theta);

    res.r += cost * tmp.r * (!n ? 0.5 : 1.);
    res.i += cost * tmp.i * (!n ? 0.5 : 1.);
  }

  Free(HnkRtab);

  res.r *= -2;
  res.i *= -2;

  val = Cmodu(res);
  val *= val;
  val *= 2. * M_PI * r;
  val = 10. * log10(val);

  V->Val[0] = val;
  V->Val[MAX_DIM] = 0.;

  V->Type = SCALAR ;
}

/* ------------------------------------------------------------------------ */
/*  On Surface Radiation Conditions (OSRC)                                  */
/* ------------------------------------------------------------------------ */

/* Coefficients C0, Aj and Bj: see papers
   1) Kechroud, Antoine & Soulaimani, Nuemrical accuracy of a
   Pade-type non-reflecting..., IJNME 2005
   2) Antoine, Darbas & Lu, An improved surface radiation condition...
   CMAME, 2006(?) */

static double aj(int j, int N)
{
  return 2./(2.*N + 1.) * SQU(sin((double)j * M_PI/(2.*N + 1.))) ;
}

static double bj(int j, int N)
{
  return SQU(cos((double)j * M_PI/(2.*N + 1.))) ;
}

static std::complex<double> padeC0(int N, double theta){
  std::complex<double> sum = std::complex<double>(1, 0);
  std::complex<double> one = std::complex<double>(1, 0);
  std::complex<double> z   = std::complex<double>(cos(-theta) - 1, sin(-theta));

  for(int j = 1; j <= N; j++)
    sum += (z * aj(j, N)) / (one + z * bj(j, N));

  z = std::complex<double>(cos(theta / 2.), sin(theta / 2.));

  return sum * z;
}

static std::complex<double> padeA(int j, int N, double theta){
  std::complex<double> one = std::complex<double>(1, 0);
  std::complex<double> res;
  std::complex<double> z;

  z   = std::complex<double>(cos(-theta / 2.), sin(-theta / 2.));
  res = z * aj(j, N);

  z   = std::complex<double>(cos(-theta) - 1., sin(-theta));
  res = res / ((one + z * bj(j, N)) * (one + z * bj(j, N)));

  return res;
}

static std::complex<double> padeB(int j, int N, double theta){
  std::complex<double> one = std::complex<double>(1, 0);
  std::complex<double> res;
  std::complex<double> z;

  z   = std::complex<double>(cos(-theta), sin(-theta));
  res = z * bj(j, N);

  z   = std::complex<double>(cos(-theta) - 1., sin(-theta));
  res = res / (one + z * bj(j, N));

  return res;
}

static std::complex<double> padeR0(int N, double theta){
  std::complex<double> sum = padeC0(N, theta);

  for(int j = 1; j <= N; j++)
    sum += padeA(j, N, theta) / padeB(j, N, theta);

  return sum;
}

void  F_OSRC_C0(F_ARG)
{
  int N;
  double theta;

  N     = (int)Fct->Para[0];
  theta = Fct->Para[1];

  std::complex<double> C0 = padeC0(N, theta);

  V->Val[0]       = C0.real();
  V->Val[MAX_DIM] = C0.imag();
  V->Type         = SCALAR;
}

void  F_OSRC_R0(F_ARG)
{
  int N;
  double theta;

  N     = (int)Fct->Para[0];
  theta = Fct->Para[1];

  std::complex<double> C0 = padeR0(N, theta);

  V->Val[0]       = C0.real();
  V->Val[MAX_DIM] = C0.imag();
  V->Type         = SCALAR;
}

void F_OSRC_Aj(F_ARG)
{
  int j, N;
  double theta;

  j     = (int)Fct->Para[0];
  N     = (int)Fct->Para[1];
  theta = Fct->Para[2];

  std::complex<double> Aj = padeA(j, N, theta);

  V->Val[0]       = Aj.real();
  V->Val[MAX_DIM] = Aj.imag();
  V->Type         = SCALAR;
}

void F_OSRC_Bj(F_ARG)
{
  int j, N;
  double theta;

  j     = (int)Fct->Para[0];
  N     = (int)Fct->Para[1];
  theta = Fct->Para[2];

  std::complex<double> Bj = padeB(j, N, theta);

  V->Val[0]       = Bj.real();
  V->Val[MAX_DIM] = Bj.imag();
  V->Type         = SCALAR;
}

#undef F_ARG
