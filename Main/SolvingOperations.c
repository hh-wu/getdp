#define RCSID "$Id: SolvingOperations.c,v 1.42 2003-01-26 07:31:29 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "GeoData.h"
#include "DofData.h"
#include "Init_Problem.h"
#include "Cal_Quantity.h"
#include "Tools.h"
#include "Data_DefineE.h"
#include "Data_Numeric.h"
#include "Get_DofOfElement.h"
#include "CurrentData.h"
#include "Magic.h"

/*
  All this stuff should reaaly go into appropriate header files...
*/

int  fcmp_DefineSystem_Name(const void * a, const void * b) ;
int  fcmp_PostOperation_Name(const void * a, const void * b) ;

void  Cal_SolutionError(gVector * dx, gVector * x, int diff, double * MeanError) ;
void  Cal_SolutionErrorX(int Nbr, double * dx, double * x, double * MeanError) ;

static int  Flag_IterativeLoop = 0 ;  /* Attention: phase de test */
static int  Flag_NextThetaFixed = 0 ;  /* Attention: phase de test */

static int  Init_Update = 0 ; /* provisoire */

void Lanczos (struct DofData * DofData_P, int LanSize, List_T *LanSave, double shift) ;

int Flag_RHS = 0;

struct Group * Generate_Group = NULL;

int Flag_Pos_TimeLoop = 0;

double **MH_Moving_Matrix = NULL ; 

void  Init_MovingBand2D (struct Group * Group_P);
void  Mesh_MovingBand2D (struct Group * Group_P);
void  ReGenerate_System(struct DefineSystem * DefineSystem_P,
			struct DofData * DofData_P, 
			struct DofData * DofData_P0, 
			int Flag_Jac, int Flag_Separate);

/*
static FILE * FilePWM ;
*/

/* ------------------------------------------------------------------------ */
/*  I n i t _ O p e r a t i o n O n S y s t e m                             */
/* ------------------------------------------------------------------------ */

void  Init_OperationOnSystem(char                * Name,
			     struct Resolution   * Resolution_P,
			     struct Operation    * Operation_P ,
			     struct DofData      * DofData_P0,
			     struct GeoData      * GeoData_P0,
			     struct DefineSystem ** DefineSystem_P,
			     struct DofData      ** DofData_P,  
			     int Flag_Jac,
			     struct Resolution   * Resolution2_P) {

  int i ;

  GetDP_Begin("Init_OperationOnSystem");

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
	Msg(ERROR, "Unknown DestinationSystem (%s) in System (%s)", 
	    (*DefineSystem_P)->DestinationSystemName, (*DefineSystem_P)->Name) ;
      (*DefineSystem_P)->DestinationSystemIndex = i ;      
      Dof_DefineUnknownDofFromSolveOrInitDof(DofData_P) ;
    }
    else { /* a changer !!! */
      if ((i = List_ISearchSeq(Resolution_P->DefineSystem, 
			       (*DefineSystem_P)->DestinationSystemName,
			       fcmp_DefineSystem_Name)) < 0)
	Msg(ERROR, "Unknown DestinationSystem (%s) in System (%s)", 
	    (*DefineSystem_P)->DestinationSystemName, (*DefineSystem_P)->Name) ;
      (*DefineSystem_P)->DestinationSystemIndex = i ;      
    }
  }
  
  Msg(OPERATION, "%s[%s]",
      Name?Name:Get_StringForDefine(Operation_Type, Operation_P->Type),
      (*DefineSystem_P)->Name) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  I n i t _ S y s t e m D a t a                                           */
/* ------------------------------------------------------------------------ */

int fcmp_Dof(const void * a, const void * b) ;


void  Init_SystemData(struct DofData * DofData_P, int Flag_Jac) {

  GetDP_Begin("Init_SystemData");

  if (DofData_P->Flag_Init[0] < 1) {
    DofData_P->Flag_Init[0] = 1 ;
    LinAlg_CreateSolver(&DofData_P->Solver, DofData_P->SolverDataFileName) ;
    LinAlg_CreateMatrix(&DofData_P->A, &DofData_P->Solver,
			DofData_P->NbrDof, DofData_P->NbrDof,
			DofData_P->NbrPart, DofData_P->Part, DofData_P->Nnz) ;
    LinAlg_CreateVector(&DofData_P->b, &DofData_P->Solver, DofData_P->NbrDof,
			DofData_P->NbrPart, DofData_P->Part) ;
  }
  if (DofData_P->Flag_Init[0] < 2 && Flag_Jac) {
    DofData_P->Flag_Init[0] = 2 ;
    LinAlg_CreateMatrix(&DofData_P->Jac, &DofData_P->Solver,
			DofData_P->NbrDof, DofData_P->NbrDof,
			DofData_P->NbrPart, DofData_P->Part, DofData_P->Nnz) ;
    LinAlg_CreateVector(&DofData_P->res, &DofData_P->Solver, DofData_P->NbrDof,
			DofData_P->NbrPart, DofData_P->Part) ;
    LinAlg_CreateVector(&DofData_P->dx, &DofData_P->Solver, DofData_P->NbrDof,
			DofData_P->NbrPart, DofData_P->Part) ;
  }

  GetDP_End ;
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
  char    *str;
  char    ResName[MAX_FILE_NAME_LENGTH], ResNum[MAX_STRING_LENGTH] ;
  char    FileName[MAX_FILE_NAME_LENGTH];
  char    NameApp[MAX_FILE_NAME_LENGTH];
  gScalar tmp ;
  double * Scales, d1 ;
  int NbrSol ;
  double SaveTime;


  struct Operation     * Operation_P ;
  struct DefineSystem  * DefineSystem_P ;
  struct DofData       * DofData_P, * DofData2_P ;
  struct Solution      * Solution_P, Solution_S ;
  struct PostOperation  * PostOperation_P ;
  struct PostProcessing * PostProcessing_P ;
  struct Dof           Dof, * Dof_P ;
  struct Value         Value ;

  static int RES0 = -1 ;


  /* adaptive relaxation */
  gVector x_Save;
  int NbrSteps_relax;
  double  Norm, Cal_NormVector(gVector *);
  double Frelax, Frelax_Opt = 1., Error_Prev;
  int istep;
  void ShowVector(gVector *);

  int Nbr_Formulation, Index_Formulation ;
  struct Formulation * Formulation_P ; 

  int iTime ;
  double *Val_Pulsation ; 
  double hop[20][20] ;
  double DCfactor ;

  int NbrHar1, NbrHar2, NbrDof1, NbrDof2 ;
  double dd ;
  int NumDof ;


  GetDP_Begin("Treatment_Operation");

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
      Init_OperationOnSystem(Get_StringForDefine(Operation_Type, Operation_P->Type),
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Current.TypeAssembly = ASSEMBLY_AGGREGATE ;
      Init_SystemData(DofData_P, Flag_Jac) ;

      if (Operation_P->Case.Generate.GroupIndex >= 0) 
	Generate_Group = (struct Group *) List_Pointer(Problem_S.Group, 
						       Operation_P->Case.Generate.GroupIndex) ;
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 0) ;

      if (Operation_P->Case.Generate.GroupIndex >= 0) Generate_Group = NULL ;

      Flag_CPU = 1 ;
      break ;


      /*  -->  G e n e r a t e S e p a r a t e        */
      /*  ------------------------------------------  */

    case OPERATION_GENERATESEPARATE :
      Init_OperationOnSystem("GenerateSeparate",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
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
      Init_OperationOnSystem("Update",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Update_System(DefineSystem_P, DofData_P, DofData_P0, 
		    Operation_P->Case.Update.ExpressionIndex) ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  U p d a t e C o n s t r a i n t        */
      /*  ------------------------------------------  */

    case OPERATION_UPDATECONSTRAINT :
      Init_OperationOnSystem("UpdateConstraint",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      UpdateConstraint_System(DefineSystem_P, DofData_P, DofData_P0, 
			      Operation_P->Case.UpdateConstraint.GroupIndex,
			      Operation_P->Case.UpdateConstraint.Type) ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  S o l v e                              */
      /*  ------------------------------------------  */

    case OPERATION_SOLVE :
      /*  Solve : A x = b  */
      Init_OperationOnSystem("Solve",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      LinAlg_Solve(&DofData_P->A, &DofData_P->b, &DofData_P->Solver,
		   &DofData_P->CurrentSolution->x) ;

      Flag_CPU = 1 ;
      break ;

      /*  -->  Lanczos                                */
      /*  ------------------------------------------  */

    case OPERATION_LANCZOS :
      Init_OperationOnSystem("Lanczos",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Lanczos(DofData_P, Operation_P->Case.Lanczos.Size, 
	      Operation_P->Case.Lanczos.Save, Operation_P->Case.Lanczos.Shift) ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  Perturbation                           */
      /*  ------------------------------------------  */

    case OPERATION_PERTURBATION :
      Init_OperationOnSystem("Perturbation",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      /*
      Perturbation(DofData_P,
		   DofData_P0+Operation_P->Case.Perturbation.DefineSystemIndex2,
		   DofData_P0+Operation_P->Case.Perturbation.DefineSystemIndex3,
		   Operation_P->Case.Perturbation.Size, 
	           Operation_P->Case.Perturbation.Save,
		   Operation_P->Case.Perturbation.Shift,
		   Operation_P->Case.Perturbation.PertFreq) ;
      */
      Flag_CPU = 1 ;
      break ;

      /*  -->  S o l v e J a c                        */
      /*  ------------------------------------------  */

    case OPERATION_SOLVEJAC :
      /*  SolveJac : J(xn) dx = b(xn) - A(xn) xn ;  x = xn + dx  */
      Flag_Jac = 1 ;
      Init_OperationOnSystem("SolveJac",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      if(DofData_P->Flag_Init[0] < 2)
	Msg(ERROR, "Jacobian system not initialized (missing GenerateJac?)");

      LinAlg_AddMatrixMatrix(&DofData_P->Jac, &DofData_P->A, &DofData_P->Jac) ;
      LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
      LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;
      LinAlg_Solve(&DofData_P->Jac, &DofData_P->res, &DofData_P->Solver, &DofData_P->dx) ;

      Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0, &MeanError) ;
      Msg(BIGINFO, "Mean error: %.3e  (after %d iteration%s)", 
	  MeanError, (int)Current.Iteration, ((int)Current.Iteration==1)?"":"s") ;

      Current.RelativeDifference += MeanError ;

      if (!Flag_IterativeLoop) {
        LinAlg_ProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor, &DofData_P->dx) ;
      }
      else {  /* Attention: phase test ... Technique bricolee ... provisoire */
        if (Current.Iteration == 1. || MeanError < Current.RelativeDifferenceOld)
          LinAlg_ProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor, &DofData_P->dx) ;
        else {
          RelFactor_Modified = Current.RelaxationFactor /
            (MeanError / Current.RelativeDifferenceOld) ;
          Msg(INFO, "RelFactor modified = %g", RelFactor_Modified) ;
          LinAlg_ProdVectorDouble(&DofData_P->dx, RelFactor_Modified, &DofData_P->dx) ;
          Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0, &MeanError) ;
          Msg(BIGINFO, "Mean error: %.3e", MeanError) ;
        }
      }

      LinAlg_AddVectorVector(&DofData_P->CurrentSolution->x, &DofData_P->dx, 
			     &DofData_P->CurrentSolution->x) ;
      
      Flag_CPU = 1 ;
      break ;

      /*  -->  S o l v e J a c _ A d a p t R e l a x  */
      /*  ------------------------------------------  */

    case OPERATION_SOLVEJACADAPTRELAX :

      /*  get increment dx by solving : J(xn) dx = b(xn) - A(xn) xn */
      Flag_Jac = 1 ;
      Init_OperationOnSystem("SolveJacAdaptRelax",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      if(DofData_P->Flag_Init[0] < 2)
	Msg(ERROR, "Jacobian system not initialized (missing GenerateJac?)");

      LinAlg_AddMatrixMatrix(&DofData_P->Jac, &DofData_P->A, &DofData_P->Jac) ;
      LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
      LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;
      LinAlg_Solve(&DofData_P->Jac, &DofData_P->res, &DofData_P->Solver, &DofData_P->dx) ;

      Msg(RESOURCES, "");
      
      /* save CurrentSolution */
      LinAlg_CreateVector(&x_Save, &DofData_P->Solver, DofData_P->NbrDof,
			  DofData_P->NbrPart, DofData_P->Part) ;
      LinAlg_CopyVector(&DofData_P->CurrentSolution->x, &x_Save);

      Flag_RHS = 1;  
      /* MHJacNL-terms don't contribute to the RHS and residu, and are thus disregarded */

      Error_Prev = 1e99 ;

      if (!(NbrSteps_relax = List_Nbr(Operation_P->Case.SolveJac_AdaptRelax.Factor_L)))
	  Msg(ERROR, "No factors provided for Adaptive Relaxation");

      for( istep = 0 ; istep < NbrSteps_relax ; istep++ ){  
		
	List_Read(Operation_P->Case.SolveJac_AdaptRelax.Factor_L, istep, &Frelax);

	/* new trial solution = x + Frelax * dx */
	LinAlg_CopyVector(&x_Save, &DofData_P->CurrentSolution->x);
	LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x, &DofData_P->dx, 
					 Frelax, &DofData_P->CurrentSolution->x);
	/* printf("XXX");ShowVector(&DofData_P->CurrentSolution->x); */

	/* calculate residual with trial solution */
	ReGenerate_System(DefineSystem_P, DofData_P, DofData_P0, 0, 0) ;
	LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
	LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;

	/* check whether norm of residual is smaller than previous ones */
	Norm = Cal_NormVector(&DofData_P->res);
	Msg(INFO, " adaptive relaxation : factor = %8f   Norm residual = %10.4e", Frelax, Norm) ;

	if (Norm < Error_Prev) {
	  Error_Prev = Norm;
	  Frelax_Opt = Frelax;
	} else if ( !Operation_P->Case.SolveJac_AdaptRelax.CheckAll && istep > 0 ) break ;

      }

      Msg(INFO, " => optimal relaxation factor = %f", Frelax_Opt) ;

      /*  solution = x + Frelax_Opt * dx */
      LinAlg_CopyVector(&x_Save, &DofData_P->CurrentSolution->x);
      LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x, &DofData_P->dx, 
				       Frelax_Opt, &DofData_P->CurrentSolution->x);

      MeanError = Error_Prev ; 
      Msg(BIGINFO, "Mean error: %.3e  (after %d iteration%s)", 
	  MeanError, (int)Current.Iteration, ((int)Current.Iteration==1)?"":"s") ;

      Current.RelativeDifference = MeanError;
      Flag_CPU = 1 ;
      Flag_RHS = 0 ;
      LinAlg_DestroyVector(&x_Save);

      break ;


      /*  -->  I n i t S o l u t i o n                */
      /*  ------------------------------------------  */

    case OPERATION_INITSOLUTION :

      Init_OperationOnSystem("InitSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      if(Flag_RESTART){
        if (!DofData_P->Solutions)
          Msg(ERROR, "No solution to restart the computation");

        for(i=0 ; i<DofData_P->NbrAnyDof ; i++){
          Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i) ;
          if(Dof_P->Type == DOF_UNKNOWN_INIT) Dof_P->Type = DOF_UNKNOWN ;
        }
	/* The last solution is the current one */
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

	Solution_S.SolutionExist = 1 ;
        LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
			    DofData_P->NbrPart, DofData_P->Part) ;

	/* The last solution, if any, initializes the current one.
	   Otherwise a null solution is used. 
	   a revoir qd les conditions initiales multiples seront mieux traitees */
	if (List_Nbr(DofData_P->Solutions)) {
	  LinAlg_CopyVector(&((struct Solution *)
			      List_Pointer(DofData_P->Solutions,
					   List_Nbr(DofData_P->Solutions)-1))->x,
			    &Solution_S.x) ;
	}
	else {
	  LinAlg_ZeroVector(&Solution_S.x) ;
	}

	for(i=0 ; i<DofData_P->NbrAnyDof ; i++){
	  Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i) ;
	  if(Dof_P->Type == DOF_UNKNOWN_INIT){ /* Init values loaded */
	    Dof_P->Type = DOF_UNKNOWN ;
	    LinAlg_SetScalarInVector
	      (&Dof_P->Val, &Solution_S.x, Dof_P->Case.Unknown.NumDof-1) ;
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
      Init_OperationOnSystem("SaveSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
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
      Init_OperationOnSystem("SaveSolutions",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      strcpy(ResName, Name_Generic) ;
      strcat(ResName, ".res") ;
      if(RES0 < 0){	
	Dof_WriteFileRES0(ResName, Flag_BIN) ;
	RES0 = 1 ;
      }
      for(i=0 ; i<List_Nbr(DofData_P->Solutions) ; i++){
	DofData_P->CurrentSolution = (struct Solution*)
	  List_Pointer(DofData_P->Solutions, i) ;
	if (!DofData_P->CurrentSolution->SolutionExist)
	  Msg(ERROR, "SaveSolutions: solution #%d doesn't exist anymore", i) ;
	Dof_WriteFileRES(ResName, DofData_P, Flag_BIN, 
			 DofData_P->CurrentSolution->Time, i) ;
      }
      break ;

    case OPERATION_INIT_MOVINGBAND2D :
      Init_MovingBand2D( (struct Group *)
			 List_Pointer(Problem_S.Group, 
				      Operation_P->Case.Init_MovingBand2D.GroupIndex)) ;
      break ;

    case OPERATION_MESH_MOVINGBAND2D :
      Mesh_MovingBand2D( (struct Group *)
			 List_Pointer(Problem_S.Group, 
				      Operation_P->Case.Mesh_MovingBand2D.GroupIndex)) ;
      break ;


    case OPERATION_GENERATE_MH_MOVING :

      Init_OperationOnSystem("Generate_MH_Moving",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;

      Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

      Generate_Group = (struct Group *) List_Pointer(Problem_S.Group, 
						     Operation_P->Case.Generate_MH_Moving.GroupIndex) ;

      MH_Moving_Matrix = (double **) Malloc(Current.NbrHar*sizeof(double *)) ;
      for (k = 0 ; k < Current.NbrHar ; k++)
	MH_Moving_Matrix[k] = (double *) Malloc(Current.NbrHar*sizeof(double)) ;

      if (! (Val_Pulsation = Current.DofData->Val_Pulsation))
	Msg(ERROR, "Generate_MH_moving can only be used for harmonic problems");

      for (k = 0 ; k < Current.NbrHar ; k++)
	for (l = 0 ; l < Current.NbrHar ; l++) 
	  hop[k][l] = 0.;
      

      for (iTime = 0 ; iTime < Operation_P->Case.Generate_MH_Moving.NbrStep ; iTime++) {
      
	Current.Time = (double)iTime/(double)Operation_P->Case.Generate_MH_Moving.NbrStep * 
	  Operation_P->Case.Generate_MH_Moving.Period ;
	Current.DTime = 1./(double)Operation_P->Case.Generate_MH_Moving.NbrStep * 
	  Operation_P->Case.Generate_MH_Moving.Period ;
	Current.TimeStep = iTime;

	Msg(INFO, "Generate_MH_Moving : Step %d/%d (Time = %e  DTime %e)", (int)(Current.TimeStep+1), 
	    Operation_P->Case.Generate_MH_Moving.NbrStep, Current.Time, Current.DTime) ;

	Treatment_Operation(Resolution_P, Operation_P->Case.Generate_MH_Moving.Operation, 
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	for (k = 0 ; k < Current.NbrHar ; k++)
	  for (l = 0 ; l < Current.NbrHar ; l++) {
	    if (Val_Pulsation[k/2]) DCfactor = 2. ; else DCfactor = 1. ; 
	    MH_Moving_Matrix[k][l] = DCfactor / (double)Operation_P->Case.Generate_MH_Moving.NbrStep *
	      ( fmod(k,2) ? -sin(Val_Pulsation[k/2]*Current.Time) : cos(Val_Pulsation[k/2]*Current.Time) ) *
	      ( fmod(l,2) ? -sin(Val_Pulsation[l/2]*Current.Time) : cos(Val_Pulsation[l/2]*Current.Time) ) ;
	    /* printf(" k %d l %d %e \n", k, l,
	       MH_Moving_Matrix[k][l] /2. * 
	       (double)Operation_P->Case.Generate_MH_Moving.NbrStep);
	    */
	    
	    hop[k][l] += MH_Moving_Matrix[k][l] ;
	  }

	for (k = 0 ; k < Current.NbrHar/2 ; k++)
	  if (!Val_Pulsation[k]) MH_Moving_Matrix[2*k+1][2*k+1] = 1. ;
	
	for (i = 0 ; i < Nbr_Formulation ; i++) {
	  List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation) ;
	  Formulation_P = (struct Formulation*)
	    List_Pointer(Problem_S.Formulation, Index_Formulation) ;
	  Treatment_Formulation(Formulation_P) ;
	}
	

      }

      /*
      for (k = 0 ; k < Current.NbrHar ; k++)
	for (l = 0 ; l < Current.NbrHar ; l++) 
	  printf("+++ k %d l %d hop %e \n", k, l, hop[k][l]) ;
      */


      Current.TimeStep = 0;
      Current.Time = 0.;

      for (k = 0 ; k < Current.NbrHar ; k++) Free (MH_Moving_Matrix[k]) ;
      Free (MH_Moving_Matrix) ;
      MH_Moving_Matrix = NULL ; 

      Generate_Group = NULL;

      break ;


      /*  -->  S a v e S o l u t i o n E x t e n d e d MH              */
      /*  -----------------------------------------------------------  */

    case OPERATION_SAVESOLUTIONEXTENDEDMH :

      if (Current.NbrHar == 1) { 
	Msg(WARNING, "ExtendSolutionMH can only to be used with multi-harmonics") ;
	break ;
      } else if (!List_Nbr(DofData_P->Solutions)) { 
	Msg(WARNING, "No solution available for ExtendSolutionMH");
	break ;
      } else if (List_Nbr(DofData_P->Solutions) > 1) {
	Msg(WARNING, "Only last solution will be extended mult-harmonically and saved");
      }

      Init_OperationOnSystem("SaveSolutionExtendedMH",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      Dof_WriteFileRES0(Operation_P->Case.SaveSolutionExtendedMH.ResFile, Flag_BIN) ;      
      Dof_WriteFileRES_ExtendMH(Operation_P->Case.SaveSolutionExtendedMH.ResFile, DofData_P, Flag_BIN,  
				Current.NbrHar + 2*Operation_P->Case.SaveSolutionExtendedMH.NbrFreq);

      Msg(DIRECT, "          > '%s'  (%d to %d frequencies)", 
	  Operation_P->Case.SaveSolutionExtendedMH.ResFile,
	  Current.NbrHar/2, Current.NbrHar/2 + Operation_P->Case.SaveSolutionExtendedMH.NbrFreq) ;

      DofData_P->CurrentSolution = (struct Solution*) 
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);

      break ;


      /*  -->  R e a d S o l u t i o n                */
      /*  ------------------------------------------  */

    case OPERATION_READSOLUTION :
      Init_OperationOnSystem("ReadSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      i = 0 ;
      while(Name_ResFile[i]){
	Msg(LOADING, "Processing data '%s'", Name_ResFile[i]) ;
	Dof_OpenFile(DOF_TMP, Name_ResFile[i], "r");
	Dof_ReadFileRES(NULL, DofData_P, DofData_P->Num, &Current.Time, &Current.TimeStep) ;
	Dof_CloseFile(DOF_TMP);
	i++ ;
      }
      if(!List_Nbr(DofData_P->Solutions))
	Msg(ERROR, "No valid data found for ReadSolution[%s]", DefineSystem_P->Name);
	
      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;	
      DofData_P->CurrentSolution->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
      break ;

      /*  -->  T r a n s f e r S o l u t i o n        */
      /*  ------------------------------------------  */



    case OPERATION_SAVEMESH :
      Init_OperationOnSystem("SaveMesh",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Flag_Jac, Resolution2_P) ;
      strcpy(FileName,Operation_P->Case.SaveMesh.MeshFileBase);

      if (Operation_P->Case.SaveMesh.Format) {
	Get_ValueOfExpressionByIndex(Operation_P->Case.SaveMesh.ExprIndex,
				     NULL, 0., 0., 0., &Value) ;
	sprintf(NameApp,Operation_P->Case.SaveMesh.Format,Value.Val[0]);
	strcat(FileName,NameApp);
      } 
      Geo_SaveMesh(Current.GeoData, 
		   ((struct Group*)List_Pointer(Problem_S.Group, Operation_P->Case.SaveMesh.GroupIndex))->InitialList,
		   FileName) ;

      break ;

    case OPERATION_TRANSFERSOLUTION :
      Init_OperationOnSystem("TransferSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
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
	Solution_S.SolutionExist = 1 ;
        LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof,
			    DofData2_P->NbrPart, DofData2_P->Part) ;
	LinAlg_ZeroVector(&Solution_S.x) ;

	if (List_Nbr(DofData_P->Solutions)) {
	  
	  Solution_P = (struct Solution *)List_Pointer(DofData_P->Solutions,
						       List_Nbr(DofData_P->Solutions)-1) ;
	  for(i=0 ; i<DofData_P->NbrAnyDof ; i++){
	    Dof = *(struct Dof *)List_Pointer(DofData_P->DofList, i) ;
	    if(Dof.Type == DOF_UNKNOWN){
	      LinAlg_GetScalarInVector(&tmp, &Solution_P->x, Dof.Case.Unknown.NumDof-1) ;

	      if((Dof_P = (struct Dof*)List_PQuery(DofData2_P->DofList, &Dof, fcmp_Dof))){
		LinAlg_SetScalarInVector(&tmp, &Solution_S.x, Dof_P->Case.Unknown.NumDof-1) ;
		Dof_P->Type = DOF_UNKNOWN ;
	      }
	      else{
		Msg(WARNING, "Unknown Dof in TransferSolution") ;
	      }
	    }
	    else{
	      Msg(WARNING, "Trying to transfer a non symmetrical Dof");
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
	if(DefineSystem_P->FrequencyValue)
	  List_Reset(DefineSystem_P->FrequencyValue);
	else
	  DefineSystem_P->FrequencyValue = List_Create(1, 1, sizeof(double)) ;
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
	Msg(ERROR, "Invalid SetFrequency for real system '%s'", DefineSystem_P->Name) ;
      break;

      /*  -->  T i m e L o o p T h e t a              */
      /*  ------------------------------------------  */

    case OPERATION_TIMELOOPTHETA :
      if(!List_Nbr(Current.DofData->Solutions))
	Msg(ERROR, "Not enough initial solutions for TimeLoopTheta");

      Msg(OPERATION, "TimeLoopTheta ...") ;

      /*
	FilePWM = fopen("PWM", "w+") ;
      */

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

	Flag_Pos_TimeLoop = 1;
	SaveTime = Current.Time ;

	Treatment_Operation(Resolution_P, Operation_P->Case.TimeLoopTheta.Operation, 
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	Flag_Pos_TimeLoop = 0;
	Current.Time = SaveTime ;

      }

      Current.TypeTime = Save_TypeTime ;
      Current.DTime = Save_DTime ;  
      break ;

      /*  -->  T i m e L o o p N e w m a r k          */
      /*  ------------------------------------------  */

    case OPERATION_TIMELOOPNEWMARK :
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

    case OPERATION_FOURIERTRANSFORM2 :
      Msg(OPERATION, "FourierTransform") ;

      DofData_P  = DofData_P0 + Operation_P->Case.FourierTransform2.DefineSystemIndex[0] ;
      DofData2_P = DofData_P0 + Operation_P->Case.FourierTransform2.DefineSystemIndex[1] ;     
      

      NbrHar1 = DofData_P->NbrHar ;
      NbrDof1 = List_Nbr(DofData_P->DofList) ;
      NbrHar2 = DofData2_P->NbrHar ;
      NbrDof2 = List_Nbr(DofData2_P->DofList) ;

      if (NbrHar1 != 1 || NbrHar2 < 2 || NbrDof2 != (NbrDof1*NbrHar2))
	Msg(ERROR,"Uncompatible System definitions for FourierTransform (NbrHar = %d|%d   NbrDof = %d|%d)", 
	    NbrHar1, NbrHar2, NbrDof1, NbrDof2) ;

      if(!DofData2_P->Solutions){
	DofData2_P->Solutions = List_Create(1, 1, sizeof(struct Solution)) ;	
	Operation_P->Case.FourierTransform2.Scales = (double *)Malloc(NbrHar2*sizeof(double)) ;
      }


      NbrSol = List_Nbr(DofData2_P->Solutions) ;
      Scales = Operation_P->Case.FourierTransform2.Scales ;

      if ( (Operation_P->Case.FourierTransform2.Period_sofar + Current.DTime > 
	    Operation_P->Case.FourierTransform2.Period) && NbrSol ) {
	Msg (INFO, "Normalizing and finalizing Fourier Analysis (solution  %d) (Period: %e out of %e)",
	     NbrSol, Operation_P->Case.FourierTransform2.Period_sofar,
	     Operation_P->Case.FourierTransform2.Period);
	for (i=0 ; i<NbrHar2 ; i++) Msg(INFO, "Har  %d : Scales %e ", i, Scales[i]) ;

	Solution_P = (struct Solution*)List_Pointer(DofData2_P->Solutions, NbrSol-1);

	for(j=0 ; j<DofData2_P->NbrDof ; j+=NbrHar2){
	  NumDof = ((struct Dof *)List_Pointer(DofData2_P->DofList,j))->Case.Unknown.NumDof - 1 ;
	  for(k=0 ; k<NbrHar2 ; k++){
	    LinAlg_GetDoubleInVector(&d1, &Solution_P->x, NumDof+k) ;
	    if (Scales[k]) d1 /= Scales[k] ;
	    LinAlg_SetDoubleInVector(d1, &Solution_P->x, NumDof+k) ;
	  }
	}
	Operation_P->Case.FourierTransform2.Period_sofar = 0 ;
	break;
      }
      

      if (Operation_P->Case.FourierTransform2.Period_sofar == 0) {
	Msg (INFO, "Starting new Fourier Analysis : solution %d ", NbrSol);
	Solution_S.TimeStep = NbrSol;
	Solution_S.Time = NbrSol;
	Solution_S.SolutionExist = 1 ;
	LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof,
			    DofData2_P->NbrPart, DofData2_P->Part) ;
	LinAlg_ZeroVector(&Solution_S.x) ;
	List_Add(DofData2_P->Solutions, &Solution_S) ;
	NbrSol++ ;
	for (k=0 ; k<NbrHar2 ; k++) Scales[k] = 0 ;  
      }

      DofData2_P->CurrentSolution = Solution_P =
	(struct Solution*)List_Pointer(DofData2_P->Solutions, NbrSol-1) ;
      

      for (k=0 ; k<NbrHar2 ; k+=2) {
	d = DofData2_P->Val_Pulsation[k/2] * Current.Time ;
	Scales[k  ] +=  cos(d) * cos(d) * Current.DTime ;
	Scales[k+1] +=  sin(d) * sin(d) * Current.DTime ;
      }

      for(j=0 ; j<NbrDof1 ; j++){
	Dof_GetRealDofValue(DofData_P, (struct Dof *)List_Pointer(DofData_P->DofList,j), &dd) ;
	NumDof = ((struct Dof *)List_Pointer(DofData2_P->DofList,j*NbrHar2))->Case.Unknown.NumDof - 1 ;

	if (((struct Dof *)List_Pointer(DofData2_P->DofList,j*NbrHar2))->Type != DOF_UNKNOWN)
	  Msg (INFO, "Dof not unknown %d", j) ;

	for (k=0 ; k<NbrHar2 ; k+=2) {
	  d = DofData2_P->Val_Pulsation[k/2] * Current.Time ;
	  LinAlg_AddDoubleInVector( dd*cos(d)*Current.DTime, &Solution_P->x, NumDof+k  ) ;
	  LinAlg_AddDoubleInVector(-dd*sin(d)*Current.DTime, &Solution_P->x, NumDof+k+1) ;
	}
      }

      Operation_P->Case.FourierTransform2.Period_sofar += Current.DTime ;
 
      break;
      
    case OPERATION_FOURIERTRANSFORM :
      Msg(OPERATION, "FourierTransform") ;
      
      DofData_P = DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[0] ;
      DofData2_P = DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[1] ;     
      
      if(!DofData2_P->Solutions){
	k = List_Nbr(Operation_P->Case.FourierTransform.Frequency) ;

	if(DofData2_P->NbrDof != gCOMPLEX_INCREMENT * DofData_P->NbrDof)
	  Msg(ERROR, "Uncompatible System definitions for FourierTransform") ;

	DofData2_P->Solutions = List_Create(k, 1, sizeof(struct Solution)) ;	

	for(i=0 ; i<k ; i++){
	  List_Read(Operation_P->Case.FourierTransform.Frequency, i, &d) ;
	  Solution_S.TimeStep = i ;
	  Solution_S.Time = TWO_PI * d;
	  Solution_S.SolutionExist = 1 ;
	  LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof,
			      DofData2_P->NbrPart, DofData2_P->Part) ;
	  LinAlg_ZeroVector(&Solution_S.x) ;
	  List_Add(DofData2_P->Solutions, &Solution_S) ;
	}
	DofData2_P->CurrentSolution =
	  (struct Solution*)List_Pointer(DofData2_P->Solutions, k/2) ;
      }

      for(i=0 ; i<List_Nbr(DofData2_P->Solutions) ; i++){	
	Solution_P = (struct Solution*)List_Pointer(DofData2_P->Solutions, i);
	d = Solution_P->Time * Current.Time ;
	for(j=0,k=0 ; j<DofData_P->NbrDof ; j++,k+=gCOMPLEX_INCREMENT){
	  LinAlg_GetDoubleInVector(&d2, &DofData_P->CurrentSolution->x, j);
	  LinAlg_AddComplexInVector( d2 * cos(d) * Current.DTime, 
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
	if(Operation_P->Case.Print.FileOut[0] == '/' || 
	   Operation_P->Case.Print.FileOut[0] == '\\'){
	  strcpy(FileName, Operation_P->Case.Print.FileOut);
	}
	else{
	  strcpy(FileName, Name_Path);
	  strcat(FileName, Operation_P->Case.Print.FileOut);
	}
	if(!(PrintStream = fopen(FileName, "a")))
	  Msg(ERROR, "Unable to open file '%s'", FileName) ;
	Msg(OPERATION, "Print -> '%s'", FileName) ;
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
		  LinAlg_GetScalarInVector(&tmp, &Solution_P->x, j) ;
		  if(Flag_Binary){
		    LinAlg_WriteScalar(PrintStream, &tmp) ;
		  }
		  else{
		    LinAlg_PrintScalar(PrintStream, &tmp) ;
		    fprintf(PrintStream, " ") ;
		  }
		}
	        else Msg(WARNING, "Print of Dof out of TimeStep range [0,%d]",
			 List_Nbr(DofData_P->Solutions)-1);
	      }
	    else{
	      LinAlg_GetScalarInVector(&tmp, &DofData_P->CurrentSolution->x, j) ;
	      if(Flag_Binary){
		LinAlg_WriteScalar(PrintStream, &tmp) ;
	      }
	      else{
		LinAlg_PrintScalar(PrintStream, &tmp) ;
		fprintf(PrintStream, " ") ;
	      }
	    }
	  }
	  else Msg(WARNING, "Wrong number of Dof to Print (%d is out of [0,%d])",
		   j, DofData_P->NbrDof-1);
	}
	fprintf(PrintStream, "\n") ;
      }
      else{
	DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;
	if(Flag_Binary){
	  LinAlg_WriteMatrix(PrintStream, &DofData_P->A) ;
	  LinAlg_WriteVector(PrintStream, &DofData_P->b) ;
	}
	else{
	  LinAlg_PrintMatrix(PrintStream, &DofData_P->A) ;
	  fprintf(PrintStream, "\n") ;
	  LinAlg_PrintVector(PrintStream, &DofData_P->b) ;
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

      Init_OperationOnSystem(Get_StringForDefine(Operation_Type, Operation_P->Type),
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
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
      /*  ------------------------------------------ */ 
	      
    case OPERATION_CHANGEOFCOORDINATES :
      Msg(OPERATION, "ChangeOfCoordinates") ;
      Geo_SetCurrentGeoData(Current.GeoData = GeoData_P0) ;
      Operation_ChangeOfCoordinates
	(Resolution_P, Operation_P, DofData_P0, GeoData_P0) ;
      break ;
      
      /*  -->  P o s t O p e r a t i o n */ 
      /*  ------------------------------ */ 
	      
    case OPERATION_POSTOPERATION :
      Msg(OPERATION, "PostOperation") ;
      
      for(i=0 ; i<List_Nbr(Operation_P->Case.PostOperation.PostOperations); i++){
	str = *(char**)List_Pointer(Operation_P->Case.PostOperation.PostOperations, i);
	if((j = List_ISearchSeq(Problem_S.PostOperation, str, fcmp_PostOperation_Name)) < 0){
	  Msg(WARNING, "Unknown PostOperation '%s'", str) ;
	}
	else{
	  PostOperation_P = (struct PostOperation*)
	    List_Pointer(Problem_S.PostOperation, j) ;
	  PostProcessing_P = (struct PostProcessing *)
	    List_Pointer(Problem_S.PostProcessing, PostOperation_P->PostProcessingIndex) ;
	  Treatment_PostOperation
	    (Resolution_P, DofData_P0, 
  	     (struct DefineSystem *)List_Pointer(Resolution_P->DefineSystem, 0),
	     GeoData_P0, PostProcessing_P, PostOperation_P) ;
	}
      }
      break ;


      /*  -->  O t h e r                              */
      /*  ------------------------------------------  */

    default :
      Msg(WARNING, "Operation: ? ? ?") ;
      break ;
    }

    if(Flag_CPU) Msg(RESOURCES, "");
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  F r e e _ U n u s e d S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Free_UnusedSolutions(struct DofData * DofData_P){
  struct Solution * Solution_P ;
  int index = -1;

  /* We store 1 solution too much (to allow for an imbricated iterative loop) */

  if(!Flag_POS){
    if(Current.TypeTime == TIME_THETA)
      index = List_Nbr(DofData_P->Solutions)-3 ;
    else if(Current.TypeTime == TIME_NEWMARK){
      index = List_Nbr(DofData_P->Solutions)-4 ;
    }

    if(index >= 0){
      Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions, index);
      if(Solution_P->SolutionExist){
	Msg(INFO, "Freeing Solution %d", index);
	LinAlg_DestroyVector(&Solution_P->x);

	if (Solution_P->TimeFunctionValues) Free(Solution_P->TimeFunctionValues) ;

	Solution_P->SolutionExist = 0 ;
      }
    }
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

  GetDP_Begin("Generate_System");

  /* (Re)creation des liens entre FunctionSpace et DofData:
     seuls les FS n'intervenant pas dans le DD courant peuvent
     pointer vers un autre DD */
  Init_DofDataInFunctionSpace(1, DofData_P) ;

  if (!DofData_P->Solutions)
    DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution)) ;

  i_TimeStep = (int)Current.TimeStep ;
  
  if (!(Solution_P = (struct Solution*)
	List_PQuery(DofData_P->Solutions, &i_TimeStep, fcmp_int))) {
    Solution_S.TimeStep = (int)Current.TimeStep ;
    Solution_S.Time = Current.Time ;
    Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
    Solution_S.SolutionExist = 1 ;
    LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
			DofData_P->NbrPart, DofData_P->Part) ;
    if (List_Nbr(DofData_P->Solutions)) {
      LinAlg_CopyVector(&((struct Solution *)
			  List_Pointer(DofData_P->Solutions,
				       List_Nbr(DofData_P->Solutions)-1))->x,
			&Solution_S.x) ;
    }
    else {
      LinAlg_ZeroVector(&Solution_S.x) ;
    }
    List_Add(DofData_P->Solutions, &Solution_S) ;
    DofData_P->CurrentSolution = (struct Solution*)
      List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
  }
  else if (Solution_P != DofData_P->CurrentSolution && !Flag_Separate) {
    /* the test on Flag_Separate is necessary for high order time
       schemes, where InitSolution[] gets called multiple times,
       resulting in multiple stored solutions with the same TimeStep
       number. Since GenerateSeparate[] is called outside the time
       loop (i.e. before TimeStep+=1), the List_PQuery may return (in
       an unpredictable way) any of the initial solutions. */
    Msg(ERROR, "Incompatible time") ;
  }

  if(Flag_Separate){
    for(i=0 ; i<List_Nbr(DofData_P->TimeFunctionIndex) ; i++)
      if(*(int*)List_Pointer(DofData_P->TimeFunctionIndex, i) > 0)
	Msg(WARNING, "Ignored TimeFunction in Constraint for GenerateSeparate") ;
    for(i=0 ; i<List_Nbr(Problem_S.Expression) ; i++){
      DofData_P->CurrentSolution->TimeFunctionValues[i] = 1. ;
    }
  }
  else{
    LinAlg_ZeroMatrix(&Current.DofData->A) ;
    LinAlg_ZeroVector(&Current.DofData->b) ;
  }

  if(Flag_Jac) 
    LinAlg_ZeroMatrix(&Current.DofData->Jac) ;

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

  for (i = 0 ; i < Nbr_Formulation ; i++) {
    List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation) ;
    Formulation_P = (struct Formulation*)
      List_Pointer(Problem_S.Formulation, Index_Formulation) ;

    Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P);
    Treatment_Formulation(Formulation_P) ;
  }

  if(Flag_Separate){
    DofData_P->CurrentSolution->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
    if(DofData_P->Flag_Init[1]){
      LinAlg_AssembleMatrix(&DofData_P->M1) ;
      LinAlg_AssembleVector(&DofData_P->m1) ;
    }
    if(DofData_P->Flag_Init[2]){
      LinAlg_AssembleMatrix(&DofData_P->M2) ;
      LinAlg_AssembleVector(&DofData_P->m2) ;
    }
    if(DofData_P->Flag_Init[3]){
      LinAlg_AssembleMatrix(&DofData_P->M3) ;
      LinAlg_AssembleVector(&DofData_P->m3) ;
    }
  }
  else{
    LinAlg_AssembleMatrix(&DofData_P->A) ;
    LinAlg_AssembleVector(&DofData_P->b) ;
    LinAlg_GetVectorSize(&DofData_P->b, &i) ;
    if(!i) Msg(WARNING, "Generated system is of dimension zero");
  }

  if(Flag_Jac){ /* This should in fact only be done if a JacNL term
                   exists in the formulation... */
    LinAlg_AssembleMatrix(&DofData_P->Jac) ;
  }

  Free_UnusedSolutions(DofData_P);
  
  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  R e G e n e r a t e _ S y s t e m                                       */
/* ------------------------------------------------------------------------ */

void  ReGenerate_System(struct DefineSystem * DefineSystem_P,
			struct DofData * DofData_P, 
			struct DofData * DofData_P0, 
			int Flag_Jac, int Flag_Separate) {

  int    i, Nbr_Formulation, Index_Formulation ;
  struct Formulation     * Formulation_P ;

  GetDP_Begin("Generate_System");

  LinAlg_ZeroMatrix(&Current.DofData->A) ;
  LinAlg_ZeroVector(&Current.DofData->b) ;
 
  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

  for (i = 0 ; i < Nbr_Formulation ; i++) {
    List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation) ;
    Formulation_P = (struct Formulation*)
      List_Pointer(Problem_S.Formulation, Index_Formulation) ;

    Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P);
    Treatment_Formulation(Formulation_P) ;
  }
  

  LinAlg_AssembleMatrix(&DofData_P->A) ;
  LinAlg_AssembleVector(&DofData_P->b) ;
  /* LinAlg_GetVectorSize(&DofData_P->b, &i) ;
     if(!i) Msg(WARNING, "Generated system is of dimension zero");
  */
  
  
  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  U p d a t e _ S y s t e m                                               */
/* ------------------------------------------------------------------------ */

void Cal_ThetaCoefficients(double *coef){
  GetDP_Begin("Cal_ThetaCoefficients");

  coef[0] = 1./Current.DTime ;
  coef[1] = Current.Theta ;
  coef[2] = -1./Current.DTime ;
  coef[3] = 1.-Current.Theta ;

  GetDP_End ;
}

void Cal_ThetaMatrix(int *init, double *coef, 
		     gMatrix *M1, gMatrix *M2, gMatrix *A){

  GetDP_Begin("Cal_ThetaMatrix");

  Msg(BIGINFO, "Generate Theta Iteration Matrix (Theta=%g, DTime=%g)",
      Current.Theta, Current.DTime) ;

  LinAlg_ZeroMatrix(A);

  /* A = c0 * M2 + c1 * M1 */
  if(init[2] && coef[0]) LinAlg_AddMatrixProdMatrixDouble(A, M2, coef[0], A) ;
  if(init[1] && coef[1]) LinAlg_AddMatrixProdMatrixDouble(A, M1, coef[1], A) ;

  GetDP_End ;
}


void Cal_ThetaRHS(int *init, double *coef,
		  gMatrix *M1, gMatrix *M2, gVector *m1, gVector *m2, 
		  gVector *tmp, gVector *b){
  double tfval, val ;

  GetDP_Begin("Cal_ThetaRHS");
  LinAlg_ZeroVector(b) ;


  /* b = [-c2 * M2 - c3 * M1 ] * x(n-1) */
  if(init[2] && coef[2]){
    LinAlg_ProdMatrixVector(M2, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[2], b) ;
  }
  if(init[1] && coef[3]){
    LinAlg_ProdMatrixVector(M1, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[3], b) ;
  }

  /*   + [ c0 * m2 + c1 * m1 ] * TimeFct(n)      */
  tfval = Current.DofData->CurrentSolution->ExplicitTimeFunctionValue ;
  if(init[2] && (val=coef[0]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[1]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;
  
  /*   + [ c2 * m2 + c3 * m1 ] * TimeFct(n-1)      */
  tfval = (Current.DofData->CurrentSolution-1)->ExplicitTimeFunctionValue ;
  if(init[2] && (val=coef[2]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[3]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;

  GetDP_End ;
}

void Cal_NewmarkCoefficients(double *coef){

  GetDP_Begin("Cal_NewmarkCoefficients");

  coef[0] = 1./DSQU(Current.DTime) ;
  coef[1] = Current.Gamma/Current.DTime ;
  coef[2] = Current.Beta ;
  coef[3] = -2./DSQU(Current.DTime) ;
  coef[4] = (1.-2.*Current.Gamma)/Current.DTime ;
  coef[5] = 0.5+Current.Gamma-2.*Current.Beta ;
  coef[6] = 1./DSQU(Current.DTime) ;
  coef[7] = (Current.Gamma-1.)/Current.DTime ;
  coef[8] = 0.5-Current.Gamma+Current.Beta ;

  GetDP_End ;
}

void Cal_NewmarkMatrix(int *init, double *coef, 
		       gMatrix *M1, gMatrix *M2, gMatrix *M3, gMatrix *A){
  
  GetDP_Begin("Cal_NewmarkMatrix");

  Msg(BIGINFO, "Generate Newmark Iteration Matrix (Beta=%g, Gamma=%g, DTime=%g)",
      Current.Beta, Current.Gamma, Current.DTime) ;

  LinAlg_ZeroMatrix(A);

  /* A = c0 * M3 + c1 * M2 + c2 * M3 */
  if(init[3] && coef[0]) LinAlg_AddMatrixProdMatrixDouble(A, M3, coef[0], A);
  if(init[2] && coef[1]) LinAlg_AddMatrixProdMatrixDouble(A, M2, coef[1], A) ;
  if(init[1] && coef[2]) LinAlg_AddMatrixProdMatrixDouble(A, M1, coef[2], A) ;

  GetDP_End ;
}


void Cal_NewmarkRHS(int *init, double *coef,
		    gMatrix *M1, gMatrix *M2, gMatrix *M3,  
		    gVector *m1, gVector *m2, gVector *m3, 
		    gVector *tmp, gVector *b){
  double tfval, val ;

  GetDP_Begin("Cal_NewmarkRHS");

  LinAlg_ZeroVector(b) ;

  /* b = [-c3 * M3 - c4 * M2 - c5 * M1] * x(n-1) */
  if(init[3] && coef[3]){
    LinAlg_ProdMatrixVector(M3, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[3], b) ;
  }
  if(init[2] && coef[4]){
    LinAlg_ProdMatrixVector(M2, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[4], b) ;
  }
  if(init[1] && coef[5]){
    LinAlg_ProdMatrixVector(M1, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[5], b) ;
  }

  /*   + [-c6 * M3 - c7 * M2 - c8 * M1] * x(n-2) */
  if(init[3] && coef[6]){
    LinAlg_ProdMatrixVector(M3, &(Current.DofData->CurrentSolution-2)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[6], b) ;
  }
  if(init[2] && coef[7]){
    LinAlg_ProdMatrixVector(M2, &(Current.DofData->CurrentSolution-2)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[7], b) ;
  }
  if(init[1] && coef[8]){
    LinAlg_ProdMatrixVector(M1, &(Current.DofData->CurrentSolution-2)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[8], b) ;
  }
  
  /*   + [ c0 * m3 + c1 * m2 + c2 * m1 ] * TimeFct(n)      */
  tfval = Current.DofData->CurrentSolution->ExplicitTimeFunctionValue ;
  if(init[3] && (val=coef[0]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m3, val, b) ;
  if(init[2] && (val=coef[1]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[2]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;
  
  /*   + [ c3 * m3 + c4 * m2 + c5 * m1 ] * TimeFct(n-1)      */
  tfval = (Current.DofData->CurrentSolution-1)->ExplicitTimeFunctionValue ;
  if(init[3] && (val=coef[3]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m3, val, b) ;
  if(init[2] && (val=coef[4]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[5]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;
  
  /*   + [ c6 * m3 + c7 * m2 + c8 * m1 ] * TimeFct(n-2)    */
  tfval = (Current.DofData->CurrentSolution-2)->ExplicitTimeFunctionValue ;
  if(init[3] && (val=coef[6]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m3, val, b) ;
  if(init[2] && (val=coef[7]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
  if(init[1] && (val=coef[8]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;
  
  GetDP_End ;
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

  GetDP_Begin("Update_System");

  if (!DofData_P->Solutions)
    Msg(ERROR, "No initialized solution available for update") ;

  i_TimeStep = (int)Current.TimeStep ;
  if (!(Solution_P = (struct Solution*)
	List_PQuery(DofData_P->Solutions, &i_TimeStep, fcmp_int))) {

    Solution_S.TimeStep = (int)Current.TimeStep ;
    Solution_S.Time = Current.Time ;
    Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P);

    Get_ValueOfExpressionByIndex(TimeFunctionIndex, NULL, 0., 0., 0., &Value) ;
    Solution_S.ExplicitTimeFunctionValue = Value.Val[0] ;
    
    Solution_S.SolutionExist = 1 ;
    LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
			DofData_P->NbrPart, DofData_P->Part) ;
    LinAlg_ZeroVector(&Solution_S.x) ;
    List_Add(DofData_P->Solutions, &Solution_S) ;
    DofData_P->CurrentSolution = (struct Solution*)
      List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;

  }
  else if (Solution_P != DofData_P->CurrentSolution) {
    Msg(ERROR, "Incompatible time") ;
  }
  
  switch (Current.TypeTime) {
  case TIME_THETA :

    if(!DofData_P->Flag_Init[1] && !DofData_P->Flag_Init[2])
      Msg(ERROR, "No system available for Update") ;

    if(!Init_Update){
      Init_Update = 1;

      /* bidouillage provisoire : a revoir qd les conditions initiales multiples
         seront mieux traitees */
      Current.Time -= Current.DTime ;
      Current.TimeStep -= 1. ;
      Get_ValueOfExpressionByIndex(TimeFunctionIndex, NULL, 0., 0., 0., &Value) ;
      (DofData_P->CurrentSolution-1)->ExplicitTimeFunctionValue = Value.Val[0] ;
      Current.Time += Current.DTime ;
      Current.TimeStep += 1. ;
      /* */

      LinAlg_CreateVector(&TmpVect, &DofData_P->Solver, DofData_P->NbrDof,
			  DofData_P->NbrPart, DofData_P->Part) ;

      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Theta = Current.Theta ; 

      Cal_ThetaCoefficients(coef) ;
      Cal_ThetaMatrix(DofData_P->Flag_Init, coef,  
		      &DofData_P->M1, &DofData_P->M2, &DofData_P->A) ;
      LinAlg_AssembleMatrix(&DofData_P->A) ;
    }

    if(Save_Num != DofData_P->Num || Current.DTime != Save_DTime || Current.Theta != Save_Theta){
      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Theta = Current.Theta ; 
      Cal_ThetaCoefficients(coef) ;
      Cal_ThetaMatrix(DofData_P->Flag_Init, coef, 
		      &DofData_P->M1, &DofData_P->M2, &DofData_P->A) ;
      LinAlg_AssembleMatrix(&DofData_P->A) ;
    }

    Cal_ThetaRHS(DofData_P->Flag_Init, coef, 
		 &DofData_P->M1, &DofData_P->M2, &DofData_P->m1, &DofData_P->m2, 
		 &TmpVect, &DofData_P->b);
    LinAlg_AssembleVector(&DofData_P->b) ;
    break ;

  case TIME_NEWMARK :

    if(!DofData_P->Flag_Init[1] && !DofData_P->Flag_Init[2] && !DofData_P->Flag_Init[3])
      Msg(ERROR, "No system available for Update") ;

    if(!Init_Update){
      Init_Update = 1;

      /* bidouillage provisoire : a revoir qd les conditions initiales multiples
         seront mieux traitees */
      Current.Time -= Current.DTime ;
      Current.TimeStep -= 1. ;
      Get_ValueOfExpressionByIndex(TimeFunctionIndex, NULL, 0., 0., 0., &Value) ;
      (DofData_P->CurrentSolution-1)->ExplicitTimeFunctionValue = Value.Val[0] ;
      (DofData_P->CurrentSolution-2)->ExplicitTimeFunctionValue = Value.Val[0] ;
      Current.Time += Current.DTime ;
      Current.TimeStep += 1. ;
      /* */

      LinAlg_CreateVector(&TmpVect, &DofData_P->Solver, DofData_P->NbrDof,
			  DofData_P->NbrPart, DofData_P->Part) ;

      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Beta  = Current.Beta ; 
      Save_Gamma = Current.Gamma ;
      Cal_NewmarkCoefficients(coef) ;
      Cal_NewmarkMatrix(DofData_P->Flag_Init, coef,  
			&DofData_P->M1, &DofData_P->M2, &DofData_P->M3, &DofData_P->A) ;
      LinAlg_AssembleMatrix(&DofData_P->A) ;
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
      LinAlg_AssembleMatrix(&DofData_P->A) ;
    }

    Cal_NewmarkRHS(DofData_P->Flag_Init, coef,
		   &DofData_P->M1, &DofData_P->M2, &DofData_P->M3,
		   &DofData_P->m1, &DofData_P->m2, &DofData_P->m3, 
		   &TmpVect, &DofData_P->b);
    LinAlg_AssembleVector(&DofData_P->b) ;
    break ;

  default :
    Msg(ERROR, "Wrong type of analysis for update") ;
  }

  LinAlg_GetVectorSize(&DofData_P->b, &i) ;
  if(!i) Msg(ERROR, "Generated system is of dimension zero");

  Free_UnusedSolutions(DofData_P);

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  U p d a t e _ C o n s t r a i n t S y s t e m                           */
/* ------------------------------------------------------------------------ */
/*! Update constraints, i.e. new preprocessing of _CST type */

void  UpdateConstraint_System(struct DefineSystem * DefineSystem_P,
			      struct DofData * DofData_P, 
			      struct DofData * DofData_P0,
			      int GroupIndex, int Type_Constraint){

  int k,  Nbr_Formulation, Index_Formulation,  Save_TreatmentStatus ;
  struct Formulation    * Formulation_P ;

  GetDP_Begin("UpdateConstraint_System");

  Save_TreatmentStatus = TreatmentStatus ;
  TreatmentStatus = _CST ;

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

  for (k = 0 ; k < Nbr_Formulation ; k++) {
    List_Read(DefineSystem_P->FormulationIndex, k, &Index_Formulation) ;
    Formulation_P = (struct Formulation*)
      List_Pointer(Problem_S.Formulation, Index_Formulation) ;
    Msg(OPERATION, "Treatment Formulation '%s'", Formulation_P->Name) ;

    Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P) ;
    Treatment_Formulation(Formulation_P) ;
  }

  Dof_InitDofType(DofData_P) ; /* Attention: Init for only one DofData */

  TreatmentStatus = Save_TreatmentStatus ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  C a l _ S o l u t i o n E r r o r                                       */
/* ------------------------------------------------------------------------ */

void  Cal_SolutionError(gVector *dx, gVector *x, int diff, double *MeanError) {
  int     i, n;
  double  valx, valdx, errsqr=0., xmoy=0., dxmoy=0., tol ;



  GetDP_Begin("Cal_SolutionError");
  LinAlg_GetVectorSize(dx, &n);


  for (i=0 ; i<n ; i++) {
    LinAlg_GetAbsDoubleInVector(&valx, x, i) ; 
    LinAlg_GetAbsDoubleInVector(&valdx, dx, i) ; 
    xmoy += valx ;
    if(diff) dxmoy += (valdx-valx) ;
    else     dxmoy += valdx ;
  }
  xmoy  /= (double)n ;
  dxmoy /= (double)n ;

  if (xmoy > 1.e-30) {
    tol = xmoy*1.e-10 ;
    for (i=0 ; i<n ; i++){
      LinAlg_GetAbsDoubleInVector(&valx, x, i) ;
      LinAlg_GetAbsDoubleInVector(&valdx, dx, i) ;
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

  GetDP_End ;
}
/* ------------------------------------------------------------------------ */
/*  C a l _ NormVector                                                      */
/* ------------------------------------------------------------------------ */

void  ShowVector(gVector *x) {
  int     i, n;
  double  valx;

  GetDP_Begin("Cal_ShowVector");
  LinAlg_GetVectorSize(x, &n);

  for (i=0 ; i<n ; i++) {
    LinAlg_GetDoubleInVector(&valx, x, i) ; 
    printf("%d  %e  ", i, valx );
  }
  printf("\n");
}


double  Cal_NormVector(gVector *x) {
  int     i, n;
  double  valx, sum = 0;

  GetDP_Begin("Cal_NormVector");
  LinAlg_GetVectorSize(x, &n);

  for (i=0 ; i<n ; i++) {
    LinAlg_GetAbsDoubleInVector(&valx, x, i) ; 
    sum += valx ;
    /* printf("%e sum = %e \n", valx ,sum ); */
  }
  /* printf("\n"); */
  sum /= (double)n ;

  /* printf("sum = %e \n",sum); */

  GetDP_Return(sum);
}



/* ------------------------------------------------------------------------ */
/*  C a l _ S o l u t i o n E r r o r X                                     */
/* ------------------------------------------------------------------------ */

void  Cal_SolutionErrorX(int Nbr, double * xNew, double * x, double * MeanError) {
  int i;
  double errsqr = 0., xmoy = 0., dxmoy = 0., tol ;

  GetDP_Begin("Cal_SolutionErrorX");

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

  GetDP_End ;
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

  GetDP_Begin("Operation_IterativeTimeReduction");

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

  Current.SubTimeStep = 0 ;
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

    GetDP_End ;
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
	  LinAlg_DestroyVector(&Solution_P->x) ;
	  Free(Solution_P->TimeFunctionValues) ;
	  Solution_P->SolutionExist = 0 ;
	  List_Pop(Current.DofData->Solutions) ;  /* Attention: a changer ! */
	}

	if (Flag_TimeLimLo == TIMELO_NEW) {
	  /* Recalcul en Time_LimitLo */
	  /* Attention: a changer... plutot recuperer solution en Time_LimitLo... */
	  Msg(DEBUG, "==> Re-calculation at Time_LimitLo ... (%.16g)\n",
	      Time_LimitLo) ;
	  Current.Time  = Time_LimitLo ;  Current.DTime = DTime_LimitLo ;
	  Current.SubTimeStep++ ;

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
	Current.SubTimeStep++ ;

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
    Current.SubTimeStep++ ;

    Solution_P = (struct Solution *)
      List_Pointer(Current.DofData->Solutions,
		   List_Nbr(Current.DofData->Solutions)-1) ;
    LinAlg_DestroyVector(&Solution_P->x) ;
    Free(Solution_P->TimeFunctionValues) ;
    Solution_P->SolutionExist = 0 ;
    List_Pop(Current.DofData->Solutions) ;  /* Attention: a changer ! */

    Treatment_Operation(Resolution_P,
			Operation_P->Case.IterativeTimeReduction.Operation,
			DofData_P0, GeoData_P0, NULL, NULL) ;
    Cal_CompareGlobalQuantity(Operation_P, COMPARE_CHANGE, &Type_ChangeOfState,
			      &FlagIndex, 0) ;
  }  /* for Num_Iteration ... */

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  C a l _ C o m p a r e G l o b a l Q u a n t i t y                       */
/* ------------------------------------------------------------------------ */

/*  Ne marchera pas avec PETSC COMPLEX... */

void  Cal_CompareGlobalQuantity(struct Operation * Operation_P,
				int Type_Analyse, int * Type_ChangeOfState,
				int * FlagIndex, int Flag_First) {

  List_T  *Region_L = NULL;
  int      i, Nbr_Region = 0, Num_Region ;
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

  GetDP_Begin("Cal_CompareGlobalQuantity");

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
	if (MeanError > 1.e-8)  *Type_ChangeOfState = !CHANGEOFSTATE_NOCHANGE ;
	break ; /* critere a revoir, avant 1.e-14 */

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

  GetDP_End ;
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

  double x = 0., y = 0.;
  
  struct Value  Value ;
  struct Group  * Group_P ;

  GetDP_Begin("Operation_ChangeOfCoordinates");

  Group_P = (struct Group *)
    List_Pointer(Problem_S.Group, 
		 Operation_P->Case.ChangeOfCoordinates.GroupIndex) ;
  if (!Group_P->ExtendedList)  Generate_ExtendedGroup(Group_P) ;
  if (Group_P->FunctionType != NODESOF)
    Msg(ERROR, "ChangeOfCoordinates: Group must be of NodesOf function type") ;

  Nbr_Node = List_Nbr(Group_P->ExtendedList) ;

  for (i=0 ; i < Nbr_Node ; i++) {
    List_Read(Group_P->ExtendedList, i, &Num_Node) ;

    Geo_GetNodesCoordinates(1, &Num_Node, &Current.x, &Current.y, &Current.z) ;

    if (Num_Node == 3) {
      x = Current.x ;
      y = Current.y ;
    }


    Get_ValueOfExpressionByIndex
      (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex,
       NULL, 0., 0., 0., &Value) ;

    if (Num_Node == 13) {
      printf("before x %e y %e %e  ||| after x %e y %e %e\n",x,y, atan2(y,x)/PI*180.,
	     Value.Val[0], Value.Val[1], atan2(Value.Val[1],Value.Val[0])/PI*180. );

    }


    Geo_SetNodesCoordinates(1, &Num_Node,
			    &Value.Val[0], &Value.Val[1], &Value.Val[2]) ;
  }

  GetDP_End ;
}





