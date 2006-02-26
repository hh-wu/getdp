#define RCSID "$Id: Solver.c,v 1.28 2006-02-26 00:43:00 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
 *   Jean-Francois Remacle
 *   Benoit Meys
 *   Johan Gyselinck
 *   Ruth Sabariego
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Solver.h"
#include "Solver_F.h"
#include "Message.h"
#include "Malloc.h"
#include "F_FMMOperations.h"


/* ------------------------------------------------------------------------ */
/*  S o l v e _ m a t r i x                                                 */
/* ------------------------------------------------------------------------ */


extern int Flag_FMM ;
extern int Flag_DTA ;

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
    Msg(WARNING, "No equations in linear system");
    return;
  }
  
  for(i=0 ; i<M->N ; i++){
    if(b[i] != 0.) break;
    if(i == M->N-1) {
      Msg(WARNING, "Null right hand side in linear system");
      /*
	for(i=0 ; i<M->N ; i++)  x[i] = 0. ;    
	return ;
      */
    }
  }

  if(M->T == DENSE){

    if(p->Algorithm == LU){

      Msg(SPARSKIT, "Dense LU decomposition\n");
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

    Msg(SPARSKIT, "Dense to sparse matrix conversion\n") ;

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
    Msg (INFO, "Number of nonzeros %d/%d (%.4f)",TrueNnz, nnz, (double)TrueNnz/(double)nnz);

    Msg(RESOURCES, "");

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
    Msg(SPARSKIT, "Scaling system of equations\n") ;
    scale_matrix (p->Scaling, M) ;
    scale_vector (ROW, M, b) ;    
  }
  else{
    Msg(SPARSKIT, "No scaling of system of equations\n") ;
  }

  for (i=1; i<M->N; i++) {
    if(ia[i]-ia[i-1] <= 0)
      Msg(GERROR, "Zero row in matrix");
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
      Msg(SPARSKIT, "No renumbering\n");
      break;	
    case RCMK: 
      Msg(SPARSKIT, "RCMK algebraic renumbering\n");	
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
      Msg(GERROR, "Unknown renumbering technique");
      break;
    }
    print_matrix_info_CSR(M->N, ia, ja);
    Msg(RESOURCES, "");
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
    Msg(SPARSKIT, "Matrix printing\n");
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
      
    case ILUT  : Msg(SPARSKIT, "ILUT (%s, fill-in = %d)\n", ILUSTORAGE, p->Nb_Fill);
      nnz_ilu = 2 * (M->N+1) * (p->Nb_Fill+1); break;
      
    case ILUTP : Msg(SPARSKIT, "ILUTP (%s, fill-in = %d)\n", ILUSTORAGE, p->Nb_Fill);
      nnz_ilu = 2 * (M->N+1) * (p->Nb_Fill+1); break;
      
    case ILUD  : Msg(SPARSKIT, "ILUD (%s)\n", ILUSTORAGE);    
      /* first guess */
      nnz_ilu = List_Nbr(M->S.a); break;
      
    case ILUDP : Msg(SPARSKIT, "ILUDP (%s)\n", ILUSTORAGE);
      /* first guess */
      nnz_ilu = List_Nbr(M->S.a); break ;
      
    case ILUK  : Msg(SPARSKIT, "ILU%d (%s)\n", p->Nb_Fill, ILUSTORAGE);    
      /* exact for nbfill=0, first guess otherwise */
      nnz_ilu = (p->Nb_Fill+1) * List_Nbr(M->S.a) + (M->N+1);
      break;
      
    case ILU0  : Msg(SPARSKIT, "ILU0 (%s)\n", ILUSTORAGE);    
      nnz_ilu = List_Nbr(M->S.a) + (M->N+1); break;
      
    case MILU0 : Msg(SPARSKIT, "MILU0 (%s)\n", ILUSTORAGE);    
      nnz_ilu = List_Nbr(M->S.a) + (M->N+1); break;
      
    case DIAGONAL : 
      Msg(SPARSKIT, "Diagonal scaling (%s)\n", ILUSTORAGE);
      M->S.alu = (scalar*) Malloc((M->N+1) * sizeof(scalar));
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
      Msg(SPARSKIT, "No ILU\n");
      end = 1;
      ierr = 0;
      break ;

    default :
      Msg(GERROR, "Unknown ILU method");
      break;
    }
    
    if(!end){
      M->S.alu = (scalar*) Malloc(nnz_ilu * sizeof(scalar));
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
      Msg(GERROR, "Input matrix may be wrong");
      break;
    case -2 : /* Matrix L in ILU overflows work array 'al' */
    case -3 : /* Matrix U in ILU overflows work array 'alu' */
      nnz_ilu += nnz_ilu/2 ;
      Msg(INFO, "Reallocating ILU (NZ: %d)", nnz_ilu);
      Free(M->S.alu) ;
      M->S.alu = (scalar*) Malloc(nnz_ilu * sizeof(scalar));
      Free(M->S.jlu) ;
      M->S.jlu = (int*) Malloc(nnz_ilu * sizeof(int));
      goto reallocate ;
    case -4 :
      Msg(GERROR, "Illegal value of nb_fill in ILU");
      break;
    case -5 :
      Msg(GERROR, "Zero row encountered in ILU");
      break;
    default :
      Msg(GERROR, "Zero pivot on line %d in ILU",ierr);
      break;
    }
    
    if(p->Preconditioner != NONE)
      print_matrix_info_MSR(M->N, M->S.alu, M->S.jlu);
    
    if(p->Matrix_Printing == 2 || p->Matrix_Printing == 3){
      Msg(SPARSKIT, "ILU printing\n");
      psplot_(&M->N, M->S.jlu, M->S.jlu, &trente_et_un, &deux);      
    }      
  
    Msg(RESOURCES, "");
  
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
  case CG      : Msg(SPARSKIT, "Conjugate Gradient (CG)\n"); 
                 ipar[4] = 5 * M->N; break;
  case CGNR    : Msg(SPARSKIT, "CG Normal Residual equation (CGNR)\n");
                 ipar[4] = 5 * M->N; break;
  case BCG     : Msg(SPARSKIT, "Bi-Conjugate Gradient (BCG)\n"); 
                 ipar[4] = 7 * M->N; break;
  case DBCG    : Msg(SPARSKIT, "BCG with partial pivoting (DBCG)\n"); 
                 ipar[4] = 11 * M->N; break;
  case BCGSTAB : Msg(SPARSKIT, "BCG stabilized (BCGSTAB)\n");
                 ipar[4] = 8 * M->N; break;
  case TFQMR   : Msg(SPARSKIT, "Transpose-Free Quasi-Minimum Residual (TFQMR)\n"); 
                 ipar[4] = 11 * M->N; break;
  case FOM     : Msg(SPARSKIT, "Full Orthogonalization Method (FOM)\n"); 
                 ipar[4] = (M->N+3) * (ipar[5]+2) + (ipar[5]+1) * ipar[5]/2; break;
  case GMRES   : Msg(SPARSKIT, "Generalized Minimum RESidual (GMRES)\n");  
                 ipar[4] = (M->N+3) * (ipar[5]+2) + (ipar[5]+1) * ipar[5]/2; break;
  case FGMRES  : Msg(SPARSKIT, "Flexible version of Generalized Minimum RESidual (FGMRES)\n"); 
                 ipar[4] = 2*M->N * (ipar[5]+1) + (ipar[5]+1)*ipar[5]/2 + 3*ipar[5] + 2; break;
  case DQGMRES : Msg(SPARSKIT, "Direct version of Quasi Generalize Minimum RESidual (DQGMRES)\n"); 
                 ipar[4] = M->N + (ipar[5]+1) * (2*M->N+4); break;
  case PGMRES  : Msg(SPARSKIT, "Alternative Generalized Minimum RESidual (GMRES)\n");
                 ipar[4] = (M->N+4) * (ipar[5]+2) + (ipar[5]+1) * ipar[5]/2; break;
  default      : Msg(GERROR, "Unknown algorithm for sparse matrix solver"); break;
  }
  
  w = (double*) Malloc(ipar[4] * sizeof(double));

  its = 0;
  end = 0;
  res = 0.0;


  if( Flag_FMM && p->Scaling != NONE ){
    Msg(SPARSKIT, "FMM Scaling\n") ;    
    FMM_Scaling(M->rowscal, M->colscal);
  }

  if( Flag_FMM && p->Renumbering_Technique == RCMK ){
    Msg(SPARSKIT, "FMM DTAx with Renumbering\n") ; 
    FMM_Renumbering( M->N, M->S.permr, M->S.permp ) ;
  }


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
	if(its) Msg(ITER, " %4d  %.7e  %.7e\n", its, res, res/res1);
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
	Msg(WARNING, "Iterative solver has iterated too many times"); end = 1; break;
      case -2 : 
	Msg(WARNING, "Iterative solver was not given enough work space");
	Msg(WARNING, "The work space should at least have %d elements", ipar[4]);
	end = 1; break;
      case -3 : 
	Msg(WARNING, "Iterative solver is facing a break-down"); end = 1; break;
      default : 
	Msg(WARNING, "Iterative solver terminated (code = %d)", ipar[1]); end = 1; break;
      }
      
      if (Flag_FMM && !Flag_DTA){ 
	FMM_MatVectorProd(&w[ipar[8]-1], &w[ipar[9]-1]) ;
      }
      
    }    
    if(end) break;
    
  }

  
  /* Convergence results monitoring */
  
  Msg(ITER, " %4d  %.7e  %.7e\n", ipar[7], fpar[6], fpar[6]/res1);
  
  amux_(&M->N, sol, w, a, ja, ia);
  
 
  for(i=0 ; i<M->N ; i++){
    w[M->N+i] = sol[i] - 1.0 ;
    w[i] -= rhs[i] ;
  }      
  
 
  Msg(SPARSKIT, "%d Iterations / Residual: %g\n", ipar[7], dnrm2_(&M->N,w,&un));
  /*
  Msg(ITER, "Conv. Rate: %g, |Res|: %g, |Err|: %g\n", 
      fpar[7], dnrm2_(&M->N,w,&un), dnrm2_(&M->N,&w[M->N],&un));
  */
  Free(w);

  /* Inverse renumbering */
  
  for (i=0;i<M->N;i++) {
    j = M->S.permr[i] - 1;
    k = M->S.permp[j+M->N] - 1;        
    x[i] = sol[k];
  }

  
  if( Flag_FMM && p->Renumbering_Technique == RCMK ){
    Msg(SPARSKIT, "FMM InverseRenumbering\n") ; 
    FMM_InverseRenumbering(M->S.rpermr) ;
    Flag_FMM = 3;
  } 

  if( Flag_FMM && p->Scaling != NONE ){  
    Msg(SPARSKIT, "FMM UnScaling\n") ; 
    FMM_UnScaling(M->rowscal, M->colscal);
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
/*  U t i l s                                                               */
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



