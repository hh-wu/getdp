// GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

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
// To solve a quadratic evp by linearization, using the first canonic
// form, and building the operator explicitly so we can use a direct
// solver:
//   -qep_type linear -qep_linear_cform 1 -qep_linear_explicitmatrix
//   -qep_eps_type krylovschur
//   -qep_st_ksp_type preonly -qep_st_pc_type lu
//   -qep_st_pc_factor_mat_solver_package mumps
//
// To solve the quadratic evp directly using arnoldi iter:
//   -qep_type qarnoldi -qep_eps_type krylovschur
//   -qep_st_ksp_type gmres -qep_st_pc_type ilu

#include <sstream>
#include <string>
#include <cstring>
#include <complex>
#include "ProData.h"
#include "DofData.h"
#include "Message.h"
#include "MallocUtils.h"
#include <slepceps.h>
#include <slepcqep.h>

extern struct CurrentData Current ;

extern void _fillseq(Vec &V, Vec &Vseq); // from LinAlg_PETsc.cpp

static void _try(int ierr){ CHKERRABORT(PETSC_COMM_WORLD, ierr); }

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

static PetscErrorCode _myQepMonitor(QEP qep, int its, int nconv, PetscScalar *eigr,
                                    PetscScalar *eigi, PetscReal* errest, int nest,
                                    void *mctx)
{
  return _myMonitor("QEP", its, nconv, eigr, eigi, errest);
}

static void _storeEigenVectors(struct DofData *DofData_P, int nconv,
                               EPS eps, QEP qep)
{
  if (nconv <= 0) return;

  // temporary (parallel) vectors to store real and imaginary part of eigenvectors
  Vec xr, xi;
  _try(MatGetVecs(DofData_P->M1.M, PETSC_NULL, &xr));
  _try(MatGetVecs(DofData_P->M1.M, PETSC_NULL, &xi));

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

      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/OmegaRe",
                                     ore);
      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/OmegaIm",
                                     oim);
    }
    else{
      // lambda == iw
      ore = im;
      oim = -re;
      Message::Info("EIG %03d   w = %s%.16e %s%.16e  %3.6e",
                    i, (ore < 0) ? "" : " ", ore, (oim < 0) ? "" : " ", oim, error);
      double fre = ore / 2. / M_PI, fim = oim / 2. / M_PI;
      Message::Info("          f = %s%.16e %s%.16e",
                    (fre < 0) ? "" : " ", fre, (fim < 0) ? "" : " ", fim);

      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/OmegaRe",
                                     ore);
      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/OmegaIm",
                                     oim);
    }

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

    for(int l = 0; l < DofData_P->NbrDof; l += gCOMPLEX_INCREMENT){
#if defined(PETSC_USE_COMPLEX)
      double var_r = (double)PetscRealPart(tmpr[l]);
      double var_i = (double)PetscImaginaryPart(tmpr[l]);
#else
      double var_r = (double)tmpr[l];
      double var_i = (double)tmpi[l];
#endif
      LinAlg_SetComplexInVector(var_r, var_i, &DofData_P->CurrentSolution->x, l, l+1);
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

    // increment the global timestep counter so that a future
    // GenerateSystem knows which solutions exist
    Current.TimeStep += 1.;
    // update the current value of Time and TimeImag so that
    // $EigenvalueReal and $EigenvalueImag are up-to-date
    Current.Time = re;
    Current.TimeImag = im;
  }

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
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
                       double shift_r, double shift_i)
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
                  // EPSKRYLOVSCHUR, EPSARNOLDI, EPSARPACK or EPSPOWER
  _try(EPSSetWhichEigenpairs(eps, EPS_SMALLEST_MAGNITUDE));
                             // EPS_SMALLEST_REAL, EPS_LARGEST_MAGNITUDE, ...

  _try(EPSMonitorSet(eps, _myEpsMonitor, PETSC_NULL, PETSC_NULL));

  // override these options at runtime, petsc-style
  _try(EPSSetFromOptions(eps));

  // force options specified directly as arguments
  if(numEigenValues)
    _try(EPSSetDimensions(eps, numEigenValues, PETSC_DECIDE, PETSC_DECIDE));

  ST st;
  _try(EPSGetST(eps, &st));
  _try(STSetType(st, STSINVERT));

  // apply shift-and-invert transformation
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
    _try(EPSSetWhichEigenpairs(eps, EPS_TARGET_MAGNITUDE));
  }

  // use MUMPS by default if available
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
  KSP ksp;
  _try(STGetKSP(st, &ksp));
  _try(KSPSetType(ksp, "preonly"));
  PC pc;
  _try(KSPGetPC(ksp, &pc));
  _try(PCSetType(pc, PCLU));
  _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#endif

  // print info
#if (PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR == 4)
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
#if !(PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
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
  _storeEigenVectors(DofData_P, nconv, eps, PETSC_NULL);

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(EPSDestroy(&eps));
#else
  _try(EPSDestroy(eps));
#endif
}

static void _quadraticEVP(struct DofData * DofData_P, int numEigenValues,
                          double shift_r, double shift_i)
{
  Message::Info("Solving quadratic eigenvalue problem");

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
  _try(QEPSetType(qep, QEPLINEAR)); // QEPQARNOLDI
  _try(QEPSetWhichEigenpairs(qep, QEP_SMALLEST_MAGNITUDE));
                             // QEP_SMALLEST_REAL, QEP_LARGEST_MAGNITUDE, ...

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
    ST st;
    _try(EPSGetST(eps, &st));
    _try(STSetType(st, STSINVERT));
    // apply shift-and-invert transformation
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
      _try(EPSSetWhichEigenpairs(eps, EPS_TARGET_MAGNITUDE));
    }
    // use MUMPS by default if available
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
    _try(QEPLinearSetExplicitMatrix(qep, PETSC_TRUE));
    Message::Info("SLEPc forcing explicit construction of matrix");
    KSP ksp;
    _try(STGetKSP(st, &ksp));
    _try(KSPSetType(ksp, "preonly"));
    PC pc;
    _try(KSPGetPC(ksp, &pc));
    _try(PCSetType(pc, PCLU));
    _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#endif
  }

  _try(QEPMonitorSet(qep, _myQepMonitor, PETSC_NULL, PETSC_NULL));

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
  _storeEigenVectors(DofData_P, nconv, PETSC_NULL, qep);

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(QEPDestroy(&qep));
#else
  _try(QEPDestroy(qep));
#endif
}

void EigenSolve_SLEPC(struct DofData * DofData_P, int numEigenValues,
                      double shift_r, double shift_i)
{
  // bail out if we are not in harmonic regime: it's much easier this
  // way (since, for real, non-symmetric matrices we would get complex
  // eigenvectors we could not easily store)
  if(Current.NbrHar != 2){
    Message::Error("EigenSolve requires system defined with \"Type Complex\"");
    return;
  }

  // GenerateSeparate[] creates three matrices M3, M2, M1 such that
  // -w^2 M3 x + iw M2 x + M1 x = b; check Flag_Init[i] to see which
  // operators exist:
  if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3]){
    Message::Error("No System available for EigenSolve: check 'DtDt' and 'GenerateSeparate'");
    return;
  }

  if(!DofData_P->Flag_Init[2]){
    // the shift refers to w^2
    _linearEVP(DofData_P, numEigenValues, shift_r, shift_i);
  }
  else{
    // the shift refers to w
    _quadraticEVP(DofData_P, numEigenValues, shift_r, shift_i);
  }
}

#endif
