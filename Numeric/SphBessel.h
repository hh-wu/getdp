/* $Id: SphBessel.h,v 1.1 2001-08-08 14:43:42 sabarieg Exp $ */

#ifndef _SPHBESSEL_H_
#define _SPHBESSEL_H_

#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Data_Numeric.h"
#include "Amos_F.h"

double Spherical_j_n(int n, double x) ;
void PrintSpherical_j_n(int n, char * FileName) ;
double AltSpherical_j_n(int n, double x) ;
double Spherical_y_n(int n, double x) ;
void PrintSpherical_y_n(int n, char * FileName) ;
double AltSpherical_y_n(int n, double x) ;

#endif




