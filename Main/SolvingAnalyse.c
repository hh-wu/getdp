#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "GeoData.h"
#include "DofData.h"
#include "Init_Problem.h"
#include "Cal_Quantity.h"
#include "ualloc.h"
#include "outil.h"
#include "Data_DefineE.h"
#include "Data_Numeric.h"
#include "Get_DofOfElement.h"
#include "CurrentData.h"
#include "Graph.h"

int  fcmp_Resolution_Name(const void * a, const void * b) ;
int  fcmp_PostProcessing_Name(const void * a, const void * b) ;
int  fcmp_PostOperation_Name(const void * a, const void * b) ;
int  fcmp_DefineSystem_Name(const void * a, const void * b) ;

void PartitionGraph(struct DofData * DofData_P, int NbPartition) ;

/* ------------------------------------------------------------------------ */
/*  S o l v i n g A n a l y s e                                             */
/* ------------------------------------------------------------------------ */

void  SolvingAnalyse (void) {

  struct Resolution     * Resolution_P     , * Resolution2_P ;
  struct DefineSystem   * DefineSystem_P0  , * DefineSystem2_P0, * DefineSystem_P ;
  struct Solution       * Solution_P       , Solution_S ;
  struct GeoData        * GeoData_P0 ;
  struct DofData        * DofData_P0       , * DofData2_P0 ;
  List_T                * DofData_L        , * DofData2_L ;

  int                     Num_Resolution   ,   Num_Resolution2 ;
  int                     Nbr_DefineSystem ,   Nbr_DefineSystem2 ;
  int                     Nbr_Solution     ;

  struct DofData        * DofData_P ;
  struct Dof            * Dof_P ;
  struct PostOperation  * PostOperation_P ;
  struct FunctionSpace  * FunctionSpace_P ;
  struct PreResolutionInfo  PreResolutionInfo_S ;

  double  d;
  int  i, j, k ;
  int  Num_PostProcessing, Num_PostOperation, Nbr_GeoData ;
  int  Nbr_PreResolution, Nbr_OtherSystem ;

  GeoData_L = List_Create( 1, 5, sizeof(struct GeoData)) ;

  /* -------------------- */
  /* Treatment Resolution */
  /* -------------------- */

  if (Flag_PRE) {
    Nbr_OtherSystem = 0 ;
    if (Name_Resolution)
      Num_Resolution = List_ISearchSeq(Problem_S.Resolution, Name_Resolution,
                                       fcmp_Resolution_Name) ;
    else
      Msg(ERROR, "Missing Resolution");
  }
  else if (Flag_PAR || Flag_CAL || Flag_POS) {
    Dof_OpenFile(DOF_PRE, Name_Generic,"r") ;
    Dof_ReadFilePRE0(&Num_Resolution, &Nbr_DefineSystem) ;
    Nbr_OtherSystem = Nbr_DefineSystem ;
  }


  if (Num_Resolution < 0 ||
      Num_Resolution + 1 > List_Nbr(Problem_S.Resolution))
    Msg(ERROR, "Unknown Resolution (%s)", Name_Resolution);

  Treatment_Resolution(Num_Resolution, &Nbr_DefineSystem, &Nbr_OtherSystem,
                       &Resolution_P, &DefineSystem_P0, &DofData_P0,
		       &DofData_L, GeoData_L, &GeoData_P0) ;

  /* -------------- */
  /* Pre-processing */
  /* -------------- */

  TreatmentStatus = _PRE ;

  Msg(DIRECT, "P r e - P r o c e s s i n g . . .") ;

  if (Flag_PRE) {
    
    PreResolutionIndex_L = List_Create(10, 10, sizeof(struct PreResolutionInfo)) ;

    Treatment_Preprocessing(Nbr_DefineSystem, DofData_P0,
			    DefineSystem_P0, GeoData_P0) ;

    Nbr_PreResolution = List_Nbr(PreResolutionIndex_L) ;

    for (i = 0 ; i < Nbr_PreResolution ; i++) {

      Msg(DIRECT, "P r e - R e s o l u t i o n  (%d/%d) . . .",
          i+1, Nbr_PreResolution) ;
      
      List_Read(PreResolutionIndex_L, i, &PreResolutionInfo_S) ;
      Num_Resolution2 = PreResolutionInfo_S.Index ;

      Nbr_OtherSystem = 0 ;
      Treatment_Resolution(Num_Resolution2, &Nbr_DefineSystem2, &Nbr_OtherSystem,
                           &Resolution2_P, &DefineSystem2_P0,
                           &DofData2_P0, &DofData2_L, GeoData_L, &GeoData_P0) ;

      TreatmentStatus = _PRE ;
      Treatment_Preprocessing(Nbr_DefineSystem2, DofData2_P0,
			      DefineSystem2_P0, GeoData_P0) ;

      for (j = 0 ; j < Nbr_DefineSystem2 ; j++)
        Dof_TransferDofTreeToList(DofData2_P0 + j) ;

      /* Creation des liens entre FunctionSpace et DofData:
         incorrect si correspondance non biunivoque entre FS et DD */

      for (j = 0 ; j < Nbr_DefineSystem2 ; j++) {
        DofData_P = DofData2_P0 + j ;
        for (k = 0 ; k < List_Nbr(DofData_P->FunctionSpaceIndex) ; k++)
          FunctionSpace_P = (struct FunctionSpace *)
            List_Pointer(Problem_S.FunctionSpace,
                         *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, k))) ;
        FunctionSpace_P->DofData = FunctionSpace_P->MainDofData = DofData_P ;
      }
      
      Current.TypeTime = TIME_STATIC  ; Current.Time = 0. ; Current.TimeStep = 0. ;
      Current.RelativeDifference = 0. ; Current.RelaxationFactor = 1. ;

      TreatmentStatus = _CAL ;

      Current.NbrSystem  = Nbr_DefineSystem2 ;  /* Attention: init for Dt[] */
      Current.DofData_P0 = DofData2_P0 ;

      Treatment_Operation(Resolution2_P, Resolution2_P->Operation, 
                          DofData2_P0, GeoData_P0, Resolution_P, DofData_P0) ;
      
      if (PreResolutionInfo_S.Type == PR_GLOBALBASISFUNCTION) {
        for (j = 0 ; j < Nbr_DefineSystem2 ; j++) {
          DofData_P = DofData2_P0 + j ;
          Dof_TransferSolutionToConstraint(DofData_P) ;
          DofData_P->Num += Nbr_DefineSystem ;
          List_Add(DofData_L, DofData_P) ;
        }
        Nbr_DefineSystem = List_Nbr(DofData_L) ;  /* New Value ... */
        DofData_P0 = (struct DofData*)List_Pointer(DofData_L, 0) ;  /* New Value ... */
      }

      Msg(DIRECT, "E n d   P r e - R e s o l u t i o n  (%d/%d)",
          i+1, Nbr_PreResolution) ;
    }
    
    Dof_OpenFile(DOF_PRE, Name_Generic, "w+") ;
    Dof_WriteFilePRE0(Num_Resolution, Resolution_P->Name, Nbr_DefineSystem) ;

    for (i = 0 ; i < Nbr_DefineSystem ; i++){
      Init_PartInDofData(DofData_P0 + i, Flag_PAR) ;
      Dof_WriteFilePRE(DofData_P0 + i) ;
    }
    Nbr_GeoData = List_Nbr(GeoData_L) ;
    for (i = 0 ; i < Nbr_GeoData ; i++)
      Geo_WriteFilePRE(GeoData_P0 + i, Problem_S.Group) ;

    Dof_CloseFile(DOF_PRE) ;

    if (Flag_PAR || Flag_CAL || Flag_POS)
      for (i = 0 ; i < Nbr_DefineSystem ; i++)
        Dof_TransferDofTreeToList(DofData_P0 + i) ;

  }  

  else if (Flag_PAR || Flag_CAL || Flag_POS) {
    
    if(Flag_PAR && (Flag_CAL || Flag_POS))
      Msg(ERROR, "Please Partition Independently of -cal or -pos");
      
    if(Flag_PAR > NBR_MAX_PARTITION)
      Msg(ERROR, "Too Many Partitions");

    Msg(LOADING,"Pre-Processing Data '%s.pre'", Name_Generic) ;

    for(i = 0 ; i < Nbr_DefineSystem ; i++)
      Dof_ReadFilePRE(DofData_P0 + i) ;
    for(i = 0 ; i < Nbr_OtherSystem ; i++) {
      DofData_P = DofData_P0 + Nbr_DefineSystem + i ;
      Dof_ReadFilePRE(DofData_P) ;
      DefineSystem_P = (struct DefineSystem*)
        List_Pointer((((struct Resolution*)List_Pointer(Problem_S.Resolution,
                                                        DofData_P->ResolutionIndex))
                      ->DefineSystem), DofData_P->SystemIndex) ;
      DofData_P->GeoDataIndex =
	Geo_AddGeoData(GeoData_L, DefineSystem_P->MeshName, Name_MshFile) ;
      Init_HarInDofData(DefineSystem_P, DofData_P) ;
    }
    Nbr_DefineSystem = List_Nbr(DofData_L) ;  /* New Value ... */

    Nbr_GeoData = List_Nbr(GeoData_L) ;
    
    Geo_ReadFilePRE(GeoData_P0, Nbr_GeoData, Problem_S.Group) ;

    Dof_CloseFile(DOF_PRE) ;

  }  

  Msg(RESOURCES, "");
  Msg(DIRECT, "E n d   P r e - P r o c e s s i n g");

  /* ------------- */
  /* Partitionning */
  /* ------------- */

  if (Flag_PAR) {
    TreatmentStatus = _PAR ;
    Msg(DIRECT, "P a r t i t i o n n i n g . . .") ;

    /* Creation des liens entre FunctionSpace et DofData:
       incorrect si correspondance non biunivoque entre FS et DD */

    for (i = 0 ; i < Nbr_DefineSystem ; i++) {
      DofData_P = DofData_P0 + i ;
      for (j = 0 ; j < List_Nbr(DofData_P->FunctionSpaceIndex) ; j++){
        FunctionSpace_P = (struct FunctionSpace *)
          List_Pointer(Problem_S.FunctionSpace,
                       *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, j))) ;
        FunctionSpace_P->DofData = FunctionSpace_P->MainDofData = DofData_P ;
      }
      InitGraph(DofData_P->NbrDof, &DofData_P->Graph);
    }

    Treatment_Preprocessing(Nbr_DefineSystem, DofData_P0, DefineSystem_P0, GeoData_P0) ;

    Dof_OpenFile(DOF_PRE, Name_Generic, "w") ;

    Dof_WriteFilePRE0(Num_Resolution, Resolution_P->Name, Nbr_DefineSystem) ;

    for (i = 0 ; i < Nbr_DefineSystem ; i++){
      DofData_P = DofData_P0 + i ;
      PartitionGraph(DofData_P, Flag_PAR);
      DofData_P->DofTree = NULL ;
      Dof_WriteFilePRE(DofData_P) ;
    }

    for (i = 0 ; i < Nbr_GeoData ; i++) 
      Geo_WriteFilePRE(GeoData_P0 + i, Problem_S.Group) ;

    Dof_CloseFile(DOF_PRE) ;

    Msg(RESOURCES, "");
    Msg(DIRECT, "E n d   P a r t i t i o n n i n g");
  }

  /* ---------- */
  /* Processing */
  /* ---------- */

  if (Flag_CAL) {
    TreatmentStatus = _CAL ;
    Msg(DIRECT, "P r o c e s s i n g . . .") ;

    /* Creation des liens entre FunctionSpace et DofData:
       incorrect si correspondance non biunivoque entre FS et DD */

    for (i = 0 ; i < Nbr_DefineSystem ; i++) {
      DofData_P = DofData_P0 + i ;
      for (j = 0 ; j < List_Nbr(DofData_P->FunctionSpaceIndex) ; j++){
        FunctionSpace_P = (struct FunctionSpace *)
          List_Pointer(Problem_S.FunctionSpace,
                       *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, j))) ;
        FunctionSpace_P->DofData = FunctionSpace_P->MainDofData = DofData_P ;
      }
    }
    
    if(Flag_RESTART) {
      i = 0 ;
      while(Name_ResFile[i]){
	Msg(LOADING, "Processing Data '%s'", Name_ResFile[i]) ;
	Dof_OpenFile(DOF_RES, Name_ResFile[i], "r");
	Dof_ReadFileRES(DofData_L, NULL, -1, &Current.Time, &Current.TimeStep) ;
	Dof_CloseFile(DOF_RES);
	i++ ;
      }
      Msg(BIGINFO, "Restarting Computation at Time=%g s (TimeStep %g)", 
	  Current.Time, Current.TimeStep) ;
    }
    else{
      Current.Time = Current.TimeStep = 0. ;
    }

    Current.NbrHar = 1 ; /* Bug : peut ne pas etre initialise si -cal sans 
			    -pre et evaluation d'expression sans init de systeme avant */
    Current.TypeTime = TIME_STATIC ;
    Current.RelativeDifference = 0. ; 
    Current.RelaxationFactor = 1. ;
    Current.NbrSystem  = Nbr_DefineSystem ;  /* Attention: init for Dt[] */
    Current.DofData_P0 = DofData_P0 ;

    Treatment_Operation(Resolution_P, Resolution_P->Operation, 
                        DofData_P0, GeoData_P0, NULL, NULL) ;

    Msg(SUMMARY, "");
    Msg(DIRECT, "E n d   P r o c e s s i n g");
  }

  /* --------------- */
  /* Post-processing */
  /* --------------- */

  if (Flag_POS) {
    TreatmentStatus = _POS ;
    Msg(DIRECT, "P o s t - P r o c e s s i n g . . .") ;

    if(Flag_IPOS){
      Num_PostProcessing =
        List_ISearchSeq(Problem_S.PostProcessing, Name_PostProcessing,
                        fcmp_PostProcessing_Name) ;
      if (Num_PostProcessing < 0)
        Msg(ERROR, "Unknown PostProcessing") ;
      List_Read(Problem_S.PostProcessing, Num_PostProcessing, &PostProcessing_S) ;
      PostOperation_P = NULL ;
    }
    else{
      Num_PostOperation =
        List_ISearchSeq(Problem_S.PostOperation, Name_PostOperation,
                        fcmp_PostOperation_Name) ;
      if (Num_PostOperation < 0)
        Msg(ERROR, "Unknown PostOperation") ;

      PostOperation_P = (struct PostOperation*)
        List_Pointer(Problem_S.PostOperation, Num_PostOperation) ;
      List_Read(Problem_S.PostProcessing,PostOperation_P->PostProcessingIndex,
                &PostProcessing_S) ;
    }

    if (!Flag_CAL) {
      i = 0 ;
      while(Name_ResFile[i]){
	Msg(LOADING, "Processing Data '%s'", Name_ResFile[i]) ;
	Dof_OpenFile(DOF_RES, Name_ResFile[i], "r");
	Dof_ReadFileRES(DofData_L, NULL, -1, &d, &d) ;
	Dof_CloseFile(DOF_RES) ;
	i++ ;
      }
    }

    for (i = 0 ; i < Nbr_DefineSystem ; i++) {
      Current.DofData = DofData_P = DofData_P0 + i ;

      for(j=0 ; j<DofData_P->NbrAnyDof ; j++){
        Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, j) ;
        if(Dof_P->Type == DOF_SYMMETRICAL_INIT){
          Dof_P->Type = DOF_SYMMETRICAL ;
          gZeroScalar(&Dof_P->Val) ;
        }
      }

      Current.NbrHar = Current.DofData->NbrHar ;
      Nbr_Solution = List_Nbr(DofData_P->Solutions) ;
      if (Nbr_Solution == 0) { /* en cas de pos sans cal, apres calcul de
                                  function de base globale... a reorganiser */
        if (DofData_P->Solutions == NULL)
          DofData_P->Solutions = List_Create( 1, 1, sizeof(struct Solution)) ;
        Solution_S.Time = 0. ;  
        List_Add(DofData_P->Solutions, &Solution_S) ;
        Nbr_Solution = 1 ;
      }
      for (j = 0 ; j < Nbr_Solution ; j++) {
        Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions, j) ;
        Current.Time = Solution_P->Time ;
        Current.TimeStep = 0.;
        Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
        if (j == 0)  DofData_P->CurrentSolution = Solution_P ;
        /* A mieux gerer !!! */
      }
      

      /* Creation des liens entre FunctionSpace et DofData 
         incorrect si correspondance non biunivoque entre FS et DD */

      for (j = 0 ; j < List_Nbr(DofData_P->FunctionSpaceIndex) ; j++){
        FunctionSpace_P = (struct FunctionSpace *)
          List_Pointer(Problem_S.FunctionSpace,
                       *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, j))) ;
        FunctionSpace_P->DofData = FunctionSpace_P->MainDofData = DofData_P ;
      }

    }
    
    Current.NbrSystem  = Nbr_DefineSystem ;  /* Attention: init for Dt[] */
    Current.DofData_P0 = DofData_P0 ;
    
    Treatment_PostOperation(Resolution_P, DofData_P0, DefineSystem_P0, GeoData_P0,
                            PostOperation_P) ;

    Msg(RESOURCES, "");
    Msg(DIRECT, "E n d   P o s t - P r o c e s s i n g");
  }


  List_Delete(DofData_L) ;
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ R e s o l u t i o n                                 */
/* ------------------------------------------------------------------------ */

void  Treatment_Resolution(int ResolutionIndex,
                           int * Nbr_DefineSystem, int * Nbr_OtherSystem,
                           struct Resolution   ** Resolution_P,
                           struct DefineSystem ** DefineSystem_P0,
                           struct DofData      ** DofData_P0,
                           List_T              ** DofData_L,
			   List_T              *  GeoData_L,
			   struct GeoData      ** GeoData_P0) {

  struct DefineSystem  * DefineSystem_P ;
  struct DofData         DofData_S ;
  int  i ;

  *Resolution_P = (struct Resolution*)List_Pointer(Problem_S.Resolution,
                                                   ResolutionIndex) ;

  Msg(INFO, "Selected Resolution '%s'", (*Resolution_P)->Name) ;
  
  *Nbr_DefineSystem = List_Nbr((*Resolution_P)->DefineSystem) ;
  if (!*Nbr_DefineSystem)
    Msg(ERROR, "No DefineSystem exists for Resolution '%s'",
        (*Resolution_P)->Name) ;
  
  if (*Nbr_OtherSystem)  *Nbr_OtherSystem -= *Nbr_DefineSystem ;

  *DofData_L = List_Create(*Nbr_DefineSystem + *Nbr_OtherSystem, 6,
                           sizeof(struct DofData)) ;

  *DefineSystem_P0 = (struct DefineSystem*)
    List_Pointer((*Resolution_P)->DefineSystem, 0) ;

  DofData_S.NbrPart = 1;

  for (i = 0 ; i < *Nbr_DefineSystem ; i++) {
    DefineSystem_P = *DefineSystem_P0 + i ;
    Dof_InitDofData(&DofData_S, i, ResolutionIndex, i,
		    DefineSystem_P->SolverDataFileName) ;
    DofData_S.GeoDataIndex =
      Geo_AddGeoData(GeoData_L, DefineSystem_P->MeshName, Name_MshFile) ;
    Init_HarInDofData(DefineSystem_P, &DofData_S) ;
    List_Add(*DofData_L, &DofData_S) ;
  }

  for (i = 0 ; i < *Nbr_OtherSystem ; i++) {
    Dof_InitDofData(&DofData_S, i + *Nbr_DefineSystem, -1, -1, NULL) ;
    List_Add(*DofData_L, &DofData_S) ;
  }
  
  *DofData_P0 = (struct DofData*)List_Pointer(*DofData_L, 0) ;
  *GeoData_P0 = (struct GeoData*)List_Pointer(GeoData_L, 0) ;
}


/* ------------------------------------------------------------------------ */
/*  I n i t _ H a r I n D o f D a t a                                       */
/* ------------------------------------------------------------------------ */

void  Init_HarInDofData(struct DefineSystem * DefineSystem_P,
                        struct DofData * DofData_P) {
  int   j ;

  if (DefineSystem_P->Type == VAL_COMPLEX){
    if(!DefineSystem_P->FrequencyValue)
      Dof_AddPulsation(DofData_P,0.0) ;
    else
      for (j = 0 ; j < List_Nbr(DefineSystem_P->FrequencyValue) ; j++)
        Dof_AddPulsation
          (DofData_P,
           *((double *)List_Pointer(DefineSystem_P->FrequencyValue, j)) * TWO_PI) ;
  }

  if (!List_Nbr(DofData_P->Pulsation)){
    DofData_P->NbrHar = 1 ;
  }
  else {
    DofData_P->NbrHar = 2 * List_Nbr(DofData_P->Pulsation) ;
    DofData_P->Val_Pulsation = (double*)List_Pointer(DofData_P->Pulsation, 0) ;
  }

  if (DofData_P->NbrHar > NBR_MAX_HARMONIC)
    Msg(ERROR, "Too many harmonics to generate system (%d > %d)", 
        DofData_P->NbrHar, NBR_MAX_HARMONIC) ; 

  if (DofData_P->NbrHar > 1) {
    for (j = 0 ; j < DofData_P->NbrHar/2 ; j++)
      Msg(INFO, "System '%s' : Complex, Frequency = %.8g Hz",
	  DefineSystem_P->Name, DofData_P->Val_Pulsation[j]/TWO_PI) ;
  }
  else{
    Msg(INFO, "System '%s' : Real", DefineSystem_P->Name) ;
  }

}


/* ------------------------------------------------------------------------ */
/*  I n i t _ P a r t I n D o f D a t a                                     */
/* ------------------------------------------------------------------------ */

void  Init_PartInDofData(struct DofData * DofData_P, int NbrPart) {
  int i ;

  if(!DofData_P->Nnz)
    DofData_P->Nnz = (int*)Malloc(DofData_P->NbrDof * sizeof(int)) ;

  for(i = 0 ; i < DofData_P->NbrDof ; i++)
    DofData_P->Nnz[i] = 30;

  DofData_P->NbrPart = 1;
  DofData_P->Part[0] = 1;
  DofData_P->Part[1] = DofData_P->NbrDof+1;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ T i m e F u n c t i o n V a l u e s                             */
/* ------------------------------------------------------------------------ */

double  * Get_TimeFunctionValues(struct DofData * DofData_P) {

  int     Nbr_Expression, Nbr_TimeFunction, i, Index ;
  double  * Values ;
  struct Value  Val_Expression ;

  Nbr_Expression = List_Nbr(Problem_S.Expression) ;
  Values = (double *)Malloc((Nbr_Expression + 1) * sizeof(double)) ;

  Nbr_TimeFunction = List_Nbr(DofData_P->TimeFunctionIndex) ;

  for (i = 0 ; i < Nbr_TimeFunction ; i++) {
    List_Read(DofData_P->TimeFunctionIndex, i, &Index) ;
    if ((DofData_P->NbrHar == 1) && (Index > 0)) {
      Get_ValueOfExpressionByIndex(Index - 1,
				   NULL, 0., 0., 0., &Val_Expression) ;
      Values[Index] = Val_Expression.Val[0] ;
    }
    else
      Values[Index] = 1. ;
  }

  return  Values ;
}


/* ------------------------------------------------------------------------ */
/*  I n i t _ D o f D a t a I n D e f i n e Q u a n t i t y                 */
/* ------------------------------------------------------------------------ */

void  Init_DofDataInDefineQuantity(struct DefineSystem *DefineSystem_P,
                                   struct DofData      *DofData_P0,
                                   struct Formulation  *Formulation_P) {
  struct DefineQuantity  *DefineQuantity_P;
  int i, j ;

  for(i = 0 ; i < List_Nbr(Formulation_P->DefineQuantity) ; i++){
    DefineQuantity_P = (struct DefineQuantity *)
      List_Pointer(Formulation_P->DefineQuantity, i);
    
    if(DefineQuantity_P->DofDataIndex >= 0){      
      if(DefineQuantity_P->DofDataIndex >= List_Nbr(DefineSystem_P->OriginSystemIndex))
        Msg(ERROR, "Invalid IndexOfSystem (%d) in DefineQuantity (%s)",
            DefineQuantity_P->DofDataIndex, DefineQuantity_P->Name);

      List_Read(DefineSystem_P->OriginSystemIndex,DefineQuantity_P->DofDataIndex,&j) ;
      DefineQuantity_P->DofData = DofData_P0 + j ;
    }

  }
}


/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ P r e p r o c e s s i n g                           */
/* ------------------------------------------------------------------------ */

void Treatment_Preprocessing(int Nbr_DefineSystem,
                             struct DofData        * DofData_P0,
                             struct DefineSystem   * DefineSystem_P0,
			     struct GeoData        * GeoData_P0) {

  struct DefineSystem   * DefineSystem_P ;
  struct DofData        * DofData_P ;
  struct Formulation    * Formulation_P ;

  int i, k,  Nbr_Formulation, Index_Formulation;

  for (i = 0 ; i < Nbr_DefineSystem ; i++) {
    DefineSystem_P = DefineSystem_P0 + i ;
    DofData_P = DofData_P0 + i ;
    Dof_SetCurrentDofData(Current.DofData = DofData_P) ;
    
    Geo_SetCurrentGeoData(Current.GeoData = 
			  GeoData_P0 + DofData_P->GeoDataIndex) ;
    
    Current.NbrHar = Current.DofData->NbrHar ;
    
    Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

    for (k = 0 ; k < Nbr_Formulation ; k++) {
      List_Read(DefineSystem_P->FormulationIndex, k, &Index_Formulation) ;
      Formulation_P = (struct Formulation*)
        List_Pointer(Problem_S.Formulation, Index_Formulation) ;
      Msg(OPERATION, "Treatment Formulation '%s'", Formulation_P->Name) ;

      Init_DofDataInDefineQuantity(DefineSystem_P,DofData_P0,Formulation_P);
      Treatment_Formulation(Formulation_P) ;
    }
  }
  
}


/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ P o s t O p e r a t i o n                           */
/* ------------------------------------------------------------------------ */

void  Treatment_PostOperation(struct Resolution     * Resolution_P,
			      struct DofData        * DofData_P0,
			      struct DefineSystem   * DefineSystem_P0,
			      struct GeoData        * GeoData_P0,
			      struct PostOperation  * PostOperation_P) {

  struct PostSubOperation  * PostSubOperation_P ;
  struct Formulation       * Formulation_P ;
  struct DefineSystem      * DefineSystem_P ;
  struct FunctionSpace     * FunctionSpace_P ;

  int    Nbr_PostSubOperation, i_POP, i ;


  if (!List_Nbr(PostProcessing_S.PostQuantity))
    Msg(ERROR, "No Quantity available for PostProcessing '%s'",
	PostProcessing_S.Name) ;

  Formulation_P = (struct Formulation *)
    List_Pointer(Problem_S.Formulation, PostProcessing_S.FormulationIndex) ;

  if (!List_Nbr(Formulation_P->DefineQuantity))
    Msg(ERROR, "No DefineQuantity exists for Formulation '%s'",
	Formulation_P->Name);

  /* Choice of Current DofData */

  if(PostProcessing_S.NameOfSystem){
    if ((i = List_ISearchSeq(Resolution_P->DefineSystem, 
			     PostProcessing_S.NameOfSystem,
			     fcmp_DefineSystem_Name)) < 0)
      Msg(ERROR, "Unknown NameOfSystem (%s) in PostProcessing (%s)", 
	  PostProcessing_S.NameOfSystem, PostProcessing_S.Name) ;
    
    Current.DofData = DofData_P0 + i;

    /* (Re)creation des liens entre FunctionSpace et DofData:
       seuls les FS n'intervenant pas dans le DD courant peuvent
       pointer vers un autre DD */
    
    for (i = 0 ; i < List_Nbr(Current.DofData->FunctionSpaceIndex) ; i++) {
      FunctionSpace_P = (struct FunctionSpace *)
	List_Pointer(Problem_S.FunctionSpace,
		     *((int *)List_Pointer(Current.DofData->FunctionSpaceIndex, i))) ;
      FunctionSpace_P->DofData = FunctionSpace_P->MainDofData = Current.DofData ;
    }

  }
  else{
    for(i = 0 ; i < List_Nbr(Formulation_P->DefineQuantity) ; i++){
      Current.DofData = 
	((struct FunctionSpace *)
	 List_Pointer(Problem_S.FunctionSpace,
		      ((struct DefineQuantity *)
		       List_Pointer(Formulation_P->DefineQuantity, i))
		      ->FunctionSpaceIndex)) ->DofData ;
      if(Current.DofData) break;
    }
  }

  if(!Current.DofData)
    Msg(ERROR, "Incompatible PostProcessing with Resolution");

  DefineSystem_P = DefineSystem_P0 + Current.DofData->Num ;
  Current.NbrHar = Current.DofData->NbrHar ;

  Geo_SetCurrentGeoData(Current.GeoData = 
			GeoData_P0 + Current.DofData->GeoDataIndex) ;

  Msg(INFO, "Selected PostProcessing '%s' (System '%s', Mesh '%s')",
      PostProcessing_S.Name, DefineSystem_P->Name, 
      Current.GeoData->Name);

  Init_DofDataInDefineQuantity(DefineSystem_P,DofData_P0,Formulation_P);
  
  if(Flag_IPOS){

    Pos_Interactive(Formulation_P);

  }
  else{

    Nbr_PostSubOperation = List_Nbr(PostOperation_P->PostSubOperation) ;
    for (i_POP = 0 ; i_POP < Nbr_PostSubOperation ; i_POP++) {      
      Msg(OPERATION, "PostOperation %d/%d ", i_POP+1, Nbr_PostSubOperation) ;      
      PostSubOperation_P = (struct PostSubOperation*)
	List_Pointer(PostOperation_P->PostSubOperation, i_POP) ;
      Pos_Formulation(Formulation_P, PostSubOperation_P) ;
    }

  }

}
