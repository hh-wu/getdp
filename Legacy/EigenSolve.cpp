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
#if defined(HAVE_ARPACK) && defined(HAVE_SLEPC) 
  // if both Arpack and SLEPC are available, use Arpack by default
  // (set "-slepc" on the command line to force SLEPC)
  PetscTruth slepc = PETSC_FALSE, set;
  PetscOptionsGetTruth(PETSC_NULL, "-slepc", &slepc, &set);
  if(slepc)
    EigenSolve_SLEPC(DofData_P, NumEigenvalues, shift_r, shift_i);
  else
    EigenSolve_ARPACK(DofData_P, NumEigenvalues, shift_r, shift_i);
#elif defined(HAVE_ARPACK)
  EigenSolve_ARPACK(DofData_P, NumEigenvalues, shift_r, shift_i);
#elif defined(HAVE_SLEPC)
  EigenSolve_SLEPC(DofData_P, NumEigenvalues, shift_r, shift_i);
#else
  Msg::Error("EigenSolve not available without SLEPC or ARPACK");
#endif
}
