// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "GetDPConfig.h"
#include "Message.h"
#include "EigenSolve.h"

extern int Flag_SLEPC;

void EigenSolve(struct DofData *DofData_P, int NumEigenvalues, double shift_r,
                double shift_i, int FilterExpressionIndex,
                List_T *RationalCoefsNum, List_T *RationalCoefsDen,
                List_T *ApplyResolventRealFreqs, struct DofData *DofData_P2)
{
#if defined(HAVE_ARPACK) && defined(HAVE_SLEPC)
  // if both Arpack and SLEPC are available, use Arpack by default
  // (set "-slepc" on the command line to force SLEPC)
  if(Flag_SLEPC)
    EigenSolve_SLEPC(DofData_P, NumEigenvalues, shift_r, shift_i,
                     FilterExpressionIndex, RationalCoefsNum, RationalCoefsDen,
                     ApplyResolventRealFreqs, DofData_P2);
  else
    EigenSolve_ARPACK(DofData_P, NumEigenvalues, shift_r, shift_i,
                      FilterExpressionIndex);
#elif defined(HAVE_ARPACK)
  EigenSolve_ARPACK(DofData_P, NumEigenvalues, shift_r, shift_i,
                    FilterExpressionIndex);
#elif defined(HAVE_SLEPC)
  EigenSolve_SLEPC(DofData_P, NumEigenvalues, shift_r, shift_i,
                   FilterExpressionIndex, RationalCoefsNum, RationalCoefsDen,
                   ApplyResolventRealFreqs, DofData_P2);
#else
  Message::Error("EigenSolve not available without SLEPC or ARPACK");
#endif
}
