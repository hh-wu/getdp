/* $Id: Data_Passive.h,v 1.14 2000-10-20 07:42:06 dular Exp $ */
#ifndef _DATA_PASSIVE_H_
#define _DATA_PASSIVE_H_

#include "listman.h"
#include "Message.h"
#include "Data_Element.h"

#ifndef NULL
#define NULL  0L
#endif

#define _0D      0
#define _1D      1
#define _2D      2
#define _3D      3
#define _ALL     4

#define GETDP_PROMPT_STRING  "getdp> "
#define GETDP_TMP_FILENAME   "getdp.tmp"

/* ------------------------------------------------------------------------ */
/*  V a l u e                                                               */
/* ------------------------------------------------------------------------ */

#define MAX_DIM             9   /* second-rank tensor of order 3 : 3^2 = 9  */
#define NBR_MAX_HARMONIC    2    

struct Value {
  int     Type ;
  double  Val [NBR_MAX_HARMONIC * MAX_DIM] ;
} ;

/* ------------------------------------------------------------------------ */
/*  P r o b l e m                                                           */
/* ------------------------------------------------------------------------ */

struct Problem {
  List_T  * Group         , * Expression        ; 
  List_T  * FunctionSpace , * Constraint        , * Formulation   ;
  List_T  * JacobianMethod, * IntegrationMethod ;
  List_T  * Resolution    , * PostProcessing    , * PostOperation ;
} ;

/* ------------------------------------------------------------------------ */
/*  G r o u p                                                               */
/* ------------------------------------------------------------------------ */

struct Group {
  char    * Name ;
  int     Num,  Type, FunctionType, SuppListType ;
  List_T  * InitialList , * InitialSuppList ;
  List_T  * ExtendedList, * ExtendedSuppList ;
} ;

/* Group.Type */
#define REGIONLIST   1
#define ELEMENTLIST  2

/* Group.FunctionType */
#define REGION                     1

#define NODESOF                    2
#define EDGESOF                    3
#define FACETSOF                   4
#define VOLUMESOF                  5
#define ELEMENTSOF                 6

#define GLOBAL                     7

#define GROUPSOFNODESOF           11
#define GROUPSOFEDGESOF           12
#define GROUPSOFFACETSOF          13
#define GROUPSOFEDGESONNODESOF    14

#define EDGESOFTREEIN             21
#define FACETSOFTREEIN            22

#define DUALNODESOF               30
#define DUALEDGESOF               31
#define DUALFACETSOF              32
#define DUALVOLUMESOF             33

#define BOUNDARYOFDUALNODESOF     40
#define BOUNDARYOFDUALEDGESOF     41
#define BOUNDARYOFDUALFACETSOF    42

/* Group.SuppListType */
#define SUPPLIST_NONE              0
#define SUPPLIST_NOT               1
#define SUPPLIST_STARTINGON        2
#define SUPPLIST_ONONESIDEOF       3
#define SUPPLIST_INSUPPORT         4
#define SUPPLIST_CONNECTEDTO       5

/* ------------------------------------------------------------------------ */
/*  E x p r e s s i o n                                                     */
/* ------------------------------------------------------------------------ */

struct Expression {
  char * Name ;
  int  Type ;
  union {
    double  Constant ;
    List_T  * WholeQuantity ;
    struct {
      List_T  * ExpressionPerRegion ;
      int  NumLastRegion ;  struct Expression  * ExpressionForLastRegion ;
    }  PieceWiseFunction ;
  }  Case ;
} ;

struct ExpressionPerRegion {
  int  RegionIndex, ExpressionIndex ;
} ;

/* Expression.Type */
#define UNDEFINED_EXP         0
#define CONSTANT              1
#define WHOLEQUANTITY         2
#define PIECEWISEFUNCTION     3


/* ------------------------------------------------------------------------ */
/*  C o n s t r a i n t                                                     */
/* ------------------------------------------------------------------------ */

struct Constraint {
  char    * Name ;
  int     Type ;
  List_T  * ConstraintPerRegion ;
  List_T  * MultiConstraintPerRegion ;
} ;

struct ConstraintPerRegion {
  int  Type, RegionIndex, SubRegionIndex, TimeFunctionIndex ;
  union {
    struct { int  ExpressionIndex ; } Fixed ;
    struct { char *ResolutionName ; } Solve ;
    struct { int  Node1, Node2 ;    } Network ;
    struct {
      int  RegionRefIndex, SubRegionRefIndex ;
      int  FilterIndex, CoefIndex, FunctionIndex  ;
      int  FilterIndex2, CoefIndex2, FunctionIndex2  ;
    } Link ;
  } Case ;
} ;

struct MultiConstraintPerRegion {
  char    * Name ;
  List_T  * ConstraintPerRegion ;
  struct ConstraintActive  * Active ;
} ;

/* Constraint.Type & ConstraintPerRegion.Type */
#define NONE                  0
#define ASSIGN                1
#define INIT                  2
#define ASSIGNFROMRESOLUTION  3
#define INITFROMRESOLUTION    4
#define NETWORK               5
#define CST_LINK              6


/* ------------------------------------------------------------------------ */
/*  J a c o b i a n M e t h o d                                             */
/* ------------------------------------------------------------------------ */

struct JacobianMethod {
  char    * Name ;
  List_T  * JacobianPerRegion ;
} ;

struct JacobianCase {
  int  RegionIndex, TypeJacobian ;
  int  NbrParameters ;  double  * Para ;
} ;

/* JacobianPerRegion.TypeJacobian */
/* WARNING! The numbering is important (boundary operator -> -1) */

#define JACOBIAN_PNT                  0
#define JACOBIAN_LIN                  1
#define JACOBIAN_SUR                  2
#define JACOBIAN_VOL                  3

#define JACOBIAN_SURAXI               10
#define JACOBIAN_VOLAXI               11

#define JACOBIAN_SURAXISQU            20
#define JACOBIAN_VOLAXISQU            21

#define JACOBIAN_SURSPHSHELL          30
#define JACOBIAN_VOLSPHSHELL          31

#define JACOBIAN_VOLAXISPHSHELL       40

#define JACOBIAN_VOLAXISQUSPHSHELL    50

#define JACOBIAN_VOLPLPDX             60
#define JACOBIAN_VOLPLPDY             61
#define JACOBIAN_VOLPLPDZ             62
#define JACOBIAN_VOLAXIPLPDX          63
#define JACOBIAN_VOLAXIPLPDY          64
#define JACOBIAN_VOLAXIPLPDZ          65



/* ------------------------------------------------------------------------ */
/*  I n t e g r a t i o n   M e t h o d                                     */
/* ------------------------------------------------------------------------ */

struct IntegrationMethod {
  char    *Name ;
  List_T  *Method ;
  int      CriterionIndex ;
} ;

struct IntegrationCase {
  int     Type, SubType ;
  List_T  *Case ;
} ;

/* IntegrationCase.Type */
#define ANALYTIC               1
#define GAUSS                  2
#define NEWTONCOTES            3
#define PATTERSON              4
#define GAUSSLEGENDRE          5

/* IntegrationCase.SubType */
#define STANDARD               1
#define SINGULAR               2
#define ADAPTATIVE             3

struct Quadrature {
  int    ElementType ;
  int    NumberOfPoints, MaxNumberOfPoints ;
  int    NumberOfDivisions, MaxNumberOfDivisions ;
  double StoppingCriterion ;
  void   (*Function)() ;
} ;


/* ------------------------------------------------------------------------ */
/*  F u n c t i o n   S p a c e                                             */
/* ------------------------------------------------------------------------ */

struct FunctionSpace {
  char    * Name ;
  int     Type ;
  List_T  * BasisFunction, * SubSpace, * GlobalQuantity, * Constraint ;

  struct DofData  * DofData, *MainDofData ;
} ;

struct BasisFunction {
  char    * Name, * NameOfCoef ;
  List_T  * GlobalBasisFunction ;
  int     Dimension, Num ;
  void    (*Function)();
  void    (*dFunction)();
  void    (*dInvFunction)();
  int     SupportIndex, EntityIndex ;
  double  Order ;
  int     ElementType ;
} ;

struct GlobalBasisFunction {
  int   EntityIndex ; /* Must be the first element of the structure */
  int   FormulationIndex, DefineQuantityIndex, ResolutionIndex ;
  struct QuantityStorage  * QuantityStorage ;
} ;

/* BasisFunction.Type */
/* WARNING! The numbering is important (exterior derivative -> +1) */
#define FORM0        0
#define FORM1        1
#define FORM2        2
#define FORM3        3

#define FORM0S       4
#define FORM1S       5
#define FORM2S       6
#define FORM3S       7

#define FORM0P      10
#define FORM1P      11
#define FORM2P      12
#define FORM3P      13

#define SCALAR      20 
#define VECTOR      21
#define TENSOR      22  /* second-rank tensor of order 3 */
#define TENSOR_SYM  23
#define TENSOR_DIAG 24

/*  VECTOR  TENSOR_DIAG  TENSOR_SYM  TENSOR
    |0|     |0    |      |0 1 2|     |0 1 2|
    |1|     |  1  |      |s 3 4|     |3 4 5|
    |2|     |    2|      |s s 5|     |6 7 8| */

#define VECTORP     31

struct SubSpace {
  char    * Name ;
  List_T  * BasisFunction ;
} ;

struct GlobalQuantity {
  char  * Name ;
  int   Num,  Type, ReferenceIndex ;
} ;

/* GlobalQuantity.Type */
#define ALIASOF              1
#define ASSOCIATEDWITH       2

struct ConstraintInFS {
  int  QuantityType, ReferenceIndex, EntityIndex ;
  struct ConstraintPerRegion  * ConstraintPerRegion ;
  struct {
    int ResolutionIndex ;
    struct ConstraintActive  * Active ;
  } Active ;  /* a deplacer lorsque sera necessaire */
} ;

/* ConstraintInFS.QuantityType */
#define LOCALQUANTITY       1
#define GLOBALQUANTITY      2
#define INTEGRALQUANTITY    3
#define NODOF               4


/* ------------------------------------------------------------------------ */
/*  F u n c t i o n                                                         */
/* ------------------------------------------------------------------------ */

struct Function {
  void    (*Fct)() ; /* ANSI C++ forbids data member `Function' with same name as enclosing class */
  int     TypeOfValue, NbrArguments, NbrParameters ;
  double  *Para ;
  struct FunctionActive  * Active ;
} ;


/* ------------------------------------------------------------------------ */
/*  F o r m u l a t i o n                                                   */
/* ------------------------------------------------------------------------ */

struct Formulation {
  char    * Name ;
  int     Type ;
  List_T  * DefineQuantity, * Equation ;
} ;

/* Formulation.Type */
#define FEMEQUATION       1
#define BEMEQUATION       2
#define GLOBALEQUATION    3

struct IntegralQuantity {
  List_T  *WholeQuantity;
  int      DofIndexInWholeQuantity ;
  int      TypeOperatorDof, DefineQuantityIndexDof ;
  int      DefineQuantityIndexNoDof ;
  int      InIndex ;
  int      IntegrationMethodIndex, JacobianMethodIndex;
  int      Symmetry ;

  int      CanonicalWholeQuantity, ExpressionIndexForCanonical ;
  struct   Function  FunctionForCanonical ;
} ;

struct DefineQuantity {
  char    * Name ;
  int     Type ;
  int     FunctionSpaceIndex ;

  /* for subspaces */
  List_T  *IndexInFunctionSpace ;

  /* for multiple DofData vs. one FunctionSpace */
  int      DofDataIndex ; 
  struct   DofData  * DofData ;

  /* for integral quantities */ 
  struct   IntegralQuantity  IntegralQuantity ;
} ;

/* DefineQuantity.Type */
/* LOCALQUANTITY
   GLOBALQUANTITY
   INTEGRALQUANTITY */

struct EquationTerm {
  int        Type ;

  union {

    struct FemLocalTerm {
      struct {
	int     TypeTimeDerivative ;

	List_T  * WholeQuantity ;
	int     DofIndexInWholeQuantity ;
	int     CanonicalWholeQuantity, ExpressionIndexForCanonical ;
	int     CanonicalWholeQuantity_Equ, ExpressionIndexForCanonical_Equ, 
	          OperatorTypeForCanonical_Equ ;

	int     NbrQuantityIndex, * QuantityIndexTable, QuantityIndexPost ;
	int     * QuantityTraceGroupIndexTable ;

	int     TypeOperatorEqu, DefineQuantityIndexEqu ;
	int     TypeOperatorDof, DefineQuantityIndexDof ;
	int     DefineQuantityIndexNoDof, DofInTrace ;
      } Term ;

      int  InIndex ; 
      int  IntegrationMethodIndex, JacobianMethodIndex ;

      struct FemLocalTermActive  * Active ;
    } LocalTerm ;


    struct FemGlobalTerm {
      int  TypeTimeDerivative ;
      int  DefineQuantityIndex ;

      struct {
	int  TypeTimeDerivative ;

	List_T  * WholeQuantity ;
	int     DofIndexInWholeQuantity ;
	int     CanonicalWholeQuantity, ExpressionIndexForCanonical ;

	int     NbrQuantityIndex, * QuantityIndexTable ;
	int     * QuantityTraceGroupIndexTable ;

	int     TypeOperatorEqu, DefineQuantityIndexEqu ;
	int     TypeOperatorDof, DefineQuantityIndexDof ;
	int     DefineQuantityIndexNoDof ;
      } Term ;
      int  InIndex ;
    } GlobalTerm ;


    struct GlobalEquation {
      int  Type, ConstraintIndex ;
      List_T  * GlobalEquationTerm ;
    } GlobalEquation ;

  } Case ;
} ;


struct GlobalEquationTerm {
  int  DefineQuantityIndexNode, DefineQuantityIndexLoop ;
  int  DefineQuantityIndexEqu ;
  int  InIndex ;
} ;


/* EquationTerm.Type */
#define GALERKIN        1
#define GLOBALTERM      2
#define GLOBALEQUATION  3
#define DERHAM          4

/* Term.TypeOfTimeDerivative */
#define NODT_      0
#define DT_        1
#define DTDOF_     2
#define DTDT_      3
#define DTDTDOF_   4
#define JACNL_    10
#define NEVERDT_  11

/* Term.TypeOperator */
#define NOOP       0

#define EXTDER     1
#define GRAD       2
#define CURL       3
#define DIV        4

#define EXTDERINV  5
#define GRADINV    6
#define CURLINV    7
#define DIVINV     8

/* Tous ces operateurs de trace ne servent a RIEN pour le moment 
   De plus, les 'x' sont ambigus. Il faut penser a definir des 
   operateurs de trace (T ou T*), qui doivent avoir, outre 
   \Gamma=\partial\Omega, l'info concernant \Omega.
 */
#define NPx        9
#define NPxEXTDER 10
#define NPxGRAD   11
#define NPxCURL   12
#define NPxDIV    13

#define NSx       14
#define NSxEXTDER 15
#define NSxGRAD   16
#define NSxCURL   17
#define NSxDIV    18

#define DXY       21


/* CanonicalWholeQuantity */
#define CWQ_NONE           0
#define CWQ_DOF            1
#define CWQ_EXP_TIME_DOF   2

#define CWQ_GF             3
#define CWQ_GF_PSCA_DOF    4
#define CWQ_GF_PSCA_EXP    5
#define CWQ_GF_PVEC_DOF    6
#define CWQ_GF_PVEC_EXP    7

#define CWQ_EXP_TIME_GF_PSCA_DOF  8
#define CWQ_EXP_TIME_GF_PVEC_DOF  9

/* ------------------------------------------------------------------------ */
/*  W h o l e Q u a n t i t y                                               */
/* ------------------------------------------------------------------------ */

struct WholeQuantity {
  int  Type ;

  union {
    double Constant ;
    struct Function Function ;
    struct { int  TypeOperator, Index, NbrArguments ;
             int  TypeQuantity ; }                               OperatorAndQuantity ;
    struct { int  Index, NbrArguments ; }                         Expression ;
    struct { List_T *WholeQuantity ; }                            TimeDerivative ;
    struct { double *Value ; }                                    CurrentValue ;
    struct { int  Index ; }                                       Argument ;
    struct { List_T *WholeQuantity_True, *WholeQuantity_False ; } Test ;
    struct { int  Index ; }                                       SaveValue ;
    struct { int  Index ; }                                       ValueSaved ;
    struct { int  TypeOperator ; void  (*Function)() ; }          Operator ; /* binary or unary */
    struct { List_T *WholeQuantity ; 
             int FunctionSpaceIndexForType, NbrHar ; }            Cast ;
    struct { List_T *WholeQuantity ; 
             int InIndex, DofIndexInWholeQuantity ; }             Trace ;
  } Case ;

} ;


/* WholeQuantity.Type */
#define WQ_OPERATORANDQUANTITY     1
#define WQ_OPERATORANDQUANTITYEVAL 2
#define WQ_BINARYOPERATOR          3
#define WQ_UNARYOPERATOR           4
#define WQ_EXPRESSION              5
#define WQ_BUILTINFUNCTION         6
#define WQ_EXTERNBUILTINFUNCTION   7
#define WQ_CONSTANT                8
#define WQ_CURRENTVALUE            9
#define WQ_ARGUMENT                10
#define WQ_TIMEDERIVATIVE          11
#define WQ_CAST                    12
#define WQ_TEST                    13
#define WQ_SAVEVALUE               14
#define WQ_VALUESAVED              15
#define WQ_SOLIDANGLE              16
#define WQ_TRACE                   17
#define WQ_ORDER                   18

/* TypeOperator */
#define OP_PLUS           1
#define OP_MINUS          2
#define OP_TIME           3
#define OP_DIVIDE         4
#define OP_MODULO         5
#define OP_POWER          6
#define OP_CROSSPRODUCT   7
#define OP_LESS           8
#define OP_GREATER        9
#define OP_LESSOREQUAL    10
#define OP_GREATEROREQUAL 11
#define OP_EQUAL          12
#define OP_NOTEQUAL       13
#define OP_APPROXEQUAL    14
#define OP_AND            15
#define OP_OR             16
#define OP_NEG            17
#define OP_NOT            18

/* OperatorAndQuantity.TypeQuantity */

#define QUANTITY_SIMPLE  1
#define QUANTITY_DOF     2
#define QUANTITY_NODOF   3
#define QUANTITY_BF      4


/* ------------------------------------------------------------------------ */
/*  R e s o l u t i o n                                                     */
/* ------------------------------------------------------------------------ */

struct Resolution {
  char    * Name ;
  List_T  * DefineSystem, * Operation ;
} ;

struct DefineSystem {
  char    * Name;
  int     Type ;
  List_T  * FormulationIndex, * FrequencyValue ;
  char    * SolverDataFileName ;

  char    * MeshName, * AdaptName ;
  List_T  * OriginSystemIndex ;
  char    * DestinationSystemName ;
  int     DestinationSystemIndex ;
} ;

/* DefineSystem.Type */
#define VAL_REAL     1
#define VAL_COMPLEX  2

struct Operation {
  int  Type, DefineSystemIndex ;

  union {
    int     SetTimeIndex ;
    char   *SystemCommand ;
    struct {
      int     ExpressionIndex ;
    } Update ;
    struct {
      int     ExpressionIndex ;
    } SetFrequency ;
    struct {
      List_T  * Frequency ;
      int     DefineSystemIndex[2] ; 
    } FourierTransform ;
    struct {
      int     Size ; 
      List_T  * Save ;
      double  Shift ; 
    } Lanczos ;
    struct {
      double  Time0, TimeMax ;
      int     DTimeIndex, ThetaIndex ;
      List_T  * Operation ;
    } TimeLoopTheta ;
    struct {
      double  Time0, TimeMax, Beta, Gamma ;
      int     DTimeIndex ;
      List_T  * Operation ;
    } TimeLoopNewmark ;
    struct {
      double  Criterion ;
      int     NbrMaxIteration, RelaxationFactorIndex, Flag ;
      List_T  * Operation ;
    } IterativeLoop ;
    struct {
      double  Criterion, DivisionCoefficient ;
      int     NbrMaxIteration, Flag ;
      List_T  * ChangeOfState ;
      List_T  * Operation, * OperationEnd ;
    } IterativeTimeReduction ;
    struct {
      int     ExpressionIndex;
      List_T  * Operation_True, * Operation_False ;
    } Test ;
    struct {
      List_T  * DofNumber, * TimeStep, *Expression ;
      char    * FileOut ;       
    } Print ;
    struct {
      int     GroupIndex, ExpressionIndex ;
    } ChangeOfCoordinates ;
  } Case ;

} ;


struct ChangeOfState {
  int     Type ;
  int     QuantityIndex, InIndex, FormulationIndex ;
  double  Criterion ;
  double  * ActiveList[2] ;
  int     ExpressionIndex, ExpressionIndex2, FlagIndex ;
} ;


/* Operation.Type */
#define OPERATION_NONE                      0

#define OPERATION_GENERATE                  1
#define OPERATION_SOLVE                     2
#define OPERATION_GENERATEJAC               3
#define OPERATION_SOLVEJAC                  4
#define OPERATION_GENERATESEPARATE          5
#define OPERATION_UPDATE                    6
#define OPERATION_LANCZOS                   7

#define OPERATION_SAVESOLUTION             10
#define OPERATION_SAVESOLUTIONS            11
#define OPERATION_READSOLUTION             12
#define OPERATION_TRANSFERSOLUTION         13
#define OPERATION_TRANSFERINITSOLUTION     14
#define OPERATION_INITSOLUTION             15

#define OPERATION_SETTIME                  20
#define OPERATION_SETFREQUENCY             21
#define OPERATION_TEST                     22
#define OPERATION_FOURIERTRANSFORM         23
#define OPERATION_BREAK                    24
#define OPERATION_PRINT                    25
#define OPERATION_WRITE                    26
#define OPERATION_SCAN                     27
#define OPERATION_READ                     28

#define OPERATION_TIMELOOPTHETA            30
#define OPERATION_TIMELOOPNEWMARK          31
#define OPERATION_ITERATIVELOOP            32
#define OPERATION_ITERATIVETIMEREDUCTION   33

#define OPERATION_CHANGEOFCOORDINATES      40

#define OPERATION_SYSTEMCOMMAND            50

/* ChangeOfState.Type */
#define CHANGEOFSTATE_NOCHANGE              0
#define CHANGEOFSTATE_CHANGESIGN            1
#define CHANGEOFSTATE_CHANGELEVEL           2
#define CHANGEOFSTATE_CHANGEREFERENCE       3
#define CHANGEOFSTATE_CHANGEREFERENCE2      4


/* ------------------------------------------------------------------------ */
/*  P o s t P r o c e s s i n g                                             */
/* ------------------------------------------------------------------------ */

struct PostProcessing {
  char    * Name ;
  int       FormulationIndex ; 
  List_T  * OriginSystemIndex ;
  char    * NameOfSystem ;
  List_T  * PostQuantity ;
} ;

struct PostQuantity {
  char    * Name ;
  List_T  * PostQuantityTerm ;
} ;

struct PostQuantityTerm {
  int     Type, EvaluationType ;

  int     TypeTimeDerivative ;
  List_T  * WholeQuantity ;
  int     NbrQuantityIndex, * QuantityIndexTable ;
  int     * QuantityTraceGroupIndexTable ;
  int     InIndex, JacobianMethodIndex, IntegrationMethodIndex ;
} ;

/* PostQuantityTerm.Type */
/* LOCALQUANTITY  
   GLOBALQUANTITY    
   INTEGRALQUANTITY      */

/* PostQuantityTerm.EvaluationType */
#define LOCAL           1
#define INTEGRAL        2

/* ------------------------------------------------------------------------ */
/*  P o s t O p e r a t i o n                                               */
/* ------------------------------------------------------------------------ */

struct PostOperation {
  char    * Name, * AppendString ;
  int       PostProcessingIndex, Format ;
  List_T  * PostSubOperation ;
} ;

struct PostSubOperation {
  int    PostQuantityIndex[2], PostQuantitySupport[2] ;  
  int    Type, SubType, CombinationType ;
  int    Depth, Skin, Smoothing, Dimension, HarmonicToTime, CatFile ;
  int    Format, Adapt, Sort, Iso ;
  double Target ;
  List_T * HeaderChar_L, * HeaderTag_L ;
  List_T * FormatChar_L, * FormatTag_L ;
  List_T * FooterChar_L, * FooterTag_L ;
  char   * FileOut ;
  List_T * TimeStep_L, * Value_L, * Iso_L ;
  union {
    struct { int RegionIndex ; } OnRegion ;
    struct { int RegionIndex ; } OnElementsOf ;
    struct { double x[4], y[4], z[4] ; int n[3] ; } OnGrid ;
    struct { int ExpressionIndex[3] ; List_T * ParameterValue[2] ; } OnParamGrid ;
    struct { double x[3], y[3], z[3] ; } OnCut ;
    struct { int RegionIndex, ArgumentIndex ; double x[2] ; int n ; } WithArgument ;
  } Case ;
} ;

/* PostOperation.Type */
#define POP_PRINT         1

/* PostOperation.SubType */
#define PRINT_ONREGION        1
#define PRINT_ONELEMENTSOF    2
#define PRINT_ONCUT_1D        3
#define PRINT_ONCUT_2D        4
#define PRINT_ONGRID          5
#define PRINT_ONGRID_0D       6
#define PRINT_ONGRID_1D       7
#define PRINT_ONGRID_2D       8
#define PRINT_ONGRID_3D       9
#define PRINT_ONGRID_PARAM    10
#define PRINT_WITHARGUMENT    11

/* PostOperation.CombinationType */
#define ADDITION        1
#define SOUSTRACTION    2
#define MULTIPLICATION  3
#define DIVISION        4

/* Unsuccessful search results */
#define NO_BRICK      -999
#define NO_ELEMENT    -999
#define NO_REGION     -999

/* PostSubOperation Tags */
#define TAG_TIME        1
#define TAG_TIMESTEP    2
#define TAG_VALUE       3
#define TAG_X           4
#define TAG_Y           5
#define TAG_Z           6
#define TAG_NODES       7
#define TAG_TYPE        8
#define TAG_VERSION     9
#define TAG_DATE        10
#define TAG_HOST        11
#define TAG_FILENAME    12
#define TAG_USER        13
#define TAG_ABSCISSA    14
#define TAG_NORMAL      15
#define TAG_COMMAND     16

/* PostSubOperation.Format */
#define FORMAT_SPACE_TABLE    1
#define FORMAT_TIME_TABLE     2
#define FORMAT_ADAPT          3
#define FORMAT_GMSH           10
#define FORMAT_GMSH_NL        11
#define FORMAT_UNV            12
#define FORMAT_GREF           13
#define FORMAT_MATLAB         14
#define FORMAT_GNUPLOT        15

/* PostSubOperation.Sort */
#define SORT_BY_POSITION      1
#define SORT_BY_CONNECTIVITY  2

/* ------------------------------------------------------------------------ */
/*  C u r r e n t D a t a                                                   */
/* ------------------------------------------------------------------------ */

struct CurrentData {
  char   * Name ;

  int     NbrSystem, NbrCpu, RankCpu ;
  struct DofData  * DofData_P0 ;

  struct DofData  * DofData ;
  struct GeoData  * GeoData ;

  int     NbrHar ;
  int     Region, SubRegion ;
  int     NumEntity, NumEntityInElement ;

  struct  Element  * Element ;
  double  x, y, z ;
  double  u, v, w ;
  int     IntegrationSupportIndex ;

  struct  Element  * ElementSource ;
  double  xs, ys, zs ;
  double  us, vs, ws ;
  int     SourceIntegrationSupportIndex ;

  double  s, t ;
  double  xp, yp, zp ;
  double  ut, vt, wt ;

  int     TypeTime, TypeAssembly ;

  /* All values below must be of double type */

  double  Time, TimeStep, DTime ;
  double  Theta, Beta, Gamma ;

  double  Iteration, RelativeDifference, RelativeDifferenceOld ;
  double  RelaxationFactor ;
} ;

#endif
