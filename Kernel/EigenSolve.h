// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _EIGEN_SOLVE_H_
#define _EIGEN_SOLVE_H_

#include "DofData.h"

void EigenSolve(struct DofData * DofData_P, int NumEigenvalues,
              		double shift_r, double shift_i, int FilterExpressionIndex,
                  double *RationalCoefs1Num_re, double *RationalCoefs1Num_im,
                  double *RationalCoefs1Den_re, double *RationalCoefs1Den_im,
                  double *RationalCoefs2Num_re, double *RationalCoefs2Num_im,
                  double *RationalCoefs2Den_re, double *RationalCoefs2Den_im,
                  double *RationalCoefs3Num_re, double *RationalCoefs3Num_im,
                  double *RationalCoefs3Den_re, double *RationalCoefs3Den_im,
                  int *CoefsSizes);
void EigenSolve_ARPACK(struct DofData * DofData_P, int NumEigenvalues,
                  double shift_r, double shift_i, int FilterExpressionIndex);
void EigenSolve_SLEPC(struct DofData * DofData_P, int NumEigenvalues,
              		double shift_r, double shift_i, int FilterExpressionIndex,
                  double *RationalCoefs1Num_re, double *RationalCoefs1Num_im,
                  double *RationalCoefs1Den_re, double *RationalCoefs1Den_im,
                  double *RationalCoefs2Num_re, double *RationalCoefs2Num_im,
                  double *RationalCoefs2Den_re, double *RationalCoefs2Den_im,
                  double *RationalCoefs3Num_re, double *RationalCoefs3Num_im,
                  double *RationalCoefs3Den_re, double *RationalCoefs3Den_im,
                  int *CoefsSizes);
#endif
