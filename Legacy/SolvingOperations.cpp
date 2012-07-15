// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego
//

#include <string.h>
#include <math.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "ProDefine.h"
#include "GeoData.h"
#include "DofData.h"
#include "BF.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "ExtendedGroup.h"
#include "MovingBand2D.h"
#include "Pos_Search.h"
#include "EigenSolve.h"
#include "Treatment_Formulation.h"
#include "SolvingAnalyse.h"
#include "SolvingOperations.h"
#include "MallocUtils.h"
#include "OS.h"
#include "Message.h"
#if defined(HAVE_GMSH)
#include <gmsh/Gmsh.h>
#include <gmsh/PView.h>
#endif

#define TWO_PI     6.2831853071795865

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int   TreatmentStatus ;

extern int   Flag_POS ;
extern int   Flag_RESTART ;
extern int   Flag_BIN, Flag_SPLIT ;

extern char  *Name_Generic, *Name_Path ;
extern char  *Name_MshFile, *Name_ResFile[NBR_MAX_RES] ;

extern List_T *GeoData_L ;

static int  Flag_IterativeLoop = 0 ;  /* Attention: phase de test */

struct Group * Generate_Group = NULL;

static int Flag_Break = 0;

// For adaptive time stepper (ugly, I know...)
int Flag_IterativeLoopConverged = 1;
int Flag_TimeLoopAdaptive = 0;
int Flag_IterativeLoopN = 0;
int Flag_TimeLoopAdaptive_PETSc_Error;

// For IterativeTimeReduction (ugly also...)
int  Flag_NextThetaFixed = 0 ;

// For Update
int  Init_Update = 0 ;

// For Johan's multi-harmonic stiff (even uglier :-)
int Flag_RHS = 0, *DummyDof ;
double **MH_Moving_Matrix = NULL ;
int MH_Moving_Matrix_simple = 0 ;
int MH_Moving_Matrix_probe = 0 ;
int MH_Moving_Matrix_separate = 0;
Tree_T  * DofTree_MH_moving ;

/* ------------------------------------------------------------------------ */
/*  F r e e _ U n u s e d S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Free_UnusedSolutions(struct DofData * DofData_P)
{
  struct Solution * Solution_P ;
  int index = -1;

  // We store 1 solution too much (to allow for an imbricated iterative loop)

  if(!Flag_POS){
    switch (Current.TypeTime) {
    case TIME_THETA :
      index = List_Nbr(DofData_P->Solutions)-4 ;
    case TIME_GEAR :
      index = List_Nbr(DofData_P->Solutions)-8 ; // With -8 we store 6 past solutions
    case TIME_NEWMARK :
      index = List_Nbr(DofData_P->Solutions)-4 ;
    }

    if(index >= 0){
      Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions, index);
      if(Solution_P->SolutionExist){
	Message::Info("Freeing Solution %d", index);
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
		      int Flag_Jac, int Flag_Separate)
{
  int    i, Nbr_Formulation, Index_Formulation, i_TimeStep, iMat ;
  struct Solution        * Solution_P, Solution_S ;
  struct Formulation     * Formulation_P ;

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
    Solution_S.TimeImag = Current.TimeImag ;
    Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
    Solution_S.SolutionExist = 1 ;
    LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof) ;
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
    Message::Error("Incompatible time") ;
  }
  else{
    // fix time values if we recompute the same step (with different time)
    Solution_P->Time = Current.Time ;
    Solution_P->TimeImag = Current.TimeImag ;
    if (Solution_P->TimeFunctionValues) Free(Solution_P->TimeFunctionValues) ;
    Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
  }

  if(Flag_Separate){
    for(i=0 ; i<List_Nbr(DofData_P->TimeFunctionIndex) ; i++)
      if(*(int*)List_Pointer(DofData_P->TimeFunctionIndex, i) > 0)
	Message::Warning("Ignored TimeFunction in Constraint for GenerateSeparate") ;
    for(i=0 ; i<List_Nbr(Problem_S.Expression) ; i++){
      DofData_P->CurrentSolution->TimeFunctionValues[i] = 1. ;
    }
    if(Current.DofData->Flag_Init[1]){
      LinAlg_ZeroMatrix(&Current.DofData->M1) ;
      LinAlg_ZeroVector(&Current.DofData->m1);
    }
    if(Current.DofData->Flag_Init[2]){
      LinAlg_ZeroMatrix(&Current.DofData->M2) ;
      LinAlg_ZeroVector(&Current.DofData->m2);
    }
    if(Current.DofData->Flag_Init[3]){
      LinAlg_ZeroMatrix(&Current.DofData->M3) ;
      LinAlg_ZeroVector(&Current.DofData->m3);
    }
  }
  else{
    if(!Current.DofData->Flag_RHS)
      LinAlg_ZeroMatrix(&Current.DofData->A) ;
    LinAlg_ZeroVector(&Current.DofData->b) ;

    if(DofData_P->Flag_Only){
      for(i = 0 ; i < List_Nbr( DofData_P->OnlyTheseMatrices ); i++){
	List_Read(DofData_P->OnlyTheseMatrices, i, &iMat);
	if(iMat){
	  // Message::Info("Setting System {A%d,b%d} to zero",iMat,iMat);
	  switch(iMat){
	  case 1 :
	    LinAlg_ZeroMatrix(&Current.DofData->A1) ;
	    LinAlg_ZeroVector(&Current.DofData->b1) ;
	    break;
	  case 2 :
	    LinAlg_ZeroMatrix(&Current.DofData->A2) ;
	    LinAlg_ZeroVector(&Current.DofData->b2) ;
	    break;
	  case 3 :
	    LinAlg_ZeroMatrix(&Current.DofData->A3) ;
	    LinAlg_ZeroVector(&Current.DofData->b3) ;
	    break;
	  }
	}
      }
    }

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
    if(!i) Message::Warning("Generated system is of dimension zero");

    if(DofData_P->Flag_Only){
      for(i = 0 ; i < List_Nbr( DofData_P->OnlyTheseMatrices ); i++){
	List_Read(DofData_P->OnlyTheseMatrices, i, &iMat);
	switch(iMat){
	case 1 :
	  LinAlg_AssembleMatrix(&Current.DofData->A1) ;
	  LinAlg_AssembleVector(&Current.DofData->b1) ;
	  break;
	case 2 :
	  LinAlg_AssembleMatrix(&Current.DofData->A2) ;
	  LinAlg_AssembleVector(&Current.DofData->b2) ;
	  break;
	case 3:
	  LinAlg_AssembleMatrix(&Current.DofData->A3) ;
	  LinAlg_AssembleVector(&Current.DofData->b3) ;
	  break;
	}
      }
    }
  }

  if(Flag_Jac){ /* This should in fact only be done if a JacNL term
                   exists in the formulation... */
    LinAlg_AssembleMatrix(&DofData_P->Jac) ;
  }

  Free_UnusedSolutions(DofData_P);
}

/* ------------------------------------------------------------------------ */
/*  R e G e n e r a t e _ S y s t e m                                       */
/* ------------------------------------------------------------------------ */

void  ReGenerate_System(struct DefineSystem * DefineSystem_P,
			struct DofData * DofData_P,
			struct DofData * DofData_P0, int Flag_Jac=0)
{
  int    i, Nbr_Formulation, Index_Formulation ;
  struct Formulation     * Formulation_P ;

  LinAlg_ZeroMatrix(&Current.DofData->A) ;
  LinAlg_ZeroVector(&Current.DofData->b) ;

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

  LinAlg_AssembleMatrix(&DofData_P->A) ;
  LinAlg_AssembleVector(&DofData_P->b) ;
  LinAlg_GetVectorSize(&DofData_P->b, &i) ;
  if(!i) Message::Warning("ReGenerated system is of dimension zero");


  if(Flag_Jac){ /* This should in fact only be done if a JacNL term
                   exists in the formulation... */
     LinAlg_AssembleMatrix(&DofData_P->Jac) ;
  }

}

void Generate_Residual(gVector *x, gVector *f)
{
  struct DefineSystem * DefineSystem_P ;
  struct DofData * DofData_P ;
  struct DofData * DofData_P0 ;

  int Flag_Jac = 1 ;

  if(Message::GetVerbosity() == 10)
    Message::Info("Generating Residual = b(xn)-A(xn)*xn");

  DofData_P  = Current.DofData ;
  DofData_P0 = Current.DofData_P0;
  DefineSystem_P = Current.DefineSystem_P ;

  // new trial solution
  LinAlg_CopyVector(x, &DofData_P->dx);
  LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x, &DofData_P->dx,
                                   -1., &DofData_P->CurrentSolution->x);
  // calculate residual with new solution
  ReGenerate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac) ;
  // calculate residual with new solution
  LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
  // res = b(xn)-A(xn)*xn
  LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;

  if(Message::GetVerbosity() == 10){
    Message::Info("dx"); LinAlg_PrintVector(stdout, &DofData_P->dx) ;
    Message::Info("A"); LinAlg_PrintMatrix(stdout, &DofData_P->A) ;
  }

  *f = DofData_P->res ;
  LinAlg_AssembleVector(f) ;
}

void Generate_FullJacobian(gVector *x, gMatrix *Jac)
{
  struct DofData * DofData_P ;

  Message::Debug("Generating Full Jacobian = A(x) + DofData_P->Jac");

  DofData_P  = Current.DofData ;

  LinAlg_CopyVector(x, &DofData_P->dx);
  LinAlg_AddVectorVector(&DofData_P->CurrentSolution->x, &DofData_P->dx,
                         &DofData_P->CurrentSolution->x); // updating solution solution

  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->Jac, &DofData_P->Jac) ;

  *Jac = DofData_P->Jac ;
  LinAlg_AssembleMatrix(Jac) ;
}

/* ------------------------------------------------------------------------ */
/*  U p d a t e _ C o n s t r a i n t S y s t e m                           */
/* ------------------------------------------------------------------------ */

void  UpdateConstraint_System(struct DefineSystem * DefineSystem_P,
			      struct DofData * DofData_P,
			      struct DofData * DofData_P0,
			      int GroupIndex, int Type_Constraint, int Flag_Jac)
{
  // Update constraints, i.e. new preprocessing of _CST type
  int k,  Nbr_Formulation, Index_Formulation,  Save_TreatmentStatus ;
  struct Formulation    * Formulation_P ;

  Save_TreatmentStatus = TreatmentStatus ;
  TreatmentStatus = _CST ;

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

  for (k = 0 ; k < Nbr_Formulation ; k++) {
    List_Read(DefineSystem_P->FormulationIndex, k, &Index_Formulation) ;
    Formulation_P = (struct Formulation*)
      List_Pointer(Problem_S.Formulation, Index_Formulation) ;
    Message::Info("UpdateConstraint: Treatment Formulation '%s'", Formulation_P->Name) ;

    Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P) ;
    Treatment_Formulation(Formulation_P) ;
  }

  Dof_InitDofType(DofData_P) ; /* Attention: Init for only one DofData */


#if defined(HAVE_PETSC)
  // Updating the constraints has (most probably) changed the mask of the matrices.
  // Recreating the matrices will lead to much faster assembly (and reduced memory)
  // with petsc-based solvers

  LinAlg_DestroyMatrix(&DofData_P->A);
  LinAlg_CreateMatrix(&DofData_P->A, &DofData_P->Solver,
                      DofData_P->NbrDof, DofData_P->NbrDof);

  if(Flag_Jac){ // Only when JacNL term appears in formulation
    LinAlg_DestroyMatrix(&DofData_P->Jac);
    LinAlg_CreateMatrix(&DofData_P->Jac, &DofData_P->Solver,
                        DofData_P->NbrDof, DofData_P->NbrDof);
  }
#endif

  TreatmentStatus = Save_TreatmentStatus ;
}


/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ C h a n g e O f C o o r d i n a t e s               */
/* ------------------------------------------------------------------------ */

void  Operation_ChangeOfCoordinates(struct Resolution  * Resolution_P,
				    struct Operation   * Operation_P,
				    struct DofData     * DofData_P0,
				    struct GeoData     * GeoData_P0)
{
  int  i, Nbr_Node, Num_Node, ThisIsTheNode ;
  double x=0., y=0., z=0.;
  struct Value  Value, Value1, Value2 ;
  struct Group  * Group_P ;

  Group_P = (struct Group *)
    List_Pointer(Problem_S.Group,
		 Operation_P->Case.ChangeOfCoordinates.GroupIndex) ;
  if (!Group_P->ExtendedList)  Generate_ExtendedGroup(Group_P) ;
  if (Group_P->FunctionType != NODESOF)
    Message::Error("ChangeOfCoordinates: Group must be of NodesOf function type") ;

  Nbr_Node = List_Nbr(Group_P->ExtendedList) ;

  for (i=0 ; i < Nbr_Node ; i++) {
    List_Read(Group_P->ExtendedList, i, &Num_Node) ;

    if (!Group_P->InitialSuppList ||
	! List_Search(Group_P->ExtendedSuppList, &Num_Node, fcmp_int)) {

      Geo_GetNodesCoordinates(1, &Num_Node, &Current.x, &Current.y, &Current.z) ;

      if (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 >= 0 &&
	  Num_Node == Operation_P->Case.ChangeOfCoordinates.NumNode) {
	x = Current.x ;
	y = Current.y ;
	z = Current.z ;
	Get_ValueOfExpressionByIndex
	  (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2,
	   NULL, 0., 0., 0., &Value1) ;
	ThisIsTheNode = 1 ;
      } else ThisIsTheNode = 0 ;

      Get_ValueOfExpressionByIndex
	(Operation_P->Case.ChangeOfCoordinates.ExpressionIndex,
	 NULL, 0., 0., 0., &Value) ;

      if (ThisIsTheNode) {
	Current.x = Value.Val[0] ;
	Current.y = Value.Val[1] ;
	Current.z = Value.Val[2] ;
	Get_ValueOfExpressionByIndex
	  (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2,
	   NULL, 0., 0., 0., &Value2) ;
	printf("before x %e  y %e  z %e  ||| after x %e  y %e  z %e\n",
	       x, y, z, Value.Val[0], Value.Val[1], Value.Val[2]);
	Message::Info("  before %e  after %e", Value1.Val[0], Value2.Val[0]) ;
      }

      Geo_SetNodesCoordinates(1, &Num_Node,
			      &Value.Val[0], &Value.Val[1], &Value.Val[2]) ;
    }

  }

  Free_SearchGrid(&Current.GeoData->Grid);
  Init_SearchGrid(&Current.GeoData->Grid);
}

/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ D e f o r m e M e s h                               */
/* ------------------------------------------------------------------------ */

void  Operation_DeformeMesh(struct Resolution  * Resolution_P,
                            struct Operation   * Operation_P,
                            struct DofData     * DofData_P0,
                            struct GeoData     * GeoData_P0)
{
  int  i, Num_Node, NumBF_X=-1, NumBF_Y=-1, NumBF_Z=-1 ;
  double Value, un_x = 0., un_y = 0., un_z = 0. ;

  struct DefineSystem * DS ;
  struct Formulation  * FO ;
  struct DefineQuantity  * DQ_P ;
  struct FunctionSpace   * FunctionSpace_P ;
  struct DofData     * DofData_P ;

  DS = (struct DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
					  Operation_P->DefineSystemIndex) ;

  if( List_Nbr(DS->FormulationIndex) > 1 )
    Message::Error("DeformeMesh: Only one formulation must be associated to the system %s",
                   DS->Name) ;

  FO = (struct Formulation *) List_Pointer(Problem_S.Formulation,
					   *((int *)List_Pointer(DS->FormulationIndex, 0))) ;

  if((i = List_ISearchSeq(FO->DefineQuantity, Operation_P->Case.DeformeMesh.Quantity,
			  fcmp_DefineQuantity_Name)) < 0)
    Message::Error("Unknown Quantity '%s' in Formulation %s",
                   Operation_P->Case.DeformeMesh.Quantity, FO->Name ) ;
  DQ_P = (struct DefineQuantity *) List_Pointer(FO->DefineQuantity, i) ;


  DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;

  FunctionSpace_P = (struct FunctionSpace*)List_Pointer(Problem_S.FunctionSpace,
                                                        DQ_P->FunctionSpaceIndex) ;

  for(i = 0 ; i < List_Nbr(FunctionSpace_P->BasisFunction); i++){
    if( (void(*)())((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction,
							i))->Function == (void(*)())BF_NodeX )
      NumBF_X = ((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction, i))->Num;

    if( (void(*)())((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction,
							i))->Function == (void(*)())BF_NodeY )
      NumBF_Y = ((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction, i))->Num;

    if( (void(*)())((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction,
							i))->Function == (void(*)())BF_NodeZ )
      NumBF_Z = ((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction, i))->Num;
  }


  for(i = 0 ; i < List_Nbr(FunctionSpace_P->DofData->DofList) ; i++){
    if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->NumType == NumBF_X ||
        ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->NumType == NumBF_Y ||
        ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->NumType == NumBF_Z ){

      Dof_GetRealDofValue
	(FunctionSpace_P->DofData,
	 ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i )) , &Value) ;

      Num_Node = ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->Entity ;

      /* Reference mesh */
      Geo_SetCurrentGeoData(Current.GeoData =
			    GeoData_P0 + Operation_P->Case.DeformeMesh.GeoDataIndex) ;
      Geo_GetNodesCoordinates(1, &Num_Node, &un_x, &un_y, &un_z) ;

      /* Mesh associated to the electromechanical system */
      if( GeoData_P0 + DofData_P->GeoDataIndex !=
	  GeoData_P0 + Operation_P->Case.DeformeMesh.GeoDataIndex )
	Geo_SetCurrentGeoData(Current.GeoData = GeoData_P0 + DofData_P->GeoDataIndex) ;

      if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i))->NumType == NumBF_X){
	un_x +=  Operation_P->Case.DeformeMesh.Factor * Value ;
	Geo_SetNodesCoordinatesX(1, &Num_Node, &un_x) ;
      }

      if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i))->NumType == NumBF_Y){
	un_y +=  Operation_P->Case.DeformeMesh.Factor * Value ;
	Geo_SetNodesCoordinatesY(1, &Num_Node, &un_y) ;
      }

      if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i))->NumType == NumBF_Z){
	un_z +=  Operation_P->Case.DeformeMesh.Factor * Value ;
	Geo_SetNodesCoordinatesZ(1, &Num_Node, &un_z) ;
      }

    }

  }

  Current.GeoData = GeoData_P0 + Operation_P->Case.DeformeMesh.GeoDataIndex;
  Free_SearchGrid(&Current.GeoData->Grid);
  Init_SearchGrid(&Current.GeoData->Grid) ;
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ O p e r a t i o n O n S y s t e m                             */
/* ------------------------------------------------------------------------ */

void  Init_OperationOnSystem(const char          * Name,
			     struct Resolution   * Resolution_P,
			     struct Operation    * Operation_P ,
			     struct DofData      * DofData_P0,
			     struct GeoData      * GeoData_P0,
			     struct DefineSystem ** DefineSystem_P,
			     struct DofData      ** DofData_P,
			     struct Resolution   * Resolution2_P)
{
  int i ;

  *DefineSystem_P = (struct DefineSystem*)
    List_Pointer(Resolution_P->DefineSystem,Operation_P->DefineSystemIndex) ;
  Current.DefineSystem_P = *DefineSystem_P ; //+++

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
	Message::Error("Unknown DestinationSystem (%s) in System (%s)",
                       (*DefineSystem_P)->DestinationSystemName, (*DefineSystem_P)->Name) ;
      (*DefineSystem_P)->DestinationSystemIndex = i ;
      Dof_DefineUnknownDofFromSolveOrInitDof(DofData_P) ;
    }
    else { /* a changer !!! */
      if ((i = List_ISearchSeq(Resolution_P->DefineSystem,
			       (*DefineSystem_P)->DestinationSystemName,
			       fcmp_DefineSystem_Name)) < 0)
	Message::Error("Unknown DestinationSystem (%s) in System (%s)",
                       (*DefineSystem_P)->DestinationSystemName, (*DefineSystem_P)->Name) ;
      (*DefineSystem_P)->DestinationSystemIndex = i ;
    }
  }

  const char *str = Name ? Name : Get_StringForDefine(Operation_Type, Operation_P->Type);
  Message::Info("%s[%s]", str, (*DefineSystem_P)->Name) ;
  Message::ProgressMeter(0, 0, "Processing (%s)", str);
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ S y s t e m D a t a                                           */
/* ------------------------------------------------------------------------ */

void  Init_SystemData(struct DofData * DofData_P, int Flag_Jac)
{
  if (DofData_P->Flag_Init[0] < 1) {
    DofData_P->Flag_Init[0] = 1 ;
    LinAlg_CreateSolver(&DofData_P->Solver, DofData_P->SolverDataFileName) ;
    LinAlg_CreateMatrix(&DofData_P->A, &DofData_P->Solver,
			DofData_P->NbrDof, DofData_P->NbrDof) ;
    LinAlg_CreateVector(&DofData_P->b, &DofData_P->Solver, DofData_P->NbrDof) ;
  }

  /* GenerateOnly: Taking advantage of the invariant parts of the matrix in every time-step */

  if(DofData_P->Flag_InitOnly[0]==1){
    DofData_P->Flag_InitOnly[0] = 2;
    Message::Info("Initializing System {A1,b1}");
    LinAlg_CreateMatrix(&DofData_P->A1, &DofData_P->Solver,
			DofData_P->NbrDof, DofData_P->NbrDof) ;
    LinAlg_CreateVector(&DofData_P->b1, &DofData_P->Solver, DofData_P->NbrDof) ;
  }

  if(DofData_P->Flag_InitOnly[1]==1){
    DofData_P->Flag_InitOnly[1] = 2;
    Message::Info("Initializing System {A2,b2}");
    LinAlg_CreateMatrix(&DofData_P->A2, &DofData_P->Solver,
			DofData_P->NbrDof, DofData_P->NbrDof) ;
    LinAlg_CreateVector(&DofData_P->b2, &DofData_P->Solver, DofData_P->NbrDof) ;
  }

  if(DofData_P->Flag_InitOnly[2]==1){
    DofData_P->Flag_InitOnly[2] = 2;
    Message::Info("Initializing System {A3,b3}");
    LinAlg_CreateMatrix(&DofData_P->A3, &DofData_P->Solver,
			DofData_P->NbrDof, DofData_P->NbrDof) ;
    LinAlg_CreateVector(&DofData_P->b3, &DofData_P->Solver, DofData_P->NbrDof) ;
  }

  if (DofData_P->Flag_Init[0] < 2 && Flag_Jac) {
    DofData_P->Flag_Init[0] = 2 ;
    LinAlg_CreateMatrix(&DofData_P->Jac, &DofData_P->Solver,
			DofData_P->NbrDof, DofData_P->NbrDof) ;
    LinAlg_CreateVector(&DofData_P->res, &DofData_P->Solver, DofData_P->NbrDof) ;
    LinAlg_CreateVector(&DofData_P->dx, &DofData_P->Solver, DofData_P->NbrDof) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  C a l _ S o l u t i o n E r r o r                                       */
/* ------------------------------------------------------------------------ */

void Cal_SolutionError(gVector *dx, gVector *x, int diff, double *MeanError)
{
  // FIXME: this is a really bad implementation: it should be replaced with
  // Cal_SolutionErrorRatio()

  int    i, n;
  double valx, valdx, valxi = 0., valdxi = 0.,errsqr = 0., xmoy = 0., dxmoy = 0.;
  double tol, nvalx, nvaldx ;

  LinAlg_GetVectorSize(dx, &n);

  if (gSCALAR_SIZE == 1)
    for (i=0 ; i<n ; i++) {
      LinAlg_GetAbsDoubleInVector(&valx, x, i) ;
      LinAlg_GetAbsDoubleInVector(&valdx, dx, i) ;
      xmoy += valx ;
      if(diff) dxmoy += (valdx-valx) ;
      else     dxmoy += valdx ;
    }
  if (gSCALAR_SIZE == 2)
    for (i=0 ; i<n ; i++) {
      LinAlg_GetComplexInVector(&valx, &valxi, x, i, i+1);
      LinAlg_GetComplexInVector(&valdx, &valdxi, dx, i, i+1);
      xmoy += sqrt(valx*valx+valxi*valxi) ;
      if(diff) dxmoy += sqrt((valdx-valx)*(valdx-valx)+(valdxi-valxi)*(valdxi-valxi)) ;
      else     dxmoy += sqrt(valdx*valdx + valdxi*valdxi) ;
    }

  xmoy  /= (double)n ;
  dxmoy /= (double)n ;

  if (xmoy > 1.e-30) {
    tol = xmoy*1.e-10 ;
    if (gSCALAR_SIZE == 1)
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

    if (gSCALAR_SIZE == 2)
      for (i=0 ; i<n ; i++) {
        LinAlg_GetComplexInVector(&valx, &valxi, x, i, i+1);
        LinAlg_GetComplexInVector(&valdx, &valdxi, dx, i, i+1);
        nvalx = sqrt(valx*valx+valxi*valxi) ;
        nvaldx = sqrt(valdx*valdx+valdxi*valdxi) ;
        if(diff){
          if (nvalx > tol)
            errsqr += sqrt((valdx-valx)*(valdx-valx)+(valdxi-valxi)*(valdxi-valxi))/nvalx ;
          else
            errsqr += sqrt((valdx-valx)*(valdx-valx)+(valdxi-valxi)*(valdxi-valxi));
        }
        else{
          if (nvalx > tol) errsqr += nvaldx/nvalx ;
          else 	        errsqr += nvaldx ;
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
/*  T r e a t m e n t _ O p e r a t i o n                                   */
/* ------------------------------------------------------------------------ */

void  Treatment_Operation(struct Resolution  * Resolution_P,
                          List_T             * Operation_L,
                          struct DofData     * DofData_P0,
                          struct GeoData     * GeoData_P0,
                          struct Resolution  * Resolution2_P,
                          struct DofData     * DofData2_P0)
{
  int     i, j, k, l ;
  double  d, d1, d2, *Scales ;
  int     Nbr_Operation, Nbr_Sol, i_Operation, Num_Iteration ;
  int     Flag_Jac, Flag_CPU, Flag_Binary = 0, Flag_SolveAgain = 0 ;
  int     Save_TypeTime ;
  double  Save_Time, Save_TimeImag, Save_DTime, Save_TimeStep ;
  double  Save_Iteration ;
  Element *Save_Element = 0;
  double  MeanError, RelFactor_Modified ;
  char    *str;
  char    ResName[256], ResNum[256] ;
  char    FileName[256];
  char    FileName_exMH[256];
  gScalar tmp ;
  FILE    *fp = stdout;

  struct Operation      * Operation_P ;
  struct DefineSystem   * DefineSystem_P ;
  struct DofData        * DofData_P, * DofData2_P ;
  struct Solution       * Solution_P, Solution_S ;
  struct PostOperation  * PostOperation_P ;
  struct PostProcessing * PostProcessing_P ;
  struct Dof            Dof, * Dof_P ;
  struct Value          Value ;

  int N ;

  static int RES0 = -1 ;

  /* adaptive relaxation */
  gVector x_Save;
  int NbrSteps_relax;
  double  Norm;
  double Frelax, Frelax_Opt, Error_Prev;
  int istep;

  int Nbr_Formulation, Index_Formulation ;
  struct Formulation * Formulation_P ;

  int iTime ;
  double *Val_Pulsation ;
  double hop[NBR_MAX_HARMONIC][NBR_MAX_HARMONIC] ;
  double DCfactor ;

  int NbrHar1, NbrHar2, NbrDof1, NbrDof2 ;
  double dd ;
  int NumDof, iMat ;

  int row_old, row_new, col_old, col_new;

  double aii, ajj;
  int nnz__;

  List_T  * DofList_MH_moving ;
  static int NbrDof_MH_moving;
  static int *NumDof_MH_moving ;
  static struct Dof ** Dof_MH_moving ;

  Nbr_Operation = List_Nbr(Operation_L) ;

  for (i_Operation = 0 ; i_Operation < Nbr_Operation ; i_Operation++) {
    Operation_P = (struct Operation*)List_Pointer(Operation_L, i_Operation) ;

    if(Message::GetCommSize() > 1 && Operation_P->Rank >= 0 &&
       Message::GetCommRank() != (Operation_P->Rank % Message::GetCommSize()))
      		continue;

    Flag_CPU = 0 ;
    Flag_Jac = 0 ;

    if(Message::GetOnelabAction() == "stop") break;

    switch (Operation_P->Type) {

      /*  -->  S y s t e m C o m m a n d              */
      /*  ------------------------------------------  */

    case OPERATION_SYSTEMCOMMAND :
      //system(Operation_P->Case.SystemCommand.String);
      BlockingSystemCall(Operation_P->Case.SystemCommand.String);
      break ;

      /*  -->  G e n e r a t e                        */
      /*  ------------------------------------------  */

    case OPERATION_GENERATEJAC :  Flag_Jac = 1 ;
    case OPERATION_GENERATERHS :
    case OPERATION_GENERATE :
      Init_OperationOnSystem(Get_StringForDefine(Operation_Type, Operation_P->Type),
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(Operation_P->Type == OPERATION_GENERATERHS) DofData_P->Flag_RHS = 1;

      Current.TypeAssembly = ASSEMBLY_AGGREGATE ;

      Init_SystemData(DofData_P, Flag_Jac) ;
      if (Operation_P->Case.Generate.GroupIndex >= 0)
	Generate_Group = (struct Group *) List_Pointer(Problem_S.Group,
						       Operation_P->Case.Generate.GroupIndex) ;
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 0) ;

      if (Operation_P->Case.Generate.GroupIndex >= 0) Generate_Group = NULL ;

      DofData_P->Flag_RHS = 0;
      if(!Flag_Jac) Flag_CPU = 1 ;
      break ;

      /*  -->  G e n e r a t e S e p a r a t e        */
      /*  ------------------------------------------  */

    case OPERATION_GENERATESEPARATE :
      Init_OperationOnSystem("GenerateSeparate",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if (Operation_P->Case.Generate.GroupIndex >= 0)
	Generate_Group = (struct Group *) List_Pointer(Problem_S.Group,
						       Operation_P->Case.Generate.GroupIndex) ;
      Current.TypeAssembly = ASSEMBLY_SEPARATE ;
      Init_Update = 0 ; /* modif... ! */

      Init_SystemData(DofData_P, Flag_Jac) ;
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 1) ;

      if (Operation_P->Case.Generate.GroupIndex >= 0) Generate_Group = NULL ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  G e n e r a t e O n l y                */
      /*  ------------------------------------------  */

    case OPERATION_GENERATEONLYJAC :  Flag_Jac  = 1 ;
    case OPERATION_GENERATEONLY:
      Init_OperationOnSystem(Get_StringForDefine(Operation_Type, Operation_P->Type),
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(DofData_P->Flag_Only < 2) DofData_P->Flag_Only += 1 ;

      DofData_P->OnlyTheseMatrices = Operation_P->Case.GenerateOnly.MatrixIndex_L ;

      if (DofData_P->Flag_Only <= 2)
	for (i = 0 ; i < List_Nbr(DofData_P->OnlyTheseMatrices); i++){
	  List_Read( DofData_P->OnlyTheseMatrices, i, &iMat);
	  switch(iMat){
	  case 1: DofData_P->Flag_InitOnly[0] = 1 ; break ;
	  case 2: DofData_P->Flag_InitOnly[1] = 1 ; break ;
	  case 3: DofData_P->Flag_InitOnly[2] = 1 ; break ;
	  }
	}

      Current.TypeAssembly = ASSEMBLY_AGGREGATE ;

      Init_SystemData(DofData_P, Flag_Jac) ;
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 0) ;
      if(!Flag_Jac) Flag_CPU = 1 ;
      break;

      /*  -->  U p d a t e                            */
      /*  ------------------------------------------  */

    case OPERATION_UPDATE :
      Init_OperationOnSystem("Update",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      Operation_Update(DefineSystem_P, DofData_P, DofData_P0,
                       Operation_P->Case.Update.ExpressionIndex) ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  U p d a t e C o n s t r a i n t        */
      /*  ------------------------------------------  */

    case OPERATION_UPDATECONSTRAINT :
      Init_OperationOnSystem("UpdateConstraint",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      UpdateConstraint_System(DefineSystem_P, DofData_P, DofData_P0,
			      Operation_P->Case.UpdateConstraint.GroupIndex,
			      Operation_P->Case.UpdateConstraint.Type, Flag_Jac) ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  S e l e c t C o r r e c t i o n        */
      /*  ------------------------------------------  */

    case OPERATION_SELECTCORRECTION :
      Init_OperationOnSystem("SelectCorrection",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      if (!Operation_P->Case.SelectCorrection.Iteration) {
	/* Full solution to be considered again */
	Message::Info("  Full solution to be considered again");
	if (DofData_P->CorrectionSolutions.Flag) {
	  DofData_P->CorrectionSolutions.Flag = 0;
	  DofData_P->Solutions = DofData_P->CorrectionSolutions.Save_FullSolutions ;
	  DofData_P->CurrentSolution
	    = DofData_P->CorrectionSolutions.Save_CurrentFullSolution ;
	}
	else {
	  Message::Error("SelectCorrection: DofData #%d already selected as a full solution",
                         DofData_P->Num);
	}

      }
      else {
	/* Last correction to be considered */
	if (!DofData_P->CorrectionSolutions.Flag) {
	  DofData_P->CorrectionSolutions.Flag = 1;
	  DofData_P->CorrectionSolutions.Save_FullSolutions = DofData_P->Solutions ;
	  DofData_P->CorrectionSolutions.Save_CurrentFullSolution
	    = DofData_P->CurrentSolution ;

	  /* last correction solutions */
	  if ((i = List_Nbr(DofData_P->CorrectionSolutions.AllSolutions)-1) >= 0) {
	    List_Read(DofData_P->CorrectionSolutions.AllSolutions, i,
		      &DofData_P->Solutions);
	  }
	  else {
	    DofData_P->CorrectionSolutions.AllSolutions =
	      List_Create(10, 10, sizeof(List_T*));
	    DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution)) ;
	    List_Add(DofData_P->CorrectionSolutions.AllSolutions, &DofData_P->Solutions);
	  }

	  /* last time step correction */
	  if ((i = List_Nbr(DofData_P->Solutions)-1) >= 0) {
	    DofData_P->CurrentSolution = (struct Solution*)
	      List_Pointer(DofData_P->Solutions, i) ;
	  }
	  else {
	    DofData_P->CurrentSolution = NULL;
	    /* CurrentSolution will be defined later */
	  }
	}
	else {
	  Message::Error("SelectCorrection: DofData #%d already selected as a correction",
                         DofData_P->Num);
	}
      }

      break ;

      /*  -->  A d d C o r r e c t i o n              */
      /*  ------------------------------------------  */

    case OPERATION_ADDCORRECTION :
      Init_OperationOnSystem("AddCorrection",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if (DofData_P->CorrectionSolutions.Flag) {

	if (DofData_P->CorrectionSolutions.Save_CurrentFullSolution->TimeStep
	    !=
	    DofData_P->CurrentSolution->TimeStep) {

	  Solution_S.TimeStep = (int)Current.TimeStep ;
	  Solution_S.Time = Current.Time ;
	  Solution_S.TimeImag = Current.TimeImag ;
	  Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
	  Solution_S.SolutionExist = 1 ;
	  LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof) ;
	  LinAlg_ZeroVector(&Solution_S.x) ;

	  List_Add(DofData_P->CorrectionSolutions.Save_FullSolutions, &Solution_S) ;
	  DofData_P->CorrectionSolutions.Save_CurrentFullSolution =
	    (struct Solution*)
	    List_Pointer(DofData_P->CorrectionSolutions.Save_FullSolutions,
			 List_Nbr(DofData_P->CorrectionSolutions.Save_FullSolutions)-1) ;
	}

        Cal_SolutionError
          (&DofData_P->CurrentSolution->x,
           &DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x,
           0, &MeanError) ;
        //LinAlg_VectorNorm2(&DofData_P->CurrentSolution->x, &MeanError);
	Message::Info("Mean error: %.3e  (after %d iteration%s)",
                      MeanError, (int)Current.Iteration, ((int)Current.Iteration==1)?"":"s") ;
        Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Residual",
                                       MeanError);

	Current.RelativeDifference +=
	  MeanError * Operation_P->Case.AddCorrection.Alpha ;

	LinAlg_AddVectorVector
	  (&DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x,
	   &DofData_P->CurrentSolution->x,
	   &DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x) ;


      }
      else {
        Message::Error("AddCorrection: DofData #%d is not selected as a correction",
                       DofData_P->Num);
      }

      break ;

      /*  -->  I n i t C o r r e c t i o n            */
      /*  ------------------------------------------  */

    case OPERATION_INITCORRECTION :
      Init_OperationOnSystem("InitCorrection",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if (DofData_P->CorrectionSolutions.Flag) {

	Solution_S.TimeStep = (int)Current.TimeStep ;
	Solution_S.Time = Current.Time ;
	Solution_S.TimeImag = Current.TimeImag ;
	Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
	Solution_S.SolutionExist = 1 ;
	LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof) ;

	/* The last full solution, if any, initializes the current correction */
	if (List_Nbr(DofData_P->CorrectionSolutions.Save_FullSolutions)) {
	  LinAlg_CopyVector
	    (&((struct Solution *)
	       List_Pointer
	       (DofData_P->CorrectionSolutions.Save_FullSolutions,
		List_Nbr(DofData_P->CorrectionSolutions.Save_FullSolutions)-1))->x,
	     &Solution_S.x) ;
	}
	else {
	  LinAlg_ZeroVector(&Solution_S.x) ;
	}

	List_Add(DofData_P->Solutions, &Solution_S) ;
	DofData_P->CurrentSolution =
	  (struct Solution*)
	  List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
      }
      else {
        Message::Error("InitCorrection: DofData #%d is not selected as a correction",
                       DofData_P->Num);
      }

      break ;

      /*  -->  M u l t i p l y S o l u t i o n        */
      /*  ------------------------------------------  */

    case OPERATION_MULTIPLYSOLUTION :
      Init_OperationOnSystem("MultiplySolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      LinAlg_ProdVectorDouble(&DofData_P->CurrentSolution->x,
			      Operation_P->Case.MultiplySolution.Alpha,
			      &DofData_P->CurrentSolution->x) ;
      break ;

      /*  -->  A d d O p p o s i t e F u l l S o l u t i o n  */
      /*  --------------------------------------------------  */

    case OPERATION_ADDOPPOSITEFULLSOLUTION :
      Init_OperationOnSystem("AddOppositeFullSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      LinAlg_AddVectorProdVectorDouble
	(&DofData_P->CurrentSolution->x,
	 &DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x, -1.,
	 &DofData_P->CurrentSolution->x) ;
      break ;

      /*  -->  S o l v e                              */
      /*  ------------------------------------------  */
    case OPERATION_SOLVEAGAIN : Flag_SolveAgain = 1 ;
    case OPERATION_SOLVE :
      /*  Solve : A x = b  */
      Init_OperationOnSystem(Flag_SolveAgain ? "SolveAgain" : "Solve",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if (DofData_P->Flag_Only){
	if(DofData_P->Flag_InitOnly[0]){
	  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A1, &DofData_P->A);
	  LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b1, &DofData_P->b) ;
	}

	if(DofData_P->Flag_InitOnly[1]){
	  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A2, &DofData_P->A) ;
	  LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b2, &DofData_P->b) ;
	}
	if(DofData_P->Flag_InitOnly[2]){
	  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A3, &DofData_P->A) ;
	  LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b3, &DofData_P->b) ;
	}

	LinAlg_AssembleMatrix(&DofData_P->A) ;
	LinAlg_AssembleVector(&DofData_P->b) ;
      }

      if(!Flag_SolveAgain)
	LinAlg_Solve(&DofData_P->A, &DofData_P->b, &DofData_P->Solver,
		     &DofData_P->CurrentSolution->x,
                     (Message::GetCommSize() > 1 || Operation_P->Rank < 0) ? 0 : Operation_P->Rank) ;
      else
	LinAlg_SolveAgain(&DofData_P->A, &DofData_P->b, &DofData_P->Solver,
                          &DofData_P->CurrentSolution->x,
                          (Message::GetCommSize() > 1 || Operation_P->Rank < 0) ? 0 : Operation_P->Rank) ;

      Flag_CPU = 1 ;
      break ;

    // Using PETSC nonlinear solvers - SNES, nonlinear loop internal to PETSC
    // Jacobian furnished or not (finite differences)...
    case OPERATION_SOLVENL :
      /*  Solve nonlinear system: A(x) x = b(x)  */
      Init_OperationOnSystem("Using SNES: SolveNL",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(DofData_P->Flag_Init[0] < 2){
	Message::Info("Initializing Jacobian system: no JacNL term");
        LinAlg_CreateMatrix(&DofData_P->Jac, &DofData_P->Solver,
                            DofData_P->NbrDof, DofData_P->NbrDof) ;
        LinAlg_CreateVector(&DofData_P->res, &DofData_P->Solver, DofData_P->NbrDof) ;
        LinAlg_CreateVector(&DofData_P->dx, &DofData_P->Solver, DofData_P->NbrDof) ;

        LinAlg_ZeroMatrix(&DofData_P->Jac) ;
        LinAlg_ZeroVector(&DofData_P->res) ;
        LinAlg_ZeroVector(&DofData_P->dx) ;

        LinAlg_AssembleMatrix(&DofData_P->Jac) ;
        LinAlg_AssembleVector(&DofData_P->res) ;
        LinAlg_AssembleVector(&DofData_P->dx) ;
      }

      LinAlg_SolveNL(&DofData_P->A, &DofData_P->b, &DofData_P->Jac, &DofData_P->res,
                     &DofData_P->Solver, &DofData_P->dx,
                     (Message::GetCommSize() > 1 || Operation_P->Rank < 0) ? 0 : Operation_P->Rank) ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  S o l v e J a c                        */
      /*  ------------------------------------------  */

    case OPERATION_SOLVEJACAGAIN : Flag_SolveAgain = 1 ;
    case OPERATION_SOLVEJAC :
      /*  SolveJac : J(xn) dx = b(xn) - A(xn) xn ;  x = xn + dx  */

      Flag_Jac = 1 ;
      Init_OperationOnSystem(Flag_SolveAgain ? "SolveJacAgain" : "SolveJac",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(DofData_P->Flag_Init[0] < 2)
	Message::Error("Jacobian system not initialized (missing GenerateJac?)");

      if (DofData_P->Flag_Only){
	if(DofData_P->Flag_InitOnly[0]){
	  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A1, &DofData_P->A);
	  LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b1, &DofData_P->b) ;
	}

	if(DofData_P->Flag_InitOnly[1]){
	  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A2, &DofData_P->A) ;
	  LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b2, &DofData_P->b) ;
	}
	if(DofData_P->Flag_InitOnly[2]){
	  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A3, &DofData_P->A) ;
	  LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b3, &DofData_P->b) ;
	}
	LinAlg_AssembleMatrix(&DofData_P->A) ;
	LinAlg_AssembleVector(&DofData_P->b) ;
      }

      // Store sum in A (not in Jac) for performance reasons (the
      // sparsity pattern of Jac is a subset of the sparsity pattern
      // of A)

      LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
      LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->Jac, &DofData_P->A) ;
      LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;// res = b(xn)-A(xn)*xn
      LinAlg_DummyVector(&DofData_P->res) ;

      if(!Flag_SolveAgain)
        LinAlg_Solve(&DofData_P->A, &DofData_P->res, &DofData_P->Solver, &DofData_P->dx) ;
      else
        LinAlg_SolveAgain(&DofData_P->A, &DofData_P->res, &DofData_P->Solver, &DofData_P->dx) ;

      Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0, &MeanError) ;
      //LinAlg_VectorNorm2(&DofData_P->dx, &MeanError);
      if(!Flag_IterativeLoopN){
        Message::Info("%3ld Nonlinear Residual norm %14.12e",
                      (int)Current.Iteration, MeanError);
        Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Residual",
                                       MeanError);
      }

      Current.RelativeDifference += MeanError ;

      if (!Flag_IterativeLoop) {
        LinAlg_ProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor, &DofData_P->dx) ;
      }
      else {  // Attention: phase test ... Technique bricolee ... provisoire
        if (Current.Iteration == 1. || MeanError < Current.RelativeDifferenceOld)
          LinAlg_ProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor, &DofData_P->dx) ;
        else {
          RelFactor_Modified = Current.RelaxationFactor /
            (MeanError / Current.RelativeDifferenceOld) ;
	  Message::Info("RelFactor modified = %g", RelFactor_Modified) ;
          LinAlg_ProdVectorDouble(&DofData_P->dx, RelFactor_Modified, &DofData_P->dx) ;
          Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0, &MeanError) ;
          //LinAlg_VectorNorm2(&DofData_P->dx, &MeanError);
	  Message::Info("Mean error: %.3e", MeanError) ;
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
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(DofData_P->Flag_Init[0] < 2)
	Message::Error("Jacobian system not initialized (missing GenerateJac?)");

      LinAlg_AddMatrixMatrix(&DofData_P->Jac, &DofData_P->A, &DofData_P->Jac) ;
      LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
      LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;

      LinAlg_DummyVector(&DofData_P->res) ;

      LinAlg_Solve(&DofData_P->Jac, &DofData_P->res, &DofData_P->Solver, &DofData_P->dx) ;

      Message::Cpu("");

      /* save CurrentSolution */
      LinAlg_CreateVector(&x_Save, &DofData_P->Solver, DofData_P->NbrDof) ;
      LinAlg_CopyVector(&DofData_P->CurrentSolution->x, &x_Save);

      Flag_RHS = 1;
      /* MHJacNL-terms don't contribute to the RHS and residu, and are thus disregarded */

      Error_Prev = 1e99 ;  Frelax_Opt = 1. ;

      if (!(NbrSteps_relax = List_Nbr(Operation_P->Case.SolveJac_AdaptRelax.Factor_L)))
	  Message::Error("No factors provided for Adaptive Relaxation");

      for( istep = 0 ; istep < NbrSteps_relax ; istep++ ){

        if(Message::GetOnelabAction() == "stop") break;

	List_Read(Operation_P->Case.SolveJac_AdaptRelax.Factor_L, istep, &Frelax);

	/* new trial solution = x + Frelax * dx */
	LinAlg_CopyVector(&x_Save, &DofData_P->CurrentSolution->x);
	LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x, &DofData_P->dx,
					 Frelax, &DofData_P->CurrentSolution->x);
	/* LinAlg_PrintVector(stdout, &DofData_P->CurrentSolution->x); */

	/* calculate residual with trial solution */
	ReGenerate_System(DefineSystem_P, DofData_P, DofData_P0) ;
	LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &DofData_P->res) ;
	LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res) ;

	/* check whether norm of residual is smaller than previous ones */
	LinAlg_VectorNorm2(&DofData_P->res, &Norm);
	LinAlg_GetVectorSize(&DofData_P->res, &N);
	Norm /= (double)N;
	Message::Info(" adaptive relaxation : factor = %8f   Norm residual = %10.4e", Frelax, Norm) ;

	if (Norm < Error_Prev) {
	  Error_Prev = Norm;
	  Frelax_Opt = Frelax;
	} else if ( !Operation_P->Case.SolveJac_AdaptRelax.CheckAll && istep > 0 ) break ;

      }

      Message::Info(" => optimal relaxation factor = %f", Frelax_Opt) ;

      /*  solution = x + Frelax_Opt * dx */
      LinAlg_CopyVector(&x_Save, &DofData_P->CurrentSolution->x);
      LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x, &DofData_P->dx,
				       Frelax_Opt, &DofData_P->CurrentSolution->x);

      MeanError = Error_Prev ;
      Message::Info("Mean error: %.3e  (after %d iteration%s)",
                    MeanError, (int)Current.Iteration, ((int)Current.Iteration==1)?"":"s") ;
      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Residual",
                                     MeanError);

      Current.RelativeDifference = MeanError;
      Flag_CPU = 1 ;
      Flag_RHS = 0 ;
      LinAlg_DestroyVector(&x_Save);
      break ;

      /*  -->  EigenSolve                             */
      /*  ------------------------------------------  */

    case OPERATION_EIGENSOLVE :
      Init_OperationOnSystem("EigenSolve",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      EigenSolve(DofData_P, Operation_P->Case.EigenSolve.NumEigenvalues,
		 Operation_P->Case.EigenSolve.Shift_r,
		 Operation_P->Case.EigenSolve.Shift_i) ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  EigenSolveJac                             */
      /*  ------------------------------------------  */

    case OPERATION_EIGENSOLVEJAC :
      Init_OperationOnSystem("EigenSolveJac",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      EigenSolve(DofData_P, Operation_P->Case.EigenSolve.NumEigenvalues,
		 Operation_P->Case.EigenSolve.Shift_r,
		 Operation_P->Case.EigenSolve.Shift_i) ;
      /* Insert intelligent convergence test here :-) */
      Current.RelativeDifference = 1.0 ;
      Flag_CPU = 1 ;
      break ;

      /*  -->  Perturbation                           */
      /*  ------------------------------------------  */

    case OPERATION_PERTURBATION :
      Init_OperationOnSystem("Perturbation",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
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

      /*  -->  S e t C u r r e n t S y s t e m        */
      /*  ------------------------------------------  */

    case OPERATION_SETCURRENTSYSTEM :
      Init_OperationOnSystem("SetCurrentSystem",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      break ;

      /*  -->  I n i t S o l u t i o n                */
      /*  ------------------------------------------  */

    case OPERATION_INITSOLUTION :
      Init_OperationOnSystem("InitSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(Flag_RESTART){
        if (!DofData_P->Solutions)
          Message::Error("No solution to restart the computation");

        for(i = 0 ; i < DofData_P->NbrAnyDof ; i++){
          Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i) ;
          if(Dof_P->Type == DOF_UNKNOWN_INIT) Dof_P->Type = DOF_UNKNOWN ;
        }

	for(i = 0; i < List_Nbr(DofData_P->Solutions); i++){
	  Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions, i);
	  Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
	  /* The last solution is the current one */
	  if(i == List_Nbr(DofData_P->Solutions) - 1)
	    DofData_P->CurrentSolution = Solution_P;
	}
	RES0 = (int)Current.TimeStep ;
      }
      else{
        if (!DofData_P->Solutions)
          DofData_P->Solutions = List_Create( 20, 20, sizeof(struct Solution)) ;

	Solution_S.TimeStep = (int)Current.TimeStep ;
        Solution_S.Time = Current.Time ;
        Solution_S.TimeImag = Current.TimeImag ;
        Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;

	Solution_S.SolutionExist = 1 ;
        LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof) ;

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
        // FIXME: required by parallel version
        LinAlg_AssembleVector(&Solution_S.x) ;

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
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;
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
      Dof_WriteFileRES(ResName, DofData_P, Flag_BIN, Current.Time, Current.TimeImag,
		       (int)Current.TimeStep) ;
      break ;

      /*  -->  S a v e S o l u t i o n W i t h E n t i t y N u m  */
      /*  ------------------------------------------------  */

    case OPERATION_SAVESOLUTION_WITH_ENTITY_NUM :
      Init_OperationOnSystem("SaveSolutionWithEntityNum",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;
      strcpy(ResName, Name_Generic) ;
      //strcat(ResName, ".txt") ;
      {
        int num = Operation_P->Case.SaveSolutionWithEntityNum.GroupIndex;
        Group *g = 0;
        if (num >= 0) g = (Group*)List_Pointer(Problem_S.Group, num);
        bool saveFixed = Operation_P->Case.SaveSolutionWithEntityNum.SaveFixed;
        Dof_WriteFileRES_WithEntityNum(ResName, DofData_P, GeoData_P0, g, saveFixed) ;
      }
      break ;

      /*  -->  S a v e S o l u t i o n s              */
      /*  ------------------------------------------  */

    case OPERATION_SAVESOLUTIONS :
      Init_OperationOnSystem("SaveSolutions",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;
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
	  Message::Warning("Solution #%d doesn't exist anymore: skipping", i) ;
	else
	  Dof_WriteFileRES(ResName, DofData_P, Flag_BIN,
			   DofData_P->CurrentSolution->Time,
			   DofData_P->CurrentSolution->TimeImag, i) ;
      }
      break ;

      /*  -->  M o v i n g   B a n d                  */
      /*  ------------------------------------------  */

    case OPERATION_INIT_MOVINGBAND2D :
      Message::Info("Init_MovingBand2D") ;
      Init_MovingBand2D( (struct Group *)
			 List_Pointer(Problem_S.Group,
				      Operation_P->Case.Init_MovingBand2D.GroupIndex)) ;
      break ;

    case OPERATION_MESH_MOVINGBAND2D :
      Message::Info("====> Mesh_MovingBand2D") ;
      Mesh_MovingBand2D( (struct Group *)
			 List_Pointer(Problem_S.Group,
				      Operation_P->Case.Mesh_MovingBand2D.GroupIndex)) ;
      break ;


    case OPERATION_GENERATE_MH_MOVING :
      Init_OperationOnSystem("Generate_MH_Moving",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(gSCALAR_SIZE == 2)
	Message::Error("FIXME: Generate_MH_Moving will not work in complex arithmetic");

      Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

      Generate_Group = (struct Group *)
	List_Pointer(Problem_S.Group, Operation_P->Case.Generate_MH_Moving.GroupIndex) ;

      MH_Moving_Matrix = (double **) Malloc(Current.NbrHar*sizeof(double *)) ;
      for (k = 0 ; k < Current.NbrHar ; k++)
	MH_Moving_Matrix[k] = (double *) Malloc(Current.NbrHar*sizeof(double)) ;

      if (! (Val_Pulsation = Current.DofData->Val_Pulsation))
	Message::Error("Generate_MH_moving can only be used for harmonic problems");

      for (k = 0 ; k < Current.NbrHar ; k++)
	for (l = 0 ; l < Current.NbrHar ; l++)
	  hop[k][l] = 0.;

      MH_Moving_Matrix_simple = 1;

      for (iTime = 0 ; iTime < Operation_P->Case.Generate_MH_Moving.NbrStep ; iTime++) {

	Current.Time = (double)iTime/(double)Operation_P->Case.Generate_MH_Moving.NbrStep *
	  Operation_P->Case.Generate_MH_Moving.Period ;
	Current.DTime = 1./(double)Operation_P->Case.Generate_MH_Moving.NbrStep *
	  Operation_P->Case.Generate_MH_Moving.Period ;
	Current.TimeStep = iTime;

	Message::Info("Generate_MH_Moving : Step %d/%d (Time = %e  DTime %e)",
                      (int)(Current.TimeStep+1), Operation_P->Case.Generate_MH_Moving.NbrStep,
                      Current.Time, Current.DTime) ;

	Treatment_Operation(Resolution_P, Operation_P->Case.Generate_MH_Moving.Operation,
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	for (k = 0 ; k < Current.NbrHar ; k++)
	  for (l = 0 ; l < Current.NbrHar ; l++) {
	    if (Val_Pulsation[k/2]) DCfactor = 2. ; else DCfactor = 1. ;
	    MH_Moving_Matrix[k][l] = DCfactor /
	      (double)Operation_P->Case.Generate_MH_Moving.NbrStep *
	      ( fmod(k,2) ? -sin(Val_Pulsation[k/2]*Current.Time) :
		cos(Val_Pulsation[k/2]*Current.Time) ) *
	      ( fmod(l,2) ? -sin(Val_Pulsation[l/2]*Current.Time) :
		cos(Val_Pulsation[l/2]*Current.Time) ) ;
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

      Current.TimeStep = 0;
      Current.Time = 0.;

      for (k = 0 ; k < Current.NbrHar ; k++) Free (MH_Moving_Matrix[k]) ;
      Free (MH_Moving_Matrix) ;
      MH_Moving_Matrix = NULL ;
      MH_Moving_Matrix_simple = 0 ;

      Generate_Group = NULL;

      Message::Cpu("");
      break ;

    case OPERATION_GENERATE_MH_MOVING_S :
      Init_OperationOnSystem("Generate_MH_Moving_Separate",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;

      Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

      Generate_Group = (struct Group *)
	List_Pointer(Problem_S.Group, Operation_P->Case.Generate_MH_Moving_S.GroupIndex) ;

      MH_Moving_Matrix = (double **) Malloc(Current.NbrHar*sizeof(double *)) ;
      for (k = 0 ; k < Current.NbrHar ; k++)
	MH_Moving_Matrix[k] = (double *) Malloc(Current.NbrHar*sizeof(double)) ;

      if (! (Val_Pulsation = Current.DofData->Val_Pulsation))
	Message::Error("Generate_MH_moving can only be used for harmonic problems");

      for (k = 0 ; k < Current.NbrHar ; k++)
	for (l = 0 ; l < Current.NbrHar ; l++)
	  hop[k][l] = 0.;

      DummyDof = DofData_P->DummyDof ;
      DofData_P->DummyDof = NULL ;

      for (iTime = 0 ; iTime < Operation_P->Case.Generate_MH_Moving_S.NbrStep ; iTime++) {

	Current.Time = (double)iTime/(double)Operation_P->Case.Generate_MH_Moving_S.NbrStep *
	  Operation_P->Case.Generate_MH_Moving_S.Period ;
	Current.DTime = 1./(double)Operation_P->Case.Generate_MH_Moving_S.NbrStep *
	  Operation_P->Case.Generate_MH_Moving_S.Period ;
	Current.TimeStep = iTime;

	if (!iTime) {
	  Message::Info("Generate_MH_Moving_Separate : probing for any degrees of freedom");
	  DofTree_MH_moving = Tree_Create(sizeof(struct Dof), fcmp_Dof) ;

	  /* probing assembly */
	  MH_Moving_Matrix_probe = 1;
	  for (i = 0 ; i < Nbr_Formulation ; i++) {
	    List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation) ;
	    Formulation_P = (struct Formulation*)
	      List_Pointer(Problem_S.Formulation, Index_Formulation) ;
	    Treatment_Formulation(Formulation_P) ;
	  }
	  MH_Moving_Matrix_probe = 0;

	  DofList_MH_moving = Tree2List(DofTree_MH_moving) ;
	  Tree_Delete(DofTree_MH_moving) ;

	  NbrDof_MH_moving = List_Nbr(DofList_MH_moving) ;
	  Message::Info("Generate_MH_Moving :  NbrDof = %d", NbrDof_MH_moving);

	  Dof_MH_moving = (struct Dof **)Malloc(NbrDof_MH_moving * sizeof(struct Dof *)) ;
	  NumDof_MH_moving = (int *)Malloc(NbrDof_MH_moving * sizeof(int)) ;

	  for (i = 0 ; i < NbrDof_MH_moving ; i++) {
	    Dof_P = (struct Dof*)List_Pointer(DofList_MH_moving,i) ;
	    if (Dof_P->Type != DOF_UNKNOWN) Message::Error("Dof_MH_moving not of type unknown !?");
	    NumDof_MH_moving[i] =  Dof_P->Case.Unknown.NumDof;

	    if(!(Dof_MH_moving[i] = (struct Dof *)List_PQuery(Current.DofData->DofList,
							      Dof_P, fcmp_Dof)))
	      Message::Error("Troubles") ;
	    for (k = 0 ; k < Current.NbrHar ; k++) {
	      (Dof_MH_moving[i]+k)->Case.Unknown.NumDof = i*Current.NbrHar+k+1 ;
	    }
	  } /* if (!iTime) */

	  Message::Cpu("");
	  LinAlg_CreateSolver(&DofData_P->Solver_MH_moving, "MH_moving.par") ;
	  LinAlg_CreateMatrix(&DofData_P->A_MH_moving, &DofData_P->Solver_MH_moving,
			      NbrDof_MH_moving*Current.NbrHar, NbrDof_MH_moving*Current.NbrHar) ;
	  LinAlg_CreateVector(&DofData_P->b_MH_moving, &DofData_P->Solver_MH_moving,
			      NbrDof_MH_moving*Current.NbrHar) ;
	  LinAlg_ZeroMatrix(&DofData_P->A_MH_moving) ;
	  LinAlg_ZeroVector(&DofData_P->b_MH_moving) ;
	}

	Message::Info("Generate_MH_Moving_Separate : Step %d/%d (Time = %e  DTime %e)",
                      (int)(Current.TimeStep+1),
                      Operation_P->Case.Generate_MH_Moving_S.NbrStep,
                      Current.Time, Current.DTime) ;

	Treatment_Operation(Resolution_P, Operation_P->Case.Generate_MH_Moving.Operation,
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	for (k = 0 ; k < Current.NbrHar ; k++)
	  for (l = 0 ; l < Current.NbrHar ; l++) {
	    if (Val_Pulsation[k/2]) DCfactor = 2. ; else DCfactor = 1. ;
	    MH_Moving_Matrix[k][l] = DCfactor /
	      (double)Operation_P->Case.Generate_MH_Moving.NbrStep *
	      ( fmod(k,2) ? -sin(Val_Pulsation[k/2]*Current.Time) :
		cos(Val_Pulsation[k/2]*Current.Time) ) *
	      ( fmod(l,2) ? -sin(Val_Pulsation[l/2]*Current.Time) :
		cos(Val_Pulsation[l/2]*Current.Time) ) ;
	    hop[k][l] += MH_Moving_Matrix[k][l] ;
	  }

	for (k = 0 ; k < Current.NbrHar/2 ; k++)
	  if (!Val_Pulsation[k]) MH_Moving_Matrix[2*k+1][2*k+1] = 1. ;

	/* separate assembly */
	MH_Moving_Matrix_separate = 1 ;
	for (i = 0 ; i < Nbr_Formulation ; i++) {
	  List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation) ;
	  Formulation_P = (struct Formulation*)
	    List_Pointer(Problem_S.Formulation, Index_Formulation) ;
	  Treatment_Formulation(Formulation_P) ;
	}
	MH_Moving_Matrix_separate = 0 ;


      } /*  for iTime */

      Message::Cpu("Full matrix assembly done");

      for (k = 0 ; k < Current.NbrHar ; k++) Free (MH_Moving_Matrix[k]) ;
      Free (MH_Moving_Matrix) ;
      MH_Moving_Matrix = NULL ;

      Generate_Group = NULL;

      for (i = 0 ; i < NbrDof_MH_moving ; i++) {
	for (k = 0 ; k < Current.NbrHar ; k++)
	  (Dof_MH_moving[i]+k)->Case.Unknown.NumDof = NumDof_MH_moving[i] + k ;
      }

      LinAlg_CreateMatrix(&DofData_P->A_MH_moving2, &DofData_P->Solver,
			  DofData_P->NbrDof, DofData_P->NbrDof) ;
      LinAlg_CreateVector(&DofData_P->b_MH_moving2, &DofData_P->Solver, Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&DofData_P->A_MH_moving2) ;
      LinAlg_ZeroVector(&DofData_P->b_MH_moving2) ;

      Message::Cpu("");

      nnz__=0;
      for (i = 0 ; i < NbrDof_MH_moving ; i++) {
	for (k = 0 ; k < Current.NbrHar ; k++) {
	  row_old = Current.NbrHar*i+k ;
	  row_new = NumDof_MH_moving[i]+k-1 ;
	  LinAlg_GetDoubleInVector(&d, &DofData_P->b_MH_moving,  row_old) ;
	  LinAlg_SetDoubleInVector( d, &DofData_P->b_MH_moving2, row_new) ;
	  for (j = 0 ; j < NbrDof_MH_moving ; j++) {
	    for (l = 0 ; l < Current.NbrHar ; l++) {
	      col_old = Current.NbrHar*j+l ;
	      col_new = NumDof_MH_moving[j]+l-1 ;

	      /* LinAlg_GetDoubleInMatrix(&d, &DofData_P->A_MH_moving, i, j) ; */
#if defined(HAVE_SPARSKIT)
	      d = DofData_P->A_MH_moving.M.F.a[NbrDof_MH_moving*Current.NbrHar*col_old+row_old];
	      aii = DofData_P->A_MH_moving.M.F.a[NbrDof_MH_moving*Current.NbrHar*row_old+row_old];
	      ajj = DofData_P->A_MH_moving.M.F.a[NbrDof_MH_moving*Current.NbrHar*col_old+col_old];
#else
	      aii = ajj = 0.;
	      Message::Error("FIXME: Generate_MH_Moving works only with Sparskit");
#endif
	      if(d*d > 1e-12 * aii*ajj  &&
		 ( (DummyDof[row_new]==0 && DummyDof[col_new] == 0) || (row_new == col_new) ) ){
		LinAlg_AddDoubleInMatrix(d, &DofData_P->A_MH_moving2, col_new, row_new) ;
		nnz__++;
	      }
	    }
	  }
	}
      }
      printf("Matrix converted : nnz in MH_moving %d \n", nnz__);
#if defined(HAVE_SPARSKIT)
      Free(DofData_P->A_MH_moving.M.F.a);
#endif
      Current.DTime = 0.;
      Message::Cpu("");
      DofData_P->DummyDof = DummyDof ;
      break;

    case OPERATION_DUMMYDOFS :
      Init_OperationOnSystem("DummyDofs",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P) ;
      Message::Cpu("");
      Dof_GetDummies(DefineSystem_P, DofData_P);
      Message::Cpu("");
      break ;

    case OPERATION_ADD_MH_MOVING :
      LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A_MH_moving2,&DofData_P->A) ;
      /* LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b_MH_moving2,&DofData_P->b) ; */
      Message::Cpu("");
      break ;

      /*  -->  S a v e S o l u t i o n E x t e n d e d M H             */
      /*  -----------------------------------------------------------  */

    case OPERATION_SAVESOLUTIONEXTENDEDMH :
      if (Current.NbrHar == 1) {
	Message::Warning("ExtendSolutionMH can only to be used with multi-harmonics") ;
	break ;
      }
      else if (!List_Nbr(DofData_P->Solutions)) {
	Message::Warning("No solution available for ExtendSolutionMH");
	break ;
      }
      else if (List_Nbr(DofData_P->Solutions) > 1) {
	Message::Warning("Only last solution will be extended mult-harmonically and saved");
      }

      Init_OperationOnSystem("SaveSolutionExtendedMH",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;
      strcpy(FileName_exMH, Name_Generic) ;
      strcat(FileName_exMH, Operation_P->Case.SaveSolutionExtendedMH.ResFile) ;
      strcat(FileName_exMH, ".res") ;
      Dof_WriteFileRES0(FileName_exMH, Flag_BIN) ;
      Dof_WriteFileRES_ExtendMH(FileName_exMH, DofData_P, Flag_BIN,
				Current.NbrHar +
				2*Operation_P->Case.SaveSolutionExtendedMH.NbrFreq);

      Message::Direct("          > '%s'  (%d to %d frequencies)", FileName_exMH,
                      Current.NbrHar/2, Current.NbrHar/2 +
                      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq) ;

      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);

      break ;

      /*  -->  S a v e S o l u t i o n M H T o T i m e                 */
      /*  -----------------------------------------------------------  */

    case OPERATION_SAVESOLUTIONMHTOTIME :
      if (Current.NbrHar == 1) {
	Message::Warning("SaveSolutionMHtoTime can only to be used with multi-harmonics") ;
	break ;
      }
      else if (!List_Nbr(DofData_P->Solutions)) {
	Message::Warning("No solution available for SaveSolutionMHtoTime");
	break ;
      }
      else if (List_Nbr(DofData_P->Solutions) > 1) {
	Message::Warning("Only last mult-harmonic solution will be saved for time X");
      }

      Init_OperationOnSystem("SaveSolutionMHtoTime",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;
      strcpy(FileName_exMH, Name_Generic) ;
      strcat(FileName_exMH, Operation_P->Case.SaveSolutionMHtoTime.ResFile) ;
      strcat(FileName_exMH, ".res") ;
      Dof_WriteFileRES0(FileName_exMH, Flag_BIN) ;
      Dof_WriteFileRES_MHtoTime(FileName_exMH, DofData_P, Flag_BIN,
				Operation_P->Case.SaveSolutionMHtoTime.Time) ;

      Message::Direct("      > '%s'  (time = %e)", FileName_exMH,
                      Operation_P->Case.SaveSolutionMHtoTime.Time) ;

      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);
      break ;

      /*  -->  R e a d S o l u t i o n                */
      /*  ------------------------------------------  */

    case OPERATION_READSOLUTION :
      Init_OperationOnSystem("ReadSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;
      i = 0 ;
      while(Name_ResFile[i]){
	Message::Info("Loading Processing data '%s'", Name_ResFile[i]) ;
	Dof_OpenFile(DOF_TMP, Name_ResFile[i], "rb");
	Dof_ReadFileRES(NULL, DofData_P, DofData_P->Num, &Current.Time, &Current.TimeImag,
			&Current.TimeStep) ;
	Dof_CloseFile(DOF_TMP);
	i++ ;
      }
      if(!List_Nbr(DofData_P->Solutions))
	Message::Error("No valid data found for ReadSolution[%s]", DefineSystem_P->Name);

      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
      DofData_P->CurrentSolution->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
      break ;

      /*  -->  G m s h R e a d                        */
      /*  ------------------------------------------  */

    case OPERATION_GMSHREAD :
#if defined(HAVE_GMSH)
      GmshMergeFile(Operation_P->Case.GmshRead.FileName);
      Operation_P->Rank = -1;
#else
      Message::Error("You need to compile GetDP with Gmsh support to use 'GmshRead'");
#endif
      break ;

    case OPERATION_GMSHCLEARALL :
#if defined(HAVE_GMSH)
      while(PView::list.size()) delete PView::list[0];
      Operation_P->Rank = -1;
#else
      Message::Error("You need to compile GetDP with Gmsh support to use 'GmshRead'");
#endif
      break ;

      /*  -->  S a v e M e s h                        */
      /*  ------------------------------------------  */

    case OPERATION_SAVEMESH :
      Init_OperationOnSystem("SaveMesh",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;

      if(Operation_P->Case.SaveMesh.FileName[0] == '/' ||
	 Operation_P->Case.SaveMesh.FileName[0] == '\\'){
	strcpy(FileName,Operation_P->Case.SaveMesh.FileName);
      } else {
	strcpy(FileName, Name_Path);
	strcat(FileName, Operation_P->Case.SaveMesh.FileName);
      }

      if (Operation_P->Case.SaveMesh.ExprIndex >= 0) {
	Get_ValueOfExpressionByIndex(Operation_P->Case.SaveMesh.ExprIndex,
				     NULL, 0., 0., 0., &Value) ;
	sprintf(FileName, FileName, Value.Val[0]);
      }

      Geo_SaveMesh(Current.GeoData,
		   ((struct Group*)
		    List_Pointer(Problem_S.Group,
				 Operation_P->Case.SaveMesh.GroupIndex))->InitialList,
		   FileName) ;
      break ;

      /*  -->  T r a n s f e r S o l u t i o n        */
      /*  ------------------------------------------  */

    case OPERATION_TRANSFERSOLUTION :
      Init_OperationOnSystem("TransferSolution",
			     Resolution_P, Operation_P, DofData_P0, GeoData_P0,
			     &DefineSystem_P, &DofData_P, Resolution2_P) ;

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
	  Message::Error("Dimensions do not match for TransferSolution");

	Solution_S.TimeStep = (int)Current.TimeStep ;
	Solution_S.Time = Current.Time ;
	Solution_S.TimeImag = Current.TimeImag ;
	Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData2_P) ;
	Solution_S.SolutionExist = 1 ;
        LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof) ;
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
		Message::Warning("Unknown Dof in TransferSolution") ;
	      }
	    }
	    else{
	      Message::Warning("Trying to transfer a non symmetrical Dof");
	    }
	  }
          // FIXME: required by parallel version
          LinAlg_AssembleVector(&Solution_S.x) ;

	  if (!DofData2_P->Solutions)
	    DofData2_P->Solutions = List_Create( 20, 20, sizeof(struct Solution)) ;

	  List_Add(DofData2_P->Solutions, &Solution_S) ;
	  DofData2_P->CurrentSolution = (struct Solution*)
	    List_Pointer(DofData2_P->Solutions, List_Nbr(DofData2_P->Solutions)-1) ;
	}
      }
      break ;

      /*  -->  E v a l u a t e                        */
      /*  ------------------------------------------  */

    case OPERATION_EVALUATE :
      Get_ValueOfExpressionByIndex(Operation_P->Case.Evaluate.ExpressionIndex,
				   NULL, 0., 0., 0., &Value) ;
      break ;

      /*  -->  S e t T i m e                          */
      /*  ------------------------------------------  */

    case OPERATION_SETTIME :
      Get_ValueOfExpressionByIndex(Operation_P->Case.SetTime.ExpressionIndex,
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
	Message::Error("Invalid SetFrequency for real system '%s'", DefineSystem_P->Name) ;
      break;

      /*  -->  T i m e L o o p T h e t a              */
      /*  ------------------------------------------  */

    case OPERATION_TIMELOOPTHETA :
      if(!List_Nbr(Current.DofData->Solutions))
	Message::Error("Not enough initial solutions for TimeLoopTheta");

      Message::Info("TimeLoopTheta ...") ;

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

        if(Message::GetOnelabAction() == "stop") break;

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

	Message::Info("Theta Time = %.8g s (TimeStep %d)", Current.Time,
                      (int)Current.TimeStep) ;
        Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Time",
                                       Current.Time);

	Save_Time = Current.Time ;

	Treatment_Operation(Resolution_P, Operation_P->Case.TimeLoopTheta.Operation,
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	Current.Time = Save_Time ;

        if(Flag_Break){ Flag_Break = 0; break; }
      }

      Current.TypeTime = Save_TypeTime ;
      Current.DTime = Save_DTime ;
      break ;

      /*  -->  T i m e L o o p N e w m a r k          */
      /*  ------------------------------------------  */

    case OPERATION_TIMELOOPNEWMARK :
      if(List_Nbr(Current.DofData->Solutions) < 2)
	Message::Error("Not enough initial solutions for TimeLoopNewmark");

      Message::Info("TimeLoopNewmark ...") ;

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

        if(Message::GetOnelabAction() == "stop") break;

	Get_ValueOfExpressionByIndex(Operation_P->Case.TimeLoopNewmark.DTimeIndex,
				     NULL, 0., 0., 0., &Value) ;
        Current.DTime = Value.Val[0] ;
	Current.Time += Current.DTime ;
	Current.TimeStep += 1. ;

	Message::Info("Newmark Time = %.8g s (TimeStep %d)", Current.Time,
		  (int)Current.TimeStep) ;
        Message::AddOnelabNumberChoice(Message::GetOnelabClientName() + "/Time",
                                       Current.Time);

	Treatment_Operation(Resolution_P, Operation_P->Case.TimeLoopNewmark.Operation,
			    DofData_P0, GeoData_P0, NULL, NULL) ;

        if(Flag_Break){ Flag_Break = 0; break; }
      }

      Current.TypeTime = Save_TypeTime ;
      Current.DTime = Save_DTime ;
      break ;

      /*  -->  I t e r a t i v e L o o p              */
      /*  ------------------------------------------  */

    case OPERATION_ITERATIVELOOP :
      Message::Info("IterativeLoop ...") ;

      Save_Iteration = Current.Iteration ;

      for (Num_Iteration = 1 ;
	   Num_Iteration <= Operation_P->Case.IterativeLoop.NbrMaxIteration ;
	   Num_Iteration++) {

        if(Message::GetOnelabAction() == "stop") break;

	Current.Iteration = (double)Num_Iteration ;
	Current.RelativeDifference = 0. ;

	Get_ValueOfExpressionByIndex
	  (Operation_P->Case.IterativeLoop.RelaxationFactorIndex,
	   NULL, 0., 0., 0., &Value) ;
        if(Current.RelaxationFactor != Value.Val[0]){
           Message::Info("Non Linear Iteration Relaxation %g", (int)Current.Iteration,
                         Current.RelaxationFactor) ;
           Current.RelaxationFactor = Value.Val[0] ;
        }

	Flag_IterativeLoop = Operation_P->Case.IterativeLoop.Flag ; /* Attention: Test */

	Treatment_Operation(Resolution_P, Operation_P->Case.IterativeLoop.Operation,
			    DofData_P0, GeoData_P0, NULL, NULL) ;

	if (Current.RelativeDifference <= Operation_P->Case.IterativeLoop.Criterion)
	  break ;

        if(Flag_Break){ Flag_Break = 0; break; }

	Current.RelativeDifferenceOld = Current.RelativeDifference ; /* Attention: pt */
      }

      if (Num_Iteration > Operation_P->Case.IterativeLoop.NbrMaxIteration){
	Num_Iteration = Operation_P->Case.IterativeLoop.NbrMaxIteration ;
        Flag_IterativeLoopConverged = 0;
        Message::Info("IterativeLoop did not converge (%d iterations, residual %g)",
                      Num_Iteration, Current.RelativeDifference);
      }
      else
        Message::Info("IterativeLoop converged (%d iteration%s, residual %g)",
                      Num_Iteration, Num_Iteration > 1 ? "s" : "", Current.RelativeDifference);

      Current.Iteration = Save_Iteration ;
      break ;

    case OPERATION_ITERATIVELINEARSOLVER :
      Message::Info("IterativeLinearSolver ...") ;
      Operation_IterativeLinearSolver
	(Resolution_P, Operation_P, DofData_P0, GeoData_P0) ;
      break;

      /*  -->  I t e r a t i v e T i m e R e d u c t i o n  */
      /*  ------------------------------------------------  */

    case OPERATION_ITERATIVETIMEREDUCTION :
      Message::Info("IterativeTimeReduction ...") ;

      Operation_IterativeTimeReduction
	(Resolution_P, Operation_P, DofData_P0, GeoData_P0) ;
      break ;

      /*  -->  T e s t                                */
      /*  ------------------------------------------  */

    case OPERATION_TEST :
      Message::Info("Test") ;
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
      Message::Info("FourierTransform") ;

      if(gSCALAR_SIZE == 2)
	Message::Error("FIXME: FourierTransform2 will not work in complex arithmetic");

      DofData_P  = DofData_P0 + Operation_P->Case.FourierTransform2.DefineSystemIndex[0] ;
      DofData2_P = DofData_P0 + Operation_P->Case.FourierTransform2.DefineSystemIndex[1] ;

      NbrHar1 = DofData_P->NbrHar ;
      NbrDof1 = List_Nbr(DofData_P->DofList) ;
      NbrHar2 = DofData2_P->NbrHar ;
      NbrDof2 = List_Nbr(DofData2_P->DofList) ;

      if (NbrHar1 != 1 || NbrHar2 < 2 || NbrDof2 != (NbrDof1*NbrHar2))
	Message::Error("Uncompatible System definitions for FourierTransform"
                       " (NbrHar = %d|%d   NbrDof = %d|%d)", NbrHar1, NbrHar2, NbrDof1, NbrDof2) ;

      if(!DofData2_P->Solutions){
	DofData2_P->Solutions = List_Create(1, 1, sizeof(struct Solution)) ;
	Operation_P->Case.FourierTransform2.Scales = (double *)Malloc(NbrHar2*sizeof(double)) ;
      }

      Nbr_Sol = List_Nbr(DofData2_P->Solutions) ;
      Scales = Operation_P->Case.FourierTransform2.Scales ;

      if ( (Operation_P->Case.FourierTransform2.Period_sofar + Current.DTime >
	    Operation_P->Case.FourierTransform2.Period) && Nbr_Sol ) {
	Message::Info("Normalizing and finalizing Fourier Analysis"
                      " (solution  %d) (Period: %e out of %e)",
                      Nbr_Sol, Operation_P->Case.FourierTransform2.Period_sofar,
                      Operation_P->Case.FourierTransform2.Period);
	for (i=0 ; i<NbrHar2 ; i++) Message::Info("Har  %d : Scales %e ", i, Scales[i]) ;

	Solution_P = (struct Solution*)List_Pointer(DofData2_P->Solutions, Nbr_Sol-1);

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
	Message::Info("Starting new Fourier Analysis : solution %d ", Nbr_Sol);
	Solution_S.TimeStep = Nbr_Sol;
	Solution_S.Time = Nbr_Sol;
	Solution_S.SolutionExist = 1 ;
	LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof) ;
	LinAlg_ZeroVector(&Solution_S.x) ;
	List_Add(DofData2_P->Solutions, &Solution_S) ;
	Nbr_Sol++ ;
	for (k=0 ; k<NbrHar2 ; k++) Scales[k] = 0 ;
      }

      DofData2_P->CurrentSolution = Solution_P =
	(struct Solution*)List_Pointer(DofData2_P->Solutions, Nbr_Sol-1) ;

      for (k=0 ; k<NbrHar2 ; k+=2) {
	d = DofData2_P->Val_Pulsation[k/2] * Current.Time ;
	Scales[k  ] +=  cos(d) * cos(d) * Current.DTime ;
	Scales[k+1] +=  sin(d) * sin(d) * Current.DTime ;
      }

      for(j=0 ; j<NbrDof1 ; j++){
	Dof_GetRealDofValue(DofData_P, (struct Dof *)List_Pointer(DofData_P->DofList,j), &dd) ;
	NumDof = ((struct Dof *)List_Pointer(DofData2_P->DofList,
					     j*NbrHar2))->Case.Unknown.NumDof - 1 ;

	if (((struct Dof *)List_Pointer(DofData2_P->DofList,j*NbrHar2))->Type != DOF_UNKNOWN)
	  Message::Info("Dof not unknown %d", j) ;

	for (k=0 ; k<NbrHar2 ; k+=2) {
	  d = DofData2_P->Val_Pulsation[k/2] * Current.Time ;
	  LinAlg_AddDoubleInVector( dd*cos(d)*Current.DTime, &Solution_P->x, NumDof+k  ) ;
	  LinAlg_AddDoubleInVector(-dd*sin(d)*Current.DTime, &Solution_P->x, NumDof+k+1) ;
	}
      }

      Operation_P->Case.FourierTransform2.Period_sofar += Current.DTime ;
      break;

    case OPERATION_FOURIERTRANSFORM :
      Message::Info("FourierTransform") ;

      DofData_P = DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[0] ;
      DofData2_P = DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[1] ;

      if(!DofData2_P->Solutions){
	k = List_Nbr(Operation_P->Case.FourierTransform.Frequency) ;

	if(DofData2_P->NbrDof != gCOMPLEX_INCREMENT * DofData_P->NbrDof)
	  Message::Error("Uncompatible System definitions for FourierTransform") ;

	DofData2_P->Solutions = List_Create(k, 1, sizeof(struct Solution)) ;

	for(i=0 ; i<k ; i++){
	  List_Read(Operation_P->Case.FourierTransform.Frequency, i, &d) ;
	  Solution_S.TimeStep = i ;
	  Solution_S.Time = TWO_PI * d;
	  Solution_S.TimeImag = 0.;
	  Solution_S.SolutionExist = 1 ;
	  LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver, DofData2_P->NbrDof) ;
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
	if(!(fp = fopen(FileName, "ab")))
	  Message::Error("Unable to open file '%s'", FileName) ;
	Message::Info("Print -> '%s'", FileName) ;
      }
      else{
	fp = stdout ;
	Message::Info("Print") ;
      }

      if(Operation_P->Case.Print.Expression){
	for(i=0 ; i<List_Nbr(Operation_P->Case.Print.Expression) ; i++){
	  j = *(int*)List_Pointer(Operation_P->Case.Print.Expression, i) ;
	  Get_ValueOfExpressionByIndex(j, NULL, 0., 0., 0., &Value) ;
	  Print_Value(&Value) ;
	}
	fprintf(fp, "\n") ;
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
		    LinAlg_WriteScalar(fp, &tmp) ;
		  }
		  else{
		    LinAlg_PrintScalar(fp, &tmp) ;
		    fprintf(fp, " ") ;
		  }
		}
	        else Message::Warning("Print of Dof out of TimeStep range [0,%d]",
                                      List_Nbr(DofData_P->Solutions)-1);
	      }
	    else{
	      LinAlg_GetScalarInVector(&tmp, &DofData_P->CurrentSolution->x, j) ;
	      if(Flag_Binary){
		LinAlg_WriteScalar(fp, &tmp) ;
	      }
	      else{
		LinAlg_PrintScalar(fp, &tmp) ;
		fprintf(fp, " ") ;
	      }
	    }
	  }
	  else Message::Warning("Wrong number of Dof to Print (%d is out of [0,%d])",
                                j, DofData_P->NbrDof-1);
	}
	fprintf(fp, "\n") ;
      }
      else{
	DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;
	if(Flag_Binary){
	  LinAlg_WriteMatrix(fp, &DofData_P->A) ;
	  LinAlg_WriteVector(fp, &DofData_P->b) ;
	}
	else{
          // use matlab format if available
          DefineSystem_P = (struct DefineSystem*)
            List_Pointer(Resolution_P->DefineSystem, Operation_P->DefineSystemIndex) ;
          std::string path(Name_Path), file("file_"), mat("mat_"), vec("vec_");
          std::string name(Operation_P->Case.Print.FileOut ? Operation_P->Case.Print.FileOut :
                           DefineSystem_P->Name);
	  LinAlg_PrintMatrix(fp, &DofData_P->A, true, (path + file + mat + name + ".m").c_str(),
                             (mat + name).c_str()) ;
	  LinAlg_PrintVector(fp, &DofData_P->b, true, (path + file + vec + name + ".m").c_str(),
                             (vec + name).c_str()) ;
	}
      }

      fflush(fp);
      if(Operation_P->Case.Print.FileOut){
	fclose(fp);
	fp = stdout ;
      }
      Flag_Binary = 0;
      break;

      /*  -->  C h a n g e O f C o o r d i n a t e s */
      /*  ------------------------------------------ */

    case OPERATION_CHANGEOFCOORDINATES :
      Message::Info("ChangeOfCoordinates") ;
      /* Geo_SetCurrentGeoData(Current.GeoData = GeoData_P0) ; */
      Operation_ChangeOfCoordinates
	(Resolution_P, Operation_P, DofData_P0, GeoData_P0) ;
      break ;

      /*  -->  D e f o r m e M e s h                 */
      /*  ------------------------------------------ */

    case OPERATION_DEFORMEMESH :
      if (Operation_P->Case.DeformeMesh.Name_MshFile == NULL)
	Operation_P->Case.DeformeMesh.Name_MshFile = Name_MshFile ;
      Message::Info("DeformeMesh[%s, %s, '%s']",
                    ((struct DefineSystem *)
                     List_Pointer(Resolution_P->DefineSystem,
                                  Operation_P->DefineSystemIndex))->Name,
                    Operation_P->Case.DeformeMesh.Quantity,
                    Operation_P->Case.DeformeMesh.Name_MshFile) ;

      if ((i = List_ISearchSeq(GeoData_L, Operation_P->Case.DeformeMesh.Name_MshFile,
			       fcmp_GeoData_Name)) < 0)
	Message::Error("DeformeMesh: Wrong NameOfMeshFile %s",
		   Operation_P->Case.DeformeMesh.Name_MshFile );
      Operation_P->Case.DeformeMesh.GeoDataIndex = i ;

      Operation_DeformeMesh
	(Resolution_P, Operation_P, DofData_P0, GeoData_P0) ;
      break;

      /*  -->  P o s t O p e r a t i o n */
      /*  ------------------------------ */

    case OPERATION_POSTOPERATION :
      Message::Info("PostOperation") ;
      Save_Time = Current.Time ;
      Save_TimeImag = Current.TimeImag ;
      Save_TimeStep = Current.TimeStep ;
      Save_Element = Current.Element;

      for(i=0 ; i<List_Nbr(Operation_P->Case.PostOperation.PostOperations); i++){
	str = *(char**)List_Pointer(Operation_P->Case.PostOperation.PostOperations, i);
	if((j = List_ISearchSeq(Problem_S.PostOperation, str, fcmp_PostOperation_Name)) < 0){
	  Message::Warning("Unknown PostOperation '%s'", str) ;
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

      /* the post-processing can (and usually will) change the current
	 timestep, current time and current solution pointers: we need
	 to reset them */
      Current.Time = Save_Time ;
      Current.TimeImag = Save_TimeImag ;
      Current.TimeStep = Save_TimeStep ;
      for (k = 0 ; k < Current.NbrSystem ; k++){
	i = List_Nbr((Current.DofData_P0+k)->Solutions) - 1;
	if(i >= 0)
	  (Current.DofData_P0+k)->CurrentSolution = (struct Solution*)
	    List_Pointer((Current.DofData_P0+k)->Solutions, i);
      }
      Current.Element = Save_Element;
      break ;

      /*  -->  T i m e L o o p A d a p t i v e  */
      /*  ------------------------------------- */

    case OPERATION_TIMELOOPADAPTIVE :
      Message::Info("TimeLoopAdaptve ...") ;
      Operation_TimeLoopAdaptive(Resolution_P, Operation_P, DofData_P0, GeoData_P0, &Flag_Break) ;
      break;

      /*  -->  I t e r a t i v e L o o p N            */
      /*  ------------------------------------------  */

    case OPERATION_ITERATIVELOOPN :
      Message::Info("IterativeLoopN ...") ;
      Operation_IterativeLoopN(Resolution_P, Operation_P, DofData_P0, GeoData_P0, &Flag_Break) ;
      break;

      /*  -->  T i m e L o o p R u n g e K u t t a  */
      /*  ----------------------------------------- */

    case OPERATION_TIMELOOPRUNGEKUTTA :
      {
        Init_OperationOnSystem("TimeLoopRungeKutta",
                               Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                               &DefineSystem_P, &DofData_P, Resolution2_P) ;
        int numStepRK = List_Nbr(Operation_P->Case.TimeLoopRungeKutta.ButcherC);
        if(numStepRK != List_Nbr(Operation_P->Case.TimeLoopRungeKutta.ButcherB) ||
           numStepRK * numStepRK != List_Nbr(Operation_P->Case.TimeLoopRungeKutta.ButcherA))
          Message::Error("Incompatible sizes of Butcher Tableaux");

        Current.Time = Operation_P->Case.TimeLoopRungeKutta.Time0 ;
        gVector xn, rhs;
        LinAlg_CreateVector(&xn, &DofData_P->Solver, Current.DofData->NbrDof);
        LinAlg_CreateVector(&rhs, &DofData_P->Solver, Current.DofData->NbrDof);
        std::vector<gVector> ki(numStepRK);
        for(int i = 0; i < numStepRK; i++)
          LinAlg_CreateVector(&ki[i], &DofData_P->Solver, Current.DofData->NbrDof);

        while (Current.Time < Operation_P->Case.TimeLoopRungeKutta.TimeMax * 0.9999999) {

          if(Message::GetOnelabAction() == "stop") break;

          double tn = Current.Time;
          LinAlg_CopyVector(&DofData_P->CurrentSolution->x, &xn);
          Get_ValueOfExpressionByIndex(Operation_P->Case.TimeLoopRungeKutta.DTimeIndex,
                                       NULL, 0., 0., 0., &Value) ;
          Current.DTime = Value.Val[0];
          Current.TimeStep += 1.;
          for(int i = 0; i < numStepRK; i++){
            double ci;
            List_Read(Operation_P->Case.TimeLoopRungeKutta.ButcherC, i, &ci);
            Current.Time = tn + ci * Current.DTime;
            LinAlg_CopyVector(&xn, &DofData_P->CurrentSolution->x);
            // FIXME: warning, this assumes an explicit RK scheme!
            for(int j = 0; j < i; j++){
              double aij;
              List_Read(Operation_P->Case.TimeLoopRungeKutta.ButcherA, i * numStepRK + j, &aij);
              LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x, &ki[j], aij,
                                               &DofData_P->CurrentSolution->x);
            }
            Current.TypeAssembly = ASSEMBLY_SEPARATE ;
            Init_SystemData(DofData_P, Flag_Jac) ;
            Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 1);
            LinAlg_ProdMatrixVector(&DofData_P->M1, &DofData_P->CurrentSolution->x, &rhs);
            LinAlg_ProdVectorDouble(&rhs, -1., &rhs);
		  LinAlg_AddVectorProdVectorDouble(&rhs, &DofData_P->b, 1., &rhs);
            LinAlg_ProdVectorDouble(&rhs, Current.DTime, &rhs);
            LinAlg_Solve(&DofData_P->M2, &rhs, &DofData_P->Solver, &ki[i]) ;
          }
          // restore previous time step
          LinAlg_CopyVector(&xn, &((struct Solution*)
                                   List_Pointer(DofData_P->Solutions,
                                                List_Nbr(DofData_P->Solutions)-2))->x) ;
          LinAlg_CopyVector(&xn, &DofData_P->CurrentSolution->x);
          for(int i = 0; i < numStepRK; i++){
            double bi;
            List_Read(Operation_P->Case.TimeLoopRungeKutta.ButcherB, i, &bi);
            LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x, &ki[i], bi,
                                             &DofData_P->CurrentSolution->x);
          }

          Current.Time = tn + Current.DTime;

          if(Flag_Break){ Flag_Break = 0; break; }
        }
      }
      break ;

    case OPERATION_BREAK :
      Flag_Break = 1;
      break ;

      /*  -->  P a r a l l e l   C o m p u t i n g	  */
      /*  ------------------------------------------  */

    case OPERATION_SETCOMMSELF :
      LinAlg_SetCommSelf();
      break ;

    case OPERATION_SETCOMMWORLD :
      LinAlg_SetCommWorld();
      break ;

    case OPERATION_BARRIER :
#if defined(HAVE_PETSC)
      MPI_Barrier(PETSC_COMM_WORLD);
#endif
      break ;


      /*  -->  O t h e r                              */
      /*  ------------------------------------------  */

    default :
      Message::Warning("Operation: ? ? ?") ;
      break ;
    }

    if(Flag_CPU) Message::Cpu("");
  }

  Message::Barrier();
}

