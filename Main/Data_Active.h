/* $Id: Data_Active.h,v 1.8 2001-10-24 16:00:48 dular Exp $ */
#ifndef _DATA_ACTIVE_H_
#define _DATA_ACTIVE_H_

#include "Data_Passive.h"
#include "Data_Element.h"

#define _PRE  1 /* pre-processing */
#define _PAR  4 /* partitionning */
#define _CAL  2 /* processing */
#define _POS  3 /* post-processing */
#define _CST  5 /* update constraint */

#define TIME_STATIC   1
#define TIME_THETA    2
#define TIME_NEWMARK  3

#define ASSEMBLY_AGGREGATE  1
#define ASSEMBLY_SEPARATE   2

/* ------------------------------------------------------------------------ */
/* I n t e g r a l Q u a n t i t y A c t i v e                              */
/* ------------------------------------------------------------------------ */

struct IntegralQuantityActive {
  int     Type_FormDof, Type_ValueDof ;

  List_T  *IntegrationCase_L; 
  struct  IntegrationCase *IntegrationCase_P ;
  int     CriterionIndex ;
  void    (*Get_IntPoint)();
  int     Nbr_IntPoints ;

  List_T  *JacobianCase_L;
  double  (*Get_Jacobian)() ;
  int     Type_Dimension ;
  void    (*xChangeOfCoordinates)();
} ;



/* ------------------------------------------------------------------------ */
/* F e m L o c a l T e r m A c t i v e                                      */
/* ------------------------------------------------------------------------ */

struct FemLocalTermActive {
  struct QuantityStorage  * QuantityStorageEqu_P ;
  struct QuantityStorage  * QuantityStorageDof_P ;
  struct Dof              * DofForNoDof_P ;

  int  Type_FormEqu, Type_FormDof, Type_ValueDof ;
  int  Type_DefineQuantityDof ;
  int  SymmetricalMatrix ;

  List_T *IntegrationCase_L, *JacobianCase_L ;
  int     CriterionIndex ;
  struct JacobianCase  *JacobianCase_P0 ;
  int    NbrJacobianCase, Flag_ChangeCoord, Flag_InvJac ;

  void   (*xChangeOfCoordinatesEqu)();
  void   (*xChangeOfCoordinatesDof)();
  double (*Cal_Productx)();
  void   (*Function_AssembleTerm)();

  struct IntegralQuantityActive  IntegralQuantityActive ;
} ;


/* ------------------------------------------------------------------------ */
/* Q u a n t i t y S t o r a g e                                            */
/* ------------------------------------------------------------------------ */

/* En parallele avec DefineQuantity (zone active)   */

struct QuantityStorage {

  struct DefineQuantity  * DefineQuantity ;

  int    NumLastElementForFunctionSpace ;
  int    NumLastElementForDofDefinition ;
  int    NumLastElementForEquDefinition ;

  struct FunctionSpace   * FunctionSpace ;

  int       NbrElementaryBasisFunction ;
  int       TypeQuantity ;
  struct {
    struct Dof  * Dof ;
    int    NumEntityInElement ;
    int    CodeBasisFunction, CodeEntity ;
    int    CodeAssociateBasisFunction ;
    int    Constraint ;
    double Value[NBR_MAX_HARMONIC] ;
    int    TimeFunctionIndex ;
    int    CodeEntity_Link ;
    struct BasisFunction  * BasisFunction ;
  } BasisFunction [NBR_MAX_BASISFUNCTIONS] ;

} ;


/* Traitement de Fem GlobalTerm (zone active)       */

struct GlobalQuantityStorage {
  int     NumEquation ;
  int     NumDof ;

  int     CodeGlobalQuantity, CodeAssociateBasisFunction ;

  int     CodeEntity ;
  int     Constraint ;  
  double  Value[NBR_MAX_HARMONIC] ;
  int     TimeFunctionIndex ;
} ;


/* ------------------------------------------------------------------------ */
/*  P o s t E l e m e n t                                                   */
/* ------------------------------------------------------------------------ */

struct PostElement {    
  int              Index, Type, Depth;
  int              NbrNodes, * NumNodes;
  double           * u, * v, * w, * x, * y, * z;
  struct Value     * Value;
} ;

/* -------------------------------------------------*/
/* En parallele avec Constraint (zone active)      */

struct ConstraintActive {
  int  TimeStep, SubTimeStep ;
  union {
    struct {
      int  NbrNode, NbrBranch, NbrLoop ;
      int  ** MatNode, ** MatLoop ;
    } Network ;
    struct {
      List_T  * Couples ;
    } Link ;
  } Case ;
} ;

/* -------------------------------------------------*/
/* En parallele avec Function (zone active)      */

struct FunctionActive {
  union {
    struct {
      int     NbrPoint ;
      double  * x, * y, *xc, *yc ;
      double  * mi, * bi, * ci, * di ;  /* Akima */
    } Interpolation ;
    struct {
      double  Value ;
    } SurfaceArea ;
  } Case ;
} ;

#endif
