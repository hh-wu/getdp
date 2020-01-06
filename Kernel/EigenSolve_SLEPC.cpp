// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "GetDPConfig.h"

#if defined(HAVE_SLEPC)

// SLEPc interface for solving eigenvalue problems
//
// SLEPc can solve both linear and quadratic eigenvalue
// problems. SLEPc options can be specified in the .petscrc file, or
// directly on the command line.
//
// For example, to use MUMPs for a linear evp:
//   -eps_type krylovschur
//   -st_ksp_type preonly -st_pc_type lu
//   -st_pc_factor_mat_solver_package mumps
//
// With SLEPc < 3.5, to solve a quadratic evp by linearization, using the first
// canonic form, and building the operator explicitly so we can use a direct
// solver:
//   -qep_type linear -qep_linear_cform 1 -qep_linear_explicitmatrix
//   -qep_eps_type krylovschur
//   -qep_st_ksp_type preonly -qep_st_pc_type lu
//   -qep_st_pc_factor_mat_solver_package mumps
// Or to solve the quadratic evp directly using arnoldi iter:
//   -qep_type qarnoldi -qep_eps_type krylovschur
//   -qep_st_ksp_type gmres -qep_st_pc_type ilu
//
// SLEPc >= 3.5 options are similar, but with pep instead of qep
//
// SLEPc >= 3.7 options are similar, new nep (non-linear class of solvers)

#include <sstream>
#include <string>
#include <cstring>
#include <complex>
#include "ProData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "Message.h"
#include "MallocUtils.h"
#include <slepceps.h>
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5)
#include <slepcqep.h>
#else
#include <slepcpep.h>
#include <slepcnep.h> //nleigchange
#endif

#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 9)
#define PCFactorSetMatSolverPackage PCFactorSetMatSolverType
#endif

extern struct CurrentData Current ;

extern void _fillseq(Vec &V, Vec &Vseq); // from LinAlg_PETsc.cpp

static void _try(int ierr)
{
  CHKERRCONTINUE(ierr);
  if(PetscUnlikely(ierr)){
    const char *text;
    PetscErrorMessage(ierr, &text, 0);
    Message::Error("PETSc error: %s", text);
    Message::SetLastPETScError(ierr);
  }
}

static PetscErrorCode _myMonitor(const char *str, int its, int nconv, PetscScalar *eigr,
                                 PetscScalar *eigi, PetscReal* errest)
{
  if(!its) return 0;
  std::ostringstream sstream;
  sstream << "  " << its << " " << str << " nconv=" << nconv << " first unconverged value "
#if defined(PETSC_USE_COMPLEX)
          << PetscRealPart(eigr[nconv]) << " + i * (" << PetscImaginaryPart(eigr[nconv]) << ")"
#else
          << eigr[nconv] << " + i * (" << eigi[nconv] << ")"
#endif
          << " error " << errest[nconv];
  Message::Info("%s", sstream.str().c_str());
  return 0;
}

static PetscErrorCode _myEpsMonitor(EPS eps, int its, int nconv, PetscScalar *eigr,
                                    PetscScalar *eigi, PetscReal* errest, int nest,
                                    void *mctx)
{
  return _myMonitor("EPS", its, nconv, eigr, eigi, errest);
}

#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5)

static PetscErrorCode _myQepMonitor(QEP qep, int its, int nconv, PetscScalar *eigr,
                                    PetscScalar *eigi, PetscReal* errest, int nest,
                                    void *mctx)
{
  return _myMonitor("QEP", its, nconv, eigr, eigi, errest);
}

#else

static PetscErrorCode _myPepMonitor(PEP pep, int its, int nconv, PetscScalar *eigr,
                                    PetscScalar *eigi, PetscReal* errest, int nest,
                                    void *mctx)
{
  return _myMonitor("PEP", its, nconv, eigr, eigi, errest);
}

#endif

static void _storeEigenVectors(struct DofData *DofData_P, int nconv, EPS eps,
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5)
                               QEP qep,
#else
                               PEP pep,
                               NEP nep,
#endif
                               int filterExpressionIndex)
{
  if (nconv <= 0) return;

  // temporary (parallel) vectors to store real and imaginary part of eigenvectors
  Vec xr, xi;
  if(!nep){
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 6)
    _try(MatGetVecs(DofData_P->M1.M, PETSC_NULL, &xr));
    _try(MatGetVecs(DofData_P->M1.M, PETSC_NULL, &xi));
#else
    _try(MatCreateVecs(DofData_P->M1.M, PETSC_NULL, &xr));
    _try(MatCreateVecs(DofData_P->M1.M, PETSC_NULL, &xi));
#endif
  }
  else{
    _try(MatCreateVecs(DofData_P->M7.M, PETSC_NULL, &xr));
    _try(MatCreateVecs(DofData_P->M7.M, PETSC_NULL, &xi));
  }
  // temporary sequential vectors to transfer eigenvectors to getdp
  Vec xr_seq, xi_seq;
  if(Message::GetCommSize() > 1){
    PetscInt n;
    _try(VecGetSize(xr, &n));
    _try(VecCreateSeq(PETSC_COMM_SELF, n, &xr_seq));
    _try(VecCreateSeq(PETSC_COMM_SELF, n, &xi_seq));
  }

  Message::Info("               %-24s%-24s%-12s", "Re", "Im", "Relative error");
  bool newsol = false;
  for (int i = 0; i < nconv; i++){
    PetscScalar kr, ki;
    PetscReal error;
    if(eps){
      _try(EPSGetEigenpair(eps, i, &kr, &ki, xr, xi));
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 6)
      _try(EPSComputeRelativeError(eps, i, &error));
#else
      _try(EPSComputeError(eps, i, EPS_ERROR_RELATIVE, &error));
#endif
    }
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5)
    else if (qep){
      _try(QEPGetEigenpair(qep, i, &kr, &ki, xr, xi));
      _try(QEPComputeRelativeError(qep, i, &error));
    }
#else
    else if (pep){
      _try(PEPGetEigenpair(pep, i, &kr, &ki, xr, xi));
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 6)
      _try(PEPComputeRelativeError(pep, i, &error));
#else
      _try(PEPComputeError(pep, i, PEP_ERROR_BACKWARD, &error));
#endif
    }
#endif
    else if(nep){
      _try(NEPGetEigenpair(nep, i, &kr, &ki, xr, xi));
      _try(NEPComputeError(nep, i, NEP_ERROR_RELATIVE, &error));
    }

#if defined(PETSC_USE_COMPLEX)
    PetscReal re = PetscRealPart(kr), im = PetscImaginaryPart(kr);
#else
    PetscReal re = kr, im = ki;
#endif
    double ore=0, oim=0;
    if(eps){
      Message::Info("EIG %03d w^2 = %s%.16e %s%.16e  %3.6e",
                    i, (re < 0) ? "" : " ", re, (im < 0) ? "" : " ", im, error);
      double abs = sqrt(re * re + im * im), arg = atan2(im, re);
      ore = sqrt(abs) * cos(0.5*arg);
      oim = sqrt(abs) * sin(0.5*arg);
      double fre = ore / 2. / M_PI, fim = oim / 2. / M_PI;
      Message::Info("          w = %s%.16e %s%.16e",
                    (ore < 0) ? "" : " ", ore, (oim < 0) ? "" : " ", oim);
      Message::Info("          f = %s%.16e %s%.16e",
                    (fre < 0) ? "" : " ", fre, (fim < 0) ? "" : " ", fim);
    }
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5)
    else if(qep){
      // lambda = iw
      ore = im;
      oim = -re;
      Message::Info("EIG %03d   w = %s%.16e %s%.16e  %3.6e",
                    i, (ore < 0) ? "" : " ", ore, (oim < 0) ? "" : " ", oim, error);
      double fre = ore / 2. / M_PI, fim = oim / 2. / M_PI;
      Message::Info("          f = %s%.16e %s%.16e",
                    (fre < 0) ? "" : " ", fre, (fim < 0) ? "" : " ", fim);
    }
#else
    else if (pep){
      // lambda = iw
      ore = im;
      oim = -re;
      Message::Info("EIG %03d   w = %s%.16e %s%.16e  %3.6e",
                    i, (ore < 0) ? "" : " ", ore, (oim < 0) ? "" : " ", oim, error);
      double fre = ore / 2. / M_PI, fim = oim / 2. / M_PI;
      Message::Info("          f = %s%.16e %s%.16e",
                    (fre < 0) ? "" : " ", fre, (fim < 0) ? "" : " ", fim);
    }
#endif
    else if (nep){
      // lambda = iw
      ore = im;
      oim = -re;
      Message::Info("EIG %03d   w = %s%.16e %s%.16e  %3.6e",
                    i, (ore < 0) ? "" : " ", ore, (oim < 0) ? "" : " ", oim, error);
      double fre = ore / 2. / M_PI, fim = oim / 2. / M_PI;
      Message::Info("          f = %s%.16e %s%.16e",
                    (fre < 0) ? "" : " ", fre, (fim < 0) ? "" : " ", fim);
    }

    // update the current value of Time and TimeImag so that
    // $EigenvalueReal and $EigenvalueImag are up-to-date
    Current.Time = ore;
    Current.TimeImag = oim;

    // test filter expression and continue without storing if false
    if(filterExpressionIndex >= 0){
      struct Value val;
      Get_ValueOfExpressionByIndex(filterExpressionIndex, NULL, 0., 0., 0., &val);
      if(!val.Val[0]){
        Message::Debug("Skipping eigenvalue %g + i * %g", ore, oim);
        continue;
      }
    }

    Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Re(Omega)",
                                   std::vector<double>(1, ore));
    Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Im(Omega)",
                                   std::vector<double>(1, oim));

    // create new solution vector if necessary
    if(newsol) {
      struct Solution Solution_S;
      Solution_S.TimeFunctionValues = NULL;
      LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof);
      List_Add(DofData_P->Solutions, &Solution_S);
      DofData_P->CurrentSolution = (struct Solution*)
        List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);
    }
    newsol = true;
    DofData_P->CurrentSolution->Time = ore;
    DofData_P->CurrentSolution->TimeImag = oim;
    DofData_P->CurrentSolution->TimeStep = (int)Current.TimeStep;
    Free(DofData_P->CurrentSolution->TimeFunctionValues);
    DofData_P->CurrentSolution->TimeFunctionValues = NULL;
    DofData_P->CurrentSolution->SolutionExist = 1;

    // store eigenvector
    PetscScalar *tmpr, *tmpi;
    if(Message::GetCommSize() == 1){
      _try(VecGetArray(xr, &tmpr));
      _try(VecGetArray(xi, &tmpi));
    }
    else{
      _fillseq(xr, xr_seq);
      _fillseq(xi, xi_seq);
      _try(VecGetArray(xr_seq, &tmpr));
      _try(VecGetArray(xi_seq, &tmpi));
    }

    int incr = (Current.NbrHar == 2) ? gCOMPLEX_INCREMENT : 1;
    for(int l = 0; l < DofData_P->NbrDof; l += incr){
#if defined(PETSC_USE_COMPLEX)
      double var_r = (double)PetscRealPart(tmpr[l]);
      double var_i = (double)PetscImaginaryPart(tmpr[l]);
#else
      double var_r = (double)tmpr[l];
      double var_i = (double)tmpi[l];
#endif
      if(Current.NbrHar == 2)
        LinAlg_SetComplexInVector(var_r, var_i, &DofData_P->CurrentSolution->x, l, l+1);
      else
        LinAlg_SetDoubleInVector(var_r, &DofData_P->CurrentSolution->x, l);
    }

    if(Message::GetCommSize() == 1){
      _try(VecRestoreArray(xr, &tmpr));
      _try(VecRestoreArray(xi, &tmpi));
    }
    else{
      _try(VecRestoreArray(xr_seq, &tmpr));
      _try(VecRestoreArray(xi_seq, &tmpi));
    }

    LinAlg_AssembleVector(&DofData_P->CurrentSolution->x);

    // SLEPc returns eigenvectors normalized in L-2 norm. Renormalize them in
    // L-infty norm so that the absolute value of the largest element is 1
    double norm = 0;
    LinAlg_VectorNormInf(&DofData_P->CurrentSolution->x, &norm);
    if(norm > 1.e-16)
      LinAlg_ProdVectorDouble(&DofData_P->CurrentSolution->x, 1. / norm,
                              &DofData_P->CurrentSolution->x);

    // increment the global timestep counter so that a future
    // GenerateSystem knows which solutions exist
    Current.TimeStep += 1.;
  }

#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)
  _try(VecDestroy(&xr));
  _try(VecDestroy(&xi));
  if(Message::GetCommSize() > 1){
    _try(VecDestroy(&xr_seq));
    _try(VecDestroy(&xi_seq));
  }
#else
  _try(VecDestroy(xr));
  _try(VecDestroy(xi));
  if(Message::GetCommSize() > 1){
    _try(VecDestroy(xr_seq));
    _try(VecDestroy(xi_seq));
  }
#endif
}

static void _linearEVP(struct DofData * DofData_P, int numEigenValues,
                       double shift_r, double shift_i, int filterExpressionIndex)
{
  Message::Info("Solving linear eigenvalue problem");

  // GetDP notation: -w^2 M3 x (+ iw M2 x) + M1 x = 0
  // SLEPC notation for generalized linear EVP: A x - \lambda B x = 0
  Mat A = DofData_P->M1.M;
  Mat B = DofData_P->M3.M;
  EPS eps;
  _try(EPSCreate(PETSC_COMM_WORLD, &eps));
  _try(EPSSetOperators(eps, A, B));
  _try(EPSSetProblemType(eps, EPS_GNHEP));

  // set some default options
  _try(EPSSetDimensions(eps, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  _try(EPSSetTolerances(eps, 1.e-6, 100));
  _try(EPSSetType(eps, EPSKRYLOVSCHUR));
  _try(EPSSetWhichEigenpairs(eps, EPS_SMALLEST_MAGNITUDE));
  _try(EPSMonitorSet(eps, _myEpsMonitor, PETSC_NULL, PETSC_NULL));

  // override these options at runtime, petsc-style
  _try(EPSSetFromOptions(eps));

  // force options specified directly as arguments
  if(numEigenValues)
    _try(EPSSetDimensions(eps, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));

  // apply shift-and-invert transformation
  ST st;
  _try(EPSGetST(eps, &st));
  _try(STSetType(st, STSINVERT));
  _try(EPSSetWhichEigenpairs(eps, EPS_TARGET_MAGNITUDE));
  if(shift_r || shift_i){
#if defined(PETSC_USE_COMPLEX)
    PetscScalar shift = shift_r + PETSC_i * shift_i;
#else
    PetscScalar shift = shift_r;
    if(shift_i)
      Message::Warning("Imaginary part of shift discarded: use PETSc with complex numbers");
#endif
    //_try(STSetShift(st, shift));
    _try(EPSSetTarget(eps, shift));
  }

  KSP ksp;
  _try(STGetKSP(st, &ksp));
  _try(KSPSetType(ksp, "preonly"));
  PC pc;
  _try(KSPGetPC(ksp, &pc));
  _try(PCSetType(pc, PCLU));
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
  _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#endif

  // print info
#if (PETSC_VERSION_RELASE == 0) || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR == 4))
  const char *type = "";
#else
  const EPSType type;
#endif
  _try(EPSGetType(eps, &type));
  Message::Info("SLEPc solution method: %s", type);
  PetscInt nev;
  _try(EPSGetDimensions(eps, &nev, PETSC_NULL, PETSC_NULL));
  Message::Info("SLEPc number of requested eigenvalues: %d", nev);
  PetscReal tol;
  PetscInt maxit;
  _try(EPSGetTolerances(eps, &tol, &maxit));
  Message::Info("SLEPc stopping condition: tol=%g, maxit=%d", tol, maxit);

  // solve
  Message::Info("SLEPc solving...");
  _try(EPSSolve(eps));

  // check convergence
  int its;
  _try(EPSGetIterationNumber(eps, &its));
  EPSConvergedReason reason;
  _try(EPSGetConvergedReason(eps, &reason));
  if(reason == EPS_CONVERGED_TOL)
    Message::Info("SLEPc converged in %d iterations", its);
  else if(reason == EPS_DIVERGED_ITS)
    Message::Error("SLEPc diverged after %d iterations", its);
  else if(reason == EPS_DIVERGED_BREAKDOWN)
    Message::Error("SLEPc generic breakdown in method");
#if !((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2))
  else if(reason == EPS_DIVERGED_NONSYMMETRIC)
    Message::Error("The operator is nonsymmetric");
#endif

  // get number of converged approximate eigenpairs
  PetscInt nconv;
  _try(EPSGetConverged(eps, &nconv));
  Message::Info("SLEPc number of converged eigenpairs: %d", nconv);

  // ignore additional eigenvalues if we get more than what we asked
  if(nconv > nev) nconv = nev;

  // print eigenvalues and store eigenvectors in DofData
  _storeEigenVectors(DofData_P, nconv, eps, PETSC_NULL,PETSC_NULL , filterExpressionIndex);

#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)
  _try(EPSDestroy(&eps));
#else
  _try(EPSDestroy(eps));
#endif
}

#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5)
// SLEPc < 3.5 interface using QEP

static void _quadraticEVP(struct DofData * DofData_P, int numEigenValues,
                          double shift_r, double shift_i, int filterExpressionIndex)
{
  Message::Info("Solving quadratic eigenvalue problem using QEP");

  // GetDP notation: -w^2 M3 x + iw M2 x + M1 x = 0
  // SLEPC notations for quadratic EVP: (\lambda^2 M + \lambda C + K) x = 0
  Mat M = DofData_P->M3.M;
  Mat C = DofData_P->M2.M;
  Mat K = DofData_P->M1.M;

  QEP qep;
  _try(QEPCreate(PETSC_COMM_WORLD, &qep));
  _try(QEPSetOperators(qep, M, C, K));
  _try(QEPSetProblemType(qep, QEP_GENERAL));

  // set some default options
  _try(QEPSetDimensions(qep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  _try(QEPSetTolerances(qep, 1.e-6, 100));
  _try(QEPSetType(qep, QEPLINEAR));
  _try(QEPSetWhichEigenpairs(qep, QEP_SMALLEST_MAGNITUDE));
  _try(QEPMonitorSet(qep, _myQepMonitor, PETSC_NULL, PETSC_NULL));

  // if we linearize we can set additional options
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR == 4)
  const char *type = "";
#else
  const QEPType type;
#endif
  _try(QEPGetType(qep, &type));
  if(!strcmp(type, QEPLINEAR)){
    EPS eps;
    _try(QEPLinearGetEPS(qep, &eps));
    _try(EPSSetType(eps, EPSKRYLOVSCHUR));

    // apply shift-and-invert transformation
    ST st;
    _try(EPSGetST(eps, &st));
    _try(STSetType(st, STSINVERT));
    _try(EPSSetWhichEigenpairs(eps, EPS_TARGET_MAGNITUDE));
    if(shift_r || shift_i){
#if defined(PETSC_USE_COMPLEX)
      PetscScalar shift = shift_r + PETSC_i * shift_i;
#else
      PetscScalar shift = shift_r;
      if(shift_i)
        Message::Warning("Imaginary part of shift discarded: use PETSc with complex numbers");
#endif
      _try(EPSSetTarget(eps, shift));
    }
    _try(QEPLinearSetExplicitMatrix(qep, PETSC_TRUE));
    Message::Info("SLEPc forcing explicit construction of matrix");
    KSP ksp;
    _try(STGetKSP(st, &ksp));
    _try(KSPSetType(ksp, "preonly"));
    PC pc;
    _try(KSPGetPC(ksp, &pc));
    _try(PCSetType(pc, PCLU));
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
    _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#endif
  }

  // override these options at runtime, if necessary
  _try(QEPSetFromOptions(qep));

  // force options specified directly as arguments
  if(numEigenValues)
    _try(QEPSetDimensions(qep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));

  // print info
  Message::Info("SLEPc solution method: %s", type);
  PetscInt nev;
  _try(QEPGetDimensions(qep, &nev, PETSC_NULL, PETSC_NULL));
  Message::Info("SLEPc number of requested eigenvalues: %d", nev);
  PetscReal tol;
  PetscInt maxit;
  _try(QEPGetTolerances(qep, &tol, &maxit));
  Message::Info("SLEPc stopping condition: tol=%g, maxit=%d", tol, maxit);

  // solve
  _try(QEPSolve(qep));

  // check convergence
  int its;
  _try(QEPGetIterationNumber(qep, &its));
  QEPConvergedReason reason;
  _try(QEPGetConvergedReason(qep, &reason));
  if(reason == QEP_CONVERGED_TOL)
    Message::Info("SLEPc converged in %d iterations", its);
  else if(reason == QEP_DIVERGED_ITS)
    Message::Error("SLEPc diverged after %d iterations", its);
  else if(reason == QEP_DIVERGED_BREAKDOWN)
    Message::Error("SLEPc generic breakdown in method");
  else if(reason == QEP_CONVERGED_ITERATING)
    Message::Error("QEP converged interating");

  // get number of converged approximate eigenpairs
  PetscInt nconv;
  _try(QEPGetConverged(qep, &nconv));
  Message::Info("SLEPc number of converged eigenpairs: %d", nconv);

  // ignore additional eigenvalues if we get more than what we asked
  if(nconv > nev) nconv = nev;

  // print eigenvalues and store eigenvectors in DofData
  _storeEigenVectors(DofData_P, nconv, PETSC_NULL, qep, PETSC_NULL, filterExpressionIndex);

#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)
  _try(QEPDestroy(&qep));
#else
  _try(QEPDestroy(qep));
#endif
}

#else // SLEPc >= 3.5 interface using PEP

static void _quadraticEVP(struct DofData * DofData_P, int numEigenValues,
                          double shift_r, double shift_i, int filterExpressionIndex)
{
  Message::Info("Solving quadratic eigenvalue problem using PEP");

  // GetDP notation: -w^2 M3 x + iw M2 x + M1 x = 0
  // SLEPC notations for quadratic EVP: (\lambda^2 A[2] + \lambda A[1] + A[0]) x = 0

  PEP pep;
  ST  st;
  KSP ksp;
  PC pc;
  PEPType type;

  Mat A[3] = {DofData_P->M1.M, DofData_P->M2.M, DofData_P->M3.M};

  _try(PEPCreate(PETSC_COMM_WORLD, &pep));
  _try(PEPSetOperators(pep, 3, A));
  _try(PEPSetProblemType(pep, PEP_GENERAL));

  // set some default options
  _try(PEPSetDimensions(pep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  _try(PEPSetTolerances(pep, 1.e-6, 100));
  // _try(PEPSetType(pep, PEPLINEAR));
  _try(PEPSetType(pep, PEPTOAR));
  _try(PEPGetST(pep, &st));
  _try(STSetType(st, STSINVERT));
  _try(PEPSetWhichEigenpairs(pep, PEP_TARGET_MAGNITUDE));
  _try(STGetKSP(st, &ksp));
  _try(KSPSetType(ksp, KSPPREONLY));
  _try(KSPGetPC(ksp, &pc));
  _try(PCSetType(pc, PCLU));
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
  _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#endif
  _try(PEPMonitorSet(pep, _myPepMonitor, PETSC_NULL, PETSC_NULL));
#if defined(PETSC_USE_COMPLEX)
  PetscScalar shift = shift_r + PETSC_i * shift_i;
#else
  PetscScalar shift = shift_r;
  Message::Warning("Imaginary part of shift discarded: use PETSc with complex numbers");
#endif
  _try(PEPSetTarget(pep, shift));

//   _try(PEPMonitorSet(pep, _myPepMonitor, PETSC_NULL, PETSC_NULL));
//
//   // shift
//   PetscScalar shift = 0;
//   if(shift_r || shift_i){
// #if defined(PETSC_USE_COMPLEX)
//     shift = shift_r + PETSC_i * shift_i;
// #else
//     shift = shift_r;
//     if(shift_i)
//       Message::Warning("Imaginary part of shift discarded: use PETSc with complex numbers");
// #endif
//   }
//
//   if(shift_r || shift_i){
//     _try(PEPSetTarget(pep, shift));
//     _try(PEPSetWhichEigenpairs(pep, PEP_TARGET_MAGNITUDE));
//   }
//
//   // if we linearize we can set additional options
//   const char *type = "";
//   _try(PEPGetType(pep, &type));
//   if(!strcmp(type, PEPLINEAR)){
//     EPS eps;
//     _try(PEPLinearGetEPS(pep, &eps));
//     _try(EPSSetType(eps, EPSKRYLOVSCHUR));
//     ST st;
//     _try(EPSGetST(eps, &st));
//     _try(STSetType(st, STSINVERT));
//     _try(EPSSetWhichEigenpairs(eps, EPS_TARGET_MAGNITUDE));
//     if(shift_r || shift_i){
//       _try(EPSSetTarget(eps, shift));
//     }
//     _try(PEPLinearSetExplicitMatrix(pep, PETSC_TRUE));
//     Message::Info("SLEPc forcing explicit construction of matrix");
//     KSP ksp;
//     _try(STGetKSP(st, &ksp));
//     _try(KSPSetType(ksp, "preonly"));
//     PC pc;
//     _try(KSPGetPC(ksp, &pc));
//     _try(PCSetType(pc, PCLU));
// #if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
//     _try(PCFactorSetMatSolverPackage(pc, "mumps"));
// #endif
//     _try(EPSSetFromOptions(eps));
//   }

#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 6)
  _try(PEPSetScale(pep, PEP_SCALE_SCALAR, PETSC_DECIDE, PETSC_DECIDE, PETSC_DECIDE));
#else
  _try(PEPSetScale(pep, PEP_SCALE_SCALAR, PETSC_DECIDE, PETSC_NULL, PETSC_NULL,
                   PETSC_DECIDE, PETSC_DECIDE));
#endif

  // override these options at runtime, petsc-style
  _try(PEPSetFromOptions(pep));

  // force options specified directly as arguments
  if(numEigenValues){
    _try(PEPSetDimensions(pep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  }

  // print info
  _try(PEPGetType(pep, &type));
  Message::Info("SLEPc solution method: %s", type);
  PetscInt nev;
  _try(PEPGetDimensions(pep, &nev, PETSC_NULL, PETSC_NULL));
  Message::Info("SLEPc number of requested eigenvalues: %d", nev);
  PetscReal tol;
  PetscInt maxit;
  _try(PEPGetTolerances(pep, &tol, &maxit));
  Message::Info("SLEPc stopping condition: tol=%g, maxit=%d", tol, maxit);

  // solve
  _try(PEPSolve(pep));

  // check convergence
  int its;
  _try(PEPGetIterationNumber(pep, &its));
  PEPConvergedReason reason;
  _try(PEPGetConvergedReason(pep, &reason));
  if(reason == PEP_CONVERGED_TOL)
    Message::Info("SLEPc converged in %d iterations", its);
  else if(reason == PEP_DIVERGED_ITS)
    Message::Error("SLEPc diverged after %d iterations", its);
  else if(reason == PEP_DIVERGED_BREAKDOWN)
    Message::Error("SLEPc generic breakdown in method");

  // get number of converged approximate eigenpairs
  PetscInt nconv;
  _try(PEPGetConverged(pep, &nconv));
  Message::Info("SLEPc number of converged eigenpairs: %d", nconv);

  // ignore additional eigenvalues if we get more than what we asked
  if(nconv > nev) nconv = nev;

  // print eigenvalues and store eigenvectors in DofData
  _storeEigenVectors(DofData_P, nconv, PETSC_NULL, pep, PETSC_NULL, filterExpressionIndex);

  _try(PEPDestroy(&pep));
}

static void _polynomialEVP(struct DofData * DofData_P, int numEigenValues,
                           double shift_r, double shift_i, int filterExpressionIndex)
{
  PEP pep;
  ST  st;
  KSP ksp;
  PC pc;

  Message::Info("Solving polynomial eigenvalue problem using PEP");

  _try(PEPCreate(PETSC_COMM_WORLD, &pep));
  if(DofData_P->Flag_Init[6]){
    Message::Info("Solving polynomial i*w^5 M6 x + w^4 M5 x + -iw^3 M4 x +"
                  " -w^2 M3 x + iw M2 x + M1 x = 0 eigenvalue problem using PEP");
    Mat A[6] = {DofData_P->M1.M, DofData_P->M2.M, DofData_P->M3.M,
                DofData_P->M4.M, DofData_P->M5.M, DofData_P->M6.M};
    _try(PEPSetOperators(pep, 6, A));
  }
  if(DofData_P->Flag_Init[5] && !DofData_P->Flag_Init[6]){
    Message::Info("Solving polynomial w^4 M5 x + -iw^3 M4 x + -w^2 M3 x + "
                  "iw M2 x + M1 x = 0 eigenvalue problem using PEP");
    Mat A[5] = {DofData_P->M1.M, DofData_P->M2.M, DofData_P->M3.M,
                DofData_P->M4.M, DofData_P->M5.M};
    _try(PEPSetOperators(pep, 5, A));
  }
  if(!DofData_P->Flag_Init[5] && !DofData_P->Flag_Init[6]){
    Message::Info("Solving polynomial -iw^3 M4 x + -w^2 M3 x + iw M2 x + "
                  "M1 x = 0 eigenvalue problem using PEP");
    Mat A[4] = {DofData_P->M1.M, DofData_P->M2.M, DofData_P->M3.M,
                DofData_P->M4.M};
    _try(PEPSetOperators(pep, 4, A));
  }
  _try(PEPSetProblemType(pep, PEP_GENERAL));

  // set some default options
  _try(PEPSetDimensions(pep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  _try(PEPSetTolerances(pep, 1.e-6, 100));
  _try(PEPSetType(pep, PEPTOAR));
  _try(PEPGetST(pep, &st));
  _try(STSetType(st, STSINVERT));
  _try(PEPSetWhichEigenpairs(pep, PEP_TARGET_MAGNITUDE));
  _try(STGetKSP(st, &ksp));
  _try(KSPSetType(ksp, KSPPREONLY));
  _try(KSPGetPC(ksp, &pc));
  _try(PCSetType(pc, PCLU));
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
  _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#endif
  _try(PEPMonitorSet(pep, _myPepMonitor, PETSC_NULL, PETSC_NULL));
#if defined(PETSC_USE_COMPLEX)
  PetscScalar shift = shift_r + PETSC_i * shift_i;
#else
  PetscScalar shift = shift_r;
#endif
  _try(PEPSetTarget(pep, shift));
  // _try(PEPSetScale(pep,PEP_SCALE_BOTH,PETSC_DECIDE,PETSC_DECIDE,PETSC_DECIDE));
  _try(PEPSetFromOptions(pep));

  // force options specified directly as arguments
  if(numEigenValues){
    _try(PEPSetDimensions(pep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  }

  // print info
  // Message::Info("SLEPc solution method: %s", type);
  PetscInt nev;
  _try(PEPGetDimensions(pep, &nev, PETSC_NULL, PETSC_NULL));
  Message::Info("SLEPc number of requested eigenvalues: %d", nev);
  PetscReal tol;
  PetscInt maxit;
  _try(PEPGetTolerances(pep, &tol, &maxit));
  Message::Info("SLEPc stopping condition: tol=%g, maxit=%d", tol, maxit);
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 6)
  _try(PEPSetScale(pep, PEP_SCALE_SCALAR, PETSC_DECIDE, PETSC_DECIDE, PETSC_DECIDE));
#else
  _try(PEPSetScale(pep, PEP_SCALE_SCALAR, PETSC_DECIDE, PETSC_NULL, PETSC_NULL,
                   PETSC_DECIDE, PETSC_DECIDE));
#endif

  // solve
  _try(PEPSolve(pep));

  // check convergence
  int its;
  _try(PEPGetIterationNumber(pep, &its));
  PEPConvergedReason reason;
  _try(PEPGetConvergedReason(pep, &reason));
  if(reason == PEP_CONVERGED_TOL)
    Message::Info("SLEPc converged in %d iterations", its);
  else if(reason == PEP_DIVERGED_ITS)
    Message::Error("SLEPc diverged after %d iterations", its);
  else if(reason == PEP_DIVERGED_BREAKDOWN)
    Message::Error("SLEPc generic breakdown in method");
  // _try(PEPView(pep, PETSC_VIEWER_STDOUT_SELF));

  // get number of converged approximate eigenpairs
  PetscInt nconv;
  _try(PEPGetConverged(pep, &nconv));
  Message::Info("SLEPc number of converged eigenpairs: %d", nconv);

  // ignore additional eigenvalues if we get more than what we asked
  if(nconv > nev) nconv = nev;

  // print eigenvalues and store eigenvectors in DofData
  _storeEigenVectors(DofData_P, nconv, PETSC_NULL, pep, PETSC_NULL, filterExpressionIndex);

  _try(PEPDestroy(&pep));
}

#endif

#if defined(PETSC_USE_COMPLEX)

static PetscErrorCode _myNepMonitor(NEP nep, int its, int nconv, PetscScalar *eigr,
                                    PetscScalar *eigi, PetscReal* errest, int nest,
                                    void *mctx)
{
  return _myMonitor("NEP", its, nconv, eigr, eigi, errest);
}

static void _rationalEVP(struct DofData * DofData_P, int numEigenValues,
                         double shift_r, double shift_i, int filterExpressionIndex,
                         List_T *RationalCoefsNum, List_T *RationalCoefsDen)
{
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 8)
  NEP nep;
  NEPType type;
  int max_Nchar = 1000;
  char str_coefsNum[6][max_Nchar];
  char str_coefsDen[6][max_Nchar];
  char str_buff[50];
  int NumOperators = 2;
#if defined(PETSC_USE_COMPLEX)
  PetscScalar shift = shift_r + PETSC_i * shift_i;
#else
  Message::Warning("Discarding imaginary part in shift");
  PetscScalar shift = shift_r;
#endif

  if(List_Nbr(RationalCoefsNum) > 6 || List_Nbr(RationalCoefsDen) > 6){
    Message::Error("Too many rational terms in nonlinear eigenvalue problem (max = 6)");
    return;
  }

  std::vector<PetscScalar> tabCoefsNum[6], tabCoefsDen[6];
  for(int i = 0; i < List_Nbr(RationalCoefsNum); i++){
    List_T *coefs;
    List_Read(RationalCoefsNum, i, &coefs);
    for(int j = 0; j < List_Nbr(coefs); j++){
      double c; List_Read(coefs, j, &c);
      tabCoefsNum[i].push_back(c);
    }
  }
  for(int i = 0; i < List_Nbr(RationalCoefsDen); i++){
    List_T *coefs;
    List_Read(RationalCoefsDen, i, &coefs);
    for(int j = 0; j < List_Nbr(coefs); j++){
      double c; List_Read(coefs, j, &c);
      tabCoefsDen[i].push_back(c);
    }
  }

  _try(NEPCreate(PETSC_COMM_WORLD, &nep));

  // NLEig1Dof and NLEig2Dof
  if(DofData_P->Flag_Init[7] &&  DofData_P->Flag_Init[6] &&
     !DofData_P->Flag_Init[5] && !DofData_P->Flag_Init[4] &&
     !DofData_P->Flag_Init[3] && !DofData_P->Flag_Init[2]){
    NumOperators = 2;
    Mat A[2] = {DofData_P->M7.M, DofData_P->M6.M};
    FN funs[2];
    for(int i=0;i<2;i++){
      _try(FNCreate(PETSC_COMM_WORLD, &funs[i]));
      _try(FNSetType(funs[i], FNRATIONAL));
      _try(FNRationalSetNumerator(funs[i], tabCoefsNum[i].size(), &tabCoefsNum[i][0]));
      _try(FNRationalSetDenominator(funs[i], tabCoefsDen[i].size(), &tabCoefsDen[i][0]));
    }
    _try(NEPSetSplitOperator(nep,2,A,funs,SUBSET_NONZERO_PATTERN));
  }
  // NLEig1Dof, NLEig2Dof and  NLEig3Dof
  else if(DofData_P->Flag_Init[7] &&  DofData_P->Flag_Init[6] &&
          DofData_P->Flag_Init[5] && !DofData_P->Flag_Init[4] &&
          !DofData_P->Flag_Init[3] && !DofData_P->Flag_Init[2]){
    NumOperators = 3;
    Mat A[3] = {DofData_P->M7.M, DofData_P->M6.M, DofData_P->M5.M};
    FN funs[3];
    for(int i=0;i<3;i++){
      _try(FNCreate(PETSC_COMM_WORLD,&funs[i]));
      _try(FNSetType(funs[i],FNRATIONAL));
      _try(FNRationalSetNumerator(funs[i], tabCoefsNum[i].size(), &tabCoefsNum[i][0]));
      _try(FNRationalSetDenominator(funs[i], tabCoefsDen[i].size(), &tabCoefsDen[i][0]));
    }
    _try(NEPSetSplitOperator(nep,3,A,funs,SUBSET_NONZERO_PATTERN));
  }
  // NLEig1Dof, NLEig2Dof, NLEig3Dof and NLEig4Dof
  else if(DofData_P->Flag_Init[7] &&  DofData_P->Flag_Init[6] &&
          DofData_P->Flag_Init[5] && DofData_P->Flag_Init[4] &&
          !DofData_P->Flag_Init[3] && !DofData_P->Flag_Init[2]){
    NumOperators = 4;
    Mat A[4] = {DofData_P->M7.M, DofData_P->M6.M, DofData_P->M5.M,
                DofData_P->M4.M};
    FN funs[4];
    for(int i=0;i<4;i++){
      _try(FNCreate(PETSC_COMM_WORLD,&funs[i]));
      _try(FNSetType(funs[i],FNRATIONAL));
      _try(FNRationalSetNumerator(funs[i], tabCoefsNum[i].size(), &tabCoefsNum[i][0]));
      _try(FNRationalSetDenominator(funs[i], tabCoefsDen[i].size(), &tabCoefsDen[i][0]));
    }
    _try(NEPSetSplitOperator(nep,4,A,funs,SUBSET_NONZERO_PATTERN));
  }

  // NLEig1Dof, NLEig2Dof, NLEig3Dof, NLEig4Dof and NLEig5Dof
  else if(DofData_P->Flag_Init[7] &&  DofData_P->Flag_Init[6] &&
          DofData_P->Flag_Init[5] &&  DofData_P->Flag_Init[4] &&
          DofData_P->Flag_Init[3] && !DofData_P->Flag_Init[2]){
    NumOperators = 5;
    Mat A[5] = {DofData_P->M7.M, DofData_P->M6.M, DofData_P->M5.M,
                DofData_P->M4.M, DofData_P->M3.M};
    FN funs[5];
    for(int i=0;i<5;i++){
      _try(FNCreate(PETSC_COMM_WORLD,&funs[i]));
      _try(FNSetType(funs[i],FNRATIONAL));
      _try(FNRationalSetNumerator(funs[i], tabCoefsNum[i].size(), &tabCoefsNum[i][0]));
      _try(FNRationalSetDenominator(funs[i], tabCoefsDen[i].size(), &tabCoefsDen[i][0]));
    }
    _try(NEPSetSplitOperator(nep,5,A,funs,SUBSET_NONZERO_PATTERN));
  }

  // NLEig1Dof, NLEig2Dof, NLEig3Dof, NLEig4Dof, NLEig5Dof and NLEig6Dof
  else if(DofData_P->Flag_Init[7] && DofData_P->Flag_Init[6] &&
          DofData_P->Flag_Init[5] && DofData_P->Flag_Init[4] &&
          DofData_P->Flag_Init[3] && DofData_P->Flag_Init[2]){
    NumOperators = 6;
    Mat A[6] = {DofData_P->M7.M, DofData_P->M6.M, DofData_P->M5.M,
                DofData_P->M4.M, DofData_P->M3.M, DofData_P->M2.M};
    FN funs[6];
    for(int i=0;i<6;i++){
      _try(FNCreate(PETSC_COMM_WORLD,&funs[i]));
      _try(FNSetType(funs[i],FNRATIONAL));
      _try(FNRationalSetNumerator(funs[i], tabCoefsNum[i].size(), &tabCoefsNum[i][0]));
      _try(FNRationalSetDenominator(funs[i], tabCoefsDen[i].size(), &tabCoefsDen[i][0]));
    }
    _try(NEPSetSplitOperator(nep,6,A,funs,SUBSET_NONZERO_PATTERN));
  }
  else{
    Message::Info("Illegal use of Rational...");
  }

  Message::Info("Solving non-linear eigenvalue problem using slepc NEP");
  Message::Info("Number of Operators %d - Setting %d Rational functions :",
                NumOperators, NumOperators);
  for(int k = 0; k < NumOperators; k++){
    sprintf(str_coefsNum[k],"num%d(iw)=", k + 1);
    sprintf(str_coefsDen[k],"den%d(iw)=", k + 1);
    for(unsigned int i = 0; i < tabCoefsNum[k].size() - 1; i++){
      sprintf(str_buff," (%+.2e)*(iw)^%d +",
              PetscRealPart(tabCoefsNum[k][i]), int(tabCoefsNum[k].size()-1-i));
      strcat(str_coefsNum[k],str_buff);
    }
    sprintf(str_buff," (%+.2e)",
            PetscRealPart(tabCoefsNum[k][tabCoefsNum[k].size()-1]));
    strcat(str_coefsNum[k],str_buff);
    for(unsigned int i = 0; i < tabCoefsDen[k].size() - 1; i++){
      sprintf(str_buff," (%+.2e)*(iw)^%d +",
              PetscRealPart(tabCoefsDen[k][i]), int(tabCoefsDen[k].size()-1-i));
      strcat(str_coefsDen[k],str_buff);
    }
    sprintf(str_buff," (%+.2e)",
            PetscRealPart(tabCoefsDen[k][tabCoefsDen[k].size() - 1]));
    strcat(str_coefsDen[k], str_buff);
    Message::Info(str_coefsNum[k]);
    Message::Info(str_coefsDen[k]);
  }

  _try(NEPSetDimensions(nep, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));
  _try(NEPSetTolerances(nep, 1.e-6, PETSC_DEFAULT));
  _try(NEPSetType(nep, NEPNLEIGS));
  _try(NEPSetProblemType(nep, NEP_RATIONAL));
  _try(NEPSetWhichEigenpairs(nep, NEP_TARGET_MAGNITUDE));
  _try(NEPMonitorSet(nep, _myNepMonitor, PETSC_NULL, PETSC_NULL));
  _try(NEPSetTarget(nep, shift));
  _try(NEPSetFromOptions(nep));

  // print info
  _try(NEPGetType(nep, &type));
  Message::Info("SLEPc solution method: %s", type);
  PetscInt nev;
  _try(NEPGetDimensions(nep, &nev, PETSC_NULL, PETSC_NULL));
  Message::Info("SLEPc number of requested eigenvalues: %d", nev);
  PetscReal tol;
  PetscInt maxit;
  _try(NEPGetTolerances(nep, &tol, &maxit));
  Message::Info("SLEPc stopping condition: tol=%g, maxit=%d", tol, maxit);

  // solve
  _try(NEPSolve(nep));

  // check convergence
  int its;
  _try(NEPGetIterationNumber(nep, &its));
  NEPConvergedReason reason;
  _try(NEPGetConvergedReason(nep, &reason));
  if(reason == NEP_CONVERGED_TOL)
    Message::Info("SLEPc converged in %d iterations", its);
  else if(reason == NEP_DIVERGED_ITS)
    Message::Error("SLEPc diverged after %d iterations", its);
  else if(reason == NEP_DIVERGED_BREAKDOWN)
    Message::Error("SLEPc generic breakdown in method");
  // _try(NEPView(nep, PETSC_VIEWER_STDOUT_SELF));

  // get number of converged approximate eigenpairs
  PetscInt nconv;
  _try(NEPGetConverged(nep, &nconv));
  Message::Info("SLEPc number of converged eigenpairs: %d", nconv);

  // ignore additional eigenvalues if we get more than what we asked
  if(nconv > nev) nconv = nev;

  _storeEigenVectors(DofData_P, nconv, PETSC_NULL, PETSC_NULL, nep, filterExpressionIndex);

  _try(NEPDestroy(&nep));
#else
  Message::Error("Nonlinear eigenvalue solver requires PETSc/SLEPc >= 3.8");
#endif
}

#endif

void EigenSolve_SLEPC(struct DofData * DofData_P, int numEigenValues,
                      double shift_r, double shift_i, int FilterExpressionIndex,
                      List_T *RationalCoefsNum, List_T *RationalCoefsDen)
{
  // Warn if we are not in harmonic regime (we won't be able to compute/store
  // complex eigenvectors).
  if(Current.NbrHar != 2){
    Message::Info("EigenSolve will only store the real part of the eigenvectors; "
                  "Define the system with \"Type Complex\" if this is an issue");
  }

#if !defined(PETSC_USE_COMPLEX)
  if(Current.NbrHar == 2){
    Message::Warning("Using PETSc in real arithmetic for complex-simulated-real matrices");
  }
#endif

  // GenerateSeparate[] can create up to six matrices M6, M5, M4, M3, M2, M1 such that
  // i*w^5 M6 x + w^4 M5 x + -iw^3 M4 x + -w^2 M3 x + iw M2 x + M1 x = 0
  // check Flag_Init[i] to see which operators exist.
  if(!DofData_P->Flag_Init[7]){
    if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3]){
      Message::Error("No System available for EigenSolve: check 'DtDt' and 'GenerateSeparate'");
      return;
    }
    if(!DofData_P->Flag_Init[4]&& !DofData_P->Flag_Init[5]&& !DofData_P->Flag_Init[6]){
      if(!DofData_P->Flag_Init[2]){
        // the shift refers to w^2
        _linearEVP(DofData_P, numEigenValues, shift_r, shift_i, FilterExpressionIndex);
      }
      else{
        // the shift refers to w
        _quadraticEVP(DofData_P, numEigenValues, shift_r, shift_i, FilterExpressionIndex);
      }
    }
    else{
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5)
      Message::Error("Please upgrade to slepc >= 3.5.1 for polynomial EVP support!");
      return;
#else
      // the shift refers to w
      _polynomialEVP(DofData_P, numEigenValues, shift_r, shift_i, FilterExpressionIndex);
#endif
    }
  }
  else{
#if defined(PETSC_USE_COMPLEX)
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 7)
    Message::Error("Please upgrade to slepc >= 3.7.3 for non-linear EVP support!");
    return;
#else
    _rationalEVP(DofData_P, numEigenValues, shift_r, shift_i,
                  FilterExpressionIndex, RationalCoefsNum, RationalCoefsDen);
#endif
#else
    Message::Error("Please compile Petsc/Slepc with complex arithmetic for non linear EVP support!");
#endif
  }
}

#endif
