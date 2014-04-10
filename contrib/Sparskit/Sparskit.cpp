#include <stdio.h>
#include <string.h>
#include <math.h>
#include "GetDPConfig.h"
#include "Sparskit.h"
#include "MallocUtils.h"
#include "Message.h"

#if defined(HAVE_UNDERSCORE)
#define etime_      etime
#define ilut_       ilut
#define ilutp_      ilutp
#define ilud_       ilud
#define iludp_      iludp
#define iluk_       iluk
#define ilu0_       ilu0
#define milu0_      milu0
#define cmkreord_   cmkreord
#define sortcol_    sortcol
#define skit_       skit
#define psplot_     psplot
#define cg_         cg
#define cgnr_       cgnr
#define bcg_        bcg
#define dbcg_       dbcg
#define bcgstab_    bcgstab
#define tfqmr_      tfqmr
#define fom_        fom
#define gmres_      gmres
#define fgmres_     fgmres
#define dqgmres_    dqgmres
#define amux_       amux
#define atmux_      atmux
#define lusol_      lusol
#define lutsol_     lutsol
#define csrcoo_     csrcoo
#define ma28ad_     ma28ad
#define ma28cd_     ma28cd
#define dnrm2_      dnrm2
#define flu_        flu
#define pgmres_     pgmres
#define getdia_     getdia
#define amudia_     amudia
#define diamua_     diamua
#define rnrms_      rnrms
#define cnrms_      cnrms
#endif

/* Fortran prototypes */

extern "C" {
  void  ilut_     (int*,double*,int*,int*,int*,double*,
		   sscalar*,int*,int*,int*,double*,int*,int*);
  void  ilutp_    (int*,double*,int*,int*,int*,double*,
		   double*,int*,sscalar*,int*,
		   int*,int*,double*,int*,int*,int*);
  void  ilud_     (int*,double*,int*,int*,double*,
		   double*,sscalar*,int*,
		   int*,int*,double*,int*,int*);
  void  iludp_    (int*,double*,int*,int*,double*,
		   double*,double*,
		   int*,sscalar*,int*,int*,int*,
		   double*,int*,int*,int*);
  void  iluk_     (int*,double*,int*,int*,int*,
		   sscalar*,int*,int*,
		   int*,int*,double*,int*,int*);
  void  ilu0_     (int*,double*,int*,int*,sscalar*,int*,int*,int*,int*);
  void  milu0_    (int*,double*,int*,int*,sscalar*,int*,int*,int*,int*);
  void  cmkreord_ (int*,double*,int*,int*,double*,int*,int*,int*,
		   int*,int*,int*,int*,int*,int*);
  void  sortcol_  (int*,double*,int*,int*,int*,double*);
  void  skit_     (int*,double*,int*,int*,int*,int*,int*);
  void  psplot_   (int*,int*,int*,int*,int*);
  void  cg_       (int*,double*,double*,int*,double*,double*);
  void  cgnr_     (int*,double*,double*,int*,double*,double*);
  void  bcg_      (int*,double*,double*,int*,double*,double*);
  void  dbcg_     (int*,double*,double*,int*,double*,double*);
  void  bcgstab_  (int*,double*,double*,int*,double*,double*);
  void  tfqmr_    (int*,double*,double*,int*,double*,double*);
  void  fom_      (int*,double*,double*,int*,double*,double*);
  void  gmres_    (int*,double*,double*,int*,double*,double*);
  void  fgmres_   (int*,double*,double*,int*,double*,double*);
  void  dqgmres_  (int*,double*,double*,int*,double*,double*);
  void  amux_     (int*,double*,double*,double*,int*,int*);
  void  atmux_    (int*,double*,double*,double*,int*,int*);
  void  lusol_    (int*,double*,double*,sscalar*,int*,int*);
  void  lutsol_   (int*,double*,double*,sscalar*,int*,int*);
  void  csrcoo_   (int*,int*,int*,double*,int*,int*,int*,double*,int*,int*,int*);
  void  ma28ad_   (int*,int*,double*,int*,int*,int*,int*,double*,int*,int*,double*,int*);
  void  ma28cd_   (int*,double*,int*,int*,int*,double*,double*,int*);
  double dnrm2_   (int*,double*,int*);
  void  flu_      (int*,double*,double*,double*,int*,int*,double*,double*,
		   double*,double*,double*);
  void  pgmres_   (int*,int*,double*,double*,double*,double*,
		   int*,int*,double*,int*,int*,
		   sscalar*,int*,int*,int*);
  void getdia_    (int*,int*,int*,double*,int*,int*,int*,double*,int*,int*);
  void diamua_    (int*,int*,double*,int*,int*,double*,double*,int*,int*);
  void amudia_    (int*,int*,double*,int*,int*,double*,double*,int*,int*);
  void rnrms_     (int*,int*,double*,int*,int*,double*);
  void cnrms_     (int*,int*,double*,int*,int*,double*);
}

/* ------------------------------------------------------------------------ */
/*  s o l v e                                                               */
/* ------------------------------------------------------------------------ */

void solve_matrix (Matrix *M, Solver_Params *p, double *b, double *x){
  FILE    *pf;
  double   fpar[17];
  double  *a, *w, *rhs, *sol, *dx ;
  double   res;
  int      i, j, k, nnz, nnz_ilu, ierr, ipar[17];
  int     *ja, *ia, *jw, *mask, *levels;
  int      its, end, do_permute=0;
  int      zero=0, un=1, deux=2, six=6, douze=12, trente=30, trente_et_un=31;
  int      ROW=0, COLUMN=1;
  double   res1=1.;
  int      TrueNnz=0;

  if (!M->N) {
    Message::Warning("No equations in linear system");
    return;
  }

  for(i=0 ; i<M->N ; i++){
    if(b[i] != 0.) break;
    if(i == M->N-1) {
      Message::Warning("Null right hand side in linear system");
      /*
	for(i=0 ; i<M->N ; i++)  x[i] = 0. ;
	return ;
      */
    }
  }

  if(M->T == DENSE){

    if(p->Algorithm == LU){

      Message::Info("Dense LU decomposition");
      print_matrix_info_DENSE(M->N);

      sol = (double*)Malloc(M->N * sizeof(double));
      w   = (double*)Malloc(M->N * sizeof(double));
      dx  = (double*)Malloc(M->N * sizeof(double));

      ipar[1] = p->Re_Use_LU;
      ipar[2] = p->Iterative_Improvement;
      ipar[3] = p->Matrix_Printing;
      ipar[4] = p->Nb_Iter_Max;

      fpar[1] = p->Stopping_Test;

      flu_(&ipar[1], &fpar[1], M->F.a, M->F.lu, &M->N, &M->N, b, x, dx, sol, w);

      Free(sol);
      Free(w);
      Free(dx);

      return ;
    }

    Message::Info("Dense to sparse matrix conversion") ;

    nnz = M->N * M->N ;

    M->S.a    = List_Create(1, 1, sizeof(double));
    M->S.a->n = nnz ;
    M->S.a->array = (char*) M->F.a ;

    M->S.jptr = List_Create(M->N+1, M->N, sizeof(int));
    M->S.ai   = List_Create(nnz, M->N, sizeof(int));

    for(i=1 ; i<=nnz ; i+=M->N){
      List_Add(M->S.jptr, &i) ;
      for(j=1 ; j<=M->N ; j++){
	List_Add(M->S.ai, &j) ;
      }
    }

    i = nnz + 1 ; List_Add(M->S.jptr, &i) ;

    if(M->changed){
      do_permute = 1 ;
      M->changed = 0 ;
    }

    for (i=0 ; i<nnz ; i++) if (M->F.a[i]) TrueNnz++ ;
    Message::Info("Number of nonzeros %d/%d (%.4f)",TrueNnz, nnz, (double)TrueNnz/(double)nnz);

    Message::Cpu("");

  } /* if DENSE */
  else{

    nnz = List_Nbr(M->S.a);
    if(M->changed){
      do_permute = 1 ;
      csr_format (&M->S, M->N);
      restore_format (&M->S);
      M->changed = 0 ;
    }

  } /* if SPARSE */

  a  = (double*) M->S.a->array;
  ia = (int*) M->S.jptr->array;
  ja = (int*) M->S.ai->array;

  if(p->Scaling != NONE){
    Message::Info("Scaling system of equations") ;
    scale_matrix (p->Scaling, M) ;
    scale_vector (ROW, M, b) ;
  }
  else{
    Message::Info("No scaling of system of equations") ;
  }

  for (i=1; i<M->N; i++) {
    if(ia[i]-ia[i-1] <= 0)
      Message::Error("Zero row in matrix");
  }

  rhs = (double*) Malloc(M->N * sizeof(double));
  sol = (double*) Calloc(M->N, sizeof(double));

  /* Renumbering */

  if (!M->ILU_Exists){
    M->S.permr  = (int*) Malloc(M->N * sizeof(int));
    M->S.rpermr = (int*) Malloc(M->N * sizeof(int));
    M->S.permp  = (int*) Malloc(2 * M->N * sizeof(int));
  }

  if(do_permute || !M->ILU_Exists){
    for(i=0 ; i<M->N ; i++) {
      M->S.permr[i] = M->S.rpermr[i] = M->S.permp[i+M->N] = i+1;
    }
    switch (p->Renumbering_Technique){
    case NONE:
      Message::Info("No renumbering");
      break;
    case RCMK:
      Message::Info("RCMK algebraic renumbering");
      if(!M->ILU_Exists){
	M->S.a_rcmk  = (double*) Malloc(nnz * sizeof(double));
	M->S.ia_rcmk = (int*) Malloc((M->N + 1) * sizeof(int));
	M->S.ja_rcmk = (int*) Malloc(nnz * sizeof(int));
      }
      mask    = (int*) Malloc(nnz * sizeof(int));
      levels  = (int*) Malloc((M->N + 1) * sizeof(int));
      i = j = k = 1;
      cmkreord_(&M->N, a, ja, ia, M->S.a_rcmk, M->S.ja_rcmk, M->S.ia_rcmk,
		&i, M->S.permr, mask, &j, &k, M->S.rpermr, levels);
      w = (double*) Malloc(nnz * sizeof(double));
      sortcol_(&M->N, M->S.a_rcmk, M->S.ja_rcmk, M->S.ia_rcmk, mask, w);
      Free(w); Free(mask); Free(levels);
      break;
    default :
      Message::Error("Unknown renumbering technique");
      break;
    }
    print_matrix_info_CSR(M->N, ia, ja);
    Message::Cpu("");
  }

  if(p->Renumbering_Technique == RCMK){
    if (p->Re_Use_ILU && !M->ILU_Exists && !do_permute){
      /*
      This is incorrect if M is to be changed during the process, and
      we still want to keep the same precond.

      Free(M->S.a->array) ;
      Free(M->S.jptr->array) ;
      Free(M->S.ai->array) ;
      M->S.a->array =  (char*)M->S.a_rcmk;
      M->S.jptr->array = (char*)M->S.ia_rcmk;
      M->S.ai->array = (char*)M->S.ja_rcmk;
      */
    }
    a = M->S.a_rcmk;
    ia = M->S.ia_rcmk;
    ja = M->S.ja_rcmk;
  }


  if (p->Matrix_Printing == 1 || p->Matrix_Printing == 3) {
    Message::Info("Matrix printing");
    skit_(&M->N, a, ja, ia, &douze, &douze, &ierr);
    pf = fopen("fort.13","w");
    for (i=0 ; i<M->N ; i++) fprintf(pf, "%d %22.15E\n", i+1, b[i]);
    fclose(pf);
    psplot_(&M->N, ja, ia, &trente, &zero);
  }

  /* Incomplete factorizations */

  if (!M->ILU_Exists) {

    if (p->Re_Use_ILU) M->ILU_Exists = 1;

#if defined(HAVE_ILU_FLOAT)
#define ILUSTORAGE "Float"
#else
#define ILUSTORAGE "Double"
#endif

    end = 0 ;

    switch (p->Preconditioner){

    case ILUT  : Message::Info("ILUT (%s, fill-in = %d)", ILUSTORAGE, p->Nb_Fill);
      nnz_ilu = 2 * (M->N+1) * (p->Nb_Fill+1); break;

    case ILUTP : Message::Info("ILUTP (%s, fill-in = %d)", ILUSTORAGE, p->Nb_Fill);
      nnz_ilu = 2 * (M->N+1) * (p->Nb_Fill+1); break;

    case ILUD  : Message::Info("ILUD (%s)", ILUSTORAGE);
      /* first guess */
      nnz_ilu = List_Nbr(M->S.a); break;

    case ILUDP : Message::Info("ILUDP (%s)", ILUSTORAGE);
      /* first guess */
      nnz_ilu = List_Nbr(M->S.a); break ;

    case ILUK  : Message::Info("ILU%d (%s)", p->Nb_Fill, ILUSTORAGE);
      /* exact for nbfill=0, first guess otherwise */
      nnz_ilu = (p->Nb_Fill+1) * List_Nbr(M->S.a) + (M->N+1);
      break;

    case ILU0  : Message::Info("ILU0 (%s)", ILUSTORAGE);
      nnz_ilu = List_Nbr(M->S.a) + (M->N+1); break;

    case MILU0 : Message::Info("MILU0 (%s)", ILUSTORAGE);
      nnz_ilu = List_Nbr(M->S.a) + (M->N+1); break;

    case DIAGONAL :
      Message::Info("Diagonal scaling (%s)", ILUSTORAGE);
      M->S.alu = (sscalar*) Malloc((M->N+1) * sizeof(sscalar));
      M->S.jlu = (int*) Malloc((M->N+1) * sizeof(int));
      M->S.ju  = (int*) Malloc((M->N+1) * sizeof(int));

      for (i=0 ; i<M->N ; i++) {
	M->S.alu[i] = 1.0 ;
	M->S.jlu[i] = M->N+2 ;
	M->S.ju[i]  = M->N+2 ;
      }
      M->S.alu[M->N] = 0.0 ;
      M->S.jlu[M->N] = M->N+2 ;
      M->S.ju[M->N]  = 0 ;
      end = 1;
      ierr = 0;
      break;

    case NONE  :
      Message::Info("No ILU");
      end = 1;
      ierr = 0;
      break ;

    default :
      Message::Error("Unknown ILU method");
      break;
    }

    if(!end){
      M->S.alu = (sscalar*) Malloc(nnz_ilu * sizeof(sscalar));
      M->S.jlu = (int*) Malloc(nnz_ilu * sizeof(int));
      M->S.ju  = (int*) Malloc((M->N+1) * sizeof(int));
    }

    reallocate :

    switch(p->Preconditioner){
    case ILUT :
      w  = (double*) Malloc((M->N+1) * sizeof(double));
      jw = (int*) Malloc(2 * (M->N+1) * sizeof(int));
      ilut_(&M->N, a, ja, ia, &p->Nb_Fill, &p->Dropping_Tolerance,
	    M->S.alu, M->S.jlu, M->S.ju, &nnz_ilu, w, jw, &ierr);
      Free(w); Free(jw); break;

    case ILUTP :
      w  = (double*) Malloc((M->N+1) * sizeof(double));
      jw = (int*) Malloc(2 * (M->N+1) * sizeof(int));
      ilutp_(&M->N, a, ja, ia, &p->Nb_Fill, &p->Dropping_Tolerance,
	     &p->Permutation_Tolerance, &M->N, M->S.alu, M->S.jlu,
	     M->S.ju, &nnz_ilu, w, jw, M->S.permp, &ierr);
      Free(jw); Free(w); break;

    case ILUD :
      w  = (double*) Malloc((M->N+1) * sizeof(double));
      jw = (int*) Malloc(2 * (M->N+1) * sizeof(int));
      ilud_(&M->N, a, ja, ia, &p->Diagonal_Compensation,
	    &p->Dropping_Tolerance, M->S.alu, M->S.jlu,
	    M->S.ju, &nnz_ilu, w, jw, &ierr);
      Free(w); Free(jw); break;

    case ILUDP :
      w     = (double*) Malloc((M->N+1) * sizeof(double));
      jw    = (int*) Malloc(2 * (M->N+1) * sizeof(int));
      iludp_(&M->N, a, ja, ia, &p->Diagonal_Compensation,
	     &p->Dropping_Tolerance, &p->Permutation_Tolerance,
	     &M->N, M->S.alu, M->S.jlu, M->S.ju, &nnz_ilu,
	     w, jw, M->S.permp, &ierr);
      Free(jw); Free(w); break;

    case ILUK :
      levels = (int*) Malloc(nnz_ilu * sizeof(int));
      w      = (double*) Malloc((M->N+1) * sizeof(double));
      jw     = (int*) Malloc(3 * (M->N+1) * sizeof(int));
      iluk_(&M->N, a, ja, ia, &p->Nb_Fill,
	    M->S.alu, M->S.jlu, M->S.ju,
	    levels, &nnz_ilu, w, jw, &ierr);
      Free(levels); Free(w); Free(jw); break;

    case ILU0 :
      jw = (int*) Malloc((M->N+1) * sizeof(int));
      ilu0_(&M->N, a, ja, ia, M->S.alu, M->S.jlu, M->S.ju, jw, &ierr);
      Free(jw); break;

    case MILU0 :
      jw = (int*) Malloc((M->N+1) * sizeof(int));
      milu0_(&M->N, a, ja, ia, M->S.alu, M->S.jlu, M->S.ju, jw, &ierr);
      Free(jw); break;

    }

    switch (ierr){
    case  0 :
      break;
    case -1 :
      Message::Error("Input matrix may be wrong");
      break;
    case -2 : /* Matrix L in ILU overflows work array 'al' */
    case -3 : /* Matrix U in ILU overflows work array 'alu' */
      nnz_ilu += nnz_ilu/2 ;
      Message::Info("Reallocating ILU (NZ: %d)", nnz_ilu);
      Free(M->S.alu) ;
      M->S.alu = (sscalar*) Malloc(nnz_ilu * sizeof(sscalar));
      Free(M->S.jlu) ;
      M->S.jlu = (int*) Malloc(nnz_ilu * sizeof(int));
      goto reallocate ;
    case -4 :
      Message::Error("Illegal value of nb_fill in ILU");
      break;
    case -5 :
      Message::Error("Zero row encountered in ILU");
      break;
    default :
      Message::Error("Zero pivot on line %d in ILU",ierr);
      break;
    }

    if(p->Preconditioner != NONE)
      print_matrix_info_MSR(M->N, M->S.alu, M->S.jlu);

    if(p->Matrix_Printing == 2 || p->Matrix_Printing == 3){
      Message::Info("ILU printing");
      psplot_(&M->N, M->S.jlu, M->S.jlu, &trente_et_un, &deux);
    }

    Message::Cpu("");

  }

  /* RHS reordering */

  for(i=0;i<M->N;i++){
    rhs[i] = b[M->S.rpermr[i] - 1];
  }

  /* Iterations */

  ipar[1] = 0;
  ipar[2] = (p->Preconditioner == NONE) ? 0 : p->Preconditioner_Position;
  ipar[3] = 1;
  ipar[4] = 0;
  ipar[5] = p->Krylov_Size;
  ipar[6] = p->Nb_Iter_Max;

  fpar[1] = p->Stopping_Test;
  fpar[2] = 0.0;
  fpar[11] = 0.0;

  switch (p->Algorithm){
  case CG      : Message::Info("Conjugate Gradient (CG)");
                 ipar[4] = 5 * M->N; break;
  case CGNR    : Message::Info("CG Normal Residual equation (CGNR)");
                 ipar[4] = 5 * M->N; break;
  case BCG     : Message::Info("Bi-Conjugate Gradient (BCG)");
                 ipar[4] = 7 * M->N; break;
  case DBCG    : Message::Info("BCG with partial pivoting (DBCG)");
                 ipar[4] = 11 * M->N; break;
  case BCGSTAB : Message::Info("BCG stabilized (BCGSTAB)");
                 ipar[4] = 8 * M->N; break;
  case TFQMR   : Message::Info("Transpose-Free Quasi-Minimum Residual (TFQMR)");
                 ipar[4] = 11 * M->N; break;
  case FOM     : Message::Info("Full Orthogonalization Method (FOM)");
                 ipar[4] = (M->N+3) * (ipar[5]+2) + (ipar[5]+1) * ipar[5]/2; break;
  case GMRES   : Message::Info("Generalized Minimum RESidual (GMRES)");
                 ipar[4] = (M->N+3) * (ipar[5]+2) + (ipar[5]+1) * ipar[5]/2; break;
  case FGMRES  : Message::Info("Flexible version of Generalized Minimum RESidual (FGMRES)");
                 ipar[4] = 2*M->N * (ipar[5]+1) + (ipar[5]+1)*ipar[5]/2 + 3*ipar[5] + 2; break;
  case DQGMRES : Message::Info("Direct version of Quasi Generalize Minimum RESidual (DQGMRES)");
                 ipar[4] = M->N + (ipar[5]+1) * (2*M->N+4); break;
  case PGMRES  : Message::Info("Alternative Generalized Minimum RESidual (GMRES)");
                 ipar[4] = (M->N+4) * (ipar[5]+2) + (ipar[5]+1) * ipar[5]/2; break;
  default      : Message::Error("Unknown algorithm for sparse matrix solver"); break;
  }

  w = (double*) Malloc(ipar[4] * sizeof(double));

  its = 0;
  end = 0;
  res = 0.0;

  while(1){

    switch(p->Algorithm){
    case CG      : cg_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case CGNR    : cgnr_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case BCG     : bcg_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case DBCG    : dbcg_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case BCGSTAB : bcgstab_(&M->N, rhs, sol, &ipar[1], &fpar[1], w);	break;
    case TFQMR   : tfqmr_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case FOM     : fom_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case GMRES   : gmres_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case FGMRES  : fgmres_(&M->N, rhs, sol, &ipar[1], &fpar[1], w); break;
    case DQGMRES : dqgmres_(&M->N, rhs, sol, &ipar[1], &fpar[1], w);	break;
    case PGMRES  : pgmres_ (&M->N, &p->Krylov_Size, rhs, sol, w, &p->Stopping_Test,
			    &p->Nb_Iter_Max, &six, a, ja, ia,
			    M->S.alu, M->S.jlu, M->S.ju, &ierr);
                   end = 1; break;
    }

    if(!end){

      if(ipar[7] != its){
	if(its) Message::Info(" %4d  %.7e  %.7e", its, res, res/res1);
	its = ipar[7] ;
      }

      res = fpar[5];
      if(its==1) res1 = fpar[5] ;

      switch(ipar[1]){
      case 1 :
	amux_(&M->N, &w[ipar[8]-1], &w[ipar[9]-1], a, ja, ia); break;
      case 2 :
	atmux_(&M->N, &w[ipar[8]-1], &w[ipar[9]-1], a, ja, ia); break;
      case 3 : case 5 :
	lusol_(&M->N, &w[ipar[8]-1], &w[ipar[9]-1], M->S.alu, M->S.jlu, M->S.ju); break;
      case 4 : case 6 :
	lutsol_(&M->N, &w[ipar[8]-1], &w[ipar[9]-1], M->S.alu, M->S.jlu, M->S.ju); break;
      case 0 :
	end = 1; break;
      case -1 :
	Message::Warning("Iterative solver has iterated too many times"); end = 1; break;
      case -2 :
	Message::Warning("Iterative solver was not given enough work space");
	Message::Warning("The work space should at least have %d elements", ipar[4]);
	end = 1; break;
      case -3 :
	Message::Warning("Iterative solver is facing a break-down"); end = 1; break;
      default :
	Message::Warning("Iterative solver terminated (code = %d)", ipar[1]); end = 1; break;
      }

    }
    if(end) break;

  }


  /* Convergence results monitoring */

  Message::Info(" %4d  %.7e  %.7e", ipar[7], fpar[6], fpar[6]/res1);

  amux_(&M->N, sol, w, a, ja, ia);


  for(i=0 ; i<M->N ; i++){
    w[M->N+i] = sol[i] - 1.0 ;
    w[i] -= rhs[i] ;
  }


  Message::Info("%d Iterations / Residual: %g", ipar[7], dnrm2_(&M->N,w,&un));
  /*
  Message::Info("Conv. Rate: %g, |Res|: %g, |Err|: %g",
            fpar[7], dnrm2_(&M->N,w,&un), dnrm2_(&M->N,&w[M->N],&un));
  */
  Free(w);

  /* Inverse renumbering */

  for (i=0;i<M->N;i++) {
    j = M->S.permr[i] - 1;
    k = M->S.permp[j+M->N] - 1;
    x[i] = sol[k];
  }

  /* Free memory */

  Free(rhs);
  Free(sol);

  if (!M->ILU_Exists){
    if(p->Preconditioner != NONE) {
      Free(M->S.alu);
      Free(M->S.jlu);
      Free(M->S.ju);
    }
    if (p->Renumbering_Technique == RCMK) {
      Free(M->S.rpermr);
      Free(M->S.permr);
      Free(M->S.permp);
      Free(M->S.a_rcmk);
      Free(M->S.ia_rcmk);
      Free(M->S.ja_rcmk);
    }
  }

  if(M->T == DENSE){
    List_Delete(M->S.a);
    List_Delete(M->S.jptr);
    List_Delete(M->S.ai);
  }

  if(p->Scaling)
    scale_vector (COLUMN, M, x) ;

}

/* ------------------------------------------------------------------------ */
/*  p r i n t                                                               */
/* ------------------------------------------------------------------------ */

void print_parametres (Solver_Params *p){
  printf(" Matrix_Format           : %d\n", p->Matrix_Format);
  printf(" Matrix_Printing         : %d\n", p->Matrix_Printing);
  printf(" Renumbering_Technique   : %d\n", p->Renumbering_Technique);
  printf(" Preconditioner          : %d\n", p->Preconditioner);
  printf(" Preconditioner_Position : %d\n", p->Preconditioner_Position);
  printf(" Nb_Fill                 : %d\n", p->Nb_Fill);
  printf(" Dropping_Tolerance      : %g\n", p->Dropping_Tolerance);
  printf(" Permutation_Tolerance   : %g\n", p->Permutation_Tolerance);
  printf(" Diagonal_Compensation   : %g\n", p->Diagonal_Compensation);
  printf(" Algorithm               : %d\n", p->Algorithm);
  printf(" Krylov_Size             : %d\n", p->Krylov_Size);
  printf(" IC_Acceleration         : %g\n", p->IC_Acceleration);
  printf(" Iterative_Improvement   : %d\n", p->Iterative_Improvement);
  printf(" Nb_Iter_Max             : %d\n", p->Nb_Iter_Max);
  printf(" Stopping_Test           : %g\n", p->Stopping_Test);
}

/* ------------------------------------------------------------------------ */
/*  i n i t                                                                 */
/* ------------------------------------------------------------------------ */

void init_matrix (int NbLines, Matrix *M, Solver_Params *p){
  int i, j=0;

  M->T = p->Matrix_Format;
  M->N = NbLines;
  M->changed = 1 ;
  M->ILU_Exists = 0;
  M->notranspose = 0 ;
  M->scaled = 0 ;

  switch (M->T) {
  case SPARSE :
    M->S.a    = List_Create (NbLines, NbLines, sizeof(double));
    M->S.ai   = List_Create (NbLines, NbLines, sizeof(int));
    M->S.ptr  = List_Create (NbLines, NbLines, sizeof(int));
    M->S.jptr = List_Create (NbLines+1, NbLines, sizeof(int));
    /* '+1' indispensable: csr_format ecrit 'nnz+1' dans jptr[NbLine] */
    for(i=0; i<NbLines; i++) List_Add (M->S.jptr, &j);
    break;
  case DENSE :
    M->F.LU_Exist = 0;
    /* Tous les algos iteratifs sont programmes pour resoudre
       A^T x = b... C'est tres con, mais bon. L'algo LU est le seul
       qui demande la vraie matrice en entree... */
    if(p->Algorithm == LU){
      M->F.lu   = (double*) Malloc (NbLines * NbLines * sizeof(double));
      M->notranspose = 1 ;
    }
    else
      M->F.lu = NULL;
    M->F.a    = (double*) Malloc (NbLines * NbLines * sizeof(double));
    break;
  default :
    Message::Error("Unknown type of matrix storage format: %d", M->T);
    break;
  }
}


void init_vector (int Nb, double **V){
  *V = (double*) Malloc (Nb * sizeof(double));
}

/* ------------------------------------------------------------------------ */
/*  f r e e                                                                 */
/* ------------------------------------------------------------------------ */

void free_matrix (Matrix *M){

  if(M->scaled){
    Free(M->rowscal) ;
    Free(M->colscal) ;
  }

  switch (M->T) {
  case SPARSE :
    List_Delete(M->S.a);
    List_Delete(M->S.ai);
    List_Delete(M->S.ptr);
    List_Delete(M->S.jptr);
    break;
  case DENSE :
    Free(M->F.a);
    Free(M->F.lu);
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  z e r o                                                                 */
/* ------------------------------------------------------------------------ */

void zero_matrix (Matrix *M){
  int i,j=0;

  M->changed = 1 ;

  switch (M->T) {
  case SPARSE :
    List_Reset (M->S.a);
    List_Reset (M->S.ai);
    List_Reset (M->S.ptr);
    List_Reset (M->S.jptr);
    for (i=0; i<M->N; i++) List_Add (M->S.jptr, &j);
    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] = 0.0;
    break;
  }
}

void zero_matrix2 (Matrix *M){
  int      i, iptr;
  int     *jptr, *ptr;
  double  *a;

  M->changed = 1 ;
  switch (M->T) {
  case SPARSE :
    jptr  = (int*) M->S.jptr->array;
    ptr = (int*) M->S.ptr->array;
    a   = (double*) M->S.a->array;
    for (i=0; i<M->N; i++) {
      iptr = jptr[i];
      while (iptr>0) {
	a[iptr-1]= 0. ;
	iptr = ptr[iptr-1];
      }
    }
    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] = 0.0;
    break;
  }
}

void zero_vector (int Nb, double *V){
  int i;
  for(i=0; i<Nb; i++) V[i] = 0.0;
}


/* ------------------------------------------------------------------------ */
/*  c o p y                                                                 */
/* ------------------------------------------------------------------------ */

void copy_vector (int Nb, double *U, double *V){
  int i;
  for(i=0; i<Nb; i++) V[i] = U[i];
}

/* ------------------------------------------------------------------------ */
/*  a d d                                                                   */
/* ------------------------------------------------------------------------ */

void add_vector_vector (int Nb, double *U, double *V){
  /* u+v -> u */
  int i;
  for(i=0; i<Nb; i++) U[i] += V[i];
}

void add_vector_prod_vector_double (int Nb, double *U, double *V, double d){
  /* u+v*d -> u */
  int i;
  for(i=0; i<Nb; i++) U[i] += d*V[i];
}

void add_matrix_double (Matrix *M, int ic, int il, double val){
  /* attention a la transposition ! */
  int     *ai, *pp, n, iptr, iptr2, jptr, *ptr, zero = 0;
  double   *a;

  M->changed = 1 ;

  switch (M->T) {

  case SPARSE :
    il--;
    pp  = (int*) M->S.jptr->array;
    ptr = (int*) M->S.ptr->array;
    ai  = (int*) M->S.ai->array;
    a   = (double*) M->S.a->array;

    iptr = pp[il];
    iptr2 = iptr-1;

    while(iptr>0){
      iptr2 = iptr-1;
      jptr = ai[iptr2];
      if(jptr == ic){
	a[iptr2] += val;
	return;
      }
      iptr = ptr[iptr2];
    }

    List_Add (M->S.a, &val);
    List_Add (M->S.ai, &ic);
    List_Add (M->S.ptr, &zero);

    /* Les pointeurs ont pu etre modifies
       s'il y a eu une reallocation dans List_Add */

    ptr = (int*) M->S.ptr->array;
    ai  = (int*) M->S.ai->array;
    a   = (double*) M->S.a->array;

    n = List_Nbr(M->S.a);
    if(!pp[il]) pp[il] = n;
    else ptr[iptr2] = n;
    break;

  case DENSE :
    if(M->notranspose)
      M->F.a[((M->N))*(il-1)+(ic-1)] += val;
    else
      M->F.a[((M->N))*(ic-1)+(il-1)] += val;
    break;

  }
}


void add_matrix_matrix (Matrix *M, Matrix *N){
  /* M+N -> M */
  int      i, *ai, iptr, *jptr, *ptr;
  double  *a;

  switch (M->T) {
  case SPARSE :
    jptr = (int*) N->S.jptr->array;
    ptr  = (int*) N->S.ptr->array;
    a    = (double*) N->S.a->array;
    ai   = (int*) N->S.ai->array;

    for (i=0; i<N->N; i++) {
      iptr = jptr[i];
      while (iptr>0) {
	add_matrix_double (M, ai[iptr-1], i+1, a[iptr-1]);
	/* add_matrix_double transpose, donc pour additionner,
	   il faut transposer une seconde fois */
	iptr = ptr[iptr-1];
      }
    }

    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] += N->F.a[i];
    break;

  }
}

void add_matrix_prod_matrix_double (Matrix *M, Matrix *N, double d){
  /* M+N*d -> M */
  int      i, *ai, iptr, *jptr, *ptr;
  double  *a;

  switch (M->T) {
  case SPARSE :
    jptr = (int*) N->S.jptr->array;
    ptr  = (int*) N->S.ptr->array;
    a    = (double*) N->S.a->array;
    ai   = (int*) N->S.ai->array;

    for (i=0; i<N->N; i++) {
      iptr = jptr[i];
      while (iptr>0) {
	add_matrix_double (M, ai[iptr-1], i+1, d*a[iptr-1]);
	/* add_matrix_double transpose, donc pour additionner,
	   il faut transposer une seconde fois */
	iptr = ptr[iptr-1];
      }
    }

    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] += d*N->F.a[i];
    break;

  }
}

/* ------------------------------------------------------------------------ */
/*  s u b                                                                   */
/* ------------------------------------------------------------------------ */

void sub_vector_vector_1 (int Nb, double *U, double *V){
  /* u-v -> u */
  int i;
  for(i=0; i<Nb; i++) U[i] -= V[i];
}


void sub_vector_vector_2 (int Nb, double *U , double *V ){
  /* u-v -> v */
  int i;
  for(i=0; i<Nb; i++) V[i] = U[i] - V[i];
}


/* ------------------------------------------------------------------------ */
/*  p r o d                                                                 */
/* ------------------------------------------------------------------------ */

void prod_vector_double (int Nb, double *U, double a){
  /* u*a -> u  */
  int i;
  for(i=0; i<Nb; i++) U[i] *= a;
}

void prodsc_vector_vector (int Nb, double *U, double *V, double *prosca){
  /* u*v -> prosca  */
  int i;
  *prosca = 0.0 ;
  for (i=0; i<Nb; i++) *prosca += U[i] * V[i];
}



void scale_matrix (int scaling, Matrix *M){
  int     i, *ai, *jptr ;
  double  *a, *rowscal = NULL, *colscal = NULL;
  int job0=0, job1=1,  ioff=0, len, *idiag, norm ;


  switch (M->T) {

  case SPARSE :

    jptr = (int*) M->S.jptr->array;
    a    = (double*) M->S.a->array;
    ai   = (int*) M->S.ai->array;

    switch (scaling) {

    case DIAG_SCALING :

      rowscal = colscal = (double*)Malloc(M->N * sizeof(double));

      /* extract diagonal */
      idiag = (int*)Malloc(M->N * sizeof(int));
      getdia_ (&M->N, &M->N, &job0, a, ai, jptr, &len, rowscal, idiag, &ioff) ;
      Free (idiag);

      for (i = 0 ; i < M->N ; i++){
	if (rowscal[i]){
	  rowscal[i] = 1./sqrt(fabs(rowscal[i])) ;
	  /* printf("  %d %e \n", i, rowscal[i] ); */
	}
	else {
	  Message::Warning("Diagonal scaling aborted because of zero diagonal element (%d)",i+1) ;
	  Free (rowscal) ;
	  return ;
	}
      }

      diamua_ (&M->N, &job1, a, ai, jptr, rowscal, a, ai, jptr) ;
      amudia_ (&M->N, &job1, a, ai, jptr, colscal, a, ai, jptr) ;
      break ;

    case MAX_SCALING   :  case NORM1_SCALING :  case NORM2_SCALING :

      switch (scaling) {
      case MAX_SCALING   : norm = 0 ; break ;
      case NORM1_SCALING : norm = 1 ; break ;
      case NORM2_SCALING : norm = 2 ; break ;
      }

      rowscal = (double*)Malloc(M->N * sizeof(double));
      rnrms_ (&M->N, &norm, a, ai, jptr, rowscal);
      for (i = 0 ; i < M->N ; i++){
	/* printf("  %d %e \n", i, rowscal[i] ); */
	if (rowscal[i])
	  rowscal[i] = 1./rowscal[i] ;
	else {
	  Message::Warning("Scaling aborted because of zero row (%d)", i+1) ;
	  Free (rowscal) ;
	  return ;
	}
      }
      diamua_ (&M->N, &job1, a, ai, jptr, rowscal, a, ai, jptr) ;

      colscal = (double*)Malloc(M->N * sizeof(double));
      cnrms_ (&M->N, &norm, a, ai, jptr, colscal);
      for (i = 0 ; i < M->N ; i++){
	if (colscal[i]){
	  colscal[i] = 1./colscal[i] ;

	  /* printf("  %d %e %e \n", i, 1./rowscal[i], 1./colscal[i] ); */
	}
	else {
	  Message::Warning("Scaling aborted because of zero column (%d)", i+1) ;
	  Free (colscal) ;
	  return ;
	}
      }
      amudia_ (&M->N, &job1, a, ai, jptr, colscal, a, ai, jptr) ;
      break;

    default :

      Message::Error("Unknown type of matrix scaling: %d", scaling);
      break;

    }

    M->scaled = 1 ;
    M->rowscal = rowscal ;
    M->colscal = colscal ;

    break;

  case DENSE :
    Message::Warning("Scaling is not implemented for dense matrices") ;
    break;
  }

}


void scale_vector (int ROW_or_COLUMN, Matrix *M, double *V){
  double *scal = NULL;
  int i;

  if (!M->scaled) return ;

  switch (ROW_or_COLUMN) {
  case 0  : scal =  M->rowscal ; break ;
  case 1  : scal =  M->colscal ; break ;
  }

  if (scal == NULL) Message::Error("scale_vector : no scaling factors available !") ;

  for (i = 0 ; i < M->N ; i++) V[i] *= scal[i] ;
}


void prod_matrix_vector (Matrix *M, double *V , double *res ){
  /* M*V -> res  ou M est la transposee!! */
  int     k, i, j, *ai, *jptr ;
  double  *a;

  switch (M->T) {
  case SPARSE :
    /* csr_format transpose!
       donc la matrice arrivant dans cette routine doit
       bel et bien etre la transposee !!! */
    if(M->changed){
      csr_format (&M->S, M->N);
      restore_format (&M->S);
      M->changed = 0 ;
    }
    jptr = (int*) M->S.jptr->array;
    a    = (double*) M->S.a->array;
    ai   = (int*) M->S.ai->array;

    for(i=0; i<M->N; i++){
      res[i] = 0.0 ;
      for(k=jptr[i]; k<=jptr[i+1]-1; k++){
	res[i] += V[ai[k-1]-1] * a[k-1];
      }
    }

    break;
  case DENSE :
    if(M->notranspose){
      for(i=0; i<M->N; i++){
	res[i] = 0.0 ;
	for(j=0; j<M->N; j++) res[i] += M->F.a[(M->N)*i+j] * V[j];
      }
    }
    else{
      for(i=0; i<M->N; i++){
	res[i] = 0.0 ;
	for(j=0; j<M->N; j++) res[i] += M->F.a[(M->N)*j+i] * V[j];
      }
    }
    break;
  }
}


void prod_matrix_double (Matrix *M, double v){
  /* M*v -> M */
  int i;
  double *a;

  switch (M->T) {
  case SPARSE :
    a = (double*) M->S.a->array;
    for(i=0; i<List_Nbr(M->S.a); i++){
      a[i] *= v;
    }
    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] *= v;
    break;
  }

}

void multi_prod_matrix_double(int n, Matrix **Mat, double *coef, Matrix *MatRes){
  int k;

  zero_matrix(MatRes);
  for(k=0;k<n;k++){
    if(coef[k]){
      prod_matrix_double(Mat[k],coef[k]);
      add_matrix_matrix(MatRes,Mat[k]);
      prod_matrix_double(Mat[k],1.0/coef[k]);
    }
  }

}

void multi_prod_vector_double(int n, int Sizevec, double **Vec, double *coef, double *VecRes ){
  int k;

  zero_vector(Sizevec,VecRes);
  for(k=0;k<n;k++){
    if (coef[k]){
      prod_vector_double(Sizevec,Vec[k],coef[k]);
      add_vector_vector(Sizevec,VecRes,Vec[k]);
      prod_vector_double(Sizevec,Vec[k],1.0/coef[k]);
    }
  }
}

void multi_prod_matrix_vector(int n, int Sizevec, Matrix **Mat, double **Vec, double *VecRes ){
  int k;
  double *work;

  init_vector(Sizevec,&work);

  zero_vector(Sizevec,VecRes);
  for(k=0;k<n;k++){
    prod_matrix_vector(Mat[k],Vec[k],work);
    add_vector_vector(Sizevec,VecRes,work);
  }
}

void prodsc_vectorconj_vector (int Nb, double *U , double *V, double *proscar, double *proscai ){
  /* uconjugue * v -> proscar + i prodscai  */
  int i;
  *proscar = *proscai = 0.0 ;
  for (i=0; i<Nb; i+=2){
    *proscar += U[i] * V[i]   + U[i+1] * V[i+1] ;
    *proscai += U[i] * V[i+1] - U[i+1] * V[i]   ;
  }
}

/* ------------------------------------------------------------------------ */
/*  n o r m                                                                 */
/* ------------------------------------------------------------------------ */

void norm2_vector(int Nb, double *U, double *norm){
  prodsc_vector_vector(Nb,U,U,norm);
  *norm = sqrt(*norm);
}

void norminf_vector(int Nb, double *U, double *norm){
  int i;
  *norm = 0.;
  for(i=0; i<Nb; i++)
    if(fabs(U[i]) > *norm) *norm = fabs(U[i]);
}

/* ------------------------------------------------------------------------ */
/*  i d e n t i t y                                                         */
/* ------------------------------------------------------------------------ */

void identity_matrix (Matrix *M){
  int i;
  zero_matrix(M);
  for (i=1;i<=M->N;i++) add_matrix_double(M,i,i,1.0);
}


/* ------------------------------------------------------------------------ */
/*  w r i t e                                                               */
/* ------------------------------------------------------------------------ */

void binary_write_matrix (Matrix *M, const char *name, const char *ext){

  int   Nb;
  FILE *pfile;
  char  filename[256];

  if(!M->N){
    Message::Warning("No elements in matrix");
    return;
  }

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "wb") ;

  fprintf(pfile,"%d\n",M->T);

  switch (M->T) {
  case SPARSE :
    Nb = List_Nbr(M->S.a) ;

    fprintf(pfile,"%d %d\n", M->N, Nb);

    fprintf(pfile,"%d %d %d %d %d\n", M->S.ptr->nmax, M->S.ptr->size,
	    M->S.ptr->incr, M->S.ptr->n, M->S.ptr->isorder);
    fprintf(pfile,"%d %d %d %d %d\n", M->S.ai->nmax, M->S.ai->size,
	    M->S.ai->incr, M->S.ai->n, M->S.ai->isorder);
    fprintf(pfile,"%d %d %d %d %d\n", M->S.jptr->nmax, M->S.jptr->size,
	    M->S.jptr->incr, M->S.jptr->n, M->S.jptr->isorder);
    fprintf(pfile,"%d %d %d %d %d\n", M->S.a->nmax, M->S.a->size,
	    M->S.a->incr, M->S.a->n, M->S.a->isorder);

    fwrite(M->S.ptr->array, sizeof(int), Nb, pfile);
    fwrite(M->S.ai->array, sizeof(int), Nb, pfile);
    fwrite(M->S.jptr->array, sizeof(int), M->N, pfile);
    fwrite(M->S.a->array, sizeof(double), Nb, pfile);
    break;

  case DENSE :
    fprintf(pfile,"%d\n", M->N);
    fwrite(M->F.a, sizeof(double), M->N*M->N, pfile);
    break;
  }

  fclose(pfile) ;
}


void binary_write_vector (int Nb, double *V, const char *name, const char *ext){
  char filename[256];
  FILE *pfile;

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "wb") ;

  fwrite(V, sizeof(double), Nb, pfile);

  fclose(pfile) ;
}


void formatted_write_matrix (FILE *pfile, Matrix *M, int style){
  int *ptr,*ai,i,j,*jptr, *ia, *ja, *ir, nnz, ierr;
  int  un=1;
  double *a;

  if(!M->N){
    Message::Warning("No element in matrix");
    return;
  }

  switch (M->T) {

  case DENSE :
    if(M->notranspose)
      for(i=0 ; i<M->N ; i++)
	for(j=0 ; j<M->N ; j++)
	  fprintf(pfile,"%d %d %.16g\n", j+1, i+1, M->F.a[i*(M->N)+j]);
    else
      for(i=0 ; i<M->N ; i++)
	for(j=0 ; j<M->N ; j++)
	  fprintf(pfile,"%d %d %.16g\n", i+1, j+1, M->F.a[i*(M->N)+j]);
    break;

  case SPARSE :

    switch(style){

    case ELAP :
      fprintf(pfile,"%d\n",M->T);
      a = (double*)M->S.a->array;
      ai = (int*)M->S.ai->array;
      ptr = (int*)M->S.ptr->array;
      jptr = (int*)M->S.jptr->array;
      fprintf(pfile,"%d\n",M->N);
      fprintf(pfile,"%d\n",List_Nbr(M->S.a));
      for(i=0;i<M->N;i++)
	fprintf(pfile," %d",jptr[i]);
      fprintf(pfile,"\n");
      for(i=0;i<List_Nbr(M->S.a);i++)
	fprintf(pfile,"%d %d %.16g \n",ai[i],ptr[i],a[i]);
      break;

    case KUL :
      csr_format(&M->S, M->N);
      a  = (double*) M->S.a->array;
      ia = (int*) M->S.jptr->array;
      ja = (int*) M->S.ptr->array;
      nnz = List_Nbr(M->S.a);
      ir = (int*) Malloc(nnz * sizeof(int));
      csrcoo_(&M->N, &un, &nnz, a, ja, ia, &nnz, a, ir, ja, &ierr);
      for(i=0 ; i<nnz ; i++)
	fprintf(pfile,"%d  %d  %.16g\n", ir[i], ja[i], a[i]);
      restore_format(&M->S);
      break;

    default :
      Message::Error("Unknown print style for formatted matrix output");
    }
    break ;

  default :
    Message::Error("Unknown matrix format for formatted matrix output");

  }
}


void formatted_write_vector (FILE *pfile, int Nb, double *V, int style){
  int  i;

  /* for(i=0 ; i<Nb ; i++) fprintf(pfile,"%d %.16g\n", i+1, V[i]); */
  for(i=0 ; i<Nb ; i++) fprintf(pfile,"%.16g\n", V[i]);
}


/* ------------------------------------------------------------------------ */
/*  r e a d                                                                 */
/* ------------------------------------------------------------------------ */


void binary_read_matrix (Matrix *M, const char *name , const char *ext){

  int   Nb;
  FILE *pfile;
  char  filename[256];

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "rb") ;

  if (pfile == NULL) {
    Message::Error("Error opening file '%s'", filename);
  }

  fscanf(pfile,"%d",&M->T);
  M->ILU_Exists  = 0;

  switch (M->T) {
  case SPARSE :
    fscanf(pfile,"%d %d\n", &M->N, &Nb);

    M->S.ptr  = List_Create (Nb, 1, sizeof(int));
    M->S.ai   = List_Create (Nb, 1, sizeof(int));
    M->S.jptr = List_Create (M->N, 1, sizeof(int));
    M->S.a    = List_Create (Nb, 1, sizeof(double));

    fscanf(pfile,"%d %d %d %d %d\n", &M->S.ptr->nmax, &M->S.ptr->size,
	   &M->S.ptr->incr, &M->S.ptr->n, &M->S.ptr->isorder);
    fscanf(pfile,"%d %d %d %d %d\n", &M->S.ai->nmax, &M->S.ai->size,
	   &M->S.ai->incr, &M->S.ai->n, &M->S.ai->isorder);
    fscanf(pfile,"%d %d %d %d %d\n", &M->S.jptr->nmax, &M->S.jptr->size,
	   &M->S.jptr->incr, &M->S.jptr->n, &M->S.jptr->isorder);
    fscanf(pfile,"%d %d %d %d %d\n", &M->S.a->nmax, &M->S.a->size,
	   &M->S.a->incr, &M->S.a->n, &M->S.a->isorder);

    fread(M->S.ptr->array, sizeof(int), Nb, pfile);
    fread(M->S.ai->array, sizeof(int), Nb, pfile);
    fread(M->S.jptr->array, sizeof(int), M->N, pfile);
    fread(M->S.a->array, sizeof(double), Nb, pfile);
    break;

  case DENSE :
    fscanf(pfile,"%d\n", &M->N);
    M->F.LU_Exist = 0;
    M->F.a  = (double*) Malloc(M->N * M->N * sizeof(double));
    M->F.lu  = (double*) Malloc(M->N * M->N * sizeof(double));
    fread(M->F.a, sizeof(double), M->N * M->N, pfile);
    break ;
  }

  fclose(pfile) ;

}


void binary_read_vector (int Nb, double **V, const char *name, const char *ext){
  char filename[256];
  FILE *pfile;

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "rb") ;

  if (pfile == NULL) {
    Message::Error("Error opening file %s", filename);
  }

  init_vector(Nb, V);
  fread(*V, sizeof(double), Nb, pfile);

  fclose(pfile) ;
}


void formatted_read_matrix (Matrix *M, const char *name , const char *ext, int style){
  int i,nnz,inb,inb2;
  double nb;
  FILE *pfile;
  char filename[256];

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "r") ;

  if (pfile == NULL) {
    Message::Error("Error opening file  %s", filename);
  }

  fscanf(pfile,"%d",&M->T);
  switch (M->T) {
  case SPARSE :
    List_Reset(M->S.jptr);
    fscanf(pfile,"%d",&M->N);
    fscanf(pfile,"%d",&nnz);
    for(i=0;i<M->N;i++){
      fscanf(pfile," %d",&inb);
      List_Add(M->S.jptr,&inb);
    }
    for(i=0;i<nnz;i++){
      fscanf(pfile,"%d %d %lf \n",&inb,&inb2,&nb);
      List_Add(M->S.ai,&inb);
      List_Add(M->S.ptr,&inb2);
      List_Add(M->S.a,&nb);
    }

    break;

  case DENSE :
    fscanf(pfile,"%d",&M->N);
    for(i=0;i<(M->N)*(M->N);i++){
      fscanf(pfile,"%d %lf ", &inb, &M->F.a[i]);
    }
    break;
  }
  fclose(pfile) ;

}


void formatted_read_vector (int Nb, double *V, const char *name, const char *ext, int style){
  int i;
  FILE *pfile;
  char filename[256];

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "r") ;

  if (pfile == NULL) {
    Message::Error("Error opening file %s", filename);
  }

  for(i=0 ; i<Nb ; i++) fscanf(pfile, "%lf", &V[i]);

  fclose(pfile) ;
}

/* ------------------------------------------------------------------------ */
/*  p r i n t _ m a t r i x _ i n f o _ X X X                               */
/* ------------------------------------------------------------------------ */

int maximum (int a, int b) {
  if (a>b)
    return(a);
  else
    return(b);
}


void print_matrix_info_CSR (int N, int *jptr, int *ai){
  int i, j, k, l, m, n;

  l = n = 0;
  j = jptr[N]-1 ;
  for (i=0; i<N; i++) {
    k = jptr[i+1] - jptr[i];
    m = ai[jptr[i+1]-2] - ai[jptr[i]-1] + 1;
    if (l<k) l = k;
    if (n<m) n = m;
  }

  Message::Info("N: %d, NZ: %d, BW max/avg: %d/%d, SW max: %d",
      N, j, l, (int)(j/N), n);
}

void print_matrix_info_MSR (int N, sscalar *a, int *jptr){
  int i, j, k, l, m, n;

  l = n = 0;
  j = jptr[N]-2;
  for (i=0; i<N; i++) {
    k = jptr[i+1] - jptr[i] + (a[i]?1:0) ;
    if((jptr[i+1] - jptr[i]) == 0)
      m = (a[i]?1:0);
    else
      m = maximum ( jptr[jptr[i+1]-2] - jptr[jptr[i]-1] + 1,
		    maximum (jptr[jptr[i+1]-2] - (i+1) + 1, (i+1) - jptr[jptr[i]-1] + 1) );
    if (l<k) l = k;
    if (n<m) n = m;
  }

  Message::Info("N: %d, NZ: %d, BW max/avg: %d/%d, SW max: %d",
      N, j, l, (int)(j/N), n);

}

void print_matrix_info_DENSE (int N){
  Message::Info("N: %d", N);
}


/* ------------------------------------------------------------------------ */
/*  get _ column _ in _ m a t r i x                                         */
/* ------------------------------------------------------------------------ */

void get_column_in_matrix (Matrix *M, int col, double *V){

  int     k, i, j, *ai, *jptr ;
  double  *a;
  int found;

  switch (M->T) {
  case SPARSE :
    /* csr_format transpose!
       donc la matrice arrivant dans cette routine doit
       bel et bien etre la transposee !!! */
    if(M->changed){
      csr_format (&M->S, M->N);
      restore_format (&M->S);
      M->changed = 0 ;
    }
    jptr = (int*) M->S.jptr->array;
    a    = (double*) M->S.a->array;
    ai   = (int*) M->S.ai->array;

    for(i=0; i<M->N; i++){  /* lignes */
      found=0;
      for(k=jptr[i]-1;k<jptr[i+1]-1;k++){ /*colonne */
         if(ai[k]-1==col) {
	   V[i]=a[k]; found=1; break;
	 }
	 else if (ai[k]-1 > col) {
	   break;
	 }
       }
      if (!found) V[i]=0;
      /* printf(" V[%d] = %g \n",i, V[i]); */
    }
    break;
  case DENSE :
    if(M->notranspose){
	for(j=0; j<M->N; j++) V[j] = M->F.a[(M->N)*col+j];
    }
    else{
      for(i=0; i<M->N; i++){
	for(j=0; j<M->N; j++) V[j] = M->F.a[(M->N)*j+col];
      }
    }
    break;
  }
}



void get_element_in_matrix (Matrix *M, int row, int col, double *V){

  int     k, i, *ai, *jptr ;
  double  *a;
  int found;

  switch (M->T) {
  case SPARSE :
    /* csr_format transpose!
       donc la matrice arrivant dans cette routine doit
       bel et bien etre la transposee !!! */
    if(M->changed){
      csr_format (&M->S, M->N);
      restore_format (&M->S);
      M->changed = 0 ;
    }
    jptr = (int*) M->S.jptr->array;
    a    = (double*) M->S.a->array;
    ai   = (int*) M->S.ai->array;

    for(i=0; i<M->N; i++){  /* lignes */
      found=0;
      for(k=jptr[i]-1;k<jptr[i+1]-1;k++){ /*colonne */
         if(ai[k]-1==col) {
	   V[i]=a[k]; found=1; break;
	 }
	 else if (ai[k]-1 > col) {
	   break;
	 }
       }
      if (!found) V[i]=0;
      /* printf(" V[%d] = %g \n",i, V[i]); */
    }
    break;
  case DENSE :
    if(M->notranspose){
	*V = M->F.a[(M->N)*col+row];
    }
    else{
      for(i=0; i<M->N; i++){
	*V = M->F.a[(M->N)*row+col];
      }
    }
    break;
  }
}


/* ------------------------------------------------------------------------ */
/*  S o l v e r   p a r a m e t e r s                                       */
/* ------------------------------------------------------------------------ */

static char comALGORITHM[] =
"\n%s (Integer): \n\
    - 1  CG       Conjugate Gradient                    \n\
    - 2  CGNR     CG (Normal Residual equation)         \n\
    - 3  BCG      Bi-Conjugate Gradient                 \n\
    - 4  DBCG     BCG with partial pivoting             \n\
    - 5  BCGSTAB  BCG stabilized                        \n\
    - 6  TFQMR    Transpose-Free Quasi-Minimum Residual \n\
    - 7  FOM      Full Orthogonalization Method         \n\
    - 8  GMRES    Generalized Minimum RESidual          \n\
    - 9  FGMRES   Flexible version of GMRES             \n\
    - 10 DQGMRES  Direct versions of GMRES              \n\
    - 11 LU       LU Factorization                      \n\
    - 12 PGMRES   Alternative version of GMRES          \n\
    - default : %d\n";

static char comPRECONDITIONER[] =
"\n%s (Integer): \n\
    - 0  NONE     No Factorization\n\
    - 1  ILUT     Incomplete LU factorization with dual truncation strategy \n\
    - 2  ILUTP    ILUT with column  pivoting                                \n\
    - 3  ILUD     ILU with single dropping + diagonal compensation (~MILUT) \n\
    - 4  ILUDP    ILUD with column pivoting                                 \n\
    - 5  ILUK     level-k ILU                                               \n\
    - 6  ILU0     simple ILU(0) preconditioning                             \n\
    - 7  MILU0    MILU(0) preconditioning                                   \n\
    - 8  DIAGONAL                                                           \n\
    - default : %d \n";

static char comPRECONDITIONER_POSITION[] =
"\n%s (Integer): \n\
    - 0  No Preconditioner \n\
    - 1  Left Preconditioner \n\
    - 2  Right Preconditioner \n\
    - 3  Both Left and Right Preconditioner \n\
    - default : %d \n";

static char comRENUMBERING_TECHNIQUE[] =
"\n%s (Integer): \n\
    - 0  No renumbering \n\
    - 1  Reverse Cuthill-Mc Kee \n\
    - default : %d \n";

static char comNB_ITER_MAX[] =
"\n%s (Integer): Maximum number of iterations \n\
    - default : %d \n";

static char comMATRIX_FORMAT[] =
"\n%s (Integer): \n\
    - 1  Sparse \n\
    - 2  Full \n\
    - default : %d\n";

static char comMATRIX_PRINTING[] =
"\n%s (Integer): Disk write ('fort.*') \n\
    - 1  matrix (csr) \n\
    - 2  preconditioner (msr) \n\
    - 3  both \n\
    - default : %d\n";

static char comMATRIX_STORAGE[] =
"\n%s (Integer): Disk Write or Read in internal format \n\
    - 0  none \n\
    - 1  write matrix (sparse) \n\
    - 2  read matrix (sparse) \n\
    - default : %d\n";

static char comNB_FILL[] =
"\n%s (Integer): \n\
    - ILUT/ILUTP : maximum number of elements per line \n\
      of L and U (except diagonal element) \n\
    - ILUK : each element whose fill-in level is greater than NB_FILL \n\
      is dropped. \n\
    - default : %d\n";

static char comKRYLOV_SIZE[] =
"\n%s (Integer): Krylov subspace size \n\
    - default : %d\n";

static char comSTOPPING_TEST[] =
"\n%s (Real): Target relative residual \n\
    - default : %g \n";

static char comIC_ACCELERATION[] =
"\n%s (Real): IC accelerator\n\
    - default : %g \n";

static char comITERATIVE_IMPROVEMENT[] =
"\n%s (Integer): Iterative improvement of the solution obtained by a LU \n\
    - default : %d\n";

static char comDROPPING_TOLERANCE[] =
"\n%s (Real): \n\
    - ILUT/ILUTP/ILUK: a(i,j) is dropped if \n\
      abs(a(i,j)) < DROPPING_TOLERANCE * abs(diagonal element in U). \n\
    - ILUD/ILUDP : a(i,j) is dropped if \n\
      abs(a(i,j)) < DROPPING_TOLERANCE * [weighted norm of line i]. \n\
      Weighted norm = 1-norm / number of nonzero elements on the line. \n\
    - default : %g\n";

static char comPERMUTATION_TOLERANCE[] =
"\n%s (Real): Tolerance for column permutation in ILUTP/ILUDP. \n\
    At stage i, columns i and j are permuted if \n\
    abs(a(i,j))*PERMUTATION_TOLERANCE > abs(a(i,i)). \n\
    - 0  no permutations \n\
    - 0.001 -> 0.1  classical \n\
    - default : %g\n";

static char comRE_USE_LU[] =
"\n%s (Integer): Reuse LU decomposition\n\
    - 0  no \n\
    - 1  yes \n\
    - default : %d\n";

static char comRE_USE_ILU[] =
"\n%s (Integer): Reuse ILU decomposition (and renumbering if any)\n\
    - 0  no \n\
    - 1  yes \n\
    - default : %d\n";

static char comDIAGONAL_COMPENSATION[] =
"\n%s (Real): ILUD/ILUDP: the term 'DIAGONAL_COMPENSATION * (sum \n\
    of all dropped elements of the line)' is added to the diagonal element in U \n\
    - 0  ~ ILU with threshold \n\
      1  ~ MILU with threshold. \n\
    - default : %g\n";

static char comSCALING[] =
"\n%s (Integer): Scale system \n\
    - 0  no \n\
    - 1  on basis of diagonal elements  (no loss of possible symmetry) \n\
    - 2  on basis of inf. norm  of first rows and then columns  (asymmetric) \n\
    - 3  on basis of norm 1     of first rows and then columns  (asymmetric) \n\
    - 4  on basis of norm 2     of first rows and then columns  (asymmetric) \n\
    - default : %d\n";

/* ------------------------------------------------------------------------ */
/*  A c t i o n s                                                           */
/* ------------------------------------------------------------------------ */

#define act_ARGS     Solver_Params *p, int i, double d

void actALGORITHM               (act_ARGS){ p->Algorithm = i; }
void actPRECONDITIONER          (act_ARGS){ p->Preconditioner = i; }
void actPRECONDITIONER_POSITION (act_ARGS){ p->Preconditioner_Position = i; }
void actRENUMBERING_TECHNIQUE   (act_ARGS){ p->Renumbering_Technique = i; }
void actNB_ITER_MAX             (act_ARGS){ p->Nb_Iter_Max = i; }
void actMATRIX_FORMAT           (act_ARGS){ p->Matrix_Format = i; }
void actMATRIX_PRINTING         (act_ARGS){ p->Matrix_Printing = i; }
void actMATRIX_STORAGE          (act_ARGS){ p->Matrix_Storage = i; }
void actNB_FILL                 (act_ARGS){ p->Nb_Fill = i; }
void actKRYLOV_SIZE             (act_ARGS){ p->Krylov_Size = i; }
void actSTOPPING_TEST           (act_ARGS){ p->Stopping_Test = d; }
void actIC_ACCELERATION         (act_ARGS){ p->IC_Acceleration = d; }
void actITERATIVE_IMPROVEMENT   (act_ARGS){ p->Iterative_Improvement = i; }
void actRE_USE_LU               (act_ARGS){ p->Re_Use_LU = i; }
void actDROPPING_TOLERANCE      (act_ARGS){ p->Dropping_Tolerance = d; }
void actPERMUTATION_TOLERANCE   (act_ARGS){ p->Permutation_Tolerance = d; }
void actRE_USE_ILU              (act_ARGS){ p->Re_Use_ILU = i; }
void actDIAGONAL_COMPENSATION   (act_ARGS){ p->Diagonal_Compensation = d; }
void actSCALING                 (act_ARGS){ p->Scaling = i; }



/* ------------------------------------------------------------------------ */
/*  P a r a m e t e r s   w i t h   d e f a u l t   v a l u e s             */
/* ------------------------------------------------------------------------ */

#define REEL    1
#define ENTIER  2

typedef struct {
  const char *str;
  int typeinfo;
  int defaultint;
  double defaultfloat;
  const char *com;
  void (*action) (Solver_Params *p , int i , double d);
}InfoSolver;

int compInfoSolver(const void *a, const void *b){
  return(strcmp(((InfoSolver*)a)->str, ((InfoSolver*)b)->str));
}

static InfoSolver Tab_Params[] =
{
  {"Matrix_Format",           ENTIER, 1,     0.,    comMATRIX_FORMAT,           actMATRIX_FORMAT},
  {"Matrix_Printing",         ENTIER, 0,     0.,    comMATRIX_PRINTING,         actMATRIX_PRINTING},
  {"Matrix_Storage",          ENTIER, 0,     0.,    comMATRIX_STORAGE,          actMATRIX_STORAGE},
  {"Scaling",                 ENTIER, 0,     0.,    comSCALING,                 actSCALING},
  {"Renumbering_Technique",   ENTIER, 1,     0.,    comRENUMBERING_TECHNIQUE,   actRENUMBERING_TECHNIQUE},
  {"Preconditioner",          ENTIER, 2,     0.,    comPRECONDITIONER,          actPRECONDITIONER},
  {"Preconditioner_Position", ENTIER, 2,     0.,    comPRECONDITIONER_POSITION, actPRECONDITIONER_POSITION},
  {"Nb_Fill",                 ENTIER, 20,    0.,    comNB_FILL,                 actNB_FILL},
  {"Permutation_Tolerance",   REEL,   0,     5.e-2, comPERMUTATION_TOLERANCE,   actPERMUTATION_TOLERANCE},
  {"Dropping_Tolerance",      REEL,   0,     0.,    comDROPPING_TOLERANCE,      actDROPPING_TOLERANCE},
  {"Diagonal_Compensation",   REEL,   0,     0.,    comDIAGONAL_COMPENSATION,   actDIAGONAL_COMPENSATION},
  {"Re_Use_ILU",              ENTIER, 0,     0.,    comRE_USE_ILU,              actRE_USE_ILU},
  {"Algorithm",               ENTIER, 8,     0.,    comALGORITHM,               actALGORITHM},
  {"Krylov_Size",             ENTIER, 40,    0.,    comKRYLOV_SIZE,             actKRYLOV_SIZE},
  {"IC_Acceleration",         REEL,   0,     1.,    comIC_ACCELERATION,         actIC_ACCELERATION},
  {"Re_Use_LU",               ENTIER, 0,     0.,    comRE_USE_LU,               actRE_USE_LU},
  {"Iterative_Improvement",   ENTIER, 0,     0.,    comITERATIVE_IMPROVEMENT,   actITERATIVE_IMPROVEMENT},
  {"Nb_Iter_Max",             ENTIER, 1000,  0.,    comNB_ITER_MAX,             actNB_ITER_MAX},
  {"Stopping_Test",           REEL,   0,     1.e-10,comSTOPPING_TEST,           actSTOPPING_TEST}
};


/* ------------------------------------------------------------------------ */
/*  i n i t _ s o l v e r                                                   */
/* ------------------------------------------------------------------------ */

#define NbInfosSolver (int)(sizeof(Tab_Params)/sizeof(Tab_Params[0]))

void Commentaires (FILE *out){
  int i;
  InfoSolver *pI;

  for(i=0;i<NbInfosSolver;i++){
    pI = &Tab_Params[i];
    switch(pI->typeinfo){
    case REEL :
      fprintf(out,pI->com,pI->str,pI->defaultfloat);
      break;
    case ENTIER :
      fprintf(out,pI->com,pI->str,pI->defaultint);
      break;
    }
  }
  fprintf(out,"\n");
}

void init_solver (Solver_Params *p , const char *name){
  char buff[128];
  FILE *file;
  InfoSolver *pI,I;
  int i;
  double ff;
  int    ii;

  for(i=0;i<NbInfosSolver;i++){
    pI = &Tab_Params[i];
    (pI->action)(p,pI->defaultint,pI->defaultfloat);
  }

  if(!(file = fopen(name,"r"))){
    file = fopen(name,"w");
    if(!file){
      Message::Warning("Could not open solver parameter file");
      return;
    }
    fprintf(file,"/*\n");
    Commentaires(file);
    fprintf(file,"*/\n\n");
    Message::Info("Parameter file not found");
    Message::Info("Enter parameter values:");
    for(i=0;i<NbInfosSolver;i++){
      pI = &Tab_Params[i];
      switch(pI->typeinfo){
      case REEL :
      getfloat :
	if(Message::UseSocket() || Message::UseOnelab())
	  strcpy(buff, "\n");
	else{
	  printf("%25s (Real)    [<h>=help, <return>=%g]: ",pI->str,pI->defaultfloat);
	  fgets(buff, 128, stdin);
	}
	if(!strcmp(buff,"h\n")){
	  printf(pI->com,pI->str,pI->defaultfloat);
	  printf("\n");
	  goto getfloat;
	}
	if(!strcmp(buff,"\n")){
	  fprintf(file,"%25s %12g\n",pI->str,pI->defaultfloat);
	  (pI->action)(p,pI->defaultint,pI->defaultfloat);
	}
	else{
	  fprintf(file,"%25s %12g\n",pI->str,atof(buff));
	  (pI->action)(p,pI->defaultint,atof(buff));
	}
	break;
      case ENTIER :
      getint :
	if(Message::UseSocket() || Message::UseOnelab()){
	  strcpy(buff, "\n");
        }
	else{
	  printf("%25s (Integer) [<h>=help, <return>=%d]: ",pI->str,pI->defaultint);
	  fgets(buff, 128, stdin);
	}
	if(!strcmp(buff,"h\n")){
	  printf(pI->com,pI->str,pI->defaultint);
	  printf("\n");
	  goto getint;
	}
	if(!strcmp(buff,"\n")){
	  fprintf(file,"%25s %12d\n",pI->str,pI->defaultint);
	  (pI->action)(p,pI->defaultint,pI->defaultfloat);
	}
	else{
	  fprintf(file,"%25s %12d\n",pI->str,atoi(buff));
	  (pI->action)(p,atoi(buff),pI->defaultfloat);
	}
	break;
      }
    }
  }
  else {
    qsort(Tab_Params, NbInfosSolver, sizeof(InfoSolver), compInfoSolver);
    rewind(file);
    while (!feof(file)){
      fscanf(file,"%s",buff);
      I.str = buff;
      if(!(pI = (InfoSolver*)bsearch(&I,Tab_Params, NbInfosSolver,
				     sizeof(InfoSolver),compInfoSolver))){
	if(buff[0] == '/' && buff[1] == '*'){
	  while(1){
	    if(feof(file)){
	      Message::Warning("End of comment not detected");
              fclose(file);
	      return;
	    }
	    if((getc(file)=='*')&&(getc(file)=='/')){
	      break;
	    }
	  }
	}
	else{
	  Message::Warning("Unknown solver parameter '%s'", buff);
	  fscanf(file,"%s",buff);
	}
      }
      else{
	switch(pI->typeinfo){
	case REEL :
	  fscanf(file,"%lf",&ff);
	  (pI->action)(p,ii,ff);
	  break;
	case ENTIER :
	  fscanf(file,"%d",&ii);
	  (pI->action)(p,ii,ff);
	  break;
	}
      }
    }
  }
  fclose(file);
}


void init_solver_option (Solver_Params *p , const char *name, const char *value){
  InfoSolver *pI;
  int i, vali;
  float valf;

  for(i=0;i<NbInfosSolver;i++){
    pI = &Tab_Params[i];

    if(!strcmp(pI->str, name)){
      switch(pI->typeinfo){
      case REEL   :
	valf = atof(value);
	(pI->action)(p,pI->defaultint,valf);
	Message::Info("Overriding parameter '%s': %g", pI->str, valf);
	break;
      case ENTIER :
	vali = atoi(value);
	(pI->action)(p,vali,pI->defaultfloat);
	Message::Info("Overriding parameter '%s': %d", pI->str, vali);
	break;
      }
      return;
    }
  }

  Message::Error("Unknown solver parameter '%s'", name);
}


/* ------------------------------------------------------------------------ */
/*  dynamic CSR format                                                      */
/* ------------------------------------------------------------------------ */

static int cmpij(int ai,int aj,int bi,int bj){
  if(ai<bi)return -1;
  if(ai>bi)return 1;
  if(aj<bj)return -1;
  if(aj>bj)return 1;
  return 0;
}

static int *alloc_ivec(long nl, long nh){
  int *v;

  v=(int *)Malloc((size_t) ((nh-nl+1+1)*sizeof(int)));
  return v-nl+1;
}

static void free_ivec(int *v, long nl, long nh){
  Free(v+nl-1);
}

#define SWAP(a,b)  temp=(a);(a)=(b);(b)=temp;
#define SWAPI(a,b) tempi=(a);(a)=(b);(b)=tempi;
#define M          7
#define NSTACK     50
#define M1        -1

static void sort2(unsigned long n, double arr[], int ai[] , int aj []){
  unsigned long i,ir=n,j,k,l=1;
  int *istack,jstack=0,tempi;
  double a,temp;
  int    b,c;

  istack=alloc_ivec(1,NSTACK);
  for (;;) {
    if (ir-l < M) {
      for (j=l+1;j<=ir;j++) {
	a=arr[j M1];
	b=ai[j M1];
	c=aj[j M1];
	for (i=j-1;i>=1;i--) {
	  if (cmpij(ai[i M1],aj[i M1],b,c) <= 0) break;
	  arr[i+1 M1]=arr[i M1];
	  ai[i+1 M1]=ai[i M1];
	  aj[i+1 M1]=aj[i M1];
	}
	arr[i+1 M1]=a;
	ai[i+1 M1]=b;
	aj[i+1 M1]=c;
      }
      if (!jstack) {
	free_ivec(istack,1,NSTACK);
	return;
      }
      ir=istack[jstack];
      l=istack[jstack-1];
      jstack -= 2;
    }
    else {
      k=(l+ir) >> 1;
      SWAP(arr[k M1],arr[l+1 M1])
      SWAPI(ai[k M1],ai[l+1 M1])
      SWAPI(aj[k M1],aj[l+1 M1])
      if (cmpij(ai[l+1 M1],aj[l+1 M1],ai[ir M1],aj[ir M1])>0){
	SWAP(arr[l+1 M1],arr[ir M1])
	SWAPI(ai[l+1 M1],ai[ir M1])
	SWAPI(aj[l+1 M1],aj[ir M1])
      }
      if (cmpij(ai[l M1],aj[l M1],ai[ir M1],aj[ir M1])>0){
	SWAP(arr[l M1],arr[ir M1])
	SWAPI(ai[l M1],ai[ir M1])
	SWAPI(aj[l M1],aj[ir M1])
      }
      if (cmpij(ai[l+1 M1],aj[l+1 M1],ai[l M1],aj[l M1])>0){
	SWAP(arr[l+1 M1],arr[l M1])
	SWAPI(ai[l+1 M1],ai[l M1])
	SWAPI(aj[l+1 M1],aj[l M1])
      }
      i=l+1;
      j=ir;
      a=arr[l M1];
      b=ai[l M1];
      c=aj[l M1];
      for (;;) {
	do i++; while (cmpij(ai[i M1],aj[i M1],b,c) < 0);
	do j--; while (cmpij(ai[j M1],aj[j M1],b,c) > 0);
	if (j < i) break;
	SWAP(arr[i M1],arr[j M1])
	SWAPI(ai[i M1],ai[j M1])
	SWAPI(aj[i M1],aj[j M1])
	}
      arr[l M1]=arr[j M1];
      arr[j M1]=a;
      ai[l M1]=ai[j M1];
      ai[j M1]=b;
      aj[l M1]=aj[j M1];
      aj[j M1]=c;
      jstack += 2;
      if (jstack > NSTACK) {
	Message::Error("NSTACK too small in sort2");
      }
      if (ir-i+1 >= j-l) {
	istack[jstack]=ir;
	istack[jstack-1]=i;
	ir=j-1;
      }
      else {
	istack[jstack]=j-1;
	istack[jstack-1]=l;
	l=i;
      }
    }
  }
}

#undef M
#undef NSTACK
#undef SWAP
#undef SWAPI
#undef M1

static void deblign ( int nz , int *ptr , int *jptr , int *ai){
  int i,ilign;

  ilign = 1;

  jptr[0] = 1;
  for(i=1; i<nz; i++) {
    if (ai[i-1] < ai[i]) {
      jptr[ilign++]=i+1;
      ai[i-1] = 0;
    }
    else{
      ai[i-1] = i+1;
    }
  }
  ai[nz-1] = 0;
}

void csr_format (Sparse_Matrix *MM, int N){
  int    i,*ptr,*jptr,*ai,n,iptr,iptr2;
  double *a;

  if(!N) return;

  ptr  = (int*)MM->ptr->array;
  jptr = (int*)MM->jptr->array;
  ai   = (int*)MM->ai->array;
  a    = (double*)MM->a->array;
  n    = N;
  for(i=0;i<n;i++){
    iptr = jptr[i];
    while(iptr){
      iptr2 = iptr - 1;
      iptr = ptr[iptr2];
      ptr[iptr2] = i+1;
    }
  }
  sort2(List_Nbr(MM->a),a,ai,ptr);
  deblign(List_Nbr(MM->a),ptr,jptr,ai);
  jptr[N]=List_Nbr(MM->a)+1;
}


void restore_format (Sparse_Matrix *MM){
  char *temp;

  temp  = MM->ptr->array;
  MM->ptr->array = MM->ai->array;
  MM->ai->array = temp;
}
