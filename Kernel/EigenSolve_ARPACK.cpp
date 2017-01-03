// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Alexandru Mustatea
//   Andre Nicolet
//

#include "GetDPConfig.h"

#if defined(HAVE_ARPACK)

#include <string.h>
#include <math.h>
#include "Message.h"
#include "ProData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "MallocUtils.h"
#include "OS.h"

#define SQU(a)     ((a)*(a))
#define TWO_PI     6.2831853071795865

extern struct CurrentData Current ;
extern char   *Name_Path ;

struct EigenPar {
  double prec;
  int    size;
  int    reortho;
} ;

#if defined(HAVE_NO_UNDERSCORE)
#define znaupd_ znaupd
#define zneupd_ zneupd
#endif

extern "C" {
  typedef struct {double re; double im;} complex_16;
  extern void znaupd_(int *ido, char *bmat, int *n,
		      char *which, int *nev, double *tol, complex_16 resid[],
		      int *ncv, complex_16 v[], int *ldv, int iparam[],
		      int ipntr[], complex_16 workd[], complex_16 workl[], int *lworkl,
		      double rwork[], int *info);
  extern void zneupd_(unsigned int *rvec, char *howmny, unsigned int select[],
		      complex_16 d[], complex_16 z[], int *ldz, complex_16 *sigma,
		      complex_16 workev[], char *bmat, int *n, char *which,
		      int *nev, double *tol, complex_16 resid[], int *ncv,
		      complex_16 v[], int *ldv, int iparam[], int ipntr[],
		      complex_16 workd[], complex_16 workl[], int *lworkl,
		      double rwork[], int *info);
}

static void EigenGetDouble(const char *text, double *d)
{
  char str[256];
  printf("%s (default=%.16g): ", text, *d);
  fgets(str, sizeof(str), stdin);
  if(strlen(str) && strcmp(str, "\n"))
    *d = atof(str);
}

static void EigenGetInt(const char *text, int *i)
{
  char str[256];
  printf("%s (default=%d): ", text, *i);
  fgets(str, sizeof(str), stdin);
  if(strlen(str) && strcmp(str, "\n"))
    *i = atoi(str);
}

void EigenPar(const char *filename, struct EigenPar *par)
{
  char path[1024];
  FILE *fp;

  /* set some defaults */
  par->prec = 1.e-4;
  par->reortho = 0;
  par->size = 50;

  /* try to read parameters from file */
  strcpy(path, Name_Path);
  strcat(path, filename);
  fp = FOpen(path, "r");
  if(fp) {
    Message::Info("Loading eigenproblem parameter file '%s'", path);
    fscanf(fp, "%lf", &par->prec);
    fscanf(fp, "%d", &par->reortho);
    fscanf(fp, "%d", &par->size);
    fclose(fp);
  }
  else{
    fp = FOpen(path, "w");
    if(fp){
      if(!Message::UseOnelab()){
        /* get parameters from command line */
        EigenGetDouble("Precision", &par->prec);
        EigenGetInt("Reorthogonalization", &par->reortho);
        EigenGetInt("Krylov basis size", &par->size);
      }
      /* write file */
      fprintf(fp, "%.16g\n", par->prec);
      fprintf(fp, "%d\n", par->reortho);
      fprintf(fp, "%d\n", par->size);
      fprintf(fp,
	      "/*\n"
	      "   The numbers above are the parameters for the numerical\n"
	      "   eigenvalue problem:\n"
	      "\n"
	      "   prec = aimed accuracy for eigenvectors (default=1.e-4)\n"
	      "   reortho = reorthogonalisation of Krylov basis: yes=1, no=0 (default=0) \n"
	      "   size = size of the Krylov basis\n"
	      "\n"
	      "   The shift is given in the .pro file because its choice relies\n"
	      "   on physical considerations.\n"
	      "*/");
      fclose(fp);
    }
    else{
      Message::Error("Unable to open file '%s'", path);
    }
  }

  Message::Info("Eigenproblem parameters: prec = %g, reortho = %d, size = %d",
                par->prec, par->reortho, par->size);
}

/* This routine uses Arpack to solve Generalized Complex Non-Hermitian
   eigenvalue problems. We don't use the "Generalized" Arpack mode
   (bmat=='G') since it requires M to be Hermitian. Instead, we use
   the regular mode (bmat='I') and apply the shift "by hand", which
   allows us to use arbitrary matrices K and M. */

static void Arpack2GetDP(int N, complex_16 *in, gVector *out)
{
  int i, j;
  double re, im;
  int incr = (Current.NbrHar == 2) ? gCOMPLEX_INCREMENT : 1;
  for(i = 0; i < N; i++){
    re = in[i].re;
    im = in[i].im;
    j = i * incr;
    if(Current.NbrHar == 2)
      LinAlg_SetComplexInVector(re, im, out, j, j+1);
    else
      LinAlg_SetDoubleInVector(re, out, j);
  }
  LinAlg_AssembleVector(out);
}

static void Arpack2GetDPSplit(int N, complex_16 *in, gVector *out1, gVector *out2)
{
  int i, j;
  double re, im;
  int incr = (Current.NbrHar == 2) ? gCOMPLEX_INCREMENT : 1;
  for(i = 0; i < N/2; i++){
    j = i * incr;
    re = in[i].re;
    im = in[i].im;
    if(Current.NbrHar == 2)
      LinAlg_SetComplexInVector(re, im, out1, j, j+1);
    else
      LinAlg_SetDoubleInVector(re, out1, j);
    re = in[N/2+i].re;
    im = in[N/2+i].im;
    if(Current.NbrHar == 2)
      LinAlg_SetComplexInVector(re, im, out2, j, j+1);
    else
      LinAlg_SetDoubleInVector(re, out2, j);
  }
  LinAlg_AssembleVector(out1);
  LinAlg_AssembleVector(out2);
}

static void GetDP2Arpack(gVector *in, complex_16 *out)
{
  int i, N;
  double re, im = 0.;
  int incr = (Current.NbrHar == 2) ? gCOMPLEX_INCREMENT : 1;
  LinAlg_GetVectorSize(in, &N);
  for(i = 0; i < N; i += incr){
    if(Current.NbrHar == 2)
      LinAlg_GetComplexInVector(&re, &im, in, i, i+1);
    else
      LinAlg_GetDoubleInVector(&re, in, i);
    out[i/incr].re = re;
    out[i/incr].im = im;
  }
}

static void GetDP2ArpackMerge(gVector *in1, gVector *in2, complex_16 *out)
{
  int i, N;
  double re, im = 0.;
  int incr = (Current.NbrHar == 2) ? gCOMPLEX_INCREMENT : 1;
  LinAlg_GetVectorSize(in1, &N);
  for(i = 0; i < N; i += incr){
    if(Current.NbrHar == 2)
      LinAlg_GetComplexInVector(&re, &im, in1, i, i+1);
    else
      LinAlg_GetDoubleInVector(&re, in1, i);
    out[i/incr].re = re;
    out[i/incr].im = im;
    if(Current.NbrHar == 2)
      LinAlg_GetComplexInVector(&re, &im, in2, i, i+1);
    else
      LinAlg_GetDoubleInVector(&re, in2, i);
    out[N/incr + i/incr].re = re;
    out[N/incr + i/incr].im = im;
  }
}

void EigenSolve_ARPACK(struct DofData * DofData_P, int NumEigenvalues,
                       double shift_r, double shift_i, int FilterExpressionIndex)
{
  struct EigenPar eigenpar;
  struct Solution Solution_S;
  gVector v1, v2, w1, w2, x, y;
  int n, j, k, l, newsol, quad_evp = 0;
  double tmp, d1, d2, abs, arg;
  complex_16 f, omega, omega2;

  gMatrix *K = &DofData_P->M1; /* matrix associated with terms with no Dt nor DtDt */
  gMatrix *L = &DofData_P->M2; /* matrix associated with Dt terms */
  gMatrix *M = &DofData_P->M3; /* matrix associated with DtDt terms */
  gMatrix D; /* temp matrix for quadratic eigenvalue problem */

  /* Arpack parameters: see below for explanation */
  int ido, nev, ncv, ldv, iparam[11], ipntr[14], lworkl, info, ldz;
  char bmat, *which, howmny;
  double tol, *rwork;
  unsigned int rvec, *select;
  complex_16 *resid, *v, *workd, *workl, *d, *z, sigma, *workev;

  /* Warn if we are not in harmonic regime (we won't be able to compute/store
     complex eigenvectors) */
  if(Current.NbrHar != 2){
    Message::Info("EigenSolve will only store the real part of the eigenvectors; "
                  "Define the system with \"Type Complex\" if this is an issue");
  }

#if defined(HAVE_PETSC) && !defined(PETSC_USE_COMPLEX)
  if(Current.NbrHar == 2){
    Message::Warning("Using PETSc in real arithmetic for complex-simulated-real matrices");
  }
#endif

  /* Sanity checks */
  if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3]){
    Message::Error("No System available for EigenSolve: check 'DtDt' and 'GenerateSeparate'");
    return;
  }

  /* Check if we have a "quadratic" evp (- w^2 M x + i w L x + K x = 0) */
  if(DofData_P->Flag_Init[2])
    quad_evp = 1;

  /* Get eigenproblem parameters */
  EigenPar("eigen.par", &eigenpar);

  /* size of the system */
  int incr = (Current.NbrHar == 2) ? gCOMPLEX_INCREMENT : 1;
  n = DofData_P->NbrDof / incr;

  if(quad_evp)
    n *= 2;

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

  which = (char*)"LM";
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
    Message::Warning("NumEigenvalues too large (%d < %d): setting to %d", nev, n-1, n-2);
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
    Message::Warning("Krylov space size too small (%d <= %d), setting to %d", ncv, nev, nev*2);
    ncv = nev * 2;
  }
  if(ncv > n){
    Message::Warning("Krylov space size too large (%d > %d), setting to %d", ncv, n, n);
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
  /* IPARAM(1) = ISHIFT: method for selecting the implicit shifts.
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

     IPARAM(2) = No longer referenced

     IPARAM(3) = MXITER
     On INPUT:  maximum number of Arnoldi update iterations allowed.
     On OUTPUT: actual number of Arnoldi update iterations taken.

     IPARAM(4) = NB: blocksize to be used in the recurrence.
     The code currently works only for NB = 1.

     IPARAM(5) = NCONV: number of "converged" Ritz values.
     This represents the number of Ritz values that satisfy
     the convergence criterion.

     IPARAM(6) = IUPD
     No longer referenced. Implicit restarting is ALWAYS used.

     IPARAM(7) = MODE
     On INPUT determines what type of eigenproblem is being solved.
     Must be 1,2,3; See under \Description of znaupd for the
     four modes available.

     IPARAM(8) = NP
     When ido = 3 and the user provides shifts through reverse
     communication (IPARAM(1)=0), _naupd returns NP, the number
     of shifts the user is to provide. 0 < NP < NCV-NEV.

     IPARAM(9) = NUMOP, IPARAM(10) = NUMOPB, IPARAM(11) = NUMREO,
     OUTPUT: NUMOP  = total number of OP*x operations,
             NUMOPB = total number of B*x operations if BMAT='G',
             NUMREO = total number of steps of re-orthogonalization. */

  ipntr[0] = 0;
  /* Pointer to mark the starting locations in the WORKD and WORKL
     arrays for matrices/vectors used by the Arnoldi iteration.
     -------------------------------------------------------------
     IPNTR(1): pointer to the current operand vector X in WORKD.
     IPNTR(2): pointer to the current result vector Y in WORKD.
     IPNTR(3): pointer to the vector B * X in WORKD when used in
               the shift-and-invert mode.
     IPNTR(4): pointer to the next available location in WORKL
               that is untouched by the program.
     IPNTR(5): pointer to the NCV by NCV upper Hessenberg
               matrix H in WORKL.
     IPNTR(6): pointer to the  ritz value array  RITZ
     IPNTR(7): pointer to the (projected) ritz vector array Q
     IPNTR(8): pointer to the error BOUNDS array in WORKL.
     IPNTR(14): pointer to the NP shifts in WORKL. See Remark 5 below.

     Note: IPNTR(9:13) is only referenced by zneupd. See Remark 2 below.

     IPNTR(9): pointer to the NCV RITZ values of the
               original system.
     IPNTR(10): Not Used
     IPNTR(11): pointer to the NCV corresponding error bounds.
     IPNTR(12): pointer to the NCV by NCV upper triangular
                Schur matrix for H.
     IPNTR(13): pointer to the NCV by NCV matrix of eigenvectors
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

  if(bmat != 'I' || iparam[6] != 1){
    Message::Error("General and/or shift-invert mode should not be used");
    return;
  }

  /* Create temp vectors and matrices and apply shift. Warning: with
     PETSc, the shifting can be very slow if the masks are very
     different, for example if we are in real arithmetic and have one
     real matrix and one complex "simulated-real" matrix */
  if(!quad_evp){
    LinAlg_CreateVector(&v1, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CreateVector(&v2, &DofData_P->Solver, DofData_P->NbrDof);
    /* K = K - shift * M */
    LinAlg_AddMatrixProdMatrixDouble(K, M, -shift_r, K) ;
  }
  else{
    /* This is an explanation of our approach to a quadratic
       eigenvalue problem i.e. - w^2 M x + i w L x + K x = 0.  This
       system is equivalent to (y = i w x) and (i w M y + i w L x + K
       x = 0), or, in matrix form:

       | L   M |  |x|          |-K   0 |  |x|
       | I   0 |  |y|  iw =    | 0   I |  |y| , or

          |x|            |x|
       A  |y|  iw =   B  |y|.

       To apply Arpack with a shift 's' (but not in shift inverted
       mode to avoid the Hermitian constraint!), we build the
       following operator: (B- sA)^-1 A.  To do this, the following
       computation is performed: (x,y) is transformed to
       (Solve(D,Lx+sMx+My),Solve(D,-Kx+sMy)) where Solve(D,v) means
       the solution of the Dx=v linear system and where
       D=-(s^2M+sL+K).  Note that if the number of degrees of freedom
       is N, the matrix computations are still performed on NxN
       matrices but the Arpack vector is of size n=2*N.  Only the x
       part of the (x,y) eigenvectors are retained as physical
       solutions. */

    LinAlg_CreateVector(&x, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CreateVector(&y, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CreateVector(&v1, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CreateVector(&w1, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CreateVector(&w2, &DofData_P->Solver, DofData_P->NbrDof);

    LinAlg_CreateMatrix(&D, &DofData_P->Solver, DofData_P->NbrDof, DofData_P->NbrDof);
    /* D = -(shift^2 * M + shift * L + K) */
    LinAlg_CopyMatrix(M, &D);
    LinAlg_AddMatrixProdMatrixDouble(L, &D, shift_r, &D);
    LinAlg_AddMatrixProdMatrixDouble(K, &D, shift_r, &D);
    LinAlg_ProdMatrixDouble(&D, -1., &D);
  }

  /* Keep calling znaupd again and again until ido == 99 */
  k = 0;
  do {
    znaupd_(&ido, &bmat, &n, which, &nev, &tol, resid, &ncv, v, &ldv, iparam,
	    ipntr, workd, workl, &lworkl, rwork, &info);
    if(ido == 1 || ido == -1){
      Message::Info("Arpack iteration %d", k+1);

      if(!quad_evp){
	Arpack2GetDP(n, &workd[ipntr[0]-1], &v1);
	LinAlg_ProdMatrixVector(M, &v1, &v2);
	if(!k)
	  LinAlg_Solve(K, &v2, &DofData_P->Solver, &v1);
	else
	  LinAlg_SolveAgain(K, &v2, &DofData_P->Solver, &v1);
	GetDP2Arpack(&v1, &workd[ipntr[1]-1]);
      }
      else{
	Arpack2GetDPSplit(n, &workd[ipntr[0]-1], &x, &y);
	LinAlg_ProdMatrixVector(M, &y, &w2);
	LinAlg_ProdMatrixVector(L, &x, &v1);
	LinAlg_AddVectorVector(&v1, &w2, &v1);
	LinAlg_ProdMatrixVector(M, &x, &w1);
	LinAlg_AddVectorProdVectorDouble(&v1, &w1, shift_r, &v1);
	if(!k)
	  LinAlg_Solve(&D, &v1, &DofData_P->Solver, &w1);
	else
	  LinAlg_SolveAgain(&D, &v1, &DofData_P->Solver, &w1);
	LinAlg_ProdMatrixVector(K, &x, &v1);
	LinAlg_ProdVectorDouble(&v1, -1., &v1);
	LinAlg_AddVectorProdVectorDouble(&v1, &w2, shift_r, &v1);
	LinAlg_SolveAgain(&D, &v1, &DofData_P->Solver, &w2);
	GetDP2ArpackMerge(&w1, &w2, &workd[ipntr[1]-1]);
      }

      k++;
    }
    else if(ido == 99){
      /* We're done! */
      break;
    }
    else{
      Message::Info("Arpack code = %d (ignored)", info);
    }
  } while (1);

  Message::Info("Arpack required %d iterations", k);

  /* Testing for errors */
  if(info == 0){
    /* OK */
  }
  else if(info == 1){
    Message::Warning("Maxmimum number of iteration reached in EigenSolve");
  }
  else if(info == 2){
    Message::Warning("No shifts could be applied during a cycle of the");
    Message::Warning("Implicitly restarted Arnoldi iteration. One possibility");
    Message::Warning("is to increase the size of NCV relative to NEV.");
  }
  else if(info < 0){
    Message::Error("Arpack code = %d", info);
  }
  else{
    Message::Warning("Arpack code = %d (unknown)", info);
  }

  /* Call to zneupd for post-processing */
  zneupd_(&rvec, &howmny, select, d, z, &ldz, &sigma, workev, &bmat, &n, which,
	  &nev, &tol, resid, &ncv, v, &ldv, iparam, ipntr, workd, workl, &lworkl,
	  rwork, &info);

  /* Test for errors */
  if(info != 0)
    Message::Error("Arpack code = %d (eigenvector post-processing)", info);

  /* Compute the unshifted eigenvalues and print them, and store the
     associated eigenvectors */
  newsol = 0;
  for (k = 0; k < nev; k++){
    /* Unshift the eigenvalues */
    tmp = SQU(d[k].re) + SQU(d[k].im);
    d[k].re = shift_r + d[k].re/tmp;
    d[k].im = shift_i - d[k].im/tmp;

    if(!quad_evp){
      /* Eigenvalue = omega^2 */
      omega2.re = d[k].re;
      omega2.im = d[k].im;
      abs = sqrt(SQU(omega2.re) + SQU(omega2.im));
      arg = atan2(omega2.im, omega2.re);
      omega.re = sqrt(abs) * cos(0.5*arg);
      omega.im = sqrt(abs) * sin(0.5*arg);
      f.re = omega.re / TWO_PI;
      f.im = omega.im / TWO_PI;
    }
    else{
      /* Eigenvalue = i*omega */
      omega.re = d[k].im;
      omega.im = -d[k].re;
      omega2.re = SQU(omega.re) - SQU(omega.im);
      omega2.im = 2. * omega.re * omega.im;
      f.re = omega.re / TWO_PI;
      f.im = omega.im / TWO_PI;
    }

    Message::Info("Eigenvalue %03d: w^2 = %.12e %s %.12e * i",
                  k+1, omega2.re, (omega2.im > 0) ? "+" :  "-",
                  (omega2.im > 0) ? omega2.im : -omega2.im);
    Message::Info("                  w = %.12e %s %.12e * i",
                  omega.re, (omega.im > 0) ? "+" : "-",
                  (omega.im > 0) ? omega.im : -omega.im);
    Message::Info("                  f = %.12e %s %.12e * i",
                  f.re, (f.im > 0) ? "+" : "-", (f.im > 0) ? f.im : -f.im);

    /* Update the current value of Time and TimeImag so that
       $EigenvalueReal and $EigenvalueImag are up-to-date */
    Current.Time = omega.re;
    Current.TimeImag = omega.im;

    // test filter expression and continue without storing if false
    if(FilterExpressionIndex >= 0){
      struct Value val;
      Get_ValueOfExpressionByIndex(FilterExpressionIndex, NULL, 0., 0., 0., &val);
      if(!val.Val[0]){
        Message::Debug("Skipping eigenvalue %g + i * %g", omega.re, omega.im);
        continue;
      }
    }

    Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Re(Omega)",
                                   std::vector<double>(1, omega.re));
    Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Im(Omega)",
                                   std::vector<double>(1, omega.im));

    if(newsol) {
      /* Create new solution */
      Solution_S.TimeFunctionValues = NULL;
      LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof);
      List_Add(DofData_P->Solutions, &Solution_S);
      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);
    }
    newsol = 1;

    DofData_P->CurrentSolution->Time = omega.re;
    DofData_P->CurrentSolution->TimeImag = omega.im;
    DofData_P->CurrentSolution->TimeStep = (int)Current.TimeStep;
    Free(DofData_P->CurrentSolution->TimeFunctionValues);
    DofData_P->CurrentSolution->TimeFunctionValues = NULL;
    DofData_P->CurrentSolution->SolutionExist = 1;
    int incr = (Current.NbrHar == 2) ? gCOMPLEX_INCREMENT : 1;
    for(l = 0; l < DofData_P->NbrDof; l += incr){
      j = l / incr;
      if(Current.NbrHar == 2){
        LinAlg_SetComplexInVector(z[k*n+j].re, z[k*n+j].im,
                                  &DofData_P->CurrentSolution->x, l, l+1);
      }
      else{
        LinAlg_SetDoubleInVector(z[k*n+j].re,
                                 &DofData_P->CurrentSolution->x, l);
      }
    }
    LinAlg_AssembleVector(&DofData_P->CurrentSolution->x);
    /* Arpack returns eigenvectors normalized in L-2 norm. Renormalize
       them in L-infty norm so that the absolute value of the largest
       element is 1 */
    tmp = 0.;
    for(l = 0; l < DofData_P->NbrDof; l += incr){
      if(Current.NbrHar == 2){
        LinAlg_GetComplexInVector(&d1, &d2,
                                  &DofData_P->CurrentSolution->x, l, l+1);
        abs = sqrt(SQU(d1) + SQU(d2));
      }
      else{
        LinAlg_GetDoubleInVector(&d1,
                                 &DofData_P->CurrentSolution->x, l);
        abs = sqrt(SQU(d1));
      }
      if(abs > tmp) tmp = abs;
    }
    if(tmp > 1.e-16)
      LinAlg_ProdVectorDouble(&DofData_P->CurrentSolution->x, 1./tmp,
			      &DofData_P->CurrentSolution->x);

    /* Increment the global timestep counter so that a future
       GenerateSystem knows which solutions exist */
    Current.TimeStep += 1.;
  }

  /* Deallocate */
  if(!quad_evp){
    LinAlg_DestroyVector(&v1);
    LinAlg_DestroyVector(&v2);
  }
  else{
    LinAlg_DestroyVector(&x);
    LinAlg_DestroyVector(&y);
    LinAlg_DestroyVector(&v1);
    LinAlg_DestroyVector(&w1);
    LinAlg_DestroyVector(&w2);
    LinAlg_DestroyMatrix(&D);
  }

  Free(resid);
  Free(v);
  Free(workd);
  Free(workl);
  Free(rwork);
  Free(select);
  Free(d);
  Free(z);
  Free(workev);
}

#endif
