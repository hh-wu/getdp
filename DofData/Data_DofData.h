/* $Id: Data_DofData.h,v 1.10 2003-03-17 10:56:19 sabarieg Exp $ */
#ifndef _DATA_DOFDATA_H_
#define _DATA_DOFDATA_H_

#define DOF_PRE  1
#define DOF_RES  2
#define DOF_TMP  3

#define NBR_MAX_PARTITION   1024

struct DofData {
  int       Num ;

  int       ResolutionIndex, SystemIndex ;
  int       GeoDataIndex ;
  List_T  * FunctionSpaceIndex ;
  List_T  * TimeFunctionIndex ;

  List_T  * Pulsation ;
  int       NbrHar ;
  double  * Val_Pulsation ;

  int       NbrAnyDof, NbrDof ;
  Tree_T  * DofTree ;
  List_T  * DofList ;
  
  char    * SolverDataFileName ;
  List_T  * Solutions ;
  struct Solution  * CurrentSolution ;

  int       Flag_Init[4] ;
  int       Flag_Only ;
  int       Flag_InitOnly[3] ;
  List_T   *OnlyTheseMatrices ; /* For recalculating only the matrices that are required */

  /* Flag_Init[0] == 1 || 2 */
  gMatrix   A ;
  gVector   b ;
  gSolver   Solver ;
  gGraph    Graph ;

  /* Flag_Init[0] == 2 */
  gMatrix   Jac ;
  gVector   res, dx ;

  int     * Nnz, NbrPart, Part[NBR_MAX_PARTITION] ;

  /* Flag_Init[1,2,3] == 1 */
  gMatrix   M1, M2, M3 ;
  gVector   m1, m2, m3 ;

  /* Flag_Init[4] == 1 */
  gMatrix   A1, A2, A3 ;
  gVector   b1, b2, b3 ;

  List_T * FMM_Matrix ;  /* items = struct FMMmat (one for each Galerkin term comprising a Green function) */


} ;


struct FMMmat{
  int Obs, Src ;      /* index of observation and source GetDP-group */ 
  int EquTermIndex, FunctionSpaceIndexDof, FunctionSpaceIndexEqu, TypeTimeDerivative ;
  int NbrCom ;        /* 1 or 3 for scalar or vector Green function */
  double Pulsation ;
  List_T  *NumDof ;   /* items = list of int (NumDof), one for each FMM-group of source GetDP-group */  
  List_T  *NumDofi ;  /* items = list of int (NumDof), one for each FMM-group of source GetDP-group, Complex system */  
  List_T  *NumEqu ;   /* items = list of int (NumDof), one for each FMM-group of observation GetDP-group */
  List_T  *NumEqui;   /* items = list of int (NumDof), one for each FMM-group of observation GetDP-group, Complex system */
  List_T * NG_L ;     
  List_T * FG_L ;
  List_T * Nd_L ;     /* items = list of int (NbrDir), depends on the distance between groups */
  List_T * A_L ;      /* items = double[NumDof]["direction"], one for each FMM-group of source GetDP-group */
  List_T * D_L ;      /* items = double[NumDof]["direction"], one for each FMM-group of observation GetDP-group */
  double *** T ;      /* [source FMM-group] [observation FMM-group] ["direction"] */
  struct Function *GFx ; /* Green function */
  void (*FctProd)() ;    /* function for DTAx product */
} ;


struct Solution {
  int       TimeStep ; /* Premiere position pour permettre les recherches */
  double    Time ;
  int       SolutionExist ;
  double  * TimeFunctionValues, ExplicitTimeFunctionValue ;
  gVector   x ;
} ;

struct Dof {
  int       NumType ;   /* Key 1 */
  int       Entity ;    /* Key 2 */
  int       Harmonic ;  /* Key 3 */

  int       Type ;

  /* Sorry : j'ai du ressortir Val de l'union : un membre avec constructeur
     (gScalar avec PETSc) est interdit dans une union */
  gScalar   Val ; 

  union {
    struct {
      int       NumDof ;  /* Equation number - 1st position */
      /* gScalar   Val ; */    /* Init value */
    } Unknown ;
    struct {
      int       NumDof ;  /* Equation number (Associate) - 1st position */
      /* gScalar   Val ; */
      int       TimeFunctionIndex ;
    } FixedAssociate ;
    struct {
      int       EntityRef ;
      double    Coef, Coef2 ;
      struct Dof  * Dof ;
    } Link ;
  } Case ;
} ;

/* Dof.Type */

/* definitive in preprocessing and processing */
#define DOF_UNKNOWN              1  /* unknown */
#define DOF_FIXED                2  /* spatial fixed */
#define DOF_FIXEDWITHASSOCIATE   3  /* associate */
#define DOF_LINK                 7  /* link */
#define DOF_LINKCPLX             8  /* linkcplx */

/* definitive in a preprocessing */
#define DOF_UNKNOWN_INIT         5  /* initial condition */

/* temporary */
#define DOF_FIXED_SOLVE               4  /* waiting to be fixed by a resolution */
#define DOF_FIXEDWITHASSOCIATE_SOLVE  6  /* waiting to be fixed by a resolution */

#endif


