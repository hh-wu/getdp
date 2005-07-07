#define RCSID "$Id: Arpack.c,v 1.7 2005-07-07 13:08:48 geuzaine Exp $"
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
 */

#include "GetDP.h"
#include "DofData.h"
#include "CurrentData.h"
#include "Numeric.h"

#if !defined(HAVE_LAPACK)

void Lanczos (struct DofData * DofData_P, int LanSize, List_T *LanSave, double shift){
  Msg(ERROR, "Arpack implementation of Lanczos[] not available without LAPACK");
}

#else

#include "Arpack_F.h"

/* This routine uses Arpack to solve Standard or Generalized Complex,
   Non-Hermitian eigenvalue problems */

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

void Lanczos (struct DofData * DofData_P, int LanSize, List_T *LanSave, double shift){
  struct Solution Solution_S;
  gVector v1, v2;
  int i, j, k, l, newsol;

  gMatrix *K = &DofData_P->M1; /* matrix associated with terms with no Dt nor DtDt */
  gMatrix *M = &DofData_P->M3; /* matrix associated with DtDt terms */
  gVector *b = &DofData_P->b; 
  gVector *x = &DofData_P->CurrentSolution->x;

  int n = DofData_P->NbrDof / gCOMPLEX_INCREMENT; /* size of the system */

  int ido = 0;
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

  char bmat = 'G';
  /* BMAT specifies the type of the matrix B that defines the
     semi-inner product for the operator OP.
     BMAT = 'I' -> standard eigenvalue problem A*x = lambda*x
     BMAT = 'G' -> generalized eigenvalue problem A*x = lambda*M*x */
  
  char *which = "LM";
  /* Which eigenvalues we want:
     SM = smallest magnitude ( magnitude = absolute value )
     LM = largest magnitude
     SR = smallest real part
     LR = largest real part
     SI = smallest imaginary part
     LI = largest imaginary part */
  
  int nev = LanSize/3; /* FIXME */
  /* Number of eigenvalues of OP to be computed. 0 < NEV < N-1.
     Therefore, you'll be able to compute AT MOST n-2 eigenvalues! */
  
  double tol = 1.e-4;
  /* Stopping criteria: the relative accuracy of the Ritz value 
     is considered acceptable if BOUNDS(I) .LE. TOL*ABS(RITZ(I))
     where ABS(RITZ(I)) is the magnitude when RITZ(I) is complex.
     DEFAULT = dlamch('EPS')  (machine precision as computed
           by the LAPACK auxiliary subroutine dlamch). */
  
  complex_16 *resid = (complex_16*)Malloc(n * sizeof(complex_16));
  /* On INPUT: 
     If INFO .EQ. 0, a random initial residual vector is used.
     If INFO .NE. 0, RESID contains the initial residual vector,
                     possibly from a previous run.
     On OUTPUT:
     RESID contains the final residual vector. */
  
  int ncv = LanSize;
  /* Number of columns of the matrix V. NCV must satisfy the two
     inequalities 1 <= NCV-NEV and NCV <= N.
     This will indicate how many Arnoldi vectors are generated 
     at each iteration.  After the startup phase in which NEV 
     Arnoldi vectors are generated, the algorithm generates 
     approximately NCV-NEV Arnoldi vectors at each subsequent update 
     iteration. Most of the cost in generating each Arnoldi vector is 
     in the matrix-vector operation OP*x. */
  
  complex_16 *v = (complex_16*)Malloc(n * ncv * sizeof(complex_16));
  /* At the end of calculations, here will be stored the Arnoldi basis
     vectors */
  
  int ldv = n;
  /* Leading dimension of "v". In our case, the number of lines of
     "v". */
  
  int iparam[11] = {1, 0, 10000, 1, 0, 0, 3, 0, 0, 0, 0};
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
  
  int ipntr[14];
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
 
  complex_16 *workd = (complex_16*)Malloc(3 * n * sizeof(complex_16));
  /* Distributed array to be used in the basic Arnoldi iteration
     for reverse communication.  The user should not use WORKD 
     as temporary workspace during the iteration !!!!!!!!!!
     See Data Distribution Note below. */
  
  int lworkl = 3*ncv*ncv + 5*ncv;
  /* Dimension of the "workl" vector (see below). On must have: 
     lworkl >= 3*ncv*ncv + 5*ncv */

  complex_16 *workl = (complex_16*)Malloc(lworkl * sizeof(complex_16));
  /* Private (replicated) array on each PE or array allocated on
     the front end.  See Data Distribution Note below. */

  double *rwork = (double*)Malloc(ncv * sizeof(double));
  /* Used as workspace */
  
  int info = 0;
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

  unsigned int rvec = 1; /* .true. */
  /* If we want Ritz vectors to be computed as well. In our case, no. */
  
  char howmny = 'A';
  /* What do we want: Ritz or Schur vectors? In our example, we won't use them,
     anyway. For Schur, choose: howmny = 'P' */
  
  unsigned int *select = (unsigned int*)Malloc(ncv * sizeof(unsigned int));
  /* Internal workspace */
  
  complex_16 *d = (complex_16*)Malloc(nev * sizeof(complex_16));
  /* Vector containing the "nev" eigenvalues computed.
     VERY IMPORTANT: on line 69 of zneupd.f they say it should be nev+1;
     this is wrong, for see line 283 where it is declared as d(nev) */
  
  complex_16 *z = (complex_16*)Malloc(n * nev * sizeof(complex_16));
  /* On exit, if RVEC = .TRUE. and HOWMNY = 'A', then the columns of 
     Z represents approximate eigenvectors (Ritz vectors) corresponding 
     to the NCONV=IPARAM(5) Ritz values for eigensystem
     A*z = lambda*B*z.

     If RVEC = .FALSE. or HOWMNY = 'P', then Z is NOT REFERENCED.

     NOTE: If if RVEC = .TRUE. and a Schur basis is not required, 
     the array Z may be set equal to first NEV+1 columns of the Arnoldi 
     basis array V computed by ZNAUPD.  In this case the Arnoldi basis 
     will be destroyed and overwritten with the eigenvector basis. */
  
  int ldz = n;
  /* Leading dimension of "z". In our case, the number of lines of "z". */
  
  complex_16 sigma = {shift, 0.};
  /* The shift. In our example, not used. */
  
  complex_16 *workev = (complex_16*)Malloc(2 * ncv * sizeof(complex_16));
  /* Workspace */

  GetDP_Begin("Lanczos");

  /* Sanity checks */
  if(LanSize >= n-1)
    Msg(ERROR, "Lansize too large (must be < %d)", n-1);

  if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3])
    Msg(ERROR, "No System available for Lanczos: check 'DtDt' and 'GenerateSeparate'");

  if(bmat == 'G' && iparam[6] != 3)
    Msg(ERROR, "Wrong input parameters for generalized eigen problem");

  /* Create 2 temp vectors */
  LinAlg_CreateVector(&v1, &DofData_P->Solver, DofData_P->NbrDof,
		      DofData_P->NbrPart, DofData_P->Part);
  LinAlg_CreateVector(&v2, &DofData_P->Solver, DofData_P->NbrDof,
		      DofData_P->NbrPart, DofData_P->Part);

  /* Shifting: K = K - shift * M */
  if(bmat == 'G')
    LinAlg_AddMatrixProdMatrixDouble(K, M, -shift, K) ; 

  /* Keep calling znaupd again and again until ido == 99 */
  k = 0;
  do {
    znaupd_(&ido, &bmat, &n, which, &nev, &tol, resid, &ncv, v, &ldv, iparam,
	    ipntr, workd, workl, &lworkl, rwork, &info);
    if(bmat == 'G'){ /* Generalized eigenvalue problem K x = lambda M x */
      if(ido == -1){
	Arpack2GetDP(n, &workd[ipntr[0]-1], &v1);
	LinAlg_ProdMatrixVector(M, &v1, &v2);
	Msg(BIGINFO, "Arpack iteration %d", k++);
	LinAlg_Solve(K, &v2, &DofData_P->Solver, &v1);
	GetDP2Arpack(&v1, &workd[ipntr[1]-1]);
      }
      else if(ido == 1){
	Arpack2GetDP(n, &workd[ipntr[2]-1], &v1);
	Msg(BIGINFO, "Arpack iteration %d", k++);
	LinAlg_Solve(K, &v1, &DofData_P->Solver, &v2);
	GetDP2Arpack(&v2, &workd[ipntr[1]-1]);
      }
      else if(ido == 2){
	Arpack2GetDP(n, &workd[ipntr[0]-1], &v1);
	LinAlg_ProdMatrixVector(M, &v1, &v2);
	GetDP2Arpack(&v2, &workd[ipntr[1]-1]);
      }
      else if(ido == 99){
	/* we're done */
	break;
      }
      else{
	Msg(INFO, "Got info=%d: not doing anything with it");
      }
    }
    else{ /* Standard eigenvalue problem K x = lambda x */
      if(ido == 1 || ido == -1){
	/* y = A x with x = workd[ipntr[0]-1] and y = workd[ipntr[1]-1]; */
	Arpack2GetDP(n, &workd[ipntr[0]-1], &v1);
	LinAlg_ProdMatrixVector(K, &v1, &v2);
	GetDP2Arpack(&v2, &workd[ipntr[1]-1]);
      }
      else if(ido == 99){
	/* we're done */
	break;
      }
      else{
	Msg(INFO, "Got info=%d: not doing anything with it");
      }
    }
  } while (1);

  /* Testing for errors */  
  if(info == 0){
    /* OK */
  }
  else if(info == 1){
    Msg(WARNING, "Maxmimum number of iteration reached in Lanczos");
  }
  else if(info == 2){
    Msg(WARNING, "No shifts could be applied during a cycle of the");
    Msg(WARNING, "Implicitly restarted Arnoldi iteration. One possibility");
    Msg(WARNING, "is to increase the size of NCV relative to NEV.");
  }
  else if(info < 0){
    Msg(ERROR, "Error in Arpack: code = %d", info);
  }
  else{
    Msg(INFO, "Unknown return value in Arpack: code = %d", info);
  }

  /* Call to zneupd for post-processing */  
  zneupd_(&rvec, &howmny, select, d, z, &ldz, &sigma, workev, &bmat, &n, which, 
	  &nev, &tol, resid, &ncv, v, &ldv, iparam, ipntr, workd, workl, &lworkl,
	  rwork, &info);

  /* Test for errors */  
  if(info != 0){
    Msg(ERROR, "Error in post-processing eigenvectors: code = %d", info);
  }
  
  /* Print the eigenvalues */
  for (k = 0; k < nev; k++)
    Msg(BIGINFO, "Eigenvalue %d = %.16g + %.16g*i", k, d[k].re, d[k].im);

  /* Save (some of) the eigenvectors */
  newsol = 0;
  for(k = 0; k < List_Nbr(LanSave); k++){
    List_Read(LanSave, k, &i);
    
    i--; /* FIXME: for backward compatility (the eigenvector index
	    starts at 1 instead of 0 in the old Lanczos.c) */

    if(i < 0 || i > nev-1){
      Msg(WARNING, "Eigenvector index out of range");
      break;
    }
    
    if(newsol) {
      /* create new solution */
      LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
			  DofData_P->NbrPart, DofData_P->Part);
      List_Add(DofData_P->Solutions, &Solution_S);
      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);
    } 
    newsol = 1;
    
    /* Store real part of eigenvalue in "Time": not perfect... FIXME */
    DofData_P->CurrentSolution->Time = d[i].re;
    DofData_P->CurrentSolution->TimeStep = i;
    DofData_P->CurrentSolution->TimeFunctionValues = NULL;
    DofData_P->CurrentSolution->SolutionExist = 1;

    /* Store eigenvector */
    for(l = 0; l < DofData_P->NbrDof; l+=gCOMPLEX_INCREMENT){
      j = l / gCOMPLEX_INCREMENT;
      LinAlg_SetComplexInVector(z[i*n+j].re, z[i*n+j].im, 
				&DofData_P->CurrentSolution->x, l, l+1);
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
