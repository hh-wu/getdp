/* $Id: SolvingOperations.c,v 1.11 2000-10-06 15:24:54 geuzaine Exp $ */
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
#include "Magic.h"

int  fcmp_DefineSystem_Name(const void * a, const void * b) ;

void  Cal_SolutionError(gVector * dx, gVector * x, int diff, double * MeanError) ;
void  Cal_SolutionErrorX(int Nbr, double * dx, double * x, double * MeanError) ;

static int  Flag_IterativeLoop = 0 ;  /* Attention: phase de test */
static int  Flag_NextThetaFixed = 0 ;  /* Attention: phase de test */

static int  Init_Update = 0 ; /* provisoire */

void Lanczos (struct DofData * DofData_P, int LanSize, List_T *LanSave, double shift) ;

/*
static FILE * FilePWM ;
*/

/* ------------------------------------------------------------------------ */
/*  I n i t _ O p e r a t i o n O n S y s t e m                             */
/* ------------------------------------------------------------------------ */

void  Init_OperationOnSystem(struct Resolution   * Resolution_P,
			     struct Operation    * Operation_P ,
			     struct DofData      * DofData_P0,
			     struct GeoData      * GeoData_P0,
			     struct DefineSystem ** DefineSystem_P,
			     struct DofData      ** DofData_P,  
			     int Flag_Jac,
			     struct Resolution   * Resolution2_P) {

  int i ;

  *DefineSystem_P = (struct DefineSystem*)
    List_Pointer(Resolution_P->DefineSystem,Operation_P->DefineSystemIndex) ;
  *DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;
  Dof_SetCurrentDofData(Current.DofData = *DofData_P) ;
  Current.NbrHar = Current.DofData->NbrHar ;

  Geo_SetCurrentGeoData(Current.GeoData = GeoData_P0 + (*DofData_P)->GeoDataIndex) ;

  if((*DefineSystem_P)->DestinationSystemName && 
     (*DefineSystem_P)->DestinationSystemIndex == -1){

    if(Resolution2_P){ /* pre-resolution */
      if ((i = List_ISearchSeq(Resolution2_P->DefineSystem, 
			       (*DefineSystem_P)->DestinationSystemName,
			       fcmp_DefineSystem_Name)) < 0)
	Msg(ERROR, "Unknown DestinationSystem (%s) in DefineSystem (%s)", 
	    (*DefineSystem_P)->DestinationSystemName, (*DefineSystem_P)->Name) ;
      (*DefineSystem_P)->DestinationSystemIndex = i ;      
      Dof_DefineSymmetricalDofFromSolveOrInitDof(DofData_P) ;
    }
    else { /* a changer !!! */
      if ((i = List_ISearchSeq(Resolution_P->DefineSystem, 
			       (*DefineSystem_P)->DestinationSystemName,
			       fcmp_DefineSystem_Name)) < 0)
	Msg(ERROR, "Unknown DestinationSystem (%s) in DefineSystem (%s)", 
	    (*DefineSystem_P)->DestinationSystemName, (*DefineSystem_P)->Name) ;
      (*DefineSystem_P)->DestinationSystemIndex = i ;      
    }
  }

  Msg(OPERATION, "%s '%s'",
      Get_StringForDefine(Operation_Type, Operation_P->Type),
      (*DefineSystem_P)->Name) ;
}


/* ------------------------------------------------------------------------ */
/*  I n i t _ S y s t e m D a t a                                           */
/* ------------------------------------------------------------------------ */

int fcmp_Dof(const void * a, const void * b) ;


void  Init_SystemData(struct DofData * DofData_P, int Flag_Jac) {

  if (!DofData_P->Flag_Init[0]) {
    DofData_P->Flag_Init[0] = 1 ;
    gCreateSolver(&DofData_P->Solver, DofData_P->SolverDataFileName) ;
    gCreateMatrix(&DofData_P->A, &DofData_P->Solver, DofData_P->NbrDof, DofData_P->NbrDof,
		  DofData_P->NbrPart, DofData_P->Part, DofData_P->Nnz) ;
    gCreateVector(&DofData_P->b, &DofData_P->Solver, DofData_P->NbrDof,
		  DofData_P->NbrPart, DofData_P->Part) ;
    if (Flag_Jac) {
      gCreateMatrix(&DofData_P->Jac, &DofData_P->Solver, DofData_P->NbrDof, DofData_P->NbrDof,
		    DofData_P->NbrPart, DofData_P->Part, DofData_P->Nnz) ;
      gCreateVector(&DofData_P->res, &DofData_P->Solver, DofData_P->NbrDof,
		    DofData_P->NbrPart, DofData_P->Part) ;
      gCreateVector(&DofData_P->dx, &DofData_P->Solver, DofData_P->NbrDof,
		    DofData_P->NbrPart, DofData_P->Part) ;
    }
  }
}



/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ O p e r a t i o n                                   */
/* ------------------------------------------------------------------------ */

void  Treatment_Operation(struct Resolution  * Resolution_P,
                          List_T             * Operation_L, 
                          struct DofData     * DofData_P0,
                          struct GeoData     * GeoData_P0,
                          struct Resolution  * Resolution2_P,
                          struct DofData     * DofData2_P0) {

  int     i, j, k, l;
  double  d, d2 ;
  int     Nbr_Operation, i_Operation;
  int     Num_Iteration ;
  int     Flag_Jac, Flag_CPU, Flag_Binary=0 ;
  double  MeanError, RelFactor_Modified ;
  int     Save_TypeTime ;
  double  Save_DTime ;
  char    ResName[MAX_FILE_NAME_LENGTH], ResNum[MAX_STRING_LENGTH] ;
  gScalar tmp ;

  struct Operation     * Operation_P ;
  struct DefineSystem  * DefineSystem_P ;
  struct DofData       * DofData_P, * DofData2_P ;
  struct Solution      * Solution_P, Solution_S ;
  struct Dof           Dof, * Dof_P ;
  struct Value         Value ;

  static int RES0 = -1 ;

  Nbr_Operation = List_Nbr(Operation_L) ;

  for (i_Operation = 0 ; i_Operation < Nbr_Operation ; i_Operation++) {
    Operation_P = (struct Operation*)List_Pointer(Operation_L, i_Operation) ;

    Flag_CPU = 0 ;  Flag_Jac = 0 ;

    switch (Operation_P->Type) {

    /*  -->  S o l v e                              */
    /*  ------------------------------------------  */

    case OPERATION_SYSTEMCOMMAND :
      system(Operation_P->Case.SystemCommand);
      break ;

    /*  -->  G e n e r a t e                        */
    /*  ------------------------------------------  */

    case OPERATION_GENERATEJAC :  Flag_Jac  = 1 ;
    case OPERATION_GENERATE :
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Current.TypeAssembly = ASSEMBLY_AGGREGATE ;
      Init_SystemData(DofData_P, Flag_Jac) ;
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 0) ;
      Flag_CPU = 1 ;
      break ;

    /*  -->  G e n e r a t e S e p a r a t e        */
    /*  ------------------------------------------  */

    case OPERATION_GENERATESEPARATE :
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Current.TypeAssembly = ASSEMBLY_SEPARATE ;

      Init_Update = 0 ; /* modif... ! */
      DofData_P->Flag_Init[1] = 0 ;
      DofData_P->Flag_Init[2] = 0 ;
      DofData_P->Flag_Init[3] = 0 ;

      Init_SystemData(DofData_P, Flag_Jac) ;
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 1) ;
      Flag_CPU = 1 ;
      break ;

    /*  -->  U p d a t e                            */
    /*  ------------------------------------------  */

    case OPERATION_UPDATE :
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Update_System(DefineSystem_P, DofData_P, DofData_P0, 
		    Operation_P->Case.Update.ExpressionIndex) ;
      Flag_CPU = 1 ;
      break ;

    /*  -->  S o l v e                              */
    /*  ------------------------------------------  */

    case OPERATION_SOLVE :
      /*  Solve : A x = b  */
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      gSolve(&DofData_P->A, &DofData_P->b, &DofData_P->Solver,
	     &DofData_P->CurrentSolution->x) ;
      Flag_CPU = 1 ;
      break ;

    /*  -->  Lanczos                                */
    /*  ------------------------------------------  */

    case OPERATION_LANCZOS :
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Lanczos(DofData_P, Operation_P->Case.Lanczos.Size, 
	      Operation_P->Case.Lanczos.Save, Operation_P->Case.Lanczos.Shift) ;
      Flag_CPU = 1 ;
      break ;

    /*  -->  S o l v e J a c                        */
    /*  ------------------------------------------  */

    case OPERATION_SOLVEJAC :
      /*  SolveJac : J(xn) dx = b(xn) - A(xn) xn ;  x = xn + dx  */
      Flag_Jac = 1 ;
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      gAddMatrixMatrix(&DofData_P->Jac, &DofData_P->A, &DofData_P->Jac) ;
      gProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
      gSubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;
      gSolve(&DofData_P->Jac, &DofData_P->res, &DofData_P->Solver, &DofData_P->dx) ;

      Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0, &MeanError) ;
      Msg(BIGINFO, "Mean Error: %.3e", MeanError) ;

      Current.RelativeDifference += MeanError ;

      if (!Flag_IterativeLoop) {
        gProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor, &DofData_P->dx) ;
      }
      else {  /* Attention: phase test ... Technique bricolee ... provisoire */
        if (Current.Iteration == 1. || MeanError < Current.RelativeDifferenceOld)
          gProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor, &DofData_P->dx) ;
        else {
          RelFactor_Modified = Current.RelaxationFactor /
            (MeanError / Current.RelativeDifferenceOld) ;
          Msg(INFO, "RelFactor Modified = %g", RelFactor_Modified) ;
          gProdVectorDouble(&DofData_P->dx, RelFactor_Modified, &DofData_P->dx) ;
          Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0, &MeanError) ;
          Msg(BIGINFO, "Mean Error: %.3e", MeanError) ;
        }
      }

      gAddVectorVector(&DofData_P->CurrentSolution->x, &DofData_P->dx, 
		       &DofData_P->CurrentSolution->x) ;

      Flag_CPU = 1 ;
      break ;

    /*  -->  I n i t S o l u t i o n                */
    /*  ------------------------------------------  */

    case OPERATION_INITSOLUTION :

      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      if(Flag_RESTART){
        if (!DofData_P->Solutions)
          Msg(ERROR, "No Solution to Restart the Computation");

        for(i=0 ; i<DofData_P->NbrAnyDof ; i++){
          Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i) ;
          if(Dof_P->Type == DOF_SYMMETRICAL_INIT) Dof_P->Type = DOF_SYMMETRICAL ;
        }
        DofData_P->CurrentSolution = (struct Solution*)
          List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;        
        DofData_P->CurrentSolution->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
      }
      else{
        if (!DofData_P->Solutions)
          DofData_P->Solutions = List_Create( 20, 20, sizeof(struct Solution)) ;
        
	Solution_S.TimeStep = (int)Current.TimeStep ;
        Solution_S.Time = Current.Time ;
        Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;

        gCreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
		      DofData_P->NbrPart, DofData_P->Part) ;

	if (List_Nbr(DofData_P->Solutions)) {
	  gCopyVector(&((struct Solution *)
			List_Pointer(DofData_P->Solutions,
				     List_Nbr(DofData_P->Solutions)-1))->x,
		      &Solution_S.x) ;
	}
	else {
	  gZeroVector(&Solution_S.x) ;
	}

	for(i=0 ; i<DofData_P->NbrAnyDof ; i++){
	  Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i) ;
	  if(Dof_P->Type == DOF_SYMMETRICAL_INIT){
	    Dof_P->Type = DOF_SYMMETRICAL ;
	    gSetScalarInVector
	      (&Dof_P->Val, &Solution_S.x, 
	       Dof_P->Case.Symmetrical.NumDof-1) ;
	  }
	}
	
	List_Add(DofData_P->Solutions, &Solution_S) ;

	DofData_P->CurrentSolution = (struct Solution*)
	  List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
      }
      break ;

    /*  -->  S a v e S o l u t i o n                */
    /*  ------------------------------------------  */

    case OPERATION_SAVESOLUTION :
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      strcpy(ResName, Name_Generic) ;
      if(!Flag_SPLIT){
	strcat(ResName, ".res") ;
	if(RES0 < 0){
	  Dof_WriteFileRES0(ResName, Flag_BIN) ;
	  RES0 = 1 ;
	}
      }
      else{
	strcat(ResName, "-") ;
	sprintf(ResNum, "%d.res", (int)Current.TimeStep) ;
	for(i = 0 ; i < 5+4-(int)strlen(ResNum) ; i++) strcat(ResName, "0") ;
	strcat(ResName, ResNum) ;
	if(RES0 != (int)Current.TimeStep){
	  Dof_WriteFileRES0(ResName, Flag_BIN) ;
	  RES0 = (int)Current.TimeStep ;
	}
      }
      Dof_WriteFileRES(ResName, DofData_P, Flag_BIN, Current.Time, (int)Current.TimeStep) ;
      break ;

    /*  -->  S a v e S o l u t i o n s              */
    /*  ------------------------------------------  */

    case OPERATION_SAVESOLUTIONS :
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      strcpy(ResName, Name_Generic) ;
      strcat(ResName, ".res") ;
      Dof_WriteFileRES0(ResName, Flag_BIN) ;
      for(i=0 ; i<List_Nbr(DofData_P->Solutions) ; i++){
	DofData_P->CurrentSolution = (struct Solution*)
	  List_Pointer(DofData_P->Solutions, i) ;
	Dof_WriteFileRES(ResName, DofData_P, Flag_BIN, 
			 DofData_P->CurrentSolution->Time, i) ;
      }
      break ;

    /*  -->  R e a d S o l u t i o n                */
    /*  ------------------------------------------  */

    case OPERATION_READSOLUTION :
      Msg(ERROR, "ReadSolution is not currently  available") ;
      /*
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      if(!Name_ResFile)
	Msg(ERROR, "No Result File loaded for ReadSolution '%s'", DefineSystem_P->Name);

      Dof_OpenFile(DOF_TMP, Name_ResFile, "r+");
      Dof_ReadFileRES(NULL, DofData_P, DofData_P->Num, &Current.Time, &Current.TimeStep) ;
      Dof_CloseFile(DOF_TMP) ;

      if(!List_Nbr(DofData_P->Solutions))
	Msg(ERROR, "No Valid Data in '%s' for ReadSolution '%s'",
	    Name_ResFile, DefineSystem_P->Name);
	
      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;	
      DofData_P->CurrentSolution->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
      */
      break ;

    /*  -->  T r a n s f e r S o l u t i o n        */
    /*  ------------------------------------------  */

    case OPERATION_TRANSFERSOLUTION :
      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      
      if(Resolution2_P){ /* pre-resolution */
	DofData2_P = DofData2_P0 + DefineSystem_P->DestinationSystemIndex ;
	Dof_TransferDof(DofData_P, &DofData2_P);
      }
      else{ 
	/* a changer!!! Il faut se mettre d'accord sur ce que doit faire 
	   Dof_TransferDof. Ceci sert a transferer la derniere solution d'un 
	   DofData dans un autre (ds la meme resolution), base sur le meme 
	   espace fonctionnel. */
	DofData2_P = DofData_P0 + DefineSystem_P->DestinationSystemIndex ;
	
	if(DofData_P->NbrAnyDof != DofData2_P->NbrAnyDof)
	  Msg(ERROR, "Dimensions do not match for TransferSolution");

	Solution_S.TimeStep = (int)Current.TimeStep ;
	Solution_S.Time = Current.Time ;
	Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData2_P) ;
        gCreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof,
		      DofData2_P->NbrPart, DofData2_P->Part) ;
	gZeroVector(&Solution_S.x) ;

	if (List_Nbr(DofData_P->Solutions)) {
	  
	  Solution_P = (struct Solution *)List_Pointer(DofData_P->Solutions,
						       List_Nbr(DofData_P->Solutions)-1) ;
	  for(i=0 ; i<DofData_P->NbrAnyDof ; i++){
	    Dof = *(struct Dof *)List_Pointer(DofData_P->DofList, i) ;
	    if(Dof.Type == DOF_SYMMETRICAL){
	      gGetScalarInVector(&tmp, &Solution_P->x, Dof.Case.Symmetrical.NumDof-1) ;    

	      if((Dof_P = (struct Dof*)List_PQuery(DofData2_P->DofList, &Dof, fcmp_Dof))){
		gSetScalarInVector(&tmp, &Solution_S.x, Dof_P->Case.Symmetrical.NumDof-1) ;
		Dof_P->Type = DOF_SYMMETRICAL ;
	      }
	      else{
		Msg(WARNING, "Unknown DoF in TransferSolution") ;
	      }
	    }
	    else{
	      Msg(WARNING, "Trying to transfer a non symmetrical DoF");
	    }
	  }

	  if (!DofData2_P->Solutions)
	    DofData2_P->Solutions = List_Create( 20, 20, sizeof(struct Solution)) ;

	  List_Add(DofData2_P->Solutions, &Solution_S) ;      
	  DofData2_P->CurrentSolution = (struct Solution*)
	    List_Pointer(DofData2_P->Solutions, List_Nbr(DofData2_P->Solutions)-1) ;
	}
      }
      break ;

    /*  -->  S e t T i m e                          */
    /*  ------------------------------------------  */

    case OPERATION_SETTIME :
      Get_ValueOfExpressionByIndex(Operation_P->Case.SetTimeIndex,
				   NULL, 0., 0., 0., &Value) ;
      Current.Time = Value.Val[0] ;
      break ;

    /*  -->  S e t F r e q u e n c y                */
    /*  ------------------------------------------  */

    case OPERATION_SETFREQUENCY :
      DefineSystem_P = (struct DefineSystem*)
	List_Pointer(Resolution_P->DefineSystem,
		     Operation_P->DefineSystemIndex) ;
      DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;

      if (DefineSystem_P->Type == VAL_COMPLEX){
	List_Reset(DefineSystem_P->FrequencyValue);
	/* Provisoire: une seule frequence */
	Get_ValueOfExpressionByIndex(Operation_P->Case.SetFrequency.ExpressionIndex,
				     NULL, 0., 0., 0., &Value) ;
      	List_Add(DefineSystem_P->FrequencyValue, &Value.Val[0]);
	if (DofData_P->Pulsation == NULL)
	  DofData_P->Pulsation = List_Create(1, 2, sizeof(double)) ;
	List_Reset(DofData_P->Pulsation);
	Init_HarInDofData(DefineSystem_P, DofData_P) ;
      }
      else
	Msg(ERROR, "Invalid 'SetFrequency' for real system '%s'", DefineSystem_P->Name) ;
      break;

    /*  -->  T i m e L o o p T h e t a              */
    /*  ------------------------------------------  */

    case OPERATION_TIMELOOPTHETA :
      /* debug */
      /*
      FilePWM = fopen("PWM", "w+") ;
      */
      Msg(OPERATION, "TimeLoopTheta ...") ;

      Save_TypeTime  = Current.TypeTime ;
      Save_DTime     = Current.DTime ;  
      Flag_NextThetaFixed = 0 ; /* Attention: Test */

      Current.TypeTime = TIME_THETA ;
      if(Flag_RESTART) {
	if (Current.Time < Operation_P->Case.TimeLoopTheta.TimeMax * 0.999999)
	  Flag_RESTART = 0 ;
      }
      else
	Current.Time = Operation_P->Case.TimeLoopTheta.Time0 ;

      while (Current.Time < Operation_P->Case.TimeLoopTheta.TimeMax * 0.999999) {

	if (!Flag_NextThetaFixed) { /* Attention: Test */
	  Get_ValueOfExpressionByIndex(Operation_P->Case.TimeLoopTheta.ThetaIndex,
				       NULL, 0., 0., 0., &Value) ;
	  Current.Theta = Value.Val[0] ;
	}
	if (Flag_NextThetaFixed != 2) { /* Attention: Test */
	  Get_ValueOfExpressionByIndex(Operation_P->Case.TimeLoopTheta.DTimeIndex,
				       NULL, 0., 0., 0., &Value) ;
	  Current.DTime = Value.Val[0] ;
	}
	Flag_NextThetaFixed = 0 ;

	Current.Time += Current.DTime ;
	Current.TimeStep += 1. ;

	Msg(BIGINFO, "Theta Time = %.8g s (TimeStep %d)", Current.Time, 
	    (int)Current.TimeStep) ;

	Treatment_Operation(Resolution_P, Operation_P->Case.TimeLoopTheta.Operation, 
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	if(!Flag_POS){
	  if(List_Nbr(Current.DofData->Solutions) > 2){
	    Solution_P = (struct Solution*)
	      List_Pointer(Current.DofData->Solutions, 
			   List_Nbr(Current.DofData->Solutions)-2);
	    gDestroyVector(&Solution_P->x);
	    Free(Solution_P->TimeFunctionValues) ;
	  }
	}

      }

      Current.TypeTime = Save_TypeTime ;
      Current.DTime = Save_DTime ;  
      break ;

    /*  -->  T i m e L o o p N e w m a r k          */
    /*  ------------------------------------------  */

    case OPERATION_TIMELOOPNEWMARK :

      /* Bricolage: 2 premiere solutions initialisees de maniere identique par Init
	 -> derivee initiale nulle */
      List_Read(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1, &Solution_S) ;
      List_Add(DofData_P->Solutions, &Solution_S) ;      
      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;

      if(List_Nbr(Current.DofData->Solutions) < 2)
	Msg(ERROR, "Not enough initial solutions for TimeLoopNewmark");

      Msg(OPERATION, "TimeLoopNewmark ...") ;

      Save_TypeTime = Current.TypeTime ;
      Save_DTime    = Current.DTime ;  

      Current.Beta = Operation_P->Case.TimeLoopNewmark.Beta ;
      Current.Gamma = Operation_P->Case.TimeLoopNewmark.Gamma ;
      Current.TypeTime = TIME_NEWMARK ;
      if(Flag_RESTART){
	if (Current.Time < Operation_P->Case.TimeLoopNewmark.TimeMax * 0.999999)
	  Flag_RESTART = 0 ;
      }
      else
	Current.Time = Operation_P->Case.TimeLoopNewmark.Time0 ;

      while (Current.Time < Operation_P->Case.TimeLoopNewmark.TimeMax * 0.999999) {

	Get_ValueOfExpressionByIndex(Operation_P->Case.TimeLoopNewmark.DTimeIndex,
				     NULL, 0., 0., 0., &Value) ;
        Current.DTime = Value.Val[0] ;	
	Current.Time += Current.DTime ;
	Current.TimeStep += 1. ;

	Msg(BIGINFO, "Newmark Time = %.8g s (TimeStep %d)", Current.Time, 
	    (int)Current.TimeStep) ;

	Treatment_Operation(Resolution_P, Operation_P->Case.TimeLoopNewmark.Operation, 
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	if(!Flag_POS){
	  if(List_Nbr(Current.DofData->Solutions) > 3){
	    Solution_P = (struct Solution*)
	      List_Pointer(Current.DofData->Solutions, 
			   List_Nbr(Current.DofData->Solutions)-3);
	    gDestroyVector(&Solution_P->x);
	    Free(Solution_P->TimeFunctionValues) ;
	  }
	}

      }

      Current.TypeTime = Save_TypeTime ;
      Current.DTime = Save_DTime ;  
      break ;

    /*  -->  I t e r a t i v e L o o p              */
    /*  ------------------------------------------  */

    case OPERATION_ITERATIVELOOP :
      Msg(OPERATION, "IterativeLoop ...") ;

      for (Num_Iteration = 1 ;
	   Num_Iteration <= Operation_P->Case.IterativeLoop.NbrMaxIteration ;
	   Num_Iteration++) {
  
	Current.Iteration = (double)Num_Iteration ;
	Current.RelativeDifference = 0. ;

	Get_ValueOfExpressionByIndex
	  (Operation_P->Case.IterativeLoop.RelaxationFactorIndex,
	   NULL, 0., 0., 0., &Value) ;
	Current.RelaxationFactor = Value.Val[0] ;

	Flag_IterativeLoop = Operation_P->Case.IterativeLoop.Flag ; /* Attention: Test */

	Msg(BIGINFO, "Non Linear Iteration %d (Relaxation = %g)", (int)Current.Iteration,
	    Current.RelaxationFactor) ;
	
	Treatment_Operation(Resolution_P, Operation_P->Case.IterativeLoop.Operation, 
			    DofData_P0, GeoData_P0, NULL, NULL) ;
	if (Current.RelativeDifference <= Operation_P->Case.IterativeLoop.Criterion)
	  break ;
	Current.RelativeDifferenceOld = Current.RelativeDifference ; /* Attention: pt */
      }
      if (Num_Iteration > Operation_P->Case.IterativeLoop.NbrMaxIteration)
	Num_Iteration = Operation_P->Case.IterativeLoop.NbrMaxIteration ;
      Msg(BIGINFO, "Mean Error = %.3e after %d Iterations",
	  Current.RelativeDifference, Num_Iteration) ;
      break ;

    /*  -->  I t e r a t i v e T i m e R e d u c t i o n  */
    /*  ------------------------------------------------  */

    case OPERATION_ITERATIVETIMEREDUCTION :
      Msg(OPERATION, "IterativeTimeReduction ...") ;

      Operation_IterativeTimeReduction
	(Resolution_P, Operation_P, DofData_P0, GeoData_P0) ;
      break ;

    /*  -->  T e s t                                */
    /*  ------------------------------------------  */

    case OPERATION_TEST :
      Msg(OPERATION, "Test") ;
      Get_ValueOfExpressionByIndex(Operation_P->Case.Test.ExpressionIndex,
				   NULL, 0., 0., 0., &Value) ;
      if(Value.Val[0]){
	Treatment_Operation(Resolution_P, Operation_P->Case.Test.Operation_True, 
			    DofData_P0, GeoData_P0, NULL, NULL) ;
      }
      else{
	if(Operation_P->Case.Test.Operation_False)
	  Treatment_Operation(Resolution_P, Operation_P->Case.Test.Operation_False, 
			      DofData_P0, GeoData_P0, NULL, NULL) ;
      }
      break ;

    /*  -->  F o u r i e r T r a n s f o r m        */
    /*  ------------------------------------------  */

    case OPERATION_FOURIERTRANSFORM :
      Msg(OPERATION, "FourierTransform") ;

      DofData_P = DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[0] ;
      DofData2_P = DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[1] ;     
      
      if(!DofData2_P->Solutions){
	if(DofData2_P->NbrDof != gCOMPLEX_INCREMENT * DofData_P->NbrDof)
	  Msg(ERROR, "Uncompatible System Definitions for FourierTransform") ;
	k = List_Nbr(Operation_P->Case.FourierTransform.Frequency) ;
	DofData2_P->Solutions = List_Create(k, 1, sizeof(struct Solution)) ;	
	for(i=0 ; i<k ; i++){
	  List_Read(Operation_P->Case.FourierTransform.Frequency, i, &d) ;
	  Solution_S.TimeStep = i ;
	  Solution_S.Time = TWO_PI * d;
	  gCreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof,
			DofData2_P->NbrPart, DofData2_P->Part) ;
	  gZeroVector(&Solution_S.x) ;
	  List_Add(DofData2_P->Solutions, &Solution_S) ;
	}
	DofData2_P->CurrentSolution =
	  (struct Solution*)List_Pointer(DofData2_P->Solutions, k/2) ;
      }

      for(i=0 ; i<List_Nbr(DofData2_P->Solutions) ; i++){	
	Solution_P = (struct Solution*)List_Pointer(DofData2_P->Solutions, i);
	for(j=0,k=0 ; j<DofData_P->NbrDof ; j++,k+=gCOMPLEX_INCREMENT){
	  d = Solution_P->Time * Current.Time ;
	  gGetDoubleInVector(&d2, &DofData_P->CurrentSolution->x, j);
	  gAddComplexInVector( d2 * cos(d) * Current.DTime, 
			      -d2 * sin(d) * Current.DTime,
			       &Solution_P->x, k, k+1) ;
	}
      }
      break;

    /*  -->  P r i n t / W r i t e                  */
    /*  ------------------------------------------  */

    case OPERATION_WRITE : Flag_Binary = 1 ;  
    case OPERATION_PRINT : 
      if(Operation_P->Case.Print.FileOut){
	if(!(PrintStream = fopen(Operation_P->Case.Print.FileOut, "a")))
	  Msg(ERROR, "Unable to Open File '%s'", Operation_P->Case.Print.FileOut) ;
	Msg(OPERATION, "Print -> '%s'", Operation_P->Case.Print.FileOut) ;
      }
      else{
	PrintStream = stdout ;
	Msg(OPERATION, "Print") ;
      }

      if(Operation_P->Case.Print.Expression){
	for(i=0 ; i<List_Nbr(Operation_P->Case.Print.Expression) ; i++){
	  j = *(int*)List_Pointer(Operation_P->Case.Print.Expression, i) ;
	  Get_ValueOfExpressionByIndex(j, NULL, 0., 0., 0., &Value) ;
	  Print_Value(&Value) ;
	}
	fprintf(PrintStream, "\n") ;
      }
      else if (Operation_P->Case.Print.DofNumber){
	DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;
	for(i=0 ; i<List_Nbr(Operation_P->Case.Print.DofNumber) ; i++){
	  j = *(int*)List_Pointer(Operation_P->Case.Print.DofNumber, i) ;
	  if(j>=0 && j<DofData_P->NbrDof){
	    if(Operation_P->Case.Print.TimeStep)
	      for(k=0 ; k<List_Nbr(Operation_P->Case.Print.TimeStep) ; k++){
		l = *(int*)List_Pointer(Operation_P->Case.Print.TimeStep, k) ;
		if(l>=0 && l<List_Nbr(DofData_P->Solutions)){
		  Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions, l) ;
		  gGetScalarInVector(&tmp, &Solution_P->x, j) ;
		  if(Flag_Binary){
		    gWriteScalar(PrintStream, &tmp) ;
		  }
		  else{
		    gPrintScalar(PrintStream, &tmp) ;
		    fprintf(PrintStream, " ") ;
		  }
		}
	        else Msg(WARNING, "Print of Dof out of TimeStep Range [0,%d]",
			 List_Nbr(DofData_P->Solutions)-1);
	      }
	    else{
	      gGetScalarInVector(&tmp, &DofData_P->CurrentSolution->x, j) ;
	      if(Flag_Binary){
		gWriteScalar(PrintStream, &tmp) ;
	      }
	      else{
		gPrintScalar(PrintStream, &tmp) ;
		fprintf(PrintStream, " ") ;
	      }
	    }
	  }
	  else Msg(WARNING, "Wrong Number of Dof to Print (%d is out of [0,%d])",
		   j, DofData_P->NbrDof-1);
	}
	fprintf(PrintStream, "\n") ;
      }
      else{
	DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;
	if(Flag_Binary){
	  gWriteMatrix(PrintStream, &DofData_P->A) ;
	  gWriteVector(PrintStream, &DofData_P->b) ;
	}
	else{
	  gPrintMatrix(PrintStream, &DofData_P->A) ;
	  fprintf(PrintStream, "\n") ;
	  gPrintVector(PrintStream, &DofData_P->b) ;
	}
      }

      fflush(PrintStream);
      if(Operation_P->Case.Print.FileOut){ 
	fclose(PrintStream);
	PrintStream = stdout ;
      }
      Flag_Binary = 0;
      break;

    /*  --> S c a n / R e a d                       */
    /*  ------------------------------------------  */

    case OPERATION_READ : Flag_Binary = 1;
    case OPERATION_SCAN : 
#if 0
      /* A refaire */

      Init_OperationOnSystem(Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      if (DofData_P->Solutions == NULL) {
	DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution)) ;
	init_solver(&DofData_P->SolverParameter) ;

	binary_read_matrix (&DofData_P->A, DefineSystem_P->Name, ".mat") ;
	binary_read_vector
	  (DofData_P->NbrDof, &DofData_P->b, DefineSystem_P->Name, ".rhs") ;

	Solution_S.TimeStep = (int)Current.TimeStep ;
	Solution_S.Time = Current.Time ;
	Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
	init_vector(DofData_P->NbrDof, &Solution_S.x) ;
	zero_vector(DofData_P->NbrDof,  Solution_S.x) ;
	List_Add(DofData_P->Solutions, &Solution_S) ;
	DofData_P->CurrentSolution = (struct Solution*)
	  List_Pointer(DofData_P->Solutions, 0) ;
      }
      else {
	Msg(ERROR, "Binary read not implemented in this case") ;
      }
      Flag_Binary = 0;
#endif
      break ;

    /*  -->  C h a n g e O f C o o r d i n a t e s  */
    /*  ------------------------------------------  */

    case OPERATION_CHANGEOFCOORDINATES :
      Msg(OPERATION, "ChangeOfCoordinates") ;
      Operation_ChangeOfCoordinates
	(Resolution_P, Operation_P, DofData_P0, GeoData_P0) ;
      break ;



    /*  -->  O t h e r                              */
    /*  ------------------------------------------  */

    default :
      Msg(WARNING, "Operation: ? ? ?") ;
      break ;
    }

    if(Flag_CPU) Msg(RESOURCES, "");
  }

}




/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ S y s t e m                                           */
/* ------------------------------------------------------------------------ */

void  Generate_System(struct DefineSystem * DefineSystem_P,
		      struct DofData * DofData_P, 
		      struct DofData * DofData_P0, 
		      int Flag_Jac, int Flag_Separate) {

  int    i, Nbr_Formulation, Index_Formulation, i_TimeStep ;
  struct Solution        * Solution_P, Solution_S ;
  struct Formulation     * Formulation_P ;
  struct FunctionSpace   * FunctionSpace_P ;

  /* (Re)creation des liens entre FunctionSpace et DofData:
     seuls les FS n'intervenant pas dans le DD courant peuvent
     pointer vers un autre DD */

  for (i = 0 ; i < List_Nbr(DofData_P->FunctionSpaceIndex) ; i++) {
    FunctionSpace_P = (struct FunctionSpace *)
      List_Pointer(Problem_S.FunctionSpace,
		   *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, i))) ;
    FunctionSpace_P->DofData = FunctionSpace_P->MainDofData = DofData_P ;
  }

  if (!DofData_P->Solutions)
    DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution)) ;

  i_TimeStep = (int)Current.TimeStep ;
  
  if (!(Solution_P = (struct Solution*)
	/*
	List_PQuery(DofData_P->Solutions, &Current.Time, fcmp_double))) {
	*/
	List_PQuery(DofData_P->Solutions, &i_TimeStep, fcmp_int))) {

    Solution_S.TimeStep = (int)Current.TimeStep ;
    Solution_S.Time = Current.Time ;
    Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
    gCreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
		  DofData_P->NbrPart, DofData_P->Part) ;
    if (List_Nbr(DofData_P->Solutions)) {
      gCopyVector(&((struct Solution *)
		    List_Pointer(DofData_P->Solutions,
				 List_Nbr(DofData_P->Solutions)-1))->x,
		  &Solution_S.x) ;
    }
    else {
      gZeroVector(&Solution_S.x) ;
    }
    List_Add(DofData_P->Solutions, &Solution_S) ;
    DofData_P->CurrentSolution = (struct Solution*)
      List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
  }
  else if (Solution_P != DofData_P->CurrentSolution) {
    Msg(ERROR, "Incompatible Time") ;
  }
  
  if(Flag_Separate){
    for(i=0 ; i<List_Nbr(DofData_P->TimeFunctionIndex) ; i++)
      if(*(int*)List_Pointer(DofData_P->TimeFunctionIndex, i) > 0)
	Msg(WARNING, "Ignored TimeFunction in Constraint for GenerateSeparate") ;
    for(i=0 ; i<List_Nbr(Problem_S.Expression) ; i++)
      DofData_P->CurrentSolution->TimeFunctionValues[i] = 1. ;
  }
  else{
    gZeroMatrix(&Current.DofData->A) ;
    gZeroVector(&Current.DofData->b) ;
  }

  if(Flag_Jac) 
    gZeroMatrix(&Current.DofData->Jac) ;

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

  for (i = 0 ; i < Nbr_Formulation ; i++) {
    List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation) ;
    Formulation_P = (struct Formulation*)
      List_Pointer(Problem_S.Formulation, Index_Formulation) ;

    Init_DofDataInDefineQuantity(DefineSystem_P,DofData_P0,Formulation_P);
    Treatment_Formulation(Formulation_P) ;
  }

  if(Flag_Separate){
    DofData_P->CurrentSolution->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
    if(DofData_P->Flag_Init[1]){
      gAssembleMatrix(&DofData_P->M1) ;
      gAssembleVector(&DofData_P->m1) ;
    }
    if(DofData_P->Flag_Init[2]){
      gAssembleMatrix(&DofData_P->M2) ;
      gAssembleVector(&DofData_P->m2) ;
    }
    if(DofData_P->Flag_Init[3]){
      gAssembleMatrix(&DofData_P->M3) ;
      gAssembleVector(&DofData_P->m3) ;
    }
  }
  else{
    gAssembleMatrix(&DofData_P->A) ;
    gAssembleVector(&DofData_P->b) ;
    gGetVectorSize(&DofData_P->b, &i) ;
    if(!i) Msg(WARNING, "Generated System is of Dimension Zero");
  }

}


/* ------------------------------------------------------------------------ */
/*  U p d a t e _ S y s t e m                                               */
/* ------------------------------------------------------------------------ */

void Cal_ThetaCoefficients(double *coef){
  coef[0] = 1./Current.DTime ;
  coef[1] = Current.Theta ;
  coef[2] = -1./Current.DTime ;
  coef[3] = 1.-Current.Theta ;
}

void Cal_ThetaMatrix(int *init, double *coef, 
		     gMatrix *M1, gMatrix *M2, gMatrix *A){

  Msg(BIGINFO, "Generate Theta Iteration Matrix (Theta=%g, DTime=%g)",
      Current.Theta, Current.DTime) ;

  gZeroMatrix(A);

  /* A = c0 * M2 + c1 * M1 */
  if(init[2] && coef[0]) gAddMatrixProdMatrixDouble(A, M2, coef[0], A) ;
  if(init[1] && coef[1]) gAddMatrixProdMatrixDouble(A, M1, coef[1], A) ;
}


void Cal_ThetaRHS(int *init, double *coef,
		  gMatrix *M1, gMatrix *M2, gVector *m1, gVector *m2, 
		  gVector *tmp, gVector *b){
  double tfval, val ;

  gZeroVector(b) ;

  /* b = [-c2 * M2 - c3 * M1 ] * x(n-1) */
  if(init[2] && coef[2]){
    gProdMatrixVector(M2, &(Current.DofData->CurrentSolution-1)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[2], b) ;
  }
  if(init[1] && coef[3]){
    gProdMatrixVector(M1, &(Current.DofData->CurrentSolution-1)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[3], b) ;
  }

  /*   + [ c0 * m2 + c1 * m1 ] * TimeFct(n)      */
  tfval = Current.DofData->CurrentSolution->TimeFunctionValues[0] ;
  if(init[2] && (val=coef[0]*tfval)) gAddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[1]*tfval)) gAddVectorProdVectorDouble(b, m1, val, b) ;
  
  /*   + [ c2 * m2 + c3 * m1 ] * TimeFct(n-1)      */
  tfval = (Current.DofData->CurrentSolution-1)->TimeFunctionValues[0] ;
  if(init[2] && (val=coef[2]*tfval)) gAddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[3]*tfval)) gAddVectorProdVectorDouble(b, m1, val, b) ;
}

void Cal_NewmarkCoefficients(double *coef){
  coef[0] = 1./DSQU(Current.DTime) ;
  coef[1] = Current.Gamma/Current.DTime ;
  coef[2] = Current.Beta ;
  coef[3] = -2./DSQU(Current.DTime) ;
  coef[4] = (1.-2.*Current.Gamma)/Current.DTime ;
  coef[5] = 0.5+Current.Gamma-2.*Current.Beta ;
  coef[6] = 1./DSQU(Current.DTime) ;
  coef[7] = (Current.Gamma-1.)/Current.DTime ;
  coef[8] = 0.5-Current.Gamma+Current.Beta ;
}

void Cal_NewmarkMatrix(int *init, double *coef, 
		       gMatrix *M1, gMatrix *M2, gMatrix *M3, gMatrix *A){
  
  Msg(BIGINFO, "Generate Newmark Iteration Matrix (Beta=%g, Gamma=%g, DTime=%g)",
      Current.Beta, Current.Gamma, Current.DTime) ;

  gZeroMatrix(A);

  /* A = c0 * M3 + c1 * M2 + c2 * M3 */
  if(init[3] && coef[0]) gAddMatrixProdMatrixDouble(A, M3, coef[0], A);
  if(init[2] && coef[1]) gAddMatrixProdMatrixDouble(A, M2, coef[1], A) ;
  if(init[1] && coef[2]) gAddMatrixProdMatrixDouble(A, M1, coef[2], A) ;
}


void Cal_NewmarkRHS(int *init, double *coef,
		    gMatrix *M1, gMatrix *M2, gMatrix *M3,  
		    gVector *m1, gVector *m2, gVector *m3, 
		    gVector *tmp, gVector *b){
  double tfval, val ;

  gZeroVector(b) ;

  /* b = [-c3 * M3 - c4 * M2 - c5 * M1] * x(n-1) */
  if(init[3] && coef[3]){
    gProdMatrixVector(M3, &(Current.DofData->CurrentSolution-1)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[3], b) ;
  }
  if(init[2] && coef[4]){
    gProdMatrixVector(M2, &(Current.DofData->CurrentSolution-1)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[4], b) ;
  }
  if(init[1] && coef[5]){
    gProdMatrixVector(M1, &(Current.DofData->CurrentSolution-1)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[5], b) ;
  }

  /*   + [-c6 * M3 - c7 * M2 - c8 * M1] * x(n-2) */
  if(init[3] && coef[6]){
    gProdMatrixVector(M3, &(Current.DofData->CurrentSolution-2)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[6], b) ;
  }
  if(init[2] && coef[7]){
    gProdMatrixVector(M2, &(Current.DofData->CurrentSolution-2)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[7], b) ;
  }
  if(init[1] && coef[8]){
    gProdMatrixVector(M1, &(Current.DofData->CurrentSolution-2)->x, tmp);
    gAddVectorProdVectorDouble(b, tmp, -coef[8], b) ;
  }
  
  /*   + [ c0 * m3 + c1 * m2 + c2 * m1 ] * TimeFct(n)      */
  tfval = Current.DofData->CurrentSolution->TimeFunctionValues[0] ;
  if(init[3] && (val=coef[0]*tfval)) gAddVectorProdVectorDouble(b, m3, val, b) ;
  if(init[2] && (val=coef[1]*tfval)) gAddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[2]*tfval)) gAddVectorProdVectorDouble(b, m1, val, b) ;
  
  /*   + [ c3 * m3 + c4 * m2 + c5 * m1 ] * TimeFct(n-1)      */
  tfval = (Current.DofData->CurrentSolution-1)->TimeFunctionValues[0] ;
  if(init[3] && (val=coef[3]*tfval)) gAddVectorProdVectorDouble(b, m3, val, b) ;
  if(init[2] && (val=coef[4]*tfval)) gAddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[5]*tfval)) gAddVectorProdVectorDouble(b, m1, val, b) ;
  
  /*   + [ c6 * m3 + c7 * m2 + c8 * m1 ] * TimeFct(n-2)    */
  tfval = (Current.DofData->CurrentSolution-2)->TimeFunctionValues[0] ;
  if(init[3] && (val=coef[6]*tfval)) gAddVectorProdVectorDouble(b, m3, val, b) ;
  if(init[2] && (val=coef[7]*tfval)) gAddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[8]*tfval)) gAddVectorProdVectorDouble(b, m1, val, b) ;
  
}


void  Update_System(struct DefineSystem * DefineSystem_P,
		    struct DofData * DofData_P, 
		    struct DofData * DofData_P0,
		    int TimeFunctionIndex){
		    
  int     i, i_TimeStep ;
  struct  Solution  * Solution_P, Solution_S ;
  struct  Value Value ;

  static  gVector TmpVect ;
  static  double coef[9] ;
  static  double Save_Num, Save_DTime, Save_Theta, Save_Beta, Save_Gamma ;

  if (!DofData_P->Solutions)
    Msg(ERROR, "No Initialized Solution Available for Update") ;

  i_TimeStep = (int)Current.TimeStep ;
  if (!(Solution_P = (struct Solution*)
	/*
	List_PQuery(DofData_P->Solutions, &Current.Time, fcmp_double))) {
	*/
	List_PQuery(DofData_P->Solutions, &i_TimeStep, fcmp_int))) {

    Solution_S.TimeStep = (int)Current.TimeStep ;
    Solution_S.Time = Current.Time ;

    Get_ValueOfExpressionByIndex(TimeFunctionIndex, NULL, 0., 0., 0., &Value) ;
    
    Solution_S.TimeFunctionValues = (double *)Malloc(sizeof(double)) ;
    Solution_S.TimeFunctionValues[0] = Value.Val[0] ;
    
    gCreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
		  DofData_P->NbrPart, DofData_P->Part) ;
    gZeroVector(&Solution_S.x) ;
    List_Add(DofData_P->Solutions, &Solution_S) ;
    DofData_P->CurrentSolution = (struct Solution*)
      List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
  }
  else if (Solution_P != DofData_P->CurrentSolution) {
    Msg(ERROR, "Incompatible Time") ;
  }
  
  switch (Current.TypeTime) {
  case TIME_THETA :

    if(!DofData_P->Flag_Init[1] && !DofData_P->Flag_Init[2])
      Msg(ERROR, "No System Available for Update") ;

    if(!Init_Update){
      Init_Update = 1;
      gCreateVector(&TmpVect, &DofData_P->Solver, DofData_P->NbrDof,
		    DofData_P->NbrPart, DofData_P->Part) ;

      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Theta = Current.Theta ; 

      Cal_ThetaCoefficients(coef) ;
      Cal_ThetaMatrix(DofData_P->Flag_Init, coef,  
		      &DofData_P->M1, &DofData_P->M2, &DofData_P->A) ;
      gAssembleMatrix(&DofData_P->A) ;
    }

    if(Save_Num != DofData_P->Num || Current.DTime != Save_DTime || Current.Theta != Save_Theta){
      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Theta = Current.Theta ; 
      Cal_ThetaCoefficients(coef) ;
      Cal_ThetaMatrix(DofData_P->Flag_Init, coef, 
		      &DofData_P->M1, &DofData_P->M2, &DofData_P->A) ;
      gAssembleMatrix(&DofData_P->A) ;
    }

    Cal_ThetaRHS(DofData_P->Flag_Init, coef, 
		 &DofData_P->M1, &DofData_P->M2, &DofData_P->m1, &DofData_P->m2, 
		 &TmpVect, &DofData_P->b);
    gAssembleVector(&DofData_P->b) ;
    break ;

  case TIME_NEWMARK :

    if(!DofData_P->Flag_Init[1] && !DofData_P->Flag_Init[2] && !DofData_P->Flag_Init[3])
      Msg(ERROR, "No System Available for Update") ;

    if(!Init_Update){
      Init_Update = 1;
      gCreateVector(&TmpVect, &DofData_P->Solver, DofData_P->NbrDof,
		    DofData_P->NbrPart, DofData_P->Part) ;

      /* Bidouillage provisoire. Necessaire car seule la valeur de la
       fonction temporelle pour la solution courante a ete
       initialisee. */
      Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions, 0);
      Solution_P->TimeFunctionValues[0] = 0. ;

      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Beta  = Current.Beta ; 
      Save_Gamma = Current.Gamma ;
      Cal_NewmarkCoefficients(coef) ;
      Cal_NewmarkMatrix(DofData_P->Flag_Init, coef,  
			&DofData_P->M1, &DofData_P->M2, &DofData_P->M3, &DofData_P->A) ;
      gAssembleMatrix(&DofData_P->A) ;
    }

    if(Save_Num != DofData_P->Num || Current.DTime != Save_DTime || 
       Current.Beta != Save_Beta  ||  Current.Gamma != Save_Gamma){
      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Beta  = Current.Beta ; 
      Save_Gamma = Current.Gamma ;
      Cal_NewmarkCoefficients(coef) ;
      Cal_NewmarkMatrix(DofData_P->Flag_Init, coef, 
			&DofData_P->M1, &DofData_P->M2, &DofData_P->M3, &DofData_P->A) ;
      gAssembleMatrix(&DofData_P->A) ;
    }

    Cal_NewmarkRHS(DofData_P->Flag_Init, coef,
		   &DofData_P->M1, &DofData_P->M2, &DofData_P->M3,
		   &DofData_P->m1, &DofData_P->m2, &DofData_P->m3, 
		   &TmpVect, &DofData_P->b);
    gAssembleVector(&DofData_P->b) ;
    break ;

  default :
    Msg(ERROR, "Wrong Type of Analysis for Update") ;
  }

  gGetVectorSize(&DofData_P->b, &i) ;
  if(!i) Msg(ERROR, "Generated System is of Dimension Zero");
}


/* ------------------------------------------------------------------------ */
/*  C a l _ S o l u t i o n E r r o r                                       */
/* ------------------------------------------------------------------------ */

void  Cal_SolutionError(gVector *dx, gVector *x, int diff, double *MeanError) {
  int     i, n;
  double  valx, valdx, errsqr=0., xmoy=0., dxmoy=0., tol ;

  gGetVectorSize(dx, &n);

  for (i=0 ; i<n ; i++) {
    gGetAbsDoubleInVector(&valx, x, i) ; 
    gGetAbsDoubleInVector(&valdx, dx, i) ; 
    xmoy += valx ;
    if(diff) dxmoy += (valdx-valx) ;
    else     dxmoy += valdx ;
  }
  xmoy  /= (double)n ;
  dxmoy /= (double)n ;

  if (xmoy > 1.e-30) {
    tol = xmoy*1.e-10 ;
    for (i=0 ; i<n ; i++){
      gGetAbsDoubleInVector(&valx, x, i) ;
      gGetAbsDoubleInVector(&valdx, dx, i) ;
      if(diff){
	if (valx > tol) errsqr += fabs(valdx-valx)/valx ;
	else 	        errsqr += fabs(valdx-valx) ;
      }
      else{
	if (valx > tol) errsqr += valdx/valx ;
	else 	        errsqr += valdx ;
      }
    }
    *MeanError = errsqr/(double)n ;
  }
  else{
    if (dxmoy > 1.e-30) 
      *MeanError = 1. ;
    else
      *MeanError = 0. ;
  }
}

/* ------------------------------------------------------------------------ */
/*  C a l _ S o l u t i o n E r r o r X                                     */
/* ------------------------------------------------------------------------ */

void  Cal_SolutionErrorX(int Nbr, double * xNew, double * x, double * MeanError) {
  int i;
  double errsqr = 0., xmoy = 0., dxmoy = 0., tol ;

  for (i = 0 ; i < Nbr ; i++) {
    xmoy  += fabs( x[i])/(double)Nbr ;
    dxmoy += fabs(xNew[i]-x[i])/(double)Nbr ;
  }

  if (xmoy > 1.e-30) {
    tol = xmoy*1.e-10 ;

    for (i = 0 ; i < Nbr ; i++)
      if ( fabs(x[i]) > tol ) errsqr += fabs((xNew[i]-x[i]) / x[i]) ;
      else                    errsqr += fabs(xNew[i]-x[i]) ;

    *MeanError = errsqr / (double)Nbr ;
  }
  else
    if (dxmoy > 1.e-30)  *MeanError = 1. ;
    else                 *MeanError = 0. ;
}



/* ------------------------------------------------------------------------ */
/*  Operation_IterativeTimeReduction                                        */
/* ------------------------------------------------------------------------ */

void  Operation_IterativeTimeReduction(struct Resolution  * Resolution_P,
				       struct Operation   * Operation_P, 
				       struct DofData     * DofData_P0,
				       struct GeoData     * GeoData_P0) {
  int     Num_Iteration, i ;
  int     Type_ChangeOfState, Flag_TimeLimLo, Type_LimitHi, FlagIndex ;
  double  Time_Previous, DTime0, DTime1 ;
  double  Time_LimitLo, DTime_LimitLo, Time_LimitHi ;

  struct Solution   * Solution_P ;
  struct Expression * Expression_P ;

#define TIMELO_OLD   0
#define TIMELO_NEW   1

#define COMPARE_CHANGE        1
#define COMPARE_CONVERGENCE   2

  Time_Previous = Current.Time - Current.DTime ;
  DTime0 = 0. ;  DTime1 = Current.DTime ;

  Flag_TimeLimLo = TIMELO_OLD ;
  Time_LimitLo = Time_Previous ;  DTime_LimitLo = Current.DTime ;

  Msg(DEBUG, "\n T I M E   %g (TS #%d, DT %g, Theta %g)\n",
      Current.Time, (int)Current.TimeStep, Current.DTime, Current.Theta) ;

  Treatment_Operation(Resolution_P,
		      Operation_P->Case.IterativeTimeReduction.Operation,
		      DofData_P0, GeoData_P0, NULL, NULL) ;
  Cal_CompareGlobalQuantity(Operation_P, COMPARE_CHANGE, &Type_ChangeOfState,
			    &FlagIndex, 1) ;

  if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE) {
    Treatment_Operation(Resolution_P,
			Operation_P->Case.IterativeTimeReduction.OperationEnd,
			DofData_P0, GeoData_P0, NULL, NULL) ;
    /* debug */
    Cal_CompareGlobalQuantity
      (Operation_P, 999, &Type_ChangeOfState, &FlagIndex, 1) ;

    return ;
  }

  /* Recherche de l'intervalle de temps [Time_LimitLo, Time_LimitHi] < Criterion
     sur lequel un changement d'etat de grandeurs globales specifiees a lieu
     (utilisation pour les circuits avec diodes et thyristors)
  */

  for (Num_Iteration = 1 ;
       Num_Iteration <= Operation_P->Case.IterativeTimeReduction.NbrMaxIteration ;
       Num_Iteration++) {

    if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE) {
      Flag_TimeLimLo = TIMELO_NEW ;
      Time_LimitLo  = Current.Time ;  DTime_LimitLo = Current.DTime ;
    }
    else {
      Time_LimitHi  = Current.Time ;
      Type_LimitHi  = Type_ChangeOfState ;
    }

    if (Time_LimitHi - Time_LimitLo <
	Operation_P->Case.IterativeTimeReduction.Criterion) {

      if (Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE) {

	if (!(Flag_TimeLimLo == TIMELO_OLD &&
	      Type_ChangeOfState == CHANGEOFSTATE_CHANGELEVEL) &&
	    !(Flag_TimeLimLo == TIMELO_OLD)) {
	  Solution_P = (struct Solution *)
	    List_Pointer(Current.DofData->Solutions,
			 List_Nbr(Current.DofData->Solutions)-1) ;
	  gDestroyVector(&Solution_P->x) ;  Free(Solution_P->TimeFunctionValues) ;
	  List_Pop(Current.DofData->Solutions) ;  /* Attention: a changer ! */
	}

	if (Flag_TimeLimLo == TIMELO_NEW) {
	  /* Recalcul en Time_LimitLo */
	  /* Attention: a changer... plutot recuperer solution en Time_LimitLo... */
	  Msg(DEBUG, "==> Re-calculation at Time_LimitLo ... (%.16g)\n",
	      Time_LimitLo) ;
	  Current.Time  = Time_LimitLo ;  Current.DTime = DTime_LimitLo ;

	  Treatment_Operation(Resolution_P,
			      Operation_P->Case.IterativeTimeReduction.Operation,
			      DofData_P0, GeoData_P0, NULL, NULL) ;
	}
      }

      if (Flag_TimeLimLo == TIMELO_NEW ||
	  (Flag_TimeLimLo == TIMELO_OLD &&
	   Type_ChangeOfState == CHANGEOFSTATE_CHANGELEVEL)) {
	Treatment_Operation(Resolution_P,
			    Operation_P->Case.IterativeTimeReduction.OperationEnd,
			    DofData_P0, GeoData_P0, NULL, NULL) ;
	/* debug */
	Cal_CompareGlobalQuantity
	  (Operation_P, 999, &Type_ChangeOfState, &FlagIndex, 1) ;
      }

      if (Type_LimitHi == CHANGEOFSTATE_CHANGESIGN ||
	  Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE ||
	  Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE2) {

	if (Flag_TimeLimLo == TIMELO_NEW)  Current.TimeStep += 1. ;

	if (Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE ||
	    Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE2) {
	  Expression_P = (struct Expression *)
	    List_Pointer(Problem_S.Expression, abs(FlagIndex)) ;
	  Expression_P->Case.Constant = (FlagIndex > 0)? 1. : 0. ;
	  /*
	  Expression_P->Case.Constant =
	    (double)(!((int)Expression_P->Case.Constant)) ;
	  */
	  Msg(DEBUG, "===> Flag -> %g\n", Expression_P->Case.Constant) ;
	}

	if (Operation_P->Case.IterativeTimeReduction.Flag)
	  Current.Theta = 1. ;
	/* New: Theta is also changed for this time !
	   OK because dt is then very small also in this case ! */
	Current.Time  = Time_LimitHi ;
	Current.DTime = Time_LimitHi - Time_LimitLo ;

	Msg(DEBUG, "==> iterations for TimeHi ...\n") ;

	i = 0 ;
	do {
	  i ++ ;
	  Treatment_Operation(Resolution_P,
			      Operation_P->Case.IterativeTimeReduction.Operation,
			      DofData_P0, GeoData_P0, NULL, NULL) ;
	  Cal_CompareGlobalQuantity
	    (Operation_P, COMPARE_CONVERGENCE, &Type_ChangeOfState, &FlagIndex, 0) ;
	} while ((Flag_TimeLimLo == TIMELO_NEW && i == 1) ||
		 (Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE && i < 9)) ;
	/* Attention: critere (NbrMax 9) a revoir */

	Treatment_Operation(Resolution_P,
			    Operation_P->Case.IterativeTimeReduction.OperationEnd,
			    DofData_P0, GeoData_P0, NULL, NULL) ;
	/* debug */
	Cal_CompareGlobalQuantity
	  (Operation_P, 999, &Type_ChangeOfState, &FlagIndex, 1) ;

	if (Operation_P->Case.IterativeTimeReduction.Flag) { /* Attention: Test */
	  Msg(DEBUG,"=====> Theta = %g -> 1.\n", Current.Theta) ;
	  Flag_NextThetaFixed = 1 ;
	  Current.Theta = 1. ;
	  if (Operation_P->Case.IterativeTimeReduction.Flag > 0) {
	    Current.DTime *= (double)Operation_P->Case.IterativeTimeReduction.Flag ;
	    Flag_NextThetaFixed = 2 ;  /* Theta is fixed, DTime is also fixed */
	  }
	}
      }

      break ;  /* Out of loop 'for Num_Iteration' */
    }  /* if Time_LimitHi - Time_LimitLo << ... */


    if (Operation_P->Case.IterativeTimeReduction.DivisionCoefficient > 0.) {
      if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE)  DTime0 += DTime1 ;
      DTime1 /= Operation_P->Case.IterativeTimeReduction.DivisionCoefficient ;
    }
    else { /* Technique de Pkp ... "un peu trop prudente" */
      if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE)  DTime0 += DTime1 ;
      else  DTime1 /=
	      fabs(Operation_P->Case.IterativeTimeReduction.DivisionCoefficient) ;
    }

    Current.DTime = DTime0 + DTime1 ;
    Current.Time = Time_Previous + Current.DTime ;

    Solution_P = (struct Solution *)
      List_Pointer(Current.DofData->Solutions,
		   List_Nbr(Current.DofData->Solutions)-1) ;
    gDestroyVector(&Solution_P->x) ;  Free(Solution_P->TimeFunctionValues) ;
    List_Pop(Current.DofData->Solutions) ;  /* Attention: a changer ! */

    Treatment_Operation(Resolution_P,
			Operation_P->Case.IterativeTimeReduction.Operation,
			DofData_P0, GeoData_P0, NULL, NULL) ;
    Cal_CompareGlobalQuantity(Operation_P, COMPARE_CHANGE, &Type_ChangeOfState,
			      &FlagIndex, 0) ;
  }  /* for Num_Iteration ... */

}


/* ------------------------------------------------------------------------ */
/*  C a l _ C o m p a r e G l o b a l Q u a n t i t y                       */
/* ------------------------------------------------------------------------ */

/*  Ne marchera pas avec PETSC COMPLEX... */

void  Cal_CompareGlobalQuantity(struct Operation * Operation_P,
				int Type_Analyse, int * Type_ChangeOfState,
				int * FlagIndex, int Flag_First) {

  List_T  *Region_L ;
  int      i, Nbr_Region, Num_Region ;
  int      Nbr_ChangeOfState, i_COS ;

  struct ChangeOfState     *ChangeOfState_P ;
  struct Formulation       *Formulation_P ;
  struct FunctionSpace     *FunctionSpace_P ;
  struct GlobalQuantity    *GlobalQuantity_P ;
  struct DefineQuantity    *DefineQuantity_P ;
  struct QuantityStorage   QuantityStorage_S ;

  double  Val0_Dof, Val1_Dof ;
  double  *val0, *val1, MeanError, v0, v1 ;
  struct  Value  Value ;

  double  Val1_E, Val0_E, Val_S, Val0_Ref, Val1_Ref, v_fz, v_k, v_ke, v_sat ;
  double  Save_Time ;

  /* test */
  v_k  = 1./27.2836 ;  v_ke = 18.518519 ;
  v_fz = 1. / (5.e3 * 1.5e-9) ;  v_sat = 6. ;


  *Type_ChangeOfState = CHANGEOFSTATE_NOCHANGE ;

  Nbr_ChangeOfState =
    List_Nbr(Operation_P->Case.IterativeTimeReduction.ChangeOfState) ;

  for (i_COS = 0 ; i_COS < Nbr_ChangeOfState ; i_COS++) {

    ChangeOfState_P = (struct ChangeOfState *)
      List_Pointer(Operation_P->Case.IterativeTimeReduction.ChangeOfState, i_COS) ;

    Region_L =
      ((struct Group *)List_Pointer(Problem_S.Group, ChangeOfState_P->InIndex))
      ->InitialList ;
    List_Sort(Region_L, fcmp_int) ;

    Nbr_Region = List_Nbr(Region_L) ;

    if (Nbr_Region > 0) {

      Formulation_P = (struct Formulation *)
	List_Pointer(Problem_S.Formulation, ChangeOfState_P->FormulationIndex) ;
      DefineQuantity_P = (struct DefineQuantity *)
	List_Pointer(Formulation_P->DefineQuantity, ChangeOfState_P->QuantityIndex) ;

      QuantityStorage_S.FunctionSpace = FunctionSpace_P =
	(struct FunctionSpace*)List_Pointer(Problem_S.FunctionSpace,
					    DefineQuantity_P->FunctionSpaceIndex) ;
      GlobalQuantity_P = (struct GlobalQuantity*)
	List_Pointer(FunctionSpace_P->GlobalQuantity,
		     *(int *)List_Pointer(DefineQuantity_P->IndexInFunctionSpace, 0)) ;

      if (!ChangeOfState_P->ActiveList[0]) {
	ChangeOfState_P->ActiveList[0] =(double *)Malloc(Nbr_Region * sizeof(double)) ;
	ChangeOfState_P->ActiveList[1] =(double *)Malloc(Nbr_Region * sizeof(double)) ;
      }
      val0 = ChangeOfState_P->ActiveList[0] ; val1 = ChangeOfState_P->ActiveList[1] ;

      /* debug */

      if (Type_Analyse == 999 && i_COS == 0 &&
	  ChangeOfState_P->Type == CHANGEOFSTATE_CHANGEREFERENCE2) {

	List_Read(Region_L, 0, &Num_Region) ;
	Current.Region = Num_Region ;

	Get_DofOfRegion(Current.Region, GlobalQuantity_P,
			FunctionSpace_P, &QuantityStorage_S) ;


	QuantityStorage_S.FunctionSpace->DofData->CurrentSolution -- ;
	Save_Time = Current.Time ;
	Current.Time =
	  QuantityStorage_S.FunctionSpace->DofData->CurrentSolution->Time ;
	Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
			    QuantityStorage_S.BasisFunction[0].Dof, &Val0_Dof) ;

	Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
				     NULL, 0., 0., 0., &Value) ;
	Val0_Ref = Value.Val[0] ;

	Current.Time = Save_Time ;
	QuantityStorage_S.FunctionSpace->DofData->CurrentSolution ++ ;

	Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
			    QuantityStorage_S.BasisFunction[0].Dof, &Val1_Dof) ;

	Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
				     NULL, 0., 0., 0., &Value) ;
	Val1_Ref = Value.Val[0] ;

	Val1_E = (Val1_Ref - v_k * Val1_Dof) * v_ke ;
	Val0_E = (Val0_Ref - v_k * Val0_Dof) * v_ke ;

	Val_S = Val1_E + (Val1_E-Val0_E)/Current.DTime / (TWO_PI*v_fz) ;
	/*
	fprintf(FilePWM, "%.16g %g %g", Current.Time, Val1_E, Val_S) ;
	*/
	Val_S += Val1_Ref ;
	if      (Val_S >  v_sat)  Val_S =  v_sat ;
	else if (Val_S < -v_sat)  Val_S = -v_sat ;
	/*
	fprintf(FilePWM, " %g %g\n", Val_S,
		((struct Expression *)
		 List_Pointer(Problem_S.Expression, ChangeOfState_P->FlagIndex))
		->Case.Constant
		) ;

	fflush(FilePWM) ;
	*/
	break ;
      }
      /* else if (Type_Analyse == 999 && i_COS > 0) break ; */

      /* ----- */

      /*  C a l c u l   v a l e u r s   . . .  */

      for (i = 0 ; i < Nbr_Region ; i++) {

	List_Read(Region_L, i, &Num_Region) ;
	Current.Region = Num_Region ;

	if (DefineQuantity_P->Type == GLOBALQUANTITY) {
	  Get_DofOfRegion(Current.Region, GlobalQuantity_P,
			  FunctionSpace_P, &QuantityStorage_S) ;
	  switch (Type_Analyse) {
	  case COMPARE_CHANGE :  /* Compare values at times t-dt and t */
	    Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				QuantityStorage_S.BasisFunction[0].Dof, &Val1_Dof) ;

	    switch (ChangeOfState_P->Type) {
	    case CHANGEOFSTATE_CHANGESIGN :
	    case CHANGEOFSTATE_CHANGELEVEL :
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution -- ;
	      Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				  QuantityStorage_S.BasisFunction[0].Dof, &Val0_Dof) ;
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution ++ ;
	      break ;

	    case CHANGEOFSTATE_CHANGEREFERENCE :
	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
					   NULL, 0., 0., 0., &Value) ;
	      Val0_Dof = Value.Val[0] ;

	      break ;

	    case CHANGEOFSTATE_CHANGEREFERENCE2 :
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution -- ;
	      Save_Time = Current.Time ;
	      Current.Time =
		QuantityStorage_S.FunctionSpace->DofData->CurrentSolution->Time ;
	      Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				  QuantityStorage_S.BasisFunction[0].Dof, &Val0_Dof) ;
	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
					   NULL, 0., 0., 0., &Value) ;
	      Val0_Ref = Value.Val[0] ;
	      Current.Time = Save_Time ;
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution ++ ;

	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
					   NULL, 0., 0., 0., &Value) ;
	      Val1_Ref = Value.Val[0] ;

	      Val1_E = (Val1_Ref - v_k * Val1_Dof) * v_ke ;
	      Val0_E = (Val0_Ref - v_k * Val0_Dof) * v_ke ;

	      Val_S = Val1_E + (Val1_E-Val0_E)/Current.DTime / (TWO_PI*v_fz) ;
	      Val_S += Val1_Ref ;
	      if      (Val_S >  v_sat)  Val_S =  v_sat ;
	      else if (Val_S < -v_sat)  Val_S = -v_sat ;

	      Val1_Dof = Val_S ;

	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex2,
					   NULL, 0., 0., 0., &Value) ;
	      Val0_Dof = Value.Val[0] ;

	      break ;
	    }
	    break ;

	  case COMPARE_CONVERGENCE :  /* Compare values at time t, for 2 iterations */
	    Val0_Dof = val1[i] ;
	    Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				QuantityStorage_S.BasisFunction[0].Dof, &Val1_Dof) ;
	    break ;
	  }
	}
	else
	  Val0_Dof = Val1_Dof = 0. ;

	val0[i] = Val0_Dof ;  val1[i] = Val1_Dof ;
      }  /* for i -> Nbr_Region ... */


      /*  A n a l y s e   v a l e u r s   . . .  */

      switch (Type_Analyse) {

      case COMPARE_CHANGE :

	switch (ChangeOfState_P->Type) {
	case CHANGEOFSTATE_CHANGESIGN :
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    if (val0[i] * val1[i] <= 0.)
	      { *Type_ChangeOfState = CHANGEOFSTATE_CHANGESIGN ;  break ; }
	  }
	  break ;

	case CHANGEOFSTATE_CHANGELEVEL :
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    if (ChangeOfState_P->Criterion > 0) {
	      v0 = fabs(val0[i]) ; v1 = fabs(val1[i]) ;
	      if (((v0 < v1) && (v0*ChangeOfState_P->Criterion < v1)) ||
		  ((v0 > v1) && (v1*ChangeOfState_P->Criterion < v0)))
		{ *Type_ChangeOfState = CHANGEOFSTATE_CHANGELEVEL ;  break ; }
	    }
	    else {  /* New: Absolute change (Criterion < 0) */
	      v0 = (val0[i]) ; v1 = (val1[i]) ;
	      if ( fabs(v1-v0) > fabs(ChangeOfState_P->Criterion) )
		{ *Type_ChangeOfState = CHANGEOFSTATE_CHANGELEVEL ;  break ; }
	    }
	  }  /* Attention: test a affiner ... choix du Criterion ... */
	  break ;

	case CHANGEOFSTATE_CHANGEREFERENCE :
	  if (Nbr_Region != 1)
	    Msg(ERROR, "More than 1 Region for ChangeReference not done yet") ;
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    if (fabs(val1[i] - val0[i]) >
		fabs(ChangeOfState_P->Criterion) *
		((ChangeOfState_P->Criterion > 0.)? fabs(val0[i]) : 1.)) {
	      *Type_ChangeOfState = ChangeOfState_P->Type ;
	      *FlagIndex = ChangeOfState_P->FlagIndex ;
	      if (val1[i] > val0[i])  *FlagIndex *= -1 ;
	      break ;
	    }
	  }
	  break ;

	case CHANGEOFSTATE_CHANGEREFERENCE2 :
	  if (Nbr_Region != 1)
	    Msg(ERROR, "More than 1 Region for ChangeReference2 not done yet") ;
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    *FlagIndex = ChangeOfState_P->FlagIndex ;
	    if (val1[i] > val0[i])  *FlagIndex *= -1 ;
	    if (((struct Expression *)
		 List_Pointer(Problem_S.Expression, abs(*FlagIndex)))
		->Case.Constant != (*FlagIndex > 0)? 1. : 0. ) {
	      *Type_ChangeOfState = ChangeOfState_P->Type ;
	      break ;
	    }
	  }
	  break ;
	}

	break ;

      case COMPARE_CONVERGENCE :
	Cal_SolutionErrorX(Nbr_Region, val1, val0, &MeanError) ;
	if (MeanError > 1.e-14)  *Type_ChangeOfState = !CHANGEOFSTATE_NOCHANGE ;
	break ;

      }

      if (*Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE)  break ;

    }  /* if Nbr_Region > 0 ... */
  }  /* for i_COS ... */

  /* Attention: d e b u g  (fprintf)*/
  
  if ((Type_Analyse == COMPARE_CHANGE &&
       (*Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE || !Flag_First)) ||
      (Type_Analyse == COMPARE_CONVERGENCE)) {
    if (Flag_First) {
      for (i = 0 ; i < Nbr_Region ; i++) {
	List_Read(Region_L, i, &Num_Region) ; Msg(DEBUG," %10d",Num_Region) ;
      }  Msg(DEBUG, "\n") ;
      for (i = 0 ; i < Nbr_Region ; i++)  Msg(DEBUG, " %.8g", val0[i]) ;
      Msg(DEBUG, "\n") ;
    }
    for (i = 0 ; i < Nbr_Region ; i++)  Msg(DEBUG, " %.8g", val1[i]) ;
    Msg(DEBUG, " t = %.16g, dt = %.16g", Current.Time, Current.DTime) ;
    if      (*Type_ChangeOfState == CHANGEOFSTATE_CHANGESIGN)
      Msg(DEBUG, " *Sign") ;
    else if (*Type_ChangeOfState == CHANGEOFSTATE_CHANGELEVEL)
      Msg(DEBUG, " *Level") ;
    else if (*Type_ChangeOfState == CHANGEOFSTATE_CHANGEREFERENCE)
      Msg(DEBUG, " *Ref (%g %g)",
	      val0[0]-fabs(ChangeOfState_P->Criterion),
	      val0[0]+fabs(ChangeOfState_P->Criterion)) ;
    else if (*Type_ChangeOfState == CHANGEOFSTATE_CHANGEREFERENCE2)
      Msg(DEBUG, " *Ref2 (%g)", val0[0]) ;
    Msg(DEBUG, "\n") ;
  }

}






/* ------------------------------------------------------------------------ */
/*  Operation_ChangeOfCoordinates                                           */
/* ------------------------------------------------------------------------ */

void  Generate_ExtendedGroup(struct Group * Group_P) ;

void  Operation_ChangeOfCoordinates(struct Resolution  * Resolution_P,
				    struct Operation   * Operation_P, 
				    struct DofData     * DofData_P0,
				    struct GeoData     * GeoData_P0) {

  int  i, Nbr_Node, Num_Node ;

  struct Value  Value ;
  struct Group  * Group_P ;


  Group_P = (struct Group *)
    List_Pointer(Problem_S.Group, 
		 Operation_P->Case.ChangeOfCoordinates.GroupIndex) ;
  if (!Group_P->ExtendedList)  Generate_ExtendedGroup(Group_P) ;
  if (Group_P->FunctionType != NODESOF)
    Msg(ERROR, "ChangeOfCoordinates: Group must be of NodesOf Function Type") ;

  Nbr_Node = List_Nbr(Group_P->ExtendedList) ;

  for (i=0 ; i < Nbr_Node ; i++) {
    List_Read(Group_P->ExtendedList, i, &Num_Node) ;

    Geo_GetNodesCoordinates(1, &Num_Node, &Current.x, &Current.y, &Current.z) ;

    Get_ValueOfExpressionByIndex
      (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex,
       NULL, 0., 0., 0., &Value) ;

    Geo_SetNodesCoordinates(1, &Num_Node,
			    &Value.Val[0], &Value.Val[1], &Value.Val[2]) ;
  }

}
