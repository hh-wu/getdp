// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "GetDPConfig.h"
#include "Message.h"
#include "EigenSolve.h"

void EigenSolve(struct DofData * DofData_P, int NumEigenvalues, 
		double shift_r, double shift_i)
{
#if defined(HAVE_SLEPC) && defined(HAVE_ARPACK)
  // if both SLEPC and Arpack are available, use SLEPC by default (set
  // "-arpack" on the command line to force Arpack)
  PetscTruth arpack = PETSC_FALSE, set;
  PetscOptionsGetTruth(PETSC_NULL, "-arpack", &arpack, &set);
  if(arpack)
    EigenSolve_ARPACK(DofData_P, NumEigenvalues, shift_r, shift_i);
  else
    EigenSolve_SLEPC(DofData_P, NumEigenvalues, shift_r, shift_i);
#elif defined(HAVE_SLEPC)
  EigenSolve_SLEPC(DofData_P, NumEigenvalues, shift_r, shift_i);
#elif defined(HAVE_ARPACK)
  EigenSolve_ARPACK(DofData_P, NumEigenvalues, shift_r, shift_i);
#else
  Msg::Error("EigenSolve not available without SLEPC or ARPACK");
#endif
}
