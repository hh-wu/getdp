// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "GetDPConfig.h"

#if defined(HAVE_SLEPC)

// SLEPc interface for solving eigenvalue problems
//
// SLEPc can solve both linear and quadratic eigenvalue
// problems. SLEPc options can be specified in the .petscrc file, or
// directly on the command line.
//
// For example, for a linear evp:
//    -st_ksp_type preonly -st_pc_type lu -st_pc_factor_mat_solver_package mumps
//
// For example, for a quadratic evp:
//    -qep_type linear -qep_hermitian -qep_eps_type krylovschur 
//    -qep_st_ksp_type gmres -qep_st_pc_type bjacobi

#include <string>
#include <complex>
#include "ProData.h"
#include "DofData.h"
#include "Message.h"
#include <slepceps.h>
#include <slepcqep.h>

extern struct CurrentData Current ;

static void _try(int ierr){ CHKERRABORT(PETSC_COMM_WORLD, ierr); }

static void _storeEigenVectors(struct DofData *DofData_P, int nconv,
                               EPS eps, QEP qep)
{
  if (nconv <= 0) return;
  Vec xr, xi;
  _try(MatGetVecs(DofData_P->M1.M, PETSC_NULL, &xr));
  _try(MatGetVecs(DofData_P->M1.M, PETSC_NULL, &xi));
  Msg::Info("               %-24s%-24s%-12s", "Re", "Im", "Relative error");
  bool newsol = false;
  for (int i = 0; i < nconv; i++){
    PetscScalar kr, ki;
    PetscReal error;
    if(eps){
      _try(EPSGetEigenpair(eps, i, &kr, &ki, xr, xi));
      _try(EPSComputeRelativeError(eps, i, &error));
    }
    else{
      _try(QEPGetEigenpair(qep, i, &kr, &ki, xr, xi));
      _try(QEPComputeRelativeError(qep, i, &error));
    }
#if defined(PETSC_USE_COMPLEX)
    PetscReal re = PetscRealPart(kr), im = PetscImaginaryPart(kr);
#else
    PetscReal re = kr, im = ki;
#endif
    double ore, oim;
    if(eps){
      Msg::Info("EIG %03d w^2 = %s%.16e %s%.16e  %3.6e", 
                i, (re < 0) ? "" : " ", re, (im < 0) ? "" : " ", im, error);
      double abs = sqrt(re * re + im * im), arg = atan2(im, re);
      ore = sqrt(abs) * cos(0.5*arg);
      oim = sqrt(abs) * sin(0.5*arg);
      double fre = ore / 2. / M_PI, fim = oim / 2. / M_PI;
      Msg::Info("          w = %s%.16e %s%.16e", 
                (ore < 0) ? "" : " ", ore, (oim < 0) ? "" : " ", oim);
      Msg::Info("          f = %s%.16e %s%.16e", 
                (fre < 0) ? "" : " ", fre, (fim < 0) ? "" : " ", fim);
    }
    else{
      ore = re;
      oim = im;
      Msg::Info("EIG %03d w = %s%.16e %s%.16e  %3.6e", 
                i, (ore < 0) ? "" : " ", ore, (oim < 0) ? "" : " ", oim, error);
      double fre = re / 2. / M_PI, fim = im / 2. / M_PI;
      Msg::Info("          f = %s%.16e %s%.16e", 
                (fre < 0) ? "" : " ", fre, (fim < 0) ? "" : " ", fim);
    }
    
    // create new solution vector if necessary
    if(newsol) {
      struct Solution Solution_S;
      LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof);
      List_Add(DofData_P->Solutions, &Solution_S);
      DofData_P->CurrentSolution = (struct Solution*)
        List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);
    } 
    newsol = true;
    DofData_P->CurrentSolution->Time = ore;
    DofData_P->CurrentSolution->TimeImag = oim;
    DofData_P->CurrentSolution->TimeStep = (int)Current.TimeStep;
    DofData_P->CurrentSolution->TimeFunctionValues = NULL;
    DofData_P->CurrentSolution->SolutionExist = 1;
    
    // store eigenvector
    PetscScalar *tmpr, *tmpi;
    _try(VecGetArray(xr, &tmpr));
    _try(VecGetArray(xi, &tmpi));
    for(int l = 0; l < DofData_P->NbrDof; l += gCOMPLEX_INCREMENT){
      int j = l / gCOMPLEX_INCREMENT;
#if defined(PETSC_USE_COMPLEX)
      double var_r = (double)PetscRealPart(tmpr[l]);
      double var_i = (double)PetscImaginaryPart(tmpr[l]);
#else
      double var_r = (double)tmpr[l];
      double var_i = (double)tmpi[l];
#endif
      LinAlg_SetComplexInVector(var_r, var_i, &DofData_P->CurrentSolution->x, l, l+1);
    }
    LinAlg_AssembleVector(&DofData_P->CurrentSolution->x);
    
    // increment the global timestep counter so that a future
    // GenerateSystem knows which solutions exist
    Current.TimeStep += 1.;
    // update the current value of Time and TimeImag so that
    // $EigenvalueReal and $EigenvalueImag are up-to-date
    Current.Time = re;
    Current.TimeImag = im;
  }
  _try(VecDestroy(xr));
  _try(VecDestroy(xi));
}

static void _linearEVP(struct DofData * DofData_P, int numEigenValues, 
                       double shift_r, double shift_i)
{
  Msg::Info("Solving linear eigenvalue problem");

  // GetDP notation: -w^2 M3 x + iw M2 x + M1 x = 0
  // SLEPC notation for generalized linear EVP: A x - \lambda B x = 0
  Mat A = DofData_P->M1.M;
  Mat B = DofData_P->M3.M;
  EPS eps;
  _try(EPSCreate(PETSC_COMM_WORLD, &eps));
  _try(EPSSetOperators(eps, A, B));
  _try(EPSSetProblemType(eps, EPS_GNHEP));
  
  // set some default options
  _try(EPSSetDimensions(eps, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  _try(EPSSetTolerances(eps, 1.e-7, 50));
  _try(EPSSetType(eps, EPSKRYLOVSCHUR)); 
                  // EPSKRYLOVSCHUR, EPSARNOLDI, EPSARPACK or EPSPOWER
  _try(EPSSetWhichEigenpairs(eps, EPS_SMALLEST_MAGNITUDE));
                             // EPS_SMALLEST_REAL, EPS_LARGEST_MAGNITUDE, ...

  // override these options at runtime, petsc-style
  _try(EPSSetFromOptions(eps));
  
  // force options specified directly as arguments
  if(numEigenValues)
    _try(EPSSetDimensions(eps, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  
  // apply shift-and-invert transformation
#if defined(PETSC_USE_COMPLEX)
  PetscScalar shift = shift_r + PETSC_i * shift_i;
#else
  PetscScalar shift = shift_r;
  if(shift_i)
    Msg::Warning("Imaginary part of shift discarded: use PETSc with complex numbers");
#endif
  ST st;
  _try(EPSGetST(eps, &st));
  _try(STSetType(st, STSINVERT));
  _try(STSetShift(st, shift));
  
  // print info
  const EPSType type;
  _try(EPSGetType(eps, &type));
  Msg::Info("SLEPc solution method: %s", type);
  PetscInt nev;
  _try(EPSGetDimensions(eps, &nev, PETSC_NULL, PETSC_NULL));
  Msg::Info("SLEPc number of requested eigenvalues: %d", nev);
  PetscReal tol;
  PetscInt maxit;
  _try(EPSGetTolerances(eps, &tol, &maxit));
  Msg::Info("SLEPc stopping condition: tol=%g, maxit=%d", tol, maxit);
  
  // solve
  Msg::Info("SLEPc solving...");
  _try(EPSSolve(eps));
  
  // check convergence
  int its;
  _try(EPSGetIterationNumber(eps, &its));
  EPSConvergedReason reason;
  _try(EPSGetConvergedReason(eps, &reason));
  if(reason == EPS_CONVERGED_TOL)
    Msg::Info("SLEPc converged in %d iterations", its);
  else if(reason == EPS_DIVERGED_ITS)
    Msg::Error("SLEPc diverged after %d iterations", its);
  else if(reason == EPS_DIVERGED_BREAKDOWN)
    Msg::Error("SLEPc generic breakdown in method");
  else if(reason == EPS_DIVERGED_NONSYMMETRIC)
    Msg::Error("The operator is nonsymmetric");
  
  // get number of converged approximate eigenpairs
  PetscInt nconv;
  _try(EPSGetConverged(eps, &nconv));
  Msg::Info("SLEPc number of converged eigenpairs: %d", nconv);
  
  // ignore additional eigenvalues if we get more than what we asked
  if(nconv > nev) nconv = nev;
  
  // print eigenvalues and store eigenvectors in DofData
  _storeEigenVectors(DofData_P, nconv, eps, PETSC_NULL);
  
  _try(EPSDestroy(eps));
}

static void _quadraticEVP(struct DofData * DofData_P, int numEigenValues, 
                          double shift_r, double shift_i)
{
  Msg::Info("Solving quadratic eigenvalue problem");

  // GetDP notation: -w^2 M3 x + iw M2 x + M1 x = 0
  // SLEPC notations for quadratic EVP: (\lambda^2 M + \lambda C + K) x = 0
  LinAlg_ProdMatrixDouble(&DofData_P->M3, -1.0, &DofData_P->M3);
  LinAlg_ProdMatrixComplex(&DofData_P->M2, 0.0, -1.0, &DofData_P->M2);
  Mat M = DofData_P->M3.M;
  Mat C = DofData_P->M2.M;
  Mat K = DofData_P->M1.M;
  QEP qep;
  
  _try(QEPCreate(PETSC_COMM_WORLD, &qep));
  _try(QEPSetOperators(qep, M, C, K));
  _try(QEPSetProblemType(qep, QEP_GENERAL));

  // set some default options
  _try(QEPSetDimensions(qep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  _try(QEPSetTolerances(qep, 1.e-7, 50));
  _try(QEPSetType(qep, QEPLINEAR)); 
                  // QEPLINEAR or QEPQARNOLDI
  _try(QEPSetWhichEigenpairs(qep, QEP_SMALLEST_MAGNITUDE));
                             // QEP_SMALLEST_REAL, QEP_LARGEST_MAGNITUDE, ...

  // override these options at runtime, petsc-style
  _try(QEPSetFromOptions(qep));

  // force options specified directly as arguments
  if(numEigenValues)
    _try(QEPSetDimensions(qep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));

  // print info
  const QEPType type;
  _try(QEPGetType(qep, &type));
  Msg::Info("SLEPc solution method: %s", type);
  PetscInt nev;
  _try(QEPGetDimensions(qep, &nev, PETSC_NULL, PETSC_NULL));
  Msg::Info("SLEPc number of requested eigenvalues: %d", nev);
  PetscReal tol;
  PetscInt maxit;
  _try(QEPGetTolerances(qep, &tol, &maxit));
  Msg::Info("SLEPc stopping condition: tol=%g, maxit=%d", tol, maxit);

  // solve
  _try(QEPSolve(qep));

  // check convergence
  int its;
  _try(QEPGetIterationNumber(qep, &its));
  QEPConvergedReason reason;
  _try(QEPGetConvergedReason(qep, &reason));
  if(reason == QEP_CONVERGED_TOL)
    Msg::Info("SLEPc converged in %d iterations", its);
  else if(reason == QEP_DIVERGED_ITS)
    Msg::Error("SLEPc diverged after %d iterations", its);
  else if(reason == QEP_DIVERGED_BREAKDOWN)
    Msg::Error("SLEPc generic breakdown in method");
  else if(reason == QEP_CONVERGED_ITERATING)
    Msg::Error("QEP converged interating");

  // get number of converged approximate eigenpairs
  PetscInt nconv;
  _try(QEPGetConverged(qep, &nconv));
  Msg::Info("SLEPc number of converged eigenpairs: %d", nconv);

  // ignore additional eigenvalues if we get more than what we asked
  if(nconv > nev) nconv = nev;

  // print eigenvalues and store eigenvectors in DofData
  _storeEigenVectors(DofData_P, nconv, PETSC_NULL, qep);
  
  _try(QEPDestroy(qep));

  // restore operators
  LinAlg_ProdMatrixDouble(&DofData_P->M3, -1.0, &DofData_P->M3);
  LinAlg_ProdMatrixComplex(&DofData_P->M2, 0.0, -1.0, &DofData_P->M2);
}

void EigenSolve_SLEPC(struct DofData * DofData_P, int numEigenValues, 
                      double shift_r, double shift_i)
{
  // bail out if we are not in harmonic regime: it's much easier this
  // way (since, for real, non-symmetric matrices we would get complex
  // eigenvectors we could not easily store)
  if(Current.NbrHar != 2)
    Msg::Error("EigenSolve requires system defined with \"Type Complex\"");

  // GenerateSeparate[] creates three matrices M3, M2, M1 such that
  // -w^2 M3 x + iw M2 x + M1 x = b; check Flag_Init[i] to see which
  // operators exist:
  if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3])
    Msg::Error("No System available for EigenSolve: check 'DtDt' and 'GenerateSeparate'");

  if(!DofData_P->Flag_Init[2])
    _linearEVP(DofData_P, numEigenValues, shift_r, shift_i);
  else
    _quadraticEVP(DofData_P, numEigenValues, shift_r, shift_i);
}

#endif
