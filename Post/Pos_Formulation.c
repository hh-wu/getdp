#define RCSID "$Id: Pos_Formulation.c,v 1.49 2005-07-22 13:09:50 geuzaine Exp $"
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
 */

#include "GetDP.h"
#include "Data_Passive.h"
#include "Numeric.h"
#include "Treatment_Formulation.h"
#include "CurrentData.h"
#include "Get_DofOfElement.h"
#include "Pos_Formulation.h"
#include "Pos_Print.h"
#include "Pos_Format.h"
#include "GmshClient.h"

extern int  InteractiveInterrupt ;

/* ------------------------------------------------------------------------ */
/*  P o s _ F o r m u l a t i o n                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Formulation(struct Formulation       *Formulation_P,
		      struct PostProcessing    *PostProcessing_P,
		      struct PostSubOperation  *PostSubOperation_P) {

  struct PostQuantity   *NCPQ_P = NULL, *CPQ_P = NULL ;
  double                 Pulsation ;
  int                    i, Order = 0 ;
  char                   FileName[MAX_FILE_NAME_LENGTH], AddExt[100];

  GetDP_Begin("Pos_Formulation");

  if(PostSubOperation_P->FileOut){
    if(PostSubOperation_P->FileOut[0] == '/' || 
       PostSubOperation_P->FileOut[0] == '\\'){
      strcpy(FileName, PostSubOperation_P->FileOut);
    }
    else{
      strcpy(FileName, Name_Path);
      strcat(FileName, PostSubOperation_P->FileOut);
    }

    if(PostSubOperation_P->LastTimeStepOnly) {
      /* We should implement something more general, like strings with
	 tags (e.g., "file_%TimeStep.pos") */
      sprintf(AddExt, "_%03d", (int)Current.TimeStep) ;
      strcat(FileName, AddExt);
    }

    if(!PostSubOperation_P->CatFile) {
      if((PostStream = fopen(FileName, Flag_BIN ? "wb" : "w")))
	Msg(DIRECT, "          > '%s'", FileName) ;
      else
	Msg(ERROR, "Unable to open file '%s'", FileName) ;
    }
    else {
      if((PostStream = fopen(FileName, Flag_BIN ? "ab" : "a")))
	Msg(DIRECT, "         >> '%s'", FileName) ;
      else
	Msg(ERROR, "Unable to open file '%s'", FileName) ;
    }
  }
  else{
    PostStream = stdout ;
  }

  if(PostSubOperation_P->CatFile == 2)  fprintf(PostStream, "\n\n") ;
  /*  two blanks lines for -index in gnuplot  */

  Format_PostFormat(PostSubOperation_P->Format) ;

  if(PostSubOperation_P->PostQuantityIndex[0] >= 0) {
    if(PostSubOperation_P->PostQuantitySupport[0] < 0) { /* Noncumulative */
      NCPQ_P = 
	(struct PostQuantity *) List_Pointer(PostProcessing_P->PostQuantity, 
					     PostSubOperation_P->PostQuantityIndex[0]) ;
      CPQ_P = 
	(PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
	(struct PostQuantity *)List_Pointer(PostProcessing_P->PostQuantity, 
					    PostSubOperation_P->PostQuantityIndex[1]) :
	NULL ;
      Order = 1 ;
    }
    else {
      CPQ_P = 
	(struct PostQuantity *) List_Pointer(PostProcessing_P->PostQuantity, 
					     PostSubOperation_P->PostQuantityIndex[0]) ;
      NCPQ_P = 
	(PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
	(struct PostQuantity *)List_Pointer(PostProcessing_P->PostQuantity, 
					    PostSubOperation_P->PostQuantityIndex[1]) :
	NULL ;
      Order = 0 ;
    }
  }

  if(List_Nbr(PostSubOperation_P->Frequency_L)){
    if(List_Nbr(PostSubOperation_P->Frequency_L) > List_Nbr(Current.DofData->Pulsation))
      Msg(ERROR, "Too many frequencies specified in PostOperation");
    for(i = 0 ; i < List_Nbr(PostSubOperation_P->Frequency_L) ; i++){
      Pulsation = *((double *)List_Pointer(PostSubOperation_P->Frequency_L, i)) * TWO_PI ;
      List_Write(Current.DofData->Pulsation, i, &Pulsation) ;
    }
  }

  switch (Formulation_P->Type) {

  case FEMEQUATION :
    Pos_FemFormulation(Formulation_P, NCPQ_P, CPQ_P, Order, PostSubOperation_P) ;
    break ;

  case GLOBALEQUATION :
    break ;

  default :
    Msg(ERROR, "Unknown Type for Formulation (%s)", Formulation_P->Name) ;
    break;

  }

  if(PostSubOperation_P->FileOut){
    fclose(PostStream) ;
    if(Flag_SOCKET > 0 && 
       (PostSubOperation_P->Format == FORMAT_GMSH_PARSED ||
	PostSubOperation_P->Format == FORMAT_GMSH)){
      Gmsh_SendString(Flag_SOCKET, GMSH_CLIENT_VIEW, FileName);
    }
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  P o s _ F e m F o r m u l a t i o n                                     */
/* ------------------------------------------------------------------------ */

void  Pos_FemFormulation(struct Formulation       *Formulation_P,
			 struct PostQuantity      *NCPQ_P, 
			 struct PostQuantity      *CPQ_P, 
			 int                       Order,
			 struct PostSubOperation  *PostSubOperation_P) {

  struct Element           Element ;
  struct DefineQuantity   *DefineQuantity_P0 ;
  struct QuantityStorage  *QuantityStorage_P0, QuantityStorage ;

  List_T   *QuantityStorage_L ;
  int       i ;
  
  GetDP_Begin("Pos_FemFormulation");

  Get_InitDofOfElement(&Element) ;

  DefineQuantity_P0 = (struct DefineQuantity*)
    List_Pointer(Formulation_P->DefineQuantity, 0) ;
  QuantityStorage_L = List_Create(List_Nbr(Formulation_P->DefineQuantity),  1, 
				  sizeof (struct QuantityStorage) ) ;

  for(i = 0 ; i < List_Nbr(Formulation_P->DefineQuantity) ; i++) {
    
    QuantityStorage.DefineQuantity = DefineQuantity_P0 + i ;

    if(QuantityStorage.DefineQuantity->Type == INTEGRALQUANTITY &&
       QuantityStorage.DefineQuantity->IntegralQuantity.DefineQuantityIndexDof < 0){
      QuantityStorage.TypeQuantity = VECTOR ; /* on ne sait pas... */
    }
    else{
      QuantityStorage.TypeQuantity = 
	((struct FunctionSpace *)
	 List_Pointer(Problem_S.FunctionSpace,
		      (DefineQuantity_P0+i)->FunctionSpaceIndex))->Type ;
    }
    
    QuantityStorage.NumLastElementForFunctionSpace = 0 ;
    List_Add(QuantityStorage_L, &QuantityStorage) ;
  }

  QuantityStorage_P0 = (struct QuantityStorage*)List_Pointer(QuantityStorage_L, 0) ;

  switch (PostSubOperation_P->Type) {

  case POP_PRINT :
    switch (PostSubOperation_P->SubType) {
    case PRINT_ONREGION :
      Pos_PrintOnRegion(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
			QuantityStorage_P0, PostSubOperation_P) ; 
      break ;
    case PRINT_ONELEMENTSOF :
    case PRINT_ONGRID   :
      Pos_PrintOnElementsOf(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
			    QuantityStorage_P0, PostSubOperation_P) ; 
      break ;
    case PRINT_ONSECTION_1D :
    case PRINT_ONSECTION_2D :
      Pos_PrintOnSection(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
			 QuantityStorage_P0, PostSubOperation_P) ;
      break ;
    case PRINT_ONGRID_0D    :
    case PRINT_ONGRID_1D    :
    case PRINT_ONGRID_2D    :
    case PRINT_ONGRID_3D    :
    case PRINT_ONGRID_PARAM :
      Pos_PrintOnGrid(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
		      QuantityStorage_P0, PostSubOperation_P) ; 
      break ;
    case PRINT_WITHARGUMENT :
      Pos_PrintWithArgument(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
			    QuantityStorage_P0, PostSubOperation_P) ;
      break ;
    default :
      Msg(ERROR, "Unknown Operation type for Print"); 
      break;
    }    
    break ;    

  case POP_EXPRESSION :
    Pos_PrintExpression(PostSubOperation_P);
    break;

  case POP_GROUP :
    Pos_PrintGroup(PostSubOperation_P);
    break;

  default :
    Msg(ERROR, "Unknown PostSubOperation type") ;
    break;
  }

  if(InteractiveInterrupt) InteractiveInterrupt=0 ;
  
  List_Delete(QuantityStorage_L);

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t T i m e S t e p s                                       */
/* ------------------------------------------------------------------------ */

int Pos_InitTimeSteps(struct PostSubOperation *PostSubOperation_P) {
  int iTime, NbTimeStep;

  GetDP_Begin("Pos_InitTimeSteps");

  if(PostSubOperation_P->LastTimeStepOnly){
    iTime = List_Nbr(Current.DofData->Solutions) - 1;
    List_Reset(PostSubOperation_P->TimeStep_L);
    List_Add(PostSubOperation_P->TimeStep_L, &iTime);
    GetDP_Return(1);
  }

  NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L);

  if(!NbTimeStep || !PostSubOperation_P->FrozenTimeStepList){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    List_Reset(PostSubOperation_P->TimeStep_L);
    for(iTime = 0 ; iTime < NbTimeStep ; iTime++)
      List_Add(PostSubOperation_P->TimeStep_L, &iTime);
  }
  
  GetDP_Return(NbTimeStep);
}

/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t A l l S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep) {

  int  Num_TimeStep, k, Num_Solution ;

  GetDP_Begin("Pos_InitAllSolutions");

  List_Read(TimeStep_L, Index_TimeStep, &Num_TimeStep) ;

  for(k = 0 ; k < Current.NbrSystem ; k++)
    if( (Num_Solution = MIN(List_Nbr((Current.DofData_P0+k)->Solutions)-1,
			    Num_TimeStep)) >=0 )
      (Current.DofData_P0+k)->CurrentSolution = (struct Solution*)
	List_Pointer((Current.DofData_P0+k)->Solutions, Num_Solution) ;

  Current.Time = Current.DofData->CurrentSolution->Time ;
  Current.TimeImag = Current.DofData->CurrentSolution->TimeImag ;
  Current.TimeStep = Num_TimeStep ;

  GetDP_End ;
}
