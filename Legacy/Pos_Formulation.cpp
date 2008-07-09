// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "ProData.h"
#include "DofData.h"
#include "Get_DofOfElement.h"
#include "Pos_Print.h"
#include "Pos_Format.h"
#include "ListUtils.h"
#include "Message.h"

#define TWO_PI             6.2831853071795865

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int    Flag_BIN ;

extern char   Name_Path[MAX_FILE_NAME_LENGTH] ;

FILE *PostStream = stdout;

/* ------------------------------------------------------------------------ */
/*  P o s _ F e m F o r m u l a t i o n                                     */
/* ------------------------------------------------------------------------ */

void  Pos_FemFormulation(struct Formulation       *Formulation_P,
			 struct PostQuantity      *NCPQ_P, 
			 struct PostQuantity      *CPQ_P, 
			 int                       Order,
			 struct PostSubOperation  *PostSubOperation_P)
{
  struct Element           Element ;
  struct DefineQuantity   *DefineQuantity_P0 ;
  struct QuantityStorage  *QuantityStorage_P0, QuantityStorage ;

  List_T   *QuantityStorage_L ;
  int       i ;
  
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
      Msg::Error("Unknown Operation type for Print"); 
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
    Msg::Error("Unknown PostSubOperation type") ;
    break;
  }

  List_Delete(QuantityStorage_L);
}

/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t T i m e S t e p s                                       */
/* ------------------------------------------------------------------------ */

int Pos_InitTimeSteps(struct PostSubOperation *PostSubOperation_P)
{
  int iTime, NbTimeStep;

  if(PostSubOperation_P->LastTimeStepOnly){
    iTime = List_Nbr(Current.DofData->Solutions) - 1;
    List_Reset(PostSubOperation_P->TimeStep_L);
    List_Add(PostSubOperation_P->TimeStep_L, &iTime);
    return 1;
  }

  NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L);

  if(!NbTimeStep || !PostSubOperation_P->FrozenTimeStepList){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    List_Reset(PostSubOperation_P->TimeStep_L);
    for(iTime = 0 ; iTime < NbTimeStep ; iTime++)
      List_Add(PostSubOperation_P->TimeStep_L, &iTime);
  }
  
  return NbTimeStep;
}

/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t A l l S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep)
{
  int  Num_TimeStep, k, Num_Solution ;

  List_Read(TimeStep_L, Index_TimeStep, &Num_TimeStep) ;

  for(k = 0 ; k < Current.NbrSystem ; k++)
    if( (Num_Solution = std::min(List_Nbr((Current.DofData_P0+k)->Solutions)-1,
				 Num_TimeStep)) >=0 )
      (Current.DofData_P0+k)->CurrentSolution = (struct Solution*)
	List_Pointer((Current.DofData_P0+k)->Solutions, Num_Solution) ;

  Current.Time = Current.DofData->CurrentSolution->Time ;
  Current.TimeImag = Current.DofData->CurrentSolution->TimeImag ;
  Current.TimeStep = Num_TimeStep ;
}

/* ------------------------------------------------------------------------ */
/*  P o s _ F o r m u l a t i o n                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Formulation(struct Formulation       *Formulation_P,
		      struct PostProcessing    *PostProcessing_P,
		      struct PostSubOperation  *PostSubOperation_P)
{
  struct PostQuantity   *NCPQ_P = NULL, *CPQ_P = NULL ;
  double                 Pulsation ;
  int                    i, Order = 0 ;
  char                   FileName[MAX_FILE_NAME_LENGTH], AddExt[100];

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
	Msg::Direct("          > '%s'", FileName) ;
      else
	Msg::Error("Unable to open file '%s'", FileName) ;
    }
    else {
      if((PostStream = fopen(FileName, Flag_BIN ? "ab" : "a")))
	Msg::Direct("         >> '%s'", FileName) ;
      else
	Msg::Error("Unable to open file '%s'", FileName) ;
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
      Msg::Error("Too many frequencies specified in PostOperation");
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
    Msg::Error("Unknown Type for Formulation (%s)", Formulation_P->Name) ;
    break;

  }

  if(PostSubOperation_P->FileOut){
    fclose(PostStream) ;
    if(PostSubOperation_P->Format == FORMAT_GMSH_PARSED ||
       PostSubOperation_P->Format == FORMAT_GMSH)
      Msg::SendFileOnSocket(FileName);
  }
}

