/* $Id: Data_DofData.h,v 1.5 2001-03-27 18:23:59 geuzaine Exp $ */
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

  /* Flag_Init[0] */
  gMatrix   A, Jac ;
  gVector   b, res, dx ;
  gSolver   Solver ;
  gGraph    Graph ;

  int     * Nnz, NbrPart, Part[NBR_MAX_PARTITION] ;

  /* Flag_Init[1,2,3] */
  gMatrix   M1, M2, M3 ;
  gVector   m1, m2, m3 ;
} ;


struct Solution {
  int       TimeStep ; /* Premiere position pour permettre les recherches */
  double    Time ;
  int       SolutionExist ;
  double  * TimeFunctionValues ;
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
