#define RCSID "$Id: FMM_Operations.c,v 1.12 2005-07-12 08:14:30 geuzaine Exp $"
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
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Numeric.h"
#include "Data_Passive.h"
#include "Data_DefineE.h"
#include "CurrentData.h"
#include "Cal_Value.h"
#include "Data_FMM.h"

/* ------------------------------------------------------------------------- */
/*  FMM matrix vector product                                                */
/* ------------------------------------------------------------------------- */

void FMM_MatVectorProd(double *x, double *y){ 

  int  NbrFMMEqu, iFMMEqu ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;

  GetDP_Begin("FMM_MatVectorProd");

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;    
    ((void (*)(struct FMMmat*,double*,double*))FMMmat_P->FctProd)(FMMmat_P, x, y) ;
  }

  GetDP_End;
}



void FMM_NoRenumbering( ){

  int  NbrFMMEqu, iFMMEqu, iG, NbrGroupSrc, NbrGroupObs ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  int  iDof, NbrDof, NumDof, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, *NumEqu_A ;
  int  NbrHar, NumDofi, NumEqui, Flag_Iter = 0 ;

  List_T *NumDof_L, *NumEqu_L ;
  List_T *NumDofi_L, *NumEqui_L ;


  GetDP_Begin("FMM_NoRenumbering");
  
  NbrHar = Current.NbrHar;
 
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;

    if(FMMmat_P->NumDofr == NULL) 
      FMMmat_P->NumDofr = FMMmat_P->NumDof ;
    
    if(FMMmat_P->NumEqur == NULL) 
      FMMmat_P->NumEqur = FMMmat_P->NumEqu ;

    if(NbrHar == 2){
      NbrGroupSrc = List_Nbr( FMMmat_P->NumDof );

      if(FMMmat_P->NumDofi == NULL) 
	FMMmat_P->NumDofi = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;
      else Flag_Iter = 1 ;
      
      if(!Flag_Iter){
	for (iG = 0 ; iG < NbrGroupSrc ; iG++){
	  List_Read(FMMmat_P->NumDof, iG, &NumDof_L ) ;
	  NbrDof = List_Nbr( NumDof_L);   
	  NumDof_A = (int*)(NumDof_L->array) ;
	  
	  NumDofi_L = List_Create(NbrDof, 1, sizeof(int)) ;
	  
	  for (iDof = 0 ; iDof < NbrDof ; iDof++){
	    NumDof  = NumDof_A[iDof] ;
	    NumDofi =  NumDof+1 ;/* Imaginary part */	  
	    List_Add(NumDofi_L, &NumDofi) ;
	  }
	
	  List_Add(FMMmat_P->NumDofi, &NumDofi_L ) ;
	}

	if(FMMmat_P->NumEqu !=  FMMmat_P->NumDof){
	  NbrGroupObs = List_Nbr( FMMmat_P->NumEqu );
	  FMMmat_P->NumEqui = List_Create(NbrGroupObs, 1, sizeof(List_T*)) ;
      
	  for (iG = 0 ; iG < NbrGroupObs ; iG++){
	    List_Read(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;
	    NbrEqu = List_Nbr( NumEqu_L);   
	    NumEqu_A = (int*)(NumEqu_L->array) ;

	    NumEqui_L = List_Create(NbrEqu,  1, sizeof(int)) ;

	    for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	      NumEqu = NumEqu_A[iEqu] ;
	      NumEqui = NumEqu+1 ;/* Imaginary part */ 
	    
	      List_Add(NumEqui_L, &NumEqui) ;
	    }
	    List_Add(FMMmat_P->NumEqui, &NumEqui_L ) ;
	  }
	}
	else
	  FMMmat_P->NumEqui = FMMmat_P->NumDofi ;

      }/* Flag_iter */
    }/* NbrHar */
  }/* iFMMEqu */

 GetDP_End;

}


void FMM_Renumbering( int N, int *permr, int *permp){

  int  NbrFMMEqu, iFMMEqu, iG, NbrGroupSrc, NbrGroupObs ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  int  iDof, NbrDof, NumDof, NumDofr, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, NumEqur, *NumEqu_A ;
  int  NbrHar, NumDofri, NumEquri, Flag_Renum = 0 ;

  List_T *NumDof_L, *NumDofr_L, *NumEqu_L , *NumEqur_L;
  List_T *NumDofi_L, *NumEqui_L ;


  GetDP_Begin("FMM_Renumbering");
  
  NbrHar = Current.NbrHar;
 

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;
    NbrGroupSrc = List_Nbr( FMMmat_P->NumDof );

    if( FMMmat_P->NumDofr == NULL ) 
      FMMmat_P->NumDofr = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;
    else Flag_Renum = 1 ;

    if(NbrHar == 2  &&  FMMmat_P->NumDofi == NULL) 
      FMMmat_P->NumDofi = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;

    for (iG = 0 ; iG < NbrGroupSrc ; iG++){
      List_Read(FMMmat_P->NumDof, iG, &NumDof_L ) ;
      NbrDof = List_Nbr( NumDof_L);   
      NumDof_A = (int*)(NumDof_L->array) ;
     
      if(!Flag_Renum)
	NumDofr_L = List_Create(NbrDof,  1, sizeof(int)) ;
      else
	List_Read(FMMmat_P->NumDofr, iG, &NumDofr_L ) ;
      

      if(NbrHar == 2){
	if(!Flag_Renum)
	  NumDofi_L = List_Create(NbrDof, 1, sizeof(int)) ;
        else
	  List_Read(FMMmat_P->NumDofi, iG, &NumDofi_L ) ;
      }

      for (iDof = 0 ; iDof < NbrDof ; iDof++){
	NumDof  = NumDof_A[iDof] - 1 ;
	NumDofr = permp[(permr[NumDof]-1) + N] ;
	
	if(!Flag_Renum)
	  List_Add(NumDofr_L, &NumDofr) ;
	else
	  List_Write(NumDofr_L, iDof, &NumDofr) ;

	if(NbrHar == 2){
	  NumDof++ ; /* Imaginary part */
	  NumDofri = permp[(permr[NumDof]-1) + N] ;
	  if(!Flag_Renum)
	    List_Add(NumDofi_L, &NumDofri) ;
	  else 
	    List_Write(NumDofi_L, iDof, &NumDofri) ;
	}
      }

      if(!Flag_Renum)
	List_Add(FMMmat_P->NumDofr, &NumDofr_L ) ;
      else 
	List_Write(FMMmat_P->NumDofr, iG, &NumDofr_L ) ;

      if(NbrHar == 2){
	if(!Flag_Renum)
	  List_Add(FMMmat_P->NumDofi, &NumDofi_L ) ;
	else 
	  List_Write(FMMmat_P->NumDofi, iG, &NumDofi_L ) ;
      }
    }

    Flag_Renum = 0 ;

    if(FMMmat_P->NumEqu !=  FMMmat_P->NumDof){
      NbrGroupObs = List_Nbr( FMMmat_P->NumEqu );
 
      if( FMMmat_P->NumEqur == NULL ) 
	FMMmat_P->NumEqur = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;
      else Flag_Renum = 1 ;

      if (NbrHar == 2 && FMMmat_P->NumEqui == NULL)
	FMMmat_P->NumEqui = List_Create(NbrGroupObs, 1, sizeof(List_T*)) ;
      
      for (iG = 0 ; iG < NbrGroupObs ; iG++){
	List_Read(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;
	NbrEqu = List_Nbr( NumEqu_L);   
	NumEqu_A = (int*)(NumEqu_L->array) ;

	if(!Flag_Renum)
	  NumEqur_L = List_Create(NbrEqu,  1, sizeof(int)) ;
	else
	  List_Read(FMMmat_P->NumEqur, iG, &NumEqur_L ) ;

	if(NbrHar == 2){
	  if(!Flag_Renum)
	    NumEqui_L = List_Create(NbrEqu,  1, sizeof(int)) ;
	  else
	    List_Read(FMMmat_P->NumEqui, iG, &NumEqui_L ) ;
	}

	for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	  NumEqu = NumEqu_A[iEqu] - 1 ;
	  NumEqur  = permp[(permr[NumEqu]-1) + N] ;

	  if(!Flag_Renum)
	    List_Add(NumEqur_L, &NumEqur) ;
	  else
	    List_Write(NumEqur_L, iEqu, &NumEqur) ;

	  if(NbrHar == 2){
	    NumEqu++ ; /* Imaginary part */
	    NumEquri = permp[(permr[NumEqu]-1) + N] ;
	    if(!Flag_Renum)
	      List_Add(NumEqui_L, &NumEquri) ;
	    else 
	      List_Write(NumEqui_L, iEqu, &NumEquri) ;
	  }
	}

	if(!Flag_Renum)
	  List_Add(FMMmat_P->NumEqur, &NumEqur_L ) ;
	else
	  List_Write(FMMmat_P->NumEqur, iG, &NumEqur_L ) ;

	if(NbrHar == 2){
	  if(!Flag_Renum)
	    List_Add(FMMmat_P->NumEqui, &NumEqui_L ) ;
	  else
	    List_Write(FMMmat_P->NumEqui, iG, &NumEqui_L ) ;
	}
      }
    }
    else{ 
      FMMmat_P->NumEqur = FMMmat_P->NumDofr ;
      if (NbrHar == 2) FMMmat_P->NumEqui = FMMmat_P->NumDofi ;
    }

    Flag_Renum = 0;
  }
  
  GetDP_End;
}




void FMM_RenumberingOLD( int N, int *permr, int *permp){

  int  NbrFMMEqu, iFMMEqu, iG, NbrGroupSrc, NbrGroupObs ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  int  iDof, NbrDof, NumDof, NumDofr, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, NumEqur, *NumEqu_A ;
  int  NbrHar, NumDofri, NumEquri, Flag_Renum = 0 ;

  List_T *NumDof_L, *NumEqu_L ;
  List_T *NumDofi_L, *NumEqui_L ;


  GetDP_Begin("FMM_Renumbering");

  /* For using together with InverseRenumbering, the NumDof and NumEqu
     are changed and for a second iteration they must be the original
     ones. The Renumbering is done properly but not the
     InverseRenumbering */

  NbrHar = Current.NbrHar;
 
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;
    NbrGroupSrc = List_Nbr( FMMmat_P->NumDof );
  
    if(NbrHar == 2  &&  FMMmat_P->NumDofi == NULL) 
      FMMmat_P->NumDofi = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;
    else Flag_Renum = 1 ;

    for (iG = 0 ; iG < NbrGroupSrc ; iG++){
      List_Read(FMMmat_P->NumDof, iG, &NumDof_L) ;
      NbrDof = List_Nbr( NumDof_L);   
      NumDof_A = (int*)(NumDof_L->array) ;

      if(NbrHar == 2){
	if(!Flag_Renum)
	  NumDofi_L = List_Create(NbrDof,  1, sizeof(int)) ;
        else
	  List_Read(FMMmat_P->NumDofi, iG, &NumDofi_L ) ;
      }

      for (iDof = 0 ; iDof < NbrDof ; iDof++){
	NumDof  = NumDof_A[iDof] - 1 ;
	NumDofr = permp[(permr[NumDof]-1) + N] ;
	List_Write(NumDof_L, iDof, &NumDofr) ;

	if(NbrHar == 2){
	  NumDof++ ; /* Imaginary part */
	  NumDofri = permp[(permr[NumDof]-1) + N] ;
	  if(!Flag_Renum)
	    List_Add(NumDofi_L, &NumDofri) ;
	  else 
	    List_Write(NumDofi_L, iDof, &NumDofri) ;
	}
      }
      List_Write(FMMmat_P->NumDof, iG, &NumDof_L ) ;
      if(NbrHar == 2){
	if(!Flag_Renum)
	  List_Add(FMMmat_P->NumDofi, &NumDofi_L ) ;
	else 
	  List_Write(FMMmat_P->NumDofi, iG, &NumDofi_L ) ;
      }
    }
 
    Flag_Renum = 0 ;
    
    if(FMMmat_P->NumEqu !=  FMMmat_P->NumDof){
      NbrGroupObs = List_Nbr( FMMmat_P->NumEqu );
 
      if (NbrHar == 2 && FMMmat_P->NumEqui == NULL)
	FMMmat_P->NumEqui = List_Create(NbrGroupObs, 1, sizeof(List_T*)) ;
      else Flag_Renum = 1 ;

      for (iG = 0 ; iG < NbrGroupObs ; iG++){
	List_Read(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;
	NbrEqu = List_Nbr( NumEqu_L);   
	NumEqu_A = (int*)(NumEqu_L->array) ;

	if(NbrHar == 2){
	  if(!Flag_Renum)
	    NumEqui_L = List_Create(NbrEqu,  1, sizeof(int)) ;
	  else
	    List_Read(FMMmat_P->NumEqui, iG, &NumEqui_L ) ;
	}

	for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	  NumEqu = NumEqu_A[iEqu] - 1 ;
	  NumEqur  = permp[(permr[NumEqu]-1) + N] ;
	  List_Write(NumEqu_L, iEqu, &NumEqur) ;

	  if(NbrHar == 2){
	    NumEqu++ ; /* Imaginary part */
	    NumEquri = permp[(permr[NumEqu]-1) + N] ;
	    if(!Flag_Renum)
	      List_Add(NumEqui_L, &NumEquri) ;
	    else 
	      List_Write(NumEqui_L, iEqu, &NumEquri) ;
	  }
	}

	List_Write(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;

	if(NbrHar == 2){
	  if(!Flag_Renum)
	    List_Add(FMMmat_P->NumEqui, &NumEqui_L ) ;
	  else
	    List_Write(FMMmat_P->NumEqui, iG, &NumEqui_L ) ;
	}
      }
    }
    else 
      if(NbrHar == 2) FMMmat_P->NumEqui = FMMmat_P->NumDofi ;
  }
 
  GetDP_End;
}



void FMM_InverseRenumbering( int *rpermr){

  int  NbrFMMEqu, iFMMEqu, iG, NbrGroupSrc, NbrGroupObs ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  int  iDof, NbrDof, NumDof, NumDofr, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, NumEqur, *NumEqu_A ;

  List_T *NumDof_L, *NumEqu_L ;


  GetDP_Begin("FMM_InverseRenumbering");

  /* This function does not work properly! To revise... */

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;
    NbrGroupSrc = List_Nbr( FMMmat_P->NumDof );
  
    for (iG = 0 ; iG < NbrGroupSrc ; iG++){
      List_Read(FMMmat_P->NumDof, iG, &NumDof_L ) ;
      NbrDof = List_Nbr( NumDof_L);   
      NumDof_A = (int*)(NumDof_L->array) ;
      
      for (iDof = 0 ; iDof < NbrDof ; iDof++){
	NumDofr  = NumDof_A[iDof] ;
	NumDof = rpermr[NumDofr]-1 ;
	List_Write(NumDof_L, iDof, &NumDof) ;
      }
      List_Write(FMMmat_P->NumDof, iG, &NumDof_L ) ;
    }
 
    if(FMMmat_P->NumEqu !=  FMMmat_P->NumDof){
      NbrGroupObs = List_Nbr( FMMmat_P->NumEqu );
 
      for (iG = 0 ; iG < NbrGroupObs ; iG++){
	List_Read(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;
	NbrEqu = List_Nbr( NumEqu_L);   
	NumEqu_A = (int*)(NumEqu_L->array) ;

	for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	  NumEqur = NumEqu_A[iEqu] ;
	  NumEqu  = rpermr[NumEqur]-1 ;
	  List_Write(NumEqu_L, iEqu, &NumEqu ) ;
	}
	List_Write(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;
      }
    }
  }

 
  GetDP_End;
}






void FMM_Scaling(double *rowscal, double *colscal, int N){

  int  NbrFMMEqu, iFMMEqu, iG, NbrGroupSrc, NbrGroupObs;
  int  iR, iDir, NbrDir, iCom, NbrCom, Inc, TypeTimeDerivative, i ,Flag_scaled = 0 ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  int  iDof, NbrDof, NumDof, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, *NumEqu_A ;
  double **Ag_M, **D_M, *Ag_V, *D_V, *x_prev ;
  List_T *NumDof_L, *NumEqu_L ;

  /* Aggregation and Disaggregation matrices can be either SCALAR or VECTOR */

  GetDP_Begin("FMM_Scaling");
  
  
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;

  NbrDir = Current.FMM.N ; 


  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;
    
    TypeTimeDerivative = FMMmat_P->TypeTimeDerivative ;
   
    if ( TypeTimeDerivative == DT_ && Current.NbrHar == 1 ){
#if defined(HAVE_SPARSKIT)
      x_prev = ((Current.DofData->CurrentSolution-1)->x).V ;
#else
      Msg(ERROR, "FMM_Scaling only implemented for Sparskit");
#endif
      if (!Flag_scaled){
	for (i = 0 ; i < N ; i++)
	  x_prev[i] /= colscal[i] ;
	Flag_scaled = 1;
      }
    }
    
    NbrCom = FMMmat_P->NbrCom ;
    Inc = 2 * NbrCom ;
    NbrGroupSrc = List_Nbr( FMMmat_P->NumDof );
    
    for (iG = 0 ; iG < NbrGroupSrc ; iG++){
      List_Read(FMMmat_P->A_L, iG, &Ag_M ) ;
      List_Read(FMMmat_P->NumDof, iG, &NumDof_L ) ;
      NbrDof = List_Nbr( NumDof_L);   
      NumDof_A = (int*)(NumDof_L->array) ;      

      for (iDof = 0 ; iDof < NbrDof ; iDof++){
	NumDof  = NumDof_A[iDof] - 1 ;
	Ag_V = Ag_M[iDof] ;
	
	for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=Inc){
	  for (iCom = 0 ; iCom < NbrCom ; iCom++){
	    Ag_V[iR+iCom]   *= colscal[NumDof] ;
	    Ag_V[iR+NbrCom+iCom] *= colscal[NumDof] ;
	  }
	}	
      }
    }/* iG Source */
 
    NbrGroupObs = List_Nbr( FMMmat_P->NumEqu );
  
    for (iG = 0 ; iG < NbrGroupObs ; iG++){
      List_Read(FMMmat_P->D_L, iG, &D_M ) ;
      List_Read(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;
      NbrEqu = List_Nbr( NumEqu_L);   
      NumEqu_A = (int*)(NumEqu_L->array) ;

      for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	NumEqu  = NumEqu_A[iEqu] - 1 ;
	D_V = D_M[iEqu] ;
	
	for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=Inc){	  
	  for (iCom = 0 ; iCom < NbrCom ; iCom++){
	    D_V[iR+iCom]   *= rowscal[NumEqu] ;
	    D_V[iR+NbrCom+iCom] *= rowscal[NumEqu] ;
	  }
	}	
      }
    }/* iG Observation */

  }/* iFMMEqu */
 
  GetDP_End;
}



void FMM_UnScaling(double *rowscal, double *colscal){

  int  NbrFMMEqu, iFMMEqu, iG, NbrGroupSrc, NbrGroupObs, iR, iDir, NbrDir, iCom, NbrCom, Inc ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  int  iDof, NbrDof, NumDof, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, *NumEqu_A ;
  double **Ag_M, **D_M, *Ag_V, *D_V ;
  List_T *NumDof_L, *NumEqu_L ;

  /* Aggregation and Disaggregation matrices can be either SCALAR or VECTOR*/

  GetDP_Begin("FMM_UnScaling");
  
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  NbrDir = Current.FMM.N ; 
  
  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;

    NbrCom = FMMmat_P->NbrCom ;
    Inc = 2 * NbrCom ;
    NbrGroupSrc = List_Nbr( FMMmat_P->NumDof );
  
    for (iG = 0 ; iG < NbrGroupSrc ; iG++){
      List_Read(FMMmat_P->A_L, iG, &Ag_M ) ;
      List_Read(FMMmat_P->NumDof, iG, &NumDof_L ) ;
      NbrDof = List_Nbr( NumDof_L);   
      NumDof_A = (int*)(NumDof_L->array) ;
      
      for (iDof = 0 ; iDof < NbrDof ; iDof++){
	NumDof  = NumDof_A[iDof] - 1 ;
	Ag_V = Ag_M[iDof] ;

	for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=Inc){	 
	  for (iCom = 0 ; iCom < NbrCom ; iCom++){
	    Ag_V[iR+iCom]   /= colscal[NumDof] ;
	    Ag_V[iR+NbrCom+iCom] /= colscal[NumDof] ;
	  }
	}	
      }
    }/* iG Source */
 
    NbrGroupObs = List_Nbr( FMMmat_P->NumEqu );
  
    for (iG = 0 ; iG < NbrGroupObs ; iG++){
      List_Read(FMMmat_P->D_L, iG, &D_M ) ;
      List_Read(FMMmat_P->NumEqu, iG, &NumEqu_L ) ;
      NbrEqu = List_Nbr( NumEqu_L);   
      NumEqu_A = (int*)(NumEqu_L->array) ;

      for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	NumEqu  = NumEqu_A[iEqu] - 1 ;
	D_V = D_M[iEqu] ;
	for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=Inc){	
	  for (iCom = 0 ; iCom < NbrCom ; iCom++){
	    D_V[iR+iCom]   /= rowscal[NumEqu] ;
	    D_V[iR+NbrCom+iCom] /= rowscal[NumEqu] ;
	  }
	}	
      }
    }/* iG Observation */
    
  }/* iFMMEqu */
 
  GetDP_End;
}




void FMM_DTAMatrix(int N, double ***DTA){ 

  int  i, NbrFMMEqu, iFMMEqu ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  double **M, *x, *y ;

  GetDP_Begin("FMM_DTAMatrix");

  M =(double**)Malloc(N *sizeof(double*));
  for(i = 0 ; i < N ; i++)
    M[i] =(double*)Calloc(N,sizeof(double));

  x = (double*)Calloc(N, sizeof(double));

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;
    for (i = 0 ; i < N ; i++){
      x[i] = 1. ;
      y = M[i] ; /* row */
      ((void (*)(struct FMMmat*,double*,double*))FMMmat_P->FctProd)(FMMmat_P, x, y) ;
      x[i] = 0. ;
    }
  }
  
  *DTA = M ;
  GetDP_End;
}



/* FMMProd_Laplace2D and FMMProd_Laplace3D admit only SCALAR Aggregation and Disaggregation,
   the VECTOR case is not yet implemented and will be considered in separate routines */ 

void FMMProd_AllLaplace2DNonAdaptive(struct FMMmat *FMMmat_P, double *x, double *y ){
  /* WARNING: Aggregation and Disaggregation matrices must be SCALAR */
  int  NbrGroupSrc, NbrDir ;
  int  NbrFG, *NumFG ;
  int  iDof, NbrDof, NumDof, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, *NumEqu_A ;
  int  iG1, iG2, iDir, iDir2, iR, iHar, NbrHar ;
  double  **Ag_M, *Ag_V, AgJRe[NBR_MAX_DIR], AgJIm[NBR_MAX_DIR], ***T, *TG1G2, **Disag_M, *Disag_V ;
  double Treal, Timag, TARe[NBR_MAX_DIR], TAIm[NBR_MAX_DIR] ; 

  List_T *FG_L, *NumDof_L, *NumEqu_L ;


  GetDP_Begin("FMMProd_AllLaplace2DNonAdaptive");

  T = FMMmat_P->T ;
  
  NbrHar = Current.NbrHar ;
  NbrDir = Current.FMM.NbrDir ;

  NbrGroupSrc = List_Nbr( FMMmat_P->A_L );
    
  for (iHar = 0 ; iHar < NbrHar ; iHar++){
    for (iG1 = 0 ; iG1 < NbrGroupSrc ; iG1++){
      List_Read(FMMmat_P->A_L, iG1, &Ag_M ) ;
      for (iDir = 0; iDir < NbrDir ; iDir++)
	AgJRe[iDir] = AgJIm[iDir] = 0.;
      
      List_Read(FMMmat_P->FG_L, iG1, &FG_L) ;
      NbrFG = List_Nbr(FG_L) ;  
      if(NbrFG){
	if (iHar == 0)
	  List_Read(FMMmat_P->NumDof, iG1, &NumDof_L ) ;
	else 
	  List_Read(FMMmat_P->NumDofi, iG1, &NumDof_L ) ;

	NbrDof = List_Nbr(NumDof_L);
	NumDof_A = (int*)(NumDof_L->array) ;
	
	for (iDof = 0 ; iDof < NbrDof ; iDof++){
	  NumDof = NumDof_A[iDof] - 1 ;
	  Ag_V = Ag_M[iDof] ;
	  for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=2){	  
	    AgJRe[iDir] += Ag_V[iR  ] * x[NumDof] ;
	    AgJIm[iDir] += Ag_V[iR+1] * x[NumDof] ;
	  }
	}  /* iDof NbrDof */
	
	NumFG = (int*)(FG_L->array) ;     
	for(iG2=0 ; iG2 < NbrFG ; iG2++){ /* Destination */
	  List_Read(FMMmat_P->D_L, NumFG[iG2], &Disag_M ) ;
	  TG1G2 = T[iG1][iG2] ;
	  
	  for (iDir = 0, iR = 0 ; iDir < NbrDir ; iDir++){ /* Translation is not diagonal! */
	    TARe[iDir] = TAIm[iDir] = 0. ;
	    for (iDir2 = 0 ; iDir2 < NbrDir ; iDir2++, iR+=2){
	      Treal = TG1G2[iR  ] ;
	      Timag = TG1G2[iR+1] ;
	      TARe[iDir] += Treal * AgJRe[iDir2] - Timag * AgJIm[iDir2] ;
	      TAIm[iDir] += Treal * AgJIm[iDir2] + Timag * AgJRe[iDir2] ;        
	    }/* iDir2 */
	  }/* iDir1 */
	  
	  if(iHar == 0)
	    List_Read(FMMmat_P->NumEqu, NumFG[iG2], &NumEqu_L ) ;
	  else
	    List_Read(FMMmat_P->NumEqui, NumFG[iG2], &NumEqu_L ) ;

	  NbrEqu = List_Nbr( NumEqu_L ) ;
	  NumEqu_A = (int*)( NumEqu_L->array) ;
	  for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	    NumEqu =  NumEqu_A[iEqu] - 1 ;
	    Disag_V = Disag_M[iEqu] ;
	    for (iDir = 0, iR = 0 ; iDir < NbrDir ; iDir++, iR+=2)
	      y[NumEqu] += Disag_V[iR] * TARe[iDir] - Disag_V[iR+1] * TAIm[iDir] ;	     			   
	  }/* iEqu NbrEqu*/
	  
	}/* iG2 Destination*/
      }/* if NbrFG */
    }/* iG1 Origin */
  }/* iHar */
  
  GetDP_End ;
  
} 


void FMMProd_AllLaplace2D(struct FMMmat *FMMmat_P, double *x, double *y ){
  /* WARNING: Aggregation and Disaggregation matrices must be SCALAR */
  int  NbrGroupSrc, NbrDir ;
  int  NbrFG, *NumFG, *Nd_A ;
  int  iDof, NbrDof, NumDof, NumDofprev, *NumDof_A, *NumDofprev_A = NULL;
  int  iEqu, NbrEqu, NumEqu, *NumEqu_A ;
  int  iG1, iG2, iDir, iDir2, iR, iHar, NbrHar,TypeTimeDerivative ;
  double  **Ag_M, *Ag_V, AgJRe[NBR_MAX_DIR], AgJIm[NBR_MAX_DIR], ***T, *TG1G2, **Disag_M, *Disag_V ;
  double Treal, Timag, TARe[NBR_MAX_DIR], TAIm[NBR_MAX_DIR], w, *x_prev = NULL; 

  List_T *FG_L, *Nd_L, *NumDof_L, *NumDofprev_L, *NumEqu_L ;


  GetDP_Begin("FMMProd_AllLaplace2D");

  T = FMMmat_P->T ;
  
  NbrHar = Current.NbrHar ;
  
  TypeTimeDerivative = FMMmat_P->TypeTimeDerivative ;
  w = FMMmat_P->Pulsation ;

  if (TypeTimeDerivative == DT_ && NbrHar == 1 )
#if defined(HAVE_SPARSKIT)
    x_prev = ((Current.DofData->CurrentSolution-1)->x).V ;
#else
    Msg(ERROR, "FMM_Scaling only implemented for Sparskit");
#endif


  NbrGroupSrc = List_Nbr( FMMmat_P->A_L );
    
  for (iHar = 0 ; iHar < NbrHar ; iHar++){
    for (iG1 = 0 ; iG1 < NbrGroupSrc ; iG1++){
      List_Read(FMMmat_P->A_L, iG1, &Ag_M ) ;
      NbrDir = Current.FMM.NbrDir ;  
      for (iDir = 0; iDir < NbrDir ; iDir++)
	AgJRe[iDir] = AgJIm[iDir] = 0.;
      
      List_Read(FMMmat_P->FG_L, iG1, &FG_L) ;
      NbrFG = List_Nbr(FG_L) ;  
      if(NbrFG){
	List_Read(FMMmat_P->Nd_L, iG1, &Nd_L) ;
	Nd_A =  (int*)(Nd_L->array) ;
	
	if (iHar == 0)
	  List_Read(FMMmat_P->NumDofr, iG1, &NumDof_L ) ;
	else 
	  List_Read(FMMmat_P->NumDofi, iG1, &NumDof_L ) ;

	if(TypeTimeDerivative == DT_ && NbrHar ==1 ){
	  List_Read(FMMmat_P->NumDof, iG1, &NumDofprev_L ) ;
	  NumDofprev_A = (int*)(NumDofprev_L->array) ;
	}
	
	NbrDof = List_Nbr(NumDof_L);
	NumDof_A = (int*)(NumDof_L->array) ;
	
	for (iDof = 0 ; iDof < NbrDof ; iDof++){
	  NumDof = NumDof_A[iDof] - 1 ;
	  Ag_V = Ag_M[iDof] ;
	  
	  if(TypeTimeDerivative == NODT_ || ( TypeTimeDerivative == DT_ && NbrHar == 2) ){
	    for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=2){	  
	      AgJRe[iDir] += Ag_V[iR  ] * x[NumDof] ;
	      AgJIm[iDir] += Ag_V[iR+1] * x[NumDof] ;
	    }
	  }

	  if (TypeTimeDerivative == DT_ && NbrHar ==1 ){
	    NumDofprev = NumDofprev_A[iDof] - 1 ;
	    for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=2){	  
	      AgJRe[iDir] += Ag_V[iR  ] * ( x[NumDof] - x_prev[NumDofprev] ) ;
	      AgJIm[iDir] += Ag_V[iR+1] * ( x[NumDof] - x_prev[NumDofprev] ) ;
	    }
	  }

	 

	}  /* iDof NbrDof */
	
	NumFG = (int*)(FG_L->array) ;     
	for(iG2=0 ; iG2 < NbrFG ; iG2++){ /* Destination */
	  NbrDir = Nd_A[iG2] ;
	  List_Read(FMMmat_P->D_L, NumFG[iG2], &Disag_M ) ;
	  TG1G2 = T[iG1][iG2] ;
	  
	  for (iDir = 0, iR = 0 ; iDir < NbrDir ; iDir++){ /* Translation is not diagonal! */
	    TARe[iDir] = TAIm[iDir] = 0. ;
	    for (iDir2 = 0 ; iDir2 < NbrDir ; iDir2++, iR+=2){
	      Treal = TG1G2[iR  ] ;
	      Timag = TG1G2[iR+1] ;
	      
	      TARe[iDir] += Treal * AgJRe[iDir2] - Timag * AgJIm[iDir2] ;
	      TAIm[iDir] += Treal * AgJIm[iDir2] + Timag * AgJRe[iDir2] ;        
	    }/* iDir2 */
	  }/* iDir1 */
	  
	  if(iHar == 0)
	    List_Read(FMMmat_P->NumEqur, NumFG[iG2], &NumEqu_L ) ;
	  else
	    List_Read(FMMmat_P->NumEqui, NumFG[iG2], &NumEqu_L ) ;
	  	  
	  NbrEqu = List_Nbr( NumEqu_L ) ;
	  NumEqu_A = (int*)( NumEqu_L->array) ;
	  for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	    NumEqu =  NumEqu_A[iEqu] - 1 ;
	    Disag_V = Disag_M[iEqu] ;
	    
	    for (iDir = 0, iR = 0 ; iDir < NbrDir ; iDir++, iR+=2){
	      y[NumEqu] += Disag_V[iR] * TARe[iDir] - Disag_V[iR+1] * TAIm[iDir] ;
	    }
   
	  }/* iEqu NbrEqu*/
	  
	}/* iG2 Destination*/
      }/* if NbrFG */
    }/* iG1 Origin */
  }/* iHar */
  
  GetDP_End ;
  
} 



void FMMProd_AllLaplace3D(struct FMMmat *FMMmat_P, double *x, double *y ){
  /* Aggregation and Disaggregation matrices SCALAR */
  int  NbrGroupSrc, NbrDir ;
  int  NbrFG,  *NumFG, *Nd_A ; 
  int  iDof, NbrDof, NumDof, NumDofprev, *NumDof_A, *NumDofprev_A = NULL;
  int  iEqu, NbrEqu, NumEqu, *NumEqu_A ;
  int  iG1, iG2, iDir, iDir2, iR, iHar, NbrHar, l, m, j, k ;
  int  TypeTimeDerivative ;
  double  **Ag_M, *Ag_V, AgJRe[NBR_MAX_DIR], AgJIm[NBR_MAX_DIR], ***T, *TG1G2, **Disag_M, *Disag_V ;
  double Treal, Timag, TARe[NBR_MAX_DIR], TAIm[NBR_MAX_DIR], w, *x_prev = NULL ; 
  List_T *FG_L, *Nd_L, *NumDof_L, *NumDofprev_L, *NumEqu_L ;


  GetDP_Begin("FMMProd_AllLaplace3D");

  T = FMMmat_P->T ;

  NbrHar = Current.NbrHar ;  

  TypeTimeDerivative = FMMmat_P->TypeTimeDerivative ;
  w = FMMmat_P->Pulsation ;
  
  if (TypeTimeDerivative == DT_ && NbrHar == 1 )
#if defined(HAVE_SPARSKIT)
    x_prev = ((Current.DofData->CurrentSolution-1)->x).V ;
#else
    Msg(ERROR, "FMM_Scaling only implemented for Sparskit");
#endif

  
  NbrGroupSrc = List_Nbr( FMMmat_P->A_L );
  
  for (iHar = 0 ; iHar < NbrHar ; iHar++){
    for (iG1 = 0 ; iG1 < NbrGroupSrc ; iG1++){
      List_Read(FMMmat_P->A_L, iG1, &Ag_M ) ;     
      NbrDir = (Current.FMM.NbrDir-1)*(Current.FMM.NbrDir+1) ;       
      for (iDir = 0; iDir < NbrDir ; iDir++)     
	AgJRe[iDir] = AgJIm[iDir] = 0.;
      
      List_Read(FMMmat_P->FG_L, iG1, &FG_L) ;
      NbrFG = List_Nbr(FG_L) ;  
      if(NbrFG){
	List_Read(FMMmat_P->Nd_L, iG1, &Nd_L) ;
	Nd_A =  (int*)(Nd_L->array) ;
	
	if (iHar == 0)
	  List_Read(FMMmat_P->NumDofr, iG1, &NumDof_L ) ;
	else
	  List_Read(FMMmat_P->NumDofi, iG1, &NumDof_L ) ;

	if(TypeTimeDerivative == DT_ && NbrHar ==1 ){
	  List_Read(FMMmat_P->NumDof, iG1, &NumDofprev_L ) ;
	  NumDofprev_A = (int*)(NumDofprev_L->array) ;
	}
	
	NbrDof = List_Nbr(NumDof_L);
	NumDof_A = (int*)(NumDof_L->array) ;
	
	for (iDof = 0 ; iDof < NbrDof ; iDof++){
	  NumDof = NumDof_A[iDof] - 1 ;
	  Ag_V = Ag_M[iDof] ;

	  if(TypeTimeDerivative == NODT_ || ( TypeTimeDerivative == DT_ && NbrHar == 2) )
	    for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=2){	  
	      AgJRe[iDir] += Ag_V[iR  ] * x[NumDof] ;
	      AgJIm[iDir] += Ag_V[iR+1] * x[NumDof] ;
	    }
	  
	  if (TypeTimeDerivative == DT_ && NbrHar ==1 ){
	    NumDofprev = NumDofprev_A[iDof] - 1 ;
	    for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=2){	  
	      AgJRe[iDir] += Ag_V[iR  ] * ( x[NumDof] - x_prev[NumDofprev] ) ;
	      AgJIm[iDir] += Ag_V[iR+1] * ( x[NumDof] - x_prev[NumDofprev] ) ;
	    }
	  }

	} /*iDof NbrDof*/
	
	NumFG = (int*)(FG_L->array) ;
	
	for(iG2=0 ; iG2 < NbrFG ; iG2++){ /* Destination */
	  NbrDir = (Nd_A[iG2]-1)*(Nd_A[iG2]+1) ;
	  List_Read(FMMmat_P->D_L, NumFG[iG2], &Disag_M ) ;
	  TG1G2 = T[iG1][iG2] ;
	  
	  l = 0 ; m = 0 ; 
	  for (iDir = 0; iDir < NbrDir ; iDir++){
	    j = 0 ; k = 0 ;
	    TARe[iDir] = TAIm[iDir] = 0 ;	     
	    for (iDir2 = 0 ; iDir2 < NbrDir ; iDir2++){
	      iR = 2*((l+j)*(l+j+1)+m+k) ;
	      Treal = TG1G2[iR  ] ;
	      Timag = TG1G2[iR+1] ;	
	      
	      TARe[iDir] += Treal * AgJRe[iDir2] - Timag * AgJIm[iDir2] ;
	      TAIm[iDir] += Treal * AgJIm[iDir2] + Timag * AgJRe[iDir2] ;
	      
	      if (j==k) {j++;k=-j;} else k++;
	    }/* iDir2 NbrDir */
	    if (l==m) {l++;m=-l;} else m++;
	  }/* iDir NbrDir */

	  if ( (TypeTimeDerivative == NODT_) ||  (TypeTimeDerivative == DT_ && NbrHar == 1) ){
	    if(iHar == 0)
	      List_Read(FMMmat_P->NumEqur, NumFG[iG2], &NumEqu_L ) ; 
	    else
	      List_Read(FMMmat_P->NumEqui, NumFG[iG2], &NumEqu_L ) ;  
	  }
	  
	  if (TypeTimeDerivative == DT_ && NbrHar == 2){
	    if (iHar == 0)
	      List_Read(FMMmat_P->NumEqui, NumFG[iG2], &NumEqu_L ) ;
	    else
	      List_Read(FMMmat_P->NumEqur, NumFG[iG2], &NumEqu_L ) ;
	  }

	  NbrEqu = List_Nbr( NumEqu_L ) ;
	  NumEqu_A = (int*)(NumEqu_L->array) ;

	  for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	    NumEqu =  NumEqu_A[iEqu] - 1 ;
	    Disag_V = Disag_M[iEqu] ;	
	    for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=2)		
	      if ((TypeTimeDerivative == NODT_)|| (TypeTimeDerivative == DT_ && NbrHar == 1))
		y[NumEqu] +=  Disag_V[iR] * TARe[iDir] - Disag_V[iR+1] * TAIm[iDir] ;
	      else
		if (iHar ==0)		
		  y[NumEqu] += w * (Disag_V[iR] * TARe[iDir] - Disag_V[iR+1] * TAIm[iDir]) ;
		else
		  y[NumEqu] -= w * (Disag_V[iR] * TARe[iDir] - Disag_V[iR+1] * TAIm[iDir]) ;
		
	    
	  }/* iEqu NbrEqu */
	  
	}/* iG2 Destination */
      }/* if NbrFG */
    }/* iG1 Origin */    
  }/* iHar */
  
  GetDP_End ;
  
}



void FMMProd_AllLaplace3D_VECTOR(struct FMMmat *FMMmat_P, double *x, double *y ){
  /* Aggregation and Disaggregation matrices can be either SCALAR or VECTOR*/
  int  NbrGroupSrc, NbrDir ;
  int  NbrFG,  *NumFG, *Nd_A ; 
  int  iDof, NbrDof, NumDof, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, NumEquY, *NumEqu_A, *NumEquY_A ;
  int  iG1, iG2, iDir, iDir2, iR, iHar, NbrHar, l, m, j, k, iCom, NbrCom,Inc,iA,iTA ;
  int  TypeTimeDerivative ;
  double  **Ag_M, *Ag_V, AgJRe[NBR_MAX_DIR], AgJIm[NBR_MAX_DIR], ***T, *TG1G2, **Disag_M, *Disag_V ;
  double Treal, Timag, TARe[NBR_MAX_DIR], TAIm[NBR_MAX_DIR], w ; 
  List_T *FG_L, *Nd_L, *NumDof_L, *NumEqu_L, *NumEquY_L ;


  GetDP_Begin("FMMProd_AllLaplace3D");


  T = FMMmat_P->T ;
  
  TypeTimeDerivative = FMMmat_P->TypeTimeDerivative ;
  w = FMMmat_P->Pulsation ;

  NbrHar = Current.NbrHar ;
  NbrCom = FMMmat_P->NbrCom ;
  Inc = 2*NbrCom;

  NbrGroupSrc = List_Nbr( FMMmat_P->A_L );

  for (iHar = 0 ; iHar < NbrHar ; iHar++){
    for (iG1 = 0 ; iG1 < NbrGroupSrc ; iG1++){
      List_Read(FMMmat_P->A_L, iG1, &Ag_M ) ;     
      NbrDir = (Current.FMM.NbrDir-1)*(Current.FMM.NbrDir+1) ;       
      for (iDir = 0; iDir < NbrCom* NbrDir ; iDir++)     
	AgJRe[iDir] = AgJIm[iDir] = 0.;
     
      List_Read(FMMmat_P->FG_L, iG1, &FG_L) ;
      NbrFG = List_Nbr(FG_L) ;  
      if(NbrFG){
	List_Read(FMMmat_P->Nd_L, iG1, &Nd_L) ;
	Nd_A =  (int*)(Nd_L->array) ;

	if (iHar == 0)
	  List_Read(FMMmat_P->NumDof, iG1, &NumDof_L ) ;
	else
	  List_Read(FMMmat_P->NumDofi, iG1, &NumDof_L ) ;

	NbrDof = List_Nbr(NumDof_L);
	NumDof_A = (int*)(NumDof_L->array) ;

	for (iDof = 0 ; iDof < NbrDof ; iDof++){
	  NumDof = NumDof_A[iDof] - 1 ;
	  Ag_V = Ag_M[iDof] ;
	  for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=Inc){
	    for (iCom = 0 ; iCom < NbrCom ; iCom++){
	      AgJRe[iDir*NbrCom+iCom] += Ag_V[iR+iCom] * x[NumDof] ;
	      AgJIm[iDir*NbrCom+iCom] += Ag_V[iR+NbrCom+iCom] * x[NumDof] ;	  
	    }
	  }  
	} /*iDof NbrDof*/
      
	NumFG = (int*)(FG_L->array) ;
      
	for(iG2=0 ; iG2 < NbrFG ; iG2++){ /* Destination */
	  NbrDir = (Nd_A[iG2]-1)*(Nd_A[iG2]+1) ;
	  List_Read(FMMmat_P->D_L, NumFG[iG2], &Disag_M ) ;
	  TG1G2 = T[iG1][iG2] ;
		
	  l = 0 ; m = 0 ; 
	  for (iDir = 0; iDir < NbrDir ; iDir++){
	    j = 0 ; k = 0 ;
	    TARe[iDir] = TAIm[iDir] = 0 ;	     
	    for (iDir2 = 0 ; iDir2 < NbrDir ; iDir2++){
	      iR = 2*((l+j)*(l+j+1)+m+k) ;
	      Treal = TG1G2[iR  ] ;
	      Timag = TG1G2[iR+1] ;	
	      
	      for (iCom = 0 ; iCom < NbrCom ; iCom++){
		iTA = iDir*NbrCom+iCom ;
		iA = iDir2*NbrCom+iCom ;
		TARe[iTA] += Treal * AgJRe[iA] - Timag * AgJIm[iA] ;
		TAIm[iTA] += Treal * AgJIm[iA] + Timag * AgJRe[iA] ;
	      }
	      if (j==k) {j++;k=-j;} else k++;
	    }/* iDir2 NbrDir */
	    if (l==m) {l++;m=-l;} else m++;
	  }/* iDir NbrDir */

	  if(iHar == 0)
	    List_Read(FMMmat_P->NumEqu, NumFG[iG2], &NumEqu_L ) ; 
	  else
	    List_Read(FMMmat_P->NumEqui, NumFG[iG2], &NumEqu_L ) ;  

	  if (TypeTimeDerivative == NODT_)
	    NumEquY_L = NumEqu_L ;
	  else
	    if (iHar == 0)
	      List_Read(FMMmat_P->NumEqui, NumFG[iG2], &NumEquY_L ) ;
	    else
	      List_Read(FMMmat_P->NumEqu, NumFG[iG2], &NumEquY_L ) ;

	  NbrEqu = List_Nbr( NumEqu_L ) ;
	  NumEqu_A = (int*)(NumEqu_L->array) ;
	  NumEquY_A = (int*)(NumEquY_L->array) ;
      
	  for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	    NumEqu =  NumEqu_A[iEqu] - 1 ;
	    NumEquY =  NumEquY_A[iEqu] - 1 ;
	    Disag_V = Disag_M[iEqu] ;	
	    for (iDir = 0, iR = 0; iDir < NbrDir ; iDir++, iR+=Inc)
	      for (iCom = 0 ; iCom < NbrCom ; iCom++){
		iTA = iDir*NbrCom+iCom ;
		
		if (TypeTimeDerivative == NODT_)
		  y[NumEqu] +=  Disag_V[iR+iCom] * TARe[iTA] - Disag_V[iR+NbrCom+iCom] * TAIm[iTA] ;
		else
		  if (iHar ==0)		
		    y[NumEquY] -= w * (Disag_V[iR+iCom] * TARe[iTA] - Disag_V[iR+NbrCom+iCom] * TAIm[iTA]) ;
		  else
		    y[NumEquY] += w * (Disag_V[iR+iCom] * TARe[iTA] - Disag_V[iR+NbrCom+iCom] * TAIm[iTA]) ;


	      }	     
	  }/* iEqu NbrEqu */
	  
	}/* iG2 Destination */
      }/* if NbrFG */
    }/* iG1 Origin */    
  }/* iHar */
  
  GetDP_End ;

}


void FMMProd_AllHelmholtz(struct FMMmat *FMMmat_P, double *x, double *y ){

  int  NbrGroupSrc, NbrDir; 
  int  NbrFG, *NumFG ;
  int  iDof, NbrDof, NumDof, *NumDof_A ;
  int  iEqu, NbrEqu, NumEqu, NumEqui, *NumEqu_A, *NumEqui_A ;
  int  iG1, iG2, iDir, iHar,  NbrHar, iR, iCom, NbrCom,iA,iRD ;

  double  **Ag_M, *Ag_V, AgJRe[3*NBR_MAX_DIR], AgJIm[3*NBR_MAX_DIR], ***T, *TG1G2, **Disag_M, *Disag_V ;
  double TrAr, TrAi, TiAi, TiAr ;

  List_T *FG_L, *NumDof_L, *NumEqu_L,*NumEqui_L ;

  GetDP_Begin("FMMProd_AllHelmholtz");

  NbrDir = Current.FMM.NbrDir ;  
  NbrHar = Current.NbrHar ;
  NbrCom = FMMmat_P->NbrCom ;
 
  T = FMMmat_P->T ;

  NbrGroupSrc = List_Nbr( FMMmat_P->A_L );  

  for (iHar = 0 ; iHar < NbrHar ; iHar++){
    for (iG1 = 0 ; iG1 < NbrGroupSrc ; iG1++){
      List_Read(FMMmat_P->A_L, iG1, &Ag_M ) ;
      for (iDir = 0; iDir < NbrDir ; iDir++)
	for (iCom = 0 ; iCom < NbrCom ; iCom++)
	  AgJRe[iDir*NbrCom+iCom] = AgJIm[iDir*NbrCom+iCom] = 0 ;

      List_Read(FMMmat_P->FG_L, iG1, &FG_L) ;
      NbrFG = List_Nbr(FG_L) ;  

      if(NbrFG){      
	if(iHar == 0)
	  List_Read(FMMmat_P->NumDofr,iG1, &NumDof_L) ;
	else
	  List_Read(FMMmat_P->NumDofi,iG1, &NumDof_L) ;

	NbrDof = List_Nbr(NumDof_L);
	NumDof_A = (int*)(NumDof_L->array) ;

	for (iDof = 0 ; iDof < NbrDof ; iDof++){
	  NumDof = NumDof_A[iDof] - 1 ;
	  Ag_V = Ag_M[iDof] ;

	  for (iDir = 0, iR = 0; iDir < NbrDir; iDir++, iR+=2*NbrCom){
	    for (iCom = 0 ; iCom < NbrCom ; iCom++){
	      if(iHar == 0){
		AgJRe[iDir*NbrCom+iCom] += Ag_V[iR+iCom  ]      * x[NumDof];  
		AgJIm[iDir*NbrCom+iCom] += Ag_V[iR+NbrCom+iCom] * x[NumDof];  
	      }
	      else{
		AgJRe[iDir*NbrCom+iCom] -= Ag_V[iR+NbrCom+iCom] * x[NumDof];  
		AgJIm[iDir*NbrCom+iCom] += Ag_V[iR+iCom]   * x[NumDof]; 
	      }
	    }
	  }
	}

	NumFG = (int*)(FG_L->array) ;    

	for(iG2=0 ; iG2 < NbrFG ; iG2++){ /* Destination */
	  List_Read(FMMmat_P->D_L, NumFG[iG2], &Disag_M ) ;
	  TG1G2 = T[iG1][iG2] ;

	  List_Read(FMMmat_P->NumEqur, NumFG[iG2], &NumEqu_L) ;
	  List_Read(FMMmat_P->NumEqui, NumFG[iG2], &NumEqui_L) ;

	  NbrEqu = List_Nbr( NumEqu_L ) ;
	  NumEqu_A = (int*)( NumEqu_L->array ) ;
	  NumEqui_A = (int*)( NumEqui_L->array ) ;

	  for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	    NumEqu =  NumEqu_A[iEqu] - 1 ;
	    NumEqui =  NumEqui_A[iEqu] - 1 ;
	    Disag_V = Disag_M[iEqu] ;

	    for (iDir = 0, iR = 0, iRD = 0 ; iDir < NbrDir ; iDir++, iR +=2, iRD+=2*NbrCom){
	      for (iCom = 0 ; iCom < NbrCom ; iCom++){
		iA = iDir* NbrCom +iCom ;
		TrAr = TG1G2[iR]   * AgJRe[iA] ;
		TrAi = TG1G2[iR]   * AgJIm[iA] ;
		TiAi = TG1G2[iR+1] * AgJIm[iA] ;
		TiAr = TG1G2[iR+1] * AgJRe[iA] ;
		y[NumEqu]  += Disag_V[iRD+iCom] * ( TrAr - TiAi ) - Disag_V[iRD+NbrCom+iCom] * ( TrAi + TiAr ) ;	
		y[NumEqui] += Disag_V[iRD+iCom] * ( TrAi + TiAr ) + Disag_V[iRD+NbrCom+iCom] * ( TrAr - TiAi ) ; 
	      }
	    }
	  }/* for iEqu NbrEqu*/
	}/* for iG2 Destination*/
      }/* if NbrFG */
    }/* for iG1 Origin */    
  }/* for iHar */

  GetDP_End ;  
}






 
