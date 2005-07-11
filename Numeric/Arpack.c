#define RCSID "$Id: Arpack.c,v 1.12 2005-07-11 20:19:21 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Andre Nicolet
 */

#include "GetDP.h"
#include "DofData.h"
#include "Numeric.h"
#include "EigenPar.h"

#if !defined(HAVE_LAPACK)

void EigenSolve (struct DofData * DofData_P, int NumEigenvalues, 
		 double shift_r, double shift_i){
  Msg(ERROR, "EigenSolve not available without LAPACK");
}

#else

#include "Arpack_F.h"

/* This routine uses Arpack to solve Generalized Complex Non-Hermitian
   eigenvalue problems. We don't use the "Generalized" Arpack mode
   (bmat=='G') since it requires M to be Hermitian. Instead, we use
   the regular mode (bmat='I') and apply the shift "by hand", which
   allows us to use arbitrary matrices K and M. */

static void Arpack2GetDP(int N, complex_16 *in, gVector *out)
{
  int i, j;
  double re, im;
  for(i = 0; i < N; i++){
    re = in[i].re;
    im = in[i].im;
    j = i * gCOMPLEX_INCREMENT;
    LinAlg_SetComplexInVector(re, im, out, j, j+1);
  }
}

static void GetDP2Arpack(gVector *in, complex_16 *out)
{
  int i, N;
  double re, im;
  LinAlg_GetVectorSize(in, &N);
  for(i = 0; i < N; i += gCOMPLEX_INCREMENT){
    LinAlg_GetComplexInVector(&re, &im, in, i, i+1);
    out[i/gCOMPLEX_INCREMENT].re = re;
    out[i/gCOMPLEX_INCREMENT].im = im;
  }
}

void EigenSolve (struct DofData * DofData_P, int NumEigenvalues, 
		 double shift_r, double shift_i){
  struct EigenPar eigenpar;
  struct Solution Solution_S;
  gVector v1, v2;
  int j, k, l, newsol;
  double tmp, d1, d2, dmax, abs, arg;
  complex_16 omega;

  gMatrix *K = &DofData_P->M1; /* matrix associated with terms with no Dt nor DtDt */
  gMatrix *M = &DofData_P->M3; /* matrix associated with DtDt terms */
  int n = DofData_P->NbrDof / gCOMPLEX_INCREMENT; /* size of the system */

  /* Arpack parameters: see below for explanation */
  int ido, nev, ncv, ldv, iparam[11], ipntr[14], lworkl, info, ldz;
  char bmat, *which, howmny;
  double tol, *rwork;
  unsigned int rvec, *select;
  complex_16 *resid, *v, *workd, *workl, *d, *z, sigma, *workev;

  GetDP_Begin("EigenSolve");

  /* Get eigenproblem parameters */
  EigenPar("eigen.par", &eigenpar);

  ido = 0;
  /* Reverse communication flag.  IDO must be zero on the first 
     call to znaupd.  IDO will be set internally to
     indicate the type of operation to be performed.  Control is
     then given back to the calling routine which has the
     responsibility to carry out the requested operation and call
     znaupd with the result.  The operand is given in
     WORKD(IPNTR(1)), the result must be put in WORKD(IPNTR(2)).
     -------------------------------------------------------------
     IDO =  0: first call to the reverse communication interface
     IDO = -1: compute  Y = OP * X  where
               IPNTR(1) is the pointer into WORKD for X,
               IPNTR(2) is the pointer into WORKD for Y.
               This is for the initialization phase to force the
               starting vector into the range of OP.
     IDO =  1: compute  Y = OP * X  where
               IPNTR(1) is the pointer into WORKD for X,
               IPNTR(2) is the pointer into WORKD for Y.
               In mode 3, the vector B * X is already
               available in WORKD(ipntr(3)).  It does not
               need to be recomputed in forming OP * X.
     IDO =  2: compute  Y = M * X  where
               IPNTR(1) is the pointer into WORKD for X,
               IPNTR(2) is the pointer into WORKD for Y.
     IDO =  3: compute and return the shifts in the first 
               NP locations of WORKL.
     IDO = 99: done
     -------------------------------------------------------------
     After the initialization phase, when the routine is used in 
     the "shift-and-invert" mode, the vector M * X is already 
     available and does not need to be recomputed in forming OP*X. */

  bmat = 'I';
  /* BMAT specifies the type of the matrix B that defines the
     semi-inner product for the operator OP.
     BMAT = 'I' -> standard eigenvalue problem A*x = lambda*x
     BMAT = 'G' -> generalized eigenvalue problem A*x = lambda*M*x */
  
  which = "LM";
  /* Which eigenvalues we want:
     SM = smallest magnitude ( magnitude = absolute value )
     LM = largest magnitude
     SR = smallest real part
     LR = largest real part
     SI = smallest imaginary part
     LI = largest imaginary part */
  
  nev = NumEigenvalues;
  /* Number of eigenvalues of OP to be computed. 0 < NEV < N-1.
     Therefore, you'll be able to compute AT MOST n-2 eigenvalues! */

  /* sanity check */
  if(nev >= n-1){
    Msg(WARNING, "NumEigenvalues too large (%d < %d): setting to %d", nev, n-1, n-2);
    nev = n-2;
  }

  tol = eigenpar.prec; /* 1.e-4; */
  /* Stopping criteria: the relative accuracy of the Ritz value 
     is considered acceptable if BOUNDS(I) .LE. TOL*ABS(RITZ(I))
     where ABS(RITZ(I)) is the magnitude when RITZ(I) is complex.
     DEFAULT = dlamch('EPS')  (machine precision as computed
           by the LAPACK auxiliary subroutine dlamch). */
  
  resid = (complex_16*)Malloc(n * sizeof(complex_16));
  /* On INPUT: 
     If INFO .EQ. 0, a random initial residual vector is used.
     If INFO .NE. 0, RESID contains the initial residual vector,
                     possibly from a previous run.
     On OUTPUT:
     RESID contains the final residual vector. */
  
  ncv = eigenpar.size; /* Rule of thumb: NumEigenvalues * 2; */
  /* Number of columns of the matrix V. NCV must satisfy the two
     inequalities 1 <= NCV-NEV and NCV <= N.
     This will indicate how many Arnoldi vectors are generated 
     at each iteration.  After the startup phase in which NEV 
     Arnoldi vectors are generated, the algorithm generates 
     approximately NCV-NEV Arnoldi vectors at each subsequent update 
     iteration. Most of the cost in generating each Arnoldi vector is 
     in the matrix-vector operation OP*x. */
  
  /* sanity checks */
  if(ncv <= nev){
    Msg(WARNING, "Krylov space size too small (%d <= %d), setting to %d", ncv, nev, nev*2);
    ncv = nev * 2;
  }
  if(ncv > n){
    Msg(WARNING, "Krylov space size too large (%d > %d), setting to %d", ncv, n, n);
    ncv = n;
  }

  v = (complex_16*)Malloc(n * ncv * sizeof(complex_16));
  /* At the end of calculations, here will be stored the Arnoldi basis
     vectors */
  
  ldv = n;
  /* Leading dimension of "v". In our case, the number of lines of
     "v". */
  
  iparam[0] = 1;
  iparam[1] = 0;
  iparam[2] = 10000;
  iparam[3] = 1;
  iparam[4] = 0;
  iparam[5] = 0;
  iparam[6] = 1;
  iparam[7] = 0;
  iparam[8] = 0;
  iparam[9] = 0;
  iparam[10] = 0;
  /* iparam[0] = ISHIFT: method for selecting the implicit shifts.
     The shifts selected at each iteration are used to filter out
     the components of the unwanted eigenvector.
     -------------------------------------------------------------
     ISHIFT = 0: the shifts are to be provided by the user via
                 reverse communication.  The NCV eigenvalues of 
                 the Hessenberg matrix H are returned in the part
                 of WORKL array corresponding to RITZ.
     ISHIFT = 1: exact shifts with respect to the current
                 Hessenberg matrix H.  This is equivalent to 
                 restarting the iteration from the beginning 
                 after updating the starting vector with a linear
                 combination of Ritz vectors associated with the 
                 "wanted" eigenvalues.
     ISHIFT = 2: other choice of internal shift to be defined.
     -------------------------------------------------------------

     iparam[1] = No longer referenced 

     iparam[2] = MXITER
     On INPUT:  maximum number of Arnoldi update iterations allowed. 
     On OUTPUT: actual number of Arnoldi update iterations taken. 

     iparam[3] = NB: blocksize to be used in the recurrence.
     The code currently works only for NB = 1.

     iparam[4] = NCONV: number of "converged" Ritz values.
     This represents the number of Ritz values that satisfy
     the convergence criterion.

     iparam[5] = IUPD
     No longer referenced. Implicit restarting is ALWAYS used.  

     iparam[6] = MODE
     On INPUT determines what type of eigenproblem is being solved.
     Must be 1,2,3:

     Mode 1:  A*x = lambda*x.
              ===> OP = A  and  B = I.

     Mode 2:  A*x = lambda*M*x, M hermitian positive definite
              ===> OP = inv[M]*A  and  B = M.
              ===> (If M can be factored see remark 3 below)

     Mode 3:  A*x = lambda*M*x, M hermitian semi-definite
              ===> OP =  inv[A - sigma*M]*M   and  B = M. 
              ===> shift-and-invert mode 
              If OP*x = amu*x, then lambda = sigma + 1/amu.

     iparam[7] = NP
     When ido = 3 and the user provides shifts through reverse
     communication (iparam[0]=0), _naupd returns NP, the number
     of shifts the user is to provide. 0 < NP < NCV-NEV.

     iparam[8] = NUMOP, iparam[9] = NUMOPB, iparam[10] = NUMREO,
     OUTPUT: NUMOP  = total number of OP*x operations,
             NUMOPB = total number of B*x operations if BMAT='G',
             NUMREO = total number of steps of re-orthogonalization. */
  
  ipntr[0] = 0;
  /* Pointer to mark the starting locations in the WORKD and WORKL
     arrays for matrices/vectors used by the Arnoldi iteration.
     -------------------------------------------------------------
     ipntr[0]: pointer to the current operand vector X in WORKD.
     ipntr[1]: pointer to the current result vector Y in WORKD.
     ipntr[2]: pointer to the vector B * X in WORKD when used in 
               the shift-and-invert mode.
     ipntr[3]: pointer to the next available location in WORKL
               that is untouched by the program.
     ipntr[4]: pointer to the NCV by NCV upper Hessenberg
               matrix H in WORKL.
     ipntr[5]: pointer to the  ritz value array  RITZ
     ipntr[6]: pointer to the (projected) ritz vector array Q
     ipntr[7]: pointer to the error BOUNDS array in WORKL.
     ipntr[13]: pointer to the NP shifts in WORKL. See Remark 5 below.

     Note: ipntr[8:12] is only referenced by zneupd. See Remark 2 below.

     ipntr[8]: pointer to the NCV RITZ values of the 
               original system.
     ipntr[9]: Not Used
     ipntr[10]: pointer to the NCV corresponding error bounds.
     ipntr[11]: pointer to the NCV by NCV upper triangular
                Schur matrix for H.
     ipntr[12]: pointer to the NCV by NCV matrix of eigenvectors
                of the upper Hessenberg matrix H. Only referenced by
                zneupd if RVEC = .TRUE. See Remark 2 below. */
 
  workd = (complex_16*)Malloc(3 * n * sizeof(complex_16));
  /* Distributed array to be used in the basic Arnoldi iteration
     for reverse communication.  The user should not use WORKD 
     as temporary workspace during the iteration !!!!!!!!!!
     See Data Distribution Note below. */
  
  lworkl = 3*ncv*ncv + 5*ncv;
  /* Dimension of the "workl" vector (see below). On must have: 
     lworkl >= 3*ncv*ncv + 5*ncv */

  workl = (complex_16*)Malloc(lworkl * sizeof(complex_16));
  /* Private (replicated) array on each PE or array allocated on
     the front end.  See Data Distribution Note below. */

  rwork = (double*)Malloc(ncv * sizeof(double));
  /* Used as workspace */
  
  info = 0;
  /* If INFO .EQ. 0, a randomly initial residual vector is used.
     If INFO .NE. 0, RESID contains the initial residual vector,
                     possibly from a previous run.
     Error flag on output.
     =  0: Normal exit.
     =  1: Maximum number of iterations taken.
           All possible eigenvalues of OP has been found. IPARAM(5)  
           returns the number of wanted converged Ritz values.
     =  2: No longer an informational error. Deprecated starting
           with release 2 of ARPACK.
     =  3: No shifts could be applied during a cycle of the 
           Implicitly restarted Arnoldi iteration. One possibility 
           is to increase the size of NCV relative to NEV. 
           See remark 4 below.
     = -1: N must be positive.
     = -2: NEV must be positive.
     = -3: NCV-NEV >= 1 and less than or equal to N.
     = -4: The maximum number of Arnoldi update iteration 
           must be greater than zero.
     = -5: WHICH must be one of 'LM', 'SM', 'LR', 'SR', 'LI', 'SI'
     = -6: BMAT must be one of 'I' or 'G'.
     = -7: Length of private work array is not sufficient.
     = -8: Error return from LAPACK eigenvalue calculation;
     = -9: Starting vector is zero.
     = -10: IPARAM(7) must be 1,2,3.
     = -11: IPARAM(7) = 1 and BMAT = 'G' are incompatible.
     = -12: IPARAM(1) must be equal to 0 or 1.
     = -9999: Could not build an Arnoldi factorization.
              User input error highly likely.  Please
              check actual array dimensions and layout.
              IPARAM(5) returns the size of the current Arnoldi
              factorization. */

  rvec = 1; /* .true. */
  /* If we want Ritz vectors to be computed as well. */
  
  howmny = 'A';
  /* What do we want: Ritz or Schur vectors? For Schur, choose: howmny
     = 'P' */
  
  select = (unsigned int*)Malloc(ncv * sizeof(unsigned int));
  /* Internal workspace */
  
  d = (complex_16*)Malloc(nev * sizeof(complex_16));
  /* Vector containing the "nev" eigenvalues computed.
     VERY IMPORTANT: on line 69 of zneupd.f they say it should be nev+1;
     this is wrong, for see line 283 where it is declared as d(nev) */
  
  z = (complex_16*)Malloc(n * nev * sizeof(complex_16));
  /* On exit, if RVEC = .TRUE. and HOWMNY = 'A', then the columns of 
     Z represents approximate eigenvectors (Ritz vectors) corresponding 
     to the NCONV=IPARAM(5) Ritz values for eigensystem
     A*z = lambda*B*z.

     If RVEC = .FALSE. or HOWMNY = 'P', then Z is NOT REFERENCED.

     NOTE: If if RVEC = .TRUE. and a Schur basis is not required, 
     the array Z may be set equal to first NEV+1 columns of the Arnoldi 
     basis array V computed by ZNAUPD.  In this case the Arnoldi basis 
     will be destroyed and overwritten with the eigenvector basis. */
  
  ldz = n;
  /* Leading dimension of "z". In our case, the number of lines of "z". */
  
  sigma.re = 0.;
  sigma.im = 0.;
  /* The shift. Not used in this case: we deal with the shift "by
     hand". */
  
  workev = (complex_16*)Malloc(2 * ncv * sizeof(complex_16));
  /* Workspace */

  /* Sanity checks */
  if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3])
    Msg(ERROR, "No System available for EigenSolve: check 'DtDt' and 'GenerateSeparate'");

  if(bmat != 'I' || iparam[6] != 1)
    Msg(ERROR, "General and/or shift-invert mode should not be used");

  /* Create 2 temp vectors */
  LinAlg_CreateVector(&v1, &DofData_P->Solver, DofData_P->NbrDof,
		      DofData_P->NbrPart, DofData_P->Part);
  LinAlg_CreateVector(&v2, &DofData_P->Solver, DofData_P->NbrDof,
		      DofData_P->NbrPart, DofData_P->Part);

  /* Shifting: K = K - shift * M */
  LinAlg_AddMatrixProdMatrixDouble(K, M, -shift_r, K) ; 

  /* Keep calling znaupd again and again until ido == 99 */
  k = 0;
  do {
    znaupd_(&ido, &bmat, &n, which, &nev, &tol, resid, &ncv, v, &ldv, iparam,
	    ipntr, workd, workl, &lworkl, rwork, &info);
    if(ido == 1 || ido == -1){
      Msg(BIGINFO, "Arpack iteration %d", k++);
      Arpack2GetDP(n, &workd[ipntr[0]-1], &v1);
      LinAlg_ProdMatrixVector(M, &v1, &v2);
      LinAlg_Solve(K, &v2, &DofData_P->Solver, &v1);
      GetDP2Arpack(&v1, &workd[ipntr[1]-1]);
    }
    else if(ido == 99){
      /* we're done */
      break;
    }
    else{
      Msg(INFO, "Arpack code = %d (ignored)", info);
    }
  } while (1);

  /* Testing for errors */  
  if(info == 0){
    /* OK */
  }
  else if(info == 1){
    Msg(WARNING, "Maxmimum number of iteration reached in EigenSolve");
  }
  else if(info == 2){
    Msg(WARNING, "No shifts could be applied during a cycle of the");
    Msg(WARNING, "Implicitly restarted Arnoldi iteration. One possibility");
    Msg(WARNING, "is to increase the size of NCV relative to NEV.");
  }
  else if(info < 0){
    Msg(ERROR, "Arpack code = %d", info);
  }
  else{
    Msg(WARNING, "Arpack code = %d (unknown)", info);
  }

  /* Call to zneupd for post-processing */  
  zneupd_(&rvec, &howmny, select, d, z, &ldz, &sigma, workev, &bmat, &n, which, 
	  &nev, &tol, resid, &ncv, v, &ldv, iparam, ipntr, workd, workl, &lworkl,
	  rwork, &info);

  /* Test for errors */  
  if(info != 0)
    Msg(ERROR, "Arpack code = %d (eigenvector post-processing)", info);
  
  /* Compute the unshifted eigenvalues and print them */
  for (k = 0; k < nev; k++){
    tmp = SQU(d[k].re) + SQU(d[k].im);
    d[k].re = shift_r + d[k].re/tmp;
    d[k].im = shift_i - d[k].im/tmp;

    /* Eigenvalue = omega^2 -> f = sqrt(omega^2)/(2*Pi) */
    abs = sqrt(SQU(d[k].re) + SQU(d[k].im));
    arg = atan2(d[k].im, d[k].re);
    omega.re = sqrt(abs) * cos(0.5*arg);
    omega.im = sqrt(abs) * sin(0.5*arg);
    
    Msg(BIGINFO, "Eigenvalue %d w^2 = %.12e + %.12e * i (f = %.12e + %.12e * i)",
	k, d[k].re, d[k].im, omega.re/TWO_PI, omega.im/TWO_PI);
  }

  /* Save the eigenvectors */
  newsol = 0;
  for(k = 0; k < nev; k++){
    
    if(newsol) {
      /* create new solution */
      LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
			  DofData_P->NbrPart, DofData_P->Part);
      List_Add(DofData_P->Solutions, &Solution_S);
      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);
    } 
    newsol = 1;

    DofData_P->CurrentSolution->Time = d[k].re;
    DofData_P->CurrentSolution->TimeImag = d[k].im;
    DofData_P->CurrentSolution->TimeStep = k;
    DofData_P->CurrentSolution->TimeFunctionValues = NULL;
    DofData_P->CurrentSolution->SolutionExist = 1;
    for(l = 0; l < DofData_P->NbrDof; l+=gCOMPLEX_INCREMENT){
      j = l / gCOMPLEX_INCREMENT;
      LinAlg_SetComplexInVector(z[k*n+j].re, z[k*n+j].im, 
				&DofData_P->CurrentSolution->x, l, l+1);
    }

    /* Normalize eigenvector in L2 norm */
    dmax = 0.0 ;
    for(l = 0; l < DofData_P->NbrDof; l+=gCOMPLEX_INCREMENT){
      LinAlg_GetComplexInVector(&d1, &d2, &DofData_P->CurrentSolution->x, l, l+1);
      tmp = SQU(d1) + SQU(d2);
      if(tmp > dmax){
	dmax = tmp;
      }
    }
    if(dmax > 1.e-16){
      LinAlg_ProdVectorDouble(&DofData_P->CurrentSolution->x, 1./sqrt(dmax),
			      &DofData_P->CurrentSolution->x);
    }
    else{
      Msg(WARNING, "Unable to norm eigenvector %d: norm = %g", k, dmax);
    }
  }
    
  /* deallocate */
  LinAlg_DestroyVector(&v1);
  LinAlg_DestroyVector(&v2);
  Free(resid);
  Free(v);
  Free(workd);
  Free(workl);
  Free(rwork);
  Free(select);
  Free(d);
  Free(z);
  Free(workev);

  GetDP_End;
}

#endif
