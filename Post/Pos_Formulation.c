static char *rcsid = "$Id: Pos_Formulation.c,v 1.21 2000-10-30 01:05:47 geuzaine Exp $" ;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "GetDP.h"
#include "Data_Passive.h"
#include "Data_Numeric.h"
#include "Treatment_Formulation.h"
#include "CurrentData.h"
#include "Get_DofOfElement.h"
#include "Pos_Formulation.h"
#include "Pos_Print.h"
#include "Pos_Format.h"

extern int  InteractiveInterrupt ;

/* ------------------------------------------------------------------------ */
/*  P o s _ F o r m u l a t i o n                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Formulation(struct Formulation       *Formulation_P,
		      struct PostProcessing    *PostProcessing_P,
		      struct PostSubOperation  *PostSubOperation_P) {

  struct PostQuantity   *NCPQ_P, *CPQ_P ;
  int                    Order ;

  GetDP_Begin("Pos_Formulation");

  if (PostSubOperation_P->FileOut){
    if (!PostSubOperation_P->CatFile) {
      if((PostStream = fopen(PostSubOperation_P->FileOut, "w")))
	Msg(DIRECT, "          > '%s'", PostSubOperation_P->FileOut) ;
      else
	Msg(ERROR, "Unable to Open File '%s'", PostSubOperation_P->FileOut) ;
    }
    else {
      if((PostStream = fopen(PostSubOperation_P->FileOut, "a")))
	Msg(DIRECT, "         >> '%s'", PostSubOperation_P->FileOut) ;
      else
	Msg(ERROR, "Unable to Open File '%s'", PostSubOperation_P->FileOut) ;
    }
  }
  else{
    PostStream = stdout ;
  }

  if (PostSubOperation_P->CatFile == 2)  fprintf(PostStream, "\n") ;

  Format_PostFormat(PostSubOperation_P->Format) ;

  /*
  if(((struct PostQuantity *)
      List_Pointer(PostProcessing_P->PostQuantity, 
		   PostSubOperation_P->PostQuantityIndex[0]))->Type == NONCUMULATIVE){
  */
  if (PostSubOperation_P->PostQuantitySupport[0] < 0) { /* Noncumulative */
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

  if (PostSubOperation_P->FileOut)  fclose(PostStream) ;

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

  for (i = 0 ; i < List_Nbr(Formulation_P->DefineQuantity) ; i++) {

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
    case PRINT_ONCUT_1D :
    case PRINT_ONCUT_2D :
      Pos_PrintOnCut(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
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
      Msg(ERROR, "Unknown Operation Type for Print"); 
      break;
    }    
    break ;    

  default :
    Msg(ERROR, "Unknown PostSubOperation Type") ;
    break;
  }

  if(InteractiveInterrupt) InteractiveInterrupt=0 ;
  
  List_Delete(QuantityStorage_L);

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t A l l S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep) {

  int  Num_TimeStep, k, Num_Solution ;

  GetDP_Begin("Pos_InitAllSolutions");

  List_Read(TimeStep_L, Index_TimeStep, &Num_TimeStep) ;

  for (k = 0 ; k < Current.NbrSystem ; k++)
    if ( (Num_Solution = MIN(List_Nbr((Current.DofData_P0+k)->Solutions)-1,
			     Num_TimeStep)) >=0 )
      (Current.DofData_P0+k)->CurrentSolution = (struct Solution*)
	List_Pointer((Current.DofData_P0+k)->Solutions, Num_Solution) ;

  Current.Time = Current.DofData->CurrentSolution->Time ;

  GetDP_End ;
}
