// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _LEGENDRE_H_
#define _LEGENDRE_H_

double Factorial(double n) ;

double BinomialCoef( double n, double m ) ;

double Legendre(int l, int m, double x) ;
void LegendreRecursive(int l, int m, double x, double P[]) ;
void LegendreRecursiveM(int l, double x, double P[]) ;

double dLegendre (int l, int m, double x) ;
double dLegendreFinDif (int l, int m, double x) ;

void PrintLegendre(int l, int m, double x, char * FileName);

void SphericalHarmonics(int l, int m, double Theta, double Phi, double Yl_m[]);

#endif
