/* $Id: Legendre.h,v 1.2 2001-11-19 17:41:04 sabarieg Exp $ */
#ifndef _LEGENDRE_H_
#define _LEGENDRE_H_

#include <stdio.h>
#include <math.h>

#include "GetDP.h"

double Legendre(int l, int m, double x) ;
void LegendreRecursive(int l, int m, double x, double P[]) ;

double dLegendre (int l, int m, double x) ;
double dLegendreFinDif (int l, int m, double x) ;

void   PrintLegendre(int l, int m, double x, char * FileName);

double Factorial(double n) ;
void SphericalHarmonics(int l, int m, double Theta, double Phi, double Yl_m[]);

#endif
