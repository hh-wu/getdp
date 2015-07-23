%{
// GetDP - Copyright (C) 1997-2015 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.
//
// Contributor(s):
//   Ruth Sabariego
//   Johan Gyselinck
//

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "GetDPConfig.h"
#include "GetDPVersion.h"
#include "ProData.h"
#include "ProDefine.h"
#include "ProDefines.h"
#include "ProParser.h"
#include "MacroManager.h"
#include "MallocUtils.h"
#include "TreeUtils.h"
#include "Message.h"
#include "OS.h"

// Global problem structure filled by the parser
extern struct Problem Problem_S;

// Global parser variables
std::string getdp_yyname;
char getdp_yyincludename[256] = "";
long int getdp_yylinenum = 0;
int getdp_yycolnum = 0;
int getdp_yyincludenum = 0;
int getdp_yyerrorlevel = 0;
std::map<std::string, std::vector<double> > CommandLineNumbers;
std::map<std::string, std::string> CommandLineStrings;

// Static parser variables (accessible only in this file)

static Tree_T *ConstantTable_L = 0;
static List_T *ListOfInt_L = 0;
static List_T *ListOfPointer_L = 0, *ListOfPointer2_L = 0, *ListOfChar_L = 0;
static List_T *ListOfFormulation = 0, *ListOfBasisFunction = 0, *ListOfEntityIndex = 0;

static List_T *Operation_L = 0;
static List_T *Current_BasisFunction_L = 0, *Current_SubSpace_L = 0;
static List_T *Current_GlobalQuantity_L = 0, *Current_WholeQuantity_L = 0;
static List_T *Current_System_L = 0;
static int Num_BasisFunction = 1;
static int FlagError = 0;
static int Type_TermOperator = 0, Type_Function = 0, Type_SuppList = 0;
static int Quantity_TypeOperator = 0, Quantity_Index = 0;
static int Current_DofIndexInWholeQuantity = 0, Last_DofIndexInWholeQuantity = 0;
static int Current_NoDofIndexInWholeQuantity = 0;
static int Current_System = 0, Constraint_Index = 0;
static int TypeOperatorDofInTrace = 0, DefineQuantityIndexDofInTrace = 0;
static int ImbricatedLoop = 0;
static char *StringForParameter = 0;

#define MAX_RECUR_LOOPS 100
static fpos_t FposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int LinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static char *LoopControlVariablesNameTab[MAX_RECUR_LOOPS];

static struct Constant               Constant_S, Constant1_S, Constant2_S;
static struct Expression             Expression_S, *Expression_P;
static struct ExpressionPerRegion      ExpressionPerRegion_S;
static struct Group                  Group_S;
static struct Constraint             Constraint_S, *Constraint_P;
static struct ConstraintPerRegion      ConstraintPerRegion_S, *ConstraintPerRegion_P;
static struct MultiConstraintPerRegion MultiConstraintPerRegion_S;
static struct JacobianMethod         JacobianMethod_S;
static struct JacobianCase             JacobianCase_S;
static struct IntegrationMethod      IntegrationMethod_S;
static struct IntegrationCase          IntegrationCase_S;
static struct Quadrature               QuadratureCase_S;
static struct FunctionSpace          FunctionSpace_S;
static struct BasisFunction            BasisFunction_S;
static struct GlobalBasisFunction        GlobalBasisFunction_S;
static struct SubSpace                 SubSpace_S;
static struct GlobalQuantity           GlobalQuantity_S;
static struct ConstraintInFS           ConstraintInFS_S;
static struct Formulation            Formulation_S;
static struct DefineQuantity           DefineQuantity_S;
static struct EquationTerm             EquationTerm_S;
static struct WholeQuantity            WholeQuantity_S, *WholeQuantity_P;
static struct GlobalEquationTerm       GlobalEquationTerm_S;
static struct Resolution             Resolution_S;
static struct DefineSystem             DefineSystem_S;
static struct Operation                Operation_S, *Operation_P;
static struct ChangeOfState            ChangeOfState_S;
static struct TimeLoopAdaptiveSystem   TimeLoopAdaptiveSystem_S;
static struct LoopErrorPostOperation   TimeLoopAdaptivePO_S, IterativeLoopPO_S;
static struct IterativeLoopSystem      IterativeLoopSystem_S;
static struct PostProcessing         PostProcessing_S, InteractivePostProcessing_S;
static struct PostQuantity             PostQuantity_S;
static struct PostQuantityTerm           PostQuantityTerm_S;
static struct PostOperation          PostOperation_S;
static struct PostSubOperation         PostSubOperation_S;

static std::map<std::string, std::vector<double> > FloatOptions_S;
static std::map<std::string, std::vector<std::string> > CharOptions_S;

// External lexer functions
void hack_fsetpos();
void hack_fsetpos_printf();
int  getdp_yylex();

// Forward function declarations
void Alloc_ParserVariables();
void Check_NameOfStructNotExist(const char *Struct, List_T *List_L, void *data,
				int (*fcmp)(const void *a, const void *b));
int  Add_Group(struct Group *Group_P, char *Name, bool Flag_Add,
               int Flag_Plus, int Num_Index);
int  Num_Group(struct Group *Group_P, char *Name, int Num_Group);
void Fill_GroupInitialListFromString(List_T *list, const char *str);
int  Add_Expression(struct Expression *Expression_P, char *Name, int Flag_Plus);
bool Is_ExpressionPieceWiseDefined(int index);
void Pro_DefineQuantityIndex(List_T *WholeQuantity_L,int DefineQuantityIndexEqu,
			     int *NbrQuantityIndex, int **QuantityIndexTable,
			     int **QuantityTraceGroupIndexTable);
void Pro_DefineQuantityIndex_1(List_T *WholeQuantity_L, int TraceGroupIndex);
void yyerror(const char *s);
void vyyerror(const char *fmt, ...);

struct doubleXstring{
  double d;
  char *s;
};

%}

/* ------------------------------------------------------------------ */
%union {
  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;
}

%token <i> tINT
%token <d> tFLOAT
%token <c> tSTRING tBIGSTR

%type <i>  GroupRHS ReducedGroupRHS
%type <i>  FunctionForGroup SuppListTypeForGroup
%type <i>  Expression Printf
%type <i>  ArgumentsForFunction RecursiveListOfQuantity
%type <i>  PostQuantitySupport
%type <l>  IRegion RecursiveListOfRegion Enumeration
%type <i>  StrCmp NbrRegions CommaFExprOrNothing
%type <i>  GmshOperation GenerateGroupOperation
%type <d>  FExpr OneFExpr
%type <l>  MultiFExpr ListOfFExpr RecursiveListOfFExpr
%type <l>  RecursiveListOfCharExpr ParametersForFunction
%type <l>  ListOfRegion ListOfRegionOrAll SuppListOfRegion
%type <l>  ConstraintCases IntegrationCases QuadratureCases JacobianCases
%type <l>  BasisFunctions SubSpaces GlobalQuantities ConstraintInFSs
%type <l>  ListOfBasisFunction RecursiveListOfBasisFunction
%type <l>  ListOfBasisFunctionCoef RecursiveListOfBasisFunctionCoef
%type <l>  Equations WholeQuantityExpression
%type <l>  DefineSystems Operation ChangeOfStates
%type <l>  ListOfFormulation RecursiveListOfFormulation
%type <l>  ListOfSystem RecursiveListOfSystem
%type <l>  PostQuantities SubPostQuantities PostSubOperations
%type <c>  NameForMathFunction NameForFunction CharExpr CharExprNoVar
%type <c>  StrCat StringIndex String__Index
%type <c>  LP RP
%type <t>  Quantity_Def
%type <l>  TimeLoopAdaptiveSystems TimeLoopAdaptivePOs IterativeLoopSystems
%type <l>  IterativeLoopPOs

/* ------------------------------------------------------------------ */
%token  tEND tDOTS
%token  tStrCat tSprintf tPrintf tMPI_Printf tRead tPrintConstants tStrCmp
%token  tStrChoice tNbrRegions tGetRegion
%token  tFor tEndFor tIf tElse tEndIf tWhile tMacro tReturn tCall
%token  tFlag
%token  tInclude
%token  tConstant tList tListAlt tLinSpace tLogSpace tListFromFile
%token  tChangeCurrentPosition
%token  tDefineConstant tUndefineConstant tDefineNumber tDefineString

%token  tPi tMPI_Rank tMPI_Size t0D t1D t2D t3D
%token  tTotalMemory tCurrentDirectory
%token  tGETDP_MAJOR_VERSION tGETDP_MINOR_VERSION tGETDP_PATCH_VERSION

%token  tExp tLog tLog10 tSqrt tSin tAsin tCos tAcos tTan
%token    tAtan tAtan2 tSinh tCosh tTanh tFabs tFloor tCeil tRound tSign
%token    tFmod tModulo tHypot tRand
%token    tSolidAngle tTrace tOrder tCrossProduct tDofValue
%token    tMHTransform tMHJacNL

%token  tGroup tDefineGroup tAll tInSupport tMovingBand2D

%token  tDefineFunction

%token  tConstraint
%token    tRegion tSubRegion tRegionRef tSubRegionRef
%token    tFilter tToleranceFactor tCoefficient tValue tTimeFunction
%token    tBranch tNameOfResolution

%token  tJacobian
%token      tCase

%token  tMetricTensor

%token  tIntegration
%token    tType tSubType tCriterion tGeoElement
%token      tNumberOfPoints tMaxNumberOfPoints
%token        tNumberOfDivisions tMaxNumberOfDivisions
%token          tStoppingCriterion

%token  tFunctionSpace
%token    tName
%token    tBasisFunction
%token      tNameOfCoef tFunction tdFunction tSubFunction tSubdFunction tSupport tEntity
%token    tSubSpace tNameOfBasisFunction
%token    tGlobalQuantity
%token      tEntityType tEntitySubType tNameOfConstraint

%token  tFormulation
%token    tQuantity
%token        tNameOfSpace tIndexOfSystem
%token        tSymmetry
%token    tGalerkin tdeRham tGlobalTerm tGlobalEquation
%token        tDt tDtDof tDtDt tDtDtDof tDtDtDtDof tDtDtDtDtDof tDtDtDtDtDtDof
%token        tJacNL tDtDofJacNL tNeverDt tDtNL
%token        tAtAnteriorTimeStep tMaxOverTime tFourierSteinmetz
%token        tIn
%token        tFull_Matrix

%token  tResolution tHidden
%token    tDefineSystem
%token      tNameOfFormulation tNameOfMesh tFrequency tSolver
%token      tOriginSystem tDestinationSystem
%token    tOperation tOperationEnd
%token      tSetTime tSetTimeStep tDTime tSetFrequency tFourierTransform tFourierTransformJ
%token      tLanczos tEigenSolve tEigenSolveJac tPerturbation
%token      tUpdate tUpdateConstraint tBreak tGetResidual
%token      tEvaluate tSelectCorrection tAddCorrection tMultiplySolution
%token      tAddOppositeFullSolution tSolveAgainWithOther tSetGlobalSolverOptions

%token      tTimeLoopTheta tTimeLoopNewmark tTimeLoopRungeKutta tTimeLoopAdaptive
%token        tTime0 tTimeMax tTheta
%token        tBeta tGamma
%token      tIterativeLoop tIterativeLoopN tIterativeLinearSolver
%token      tNbrMaxIteration tRelaxationFactor
%token      tIterativeTimeReduction
%token        tSetCommSelf tSetCommWorld tBarrier tBroadcastFields tSleep
%token      tDivisionCoefficient tChangeOfState
%token      tChangeOfCoordinates tChangeOfCoordinates2 tSystemCommand tError
%token        tGmshRead tGmshMerge tGmshOpen tGmshWrite tGmshClearAll
%token        tDelete tDeleteFile tRenameFile tCreateDir
%token      tGenerateOnly tGenerateOnlyJac
%token      tSolveJac_AdaptRelax
%token      tSaveSolutionExtendedMH tSaveSolutionMHtoTime tSaveSolutionWithEntityNum
%token      tInitMovingBand2D tMeshMovingBand2D
%token      tGenerateMHMoving tGenerateMHMovingSeparate tAddMHMoving
%token      tGenerateGroup tGenerateJacGroup tGenerateRHSGroup
%token      tGenerateGroupCumulative tGenerateJacGroupCumulative tGenerateRHSGroupCumulative
%token      tSaveMesh
%token      tDeformMesh
%token      tFrequencySpectrum
%token  tPostProcessing
%token      tNameOfSystem

%token  tPostOperation
%token    tNameOfPostProcessing tUsingPost tAppend tResampleTime
%token      tPlot tPrint tPrintGroup tEcho tSendMergeFileRequest tWrite tAdapt
%token        tOnGlobal tOnRegion tOnElementsOf
%token        tOnGrid tOnSection tOnPoint tOnLine tOnPlane tOnBox
%token        tWithArgument
%token        tFile tDepth tDimension tComma tTimeStep tHarmonicToTime
%token        tCosineTransform
%token        tValueIndex tValueName
%token        tFormat tHeader tFooter tSkin tSmoothing
%token        tTarget tSort tIso tNoNewLine tNoTitle tDecomposeInSimplex tChangeOfValues
%token        tTimeLegend tFrequencyLegend tEigenvalueLegend
%token        tEvaluationPoints tStoreInRegister tStoreInVariable
%token        tStoreInField tStoreInMeshBasedField
%token        tStoreMaxInRegister tStoreMaxXinRegister tStoreMaxYinRegister
%token        tStoreMaxZinRegister tStoreMinInRegister tStoreMinXinRegister
%token        tStoreMinYinRegister tStoreMinZinRegister
%token        tLastTimeStepOnly tAppendTimeStepToFileName tTimeValue tTimeImagValue
%token        tAppendExpressionToFileName tAppendExpressionFormat
%token        tOverrideTimeStepValue tNoMesh tSendToServer tColor tStr
%token        tDate tOnelabAction tFixRelativePath
%token        tNewCoordinates tAppendToExistingFile tAppendStringToFileName

/* ------------------------------------------------------------------ */
/* Operators (with ascending priority): cf. C language                */
/*                                                                    */
/* Notes: - associativity (%left, %right)                             */
/*        - UNARYPREC is a dummy terminal to resolve ambiguous cases  */
/*          for + and - (which exist in both unary and binary form)   */
/* ------------------------------------------------------------------ */
%right   tDEF
%right   '?' tDOTS
%left    tOR
%left    tAND
%left    tEQUAL tNOTEQUAL tAPPROXEQUAL
%left    '<' tLESSOREQUAL '>' tGREATEROREQUAL tLESSLESS tGREATERGREATER
%left    '+' '-'
%left    '*' '/' '%' tCROSSPRODUCT
%left    '|' '&'
%right   '!' UNARYPREC
%right   '^'
%left    '(' ')' '[' ']' '.'
%left    '#' '$' tSHOW
/* ------------------------------------------------------------------ */

%start Stats

%%

Stats :
    { Alloc_ParserVariables(); }
    ProblemDefinitions
 ;


/* ------------------------------------------------------------------------ */
/*  P r o b l e m                                                           */
/* ------------------------------------------------------------------------ */


ProblemDefinitions :

    /* none */
  | ProblemDefinitions
    { Formulation_S.DefineQuantity = NULL; }
    ProblemDefinition
 ;


ProblemDefinition :

    tGroup             '{' Groups             '}'
  | tFunction          '{' Functions          '}'
  | tConstraint        '{' Constraints        '}'
  | tJacobian          '{' JacobianMethods    '}'
  | tIntegration       '{' IntegrationMethods '}'
  | tFunctionSpace     '{' FunctionSpaces     '}'
  | tFormulation       '{' Formulations       '}'
  | tResolution        '{' Resolutions        '}'
  | tPostProcessing    '{' PostProcessings    '}'
  | tPostOperation     '{' PostOperations     '}'

  | SeparatePostOperation

  | Loop // contains For, EndFor, If, EndIf, Affectation

  | tInclude CharExpr
    {
      strcpy(getdp_yyincludename, $2); getdp_yyincludenum++; return(0);
    }
 ;


/* ------------------------------------------------------------------------ */
/*  G r o u p                                                               */
/* ------------------------------------------------------------------------ */


Groups :

    /* none */
  | Groups Group
 ;


Group :

    String__Index tDEF ReducedGroupRHS tEND
    { Add_Group(&Group_S, $1, false, 0, 0); }

  | String__Index '+' tDEF ReducedGroupRHS tEND
    { Add_Group(&Group_S, $1, true, 0, 0); }

  | String__Index tDEF tMovingBand2D '[' IRegion
    {
      int j = 0;
      if(List_Nbr($5) == 1)
        List_Read($5, 0, &j);
      else
        vyyerror("Single region number expected for moving band definition");
      Group_S.InitialList = List_Create(1, 1, sizeof(int));
      List_Add(Group_S.InitialList, &j);
      Group_S.Type = MOVINGBAND2D;
      Group_S.FunctionType = REGION;
      Group_S.InitialSuppList = NULL;
      Group_S.SuppListType = SUPPLIST_NONE;
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D));
      Group_S.MovingBand2D->PhysNum = j;
    }
    ',' ListOfRegion
    {
      Group_S.MovingBand2D->InitialList1 = $8;
      Group_S.MovingBand2D->ExtendedList1 = NULL;
    }
    ',' ListOfRegion ',' FExpr ']' tEND
    {
      Group_S.MovingBand2D->InitialList2 = $11;
      Group_S.MovingBand2D->Period2 = (int)$13;
      Add_Group(&Group_S, $1, false, 0, 0);
    }

  | tDefineGroup '[' DefineGroups ']' tEND

  | Loop
 ;

ReducedGroupRHS :

    FunctionForGroup '[' ListOfRegionOrAll
    {
      Group_S.FunctionType = $1;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST;  break;
      default :          Group_S.Type = REGIONLIST;  break;
      }
      Group_S.InitialList = $3;
    }
    SuppListOfRegion ']'
    {
      Group_S.SuppListType = Type_SuppList;
      Group_S.InitialSuppList = $5;
      $$ = -1;
    }

  /* shortcut: #list ==  Region[ list ] */
  | '#' ListOfRegion
    {
      Group_S.FunctionType = REGION;  Group_S.Type = REGIONLIST;
      Group_S.InitialList = $2;
      Group_S.SuppListType = SUPPLIST_NONE;  Group_S.InitialSuppList = NULL;
      $$ = -1;
    }
 ;

GroupRHS :

    ReducedGroupRHS
    {
      $$ = $1;
    }

  | String__Index
    {
      int i;
      if(!strcmp($1, "All")) {
	$$ = -3;
      }
      else if((i = List_ISearchSeq(Problem_S.Group, $1, fcmp_Group_Name)) >= 0) {
	List_Read(Problem_S.Group, i, &Group_S); $$ = i;
      }
      else {
	$$ = -2; vyyerror("Unknown Group: %s", $1);
      }
      Free($1);
    }
 ;

FunctionForGroup :

    tRegion
    { $$ = REGION; }

  | tSTRING
    { $$ = Get_DefineForString(FunctionForGroup_Type, $1, &FlagError);
      if(FlagError){
	Get_Valid_SXD($1, FunctionForGroup_Type);
	vyyerror("Unknown type of Function for Group: %s", $1);
      }
      Free($1);
    }
 ;


ListOfRegionOrAll :

    ListOfRegion   { $$ = $1; }
  | tAll           { $$ = NULL; }
 ;


SuppListOfRegion :

    /* none */
    { Type_SuppList = SUPPLIST_NONE;  $$ = NULL; }

  | Comma SuppListTypeForGroup ListOfRegion
    { Type_SuppList = $2; $$ = $3; }

  | Comma tInSupport String__Index
    {
      int i;
      Type_SuppList = SUPPLIST_INSUPPORT;
      if((i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) >= 0) {
	if(((struct Group *)List_Pointer(Problem_S.Group, i))->Type ==
	     ELEMENTLIST) {
	  $$ = List_Create(1, 5, sizeof(int));
	  List_Add($$, &i);
	}
	else  vyyerror("Not a Support of Element Type: %s", $3);
      }
      else  vyyerror("Unknown Region for Support: %s", $3);
      Free($3);
    }
 ;

SuppListTypeForGroup :

    tSTRING
    { $$ = Get_DefineForString(FunctionForGroup_SuppList, $1, &FlagError);
      if(FlagError){
	Get_Valid_SXD($1, FunctionForGroup_SuppList);
	vyyerror("Unknown type of Supplementary Region: %s", $1);
      }
      Free($1);
    }
 ;


ListOfRegion :
    IRegion
    {
      $$ = List_Create(((List_Nbr($1) > 0)? List_Nbr($1) : 1), 5, sizeof(int));
      for(int i = 0; i < List_Nbr($1); i++)
	List_Add($$, (int *)List_Pointer($1, i));
    }

  | '{' RecursiveListOfRegion '}'
    { $$ = $2; }
 ;

RecursiveListOfRegion :

    // none
    {
      $$ = List_Create(5, 5, sizeof(int));
    }

  | RecursiveListOfRegion Comma IRegion
    {
      $$ = $1;
      for(int i = 0; i < List_Nbr($3); i++)
	List_Add($$, (int *)List_Pointer($3, i));
    }

  | RecursiveListOfRegion Comma '-' IRegion
    {
      $$ = $1;
      for(int i = 0; i < List_Nbr($4); i++)
	List_Suppress($$, (int *)List_Pointer($4, i), fcmp_Integer);
    }
 ;


IRegion :

    tINT
    {
      List_Reset(ListOfInt_L); List_Add($$ = ListOfInt_L, &($1));
    }

  | tINT tDOTS tINT
    {
      List_Reset($$ = ListOfInt_L);
      for(int j = $1; ($1 < $3) ? (j <= $3) : (j >= $3);
	  ($1 < $3) ? (j += 1) : (j -= 1))
	List_Add(ListOfInt_L, &j);
    }

  | tINT tDOTS tINT tDOTS tINT
    {
      List_Reset($$ = ListOfInt_L);
      if(!$5 || ($1 < $3 && $5 < 0) || ($1 > $3 && $5 > 0)){
	vyyerror("Wrong increment in '%d : %d : %d'", $1, $3, $5);
	List_Add(ListOfInt_L, &($1));
      }
      else
	for(int j = $1; ($5 > 0) ? (j <= $3) : (j >= $3); j += $5)
	  List_Add($$, &j);
    }

  | String__Index
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.Group, $1, fcmp_Group_Name)) < 0) {
	// Si ce n'est pas un nom de groupe, est-ce un nom de constante ? :
	Constant_S.Name = $1;
	if(!Tree_Query(ConstantTable_L, &Constant_S)) {
	  vyyerror("Unknown Constant: %s", $1);
	  i = 0;
	  List_Reset(ListOfInt_L); List_Add($$ = ListOfInt_L, &i);
	}
	else
	  if(Constant_S.Type == VAR_FLOAT) {
	    i = (int)Constant_S.Value.Float;
	    List_Reset(ListOfInt_L); List_Add($$ = ListOfInt_L, &i);
	  }
	  else if(Constant_S.Type == VAR_LISTOFFLOAT) {
	    List_Reset($$ = ListOfInt_L);
	    for(int i = 0; i < List_Nbr(Constant_S.Value.ListOfFloat); i++) {
	      double d;
	      List_Read(Constant_S.Value.ListOfFloat, i, &d);
	      int j = (int)d;
	      List_Add(ListOfInt_L, &j);
	    }
	  }
	  else {
	    vyyerror("Unknown type of Constant: %s", $1);
	    i = 0;
	    List_Reset(ListOfInt_L); List_Add($$ = ListOfInt_L, &i);
	  }
      }
      else // Si c'est un nom de groupe :
	$$ = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList;
      Free($1);
    }

  // (.) used to access all the FExpr syntax
  | '(' FExpr ')'
    {
      int i = (int)$2;
      List_Reset(ListOfInt_L); List_Add($$ = ListOfInt_L, &i);
    }

  // (.) used to access all the FExpr syntax
  | '(' MultiFExpr ')'
    {
      List_Reset(ListOfInt_L);

      for(int i = 0; i < List_Nbr($2); i++) {
	double d;
	List_Read($2, i, &d);
	int j = (int)d;
	List_Add(ListOfInt_L, &j);
      }
      $$ = ListOfInt_L;
    }

  // deprecated: for backward compatibility only (for Ruth :-)
  | '@' MultiFExpr '@'
    {
      List_Reset(ListOfInt_L);

      for(int i = 0; i < List_Nbr($2); i++) {
	double d;
	List_Read($2, i, &d);
	int j = (int)d;
	List_Add(ListOfInt_L, &j);
      }
      $$ = ListOfInt_L;
    }

 ;

ListOfStringsForCharOptions :

  /* none */

  | tSTRING
    {
      CharOptions_S["Strings"].push_back($1);
      Free($1);
    }

  | tINT
    {
      char tmp[128];
      sprintf(tmp, "%d", $1);
      CharOptions_S["Strings"].push_back(tmp);
    }

  | ListOfStringsForCharOptions ',' tSTRING
    {
      CharOptions_S["Strings"].push_back($3);
      Free($3);
    }

  | ListOfStringsForCharOptions ',' tINT
    {
      char tmp[128];
      sprintf(tmp, "%d", $3);
      CharOptions_S["Strings"].push_back(tmp);
    }
 ;

DefineGroups :

    /* none */

  | DefineGroups Comma String__Index
    {
      int i;
      if ( (i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, $3, false, 0, 0) ;
      }
      else  Free($3) ;
    }

  | DefineGroups Comma String__Index tDEF '{'
    { FloatOptions_S.clear(); CharOptions_S.clear(); }
    '{' ListOfStringsForCharOptions '}' CharParameterOptions '}'
    {
      int i;
      if ( (i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) < 0 ) {
        Group_S.Name = $3; // will be overwritten in Add_Group
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
        if(CharOptions_S.count("Strings")){
          std::vector<std::string> vec(CharOptions_S["Strings"]);
          for(unsigned int i = 0; i < vec.size(); i++)
            Fill_GroupInitialListFromString(Group_S.InitialList, vec[i].c_str());
        }
        Message::ExchangeOnelabParameter(&Group_S, FloatOptions_S, CharOptions_S);
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, $3, false, 0, 0) ;
      }
      else  Free($3) ;
    }

  | DefineGroups Comma String__Index '{' FExpr '}'
    {
      for (int k = 0 ; k < (int)$5 ; k++) {
	char tmpstr[256];
	sprintf(tmpstr, "%s_%d", $3, k+1) ;
	int i;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
	  Add_Group(&Group_S, $3, false, 2, k+1) ;
	}
      }
      Free($3) ;
    }
  ;


Comma : /* none */ | ',' ;


/* ------------------------------------------------------------------------ */
/*  F u n c t i o n                                                         */
/* ------------------------------------------------------------------------ */

Functions :

    /* none */
  | Functions Function
 ;

Function :

    tDefineFunction '[' DefineFunctions ']' tEND

  | String__Index '[' ']' tDEF Expression tEND
    {
      int i;
      if((i = List_ISearchSeq
	    (Problem_S.Expression, $1, fcmp_Expression_Name)) >= 0) {
	if(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Type ==
	    UNDEFINED_EXP) {
	  Free(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name);
	  List_Read (Problem_S.Expression, $5, &Expression_S);
	  List_Write(Problem_S.Expression,  i, &Expression_S);
	  ((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name = $1;
	  List_Pop(Problem_S.Expression);
	}
	else  { vyyerror("Redefinition of Function: %s", $1); }
      }
      else {  /* new identifier */
	Free(((struct Expression *)List_Pointer(Problem_S.Expression, $5))->Name);
	((struct Expression *)List_Pointer(Problem_S.Expression, $5))->Name = $1;
      }
    }

  | String__Index '[' GroupRHS ']' tDEF Expression tEND
    {
      int i;
      if((i = List_ISearchSeq
	    (Problem_S.Expression, $1, fcmp_Expression_Name)) < 0) {
	/* Si le nom n'existe pas : */
	i = List_Nbr(Problem_S.Expression);
	Expression_S.Type = PIECEWISEFUNCTION;
	Expression_S.Case.PieceWiseFunction.ExpressionPerRegion =
	  List_Create(5, 5, sizeof(struct ExpressionPerRegion));
	Expression_S.Case.PieceWiseFunction.NumLastRegion = -1;
	Add_Expression(&Expression_S, $1, 0);
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i);
      }
      else {
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i);
	if(Expression_P->Type == UNDEFINED_EXP) {
	  Expression_P->Type = PIECEWISEFUNCTION;
	  Expression_P->Case.PieceWiseFunction.ExpressionPerRegion =
	    List_Create(5, 5, sizeof(struct ExpressionPerRegion));
	  Expression_P->Case.PieceWiseFunction.NumLastRegion = -1;
	}
	else if(Expression_P->Type != PIECEWISEFUNCTION)
	  vyyerror("Not piece-wise Expression: %s", $1);
	Free($1);
      }

      if($3 >= 0 || $3 == -1) {
	ExpressionPerRegion_S.ExpressionIndex = $6;
	for(int i = 0; i < List_Nbr(Group_S.InitialList); i++) {
	  List_Read(Group_S.InitialList, i, &ExpressionPerRegion_S.RegionIndex);

	  if(List_Search(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
			  &ExpressionPerRegion_S.RegionIndex, fcmp_Integer))
	    vyyerror("Redefinition of piece-wise Function: %s [%d]",
		     Expression_P->Name, ExpressionPerRegion_S.RegionIndex);
	  else
	    List_Add(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
		     &ExpressionPerRegion_S);
	}
	if($3 == -1) { List_Delete(Group_S.InitialList); }
      }
      else  vyyerror("Bad Group right hand side");
    }

  | Loop
 ;


DefineFunctions :

    /* none */
  | DefineFunctions Comma  String__Index
    {
      int i;
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, $3, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, $3, 0) ;
      }
      else  Free($3) ;
    }

  | DefineFunctions Comma  String__Index '{' FExpr '}'
    {
      for (int k = 0 ; k < (int)$5 ; k++) {
	char tmpstr[256];
	sprintf(tmpstr, "%s_%d", $3, k+1) ;
	int i;
	if ( (i = List_ISearchSeq(Problem_S.Expression, tmpstr,
				  fcmp_Expression_Name)) < 0 ) {
	  Expression_S.Type = UNDEFINED_EXP ;
	  Add_Expression(&Expression_S, tmpstr, 2) ;
	}
      }
      Free($3) ;
    }
  ;


/* ------------------------------------------------------------------------
    E x p r e s s i o n s
   ------------------------------------------------------------------------ */

Expression :

  /* expressions constantes: evaluees lors de l'analyse syntaxique */
    tConstant '[' FExpr ']'
    { Expression_S.Type = CONSTANT;  Expression_S.Case.Constant = $3;
      $$ = Add_Expression(&Expression_S, (char*)"Exp_Cst", 1);
    }

  /* reutilisation de fonctions deja definies en amont */
  | tFunction '[' tSTRING ']'
    { int i;
      if((i = List_ISearchSeq(Problem_S.Expression, $3, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", $3);
      Free($3);  $$ = i;
    }

  /* whole quantity */
  | { Current_DofIndexInWholeQuantity = -2;
      List_Reset(ListOfPointer_L); List_Reset(ListOfPointer2_L); }
    WholeQuantityExpression
    { Expression_S.Type = WHOLEQUANTITY;  Expression_S.Case.WholeQuantity = $2;
      $$ = Add_Expression(&Expression_S, (char*)"Exp_Fct", 1); }

  /* undefined expression (same as DefineFunction, but inline) */
  | '*' '*' '*'
    { Expression_S.Type = UNDEFINED_EXP;
      $$ = Add_Expression(&Expression_S, (char*)"Exp_Undefined", 1);
    }
 ;

ListOfExpression :

    /* none */  { List_Reset(ListOfInt_L); }
  /* shift/reduce
  | Expression  { List_Reset(ListOfInt_L);  List_Add(ListOfInt_L, &($1)); }
  */
  | '{' RecursiveListOfExpression '}'
 ;


RecursiveListOfExpression :

    Expression
    { List_Reset(ListOfInt_L);  List_Add(ListOfInt_L, &($1)); }

  | RecursiveListOfExpression ',' Expression
    { List_Add(ListOfInt_L, &($3)); }
 ;


WholeQuantityExpression :

    { Current_WholeQuantity_L = List_Create(5, 5, sizeof(struct WholeQuantity));
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L);
    }
    WholeQuantity
    { $$ = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1));
      List_Pop(ListOfPointer_L);
    }

 ;


WholeQuantity :

    WholeQuantity_Single

  |  WholeQuantity '?'
    {
      WholeQuantity_S.Type = WQ_TEST;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create(5, 5, sizeof(struct WholeQuantity));
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L);
    }
    WholeQuantity tDOTS
    {
      WholeQuantity_P =
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1));
      List_Pop(ListOfPointer2_L);

      WholeQuantity_P->Case.Test.WholeQuantity_True =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1));
      List_Pop(ListOfPointer_L);

      Current_WholeQuantity_L = List_Create(5, 5, sizeof(struct WholeQuantity));
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L);
    }
    WholeQuantity
    {
      WholeQuantity_P =
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1));
      List_Pop(ListOfPointer2_L);

      WholeQuantity_P->Case.Test.WholeQuantity_False =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1));
      List_Pop(ListOfPointer_L);

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L);
    }

  | WholeQuantity '*' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity tCROSSPRODUCT WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | tCrossProduct '[' WholeQuantity ',' WholeQuantity ']'
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity '/' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity '+' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity '-' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity '%' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity '^' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity '<' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity '>' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity tLESSOREQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity tGREATEROREQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity tEQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

   | WholeQuantity tNOTEQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity tAPPROXEQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity tAND WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | WholeQuantity tOR WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | '$' String__Index tDEF WholeQuantity
    {
      WholeQuantity_S.Type = WQ_SAVENAMEDVALUE;
      WholeQuantity_S.Case.NamedValue.Name = $2;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | '-' WholeQuantity %prec UNARYPREC
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S); }

  | '+' WholeQuantity %prec UNARYPREC

  | '!' WholeQuantity
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT;
#if defined(HAVE_LEGACY)
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue;
#endif
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S); }

  | '<' tChangeCurrentPosition '[' WholeQuantity ']' '>'
    { WholeQuantity_S.Type = WQ_CHANGECURRENTPOSITION ;

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    }
    '[' WholeQuantity ']'
    {
      WholeQuantity_P =
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1)) ;
      List_Pop(ListOfPointer2_L) ;

      WholeQuantity_P->Case.ChangeCurrentPosition.WholeQuantity =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
    }
 ;


WholeQuantity_Single :

    '(' WholeQuantity ')'

  | OneFExpr
    { WholeQuantity_S.Type = WQ_CONSTANT;
      WholeQuantity_S.Case.Constant = $1;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | NameForFunction ArgumentsForFunction ParametersForFunction
    {
      /* Expression */

      int l;
      if((l = List_ISearchSeq(Problem_S.Expression, $1, fcmp_Expression_Name)) >= 0) {
	WholeQuantity_S.Type = WQ_EXPRESSION;
	WholeQuantity_S.Case.Expression.Index = l;
	WholeQuantity_S.Case.Expression.NbrArguments = $2;
	if($2 < 0)  vyyerror("Uncompatible argument for Function: %s", $1);
      }

      /* Built in functions */

      else {
	Get_Function2NbrForString(F_Function, $1, &FlagError,
				  &WholeQuantity_S.Case.Function.Fct,
				  &WholeQuantity_S.Case.Function.NbrParameters,
				  &WholeQuantity_S.Case.Function.NbrArguments);
	WholeQuantity_S.Case.Function.Active = NULL;
	if(!FlagError) {

	  /* arguments */
	  if($2 >= 0) {
	    if($2 == WholeQuantity_S.Case.Function.NbrArguments) {
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION;
	    }
	    else if(WholeQuantity_S.Case.Function.NbrArguments == -1  ||
		     (WholeQuantity_S.Case.Function.NbrArguments == -2)) {
	      /* && ($2)%2 == 0)) { */
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION;
	      WholeQuantity_S.Case.Function.NbrArguments = $2;
	    }
	    else {
	      vyyerror("Wrong number of arguments for Function '%s' (%d instead of %d)",
		       $1, $2, WholeQuantity_S.Case.Function.NbrArguments);
	    }
	  }
	  else {
	    WholeQuantity_S.Type = WQ_EXTERNBUILTINFUNCTION;
	  }

	  /* parameters */
          WholeQuantity_S.Case.Function.Para = 0;
          WholeQuantity_S.Case.Function.String = StringForParameter;
	  if(WholeQuantity_S.Case.Function.NbrParameters >= 0 &&
	      WholeQuantity_S.Case.Function.NbrParameters != List_Nbr($3)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)",
		     $1, List_Nbr($3), WholeQuantity_S.Case.Function.NbrParameters);
	  }
	  else if(WholeQuantity_S.Case.Function.NbrParameters == -2 && List_Nbr($3)%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
		     $1, List_Nbr($3));
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr($3);
	    if(WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double));
	      for(int i = 0; i < WholeQuantity_S.Case.Function.NbrParameters; i++)
		List_Read($3, i, &WholeQuantity_S.Case.Function.Para[i]);
	    }
	  }

	}

	else {
	  vyyerror("Unknown Function: %s", $1);
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
      List_Delete($3);
      StringForParameter = 0;
    }

  | tSTRING Quantity_Def
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, $1, &FlagError);
      if(FlagError){
	Get_Valid_SXD($1, QuantityFromFS_Type);
	vyyerror("Unknown type of discrete Quantity: %s", $1);
      }
      Free($1);
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = $2.Int1;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $2.Int2;

      switch(WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity) {
      case QUANTITY_DOF :
	if(Current_DofIndexInWholeQuantity == -1)
	  Current_DofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L);
	else if(Current_DofIndexInWholeQuantity == -2)
	  vyyerror("Dof{} definition out of context");
	else
	  vyyerror("More than one Dof definition in Expression");
	break;
      case QUANTITY_NODOF :
	if(Current_DofIndexInWholeQuantity == -2)
	  vyyerror("NoDof definition out of context");
	else if(Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L);
	else
	  vyyerror("More than one NoDof definition in Expression");
	break;
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | Quantity_Def
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = $1.Int1;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $1.Int2;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | Quantity_Def ArgumentsForFunction
    {
      if($2 != 1 && $2 != 2 && $2 != 3 && $2 != 4)
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", $2);
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = $2;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = $1.Int1;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $1.Int2;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | tDt
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity; }
    '[' WholeQuantityExpression ']'
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = $4;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);

      if(Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context");
    }

  | tAtAnteriorTimeStep
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity; }
    '[' WholeQuantityExpression ',' tINT ']'
    { WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = $4;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = $6;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);

      if(Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context");
    }

  | tMaxOverTime
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity; }
    '[' WholeQuantityExpression ',' FExpr ',' FExpr ']'
    { WholeQuantity_S.Type = WQ_MAXOVERTIME;
      WholeQuantity_S.Case.MaxOverTime.WholeQuantity = $4;
      WholeQuantity_S.Case.FourierSteinmetz.TimeInit = $6;
      WholeQuantity_S.Case.FourierSteinmetz.TimeFinal = $8;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);

      if(Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context");
    }

  | tFourierSteinmetz
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity; }
    '[' WholeQuantityExpression ',' FExpr ',' FExpr ',' FExpr ',' FExpr ',' FExpr  ']'
    { WholeQuantity_S.Type = WQ_FOURIERSTEINMETZ;
      WholeQuantity_S.Case.FourierSteinmetz.WholeQuantity = $4;
      WholeQuantity_S.Case.FourierSteinmetz.TimeInit = $6;
      WholeQuantity_S.Case.FourierSteinmetz.TimeFinal = $8;
      WholeQuantity_S.Case.FourierSteinmetz.NbrFrequency = (int)$10;
      WholeQuantity_S.Case.FourierSteinmetz.Exponent_f = $12;
      WholeQuantity_S.Case.FourierSteinmetz.Exponent_b = $14;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);

      if(Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context");
    }

  | tMHTransform
    '[' NameForFunction
     { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity; }
    '[' WholeQuantityExpression ']' ']' '{' FExpr '}'
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.Expression, $3, fcmp_Expression_Name)) < 0)
	vyyerror("Undefined function '%s' used in MHTransform", $3);
      if(Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform");
      WholeQuantity_S.Type = WQ_MHTRANSFORM;
      WholeQuantity_S.Case.MHTransform.Index = i;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = $6;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)$10;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | tMHJacNL
    '[' NameForFunction ArgumentsForFunction ']' '{' FExpr ',' FExpr '}'
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.Expression, $3,fcmp_Expression_Name)) < 0)
	vyyerror("Undefined function '%s' used in MHJacNL", $3);
      WholeQuantity_S.Type = WQ_MHJACNL;
      WholeQuantity_S.Case.MHJacNL.Index = i;
      WholeQuantity_S.Case.MHJacNL.NbrArguments = $4;
      if($4 != 1)  vyyerror("Uncompatible argument %d for Function: %s", $4, $3);
      WholeQuantity_S.Case.MHJacNL.NbrPoints  = (int)$7;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)$9;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | tSolidAngle '[' Quantity_Def ']'
    { WholeQuantity_S.Type = WQ_SOLIDANGLE;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $3.Int2;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | tOrder '[' Quantity_Def ']'
    { WholeQuantity_S.Type = WQ_ORDER;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $3.Int2;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | tTrace
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity; }
    '[' WholeQuantityExpression ',' GroupRHS ']'
    { WholeQuantity_S.Type = WQ_TRACE;
      WholeQuantity_S.Case.Trace.WholeQuantity = $4;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, (char*)"WQ_Trace_In", $6);

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[x, ConnectedTo y]'");

      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = -1;
      if(Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity){
	for(int i = 0; i < List_Nbr($4); i++){
	  WholeQuantity_P = (struct WholeQuantity*)List_Pointer($4, i);
	  if(WholeQuantity_P->Type == WQ_OPERATORANDQUANTITY)
	    if(WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity == QUANTITY_DOF){
	      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = i;
	      Current_DofIndexInWholeQuantity = -4;
	      TypeOperatorDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator;
	      DefineQuantityIndexDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.Index;
	    }
	}
	if(Current_DofIndexInWholeQuantity != -4)
	  vyyerror("Dof{} definition out of context in Trace operator");
      }

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | '<' tSTRING '>' '[' WholeQuantityExpression ']'
    { WholeQuantity_S.Type = WQ_CAST;
      WholeQuantity_S.Case.Cast.WholeQuantity = $5;
      int i;
      if((i = List_ISearchSeq(Formulation_S.DefineQuantity, $2,
			       fcmp_DefineQuantity_Name)) < 0) {
	if(!strcmp($2, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1;
	else if(!strcmp($2, "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2;
	else
	  vyyerror("Unknown Cast: %s", $2);
      }
      else {
	WholeQuantity_S.Case.Cast.NbrHar = 0;
	WholeQuantity_S.Case.Cast.FunctionSpaceIndexForType =
	  ((struct DefineQuantity *)List_Pointer(Formulation_S.DefineQuantity, i))
	    ->FunctionSpaceIndex;
      }
      Free($2);

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | '$' String__Index
    { WholeQuantity_S.Type = WQ_CURRENTVALUE;
      Get_PointerForString(Current_Value, $2, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value);
      if(FlagError){
        WholeQuantity_S.Type = WQ_NAMEDVALUESAVED;
        WholeQuantity_S.Case.NamedValue.Name = $2;
      }
      else{
        Free($2);
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  /* a changer */
  | '$' tTimeStep
    { WholeQuantity_S.Type = WQ_CURRENTVALUE;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }
  | '$' tDTime
    { WholeQuantity_S.Type = WQ_CURRENTVALUE;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value);
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | '$' tINT
    { WholeQuantity_S.Type = WQ_ARGUMENT;
      WholeQuantity_S.Case.Argument.Index = $2;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | WholeQuantity_Single '#' FExpr
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE;
      WholeQuantity_S.Case.SaveValue.Index = (int)$3 - 1;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | '#' FExpr
    {
      WholeQuantity_S.Type = WQ_VALUESAVED;
      WholeQuantity_S.Case.ValueSaved.Index = (int)$2 - 1;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | WholeQuantity_Single tSHOW FExpr
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE;
      WholeQuantity_S.Case.ShowValue.Index = (int)$3;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S);
    }

  | StrCmp
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = $1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | NbrRegions
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = $1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }
 ;


ArgumentsForFunction :

    '[' '.' ']'                        { $$ = -1; }
  | '[' ']'                            { $$ = 0; }
  | '[' RecursiveListOfQuantity ']'    { $$ = $2; }
 ;

RecursiveListOfQuantity :

    WholeQuantity                               { $$ = 1; }
  | RecursiveListOfQuantity ',' WholeQuantity   { $$ = $1 + 1; }
 ;

ParametersForFunction :

    /* none */
    { $$ = NULL; }

  | '{' RecursiveListOfFExpr '}'
    { $$ = $2; }

  | '{' tRegion '[' GroupRHS ']' '}'
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      $$ = List_Create(2, 1, sizeof(double));
      double d = (double)Num_Group(&Group_S, (char*)"PA_Region", $4);
      List_Add($$, &d);
    }

  | '{' CharExprNoVar '}'
    { $$ = NULL; StringForParameter = $2; }

 ;

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n   M e t h o d                                           */
/* ------------------------------------------------------------------------ */

JacobianMethods :

    /* none */
    { if(!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod =
	  List_Create(5, 5, sizeof (struct JacobianMethod));
    }
  | JacobianMethods  '{' JacobianMethod '}'
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S); }
 ;


JacobianMethod :

    /* none */
    { JacobianMethod_S.Name = NULL; JacobianMethod_S.JacobianCase = NULL; }

  | JacobianMethod  JacobianMethodTerm
 ;


JacobianMethodTerm :

    tName String__Index tEND
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 $2, fcmp_JacobianMethod_Name);
      JacobianMethod_S.Name = $2; }

  | tCase '{' JacobianCases '}'
    { JacobianMethod_S.JacobianCase = $3; }
 ;


JacobianCases :

    /* none */
    { $$ = List_Create(5, 5, sizeof (struct JacobianCase)); }

  | JacobianCases  '{' JacobianCase '}'
    { List_Add($$ = $1, &JacobianCase_S); }
 ;


JacobianCase :

    /* none */
    { JacobianCase_S.RegionIndex = -1;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL; }

  | JacobianCase JacobianCaseTerm
 ;


JacobianCaseTerm :

    tRegion GroupRHS tEND
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, (char*)"JA_Region", $2); }

  | tRegion tAll tEND
    { JacobianCase_S.RegionIndex = -1; }

  | tJacobian String__Index ParametersForFunction tEND
    { JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, $2, &FlagError,
				&JacobianCase_S.NbrParameters);
      if(!FlagError) {
	if(JacobianCase_S.NbrParameters == -2 && (List_Nbr($3))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   $2, List_Nbr($3));
	if(JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr($3);
	if(List_Nbr($3) == JacobianCase_S.NbrParameters) {
	  if(JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double));
	    for(int i = 0; i < JacobianCase_S.NbrParameters; i++)
	      List_Read($3, i, &JacobianCase_S.Para[i]);
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)",
		   $2, List_Nbr($3), JacobianCase_S.NbrParameters);
      }
      else{
	Get_Valid_SXD1N($2, Jacobian_Type);
	vyyerror("Unknown type of Jacobian: %s", $2);
      }
      Free($2);
      List_Delete($3);
    }
 ;


/* ------------------------------------------------------------------------ */
/*  I n t e g r a t i o n   M e t h o d                                     */
/* ------------------------------------------------------------------------ */

IntegrationMethods :

    /* none */
    { if(!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod =
	  List_Create(5, 5, sizeof(struct IntegrationMethod));
    }

  | IntegrationMethods  '{' IntegrationMethod '}'
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S); }
 ;


IntegrationMethod :

    /* none */
    {
      IntegrationMethod_S.Name = NULL;
      IntegrationMethod_S.IntegrationCase = NULL;
      IntegrationMethod_S.CriterionIndex = -1;
    }

  | IntegrationMethod  IntegrationMethodTerm
 ;


IntegrationMethodTerm :

    tName tSTRING tEND
    {
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 $2, fcmp_IntegrationMethod_Name);
      IntegrationMethod_S.Name = $2;
    }

  | tCriterion Expression tEND
    { IntegrationMethod_S.CriterionIndex = $2;  }

  | tCase '{' IntegrationCases '}'
    { IntegrationMethod_S.IntegrationCase = $3; }
 ;


IntegrationCases :

    /* none */
    { $$ = List_Create(5, 5, sizeof (struct IntegrationCase)); }

  | IntegrationCases '{' IntegrationCase '}'
    { List_Add($$ = $1, &IntegrationCase_S); }
 ;


IntegrationCase :

    /* none */
    {
      IntegrationCase_S.Type = GAUSS;
      IntegrationCase_S.SubType = STANDARD;
    }

  | IntegrationCase IntegrationCaseTerm
 ;


IntegrationCaseTerm :

    tType tSTRING tEND
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Integration_Type);
	vyyerror("Unknown type of Integration method: %s", $2);
      }
      Free($2);
    }

  | tSubType tSTRING tEND
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Integration_Type);
	vyyerror("Unknown subtype of Integration method: %s", $2);
      }
      Free($2);
    }

  | tCase '{' QuadratureCases '}'
    { IntegrationCase_S.Case = $3; }
 ;


QuadratureCases :

    /* none */
    { $$ = List_Create(5, 5, sizeof (struct Quadrature)); }

  | QuadratureCases  '{' QuadratureCase '}'
    { List_Add($$ = $1, &QuadratureCase_S); }
 ;


QuadratureCase :

    /* none */
    { QuadratureCase_S.ElementType = TRIANGLE;
      QuadratureCase_S.NumberOfPoints = 4;
      QuadratureCase_S.MaxNumberOfPoints = 4;
      QuadratureCase_S.NumberOfDivisions = 1;
      QuadratureCase_S.MaxNumberOfDivisions = 1;
      QuadratureCase_S.StoppingCriterion = 1.E-4;
      QuadratureCase_S.Function = 0; //FIXME(void (*)())Gauss_Triangle;
    }

  | QuadratureCase QuadratureCaseTerm
 ;


QuadratureCaseTerm :

    tGeoElement tSTRING tEND
    { QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Element_Type);
	vyyerror("Unknown type of Element: %s", $2);
      }

      switch(IntegrationCase_S.SubType) {

      case STANDARD :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function);
	  break;
	case GAUSSLEGENDRE :
	  Get_FunctionForDefine
	    (FunctionForGaussLegendre, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function);
	  break;
	default :
	  vyyerror("Incompatible type of Integration method");
	  break;
	}
	break;

      case SINGULAR :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForSingularGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function);
	  break;
	default :
	  vyyerror("Incompatible type of Integration method");
	  break;
	}
	break;
      default :
	vyyerror("Incompatible type of Integration method");
	break;
      }

      if(FlagError)  vyyerror("Bad type of Integration method for Element: %s", $2);
      Free($2);
    }

  | tNumberOfPoints FExpr tEND
    { QuadratureCase_S.NumberOfPoints = (int)$2; }

  | tMaxNumberOfPoints FExpr tEND
    { QuadratureCase_S.MaxNumberOfPoints = (int)$2; }

  | tNumberOfDivisions FExpr tEND
    { QuadratureCase_S.NumberOfDivisions = (int)$2; }

  | tMaxNumberOfDivisions FExpr tEND
    { QuadratureCase_S.MaxNumberOfDivisions = (int)$2; }

  | tStoppingCriterion FExpr tEND
    { QuadratureCase_S.StoppingCriterion = $2; }
 ;


/* ------------------------------------------------------------------------ */
/*  C o n s t r a i n t                                                     */
/* ------------------------------------------------------------------------ */

Constraints :

    /* none */
    { if(!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint));
    }

  | Constraints BracedConstraint
 ;

BracedConstraint :

    '{' Constraint '}'
    {
      List_Add(Problem_S.Constraint, &Constraint_S);
    }

  | Loop
 ;

Constraint :

    /* none */
    { Constraint_S.Name = NULL;
      Constraint_S.Type = ASSIGN;
      Constraint_S.ConstraintPerRegion = NULL;
      Constraint_S.MultiConstraintPerRegion = NULL;
    }

  | Constraint  ConstraintTerm
 ;


ConstraintTerm :

    tName String__Index tEND
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, $2,
				 fcmp_Constraint_Name);
      Constraint_S.Name = $2;
    }

  | tType tSTRING tEND
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Constraint_Type);
	vyyerror("Unknown type of Constraint: %s", $2);
      }
      Free($2);
    }

  | tCase '{' ConstraintCases '}'
    { Constraint_S.ConstraintPerRegion = $3; }

  | tCase tSTRING '{' ConstraintCases '}'
    {
      if(!Constraint_S.MultiConstraintPerRegion)
	Constraint_S.MultiConstraintPerRegion =
	  List_Create(5, 5, sizeof(struct MultiConstraintPerRegion));

      MultiConstraintPerRegion_S.Name = $2;
      MultiConstraintPerRegion_S.ConstraintPerRegion = $4;
      MultiConstraintPerRegion_S.Active = NULL;

      List_Add(Constraint_S.MultiConstraintPerRegion,
	       &MultiConstraintPerRegion_S);
    }

   | ConstraintTerm Loop
    {
    }
;


ConstraintCases :

    /* none */
    {
      $$ = List_Create(6, 6, sizeof (struct ConstraintPerRegion));
    }

  | ConstraintCases  '{' ConstraintCase '}'
    {
      List_Add($$ = $1, &ConstraintPerRegion_S);
    }

  | ConstraintCases Loop
    {
      $$ = $1;
    }
 ;


ConstraintCase :

    /* none */
    {
      ConstraintPerRegion_S.Type = Constraint_S.Type;
      ConstraintPerRegion_S.RegionIndex = -1;
      ConstraintPerRegion_S.SubRegionIndex = -1;
      ConstraintPerRegion_S.TimeFunctionIndex = -1;
    }

  | ConstraintCase ConstraintCaseTerm
 ;


ConstraintCaseTerm :

    tType tSTRING tEND
    { ConstraintPerRegion_S.Type =
	Get_DefineForString(Constraint_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Constraint_Type);
	vyyerror("Unknown type of Constraint: %s", $2);
      }
      Free($2);
    }

  | tRegion GroupRHS tEND
    {
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, (char*)"CO_Region", $2);
    }

  | tSubRegion GroupRHS tEND
    {
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, (char*)"CO_SubRegion", $2);
    }

  | tTimeFunction Expression tEND
    {
      ConstraintPerRegion_S.TimeFunctionIndex = $2;
      if(Is_ExpressionPieceWiseDefined($2))
        vyyerror("TimeFunction should never be piece-wise defined");
    }

  | tValue Expression tEND
    {
      if(ConstraintPerRegion_S.Type == ASSIGN ||
         ConstraintPerRegion_S.Type == INIT){
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = $2;
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex2 = -1;
      }
      else  vyyerror("Value incompatible with Type");
    }

  | tValue '[' Expression ',' Expression ']' tEND
    {
      if(ConstraintPerRegion_S.Type == ASSIGN ||
         ConstraintPerRegion_S.Type == INIT){
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = $5;
        ConstraintPerRegion_S.Case.Fixed.ExpressionIndex2 = $3;
      }
      else  vyyerror("Value incompatible with Type");
    }

  | tNameOfResolution String__Index tEND
    {
      if(ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = $2;
      else  vyyerror("NameOfResolution incompatible with Type");
    }

  | tBranch '{' OneFExpr Comma OneFExpr '}' tEND
    {
      if(ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)$3;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)$5;
      }
      else  vyyerror("Branch incompatible with Type");
    }

  | tBranch '{' '(' FExpr ')' Comma '(' FExpr ')' '}' tEND
    {
      if(ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)$4;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)$8;
      }
      else  vyyerror("Branch incompatible with Type");
    }

  | tRegionRef GroupRHS tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.RegionRefIndex =
	  Num_Group(&Group_S, (char*)"CO_RegionRef", $2);
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex = -1;

	ConstraintPerRegion_S.Case.Link.FilterIndex = -1;
	ConstraintPerRegion_S.Case.Link.FunctionIndex = -1;
	ConstraintPerRegion_S.Case.Link.CoefIndex = -1;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = -1;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = -1;
	ConstraintPerRegion_S.Case.Link.ToleranceFactor = 1.e-8;
      }
      else  vyyerror("RegionRef incompatible with Type");
    }

  | tSubRegionRef GroupRHS tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, (char*)"CO_RegionRef", $2);
      else  vyyerror("SubRegionRef incompatible with Type");
    }

  | tFunction Expression tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = $2;
      else  vyyerror("Function incompatible with Type");
    }

  | tCoefficient Expression tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = $2;
      else  vyyerror("Coefficient incompatible with Type");
    }

  | tFilter Expression tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = $2;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1;
      }
      else  vyyerror("Filter incompatible with Type");
    }

  | tFunction '[' Expression ',' Expression ']' tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = $3;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = $5;
      }
      else  vyyerror("Function incompatible with Type");
    }

  | tToleranceFactor FExpr tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.ToleranceFactor  = $2;
      }
      else  vyyerror("ToleranceFactor incompatible with Type");
    }

  | tCoefficient '[' Expression ',' Expression ']' tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = $3;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = $5;
      }
      else  vyyerror("Coefficient incompatible with Type");
    }

  | tFilter '[' Expression ',' Expression ']' tEND
    {
      if(ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = $3;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = $5;
      }
      else  vyyerror("Filter incompatible with Type");
    }

 ;


/* ------------------------------------------------------------------------ */
/*  F u n c t i o n   S p a c e                                             */
/* ------------------------------------------------------------------------ */


FunctionSpaces :

    /* none */
    { if(!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace =
	  List_Create(10, 5, sizeof (struct FunctionSpace));
    }

  | FunctionSpaces  BracedFunctionSpace
 ;

BracedFunctionSpace :

    '{' FunctionSpace '}'
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S);
    }

  | Loop
 ;


FunctionSpace :

    /* none */
    { FunctionSpace_S.Name = NULL; FunctionSpace_S.Type = FORM0;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL;
    }

  | FunctionSpace  FunctionSpaceTerm

  | FunctionSpace  Loop
 ;


FunctionSpaceTerm :

    tName String__Index tEND
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 $2, fcmp_FunctionSpace_Name);
      FunctionSpace_S.Name = $2;
    }

  | tType tSTRING tEND
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Field_Type);
	vyyerror("Unknown type of FunctionSpace: %s", $2);
      }
      Free($2);
    }

  | tBasisFunction  '{' BasisFunctions '}'
    { FunctionSpace_S.BasisFunction  = $3; }

  | tSubSpace       '{' SubSpaces '}'
    { FunctionSpace_S.SubSpace       = $3; }

  | tGlobalQuantity '{' GlobalQuantities '}'
    { FunctionSpace_S.GlobalQuantity = $3; }

  | tConstraint     '{' ConstraintInFSs '}'
    { FunctionSpace_S.Constraint     = $3; }
 ;


BasisFunctions :

    /* none */
    {
      $$ = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction));
    }

  | BasisFunctions  '{' BasisFunction '}'
    {
      int i;
      if((i = List_ISearchSeq($1, BasisFunction_S.Name,
				fcmp_BasisFunction_Name)) < 0) {
	/*
	  BasisFunction_S.Num = Num_BasisFunction++;
	*/
	BasisFunction_S.Num = Num_BasisFunction;
	Num_BasisFunction += (BasisFunction_S.SubFunction)?
	  List_Nbr(BasisFunction_S.SubFunction) : 1;
      }
      else  /* BasisFunction definie par morceaux => meme Num */
	BasisFunction_S.Num = ((struct BasisFunction *)List_Pointer($1, i))->Num;

      List_Add($$ = $1, &BasisFunction_S);
    }

  | BasisFunctions  Loop
    {
      $$ = $1;
    }
 ;


BasisFunction :

    /* none */
    {
      BasisFunction_S.Name = NULL;
      BasisFunction_S.NameOfCoef = NULL;
      BasisFunction_S.Num = 0;
      BasisFunction_S.GlobalBasisFunction = NULL;
      BasisFunction_S.Function = NULL;
      BasisFunction_S.dFunction = NULL;
      BasisFunction_S.dInvFunction = NULL;
      BasisFunction_S.dPlusFunction = NULL;
      BasisFunction_S.SubFunction = NULL;
      BasisFunction_S.SubdFunction = NULL;
      BasisFunction_S.SupportIndex = -1;
      BasisFunction_S.EntityIndex  = -1;
    }

  | BasisFunction  BasisFunctionTerm
 ;


BasisFunctionTerm :

    tName String__Index tEND
    { BasisFunction_S.Name = $2; }

  | tNameOfCoef String__Index tEND
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 $2, fcmp_BasisFunction_NameOfCoef);
      BasisFunction_S.NameOfCoef = $2; BasisFunction_S.Dimension = 1; }

  | tFunction tSTRING OptionalParametersForBasisFunction tEND
    {
      Get_3Function3NbrForString
	(BF_Function, $2, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction,
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType, &BasisFunction_S.Orient);
      if(FlagError){
	Get_Valid_SX3F3N($2, BF_Function);
	vyyerror("Unknown Function for BasisFunction: %s", $2);
      }
      Free($2);
    }

  | tdFunction '{' tSTRING Comma tSTRING '}' tEND
    {
      void  (*FunctionDummy)();
      int i, j;
      double d;
      Get_3Function3NbrForString
	(BF_Function, $3, &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i, &j);
      if(FlagError){
	Get_Valid_SX3F3N($3, BF_Function);
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", $3);
      }
      Free($3);
      Get_3Function3NbrForString
	(BF_Function, $5, &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i, &j);
      if(FlagError){
	Get_Valid_SX3F3N($5, BF_Function);
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", $5);
      }
      Free($5);
    }

  | tdFunction '{' tSTRING Comma tSTRING Comma tSTRING '}' tEND
    {
      void  (*FunctionDummy)();
      int i, j;
      double d;
      Get_3Function3NbrForString
	(BF_Function, $3, &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i, &j);
      if(FlagError){
	Get_Valid_SX3F3N($3, BF_Function);
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", $3);
      }
      Free($3);
      Get_3Function3NbrForString
	(BF_Function, $5, &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i, &j);
      if(FlagError){
	Get_Valid_SX3F3N($5, BF_Function);
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", $5);
      }
      Free($5);
      Get_3Function3NbrForString
	(BF_Function, $7, &FlagError,
	 &BasisFunction_S.dPlusFunction, &FunctionDummy, &FunctionDummy, &d, &i, &j);
      if(FlagError){
	Get_Valid_SX3F3N($7, BF_Function);
	vyyerror("Unknown dFunction (3) for BasisFunction: %s", $7);
      }
      Free($7);
    }

  | tSubFunction ListOfExpression tEND
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L);
    }

  | tSubdFunction ListOfExpression tEND
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L);
    }

  | tSupport GroupRHS tEND
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, (char*)"BF_Support", $2);
    }

  | tEntity GroupRHS tEND
    {
      BasisFunction_S.EntityIndex = Num_Group(&Group_S, (char*)"BF_Entity", $2);
      if(Group_S.InitialList)
	List_Sort(Group_S.InitialList, fcmp_Integer);  /* Needed for Global Region */

      if(BasisFunction_S.GlobalBasisFunction) { /* Function to be defined before Entity */
	if(Group_S.FunctionType == GLOBAL) {
	  if(List_Nbr(BasisFunction_S.GlobalBasisFunction) ==
	      List_Nbr(Group_S.InitialList)) {
	    for(int k = 0; k < List_Nbr(Group_S.InitialList); k++)
	      if(*((int*)List_Pointer(Group_S.InitialList, k)) !=
		  *((int*)List_Pointer(BasisFunction_S.GlobalBasisFunction, k))) {
		vyyerror("Bad correspondance between Group and Entity (elements differ)");
		break;
	      }
	  }
	  else if(List_Nbr(Group_S.InitialList) != 0 ||
		   GlobalBasisFunction_S.EntityIndex != -1)
	    vyyerror("Bad correspondance between Group and Entity (#BF %d, #Global %d)",
		     List_Nbr(BasisFunction_S.GlobalBasisFunction),
		     List_Nbr(Group_S.InitialList));
	}
	else  vyyerror("Bad correspondance between Group and Entity (Entity must be Global)");
      }
    }
 ;


OptionalParametersForBasisFunction :

    /* none */

  | '{' tQuantity tSTRING tEND
        tFormulation String__Index '{' FExpr '}' tEND
        tGroup GroupRHS tEND
        tResolution String__Index '{' FExpr '}' tEND '}'
    {
      int dim = $8;
      if(dim != $17)
        vyyerror("Number of formulations different from number of resolutions");
      if(List_Nbr(Group_S.InitialList) != dim)
        vyyerror("Group sould have %d single regions", dim);

      BasisFunction_S.GlobalBasisFunction =
	List_Create(dim, 1, sizeof(struct GlobalBasisFunction));

      for(int k = 0; k < dim; k++) {
        int i;
        List_Read(Group_S.InitialList, k, &i);
        GlobalBasisFunction_S.EntityIndex = i;

	char tmpstr[256];
	sprintf(tmpstr, "%s_%d", $6, k+1);
	if((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) >= 0) {
	  GlobalBasisFunction_S.FormulationIndex = i;
	  List_Read(Problem_S.Formulation, i, &Formulation_S);
	  if((i = List_ISearchSeq(Formulation_S.DefineQuantity, $3,
				   fcmp_DefineQuantity_Name)) >= 0)
	    GlobalBasisFunction_S.DefineQuantityIndex = i;
	  else {
	    vyyerror("Unknown Quantity '%s' in Formulation '%s'", $3,
		     Formulation_S.Name);
	    break;
	  }
	}
	else
	  vyyerror("Unknown Formulation: %s", tmpstr);

	sprintf(tmpstr, "%s_%d", $15, k+1);
	if((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
                                fcmp_Resolution_Name)) >= 0)
	  GlobalBasisFunction_S.ResolutionIndex = i;
	else
	  vyyerror("Unknown Resolution: %s", tmpstr);

	GlobalBasisFunction_S.QuantityStorage = NULL;
	List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S);
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_Integer);

      Free($3); Free($6); Free($15);
    }
 ;


SubSpaces :

    /* none */
    {
      $$ = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace));
    }

  | SubSpaces  '{' SubSpace '}'
    {
      List_Add($$ = $1, &SubSpace_S);
    }
 ;


SubSpace :

    /* none */
    {
      SubSpace_S.Name = NULL; SubSpace_S.BasisFunction  = NULL;
    }

  | SubSpace  SubSpaceTerm
 ;


SubSpaceTerm :

    tName tSTRING tEND
    {
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 $2, fcmp_SubSpace_Name);
      SubSpace_S.Name = $2;
    }

  | tNameOfBasisFunction ListOfBasisFunction tEND
    { SubSpace_S.BasisFunction = $2; }

  | tNameOfCoef ListOfBasisFunctionCoef tEND
    { SubSpace_S.BasisFunction = $2; }
 ;


ListOfBasisFunction :

    tSTRING
    {
      $$ = List_Create(1, 1, sizeof(int));
      int i;
      if((i = List_ISearchSeq(Current_BasisFunction_L,
			       $1, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", $1);
      else {
	List_Add($$, &i);
	int j = i+1;
	while((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					  $1, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add($$, &i); j = i+1;  /* for piecewise defined basis functions */
	}
      }
      Free($1);
    }

  | '{' RecursiveListOfBasisFunction '}'
    { $$ = $2; }
 ;


RecursiveListOfBasisFunction :

    /* none */    { $$ = List_Create(5, 5, sizeof(int)); }

  | RecursiveListOfBasisFunction Comma tSTRING
    {
      int i;
      if((i = List_ISearchSeq(Current_BasisFunction_L,
			       $3, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", $3);
      else {
	List_Add($1, &i);
	int j = i+1;
	while((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					  $3, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add($1, &i); j = i+1;  /* for piecewise defined basis functions */
	}
      }
      $$ = $1; Free($3);
    }
 ;


ListOfBasisFunctionCoef :

    tSTRING
    {
      $$ = List_Create(1, 1, sizeof(int));
      int i;
      if((i = List_ISearchSeq(Current_BasisFunction_L,
			       $1, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", $1);
      else {
	List_Add($$, &i);
      }
      Free($1);
    }

  | '{' RecursiveListOfBasisFunctionCoef '}'
    { $$ = $2; }
 ;


RecursiveListOfBasisFunctionCoef :

    /* none */
    {
      $$ = List_Create(5, 5, sizeof(int));
    }

  | RecursiveListOfBasisFunctionCoef Comma tSTRING
    {
      int i;
      if((i = List_ISearchSeq(Current_BasisFunction_L,
			       $3, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", $3);
      else {
	List_Add($1, &i);
      }
      $$ = $1; Free($3);
    }
 ;


GlobalQuantities :

    /* none */
    {
      $$ = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity));
    }

  | GlobalQuantities  '{' GlobalQuantity '}'
    {
      GlobalQuantity_S.Num = Num_BasisFunction++;
      List_Add($$ = $1, &GlobalQuantity_S);
    }

  | GlobalQuantities  Loop
    {
      $$ = $1;
    }
 ;


GlobalQuantity :

    /* none */
    {
      GlobalQuantity_S.Name = NULL; GlobalQuantity_S.Num  = 0;
      GlobalQuantity_S.Type = ALIASOF; GlobalQuantity_S.ReferenceIndex = -1;
    }

  | GlobalQuantity  GlobalQuantityTerm
 ;


GlobalQuantityTerm :

    tName String__Index tEND
    {
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 $2, fcmp_GlobalQuantity_Name);
      GlobalQuantity_S.Name = $2;
    }

  | tType tSTRING tEND
    {
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, GlobalQuantity_Type);
	vyyerror("Unknown type of GlobalQuantity: %s", $2);
      }
      Free($2);
    }

  | tNameOfCoef String__Index tEND
    {
      int i;
      if((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, $2,
			       fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown NameOfCoef: %s", $2);
      else
	GlobalQuantity_S.ReferenceIndex = i;
      Free($2);
    }
 ;


ConstraintInFSs :

    /* none */
    {
      $$ = List_Create(6, 6, sizeof (struct ConstraintInFS));
    }

  | ConstraintInFSs '{' ConstraintInFS '}'
    {
      Group_S.FunctionType = Type_Function;
      Group_S.SuppListType = Type_SuppList;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST;  break;
      default :          Group_S.Type = REGIONLIST ;  break;
      }

      if(Constraint_Index >= 0) {
	Constraint_P = (struct Constraint *)
	  List_Pointer(Problem_S.Constraint, Constraint_Index);

	for(int i = 0; i < List_Nbr(Constraint_P->ConstraintPerRegion); i++) {
	  ConstraintPerRegion_P = (struct ConstraintPerRegion *)
	    List_Pointer(Constraint_P->ConstraintPerRegion, i);

	  if(ConstraintPerRegion_P->RegionIndex >= 0) {
	    Group_S.InitialList =
	      ((struct Group *)
	       List_Pointer(Problem_S.Group, ConstraintPerRegion_P->RegionIndex))
	      ->InitialList;
	    Group_S.InitialSuppList =
	      (ConstraintPerRegion_P->SubRegionIndex >= 0)?
	      ((struct Group *)
	       List_Pointer(Problem_S.Group,
			    ConstraintPerRegion_P->SubRegionIndex))
	      ->InitialList : NULL;
	    ConstraintInFS_S.EntityIndex = Add_Group(&Group_S, (char*)"CO_Entity",
                                                     false, 1, 0);
	    ConstraintInFS_S.ConstraintPerRegion = ConstraintPerRegion_P;

	    List_Add($$ = $1, &ConstraintInFS_S);
	  }
	}
      }
    }

  | ConstraintInFSs  Loop
    {
      $$ = $1;
    }
 ;


ConstraintInFS :

    /* none */
    {
      ConstraintInFS_S.QuantityType = LOCALQUANTITY;
      ConstraintInFS_S.ReferenceIndex = -1; ConstraintInFS_S.EntityIndex = -1;
      ConstraintInFS_S.ConstraintPerRegion = NULL;
      ConstraintInFS_S.Active.ResolutionIndex = -1;
      ConstraintInFS_S.Active.Active = NULL;
      Constraint_Index = -1;
    }

  | ConstraintInFS  ConstraintInFSTerm
 ;


ConstraintInFSTerm :

    tNameOfCoef String__Index tEND
    {
      int i;
      if((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, $2,
			       fcmp_BasisFunction_NameOfCoef)) < 0) {
	if((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, $2,
				 fcmp_GlobalQuantity_Name)) < 0)
	  vyyerror("Unknown NameOfCoef: %s", $2);
	else {
	  ConstraintInFS_S.QuantityType   = GLOBALQUANTITY;
	  ConstraintInFS_S.ReferenceIndex = i;
	}
      }
      else {
	ConstraintInFS_S.QuantityType   = LOCALQUANTITY;
	ConstraintInFS_S.ReferenceIndex = i;
      }
      Free($2);
    }

  | tEntityType FunctionForGroup tEND
    { Type_Function = $2; }

  | tEntitySubType SuppListTypeForGroup tEND
    { Type_SuppList = $2; }

  | tNameOfConstraint String__Index tEND
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, $2, fcmp_Constraint_Name);
      if(Constraint_Index < 0)
        Message::Warning("Constraint '%s' is not provided", $2);
      Free($2);
    }
 ;


/* ------------------------------------------------------------------------ */
/*  F o r m u l a t i o n                                                   */
/* ------------------------------------------------------------------------ */

Formulations :

    /* none */
    { if(!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation));
    }

  | Formulations  BracedFormulation
 ;

BracedFormulation :

    '{' Formulation '}'
    {
      List_Add(Problem_S.Formulation, &Formulation_S);
    }

  | Loop
 ;


Formulation :

    /* none */
    { Formulation_S.Name = NULL; Formulation_S.Type = FEMEQUATION;
      Formulation_S.DefineQuantity = NULL; Formulation_S.Equation = NULL;
    }

  | Formulation  FormulationTerm
 ;


FormulationTerm :

    tName String__Index tEND
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 $2, fcmp_Formulation_Name);
      Formulation_S.Name = $2;
    }

  | tType tSTRING tEND
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Formulation_Type);
	vyyerror("Unknown type of Formulation: %s", $2);
      }
      Free($2);
    }

  | tQuantity  '{' DefineQuantities '}'

  | tSTRING '{' Equations '}'
    {
      Formulation_S.Equation = $3;
      Free($1);
    }
 ;


DefineQuantities :
    /* none */
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity));
    }

  | DefineQuantities  '{' DefineQuantity '}'
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S);
    }

  | DefineQuantities Loop
 ;


DefineQuantity :

    /* none */
    { DefineQuantity_S.Name = NULL;
      DefineQuantity_S.Type = LOCALQUANTITY;
      DefineQuantity_S.IndexInFunctionSpace = NULL;
      DefineQuantity_S.FunctionSpaceIndex = -1;
      DefineQuantity_S.DofDataIndex = -1;
      DefineQuantity_S.DofData = NULL;
      DefineQuantity_S.FrequencySpectrum = NULL;

      DefineQuantity_S.IntegralQuantity.InIndex = -1;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL;
    }

  | DefineQuantity DefineQuantityTerm
 ;


DefineQuantityTerm :

    tName String__Index tEND
    { DefineQuantity_S.Name = $2; }

  | tType tGlobalQuantity tEND
    { DefineQuantity_S.Type = GLOBALQUANTITY; }

    /* Doit rester tant qu'on ne supprime pas l'association 'Integral <-> tGalerkin' */
  | tType tGalerkin tEND
    { DefineQuantity_S.Type = INTEGRALQUANTITY; }

  | tType tSTRING tEND
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, DefineQuantity_Type);
	vyyerror("Unknown type of Quantity: %s", $2);
      }
      Free($2);
    }

  | tFrequencySpectrum ListOfFExpr tEND
    { DefineQuantity_S.FrequencySpectrum = $2;
    }

  | tNameOfSpace String__Index
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.FunctionSpace, $2,
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", $2);
      else
	DefineQuantity_S.FunctionSpaceIndex = i;
    }
    IndexInFunctionSpace tEND
    {
      if(DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if(DefineQuantity_S.Type == GLOBALQUANTITY &&
	    !DefineQuantity_S.IndexInFunctionSpace) {
	  if(DefineQuantity_S.Name) {
	    List_Read(Problem_S.FunctionSpace,
		      DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S);
	    int i;
	    if((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity,
				     DefineQuantity_S.Name,
				     fcmp_GlobalQuantity_Name)) < 0) {
	      vyyerror("Unknown GlobalQuantity: %s", DefineQuantity_S.Name);
	    }
	    else {
	      DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	      List_Add(DefineQuantity_S.IndexInFunctionSpace, &i);
	    }
	  }
	  else  vyyerror("No Name pre-defined for GlobalQuantity");
	}
      }

    }

  | tIndexOfSystem FExpr tEND
    {
      DefineQuantity_S.DofDataIndex = (int)$2;
    }

  | '['
    {
      Current_DofIndexInWholeQuantity = -1;
      Current_NoDofIndexInWholeQuantity = -1;
      List_Reset(ListOfPointer_L);
    }
    WholeQuantityExpression ']' tEND
    {
      DefineQuantity_S.IntegralQuantity.WholeQuantity = $3;
      DefineQuantity_S.IntegralQuantity.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(DefineQuantity_S.IntegralQuantity.WholeQuantity, 0);

      /* Ce qui suit ne suffit pas : il faudrait aussi gerer des
	Quantity_def sans Dof */

      if(Current_DofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index;
	DefineQuantity_S.FunctionSpaceIndex =
	  ((struct DefineQuantity*)
	   List_Pointer(Formulation_S.DefineQuantity,
			DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof))->
	  FunctionSpaceIndex;
      }
      else { /* No Dof{} */
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof = NOOP;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof = -1;
      }

      if(Current_NoDofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index;
      }
      else { /* No NoDof{} */
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof = -1;
      }

      /* Check if the WholeQuantity is a Canonical Form */

      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_NONE;

      if(List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 1){

	/* GF_FUNCTION */
	if((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION) {
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if(!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para;
	  }

	  DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF;
	}
      }

      else if(List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 3){

	/* GF_FUNCTION  OPER  DOF */
	if     ((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 1) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if(!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para;
	  }

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_DOF;
	}

	/* DOF OPER GF_FUNCTION */
	else if((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 0) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  if(!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para;
	  }

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF;/* Scalar Prod Transitive */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_DOF_PVEC_GF;
	}

	/* GF_FUNCTION  OPER  EXPR */
	else if((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+1)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if(!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para;
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+1)->Case.Expression.Index;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_EXP;
	  /*
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters;
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	    (WholeQuantity_P+0)->Case.Function.Para;
	  */
	}

	/* EXPR OPER GF_FUNCTION */
	else if((WholeQuantity_P+0)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  if(!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para;
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP;/* Transitive product */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF;
	}
      }

      else if(List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 5){

	/* EXPR  OPER  GF_FUNCTION  OPER  DOF */
	if     ((WholeQuantity_P+0)->Type == WQ_EXPRESSION          &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if(!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para;
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PSCA_DOF;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PVEC_DOF;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PSCA_DOF;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PVEC_DOF;
	  }
	}

	/* FCT OPER  GF_FUNCTION  OPER  DOF */
	else if((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if(!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para;
	  }

	  DefineQuantity_S.IntegralQuantity.AnyFunction.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.Para =
	    (WholeQuantity_P+0)->Case.Function.Para;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PSCA_DOF;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PVEC_DOF;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PSCA_DOF;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PVEC_DOF;
	  }
	}
      }

      Pro_DefineQuantityIndex
	(DefineQuantity_S.IntegralQuantity.WholeQuantity,
	 -1,
	 &DefineQuantity_S.IntegralQuantity.NbrQuantityIndex,
	 &DefineQuantity_S.IntegralQuantity.QuantityIndexTable,
	 &DefineQuantity_S.IntegralQuantity.QuantityTraceGroupIndexTable);
      if(DefineQuantity_S.IntegralQuantity.NbrQuantityIndex > 1)
	vyyerror("More than one LocalQuantity in IntegralQuantity");

    }

  | tIn GroupRHS tEND
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, (char*)"IQ_In", $2);
    }

  | tIntegration tSTRING tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", $2);
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i;
      Free($2);
    }

  | tJacobian String__Index tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.JacobianMethod, $2,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", $2);
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i;
      Free($2);
    }

  | tSymmetry tINT tEND
    { DefineQuantity_S.IntegralQuantity.Symmetry = $2; }

 ;

IndexInFunctionSpace :

    /* none */
  | '[' String__Index ']'
    {
      if(DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if(DefineQuantity_S.Type == LOCALQUANTITY) {
	  int i;
	  if((i = List_ISearchSeq
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, $2,
		fcmp_SubSpace_Name)) < 0)
	    vyyerror("Unknown SubSpace: %s", $2);
	  else {
	    DefineQuantity_S.IndexInFunctionSpace =
	      ((struct SubSpace *)
	       List_Pointer
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, i))
		->BasisFunction;
	  }
	}
	else if(DefineQuantity_S.Type == GLOBALQUANTITY) {
	  List_Read(Problem_S.FunctionSpace,
		    DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S);
	  int i;
	  if((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity,
				   $2, fcmp_GlobalQuantity_Name)) < 0) {
	    vyyerror("Unknown GlobalQuantity: %s", $2);
	  }
	  else {
	    DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	    List_Add(DefineQuantity_S.IndexInFunctionSpace, &i);
	  }
	}
      }
      Free($2);
    }
 ;


Equations :

    /* none */
    {
      $$ = List_Create(6, 6, sizeof(struct EquationTerm));
    }

  | Equations  EquationTerm
    {
      List_Add($$ = $1, &EquationTerm_S);
    }

  | Equations  Loop
    {
      $$ = $1;
    }
 ;


EquationTerm :

    tGalerkin  '{' LocalTerm '}'
    { EquationTerm_S.Type = GALERKIN; }

  | tdeRham  '{' LocalTerm '}'
    { EquationTerm_S.Type = DERHAM; }

  | tGlobalTerm  '{' GlobalTerm '}'
    { EquationTerm_S.Type = GLOBALTERM; }

  | tGlobalEquation  '{' GlobalEquation '}'
    { EquationTerm_S.Type = GLOBALEQUATION; }
 ;


GlobalEquation :

    /* none */
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL;
    }
  | GlobalEquation GlobalEquationTerm
 ;

GlobalEquationTerm :

    tType tSTRING tEND
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Constraint_Type);
	vyyerror("Unknown type of GlobalEquation: %s", $2);
      }
      Free($2);
    }

  | tNameOfConstraint tSTRING tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.Constraint, $2,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1;
      Free($2);
    }

  | '{' GlobalEquationTermTerm '}'
    {
      if(!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create(3, 3, sizeof(struct GlobalEquationTerm));
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S);
    }
 ;



GlobalEquationTermTerm :

    /* none */
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1;
      GlobalEquationTerm_S.InIndex = -1;
    }
  | GlobalEquationTermTerm GlobalEquationTermTermTerm
 ;

GlobalEquationTermTermTerm :
    tSTRING Quantity_Def tEND
    {
      if(!strcmp($1, "Node"))
        GlobalEquationTerm_S.DefineQuantityIndexNode = $2.Int2;
      else if(!strcmp($1, "Loop"))
        GlobalEquationTerm_S.DefineQuantityIndexLoop = $2.Int2;
      else if(!strcmp($1, "Equation"))
        GlobalEquationTerm_S.DefineQuantityIndexEqu  = $2.Int2;
      else
        vyyerror("Unknown global equation term: %s", $1);
      Free($1);
    }
  | tIn GroupRHS tEND
  { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, (char*)"FO_In", $2); }
 ;



LocalTerm :

    /* none */
    { EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = NODT_;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = NOOP;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = -1;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1;
      EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = NULL;
      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity = -1;
      EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 0;
      EquationTerm_S.Case.LocalTerm.InIndex = -1;
      EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = -1;
      EquationTerm_S.Case.LocalTerm.MatrixIndex = -1;
      EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = -1;
      EquationTerm_S.Case.LocalTerm.ExpressionIndexForMetricTensor = -1;
      EquationTerm_S.Case.LocalTerm.Active = NULL;
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 0;
    }

  | LocalTerm LocalTermTerm
 ;


LocalTermTerm  :

    TermOperator '['
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator;
      Current_DofIndexInWholeQuantity = -1;
      Current_NoDofIndexInWholeQuantity = -1;
      List_Reset(ListOfPointer_L);
    }

    WholeQuantityExpression
    { EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = $4;

      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity, 0);

      if(Current_DofIndexInWholeQuantity == -4){
	EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 1;
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof =
	  TypeOperatorDofInTrace;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof =
	  DefineQuantityIndexDofInTrace;
      }
      else if(Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1;
      }

      if(Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index;
      }
      else if((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_TIME_DOF;
	if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_PVEC_DOF;

	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Fct =
	  (WholeQuantity_P+0)->Case.Function.Fct;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.NbrParameters =
	  (WholeQuantity_P+0)->Case.Function.NbrParameters;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Para =
	  (WholeQuantity_P+0)->Case.Function.Para;
      }
      else if((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_DOF;
      }
      else {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_NONE;
      }

    }

    ','  WholeQuantityExpression ']'  tEND
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer($7, 0);

      if(List_Nbr($7) == 1){
	if((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing Quantity in Equation");
      }
      else if(List_Nbr($7) == 3 &&
	       ((WholeQuantity_P+0)->Type == WQ_EXPRESSION &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR)) {
        // FIXME: should also add the case (BUILTINFUNCTION OPERATORANDQUANTITY BINARYOPERATOR)
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ =
	  CWQ_EXP_TIME_DOF;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical_Equ =
	  (WholeQuantity_P+0)->Case.Expression.Index;
	EquationTerm_S.Case.LocalTerm.Term.OperatorTypeForCanonical_Equ =
	  (WholeQuantity_P+2)->Case.Operator.TypeOperator;
      }
      else if(List_Nbr($7) == 2 &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ =
	  CWQ_FCT_DOF;
	EquationTerm_S.Case.LocalTerm.Term.BuiltInFunction_Equ =
	  (WholeQuantity_P+1)->Case.Function.Fct;
      }
      else{
	vyyerror("Unrecognized quantity structure in Equation");
      }

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityTraceGroupIndexTable);

      EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 0;
      for(int i = 0; i < EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex; i++) {
	if((EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu) &&
	    (EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof)) {
	  EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 1;
	  break;
	}
      }
    }

  | tIn GroupRHS tEND
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, (char*)"FO_In", $2);
    }

  | tJacobian String__Index tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.JacobianMethod, $2,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",$2);
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i;
      Free($2);
    }

  | tIntegration tSTRING tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", $2);
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i;
      Free($2);
    }

  | tFull_Matrix tEND
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1;
    }

  | tSTRING '[' tINT ']' tEND
    { if($3 == 1 || $3 == 2 || $3 == 3)
	EquationTerm_S.Case.LocalTerm.MatrixIndex = $3;
      else
	vyyerror("Unknown Matrix123: %d", $3);
    }

  | tMetricTensor Expression tEND
    {
      EquationTerm_S.Case.LocalTerm.ExpressionIndexForMetricTensor = $2;
    }
 ;


GlobalTerm :

    /* none */
    { EquationTerm_S.Case.GlobalTerm.TypeTimeDerivative = NODT_;
      EquationTerm_S.Case.GlobalTerm.DefineQuantityIndex = -1;

      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = NODT_;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = NOOP;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = -1;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1;
      EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = NULL;
      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity = -1;
      EquationTerm_S.Case.GlobalTerm.InIndex = -1;
    }

  | GlobalTerm  GlobalTermTerm
 ;


GlobalTermTerm :
    tIn GroupRHS tEND
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, (char*)"FO_In", $2);
    }

  |  TermOperator '['
    {
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator;
      Current_DofIndexInWholeQuantity = -1;
      Current_NoDofIndexInWholeQuantity = -1;
      List_Reset(ListOfPointer_L);
    }

    WholeQuantityExpression
    { EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = $4;

      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity, 0);

      if(Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1;
      }

      if(Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF;
	EquationTerm_S.Case.GlobalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index;
      }
      else if((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_DOF;
      }
      else {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_NONE;
      }

    }

    ','  Quantity_Def  ']' tEND
    { EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = $7.Int1;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = $7.Int2;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable);
    }

 ;



TermOperator :

    /* none */     { Type_TermOperator = NODT_          ; }
  | tDt            { Type_TermOperator = DT_            ; }
  | tDtDof         { Type_TermOperator = DTDOF_         ; }
  | tDtDt          { Type_TermOperator = DTDT_          ; }
  | tDtDtDof       { Type_TermOperator = DTDTDOF_       ; }
  | tDtDtDtDof     { Type_TermOperator = DTDTDTDOF_     ; }
  | tDtDtDtDtDof   { Type_TermOperator = DTDTDTDTDOF_   ; }
  | tDtDtDtDtDtDof { Type_TermOperator = DTDTDTDTDTDOF_ ; }
  | tJacNL         { Type_TermOperator = JACNL_         ; }
  | tDtDofJacNL    { Type_TermOperator = DTDOFJACNL_    ; }
  | tNeverDt       { Type_TermOperator = NEVERDT_       ; }
  | tDtNL          { Type_TermOperator = DTNL_          ; }
 ;


Quantity_Def :

    '{' tSTRING String__Index '}'
    { $$.Int1 = Get_DefineForString(Operator_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, Operator_Type);
	vyyerror("Unknown Operator for discrete Quantity: %s", $2);
      }
      Free($2);
      int i;
      if((i = List_ISearchSeq(Formulation_S.DefineQuantity, $3,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", $3);
      $$.Int2 = i;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = $$.Int1;
      Quantity_Index = $$.Int2;

      Free($3);
    }

  | '{' String__Index '}'
    { $$.Int1 = NOOP;
      int i;
      if((i = List_ISearchSeq(Formulation_S.DefineQuantity, $2,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", $2);
      $$.Int2 = i;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = $$.Int1;
      Quantity_Index = $$.Int2;

      Free($2);
    }
 ;


/* ------------------------------------------------------------------------ */
/*  R e s o l u t i o n                                                     */
/* ------------------------------------------------------------------------ */

Resolutions :

    /* none */
    { if(!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution));
    }

  | Resolutions  BracedResolution
 ;

BracedResolution :

    '{' Resolution '}'
    {
      List_Add(Problem_S.Resolution, &Resolution_S);
    }

  | Loop
 ;


Resolution :

    /* none */
    {
      Resolution_S.Name = NULL;
      Resolution_S.Hidden = false;
      Resolution_S.DefineSystem = NULL;
      Resolution_S.Operation = NULL;
    }

  | Resolution  ResolutionTerm
 ;


ResolutionTerm :

    tName String__Index tEND
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 $2, fcmp_Resolution_Name);
      Resolution_S.Name = $2;
    }

  | tHidden FExpr tEND { Resolution_S.Hidden = $2 ? true : false; }

  | tDefineSystem  '{' DefineSystems '}'
    { Resolution_S.DefineSystem = $3; }

  | tOperation
    { Operation_L = List_Create(5, 5, sizeof(struct Operation)); }
    '{' Operation '}'
    { Resolution_S.Operation = $4;  List_Delete(Operation_L); }

  | Loop
 ;


DefineSystems :
    /* none */
    {
      $$ = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem));
    }

  | DefineSystems  '{' DefineSystem '}'
    {
      int i ;
      if ((i = List_ISearchSeq(Current_System_L, DefineSystem_S.Name, fcmp_DefineSystem_Name)) < 0)
	List_Add($$ = Current_System_L = $1, &DefineSystem_S) ;
      else
	List_Write(Current_System_L, i, &DefineSystem_S) ;
    }

  | DefineSystems Loop
     {
       $$ = $1;
     }
 ;


DefineSystem :

    /* none */
    { DefineSystem_S.Name = NULL;
      DefineSystem_S.Type = VAL_REAL;
      DefineSystem_S.FormulationIndex = NULL;
      DefineSystem_S.MeshName = NULL;
      DefineSystem_S.AdaptName = NULL;
      DefineSystem_S.FrequencyValue = NULL;
      DefineSystem_S.SolverDataFileName = NULL;
      DefineSystem_S.OriginSystemIndex = NULL;
      DefineSystem_S.DestinationSystemName = NULL;
      DefineSystem_S.DestinationSystemIndex = -1;
    }

  | DefineSystem DefineSystemTerm
 ;


DefineSystemTerm :

    tName String__Index tEND
    {
      int i;
      if ((i = List_ISearchSeq(Current_System_L, $2, fcmp_DefineSystem_Name)) < 0)
	DefineSystem_S.Name = $2 ;
      else
	List_Read(Current_System_L, i, &DefineSystem_S) ;
    }

  | tType tSTRING tEND
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, DefineSystem_Type);
	vyyerror("Unknown type of System: %s", $2);
      }
      Free($2);
    }

  | tNameOfFormulation ListOfFormulation tEND
    { DefineSystem_S.FormulationIndex = $2; }

  | tNameOfMesh CharExpr tEND
    {
      DefineSystem_S.MeshName = strSave(Fix_RelativePath($2).c_str());
      Free($2);
    }

  | tOriginSystem ListOfSystem tEND
    {
      if (!DefineSystem_S.OriginSystemIndex) {
	DefineSystem_S.OriginSystemIndex = $2 ;
      }
      else {
	for (int i = 0 ; i < List_Nbr($2) ; i++)
	  List_Add(DefineSystem_S.OriginSystemIndex, (int *)List_Pointer($2, i) ) ;
      }
    }

  | tDestinationSystem String__Index tEND
    {
      DefineSystem_S.DestinationSystemName = $2;
    }

  | tFrequency ListOfFExpr tEND
    { DefineSystem_S.FrequencyValue = $2;
      DefineSystem_S.Type = VAL_COMPLEX;
    }

  | tSolver CharExpr tEND
    {
      DefineSystem_S.SolverDataFileName = $2;
    }

  | Loop
 ;


ListOfFormulation :

    String__Index
    {
      $$ = List_Create(1, 1, sizeof(int));
      int i;
      if((i = List_ISearchSeq(Problem_S.Formulation, $1, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", $1);
      else  List_Add($$, &i);
      Free($1);
    }

  | '{' RecursiveListOfFormulation '}'
    { $$ = $2; }
 ;


RecursiveListOfFormulation :

    /* none */
    { $$ = List_Create(2, 2, sizeof(int)); }

  | RecursiveListOfFormulation Comma String__Index
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.Formulation, $3, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", $3);
      else
	List_Add($1, &i);
      $$ = $1; Free($3);
    }
 ;

ListOfSystem :

    String__Index
    {
      $$ = List_Create(1, 1, sizeof(int));
      int i;
      if((i = List_ISearchSeq(Current_System_L, $1, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $1);
      else
	List_Add($$, &i);
      Free($1);
    }

  | '{' RecursiveListOfSystem '}'
    { $$ = $2;  }
 ;

RecursiveListOfSystem :

    /* none */
    { $$ = List_Create(2, 2, sizeof(int)); }

  | RecursiveListOfSystem Comma String__Index
    {
      int i;
      if((i = List_ISearchSeq(Current_System_L, $3, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      else
	List_Add($1, &i);
      $$ = $1; Free($3);
    }
 ;


Operation :
    /* none */
    {
      $$ = List_Create(6, 6, sizeof (struct Operation));
      Operation_S.Type = OPERATION_NONE;
      Operation_S.DefineSystemIndex = -1;
      Operation_S.Flag = -1;
      List_Add(Operation_L, &Operation_S);
    }

  | Operation OperationTerm
    {
      if(((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type != OPERATION_NONE){
	List_Add($$ = $1, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1));
      }
    }
 ;

CommaFExprOrNothing :
    { $$ = -1; }
  | ',' FExpr
    { $$ = (int)$2; }
 ;

GmshOperation :
    tGmshRead { $$ = OPERATION_GMSHREAD; }
  | tGmshOpen { $$ = OPERATION_GMSHOPEN; }
  | tGmshMerge { $$ = OPERATION_GMSHMERGE; }
  | tGmshWrite { $$ = OPERATION_GMSHWRITE; }

GenerateGroupOperation :
    tGenerateGroup { $$ = OPERATION_GENERATE; }
  | tGenerateJacGroup { $$ = OPERATION_GENERATEJAC; }
  | tGenerateRHSGroup { $$ = OPERATION_GENERATERHS; }
  | tGenerateGroupCumulative { $$ = OPERATION_GENERATE_CUMULATIVE; }
  | tGenerateJacGroupCumulative { $$ = OPERATION_GENERATEJAC_CUMULATIVE; }
  | tGenerateRHSGroupCumulative { $$ = OPERATION_GENERATERHS_CUMULATIVE; }

OperationTerm :

  /* OLD syntax */

    tSTRING String__Index tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = Get_DefineForString(Operation_Type, $1, &FlagError);
      if(FlagError){
	Get_Valid_SXD($1, Operation_Type);
	vyyerror("Unknown type of Operation: %s", $1);
      }
      Free($1);

      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $2,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $2);
      Free($2);
      Operation_P->DefineSystemIndex = i;

      if(Operation_P->Type == OPERATION_GENERATE ||
         Operation_P->Type == OPERATION_GENERATERHS ||
         Operation_P->Type == OPERATION_GENERATEJAC ||
         Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1;
    }

  | tSetTime Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETTIME;
      Operation_P->Case.SetTime.ExpressionIndex = $2;
    }

  | tSetTimeStep Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETTIMESTEP;
      Operation_P->Case.SetTime.ExpressionIndex = $2;
    }

  | tTimeLoopTheta '{' TimeLoopTheta '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TIMELOOPTHETA;
    }

  | tTimeLoopNewmark '{' TimeLoopNewmark '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK;
    }

  | tIterativeLoop '{' IterativeLoop '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ITERATIVELOOP;
    }

  | tIterativeTimeReduction '{' IterativeTimeReduction '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION;
    }

  /* NEW syntax (function style): Only missing is IterativeTimeReduction */

  | tSTRING '[' String__Index CommaFExprOrNothing ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = Get_DefineForString(Operation_Type, $1, &FlagError);
      if(FlagError){
	Get_Valid_SXD($1, Operation_Type);
	vyyerror("Unknown type of Operation: %s", $1);
      }
      Free($1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      if(Operation_P->Type == OPERATION_GENERATE ||
         Operation_P->Type == OPERATION_GENERATERHS ||
         Operation_P->Type == OPERATION_GENERATEJAC ||
         Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1;
      Operation_P->Flag = $4;
    }

  | tSetTime '[' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETTIME;
      Operation_P->Case.SetTime.ExpressionIndex = $3;
    }

  | tSetTimeStep '[' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETTIMESTEP;
      Operation_P->Case.SetTime.ExpressionIndex = $3;
    }

  | tSleep '[' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SLEEP;
      Operation_P->Case.Sleep.ExpressionIndex = $3;
    }

  | tSetCommSelf tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETCOMMSELF;
    }

  | tSetCommWorld tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETCOMMWORLD;
    }

  | tBarrier tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_BARRIER;
    }

  | tBroadcastFields '[' ListOfFExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_BROADCASTFIELDS;
      Operation_P->Case.BroadcastFields.FieldsToSkip = $3;
    }

  | tBreak tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_BREAK;
    }

  | tIf '[' Expression ']' '{' Operation '}'
    {
      List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TEST;
      Operation_P->Case.Test.ExpressionIndex = $3;
      Operation_P->Case.Test.Operation_True = $6;
      Operation_P->Case.Test.Operation_False = NULL;
    }

  | tIf '[' Expression ']' '{' Operation '}'  tElse '{' Operation '}'
    {
      List_Pop(Operation_L);
      List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TEST;
      Operation_P->Case.Test.ExpressionIndex = $3;
      Operation_P->Case.Test.Operation_True = $6;
      Operation_P->Case.Test.Operation_False = $10;
    }

  | tWhile '[' Expression ']' '{' Operation '}'
    {
      List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_WHILE;
      Operation_P->Case.While.ExpressionIndex = $3;
      Operation_P->Case.While.Operation = $6;
    }

  | tSetFrequency '[' String__Index ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETFREQUENCY;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SetFrequency.ExpressionIndex = $5;
    }

  | tGenerateOnly '[' String__Index ',' ListOfFExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_GENERATEONLY;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr($5),1,sizeof(int));

      for(int i = 0; i < List_Nbr($5); i++){
	double d;
	List_Read($5,i,&d);
	int j = (int)d;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete($5);
    }

  | tGenerateOnlyJac '[' String__Index ',' ListOfFExpr ']' tEND
     { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_GENERATEONLYJAC;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr($5),1,sizeof(int));

      for(int i = 0; i < List_Nbr($5); i++){
	double d;
	List_Read($5,i,&d);
	int j = (int)d;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete($5);
    }

  | tUpdate '[' String__Index  ']' tEND
    { Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_UPDATE;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.Update.ExpressionIndex = -1;
    }

  | tUpdate '[' String__Index ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_UPDATE;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.Update.ExpressionIndex = $5;
    }

  | tUpdateConstraint '[' String__Index ',' GroupRHS ',' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_UPDATECONSTRAINT;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.UpdateConstraint.GroupIndex =
	Num_Group(&Group_S, (char*)"OP_UpdateCst", $5);
      Operation_P->Case.UpdateConstraint.Type =
	Get_DefineForString(Constraint_Type, $7, &FlagError);
      if(FlagError){
	Get_Valid_SXD($7, Constraint_Type);
	vyyerror("Unknown type of Constraint: %s", $7);
      }
      Free($7);
    }

  | tUpdateConstraint '[' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      int i;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex = -1;
      Operation_P->Case.UpdateConstraint.Type = ASSIGN;
    }

  | tGetResidual '[' String__Index ',' '$' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_GETRESIDUAL;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.GetResidual.VariableName = $6;
      Operation_P->Case.GetResidual.NormType = L2NORM;
      /*
      NormType = Get_DefineForString(ErrorNorm_Type, $xx, &FlagError);
      if(FlagError){
        Get_Valid_SXD($xx, ErrorNorm_Type);
        vyyerror("Unknown error norm type for residual calculation");
      }
      */
    }

  | tFourierTransform '[' String__Index ',' String__Index ',' ListOfFExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_FOURIERTRANSFORM;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $5,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $5);
      Free($5);
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i;
      Operation_P->Case.FourierTransform.Frequency = $7;
    }

  | tFourierTransformJ '[' String__Index ',' String__Index ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $5,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $5);
      Free($5);
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i;
      Operation_P->Case.FourierTransform2.Period = $7;
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    }

  | tLanczos '[' String__Index ',' FExpr ',' ListOfFExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_LANCZOS;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.Lanczos.Size = (int)$5;
      Operation_P->Case.Lanczos.Save =
	List_Create(List_Nbr($7), 1, sizeof(int));
      for(int l = 0; l < List_Nbr($7); l++) {
	double d;
	List_Read($7, l, &d);
	int j = (int)d;
	List_Add(Operation_P->Case.Lanczos.Save, &j);
      }
      List_Delete($7);
      Operation_P->Case.Lanczos.Shift = $9;
    }

  | tEigenSolve '[' String__Index ',' FExpr ',' FExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_EIGENSOLVE;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)$5;
      Operation_P->Case.EigenSolve.Shift_r = $7;
      Operation_P->Case.EigenSolve.Shift_i = $9;
      Operation_P->Case.EigenSolve.FilterExpressionIndex = -1;
    }

  | tEigenSolve '[' String__Index ',' FExpr ',' FExpr ',' FExpr
                ',' Expression  ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_EIGENSOLVE;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)$5;
      Operation_P->Case.EigenSolve.Shift_r = $7;
      Operation_P->Case.EigenSolve.Shift_i = $9;
      Operation_P->Case.EigenSolve.FilterExpressionIndex = $11;
    }

  | tEigenSolveJac '[' String__Index ',' FExpr ',' FExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_EIGENSOLVEJAC;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)$5;
      Operation_P->Case.EigenSolve.Shift_r = $7;
      Operation_P->Case.EigenSolve.Shift_i = $9;
      Operation_P->Case.EigenSolve.FilterExpressionIndex = -1;
    }

  | tEvaluate '[' RecursiveListOfExpression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.Expressions = List_Copy(ListOfInt_L);
    }

  | tSelectCorrection '[' String__Index ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SELECTCORRECTION;
      int i;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SelectCorrection.Iteration = (int)$5 ;
    }

  | tAddCorrection '[' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ADDCORRECTION;
      int i;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.AddCorrection.Alpha = 1. ;
    }

  | tAddCorrection '[' String__Index ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ADDCORRECTION;
      int i;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.AddCorrection.Alpha = $5 ;
    }

  | tMultiplySolution '[' String__Index ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_MULTIPLYSOLUTION;
      int i;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.MultiplySolution.Alpha = $5 ;
    }

  | tAddOppositeFullSolution '[' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ADDOPPOSITEFULLSOLUTION;
      int i;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
    }

  | tPerturbation '[' String__Index ',' String__Index ',' String__Index ','
    FExpr ',' ListOfFExpr ',' FExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_PERTURBATION;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $5,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $5);
      Free($5);
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $7,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $7);
      Free($7);
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i;
      Operation_P->Case.Perturbation.Size = (int)$9;
      Operation_P->Case.Perturbation.Save =
	List_Create(List_Nbr($11), 1, sizeof(int));
      for(int l = 0; l < List_Nbr($11); l++) {
	double d;
	List_Read($11, l, &d);
	int j = (int)d;
	List_Add(Operation_P->Case.Perturbation.Save, &j);
      }
      List_Delete($11);
      Operation_P->Case.Perturbation.Shift = $13;
      Operation_P->Case.Perturbation.PertFreq = (int)$15;
    }

  | tTimeLoopTheta '[' FExpr ',' FExpr ',' Expression ',' Expression ']'
                   '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TIMELOOPTHETA;
      Operation_P->Case.TimeLoopTheta.Time0 = $3;
      Operation_P->Case.TimeLoopTheta.TimeMax = $5;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = $7;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = $9;
      Operation_P->Case.TimeLoopTheta.Operation = $12;
    }

  | tTimeLoopNewmark '[' FExpr ',' FExpr ',' Expression ',' FExpr ',' FExpr ']'
                     '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK;
      Operation_P->Case.TimeLoopNewmark.Time0 = $3;
      Operation_P->Case.TimeLoopNewmark.TimeMax = $5;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = $7;
      Operation_P->Case.TimeLoopNewmark.Beta = $9;
      Operation_P->Case.TimeLoopNewmark.Gamma = $11;
      Operation_P->Case.TimeLoopNewmark.Operation = $14;
    }

  | tTimeLoopRungeKutta '[' String__Index ',' FExpr ',' FExpr ',' Expression ','
                            ListOfFExpr ',' ListOfFExpr ',' ListOfFExpr ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TIMELOOPRUNGEKUTTA;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.TimeLoopRungeKutta.Time0 = $5;
      Operation_P->Case.TimeLoopRungeKutta.TimeMax = $7;
      Operation_P->Case.TimeLoopRungeKutta.DTimeIndex = $9;
      Operation_P->Case.TimeLoopRungeKutta.ButcherA = $11;
      Operation_P->Case.TimeLoopRungeKutta.ButcherB = $13;
      Operation_P->Case.TimeLoopRungeKutta.ButcherC = $15;
    }

  | tTimeLoopAdaptive '[' FExpr ',' FExpr ',' FExpr ',' FExpr ',' FExpr ',' CharExpr ','
                      ListOfFExpr ',' LTEdefinitions TLAoptions ']'
                      '{' Operation '}' '{' Operation '}'
    {
      List_Pop(Operation_L);
      List_Pop(Operation_L);
      Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_TIMELOOPADAPTIVE;
      Operation_P->Case.TimeLoopAdaptive.Time0 = $3;
      Operation_P->Case.TimeLoopAdaptive.TimeMax = $5;
      Operation_P->Case.TimeLoopAdaptive.DTimeInit = $7;
      Operation_P->Case.TimeLoopAdaptive.DTimeMin = $9;
      Operation_P->Case.TimeLoopAdaptive.DTimeMax = $11;
      Operation_P->Case.TimeLoopAdaptive.Scheme = $13;
      Operation_P->Case.TimeLoopAdaptive.Breakpoints_L = $15;
      Operation_P->Case.TimeLoopAdaptive.Operation = $21;
      Operation_P->Case.TimeLoopAdaptive.OperationEnd = $24;
    }

  | tIterativeLoopN '[' FExpr ',' Expression ',' IterativeLoopDefinitions ']'
                    '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ITERATIVELOOPN;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)$3;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = $5;
      Operation_P->Case.IterativeLoop.Operation = $10;
    }

  | tIterativeLoop  '[' FExpr ',' FExpr ',' Expression ']'
                     '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ITERATIVELOOP;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)$3;
      Operation_P->Case.IterativeLoop.Criterion = $5;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = $7;
      Operation_P->Case.IterativeLoop.Flag = 0;
      Operation_P->Case.IterativeLoop.Operation = $10;
    }

  | tIterativeLoop  '[' FExpr ',' FExpr ',' Expression ',' FExpr ']'
                     '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ITERATIVELOOP;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)$3;
      Operation_P->Case.IterativeLoop.Criterion = $5;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = $7;
      Operation_P->Case.IterativeLoop.Flag = (int)$9;
      Operation_P->Case.IterativeLoop.Operation = $12;
    }

  | tIterativeLinearSolver '[' CharExpr ',' CharExpr ',' FExpr ',' FExpr ',' FExpr','
                               ListOfFExpr',' ListOfFExpr',' ListOfFExpr ']'
                           '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ITERATIVELINEARSOLVER;
      Operation_P->Case.IterativeLinearSolver.OpMatMult = $3;
      Operation_P->Case.IterativeLinearSolver.Type = $5;
      Operation_P->Case.IterativeLinearSolver.Tolerance = $7;
      Operation_P->Case.IterativeLinearSolver.MaxIter = (int)$9;
      Operation_P->Case.IterativeLinearSolver.Restart = (int)$11;
      Operation_P->Case.IterativeLinearSolver.MyFieldTag = $13;
      Operation_P->Case.IterativeLinearSolver.NeighborFieldTag = $15;
      Operation_P->Case.IterativeLinearSolver.DeflationIndices = $17;
      Operation_P->Case.IterativeLinearSolver.Operations_Ax = $20;
      Operation_P->Case.IterativeLinearSolver.Operations_Mx = NULL;
    }

  | tIterativeLinearSolver '[' CharExpr ',' CharExpr ',' FExpr ',' FExpr ',' FExpr','
                               ListOfFExpr',' ListOfFExpr',' ListOfFExpr ']'
                           '{' Operation '}'
                           '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ITERATIVELINEARSOLVER;
      Operation_P->Case.IterativeLinearSolver.OpMatMult = $3;
      Operation_P->Case.IterativeLinearSolver.Type = $5;
      Operation_P->Case.IterativeLinearSolver.Tolerance = $7;
      Operation_P->Case.IterativeLinearSolver.MaxIter = (int)$9;
      Operation_P->Case.IterativeLinearSolver.Restart = (int)$11;
      Operation_P->Case.IterativeLinearSolver.MyFieldTag = $13;
      Operation_P->Case.IterativeLinearSolver.NeighborFieldTag = $15;
      Operation_P->Case.IterativeLinearSolver.DeflationIndices = $17;
      Operation_P->Case.IterativeLinearSolver.Operations_Ax = $20;
      Operation_P->Case.IterativeLinearSolver.Operations_Mx = $23;
    }

  | tPrint
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_PRINT;
      Operation_P->Case.Print.Expressions = NULL;
      Operation_P->DefineSystemIndex = -1;
    }
   '[' PrintOperation PrintOperationOptions ']' tEND

  | tWrite
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_WRITE;
      Operation_P->Case.Print.Expressions = NULL;
      Operation_P->DefineSystemIndex = -1;
    }
   '[' PrintOperation PrintOperationOptions ']' tEND

  | tChangeOfCoordinates '[' GroupRHS ',' Expression ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, (char*)"OP_ChgCoord", $3);
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = $5;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1;
    }

  | tChangeOfCoordinates '[' GroupRHS ',' Expression ',' FExpr ',' Expression ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, (char*)"OP_ChgCoord", $3);
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = $5;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)$7;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = $9;
    }

  | tPostOperation '[' String__Index ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_POSTOPERATION;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &$3);
    }

  | tSystemCommand '[' CharExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SYSTEMCOMMAND;
      Operation_P->Case.SystemCommand.String = $3;
    }

  | tError '[' CharExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_ERROR;
      Operation_P->Case.Error.String = $3;
    }

  | GmshOperation '[' CharExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = $1;
      Operation_P->Case.GmshRead.FileName = strSave(Fix_RelativePath($3).c_str());
      Operation_P->Case.GmshRead.ViewTag = -1;
      Free($3);
    }

  | GmshOperation '[' CharExpr ',' FExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = $1;
      Operation_P->Case.GmshRead.FileName = strSave(Fix_RelativePath($3).c_str());
      Operation_P->Case.GmshRead.ViewTag = (int)$5;
      Free($3);
    }

  | tGmshClearAll tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_GMSHCLEARALL;
    }

  | tDeleteFile '[' CharExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_DELETEFILE;
      Operation_P->Case.DeleteFile.FileName = strSave(Fix_RelativePath($3).c_str());
      Free($3);
    }

  | tRenameFile '[' CharExpr ',' CharExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_RENAMEFILE;
      Operation_P->Case.RenameFile.OldFileName = strSave(Fix_RelativePath($3).c_str());
      Operation_P->Case.RenameFile.NewFileName = strSave(Fix_RelativePath($5).c_str());
      Free($3);
      Free($5);
    }

  | tCreateDir '[' CharExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_CREATEDIR;
      Operation_P->Case.CreateDir.DirName = strSave(Fix_RelativePath($3).c_str());
      Free($3);
    }

  | tSolveJac_AdaptRelax '[' String__Index ',' ListOfFExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)$7;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = $5;
    }

  | tSaveSolutionWithEntityNum '[' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SAVESOLUTION_WITH_ENTITY_NUM;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SaveSolutionWithEntityNum.GroupIndex = -1;
      Operation_P->Case.SaveSolutionWithEntityNum.SaveFixed = -1;
    }

  | tSaveSolutionWithEntityNum '[' String__Index ',' GroupRHS CommaFExprOrNothing ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SAVESOLUTION_WITH_ENTITY_NUM;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SaveSolutionWithEntityNum.GroupIndex =
        Num_Group(&Group_S, (char*)"OP_SaveSolutionWithEntityNum", $5);
      Operation_P->Case.SaveSolutionWithEntityNum.SaveFixed = ($6 >= 0) ? $6 : 0;
    }

  | tSaveSolutionExtendedMH '[' String__Index ',' FExpr ',' CharExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)$5;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = $7;
    }

  | tSaveSolutionMHtoTime '[' String__Index ',' ListOfFExpr ',' CharExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SaveSolutionMHtoTime.Time = $5;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = $7;
    }

  | tInitMovingBand2D  '[' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) < 0)
   	vyyerror("Unknown Group: %s", $3);
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i;
      Free($3);
    }

  | tMeshMovingBand2D  '[' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) < 0)
    	vyyerror("Unknown Group: %s", $3);
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i;
      Free($3);
    }

  | tSaveMesh  '[' String__Index ',' GroupRHS ',' CharExpr ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, (char*)"OP_SaveMesh", $5);
      Operation_P->Case.SaveMesh.FileName = $7;
      Operation_P->Case.SaveMesh.ExprIndex = $9;
      Operation_P->Type = OPERATION_SAVEMESH;
    }

  | tSaveMesh  '[' String__Index ',' GroupRHS ',' CharExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, (char*)"OP_SaveMesh", $5);
      Operation_P->Case.SaveMesh.FileName = $7;
      Operation_P->Case.SaveMesh.ExprIndex = -1;
      Operation_P->Type = OPERATION_SAVEMESH;
    }

  | tGenerateMHMoving  '[' String__Index ',' String__Index ',' FExpr ',' FExpr ']'
                         '{' Operation '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      if((i = List_ISearchSeq(Problem_S.Group, $5, fcmp_Group_Name)) < 0)
	vyyerror("Unknown Group: %s", $5);
      Free($5);
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i;
      Operation_P->Case.Generate_MH_Moving.Period  = $7;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)$9;
      Operation_P->Case.Generate_MH_Moving.Operation = $12;
    }

  | tGenerateMHMovingSeparate  '[' String__Index ',' String__Index ',' FExpr ',' FExpr ']'
                                  '{' Operation '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      if((i = List_ISearchSeq(Problem_S.Group, $5, fcmp_Group_Name)) < 0)
	vyyerror("Unknown Group: %s", $5);
      Free($5);
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i;
      Operation_P->Case.Generate_MH_Moving_S.Period  = $7;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)$9;
      Operation_P->Case.Generate_MH_Moving_S.Operation = $12;
    }

   | tAddMHMoving  '[' String__Index ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Type = OPERATION_ADDMHMOVING;
    }

  | tDeformMesh  '[' String__Index ',' String__Index ',' tNameOfMesh CharExpr ','
                     FExpr ',' GroupRHS ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.DeformeMesh.Quantity = $5;
      Operation_P->Case.DeformeMesh.Name_MshFile = $8;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1;
      Operation_P->Case.DeformeMesh.Factor = $10;
      Operation_P->Case.DeformeMesh.GroupIndex =
        Num_Group(&Group_S, (char*)"OP_DeformMesh", $12);
      Operation_P->Type = OPERATION_DEFORMEMESH;
    }

  | tDeformMesh  '[' String__Index ',' String__Index ',' tNameOfMesh CharExpr ','
                     FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.DeformeMesh.Quantity = $5;
      Operation_P->Case.DeformeMesh.Name_MshFile = $8;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1;
      Operation_P->Case.DeformeMesh.Factor = $10;
      Operation_P->Case.DeformeMesh.GroupIndex = -1;
      Operation_P->Type = OPERATION_DEFORMEMESH;
    }

  | tDeformMesh  '[' String__Index ',' String__Index ',' tNameOfMesh CharExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.DeformeMesh.Quantity = $5;
      Operation_P->Case.DeformeMesh.Name_MshFile = $8;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1;
      Operation_P->Case.DeformeMesh.Factor = 1;
      Operation_P->Case.DeformeMesh.GroupIndex = -1;
      Operation_P->Type = OPERATION_DEFORMEMESH;
    }

  | tDeformMesh  '[' String__Index ',' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.DeformeMesh.Quantity = $5;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1;
      Operation_P->Case.DeformeMesh.Factor = 1;
      Operation_P->Case.DeformeMesh.GroupIndex = -1;
      Operation_P->Type = OPERATION_DEFORMEMESH;
    }

  | tDeformMesh  '[' String__Index ',' String__Index ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.DeformeMesh.Quantity = $5;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1;
      Operation_P->Case.DeformeMesh.Factor = $7;
      Operation_P->Case.DeformeMesh.GroupIndex = -1;
      Operation_P->Type = OPERATION_DEFORMEMESH;
    }

  | tDeformMesh  '[' String__Index ',' String__Index ',' FExpr ',' GroupRHS ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Case.DeformeMesh.Quantity = $5;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1;
      Operation_P->Case.DeformeMesh.Factor = $7;
      Operation_P->Case.DeformeMesh.GroupIndex =
        Num_Group(&Group_S, (char*)"OP_DeformMesh", $9);
      Operation_P->Type = OPERATION_DEFORMEMESH;
    }

  | GenerateGroupOperation  '[' String__Index ',' GroupRHS ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
                              fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      Operation_P->Type = $1;
      Operation_P->Case.Generate.GroupIndex =
        Num_Group(&Group_S, (char*)"OP_GenerateGroup", $5);
    }

  | tSolveAgainWithOther '[' String__Index ',' String__Index ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SOLVEAGAINWITHOTHER;
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
                              fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3);
      Free($3);
      Operation_P->DefineSystemIndex = i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $5,
                              fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $5);
      Free($5);
      Operation_P->Case.SolveAgainWithOther.DefineSystemIndex = i;
    }

  | tSetGlobalSolverOptions '[' CharExpr ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = OPERATION_SETGLOBALSOLVEROPTIONS;
      Operation_P->Case.SetGlobalSolverOptions.String = $3;
    }

  | Loop
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Type = NONE;
    }
 ;

PrintOperation :
    ListOfExpression
    {
      Operation_P->Case.Print.Expressions = List_Copy(ListOfInt_L);
    }

  | String__Index
    {
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $1,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $1);
      Free($1);
      Operation_P->DefineSystemIndex = i;
    }

 ;

PrintOperationOptions :
    {
      Operation_P->Case.Print.FileOut = NULL;
      Operation_P->Case.Print.TimeStep = NULL;
      Operation_P->Case.Print.DofNumber = NULL;
      Operation_P->Case.Print.FormatString = NULL;
    }
  | PrintOperationOptions PrintOperationOption
 ;

PrintOperationOption :
    ',' tFile CharExpr
    { Operation_P->Case.Print.FileOut = $3; }

  | ',' tTimeStep ListOfFExpr
    { Operation_P->Case.Print.TimeStep =
	List_Create(List_Nbr($3), 1, sizeof(int));
      for(int i = 0; i < List_Nbr($3); i++){
	double d;
	List_Read($3,i,&d);
	int j = (int)d;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete($3);
    }

  | ',' tFormat CharExpr
    {
      Operation_P->Case.Print.FormatString = $3;
    }

  | ',' ListOfFExpr
    { Operation_P->Case.Print.DofNumber =
	List_Create(List_Nbr($2), 1, sizeof(int));
      for(int i = 0; i < List_Nbr($2); i++) {
	double d;
	List_Read($2, i, &d);
	int j = (int)d;
	List_Add(Operation_P->Case.Print.DofNumber, &j);
      }
      List_Delete($2);
    }

;

TLAoptions :
    /* none */
    {
      Operation_P->Case.TimeLoopAdaptive.LTEtarget = -1.;
      Operation_P->Case.TimeLoopAdaptive.DTimeMaxScal = -1.;
      Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged = -1.;
    }

  | ',' FExpr
    {
      Operation_P->Case.TimeLoopAdaptive.LTEtarget = $2;
      Operation_P->Case.TimeLoopAdaptive.DTimeMaxScal = -1.;
      Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged = -1.;
    }

  | ',' FExpr ',' FExpr
    {
      Operation_P->Case.TimeLoopAdaptive.LTEtarget = $2;
      Operation_P->Case.TimeLoopAdaptive.DTimeMaxScal = $4;
      Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged = -1.;
    }

  | ',' FExpr ',' FExpr ',' FExpr
    {
      Operation_P->Case.TimeLoopAdaptive.LTEtarget = $2;
      Operation_P->Case.TimeLoopAdaptive.DTimeMaxScal = $4;
      Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged = $6;
    }

 ;

LTEdefinitions :
    /* none */
    {
      Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopAdaptive.TimeLoopAdaptiveSystems_L = NULL;
      Operation_P->Case.TimeLoopAdaptive.TimeLoopAdaptivePOs_L = NULL;
    }

  | LTEdefinitions tDefineSystem '{' TimeLoopAdaptiveSystems '}'
    {
      Operation_P->Case.TimeLoopAdaptive.TimeLoopAdaptiveSystems_L = $4;
    }

  | LTEdefinitions tPostOperation '{' TimeLoopAdaptivePOs '}'
    {
      Operation_P->Case.TimeLoopAdaptive.TimeLoopAdaptivePOs_L = $4;
    }

 ;


 TimeLoopAdaptiveSystems :
    /* none */
    {
      $$ = List_Create(4, 4, sizeof(struct TimeLoopAdaptiveSystem));
    }

  | TimeLoopAdaptiveSystems '{' String__Index ',' FExpr ',' FExpr  ',' tSTRING '}'
    {
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3, fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", $3);
      TimeLoopAdaptiveSystem_S.SystemIndex = i;
      TimeLoopAdaptiveSystem_S.SystemLTEreltol = $5;
      TimeLoopAdaptiveSystem_S.SystemLTEabstol = $7;
      TimeLoopAdaptiveSystem_S.NormType = Get_DefineForString(ErrorNorm_Type, $9, &FlagError);
      if(FlagError){
        Get_Valid_SXD($9, ErrorNorm_Type);
        vyyerror("Unknown error norm type of TimeLoopAdaptive system %s", $3);
      }
      TimeLoopAdaptiveSystem_S.NormTypeString = $9;
      List_Add($$ = $1, &TimeLoopAdaptiveSystem_S);
      Free($3);
    }
 ;

 TimeLoopAdaptivePOs :
    /* none */
    {
      $$ = List_Create(4, 4, sizeof(struct LoopErrorPostOperation));
    }

  | TimeLoopAdaptivePOs '{' String__Index ',' FExpr ',' FExpr  ',' tSTRING '}'
    {
      TimeLoopAdaptivePO_S.PostOperationName = $3;
      TimeLoopAdaptivePO_S.PostOperationReltol = $5;
      TimeLoopAdaptivePO_S.PostOperationAbstol = $7;
      TimeLoopAdaptivePO_S.NormType = Get_DefineForString(ErrorNorm_Type, $9, &FlagError);
      if(FlagError){
        Get_Valid_SXD($9, ErrorNorm_Type);
        vyyerror("Unknown error norm type of TimeLoopAdaptive PostOperation %s", $3);
      }
      TimeLoopAdaptivePO_S.NormTypeString = $9;
      List_Add($$ = $1, &TimeLoopAdaptivePO_S);
    }
 ;

IterativeLoopDefinitions :
    /* none */
    {
      Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeLoop.IterativeLoopSystems_L = NULL;
      Operation_P->Case.IterativeLoop.IterativeLoopPOs_L = NULL;
    }

  | IterativeLoopDefinitions tDefineSystem '{' IterativeLoopSystems '}'
    {
      Operation_P->Case.IterativeLoop.IterativeLoopSystems_L = $4;
    }

  | IterativeLoopDefinitions tPostOperation '{' IterativeLoopPOs '}'
    {
      Operation_P->Case.IterativeLoop.IterativeLoopPOs_L = $4;
    }

 ;


 IterativeLoopSystems :
     /* none */
    {
      $$ = List_Create(4, 4, sizeof(struct IterativeLoopSystem));
    }

  | IterativeLoopSystems '{' String__Index ',' FExpr ',' FExpr  ',' tSTRING  tSTRING '}'
    {
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $3, fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", $3);
      IterativeLoopSystem_S.SystemIndex = i;
      IterativeLoopSystem_S.SystemILreltol = $5;
      IterativeLoopSystem_S.SystemILabstol = $7;
      IterativeLoopSystem_S.NormOf = Get_DefineForString(NormOf_Type, $9, &FlagError);
      if(FlagError){
        Get_Valid_SXD($3, ChangeOfState_Type);
        vyyerror("Unknown object for error norm of IterativeLoop system: %s", $3);
      }
      IterativeLoopSystem_S.NormOfString = $9;
      IterativeLoopSystem_S.NormType = Get_DefineForString(ErrorNorm_Type, $10, &FlagError);
      if(FlagError){
        Get_Valid_SXD($10, ErrorNorm_Type);
        vyyerror("Unknown error norm type of IterativeLoop system: %s", $3);
      }
      IterativeLoopSystem_S.NormTypeString = $10;
      List_Add($$ = $1, &IterativeLoopSystem_S);
      Free($3);
    }
 ;


 IterativeLoopPOs :
    /* none */
    {
      $$ = List_Create(4, 4, sizeof(struct LoopErrorPostOperation));
    }

  | IterativeLoopPOs '{' String__Index ',' FExpr ',' FExpr  ',' tSTRING '}'
    {
      IterativeLoopPO_S.PostOperationName = $3;
      IterativeLoopPO_S.PostOperationReltol = $5;
      IterativeLoopPO_S.PostOperationAbstol = $7;
      IterativeLoopPO_S.NormType = Get_DefineForString(ErrorNorm_Type, $9, &FlagError);
      if(FlagError){
        Get_Valid_SXD($9, ErrorNorm_Type);
        vyyerror("Unknown error norm type of IterativeLoopN PostOperation %s", $3);
      }
      IterativeLoopPO_S.NormTypeString = $9;
      List_Add($$ = $1, &IterativeLoopPO_S);
    }
 ;


/* ------ the following should disapear with the new syntax ------------- */

TimeLoopTheta :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopTheta.Time0   = 0.;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1.;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1;
      Operation_P->Case.TimeLoopTheta.Operation = NULL;
    }

  | TimeLoopTheta TimeLoopThetaTerm
 ;


TimeLoopThetaTerm :

    tTime0 FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopTheta.Time0   = $2; }
  | tTimeMax FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopTheta.TimeMax = $2; }
  | tDTime Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopTheta.DTimeIndex = $2; }
  | tTheta Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopTheta.ThetaIndex = $2; }

  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopTheta.Operation = $3;
    }
 ;


TimeLoopNewmark :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopNewmark.Time0   = 0.;
      Operation_P->Case.TimeLoopNewmark.TimeMax = 1.;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = -1;
      Operation_P->Case.TimeLoopNewmark.Beta   = 0.25;
      Operation_P->Case.TimeLoopNewmark.Gamma  = 0.5;
      Operation_P->Case.TimeLoopNewmark.Operation = NULL;
    }

  | TimeLoopNewmark TimeLoopNewmarkTerm
 ;


TimeLoopNewmarkTerm :

    tTime0 FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopNewmark.Time0   = $2; }
  | tTimeMax FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopNewmark.TimeMax = $2; }
  | tDTime Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = $2; }
  | tBeta FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopNewmark.Beta   = $2; }
  | tGamma FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopNewmark.Gamma   = $2; }

  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.TimeLoopNewmark.Operation = $3;
    }
 ;


IterativeLoop :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1;
      Operation_P->Case.IterativeLoop.Flag = 0;
      Operation_P->Case.IterativeLoop.Operation = NULL;
    }

  | IterativeLoop IterativeLoopTerm
 ;

IterativeLoopTerm :

    tNbrMaxIteration FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)$2; }
  | tCriterion FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeLoop.Criterion = $2; }
  | tRelaxationFactor Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = $2; }
  | tFlag FExpr tEND  /* Attention: phase test */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeLoop.Flag = (int)$2; }
  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeLoop.Operation = $3;
    }
 ;


IterativeTimeReduction :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration     = 20;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = 2.;
      Operation_P->Case.IterativeTimeReduction.Criterion           = 1.e-3;
      Operation_P->Case.IterativeTimeReduction.Flag                = 0;
      Current_System = Operation_P->DefineSystemIndex              = -1;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState       = NULL;
      Operation_P->Case.IterativeTimeReduction.Operation           = NULL;
      Operation_P->Case.IterativeTimeReduction.OperationEnd        = NULL;
    }

  | IterativeTimeReduction IterativeTimeReductionTerm
 ;

IterativeTimeReductionTerm :

    tNbrMaxIteration FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)$2; }
  | tDivisionCoefficient FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = $2; }
  | tCriterion FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.Criterion = $2; }
  | tFlag FExpr tEND  /* Attention: phase test */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.Flag = (int)$2; }

  | tDefineSystem String__Index tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      int i;
      if((i = List_ISearchSeq(Resolution_S.DefineSystem, $2,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $2);
      Free($2);
      Current_System = Operation_P->DefineSystemIndex = i;
    }

  | tChangeOfState  '{' ChangeOfStates '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = $3;
    }

  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.Operation = $3;
    }
  | tOperationEnd  '{' Operation '}'
    { List_Pop(Operation_L);
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1);
      Operation_P->Case.IterativeTimeReduction.OperationEnd = $3;
    }
 ;


ChangeOfStates :
    /* none */
    { $$ = List_Create(3, 3, sizeof (struct ChangeOfState)); }

  | ChangeOfStates '{' ChangeOfState '}'
    { List_Add($$ = $1, &ChangeOfState_S); }
 ;

ChangeOfState :
    /* none */
    {
      ChangeOfState_S.Type = CHANGEOFSTATE_CHANGESIGN;
      ChangeOfState_S.QuantityIndex       = -1;
      ChangeOfState_S.FormulationIndex    = -1;
      ChangeOfState_S.InIndex             = -1;
      ChangeOfState_S.Criterion           = 1.e-2;
      ChangeOfState_S.ExpressionIndex = ChangeOfState_S.ExpressionIndex2 = -1;
      ChangeOfState_S.FlagIndex           = -1;
      ChangeOfState_S.ActiveList[0]       = NULL;
      ChangeOfState_S.ActiveList[1]       = NULL;
    }

  | ChangeOfState  ChangeOfStateTerm
 ;

ChangeOfStateTerm :

    tType tSTRING tEND
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, ChangeOfState_Type);
	vyyerror("Unknown type of ChangeOfState: %s", $2);
      }
      Free($2);
    }

  | tQuantity tSTRING tEND
    {
      if(Current_System >= 0) {
	List_T *ListOfInt_Lnew =
	  ((struct DefineSystem *)List_Pointer(Resolution_S.DefineSystem,
					       Current_System))->FormulationIndex;
	int *ListOfInt_P =(int *)List_Pointer(ListOfInt_Lnew, 0);
	int i = 0, j;
	for(j = 0; j < List_Nbr(ListOfInt_Lnew); j++) {
	  Formulation_S.DefineQuantity =
	    ((struct Formulation *)
	     List_Pointer(Problem_S.Formulation, ListOfInt_P[j]))->DefineQuantity;
	  if((i = List_ISearchSeq(Formulation_S.DefineQuantity, $2,
				   fcmp_DefineQuantity_Name)) >= 0)
	    break;
	}
	if(j<List_Nbr(ListOfInt_Lnew)) {
	  ChangeOfState_S.FormulationIndex = ListOfInt_P[j];
	  ChangeOfState_S.QuantityIndex = i;
	}
	else
	  vyyerror("Unknown discrete Quantity: %s", $2);
      }
      else
	vyyerror("System undefined for Quantity: %s", $2);
      Free($2);
    }

  | tIn GroupRHS tEND
  { ChangeOfState_S.InIndex = Num_Group(&Group_S, (char*)"OP_In", $2); }

  | tCriterion FExpr tEND
    { ChangeOfState_S.Criterion = $2; }

  | tFunction Expression tEND
    {
      if(ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = $2;
      else
	ChangeOfState_S.ExpressionIndex2 = $2;
    }

  | tFlag tSTRING tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.Expression, $2, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", $2);
      Free($2);
      ChangeOfState_S.FlagIndex = i;
    }
 ;

/* ------ end of "the following should disapear with the new syntax" ------ */


/* ------------------------------------------------------------------------ */
/*  P o s t P r o c e s s i n g                                             */
/* ------------------------------------------------------------------------ */

PostProcessings :
    /* none */
    {
      if(!Problem_S.PostProcessing)
	Problem_S.PostProcessing =
	  List_Create(10, 5, sizeof (struct PostProcessing));
    }

  | PostProcessings  BracedPostProcessing
 ;

BracedPostProcessing :

    '{' PostProcessing '}'
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S);
    }

  | Loop
 ;

PostProcessing :
    /* none */
    {
      PostProcessing_S.Name = NULL;
      PostProcessing_S.FormulationIndex = -1;
      PostProcessing_S.OriginSystemIndex = NULL;
      PostProcessing_S.NameOfSystem = NULL;
      PostProcessing_S.PostQuantity = NULL;
    }

  | PostProcessing  PostProcessingTerm
 ;

PostProcessingTerm :
    tName String__Index tEND
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 $2, fcmp_PostProcessing_Name);
      PostProcessing_S.Name = $2;
    }

  | tNameOfFormulation String__Index tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.Formulation, $2,
			       fcmp_Formulation_Name)) < 0){
	vyyerror("Unknown Formulation: %s", $2);
      }
      else {
	PostProcessing_S.FormulationIndex = i;
	List_Read(Problem_S.Formulation, i, &Formulation_S);
      }
      Free($2);
    }

  | tNameOfSystem String__Index tEND
    {
      PostProcessing_S.NameOfSystem = $2;
    }

  | tQuantity  '{' PostQuantities '}'
    { PostProcessing_S.PostQuantity = $3; }
 ;


PostQuantities :
    /* none */
    { $$ = List_Create(5, 5, sizeof (struct PostQuantity)); }

  | PostQuantities '{' PostQuantity '}'
    { List_Add($$ = $1, &PostQuantity_S); }

  | PostQuantities  Loop
    { $$ = $1; }

 ;

PostQuantity :
    /* none */
    {
      PostQuantity_S.Name = NULL;
      PostQuantity_S.PostQuantityTerm = NULL;
    }

  | PostQuantity PostQuantityTerm
 ;


PostQuantityTerm :
    tName String__Index tEND
    { PostQuantity_S.Name = $2; }

  | tValue '{' SubPostQuantities '}'
    { PostQuantity_S.PostQuantityTerm = $3; }

 ;

SubPostQuantities :
    /* none */
    { $$ = List_Create(5, 5, sizeof (struct PostQuantityTerm)); }

    /* Doit rester tant qu'on ne supprime pas l'association 'Integral <-> tGalerkin' */
  | SubPostQuantities tGalerkin '{' SubPostQuantity '}'
    {
      PostQuantityTerm_S.EvaluationType = INTEGRAL;
      List_Add($$ = $1, &PostQuantityTerm_S);
    }

  | SubPostQuantities tSTRING '{' SubPostQuantity '}'
    {
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, PostQuantityTerm_EvaluationType);
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", $2);
      }
      Free($2);
      List_Add($$ = $1, &PostQuantityTerm_S);
    }

  | SubPostQuantities Loop
    { $$ = $1 ; }
 ;

SubPostQuantity :
    /* none */
    {
      PostQuantityTerm_S.Type = 0;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_;
      PostQuantityTerm_S.WholeQuantity = NULL;
      PostQuantityTerm_S.InIndex = -1;
      PostQuantityTerm_S.JacobianMethodIndex = -1;
      PostQuantityTerm_S.IntegrationMethodIndex = -1;
    }

  | SubPostQuantity SubPostQuantityTerm
 ;

SubPostQuantityTerm :
    TermOperator '['
    {
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator;
      Current_DofIndexInWholeQuantity = -2;
      List_Reset(ListOfPointer_L);
    }

    WholeQuantityExpression ']' tEND
    { PostQuantityTerm_S.WholeQuantity = $4;

      Pro_DefineQuantityIndex
	(PostQuantityTerm_S.WholeQuantity, -1,
	 &PostQuantityTerm_S.NbrQuantityIndex,
	 &PostQuantityTerm_S.QuantityIndexTable,
	 &PostQuantityTerm_S.QuantityTraceGroupIndexTable);
      if(!PostQuantityTerm_S.Type) {
	PostQuantityTerm_S.Type = 0;
	for(int i = 0; i < PostQuantityTerm_S.NbrQuantityIndex; i++) {
	  int j = -1;
	  if(PostQuantityTerm_S.QuantityIndexTable[i] >= 0)
	    j = ((struct DefineQuantity *)
		 List_Pointer
		 (((struct Formulation *)
		   List_Pointer(Problem_S.Formulation,
				PostProcessing_S.FormulationIndex))->DefineQuantity,
		  PostQuantityTerm_S.QuantityIndexTable[i])) -> Type;
	  if(PostQuantityTerm_S.Type == 0)
	    PostQuantityTerm_S.Type = j;
	  else if(PostQuantityTerm_S.Type != j)
	    vyyerror("Mixed discrete Quantity types in term (should be split in separate terms)");
	}
	if(PostQuantityTerm_S.Type == 0)  PostQuantityTerm_S.Type = LOCALQUANTITY;
      }

    }

 | tType tSTRING tEND
   { /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, $2, &FlagError);
     if(FlagError){
       Get_Valid_SXD($2, DefineQuantity_Type);
       vyyerror("Unknown type of Operation: %s", $2);
     }
     Free($2);
   }

 | tIn GroupRHS tEND
   {
     PostQuantityTerm_S.InIndex = Num_Group(&Group_S, (char*)"PQ_In", $2);
   }

  | tJacobian String__Index tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.JacobianMethod, $2,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",$2);
      else
	PostQuantityTerm_S.JacobianMethodIndex = i;
      Free($2);
    }

  | tIntegration tSTRING tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",$2);
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i;
      Free($2);
    }

 ;


/* ------------------------------------------------------------------------ */
/*  P o s t O p e r a t i o n                                               */
/* ------------------------------------------------------------------------ */

PostOperations :
    /* none */
    {
      if(!Problem_S.PostOperation)
	Problem_S.PostOperation =
	  List_Create(10, 5, sizeof (struct PostOperation));
    }

  | PostOperations  BracedPostOperation
 ;

BracedPostOperation :

    '{' PostOperation '}'
    { List_Add(Problem_S.PostOperation, &PostOperation_S); }

  | Loop
 ;

PostOperation :
    /* none */
    {
      PostOperation_S.Name = NULL;
      PostOperation_S.Hidden = false;
      PostOperation_S.AppendString = NULL;
      PostOperation_S.Format = FORMAT_GMSH;
      PostOperation_S.PostProcessingIndex = -1;
      PostOperation_S.ResampleTime = false;
      PostOperation_S.TimeValue_L = NULL;
      PostOperation_S.TimeImagValue_L = NULL;
      PostOperation_S.LastTimeStepOnly = 0;
      PostOperation_S.OverrideTimeStepValue = -1;
      PostOperation_S.NoMesh = 0;
      PostOperation_S.CatFile = 0;
    }

  | PostOperation  PostOperationTerm
 ;

PostOperationTerm :
    tName String__Index tEND
    {
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 $2, fcmp_PostOperation_Name);
      PostOperation_S.Name = $2;
    }

  | tHidden FExpr tEND { PostOperation_S.Hidden = $2 ? true : false; }

  | tNameOfPostProcessing String__Index tEND
    {
      int i;
      if((i = List_ISearchSeq(Problem_S.PostProcessing, $2,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", $2);
      else {
	PostOperation_S.PostProcessingIndex = i;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S);
      }
      Free($2);
    }

  | tFormat tSTRING tEND
    {
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, $2, &FlagError);
      if(FlagError){
	Get_Valid_SXD($2, PostSubOperation_Format);
	vyyerror("Unknown PostProcessing Format: %s", $2);
      }
      Free($2);
    }

  | tTimeValue ListOfFExpr tEND
    {
      PostOperation_S.TimeValue_L = $2;
    }

  | tTimeImagValue ListOfFExpr tEND
    {
      PostOperation_S.TimeImagValue_L = $2;
    }

  | tLastTimeStepOnly tEND
    {
      PostOperation_S.LastTimeStepOnly = 1;
    }

  | tAppend CharExpr tEND
    {
      PostOperation_S.AppendString = $2;
    }

  | tAppendToExistingFile FExpr tEND
    {
      PostOperation_S.CatFile = $2;
    }

  | tNoMesh FExpr tEND
    {
      PostOperation_S.NoMesh = $2;
    }

  | tOverrideTimeStepValue FExpr tEND
    {
      PostOperation_S.OverrideTimeStepValue = $2;
    }

  | tResampleTime '[' FExpr ',' FExpr ',' FExpr ']' tEND
    {
      PostOperation_S.ResampleTime = true;
      PostOperation_S.ResampleTimeStart = $3;
      PostOperation_S.ResampleTimeStop = $5;
      PostOperation_S.ResampleTimeStep = $7;
    }

  | tOperation  '{' PostSubOperations '}'
    {
      PostOperation_S.PostSubOperation = $3;
    }

  | Loop
 ;


SeparatePostOperation :
    tPostOperation String__Index tUsingPost String__Index
    {
      PostOperation_S.Hidden = false;
      PostOperation_S.AppendString = NULL;
      PostOperation_S.Format = FORMAT_GMSH;
      PostOperation_S.PostProcessingIndex = -1;
      PostOperation_S.ResampleTime = false;
      PostOperation_S.TimeValue_L = NULL;
      PostOperation_S.TimeImagValue_L = NULL;
      PostOperation_S.LastTimeStepOnly = 0;
      PostOperation_S.OverrideTimeStepValue = -1;
      PostOperation_S.NoMesh = 0;
      int i;
      if((i = List_ISearchSeq(Problem_S.PostProcessing, $4,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", $4);
      else {
	PostOperation_S.PostProcessingIndex = i;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S);
	if(!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation));
	PostOperation_S.Name = $2;
      }
      Free($4);
    }
    '{' PostSubOperations '}'
    {
      PostOperation_S.PostSubOperation = $7;
      if(PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S);
    }
 ;


PostSubOperations :
    /* none */
    { $$ = List_Create(5, 5, sizeof (struct PostSubOperation)); }

  | PostSubOperations
    {
      PostSubOperation_S.Format = -1;
      PostSubOperation_S.FileOut = NULL;
      PostSubOperation_S.Depth = 1;
      PostSubOperation_S.Smoothing = 0;
      PostSubOperation_S.Skin = 0;
      PostSubOperation_S.Comma = 0;
      PostSubOperation_S.Dimension = _ALL;
      PostSubOperation_S.Adapt = 0;
      PostSubOperation_S.Target = -1.;
      PostSubOperation_S.HarmonicToTime = 1;
      PostSubOperation_S.FourierTransform = 0;
      PostSubOperation_S.FrozenTimeStepList = 0;
      PostSubOperation_S.TimeStep_L = List_Create(10,10,sizeof(int));;
      PostSubOperation_S.Frequency_L = List_Create(10,10,sizeof(double));;
      PostSubOperation_S.Value_L = List_Create(10,10,sizeof(double));;
      PostSubOperation_S.Iso = 0;
      PostSubOperation_S.Iso_L = List_Create(10,10,sizeof(double));;
      PostSubOperation_S.Sort = 0;
      PostSubOperation_S.NoNewLine = 0;
      PostSubOperation_S.NoTitle = 0;
      PostSubOperation_S.DecomposeInSimplex = 0;
      PostSubOperation_S.NewCoordinates = 0;
      PostSubOperation_S.NewCoordinatesFile = NULL;
      PostSubOperation_S.ChangeOfCoordinates[0] = -1;
      PostSubOperation_S.ChangeOfCoordinates[1] = -1;
      PostSubOperation_S.ChangeOfCoordinates[2] = -1;
      PostSubOperation_S.ChangeOfValues = NULL;
      PostSubOperation_S.Legend = LEGEND_NONE;
      PostSubOperation_S.LegendPosition[0] = 0.;
      PostSubOperation_S.LegendPosition[1] = 0.;
      PostSubOperation_S.LegendPosition[2] = 0.;
      PostSubOperation_S.EvaluationPoints = NULL;
      PostSubOperation_S.StoreInVariable = NULL;
      PostSubOperation_S.StoreInRegister = -1;
      PostSubOperation_S.StoreMinInRegister = -1;
      PostSubOperation_S.StoreMinXinRegister = -1;
      PostSubOperation_S.StoreMinYinRegister = -1;
      PostSubOperation_S.StoreMinZinRegister = -1;
      PostSubOperation_S.StoreMaxInRegister = -1;
      PostSubOperation_S.StoreMaxXinRegister = -1;
      PostSubOperation_S.StoreMaxYinRegister = -1;
      PostSubOperation_S.StoreMaxZinRegister = -1;
      PostSubOperation_S.StoreInField = -1;
      PostSubOperation_S.StoreInMeshBasedField = -1;
      PostSubOperation_S.LastTimeStepOnly = 0;
      PostSubOperation_S.AppendTimeStepToFileName = 0;
      PostSubOperation_S.AppendExpressionToFileName = -1;
      PostSubOperation_S.AppendExpressionFormat = NULL;
      PostSubOperation_S.AppendStringToFileName = NULL;
      PostSubOperation_S.OverrideTimeStepValue = -1;
      PostSubOperation_S.NoMesh = 0;
      PostSubOperation_S.CatFile = 0;
      PostSubOperation_S.SendToServer = NULL;
      PostSubOperation_S.Color = NULL;
      PostSubOperation_S.ValueIndex = 0;
      PostSubOperation_S.ValueName = NULL;
      PostSubOperation_S.Label = NULL;
      PostSubOperation_S.TimeValue_L = NULL;
      PostSubOperation_S.TimeImagValue_L = NULL;
    }
    PostSubOperation
    {
      if(PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format < 0)
	  PostSubOperation_S.Format = PostOperation_S.Format;
	if(!PostSubOperation_S.TimeValue_L)
          PostSubOperation_S.TimeValue_L = PostOperation_S.TimeValue_L;
	if(!PostSubOperation_S.TimeImagValue_L)
          PostSubOperation_S.TimeImagValue_L = PostOperation_S.TimeImagValue_L;
	if(!PostSubOperation_S.LastTimeStepOnly)
          PostSubOperation_S.LastTimeStepOnly = PostOperation_S.LastTimeStepOnly;
	if(!PostSubOperation_S.NoMesh)
          PostSubOperation_S.NoMesh = PostOperation_S.NoMesh;
	if(PostSubOperation_S.OverrideTimeStepValue < 0)
          PostSubOperation_S.OverrideTimeStepValue = PostOperation_S.OverrideTimeStepValue;
	if(!PostSubOperation_S.CatFile)
          PostSubOperation_S.CatFile = PostOperation_S.CatFile;

	List_Add($$ = $1, &PostSubOperation_S);
      }
    }
 ;


PostSubOperation :

    tPlot '[' PostQuantitiesToPrint PrintSubType PrintOptions ']' tEND
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)");
    }

  | tPrint '[' PostQuantitiesToPrint PrintSubType PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_PRINT;
    }

  | tPrint '[' tBIGSTR ',' Expression PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_EXPRESSION;
      PostSubOperation_S.Case.Expression.String = $3;
      PostSubOperation_S.Case.Expression.String2 = NULL;
      PostSubOperation_S.Case.Expression.ExpressionIndex = $5;
      PostSubOperation_S.PostQuantityIndex[0] = -1;
    }

  | tPrint '[' tBIGSTR ',' tStr '[' CharExpr ']' PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_EXPRESSION;
      PostSubOperation_S.Case.Expression.String = $3;
      PostSubOperation_S.Case.Expression.String2 = $7;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1;
      PostSubOperation_S.PostQuantityIndex[0] = -1;
    }

  | tEcho '[' CharExpr PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_EXPRESSION;
      PostSubOperation_S.Case.Expression.String = $3;
      PostSubOperation_S.Case.Expression.String2 = NULL;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1;
      PostSubOperation_S.PostQuantityIndex[0] = -1;
    }

  | tPrintGroup '[' GroupRHS
    {
      PostSubOperation_S.Type = POP_GROUP;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex =
        Num_Group(&Group_S, (char*)"PO_Group", $3);
      PostSubOperation_S.PostQuantityIndex[0] = -1;
    }
    ',' tIn GroupRHS PrintOptions ']' tEND
    {
      PostSubOperation_S.Case.Group.GroupIndex =
        Num_Group(&Group_S, (char*)"PO_Group", $7);
    }

  | tSendMergeFileRequest '[' CharExpr ']' tEND
    {
      PostSubOperation_S.Type = POP_MERGE;
      PostSubOperation_S.FileOut = $3;
    }

  | Loop
    {
      PostSubOperation_S.Type = POP_NONE;
    }

 ;

PostQuantitiesToPrint :

    String__Index PostQuantitySupport ','
    {
      int i;
      if((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, $1,
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", $1);
      PostSubOperation_S.PostQuantityIndex[0] = i;
      PostSubOperation_S.PostQuantityIndex[1] = -1;
      PostSubOperation_S.PostQuantitySupport[0] = $2;
      PostSubOperation_S.PostQuantitySupport[1] = -1;
      Free($1);
    }

 |  String__Index  PostQuantitySupport Combination tSTRING  PostQuantitySupport ','
    {
      Message::Warning("Combined post-quantities are deprecated: use registers instead");
      int i;
      if((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, $1,
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", $1);
      PostSubOperation_S.PostQuantityIndex[0] = i;
      PostSubOperation_S.PostQuantitySupport[0] = $2;
      int j = -1;
      if((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, $4,
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", $4);
      PostSubOperation_S.PostQuantityIndex[1] = j;
      PostSubOperation_S.PostQuantitySupport[1] = $5;

      if(($2 < 0 && $5 < 0) || ($2 >= 0 && $5 >= 0)) {
	vyyerror("Postprocessing Quantities '%s' and '%s' of same type (%s)",
		 $1, $4, ($2>0)? "with Support":"without Support");
      }
      Free($1); Free($4);
    }
 ;

Combination :

    '*' { PostSubOperation_S.CombinationType = MULTIPLICATION; }
  | '/' { PostSubOperation_S.CombinationType = DIVISION; }
  | '+' { PostSubOperation_S.CombinationType = ADDITION; }
  | '-' { PostSubOperation_S.CombinationType = SOUSTRACTION; }
 ;

PostQuantitySupport :

    /* none */
    { $$ = -1; }
  | '[' GroupRHS ']'
  { $$ = Num_Group(&Group_S, (char*)"PO_Support", $2); }
 ;

PrintSubType :

    tOnGlobal
    {
      PostSubOperation_S.SubType = PRINT_ONREGION;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1;
    }

  | tOnRegion GroupRHS
    {
      PostSubOperation_S.SubType = PRINT_ONREGION;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, (char*)"PO_OnRegion", $2);
    }

  | tOnElementsOf GroupRHS
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, (char*)"PO_OnElementsOf", $2);
    }

  | tOnSection '{' '{' RecursiveListOfFExpr '}'
                   '{' RecursiveListOfFExpr '}'
                   '{' RecursiveListOfFExpr '}' '}'
    {
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D;
      if(List_Nbr($4) != 3 || List_Nbr($7) != 3 || List_Nbr($10) != 3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}",
		 List_Nbr($4), List_Nbr($7), List_Nbr($10));
      else{
	List_Read($4, 0, &PostSubOperation_S.Case.OnSection.x[0]);
	List_Read($4, 1, &PostSubOperation_S.Case.OnSection.y[0]);
	List_Read($4, 2, &PostSubOperation_S.Case.OnSection.z[0]);
	List_Read($7, 0, &PostSubOperation_S.Case.OnSection.x[1]);
	List_Read($7, 1, &PostSubOperation_S.Case.OnSection.y[1]);
	List_Read($7, 2, &PostSubOperation_S.Case.OnSection.z[1]);
	List_Read($10, 0, &PostSubOperation_S.Case.OnSection.x[2]);
	List_Read($10, 1, &PostSubOperation_S.Case.OnSection.y[2]);
	List_Read($10, 2, &PostSubOperation_S.Case.OnSection.z[2]);
      }
      List_Delete($4);
      List_Delete($7);
      List_Delete($10);
    }

  | tOnGrid GroupRHS
    {
      PostSubOperation_S.SubType = PRINT_ONGRID;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, (char*)"PO_OnGrid", $2);
    }

  | tOnGrid '{' Expression ',' Expression ',' Expression '}'
            '{' ListOfFExpr ','  ListOfFExpr ','  ListOfFExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = $3;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = $5;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = $7;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = $10;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = $12;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = $14;
    }

  | tOnPoint '{' RecursiveListOfFExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_0D;
      if(List_Nbr($3) != 3)
	vyyerror("Expected {3} coordinates, got {%d}", List_Nbr($3));
      else{
	List_Read($3, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read($3, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read($3, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
      List_Delete($3);
    }

  | tOnLine '{' '{' RecursiveListOfFExpr '}'
                '{' RecursiveListOfFExpr '}' '}'  '{' FExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_1D;
      if(List_Nbr($4) != 3 || List_Nbr($7) != 3)
	vyyerror("Expected {3}{3} coordinates, got {%d}{%d}",
		 List_Nbr($4), List_Nbr($7));
      else{
	List_Read($4, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read($4, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read($4, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read($7, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read($7, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read($7, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)$11;
      List_Delete($4);
      List_Delete($7);
    }

  | tOnPlane '{' '{' RecursiveListOfFExpr '}'
                 '{' RecursiveListOfFExpr '}'
                 '{' RecursiveListOfFExpr '}' '}'  '{' FExpr ',' FExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_2D;
      if(List_Nbr($4) != 3 || List_Nbr($7) != 3 || List_Nbr($10) != 3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}",
		 List_Nbr($4), List_Nbr($7), List_Nbr($10));
      else{
	List_Read($4, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read($4, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read($4, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read($7, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read($7, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read($7, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read($10, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read($10, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read($10, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)$14;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)$16;
      List_Delete($4);
      List_Delete($7);
      List_Delete($10);
    }

  | tOnBox '{' '{' RecursiveListOfFExpr '}'
               '{' RecursiveListOfFExpr '}'
               '{' RecursiveListOfFExpr '}'
               '{' RecursiveListOfFExpr '}' '}'  '{' FExpr ',' FExpr ',' FExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_3D;
      if(List_Nbr($4) != 3 || List_Nbr($7) != 3 ||
	 List_Nbr($10) != 3 || List_Nbr($13) != 3)
	vyyerror("Expected {3}{3}{3}{3} coordinates, got {%d}{%d}{%d}{%d}",
		 List_Nbr($4), List_Nbr($7), List_Nbr($10), List_Nbr($13));
      else{
	List_Read($4, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read($4, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read($4, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read($7, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read($7, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read($7, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read($10, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read($10, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read($10, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
	List_Read($13, 0, &PostSubOperation_S.Case.OnGrid.x[3]);
	List_Read($13, 1, &PostSubOperation_S.Case.OnGrid.y[3]);
	List_Read($13, 2, &PostSubOperation_S.Case.OnGrid.z[3]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)$17;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)$19;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)$21;
      List_Delete($4);
      List_Delete($7);
      List_Delete($10);
      List_Delete($13);
    }

  /* should be generalized with a '{' RecursiveListOfFExpr '}' */
  | tOnRegion GroupRHS
    tWithArgument tSTRING '{' FExpr ',' FExpr '}'  '{' FExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_WITHARGUMENT;

      PostSubOperation_S.Case.WithArgument.RegionIndex =
	Num_Group(&Group_S, (char*)"PO_On", $2);
      int i;
      if((i = List_ISearchSeq(Problem_S.Expression, $4, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", $4);
      Free($4);

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i;
      PostSubOperation_S.Case.WithArgument.x[0] = $6;
      PostSubOperation_S.Case.WithArgument.x[1] = $8;
      PostSubOperation_S.Case.WithArgument.n = (int)$11;
    }

 ;

PrintOptions :
    /* none */
    {
    }
  | PrintOptions PrintOption
 ;

PrintOption :
    ',' tFile CharExpr
    {
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = $3;
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen($3)+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, $3);
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString);
	Free($3);
      }
      PostSubOperation_S.CatFile = 0;
    }
  | ',' tFile '>' CharExpr
    {
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = $4;
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen($4)+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, $4);
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString);
	Free($4);
      }
      PostSubOperation_S.CatFile = 1;
    }
  | ',' tFile tGREATERGREATER CharExpr
    {
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = $4;
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen($4)+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, $4);
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString);
	Free($4);
      }
      PostSubOperation_S.CatFile = 2;
    }
  | ',' tAppendToExistingFile FExpr
    {
      PostSubOperation_S.CatFile = $3;
    }
  | ',' tDepth FExpr
    {
      PostSubOperation_S.Depth = (int)$3;
    }
  | ',' tSkin
    {
      PostSubOperation_S.Skin = 1;
    }
  | ',' tSmoothing
    {
      PostSubOperation_S.Smoothing = 1;
    }
  | ',' tHarmonicToTime FExpr
    {
      PostSubOperation_S.HarmonicToTime = (int)$3;
    }
  | ',' tCosineTransform
    {
      PostSubOperation_S.FourierTransform = 2;
    }
  | ',' tFourierTransform
    {
      PostSubOperation_S.FourierTransform = 1;
    }
  | ',' tFormat tSTRING
    {
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, $3, &FlagError);
      if(FlagError){
	Get_Valid_SXD($3, PostSubOperation_Format);
	vyyerror("Unknown PostProcessing Format: %s", $3);
      }
      Free($3);
    }
  | ',' tComma
    {
      PostSubOperation_S.Comma = 1;
    }
  | ',' tValueIndex FExpr
    {
      PostSubOperation_S.ValueIndex = $3;
    }
  | ',' tValueName  CharExpr
    {
      PostSubOperation_S.ValueName = $3;
    }
  | ',' tName  CharExpr
    {
      PostSubOperation_S.Label = $3;
    }
  | ',' tDimension FExpr
    {
      if((int)$3 >= 1 && (int)$3 <= 3)
	PostSubOperation_S.Dimension = (int)$3;
      else
	vyyerror("Wrong Dimension in Print");
    }
  | ',' tTimeStep ListOfFExpr
    {
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(int i = 0; i < List_Nbr($3); i++){
	double d;
	List_Read($3,i,&d);
	int j = (int)d;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete($3);
    }
  | ',' tTimeValue ListOfFExpr
    {
      PostSubOperation_S.TimeValue_L = $3;
    }
  | ',' tTimeImagValue ListOfFExpr
    {
      PostSubOperation_S.TimeImagValue_L = $3;
    }
  | ',' tAdapt tSTRING
    {
      PostSubOperation_S.Adapt =
	Get_DefineForString(PostSubOperation_AdaptationType, $3, &FlagError);
      if(FlagError){
	Get_Valid_SXD($3, PostSubOperation_AdaptationType);
	vyyerror("Unknown Adaptation method: %s", $3);
      }
    }
  | ',' tSort tSTRING
    {
      PostSubOperation_S.Sort =
	Get_DefineForString(PostSubOperation_SortType, $3, &FlagError);
      if(FlagError){
	Get_Valid_SXD($3, PostSubOperation_SortType);
	vyyerror("Unknown Sort method: %s", $3);
      }
    }
  | ',' tTarget FExpr
    {
      if($3 >= 0.)
	PostSubOperation_S.Target = $3;
      else
	vyyerror("Bad Target value");
    }
  | ',' tValue ListOfFExpr
    {
      for(int i = 0; i < List_Nbr($3); i++){
	double d;
	List_Read($3,i,&d);
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete($3);
    }
  | ',' tIso FExpr
    {
      PostSubOperation_S.Iso = (int)$3;
    }
  | ',' tIso '{' RecursiveListOfFExpr '}'
    {
      PostSubOperation_S.Iso = -1;
      for(int i = 0; i < List_Nbr($4); i++){
	double d;
	List_Read($4,i,&d);
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete($4);
    }
  | ',' tNoNewLine
    {
      PostSubOperation_S.NoNewLine = 1;
    }
  | ',' tNoTitle
    {
      PostSubOperation_S.NoTitle = 1;
    }
  | ',' tDecomposeInSimplex
    {
      PostSubOperation_S.DecomposeInSimplex = 1;
    }
  | ',' tFrequency ListOfFExpr
    {
      for(int i = 0; i < List_Nbr($3); i++){
	double d;
	List_Read($3,i,&d);
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete($3);
    }
  | ',' tChangeOfCoordinates '{' Expression ',' Expression ',' Expression '}'
    {
      PostSubOperation_S.ChangeOfCoordinates[0] = $4;
      PostSubOperation_S.ChangeOfCoordinates[1] = $6;
      PostSubOperation_S.ChangeOfCoordinates[2] = $8;
    }
  | ',' tChangeOfValues ListOfExpression
    {
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L);
    }
  | ',' tTimeLegend
    {
      PostSubOperation_S.Legend = LEGEND_TIME;
      PostSubOperation_S.LegendPosition[0] = 1.e5;
      PostSubOperation_S.LegendPosition[1] = 30.;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574;
    }
  | ',' tTimeLegend '{' FExpr ',' FExpr ',' FExpr '}'
    {
      PostSubOperation_S.Legend = LEGEND_TIME;
      PostSubOperation_S.LegendPosition[0] = $4;
      PostSubOperation_S.LegendPosition[1] = $6;
      PostSubOperation_S.LegendPosition[2] = $8;
    }
  | ',' tFrequencyLegend
    {
      PostSubOperation_S.Legend = LEGEND_FREQUENCY;
      PostSubOperation_S.LegendPosition[0] = 1.e5;
      PostSubOperation_S.LegendPosition[1] = 30.;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574;
    }
  | ',' tFrequencyLegend '{' FExpr ',' FExpr ',' FExpr '}'
    {
      PostSubOperation_S.Legend = LEGEND_FREQUENCY;
      PostSubOperation_S.LegendPosition[0] = $4;
      PostSubOperation_S.LegendPosition[1] = $6;
      PostSubOperation_S.LegendPosition[2] = $8;
    }
  | ',' tEigenvalueLegend
    {
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES;
      PostSubOperation_S.LegendPosition[0] = 1.e5;
      PostSubOperation_S.LegendPosition[1] = 30.;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574;
    }
  | ',' tEigenvalueLegend '{' FExpr ',' FExpr ',' FExpr '}'
    {
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES;
      PostSubOperation_S.LegendPosition[0] = $4;
      PostSubOperation_S.LegendPosition[1] = $6;
      PostSubOperation_S.LegendPosition[2] = $8;
    }
  | ',' tEvaluationPoints '{' RecursiveListOfFExpr '}'
    {
      if(List_Nbr($4)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr($4));
      else {
	PostSubOperation_S.EvaluationPoints = $4;
      }
    }
  | ',' tStoreInVariable '$' String__Index
    {
      PostSubOperation_S.StoreInVariable = $4;
    }
  | ',' tStoreInRegister FExpr
    {
      PostSubOperation_S.StoreInRegister = (int)$3 - 1;
    }
  | ',' tStoreMinInRegister FExpr
    {
      PostSubOperation_S.StoreMinInRegister = (int)$3 - 1;
    }
  | ',' tStoreMinXinRegister FExpr
    {
      PostSubOperation_S.StoreMinXinRegister = (int)$3 - 1;
    }
  | ',' tStoreMinYinRegister FExpr
    {
      PostSubOperation_S.StoreMinYinRegister = (int)$3 - 1;
    }
  | ',' tStoreMinZinRegister FExpr
    {
      PostSubOperation_S.StoreMinZinRegister = (int)$3 - 1;
    }
  | ',' tStoreMaxInRegister FExpr
    {
      PostSubOperation_S.StoreMaxInRegister = (int)$3 - 1;
    }
  | ',' tStoreMaxXinRegister FExpr
    {
      PostSubOperation_S.StoreMaxXinRegister = (int)$3 - 1;
    }
  | ',' tStoreMaxYinRegister FExpr
    {
      PostSubOperation_S.StoreMaxYinRegister = (int)$3 - 1;
    }
  | ',' tStoreMaxZinRegister FExpr
    {
      PostSubOperation_S.StoreMaxZinRegister = (int)$3 - 1;
    }
  | ',' tStoreInField FExpr
    {
      PostSubOperation_S.StoreInField = $3;
    }
  | ',' tStoreInMeshBasedField FExpr
    {
      PostSubOperation_S.StoreInMeshBasedField = $3;
    }
  | ',' tLastTimeStepOnly
    {
      PostSubOperation_S.LastTimeStepOnly = 1;
    }
  | ',' tAppendTimeStepToFileName
    {
      PostSubOperation_S.AppendTimeStepToFileName = 1;
    }
  | ',' tAppendTimeStepToFileName FExpr
    {
      PostSubOperation_S.AppendTimeStepToFileName = $3;
    }
  | ',' tAppendExpressionToFileName Expression
    {
      PostSubOperation_S.AppendExpressionToFileName = $3;
    }
  | ',' tAppendExpressionFormat CharExpr
    {
      PostSubOperation_S.AppendExpressionFormat = $3;
    }
  | ',' tAppendStringToFileName CharExpr
    {
      PostSubOperation_S.AppendStringToFileName = $3;
    }
  | ',' tOverrideTimeStepValue FExpr
    {
      PostSubOperation_S.OverrideTimeStepValue = $3;
    }
  | ',' tNoMesh
    {
      PostSubOperation_S.NoMesh = 1;
    }
  | ',' tNoMesh FExpr
    {
      PostSubOperation_S.NoMesh = $3;
    }
  | ',' tSendToServer CharExpr
    {
      PostSubOperation_S.SendToServer = $3;
    }
  | ',' tColor CharExpr
    {
      PostSubOperation_S.Color = $3;
    }
  | ',' tNewCoordinates CharExpr
    {
      PostSubOperation_S.NewCoordinates = 1;
      PostSubOperation_S.NewCoordinatesFile = $3;
    }
 ;


/* ------------------------------------------------------------------------ */
/*  L o o p                                                                 */
/* ------------------------------------------------------------------------ */

Loop :

    tFor '(' FExpr tDOTS FExpr ')'
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $3;
      LoopControlVariablesTab[ImbricatedLoop][1] = $5;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = (char*)"";
      fgetpos(getdp_yyin, &FposImbricatedLoopsTab[ImbricatedLoop]);
      LinenoImbricatedLoopsTab[ImbricatedLoop] = getdp_yylinenum;
      if($3 > $5)
	skipUntil("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
    }
  | tFor '(' FExpr tDOTS FExpr tDOTS FExpr ')'
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $3;
      LoopControlVariablesTab[ImbricatedLoop][1] = $5;
      LoopControlVariablesTab[ImbricatedLoop][2] = $7;
      LoopControlVariablesNameTab[ImbricatedLoop] = (char*)"";
      fgetpos(getdp_yyin, &FposImbricatedLoopsTab[ImbricatedLoop]);
      LinenoImbricatedLoopsTab[ImbricatedLoop] = getdp_yylinenum;
      if(($7 > 0. && $3 > $5) || ($7 < 0. && $3 < $5))
	skipUntil("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
    }
  | tFor tSTRING tIn '{' FExpr tDOTS FExpr '}'
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $5;
      LoopControlVariablesTab[ImbricatedLoop][1] = $7;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = $2;
      Constant_S.Name = $2;
      Constant_S.Type = VAR_FLOAT;
      Constant_S.Value.Float = $5;
      Tree_Replace(ConstantTable_L, &Constant_S);
      fgetpos(getdp_yyin, &FposImbricatedLoopsTab[ImbricatedLoop]);
      /* hack_fsetpos_printf(); */
      LinenoImbricatedLoopsTab[ImbricatedLoop] = getdp_yylinenum;
      if($5 > $7)
	skipUntil("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
    }
  | tFor tSTRING tIn '{' FExpr tDOTS FExpr tDOTS FExpr '}'
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $5;
      LoopControlVariablesTab[ImbricatedLoop][1] = $7;
      LoopControlVariablesTab[ImbricatedLoop][2] = $9;
      LoopControlVariablesNameTab[ImbricatedLoop] = $2;
      Constant_S.Name = $2;
      Constant_S.Type = VAR_FLOAT;
      Constant_S.Value.Float = $5;
      Tree_Replace(ConstantTable_L, &Constant_S);
      fgetpos(getdp_yyin, &FposImbricatedLoopsTab[ImbricatedLoop]);
      LinenoImbricatedLoopsTab[ImbricatedLoop] = getdp_yylinenum;
      if(($9 > 0. && $5 > $7) || ($9 < 0. && $5 < $7))
	skipUntil("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
    }
  | tEndFor
    {
      if(ImbricatedLoop <= 0){
	vyyerror("Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	double x0 = LoopControlVariablesTab[ImbricatedLoop-1][0];
	double x1 = LoopControlVariablesTab[ImbricatedLoop-1][1];
	double step = LoopControlVariablesTab[ImbricatedLoop-1][2];
	int do_next = (step > 0.) ? (x0+step <= x1) : (x0+step >= x1);
	if(do_next){
	  LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	    LoopControlVariablesTab[ImbricatedLoop-1][2];
	  if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	    Constant_S.Name = LoopControlVariablesNameTab[ImbricatedLoop-1];
	    Constant_S.Type = VAR_FLOAT;
	    Constant_S.Value.Float = LoopControlVariablesTab[ImbricatedLoop-1][0];
	    if(!Tree_Search(ConstantTable_L, &Constant_S))
	      vyyerror("Unknown For/EndFor loop control variable %s", Constant_S.Name);
	    Tree_Replace(ConstantTable_L, &Constant_S);
	  }
	  fsetpos(getdp_yyin, &FposImbricatedLoopsTab[ImbricatedLoop-1]);
	  /* fsetpos() seems to position the file just after the For
	     but with one additional character (the one after EndFor)
	     at the beginning.  I do not understand why there is such
	     a mixing of two separate data. hack_fsetpos() removes the
	     useless additional character. */
	  hack_fsetpos();
	  /* hack_fsetpos_printf(); */
	  getdp_yylinenum = LinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	}
      }
    }

  | tMacro tSTRING
    {
      if(!MacroManager::Instance()->createMacro
         (std::string($2), getdp_yyin, getdp_yyname, getdp_yylinenum + 1))
        vyyerror("Redefinition of macro '%s'", $2);
      skipUntil(NULL, "Return");
      Free($2);
    }
  | tReturn
    {
      if(!MacroManager::Instance()->leaveMacro
         (&getdp_yyin, getdp_yyname, getdp_yylinenum))
	vyyerror("Error while exiting macro");
    }
  | tCall String__Index tEND
    {
      if(!MacroManager::Instance()->enterMacro
         (std::string($2), &getdp_yyin, getdp_yyname, getdp_yylinenum))
	vyyerror("Unknown macro '%s'", $2);
      Free($2);
    }

  | tIf '(' FExpr ')'
    {
      if(!$3) skipUntil("If", "EndIf");
    }
  | tEndIf
    {
    }

  | Affectation
 ;



/* ------------------------------------------------------------------------ */
/*  C o n s t a n t   E x p r e s s i o n s  (FExpr)                        */
/* ------------------------------------------------------------------------ */

Printf :
   tPrintf { $$ = 3; }
 | tMPI_Printf { $$ = -3; }
;

Affectation :

   tDefineConstant '[' DefineConstants ']' tEND

  | tUndefineConstant '[' UndefineConstants ']' tEND

  | tDelete String__Index tEND
   {
     Constant_S.Name = $2;
     // FIXME: leak if constant is list or char; all Tree_Replace functions
     // below also leak; correct fix is to replace all of this with a std::map
     // like in Gmsh
     Tree_Suppress(ConstantTable_L, &Constant_S);
     Free($2);
   }

  | String__Index tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      if(List_Nbr($3) == 1){
	Constant_S.Type = VAR_FLOAT;
	List_Read($3, 0, &Constant_S.Value.Float);
	List_Delete($3);
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT;
	Constant_S.Value.ListOfFloat = $3;
      }
      Tree_Replace(ConstantTable_L, &Constant_S);
    }

  | String__Index '(' ')' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant_S.Type = VAR_LISTOFFLOAT;
      Constant_S.Value.ListOfFloat = $5;
      Tree_Replace(ConstantTable_L, &Constant_S);
    }

  | String__Index '(' RecursiveListOfFExpr ')' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant *c = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
      if(c && (c->Type == VAR_LISTOFFLOAT)){
        if(List_Nbr($3) == List_Nbr($6)){
          for(int i = 0; i < List_Nbr($3); i++){
            double d;
            List_Read($3, i, &d);
            int idx = (int)d;
            if(idx >= 0 && idx < List_Nbr(c->Value.ListOfFloat)){
              double *pd = (double*)List_Pointer(c->Value.ListOfFloat, idx);
              double d2 = *(double*)List_Pointer($6, i);
              *pd = d2;
            }
            else
              vyyerror("Index %d out of range", idx);
          }
        }
        else
          vyyerror("Bad list sizes for affectation %d != %d", List_Nbr($3), List_Nbr($6));
      }
      else
	vyyerror("Unknown list Constant: %s", $1);
      List_Delete($3);
      List_Delete($6);
    }

  | String__Index '(' RecursiveListOfFExpr ')' '+' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant *c = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
      if(c && (c->Type == VAR_LISTOFFLOAT)){
        if(List_Nbr($3) == List_Nbr($7)){
          for(int i = 0; i < List_Nbr($3); i++){
            double d;
            List_Read($3, i, &d);
            int idx = (int)d;
            if(idx >= 0 && idx < List_Nbr(c->Value.ListOfFloat)){
              double *pd = (double*)List_Pointer(c->Value.ListOfFloat, idx);
              double d2 = *(double*)List_Pointer($7, i);
              *pd += d2;
            }
            else
              vyyerror("Index %d out of range", idx);
          }
        }
        else
          vyyerror("Bad list sizes (%d, %d) for += operation", List_Nbr($3), List_Nbr($7));
      }
      else
	vyyerror("Unknown list Constant: %s", $1);
      List_Delete($3);
      List_Delete($7);
    }

  | String__Index '(' RecursiveListOfFExpr ')' '-' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant *c = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
      if(c && (c->Type == VAR_LISTOFFLOAT)){
        if(List_Nbr($3) == List_Nbr($7)){
          for(int i = 0; i < List_Nbr($3); i++){
            double d;
            List_Read($3, i, &d);
            int idx = (int)d;
            if(idx >= 0 && idx < List_Nbr(c->Value.ListOfFloat)){
              double *pd = (double*)List_Pointer(c->Value.ListOfFloat, idx);
              double d2 = *(double*)List_Pointer($7, i);
              *pd -= d2;
            }
            else
              vyyerror("Index %d out of range", idx);
          }
        }
        else
          vyyerror("Bad list sizes (%d, %d) for -= operation", List_Nbr($3), List_Nbr($7));
      }
      else
	vyyerror("Unknown list Constant: %s", $1);
      List_Delete($3);
      List_Delete($7);
    }

  | String__Index '+' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant *c = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
      if(c){
        if(c->Type == VAR_FLOAT && List_Nbr($4) == 1){
          double d;
          List_Read($4, 0, &d);
          c->Value.Float += d;
        }
        else if(c->Type == VAR_LISTOFFLOAT){
          for(int i = 0; i < List_Nbr($4); i++)
            List_Add(c->Value.ListOfFloat, List_Pointer($4, i));
        }
        else
          vyyerror("Cannot append list to float");
      }
      else
	vyyerror("Unknown Constant: %s", $1);
      List_Delete($4);
    }

  | String__Index '(' ')' '+' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant *c = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
      if(c){
        if(c->Type == VAR_LISTOFFLOAT){
          for(int i = 0; i < List_Nbr($6); i++)
            List_Add(c->Value.ListOfFloat, List_Pointer($6, i));
        }
        else
          vyyerror("Cannot append list to float");
      }
      else
	vyyerror("Unknown Constant: %s", $1);
      List_Delete($6);
    }

  | String__Index '-' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant *c = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
      if(c){
        if(c->Type == VAR_FLOAT && List_Nbr($4) == 1){
          double d;
          List_Read($4, 0, &d);
          c->Value.Float -= d;
        }
        else if(c->Type == VAR_LISTOFFLOAT){
          std::vector<double> tmp;
          for(int i = 0; i < List_Nbr(c->Value.ListOfFloat); i++){
            double d;
            List_Read(c->Value.ListOfFloat, i, &d);
            tmp.push_back(d);
          }
          for(int i = 0; i < List_Nbr($4); i++){
            double d;
            List_Read($4, i, &d);
            std::vector<double>::iterator it = std::find(tmp.begin(), tmp.end(), d);
            if(it != tmp.end()) tmp.erase(it);
          }
          List_Reset(c->Value.ListOfFloat);
          for(unsigned int i = 0; i < tmp.size(); i++)
            List_Add(c->Value.ListOfFloat, &tmp[i]);
        }
        else
          vyyerror("Cannot erase list from float");
      }
      else
	vyyerror("Unknown Constant: %s", $1);
      List_Delete($4);
    }

  | String__Index '(' ')' '-' tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1;
      Constant *c = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
      if(c){
        if(c->Type == VAR_LISTOFFLOAT){
          std::vector<double> tmp;
          for(int i = 0; i < List_Nbr(c->Value.ListOfFloat); i++){
            double d;
            List_Read(c->Value.ListOfFloat, i, &d);
            tmp.push_back(d);
          }
          for(int i = 0; i < List_Nbr($6); i++){
            double d;
            List_Read($6, i, &d);
            std::vector<double>::iterator it = std::find(tmp.begin(), tmp.end(), d);
            if(it != tmp.end()) tmp.erase(it);
          }
          List_Reset(c->Value.ListOfFloat);
          for(unsigned int i = 0; i < tmp.size(); i++)
            List_Add(c->Value.ListOfFloat, &tmp[i]);
        }
        else
          vyyerror("Cannot erase list from float");
      }
      else
	vyyerror("Unknown Constant: %s", $1);
      List_Delete($6);
    }

  | String__Index tDEF CharExprNoVar tEND
    {
      Constant_S.Name = $1; Constant_S.Type = VAR_CHAR;
      Constant_S.Value.Char = $3;
      Tree_Replace(ConstantTable_L, &Constant_S);
    }

  | Printf LP CharExprNoVar RP tEND
    {
      Message::Direct($1, $3);
    }

  | Printf String__Index tEND
    {
      Constant_S.Name = $2;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $2);
      else
	if(Constant_S.Type != VAR_LISTOFFLOAT)
          Message::Direct($1, "%s: %g", $2, Constant_S.Value.Float);
	else
          Message::Direct($1, "%s: Dimension %d", $2, List_Nbr(Constant_S.Value.ListOfFloat));
	  for(int i = 0; i < List_Nbr(Constant_S.Value.ListOfFloat); i++) {
	    double d;
	    List_Read(Constant_S.Value.ListOfFloat, i, &d);
            Message::Direct($1, " (%d) %g", i, d);
	  }
    }

  | Printf '#' tEND
    {
      Message::Direct($1, "Line number: %d", getdp_yylinenum);
    }

  | Printf LP CharExprNoVar ',' RecursiveListOfFExpr RP tEND
    {
      char tmpstr[256];
      int i = Print_ListOfDouble($3, $5, tmpstr);
      if(i < 0)
	vyyerror("Too few arguments in Printf");
      else if(i > 0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Message::Direct($1, tmpstr);
      List_Delete($5);
    }

  // deprectated
  | tRead '(' String__Index ')' tEND
    {
      Message::Info("? ");
      char tmpstr[256];
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = $3;
      Constant_S.Type = VAR_FLOAT;
      Tree_Replace(ConstantTable_L, &Constant_S);
    }

  | tRead '[' String__Index ']' tEND
    {
      Message::Info("? ");
      char tmpstr[256];
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = $3;
      Constant_S.Type = VAR_FLOAT;
      Tree_Replace(ConstantTable_L, &Constant_S);
    }

  // deprectated
  | tRead '(' String__Index ')' '[' FExpr ']' tEND
    {
      Message::Info("[<return>=%g] ? ",$6);
      char tmpstr[256];
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = $6;
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = $3;
      Constant_S.Type = VAR_FLOAT;
      Tree_Replace(ConstantTable_L, &Constant_S);
    }

  | tRead '[' String__Index ',' FExpr '}' tEND
    {
      Message::Info("[<return>=%g] ? ",$5);
      char tmpstr[256];
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = $5;
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = $3;
      Constant_S.Type = VAR_FLOAT;
      Tree_Replace(ConstantTable_L, &Constant_S);
    }

  | tPrintConstants tEND
    {
      Print_Constants();
    }
 ;

Enumeration :
    FExpr tDEF CharExpr
    {
      $$ = List_Create(20,20,sizeof(doubleXstring));
      doubleXstring v = {$1, $3};
      List_Add($$, &v);
    }
  | Enumeration ',' FExpr tDEF CharExpr
    {
      doubleXstring v = {$3, $5};
      List_Add($$, &v);
    }
  ;

FloatParameterOptions :
  | FloatParameterOptions FloatParameterOption
 ;

FloatParameterOption :

    ',' tSTRING ListOfFExpr
    {
      std::string key($2);
      for(int i = 0; i < List_Nbr($3); i++){
        double v;
        List_Read($3, i, &v);
        FloatOptions_S[key].push_back(v);
      }
      Free($2);
      List_Delete($3);
    }

  | ',' tSTRING '{' Enumeration '}'
    {
      std::string key($2);
      for(int i = 0; i < List_Nbr($4); i++){
        doubleXstring v;
        List_Read($4, i, &v);
        FloatOptions_S[key].push_back(v.d);
        CharOptions_S[key].push_back(v.s);
      }
      Free($2);
      for(int i = 0; i < List_Nbr($4); i++)
        Free(((doubleXstring*)List_Pointer($4, i))->s);
      List_Delete($4);
    }

  | ',' tSTRING CharExprNoVar
    {
      std::string key($2);
      std::string val($3);
      CharOptions_S[key].push_back(val);
      Free($2);
      Free($3);
    }

  | ',' tName CharExprNoVar
    {
      std::string key("Name");
      std::string val($3);
      CharOptions_S[key].push_back(val);
      Free($3);
    }
 ;

CharParameterOptions :
  | CharParameterOptions CharParameterOption
 ;

CharParameterOption :

    ',' tSTRING FExpr
    {
      std::string key($2);
      double val = $3;
      FloatOptions_S[key].push_back(val);
      Free($2);
    }

  | ',' tSTRING CharExprNoVar
    {
      std::string key($2);
      std::string val($3);
      CharOptions_S[key].push_back(val);
      Free($2);
      Free($3);
    }

  | ',' tName CharExprNoVar // Name is already a reserved GetDP keyword
    {
      std::string key("Name");
      std::string val($3);
      CharOptions_S[key].push_back(val);
      Free($3);
    }

  | ',' tMacro CharExprNoVar // Macro is already a reserved GetDP keyword
    {
      std::string key("Macro");
      std::string val($3);
      CharOptions_S[key].push_back(val);
      Free($3);
    }

  | ',' tSTRING '{' RecursiveListOfCharExpr '}'
    {
      std::string key($2);
      for(int i = 0; i < List_Nbr($4); i++){
        char *s;
        List_Read($4, i, &s);
        std::string val(s);
        Free(s);
        CharOptions_S[key].push_back(val);
      }
      Free($2);
      List_Delete($4);
    }
 ;

DefineConstants :

    /* none */
  | DefineConstants Comma String__Index
    { Constant_S.Name = $3; Constant_S.Type = VAR_FLOAT;
      FloatOptions_S.clear(); CharOptions_S.clear();
      if(!Tree_Search(ConstantTable_L, &Constant_S)){
        Constant_S.Value.Float = 0.;
	Tree_Replace(ConstantTable_L, &Constant_S);
      }
    }
  | DefineConstants Comma String__Index '{' FExpr '}'
    {
      Constant_S.Type = VAR_FLOAT ;
      FloatOptions_S.clear(); CharOptions_S.clear();
      for (int k = 0 ; k < (int)$5 ; k++) {
	char tmpstr[256];
	sprintf(tmpstr, "%s_%d", $3, k+1) ;
	Constant_S.Name = tmpstr ;
	if (!Tree_Search(ConstantTable_L, &Constant_S)) {
	  Constant_S.Name = strSave(tmpstr);
          Constant_S.Value.Float = 0. ;
	  Tree_Replace(ConstantTable_L, &Constant_S) ;
	}
      }
      Free($3) ;
    }
  | DefineConstants Comma String__Index tDEF FExpr
    { Constant_S.Name = $3; Constant_S.Type = VAR_FLOAT;
      if(!Tree_Search(ConstantTable_L, &Constant_S)){
        Constant_S.Value.Float = $5;
	Tree_Replace(ConstantTable_L, &Constant_S);
      }
    }
  | DefineConstants Comma String__Index tDEF '{' ListOfFExpr
    { FloatOptions_S.clear(); CharOptions_S.clear(); }
    FloatParameterOptions '}'
    { Constant_S.Name = $3;
      if(List_Nbr($6) == 1){
        Constant_S.Type = VAR_FLOAT;
        if(!Tree_Search(ConstantTable_L, &Constant_S)){
          double d;
          List_Read($6, 0, &d);
          Constant_S.Value.Float = d;
          Message::ExchangeOnelabParameter(&Constant_S, FloatOptions_S, CharOptions_S);
          Tree_Replace(ConstantTable_L, &Constant_S);
        }
        List_Delete($6);
      }
      else{
        Constant_S.Type = VAR_LISTOFFLOAT;
        if(!Tree_Search(ConstantTable_L, &Constant_S)){
          Constant_S.Value.ListOfFloat = $6;
          Tree_Replace(ConstantTable_L, &Constant_S);
        }
      }
    }
  | DefineConstants Comma String__Index tDEF CharExprNoVar
    { Constant_S.Name = $3; Constant_S.Type = VAR_CHAR;
      if(!Tree_Search(ConstantTable_L, &Constant_S)){
        Constant_S.Value.Char = $5;
	Tree_Replace(ConstantTable_L, &Constant_S);
      }
    }
  | DefineConstants Comma String__Index tDEF '{' CharExprNoVar
    { FloatOptions_S.clear(); CharOptions_S.clear(); }
    CharParameterOptions '}'
    { Constant_S.Name = $3; Constant_S.Type = VAR_CHAR;
      if(!Tree_Search(ConstantTable_L, &Constant_S)){
        Constant_S.Value.Char = $6;
        Message::ExchangeOnelabParameter(&Constant_S, FloatOptions_S, CharOptions_S);
	Tree_Replace(ConstantTable_L, &Constant_S);
      }
    }
 ;

UndefineConstants :

    /* none */
  | UndefineConstants Comma CharExprNoVar
    {
      // undefine the onelab parameter
      std::string name($3);
      Message::UndefineOnelabParameter(name);
      Free($3);
    }

  | UndefineConstants Comma String__Index
    {
      // undefine the onelab parameter and the getdp constant
      std::string name($3);
      Message::UndefineOnelabParameter(name);
      Constant_S.Name = $3;
      Tree_Suppress(ConstantTable_L, &Constant_S);
      Free($3);
    }


/* Ce bricolage affreux (?) est necessaire pour permettre la meme
   syntaxe dans les expressions constantes et dans les whole_expressions */

NameForMathFunction :
    tExp     { $$ = (char*)"Exp";    }
  | tLog     { $$ = (char*)"Log";    }
  | tLog10   { $$ = (char*)"Log10";  }
  | tSqrt    { $$ = (char*)"Sqrt";   }
  | tSin     { $$ = (char*)"Sin";    }
  | tAsin    { $$ = (char*)"Asin";   }
  | tCos     { $$ = (char*)"Cos";    }
  | tAcos    { $$ = (char*)"Acos";   }
  | tTan     { $$ = (char*)"Tan";    }
  | tAtan    { $$ = (char*)"Atan";   }
  | tAtan2   { $$ = (char*)"Atan2";  }
  | tSinh    { $$ = (char*)"Sinh";   }
  | tCosh    { $$ = (char*)"Cosh";   }
  | tTanh    { $$ = (char*)"Tanh";   }
  | tFabs    { $$ = (char*)"Fabs";   }
  | tFloor   { $$ = (char*)"Floor";  }
  | tCeil    { $$ = (char*)"Ceil";   }
  | tRound   { $$ = (char*)"Round";  }
  | tSign    { $$ = (char*)"Sign";   }
  | tFmod    { $$ = (char*)"Fmod";   }
  | tModulo  { $$ = (char*)"Modulo"; }
  | tHypot   { $$ = (char*)"Hypot";  }
  | tRand    { $$ = (char*)"Rand";   }
 ;

NameForFunction :
    NameForMathFunction { $$ = $1; }
  | String__Index       { $$ = $1; }
 ;

FExpr :
    OneFExpr                         { $$ = $1;          }
  | '(' FExpr ')'                    { $$ = $2;          }
  | '-' FExpr %prec UNARYPREC        { $$ = -$2;         }
  | '!' FExpr                        { $$ = !$2;         }
  | FExpr '-' FExpr                  { $$ = $1 - $3;     }
  | FExpr '+' FExpr                  { $$ = $1 + $3;     }
  | FExpr '*' FExpr                  { $$ = $1 * $3;     }
  | FExpr '|' FExpr                  { $$ = (int)$1 | (int)$3;     }
  | FExpr '&' FExpr                  { $$ = (int)$1 & (int)$3;     }
  | FExpr '/' FExpr                  { $$ = $1 / $3;     }
  | FExpr '%' FExpr                  { $$ = (int)$1 % (int)$3;  }
  | FExpr '^' FExpr                  { $$ = pow($1,$3);  }
  | FExpr '<' FExpr                  { $$ = $1 < $3;     }
  | FExpr '>' FExpr                  { $$ = $1 > $3;     }
  | FExpr tLESSOREQUAL FExpr         { $$ = $1 <= $3;    }
  | FExpr tGREATEROREQUAL FExpr      { $$ = $1 >= $3;    }
  | FExpr tEQUAL FExpr               { $$ = $1 == $3;    }
  | FExpr tNOTEQUAL FExpr            { $$ = $1 != $3;    }
  | FExpr tAND FExpr                 { $$ = $1 && $3;    }
  | FExpr tOR FExpr                  { $$ = $1 || $3;    }
  | tExp    '[' FExpr ']'            { $$ = exp($3);      }
  | tLog    '[' FExpr ']'            { $$ = log($3);      }
  | tLog10  '[' FExpr ']'            { $$ = log10($3);    }
  | tSqrt   '[' FExpr ']'            { $$ = sqrt($3);     }
  | tSin    '[' FExpr ']'            { $$ = sin($3);      }
  | tAsin   '[' FExpr ']'            { $$ = asin($3);     }
  | tCos    '[' FExpr ']'            { $$ = cos($3);      }
  | tAcos   '[' FExpr ']'            { $$ = acos($3);     }
  | tTan    '[' FExpr ']'            { $$ = tan($3);      }
  | tAtan   '[' FExpr ']'            { $$ = atan($3);     }
  | tAtan2  '[' FExpr ',' FExpr ']'  { $$ = atan2($3,$5); }
  | tSinh   '[' FExpr ']'            { $$ = sinh($3);     }
  | tCosh   '[' FExpr ']'            { $$ = cosh($3);     }
  | tTanh   '[' FExpr ']'            { $$ = tanh($3);     }
  | tFabs   '[' FExpr ']'            { $$ = fabs($3);     }
  | tFloor  '[' FExpr ']'            { $$ = floor($3);    }
  | tCeil   '[' FExpr ']'            { $$ = ceil($3);     }
  | tRound  '[' FExpr ']'            { $$ = floor($3 + 0.5);    }
  | tSign   '[' FExpr ']'            { $$ = (($3 > 0.) ? 1. : ($3 < 0.) ? -1. : 0.); }
  | tFmod   '[' FExpr ',' FExpr ']'  { $$ = fmod($3,$5);  }
  | tModulo '[' FExpr ',' FExpr ']'  { $$ = fmod($3,$5);  }
  | tHypot  '[' FExpr ',' FExpr ']'  { $$ = sqrt($3*$3+$5*$5);  }
  | tRand   '[' FExpr ']'  { $$ = $3 * (double)rand() / (double)RAND_MAX;  }

  | FExpr '?' FExpr tDOTS FExpr      { $$ = $1? $3 : $5; }

  | StrCmp                           { $$ = $1; }

  | NbrRegions                       { $$ = $1; }

  | FExpr '#' { Message::Direct("Value (line %ld) --> %.16g", getdp_yylinenum, $1); }
 ;

OneFExpr :

    tFLOAT    { $$ = $1; }
  | tINT      { $$ = (double)$1; }
  | tPi       { $$ = 3.1415926535897932; }
  | t0D       { $$ = (double)_0D; }
  | t1D       { $$ = (double)_1D; }
  | t2D       { $$ = (double)_2D; }
  | t3D       { $$ = (double)_3D; }
  | tMPI_Rank { $$ = Message::GetCommRank(); }
  | tMPI_Size { $$ = Message::GetCommSize(); }
  | tGETDP_MAJOR_VERSION { $$ = GETDP_MAJOR_VERSION; }
  | tGETDP_MINOR_VERSION { $$ = GETDP_MINOR_VERSION; }
  | tGETDP_PATCH_VERSION { $$ = GETDP_PATCH_VERSION; }
  | tTotalMemory { $$ = GetTotalRam(); }

  | tDefineNumber '[' FExpr
    { FloatOptions_S.clear(); CharOptions_S.clear(); }
    FloatParameterOptions ']'
    {
      Constant_S.Name = (char*)""; Constant_S.Type = VAR_FLOAT;
      Constant_S.Value.Float = $3;
      Message::ExchangeOnelabParameter(&Constant_S, FloatOptions_S, CharOptions_S);
      $$ = Constant_S.Value.Float;
    }
  | String__Index
    {
      Constant_S.Name = $1;
      if(!Tree_Query(ConstantTable_L, &Constant_S)) {
	vyyerror("Unknown Constant: %s", $1);  $$ = 0.;
      }
      else  {
	if(Constant_S.Type == VAR_FLOAT)
	  $$ = Constant_S.Value.Float;
	else {
	  vyyerror("Single value Constant needed: %s", $1);  $$ = 0.;
	}
      }
      Free($1);
    }
  | '#' tSTRING '(' ')'
    {
      Constant_S.Name = $2;
      int ret = 0;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $2);
      else{
	if(Constant_S.Type == VAR_LISTOFFLOAT)
          ret = List_Nbr(Constant_S.Value.ListOfFloat);
	else if(Constant_S.Type == VAR_FLOAT)
          ret = 1;
        else
          vyyerror("Float Constant needed: %s", $2);
      }
      $$ = ret;
      Free($2);
    }
  | tSTRING '(' FExpr ')'
    {
      Constant_S.Name = $1;
      double ret = 0.;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $1);
      else{
	if(Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", $1);
	else{
          int j = (int)$3;
          if(j >= 0 && j < List_Nbr(Constant_S.Value.ListOfFloat))
            List_Read(Constant_S.Value.ListOfFloat, j, &ret);
          else
            vyyerror("Index %d out of range", j);
        }
      }
      $$ = ret;
      Free($1);
    }
 ;

ListOfFExpr :

    /* none */
    { $$ = NULL; }

  | '{' '}'
    { $$ = List_Create(1,1,sizeof(double)); }

  | FExpr
    {
      $$ = List_Create(1,1,sizeof(double));
      List_Add($$, &($1));
    }

  | MultiFExpr
    { $$ = $1; }

  | '{' RecursiveListOfFExpr '}'
    { $$ = $2; }

  | '-' '{' RecursiveListOfFExpr '}'
    {
      $$ = $3;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	(*pd) = - (*pd);
      }
    }

  | FExpr '*' '{' RecursiveListOfFExpr '}'
    {
      $$ = $4;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	(*pd) *= $1;
      }
    }
;


RecursiveListOfFExpr :

    FExpr
    {
      $$ = List_Create(20,20,sizeof(double));
      List_Add($$, &($1));
    }

  | MultiFExpr
    { $$ = $1; }

  | RecursiveListOfFExpr ',' FExpr
    { List_Add($$, &($3)); }

  | RecursiveListOfFExpr ',' MultiFExpr
    {
      for(int i = 0; i < List_Nbr($3); i++){
	double d;
	List_Read($3, i, &d);
	List_Add($$, &d);
      }
      List_Delete($3);
    }
 ;

MultiFExpr :

    '-' MultiFExpr %prec UNARYPREC
    {
      $$ = $2;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	*pd *= -1.0;
      }
    }

  | FExpr '*' MultiFExpr
    {
      $$ = $3;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	*pd *= $1;
      }
    }

  | MultiFExpr '*' FExpr
    {
      $$ = $1;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	*pd *= $3;
      }
    }

  | FExpr '/' MultiFExpr
    {
      $$ = $3;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	if(*pd) *pd = $1 / *pd;
      }
    }

  | MultiFExpr '/' FExpr
    {
      $$ = $1;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	if($3) *pd /= $3;
      }
    }

  | MultiFExpr '^' FExpr
    {
      $$ = $1;
      for(int i = 0; i < List_Nbr($$); i++){
	double *pd = (double*)List_Pointer($$, i);
	*pd = pow(*pd, $3);
      }
    }

  | MultiFExpr '+' MultiFExpr
    {
      $$ = $1;
      if(List_Nbr($$) == List_Nbr($3)){
        for(int i = 0; i < List_Nbr($$); i++){
          double *pd = (double*)List_Pointer($$, i);
          double d = *(double*)List_Pointer($3, i);
          *pd += d;
        }
      }
      else
        vyyerror("Wrong list sizes %d != %d", List_Nbr($$), List_Nbr($3));
      List_Delete($3);
    }

  | MultiFExpr '-' MultiFExpr
    {
      $$ = $1;
      if(List_Nbr($$) == List_Nbr($3)){
        for(int i = 0; i < List_Nbr($$); i++){
          double *pd = (double*)List_Pointer($$, i);
          double d = *(double*)List_Pointer($3, i);
          *pd -= d;
        }
      }
      else
        vyyerror("Wrong list sizes %d != %d", List_Nbr($$), List_Nbr($3));
      List_Delete($3);
    }

  | MultiFExpr '*' MultiFExpr
    {
      $$ = $1;
      if(List_Nbr($$) == List_Nbr($3)){
        for(int i = 0; i < List_Nbr($$); i++){
          double *pd = (double*)List_Pointer($$, i);
          double d = *(double*)List_Pointer($3, i);
          *pd *= d;
        }
      }
      else
        vyyerror("Wrong list sizes %d != %d", List_Nbr($$), List_Nbr($3));
      List_Delete($3);
    }

  | MultiFExpr '/' MultiFExpr
    {
      $$ = $1;
      if(List_Nbr($$) == List_Nbr($3)){
        for(int i = 0; i < List_Nbr($$); i++){
          double *pd = (double*)List_Pointer($$, i);
          double d = *(double*)List_Pointer($3, i);
          if(d) *pd /= d;
        }
      }
      else
        vyyerror("Wrong list sizes %d != %d", List_Nbr($$), List_Nbr($3));
      List_Delete($3);
    }

  | FExpr tDOTS FExpr
    {
      $$ = List_Create(20,20,sizeof(double));
      for(double d = $1; ($1 < $3) ? (d <= $3) : (d >= $3);
	  ($1 < $3) ? (d += 1.) : (d -= 1.))
	List_Add($$, &d);
    }

  | FExpr tDOTS FExpr tDOTS FExpr
    {
      $$ = List_Create(20,20,sizeof(double));
      if(!$5 || ($1<$3 && $5<0) || ($1>$3 && $5>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", $1, $3, $5);
	List_Add($$, &($1));
      }
      else
	for(double d = $1; ($5 > 0) ? (d <= $3) : (d >= $3); d += $5)
	  List_Add($$, &d);
    }

  | tSTRING '(' ')'
    {
      $$ = List_Create(20,20,sizeof(double));
      Constant_S.Name = $1;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $1);
      else
	if(Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1); */
	  List_Add($$, &Constant_S.Value.Float);
	else
	  for(int i = 0; i < List_Nbr(Constant_S.Value.ListOfFloat); i++) {
	    double d;
	    List_Read(Constant_S.Value.ListOfFloat, i, &d);
	    List_Add($$, &d);
	  }
    }

  | StringIndex '(' ')'
    {
      $$ = List_Create(20,20,sizeof(double));
      Constant_S.Name = $1;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $1);
      else
	if(Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1); */
	  List_Add($$, &Constant_S.Value.Float);
	else
	  for(int i = 0; i < List_Nbr(Constant_S.Value.ListOfFloat); i++) {
	    double d;
	    List_Read(Constant_S.Value.ListOfFloat, i, &d);
	    List_Add($$, &d);
	  }
    }

  // deprecated
  | tSTRING '{' '}'
    {
      $$ = List_Create(20,20,sizeof(double));
      Constant_S.Name = $1;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $1);
      else
	if(Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1); */
	  List_Add($$, &Constant_S.Value.Float);
	else
	  for(int i = 0; i < List_Nbr(Constant_S.Value.ListOfFloat); i++) {
	    double d;
	    List_Read(Constant_S.Value.ListOfFloat, i, &d);
	    List_Add($$, &d);
	  }
    }

  | tSTRING '(' '{' RecursiveListOfFExpr '}' ')'
    {
      $$ = List_Create(20,20,sizeof(double));
      Constant_S.Name = $1;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $1);
      else
	if(Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", $1);
	else
	  for(int i = 0; i < List_Nbr($4); i++) {
            int j = (int)(*(double*)List_Pointer($4, i));
	    if(j >= 0 && j < List_Nbr(Constant_S.Value.ListOfFloat)){
	      double d;
	      List_Read(Constant_S.Value.ListOfFloat, j, &d);
	      List_Add($$, &d);
	    }
	    else{
              vyyerror("Index %d out of range", j);
	      double d = 0.;
	      List_Add($$, &d);
	    }
	  }
      List_Delete($4);
    }

  | StringIndex '(' '{' RecursiveListOfFExpr '}' ')'
    {
      $$ = List_Create(20,20,sizeof(double));
      Constant_S.Name = $1;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $1);
      else
	if(Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", $1);
	else
	  for(int i = 0; i < List_Nbr($4); i++) {
            int j = (int)(*(double*)List_Pointer($4, i));
	    if(j >= 0 && j < List_Nbr(Constant_S.Value.ListOfFloat)){
	      double d;
	      List_Read(Constant_S.Value.ListOfFloat, j, &d);
	      List_Add($$, &d);
	    }
	    else{
              vyyerror("Index %d out of range", j);
	      double d = 0.;
	      List_Add($$, &d);
	    }
	  }
      List_Delete($4);
    }

  // same as tSTRING '(' ')'
  | tList '[' String__Index ']'
    {
      $$ = List_Create(20,20,sizeof(double));
      Constant_S.Name = $3;
      if(!Tree_Query(ConstantTable_L, &Constant_S))
	vyyerror("Unknown Constant: %s", $3);
      else
	if(Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", $3);
	else
	  for(int i = 0; i < List_Nbr(Constant_S.Value.ListOfFloat); i++) {
	    double d;
	    List_Read(Constant_S.Value.ListOfFloat, i, &d);
	    List_Add($$, &d);
	  }
    }

  | tListAlt '[' tSTRING ',' tSTRING ']'
    {
      $$ = List_Create(20,20,sizeof(double));
      Constant1_S.Name = $3; Constant2_S.Name = $5;
      if(!Tree_Query(ConstantTable_L, &Constant1_S)) {
	vyyerror("Unknown Constant: %s", $3);
      }
      else
	if(Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", $3);
	}
	else {
	  if(!Tree_Query(ConstantTable_L, &Constant2_S)) {
	    vyyerror("Unknown Constant: %s", $5);
	  }
	  else
	    if(Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", $5);
	    }
	    else {
	      if(List_Nbr(Constant1_S.Value.ListOfFloat) !=
                 List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 $3, List_Nbr(Constant1_S.Value.ListOfFloat),
			 $5, List_Nbr(Constant2_S.Value.ListOfFloat));
	      }
	      else {
		for(int i = 0; i < List_Nbr(Constant1_S.Value.ListOfFloat); i++) {
		  double d;
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d);
		  List_Add($$, &d);
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d);
		  List_Add($$, &d);
		}
	      }
	    }
	}
      Free($3); Free($5);
    }

  | tListAlt '[' MultiFExpr ',' MultiFExpr ']'
    {
      $$ = List_Create(20,20,sizeof(double));
      if(List_Nbr($3) != List_Nbr($5)) {
        vyyerror("Different dimensions of lists: %d != %d",
                 List_Nbr($3), List_Nbr($5));
      }
      else {
        for(int i = 0; i < List_Nbr($3); i++) {
          double d;
          List_Read($3, i, &d);
          List_Add($$, &d);
          List_Read($5, i, &d);
          List_Add($$, &d);
        }
      }
      List_Delete($3);
      List_Delete($5);
    }

  | tLinSpace '[' FExpr ',' FExpr ',' FExpr ']'
    {
      $$ = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)$7; i++) {
	double d = $3 + ($5-$3)*(double)i/($7-1);
	List_Add($$, &d);
      }
    }

  | tLogSpace '[' FExpr ',' FExpr ',' FExpr ']'
    {
      $$ = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)$7; i++) {
	double d = pow(10,$3 + ($5-$3)*(double)i/($7-1));
	List_Add($$, &d);
      }
    }

  | tListFromFile '[' CharExpr ']'
    {
      Message::Barrier();
      FILE *File;
      if(!(File = FOpen(Fix_RelativePath($3).c_str(), "rb"))){
        Message::Warning("Could not open file '%s'", $3);
      }
      else{
	$$ = List_Create(100,100,sizeof(double));
	double d;
	while(!feof(File))
	  if(fscanf(File, "%lf", &d) != EOF)
	    List_Add($$, &d);
	fclose(File);
      }
      Free($3);
    }
 ;

StringIndex :

    tSTRING '~' '{' FExpr '}'
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)$4);
      $$ = (char *)Malloc((strlen($1)+strlen(tmpstr)+1)*sizeof(char));
      strcpy($$, $1); strcat($$, tmpstr);
      Free($1);
    }

  | StringIndex '~' '{' FExpr '}'
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)$4);
      $$ = (char *)Malloc((strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy($$, $1) ; strcat($$, tmpstr) ;
      Free($1);
    }

 ;

String__Index :

    tSTRING
    { $$ = $1; }

  | StringIndex
    { $$ = $1; }

 ;

CharExprNoVar :
    tBIGSTR
    { $$ = $1; }

  | StrCat
    {
      $$ = $1;
    }

  | tStr '[' RecursiveListOfCharExpr ']'
    {
      int size = 1;
      for(int i = 0; i < List_Nbr($3); i++){
        char *s;
        List_Read($3, i, &s);
        size += strlen(s) + 1;
      }
      $$ = (char*)Malloc(size * sizeof(char));
      $$[0] = '\0';
      for(int i = 0; i < List_Nbr($3); i++){
        char *s;
        List_Read($3, i, &s);
        strcat($$, s);
        Free(s);//FIXME
        if(i != List_Nbr($3) - 1) strcat($$, "\n");
      }
      List_Delete($3);
    }

  | tStrChoice LP FExpr ',' CharExpr ',' CharExpr RP
    {
      if($3){
        $$ = $5;
        Free($7);
      }
      else{
        $$ = $7;
        Free($5);
      }
    }

  | tSprintf LP CharExpr RP
    {
      $$ = $3;
    }

  | tSprintf LP CharExpr ',' RecursiveListOfFExpr RP
    {
      char tmpstr[256];
      int i = Print_ListOfDouble($3,$5,tmpstr);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	$$ = $3;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	$$ = $3;
      }
      else{
	$$ = (char*)Malloc((strlen(tmpstr)+1)*sizeof(char));
	strcpy($$, tmpstr);
	Free($3);
      }
      List_Delete($5);
    }

  | tDate
    {
      time_t date_info;
      time(&date_info);
      $$ = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char));
      strcpy($$, ctime(&date_info));
      $$[strlen($$)-1] = 0;
    }

  | tOnelabAction
    {
      std::string action = Message::GetOnelabAction();
      $$ = (char *)Malloc(action.size() + 1);
      strcpy($$, action.c_str());
    }

  | tCurrentDirectory
    {
      std::string tmp = GetDir(getdp_yyname);
      $$ = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy($$, tmp.c_str());
    }

  | tFixRelativePath LP CharExpr RP
    {
      $$ = strSave(Fix_RelativePath($3).c_str());
      Free($3);
    }

  | tDefineString '[' CharExprNoVar
    { FloatOptions_S.clear(); CharOptions_S.clear(); }
    CharParameterOptions ']'
    {
      Constant_S.Name = (char*)""; Constant_S.Type = VAR_CHAR;
      Constant_S.Value.Char = $3;
      Message::ExchangeOnelabParameter(&Constant_S, FloatOptions_S, CharOptions_S);
      $$ = strSave(Constant_S.Value.Char);
      Free($3);
    }
 ;

CharExpr :

    CharExprNoVar
    { $$ = $1; }

  | String__Index
    {
      Constant_S.Name = $1;
      if(!Tree_Query(ConstantTable_L, &Constant_S)) {
	vyyerror("Unknown Constant: %s", $1);  $$ = NULL;
      }
      else  {
	if(Constant_S.Type == VAR_CHAR)
	  $$ = strSave(Constant_S.Value.Char);
	else {
	  vyyerror("String Constant needed: %s", $1);  $$ = NULL;
	}
      }
      Free($1);
    }
 ;

RecursiveListOfCharExpr :

    CharExpr
    {
      $$ = List_Create(20,20,sizeof(char*));
      List_Add($$, &($1));
    }
  | RecursiveListOfCharExpr ',' CharExpr
    { List_Add($$, &($3)); }
 ;

// these are for compatibility with the syntax in Gmsh (parentheses instead of
// square brackets)

LP : '(' { $$ = (char*)"("; } | '[' { $$ = (char*)"["; } ;
RP : ')' { $$ = (char*)")"; } | ']' { $$ = (char*)"]"; } ;

StrCat :

    tStrCat LP RecursiveListOfCharExpr RP
    {
      int size = 1;
      for(int i = 0; i < List_Nbr($3); i++){
        char *s;
        List_Read($3, i, &s);
        size += strlen(s) + 1;
      }
      $$ = (char*)Malloc(size * sizeof(char));
      $$[0] = '\0';
      for(int i = 0; i < List_Nbr($3); i++){
        char *s;
        List_Read($3, i, &s);
        strcat($$, s);
        Free(s);
      }
      List_Delete($3);
    }
 ;

StrCmp :

    tStrCmp LP CharExpr ',' CharExpr RP
    {
      if ($3 != NULL && $5 != NULL) {
	$$ = strcmp($3, $5);
      }
      else {
	vyyerror("Undefined argument for StrCmp function") ;  $$ = 1 ;
      }
    }
  ;

NbrRegions :

    tNbrRegions '[' String__Index ']'
    {
      int i;
      if ( (i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) >= 0 ) {
	$$ = List_Nbr(((struct Group *)List_Pointer(Problem_S.Group, i))
		      ->InitialList) ;
      }
      else {
	vyyerror("Unknown Group: %s", $3) ;  $$ = 0 ;
      }
    }
    | tGetRegion '[' String__Index ',' FExpr ']'
    {
      int i, j, indexInGroup;
      indexInGroup = (int)$5;
      if ( (i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) >= 0 ) {
        if (indexInGroup >= 1 &&
            indexInGroup <= List_Nbr(((struct Group *)List_Pointer(Problem_S.Group, i))
                                     ->InitialList)) {
          List_Read(((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList,
                    indexInGroup-1, &j) ;
          $$ = j;
        }
        else {
          vyyerror("GetRegion: Index out of range [1..%d]",
                   List_Nbr(((struct Group *)List_Pointer(Problem_S.Group, i))
                            ->InitialList)) ;
          $$ = 0 ;
        }
      }
      else {
	vyyerror("Unknown Group: %s", $3) ;  $$ = 0 ;
      }
    }
  ;

%%

// This is a hack... Bison redefines 'const' if !__cplusplus and !__STDC__
#ifdef const
#undef const
#endif

void Alloc_ParserVariables()
{
  if(!ConstantTable_L) {
    ConstantTable_L = Tree_Create(sizeof(struct Constant), fcmp_Constant);
    for(std::map<std::string, std::vector<double> >::iterator it =
          CommandLineNumbers.begin(); it != CommandLineNumbers.end(); it++){
      std::vector<double> &v(it->second);
      Constant_S.Name = strdup(it->first.c_str());
      if(v.size() == 1){
        Message::Info("Adding number %s = %g", it->first.c_str(), v[0]);
        Constant_S.Type = VAR_FLOAT;
        Constant_S.Value.Float = v[0];
      }
      else{
        Message::Info("Adding list of numbers %s", it->first.c_str());
        Constant_S.Type = VAR_LISTOFFLOAT;
        Constant_S.Value.ListOfFloat = List_Create(v.size(), 1, sizeof(double));
        for(unsigned int i = 0; i < v.size(); i ++)
          List_Add(Constant_S.Value.ListOfFloat, &v[i]);
      }
      Tree_Add(ConstantTable_L, &Constant_S);
    }
    for(std::map<std::string, std::string>::iterator it = CommandLineStrings.begin();
        it != CommandLineStrings.end(); it++){
      Message::Info("Adding string %s = \"%s\"", it->first.c_str(), it->second.c_str());
      Constant_S.Name = strdup(it->first.c_str());
      Constant_S.Type = VAR_CHAR;
      Constant_S.Value.Char = strdup(it->second.c_str());
      Tree_Add(ConstantTable_L, &Constant_S);
    }
    ListOfInt_L     = List_Create(20, 10, sizeof(int));
    ListOfPointer_L = List_Create(10, 10, sizeof(void *));
    ListOfPointer2_L= List_Create(10, 10, sizeof(void *));
    ListOfChar_L    = List_Create(128, 128, sizeof(char));
    ListOfFormulation   = List_Create(5,5, sizeof(int));
    ListOfBasisFunction = List_Create(5,5, sizeof(List_T *));
    ListOfEntityIndex   = List_Create(5,5, sizeof(int));
  }
}

void Free_ParserVariables()
{
  Tree_Delete(ConstantTable_L); ConstantTable_L = 0;
  List_Delete(ListOfInt_L); ListOfInt_L = 0;
  List_Delete(ListOfPointer_L); ListOfPointer_L = 0;
  List_Delete(ListOfPointer2_L); ListOfPointer2_L = 0;
  List_Delete(ListOfChar_L); ListOfChar_L = 0;
  List_Delete(ListOfFormulation); ListOfFormulation = 0;
  List_Delete(ListOfBasisFunction); ListOfBasisFunction = 0;
  List_Delete(ListOfEntityIndex); ListOfEntityIndex = 0;
  getdp_yyname = "";
  strcpy(getdp_yyincludename, "");
  getdp_yylinenum = 0;
  getdp_yycolnum = 0;
  getdp_yyincludenum = 0;
  getdp_yyerrorlevel = 0;
  CommandLineNumbers.clear();
  CommandLineStrings.clear();
}

/*  A d d _ G r o u p   &   C o .  */

int  Add_Group(struct Group *Group_P, char *Name, bool Flag_Add,
               int Flag_Plus, int Num_Index)
{
  if(!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group));

  char tmpstr[256];
  switch (Flag_Plus) {
  case 1 :
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Group));
    Group_P->Name = strSave(tmpstr);
    break;
  case 2 :
    sprintf(tmpstr, "%s_%d", Name, Num_Index);
    Group_P->Name = strSave(tmpstr);
    break;
  default :
    Group_P->Name = Name;
  }

  int i;
  if((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group);
    Group_P->ExtendedList = NULL;  Group_P->ExtendedSuppList = NULL;
    List_Add(Problem_S.Group, Group_P);
  }
  else if(Flag_Add) {
    List_T *InitialList = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList;
    for(int j = 0; j < List_Nbr(Group_P->InitialList); j++) {
      List_Add(InitialList, (int *)List_Pointer(Group_P->InitialList, j));
    }
  }
  else  List_Write(Problem_S.Group, i, Group_P);

  return i;
}

int  Num_Group(struct Group *Group_P, char *Name, int Num_Group)
{
  if     (Num_Group >= 0)   /* OK */;
  else if(Num_Group == -1)  Num_Group = Add_Group(Group_P, Name, false, 1, 0);
  else                      vyyerror("Bad Group right hand side");

  return Num_Group;
}

void Fill_GroupInitialListFromString(List_T *list, const char *str)
{
  bool found = false;

  // try to find a group with name "str"
  for(int i = 0; i < List_Nbr(Problem_S.Group); i++){
    struct Group *Group_P = (struct Group*)List_Pointer(Problem_S.Group, i);
    if(!strcmp(str, Group_P->Name)){
      List_Copy(Group_P->InitialList, list);
      found = true;
      break;
    }
  }

  // try to find a constant with name "str"
  Constant_S.Name = (char*)str;
  Constant *Constant_P = (Constant*)Tree_PQuery(ConstantTable_L, &Constant_S);
  if(Constant_P){
    switch(Constant_P->Type){
    case VAR_FLOAT:
      {
        int num = (int)Constant_P->Value.Float;
        List_Add(list, &num);
      }
      found = true;
      break;
    case VAR_LISTOFFLOAT:
      for(int j = 0; j < List_Nbr(Constant_P->Value.ListOfFloat); j++){
        double d;
        List_Read(Constant_P->Value.ListOfFloat, j, &d);
        int num = (int)d;
        List_Add(list, &num);
      }
      found = true;
      break;
    }
  }

  // if not, try to convert "str" to an integer
  if(!found){
    int num = atoi(str);
    if(num > 0){
      List_Add(list, &num);
      found = true;
    }
  }

  if(!found) vyyerror("Unknown Group '%s'", str);
}

/*  A d d _ E x p r e s s i o n   */

int  Add_Expression(struct Expression *Expression_P,
		    char *Name, int Flag_Plus)
{
  if(!Problem_S.Expression)
    Problem_S.Expression = List_Create(50, 50, sizeof (struct Expression));

  switch (Flag_Plus) {
  case 1 :
    char tmpstr[256];
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strSave(tmpstr) ;
    break ;
  case 2 :
    Expression_P->Name = strSave(Name) ;
    break ;
  default :
    Expression_P->Name = Name ;
  }

  int  i;
  if((i = List_ISearchSeq
       (Problem_S.Expression, Name, fcmp_Expression_Name)) < 0) {
    i = List_Nbr(Problem_S.Expression);
    List_Add(Problem_S.Expression, Expression_P);
  }
  else  List_Write(Problem_S.Expression, i, Expression_P);

  return i;
}

bool Is_ExpressionPieceWiseDefined(int index)
{
  struct Expression *e = (struct Expression *)List_Pointer(Problem_S.Expression, index);
  if(e->Type == PIECEWISEFUNCTION)
    return true;
  else if(e->Type == WHOLEQUANTITY){
    for(int i = 0; i < List_Nbr(e->Case.WholeQuantity); i++){
      struct WholeQuantity *w = (struct WholeQuantity *)List_Pointer(e->Case.WholeQuantity, i);
      if(w->Type == WQ_EXPRESSION)
        return Is_ExpressionPieceWiseDefined(w->Case.Expression.Index);
    }
  }
  return false;
}

/*  L i s t e   I n d e x   d e s   D e f i n e Q u a n t i t y  */

void  Pro_DefineQuantityIndex_1(List_T *WholeQuantity_L, int TraceGroupIndex,
                                std::vector<std::pair<int, int> > &pairs)
{
  struct WholeQuantity *WholeQuantity_P;

  WholeQuantity_P = (List_Nbr(WholeQuantity_L) > 0)?
    (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) : NULL;

  for(int i = 0; i < List_Nbr(WholeQuantity_L); i++)
    switch ((WholeQuantity_P+i)->Type) {
    case WQ_OPERATORANDQUANTITY :
    case WQ_OPERATORANDQUANTITYEVAL :
    case WQ_SOLIDANGLE :
    case WQ_ORDER :
      {
        std::pair<int, int> p((WholeQuantity_P+i)->Case.OperatorAndQuantity.Index,
                              TraceGroupIndex);
        if(std::find(pairs.begin(), pairs.end(), p) == pairs.end())
          pairs.push_back(p);
      }
      break;
    case WQ_MHTRANSFORM  :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.MHTransform.WholeQuantity, TraceGroupIndex, pairs);
    case WQ_TIMEDERIVATIVE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.TimeDerivative.WholeQuantity, TraceGroupIndex, pairs);
      break;
    case WQ_ATANTERIORTIMESTEP :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.AtAnteriorTimeStep.WholeQuantity, TraceGroupIndex, pairs);
      break;
    case WQ_MAXOVERTIME :
    case WQ_FOURIERSTEINMETZ :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.AtAnteriorTimeStep.WholeQuantity, TraceGroupIndex, pairs);
      break;
    case WQ_CAST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Cast.WholeQuantity, TraceGroupIndex, pairs);
      break;
    case WQ_TRACE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Trace.WholeQuantity,
	 (WholeQuantity_P+i)->Case.Trace.InIndex, pairs);
      break;
    case WQ_TEST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_True, TraceGroupIndex, pairs);
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_False, TraceGroupIndex, pairs);
      break;
    }
  std::sort(pairs.begin(), pairs.end());
}

void  Pro_DefineQuantityIndex(List_T *WholeQuantity_L,
			      int DefineQuantityIndexEqu,
			      int *NbrQuantityIndex, int **QuantityIndexTable,
			      int **QuantityTraceGroupIndexTable)
{
  std::vector<std::pair<int, int> > pairs;

  /* special case for the Equ part (right of the comma)
     FIXME: change this when we allow a full WholeQuantity expression
     there */
  Pro_DefineQuantityIndex_1(WholeQuantity_L, -1, pairs);

  if(DefineQuantityIndexEqu >= 0){
    std::pair<int, int> p(DefineQuantityIndexEqu, -1);
    pairs.push_back(p);
  }

  *NbrQuantityIndex = pairs.size();
  *QuantityIndexTable = (int *)Malloc(pairs.size() * sizeof(int));
  *QuantityTraceGroupIndexTable = (int *)Malloc(pairs.size() * sizeof(int));
  for(unsigned int i = 0; i < pairs.size(); i++){
    (*QuantityIndexTable)[i] = pairs[i].first;
    (*QuantityTraceGroupIndexTable)[i] = pairs[i].second;
  }
}

/* C h e c k _ N a m e O f S t r u c t N o t E x i s t   */

void  Check_NameOfStructNotExist(const char *Struct, List_T *List_L, void *data,
				 int (*fcmp)(const void *a, const void *b))
{
  if(List_ISearchSeq(List_L, data, fcmp) >= 0)
    vyyerror("Redefinition of %s %s", Struct, (char*)data);
}


/* P r i n t _ C o n s t a n t  */

int Print_ListOfDouble(char *format, List_T *list, char *buffer)
{
  // if format does not contain formatting characters, dump the list (useful for
  // quick debugging of lists)
  int numFormats = 0;
  for(unsigned int i = 0; i < strlen(format); i++)
    if(format[i] == '%') numFormats++;
  if(!numFormats){
    strcpy(buffer, format);
    for(int i = 0; i < List_Nbr(list); i++){
      double d;
      List_Read(list, i, &d);
      char tmp[256];
      sprintf(tmp, " [%d]%g", i, d);
      strcat(buffer, tmp);
    }
    return 0;
  }

  char tmp1[256], tmp2[256];
  int j = 0, k = 0;
  buffer[j] = '\0';

  while(j < (int)strlen(format) && format[j] != '%') j++;
  strncpy(buffer, format, j);
  buffer[j] = '\0';
  for(int i = 0; i < List_Nbr(list); i++){
    k = j;
    j++;
    if(j < (int)strlen(format)){
      if(format[j] == '%'){
	strcat(buffer, "%");
	j++;
      }
      while(j < (int)strlen(format) && format[j] != '%') j++;
      if(k != j){
	strncpy(tmp1, &(format[k]), j-k);
	tmp1[j-k] = '\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list, i));
	strcat(buffer, tmp2);
      }
    }
    else
      return List_Nbr(list) - i;
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}

void  Print_Constants()
{
  struct Constant *Constant_P;

  Message::Check("Constants:\n");

  List_T *tmp = Tree2List(ConstantTable_L);

  for(int i = 0; i < List_Nbr(tmp); i++){
    Constant_P = (struct Constant*)List_Pointer(tmp, i);
    switch(Constant_P->Type){
    case VAR_FLOAT:
      Message::Check("%s = %g;\n", Constant_P->Name, Constant_P->Value.Float);
      break;
    case VAR_LISTOFFLOAT:
      {
        std::string str(Constant_P->Name);
        str += " = {";
        for(int j = 0; j < List_Nbr(Constant_P->Value.ListOfFloat); j++){
          if(j) str += ",";
          double d;
          List_Read(Constant_P->Value.ListOfFloat, j, &d);
          char tmp[32];
          sprintf(tmp, "%g", d);
          str += tmp;
        }
        str += "};\n";
        Message::Check(str.c_str());
      }
      break;
    case VAR_CHAR:
      Message::Check("%s = \"%s\";\n", Constant_P->Name, Constant_P->Value.Char);
      break;
    }
  }

  List_Delete(tmp);
}


/*  E r r o r   h a n d l i n g  */

void yyerror(const char *s)
{
  extern char *getdp_yytext;
  Message::Error("'%s', line %ld : %s (%s)", getdp_yyname.c_str(),
                 getdp_yylinenum, s, getdp_yytext);
  getdp_yyerrorlevel = 1;
}

void vyyerror(const char *fmt, ...)
{
  char str[256];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);
  Message::Error("'%s', line %ld : %s", getdp_yyname.c_str(),
                 getdp_yylinenum, str);
  getdp_yyerrorlevel = 1;
}
