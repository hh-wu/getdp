// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "GetDPConfig.h"
#include "Message.h"
#include "Bessel.h"

#if defined(HAVE_NO_FORTRAN)

static void zbesj_(double*, double*, double*, int*, int*, double*, 
                   double*, int*, int*)
{
  Message::Fatal("Bessel functions require Fortran compiler");
}

static void zbesy_(double*, double*, double*, int*, int*, double*, 
                   double*, int*, double*, double*, int*)
{
  Message::Fatal("Bessel functions require Fortran compiler");
}

static void zbesh_(double*, double*, double*, int*, int*, int*, 
                   double*, double*, int*, int*)
{
  Message::Fatal("Bessel functions require Fortran compiler");
}

#else

#if defined(HAVE_UNDERSCORE)
#define zbesj_ zbesj
#define zbesy_ zbesy
#define zbesh_ zbesh
#endif

extern "C" {
  void zbesj_(double*, double*, double*, int*, int*, double*, 
              double*, int*, int*);
  void zbesy_(double*, double*, double*, int*, int*, double*,
              double*, int*, double*,
              double*, int*);
  void zbesh_(double*, double*, double*, int*, int*, int*, double*, 
              double*, int*, int*);
}

#endif

static int BesselError(int ierr, const char *str)
{
  static int warn=0;

  switch(ierr){
  case 0 :
    return 0;
  case 1 :
    Message::Error("Input error in %s", str);
    return BESSEL_ERROR_INPUT;
  case 2 :
    return BESSEL_OVERFLOW;
  case 3 :
    if(!warn){
      Message::Info("Half machine accuracy lost in %s (large argument or order)", str);
      warn = 1;
    }
    return BESSEL_HALF_ACCURACY;
  case 4 :
    Message::Error("Complete loss of significance in %s (argument or order too large)", str);
    return BESSEL_NO_ACCURACY;
  case 5 :
    Message::Error("Failed to converge in %s", str);
    return BESSEL_NO_CONVERGENCE;
  default:
    Message::Info("Unknown Bessel status in %s (%d)", str, ierr);
    return ierr;
  }
}

// First kind Bessel functions

int BesselJn(double n, int num, double x, double *val)
{
  int nz = 0, ierr = 0, kode = 1;
  double xi = 0.0;
  double* ji = new double[num];
 
  zbesj_(&x, &xi, &n, &kode, &num, val, ji, &nz, &ierr) ;
  
  delete[] ji;

  return BesselError(ierr, "BesselJn");
}

int BesselSphericalJn(double n, int num, double x, double *val)
{
  int ierr = BesselJn(n+0.5, num, x, val);
  double coef = sqrt(0.5*M_PI/x);
  for(int i = 0; i < num; i++){
    val[i] *= coef;
  }
  return BesselError(ierr, "BesselSphericalJn");
}

int BesselAltSphericalJn(double n, int num, double x, double *val)
{
  int ierr = BesselJn(n+0.5, num, x, val);
  double coef = sqrt(0.5*M_PI*x);
  for(int i = 0; i < num; i++){
    val[i] *= coef;
  }
  return BesselError(ierr, "BesselAltSphericalJn");
}

// Second kind Bessel functions

int BesselYn(double n, int num, double x, double *val)
{
  int nz = 0, ierr = 0, kode = 1;
  double xi = 0.0;
  double* yi = new double[num];
  double* auxyr = new double[num];
  double* auxyi = new double[num];

  zbesy_(&x, &xi, &n, &kode, &num, val, yi, &nz, auxyr, auxyi, &ierr);

  delete[] yi; 
  delete[] auxyr;
  delete[] auxyi;

  return BesselError(ierr, "BesselYn");
}

int BesselSphericalYn(double n, int num, double x, double *val)
{
  int ierr = BesselYn(n+0.5, num, x, val);
  double coef = sqrt(0.5*M_PI/x);
  for(int i = 0; i < num; i++){
    val[i] *= coef;
  }
  return BesselError(ierr, "BesselSphericalYn");
}

int BesselAltSphericalYn(double n, int num, double x, double *val)
{
  int ierr = BesselYn(n+0.5, num, x, val);
  double coef = sqrt(0.5*M_PI*x);
  for(int i = 0; i < num; i++){
    val[i] *= coef;
  }
  return BesselError(ierr, "BesselAltSphericalYn");
}

// Hankel functions (type = 1 or 2)

int BesselHn(int type, double n, int num, double x, std::complex<double> *val)
{
  int nz = 0, ierr = 0, kode = 1;
  double* hr = new double[num];
  double* hi = new double[num];
  double xi = 0.0; 

  zbesh_(&x, &xi, &n, &kode, &type, &num, hr, hi, &nz, &ierr);

  for(int i=0; i < num; i++){
    val[i] = std::complex<double>(hr[i], hi[i]);
  }

  delete[] hr;
  delete[] hi;

  return BesselError(ierr, "BesselHn");
}

int BesselSphericalHn(int type, double n, int num, double x, std::complex<double> *val)
{
  int ierr = BesselHn(type, n+0.5, num, x, val);
  double coef = sqrt(0.5*M_PI/x);
  for(int i = 0; i < num; i++){
    val[i] *= coef;
  }
  return BesselError(ierr, "BesselSphericalHn");
}

int BesselAltSphericalHn(int type, double n, int num, double x, std::complex<double> *val)
{
  int ierr = BesselHn(type, n+0.5, num, x, val);
  double coef = sqrt(0.5*M_PI*x);
  for(int i = 0; i < num; i++){
    val[i] *= coef;
  }
  return BesselError(ierr, "BesselAltSphericalHn");
}

// Utilities for backward compatibility

double Spherical_j_n(int n, double x)
{
  double res;
  BesselSphericalJn(n, 1, x, &res);
  return res;
}

double AltSpherical_j_n(int n, double x)
{
  double res;
  BesselAltSphericalJn(n, 1, x, &res);
  return res;
}

double Spherical_y_n(int n, double x)
{
  double res;
  BesselSphericalYn(n, 1, x, &res);
  return res;
}

double AltSpherical_y_n(int n, double x)
{
  double res;
  BesselAltSphericalYn(n, 1, x, &res);
  return res;
}

