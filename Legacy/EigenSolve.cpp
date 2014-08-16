// GetDP - Copyright (C) 1997-2014 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include "GetDPConfig.h"
#include "Message.h"
#include "EigenSolve.h"

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
#define PetscTruth PetscBool
#define PetscOptionsGetTruth PetscOptionsGetBool
#endif

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
  Message::Error("EigenSolve not available without SLEPC or ARPACK");
#endif
}
