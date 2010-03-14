// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _EIGEN_SOLVE_H_
#define _EIGEN_SOLVE_H_

#include "DofData.h"

struct EigenPar {
  double prec;
  int    size;
  int    reortho;
} ;

void EigenPar(const char *filename, struct EigenPar *par);
void EigenSolve(struct DofData * DofData_P, int NumEigenvalues, 
		double shift_r, double shift_i);

#endif
