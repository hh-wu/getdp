/* $Id: Legendre.h,v 1.3 2003-03-17 11:26:07 sabarieg Exp $ */
#ifndef _LEGENDRE_H_
#define _LEGENDRE_H_

#include <stdio.h>
#include <math.h>

#include "GetDP.h"

double Factorial(double n) ;

double BinomialCoef( double n, double m ) ;

double Legendre(int l, int m, double x) ;
void LegendreRecursive(int l, int m, double x, double P[]) ;
void LegendreRecursiveM(int l, double x, double P[]) ;

double dLegendre (int l, int m, double x) ;
double dLegendreFinDif (int l, int m, double x) ;

void   PrintLegendre(int l, int m, double x, char * FileName);

void SphericalHarmonics(int l, int m, double Theta, double Phi, double Yl_m[]);

#endif



