/* $Id: Legendre.h,v 1.1 2001-08-08 14:42:30 sabarieg Exp $ */
#ifndef _LEGENDRE_H_
#define _LEGENDRE_H_

#include <stdio.h>
#include <math.h>

#include "GetDP.h"

double Legendre(int l, int m, double x) ;
void   PrintLegendre(int l, int m, double x, char * FileName);
double dLegendre (int l, int m, double x) ;
double dLegendreFinDif (int l, int m, double x) ;

#endif
