/* $Id: SphBessel.h,v 1.4 2002-02-04 19:00:09 geuzaine Exp $ */

#ifndef _SPHBESSEL_H_
#define _SPHBESSEL_H_

#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Data_Numeric.h"
#include "Amos_F.h"

double Spherical_j_n(int n, double x) ;
void Spherical_j_nArray(int n, double x, int NB, double jsph[]) ;
double AltSpherical_j_n(int n, double x) ;
void PrintSpherical_j_n(int n, char * FileName) ;

double Spherical_y_n(int n, double x) ;
void Spherical_y_nArray(int n, double x, int NB, double ysph[]) ;
double AltSpherical_y_n(int n, double x) ;
void PrintSpherical_y_n(int n, char * FileName) ;

void Spherical_h_n(int type, int n, double x, double *hr, double *hi);
void Spherical_h_nArray(int type, int n, double x, int N, double *hr, double *hi);


#endif




