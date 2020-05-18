// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef EIGEN_SOLVE_H
#define EIGEN_SOLVE_H

#include "DofData.h"

void EigenSolve(struct DofData * DofData_P, int NumEigenvalues,
                double shift_r, double shift_i, int FilterExpressionIndex,
                List_T *RationalCoefsNum, List_T *RationalCoefsDen);
void EigenSolve_ARPACK(struct DofData * DofData_P, int NumEigenvalues,
                       double shift_r, double shift_i, int FilterExpressionIndex);
void EigenSolve_SLEPC(struct DofData * DofData_P, int NumEigenvalues,
                      double shift_r, double shift_i, int FilterExpressionIndex,
                      List_T *RationalCoefsNum, List_T *RationalCoefsDen);
#endif
