// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _BESSEL_H_
#define _BESSEL_H_

#include <math.h>
#include <complex>

#define BESSEL_ERROR_INPUT     1
#define BESSEL_OVERFLOW        2
#define BESSEL_HALF_ACCURACY   3
#define BESSEL_NO_ACCURACY     4
#define BESSEL_NO_CONVERGENCE  5

// These routines provide a C++ interface to the Fortran Bessel
// functions from Donald E. Amos (Sandia National Laboratories)

int BesselJn(double n, int num, double x, double *val);
int BesselSphericalJn(double n, int num, double x, double *val);
int BesselAltSphericalJn(double n, int num, double x, double *val);

int BesselYn(double n, int num, double x, double *val);
int BesselSphericalYn(double n, int num, double x, double *val);
int BesselAltSphericalYn(double n, int num, double x, double *val);

int BesselHn(int type, double n, int num, double x, std::complex<double> *val);
int BesselSphericalHn(int type, double n, int num, double x, std::complex<double> *val);
int BesselAltSphericalHn(int type, double n, int num, double x, std::complex<double> *val);

// Utilities for backward compatibility

double Spherical_j_n(int n, double x);
double AltSpherical_j_n(int n, double x);
double Spherical_y_n(int n, double x);
double AltSpherical_y_n(int n, double x);

#endif
