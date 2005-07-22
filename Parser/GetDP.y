%{
/* $Id: GetDP.y,v 1.82 2005-07-22 15:59:59 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Ruth Sabariego
 *   Johan Gyselinck
 */

/* Modifs a faire:

   Patrick: definir des structures avec valeurs par defaut,
   e.g. BasisFunction_D = ...  (dans un fichier a part).

   Christophe: introduire les listes au sein des expressions (comme
   c'est fait dans les expression-cst), afin de gerer les vecteurs,
   tenseurs, etc., directement, et pas par l'intermediaire d'une
   fonction de creation. */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "Data_Passive.h"
#include "Data_Active.h"
#include "Data_DefineE.h"
#include "Malloc.h"
#include "Tools.h"
#include "Init_Problem.h"
#include "Print_ProblemStructure.h"
#include "BF_Function.h"
#include "Quadrature.h"
#include "Cal_Value.h"
#include "Parser.h"
#include "Message.h"
#include "Magic.h"

void Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				int (*fcmp)(const void *a, const void *b)) ;
int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) ;
int  Add_Expression(struct Expression * Expression_P, char * Name, int Flag_Plus) ;
void Pro_DefineQuantityIndex(List_T * WholeQuantity_L,int DefineQuantityIndexEqu,
			     int * NbrQuantityIndex, int ** QuantityIndexTable,
			     int ** QuantityTraceGroupIndexTable) ;
void Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) ;
void Help(char *topic) ;
int  Print_ListOfDouble(char *format, List_T *list, char *buffer) ;


void yyerror(char *s) ;
void vyyerror(char *fmt, ...) ;
int  yylex();

extern FILE            *yyin ;
extern long int         yylinenum ;
extern char             yyname[MAX_FILE_NAME_LENGTH], yyincludename[MAX_FILE_NAME_LENGTH] ;
extern int              yycolnum, yyincludenum ;
extern char            *yytext ;

extern int                     ErrorLevel, InteractiveLevel ;
extern struct Problem          Problem_S ;
extern struct PostProcessing   InteractivePostProcessing_S ;
extern struct PostSubOperation InteractivePostSubOperation_S ;
extern int                     InteractiveCompute ;

List_T  * ConstantTable_L, * ListDummy_L ;
List_T  * ListOfInt_L, * ListOfTwoInt_L ;
List_T  * ListOfPointer_L, * ListOfPointer2_L, * ListOfChar_L ;
List_T  * Current_BasisFunction_L, * Current_SubSpace_L, * Current_GlobalQuantity_L ;
List_T  * Current_WholeQuantity_L, * Current_System_L ;
List_T  * Operation_L ;

int      Nbr_Index, Flag_MultipleIndex, Save_Nbr_Index ;
List_T  * ListOfInitialList0_L, * InitialList0_L ;
List_T  * ListOfInitialList2_L, * InitialList2_L ;
List_T  * ListOfInitialList_L, * ListOfInitialSuppList_L ;
List_T  * ListOfDefineSystem, * ListOfListOfFormulation ;
List_T  * ListOfConstraintPerRegion, * ListOfRegionIndex, * ListOfSubRegionIndex ;
List_T  * ListOfFormulation ;
List_T  * ListOfBasisFunction, * ListOfSupportIndex, * ListOfEntityIndex ;
List_T  * ListOfConstraintInFS, * ListOfConstraintIndex ;
List_T  * ListOfDefineQuantity, * ListOfFunctionSpaceIndex, * ListOfEquationTerm ;

List_T  * ListOfInt_Lnew ;
int     * ListOfInt_P ;

char    * Save_Name, tmpstr[1024] ;

int      i, j, k, l, FlagError ;
int      Num_BasisFunction = 1 ;
int      YaccLevel = 0 ;
int      Type_TermOperator, Type_Function, Type_SuppList ;
int      Quantity_TypeOperator, Quantity_Index ;
int      Current_DofIndexInWholeQuantity, Last_DofIndexInWholeQuantity ;
int      Current_NoDofIndexInWholeQuantity ;
int      Current_System ;
int      Nbr_Arguments ;
int      Constraint_Index ;
int      TypeOperatorDofInTrace, DefineQuantityIndexDofInTrace ;

double   d ;

time_t date_info;

FILE* File;

struct Constant  Constant_S, Constant1_S, Constant2_S ;

struct Expression             Expression_S, * Expression_P ;
struct ExpressionPerRegion      ExpressionPerRegion_S ;

struct Group                  Group_S ;

struct Constraint             Constraint_S, * Constraint_P ;
struct ConstraintPerRegion      ConstraintPerRegion_S, * ConstraintPerRegion_P ;
struct MultiConstraintPerRegion MultiConstraintPerRegion_S ;

struct JacobianMethod         JacobianMethod_S ;
struct JacobianCase             JacobianCase_S ;

struct IntegrationMethod      IntegrationMethod_S ;
struct IntegrationCase          IntegrationCase_S ;
struct Quadrature               QuadratureCase_S ;

struct FunctionSpace          FunctionSpace_S ;
struct BasisFunction            BasisFunction_S ;
void  (*FunctionDummy)();
struct GlobalBasisFunction        GlobalBasisFunction_S ;
struct SubSpace                 SubSpace_S ;
struct GlobalQuantity           GlobalQuantity_S ;
struct ConstraintInFS           ConstraintInFS_S ;

struct Formulation            Formulation_S ;
struct DefineQuantity           DefineQuantity_S ;
struct EquationTerm             EquationTerm_S ;
struct WholeQuantity            WholeQuantity_S, *WholeQuantity_P ;

struct GlobalEquationTerm       GlobalEquationTerm_S ;

struct Resolution             Resolution_S ;
struct DefineSystem             DefineSystem_S ;
struct Operation                Operation_S, * Operation_P ;
struct ChangeOfState            ChangeOfState_S ;

struct PostProcessing         PostProcessing_S ;
struct PostQuantity             PostQuantity_S ;
struct PostQuantityTerm           PostQuantityTerm_S ;

struct PostOperation          PostOperation_S ;
struct PostSubOperation         PostSubOperation_S ;

#define MAX_RECUR_LOOPS 100
static double x0, x1, step;
static int ImbricatedLoop = 0, do_next;
static fpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static char *LoopControlVariablesNameTab[MAX_RECUR_LOOPS];

%}

/* ------------------------------------------------------------------ */
%union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
}

%token <i> tINT
%token <d> tFLOAT
%token <c> tSTRING tBIGSTR

%type <i>  GroupRHS, ReducedGroupRHS, FunctionForGroup, SuppListTypeForGroup
%type <i>  Expression, DefineDimension, MultipleIndex, Index
%type <i>  ArgumentsForFunction, RecursiveListOfQuantity
%type <i>  PostQuantitySupport
%type <d>  FExpr, OneFExpr
%type <l>  MultiFExpr, ListOfFExpr, RecursiveListOfFExpr, ParametersForFunction
%type <l>  RecursiveListOfRegion
%type <l>  ListOfRegion, ListOfRegionOrAll, SuppListOfRegion, IRegion
%type <l>  ConstraintCases, IntegrationCases, QuadratureCases, JacobianCases
%type <l>  BasisFunctions, SubSpaces, GlobalQuantities, ConstraintInFSs
%type <l>  ListOfBasisFunction, RecursiveListOfBasisFunction
%type <l>  ListOfBasisFunctionCoef, RecursiveListOfBasisFunctionCoef
%type <l>  Equations, WholeQuantityExpression
%type <l>  DefineSystems, Operation, ChangeOfStates
%type <l>  ListOfFormulation, RecursiveListOfFormulation
%type <l>  ListOfSystem, RecursiveListOfSystem
%type <l>  PostQuantities, SubPostQuantities, PostSubOperations
%type <c>  NameForFunction, CharExpr, StrCat, StringIndex, String__Index
%type <t>  Quantity_Def

/* ------------------------------------------------------------------ */
%token  tEND tDOTS
%token  tStrCat tSprintf tPrintf tRead
%token  tFor tEndFor tIf tElse tEndIf
%token  tFlag tHelp tCpu tCheck
%token  tInclude
%token  tConstant tList tListAlt tLinSpace tLogSpace tListFromFile
%token  tDefineConstant  tPi  t0D  t1D  t2D  t3D 
%token  tExp tLog tLog10 tSqrt tSin tAsin tCos tAcos tTan
%token    tAtan tAtan2 tSinh tCosh tTanh tFabs tFloor tCeil
%token    tFmod tModulo tHypot 
%token    tSolidAngle tTrace tOrder tCrossProduct tDofValue
%token    tMHTransform tMHJacNL

%token  tGroup tDefineGroup tAll tInSupport tMovingBand2D

%token  tDefineFunction

%token  tConstraint
%token    tRegion tSubRegion tRegionRef tSubRegionRef
%token    tFilter tCoefficient tValue  tTimeFunction
%token    tBranch  tNode  tLoop   tNameOfResolution

%token  tJacobian
%token      tCase

%token  tIntegration
%token  tFMMIntegration
%token  tMatrix
%token    tType tSubType tCriterion tGeoElement
%token      tNumberOfPoints  tMaxNumberOfPoints
%token        tNumberOfDivisions  tMaxNumberOfDivisions
%token          tStoppingCriterion

%token  tFunctionSpace
%token    tName
%token    tBasisFunction
%token      tNameOfCoef  tFunction  tdFunction  tSubFunction tSubdFunction  tSupport  tEntity
%token    tSubSpace  tNameOfBasisFunction
%token    tGlobalQuantity
%token      tEntityType tEntitySubType tNameOfConstraint

%token  tFormulation
%token    tQuantity
%token        tNameOfSpace tIndexOfSystem 
%token        tSymmetry
%token    tEquation
%token        tGalerkin tdeRham tGlobalTerm tGlobalEquation tDiscreteGeometry
%token          tDt tDtDof tDtDt tDtDtDof  tJacNL  tNeverDt  tDtNL  tAtAnteriorTimeStep
%token          tIn
%token          tFull_Matrix

%token  tResolution
%token    tDefineSystem
%token      tNameOfFormulation  tNameOfMesh  tFrequency  tSolver
%token      tOriginSystem  tDestinationSystem 
%token    tOperation  tOperationEnd
%token      tSetTime tDTime tSetFrequency tFourierTransform tFourierTransformJ
%token      tLanczos tEigenSolve tEigenSolveJac tPerturbation 
%token      tUpdate tUpdateConstraint tBreak 
%token      tEvaluate

%token      tTimeLoopTheta
%token        tTime0  tTimeMax  tDTime  tTheta
%token      tTimeLoopNewmark
%token        tBeta  tGamma
%token      tIterativeLoop
%token        tNbrMaxIteration  tRelaxationFactor
%token      tIterativeTimeReduction
%token        tDivisionCoefficient tChangeOfState
%token      tChangeOfCoordinates tChangeOfCoordinates2 tSystemCommand
%token      tGenerateFMMGroups
%token      tGenerateOnly
%token      tGenerateOnlyJac
%token      tSolveJac_AdaptRelax 
%token      tSaveSolutionExtendedMH tSaveSolutionMHtoTime
%token      tInit_MovingBand2D tMesh_MovingBand2D 
%token      tGenerate_MH_Moving tGenerate_MH_Moving_Separate tAdd_MH_Moving 
%token      tGenerateGroup tGenerateJacGroup
%token      tSaveMesh
%token      tDeformeMesh
%token      tDummyFrequency
%token  tPostProcessing
%token      tNameOfSystem

%token  tPostOperation  
%token    tNameOfPostProcessing tUsingPost tAppend
%token      tPlot tPrint tPrintGroup tEcho tWrite tAdapt
%token        tOnGlobal tOnRegion tOnElementsOf
%token        tOnGrid tOnSection tOnPoint tOnLine tOnPlane tOnBox
%token        tWithArgument
%token        tFile tDepth tDimension tTimeStep tHarmonicToTime
%token        tFormat tHeader tFooter tSkin tSmoothing
%token        tTarget tSort tIso tNoNewLine tDecomposeInSimplex tChangeOfValues 
%token        tTimeLegend tFrequencyLegend tEigenvalueLegend
%token        tEvaluationPoints tStore tLastTimeStepOnly
%token        tStr, tDate

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
%left    '<' tLESSOREQUAL  '>' tGREATEROREQUAL tLESSLESS tGREATERGREATER
%left    '+' '-'
%left    '*' '/' '%' tCROSSPRODUCT
%right   '!' UNARYPREC
%right   '^'
%left    '(' ')' '[' ']' '.'
%left    '#' '$' tSHOW
/* ------------------------------------------------------------------ */

%start Stats

%%

Stats :
    { if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfPointer_L = List_Create(10, 10, sizeof(void *)) ;
	ListOfPointer2_L= List_Create(10, 10, sizeof(void *)) ;
	ListOfChar_L    = List_Create(128, 128, sizeof(char)) ;

	ListOfInitialList0_L    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialList_L     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialSuppList_L = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineSystem      = List_Create(5,5, sizeof(List_T *)) ;
	ListOfListOfFormulation = List_Create(5,5, sizeof(List_T *)) ;

	ListOfConstraintPerRegion = List_Create(5,5, sizeof(List_T *)) ;
	ListOfRegionIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfSubRegionIndex    = List_Create(5,5, sizeof(int)) ;

	ListOfFormulation       = List_Create(5,5, sizeof(int)) ;

	ListOfBasisFunction     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfSupportIndex      = List_Create(5,5, sizeof(int)) ;
	ListOfEntityIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfConstraintInFS    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfConstraintIndex   = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineQuantity    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfFunctionSpaceIndex= List_Create(5,5, sizeof(int *)) ;
	ListOfEquationTerm      = List_Create(5,5, sizeof(List_T *)) ;
      }
    }
    ProblemDefinitions
    { if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfInitialList0_L) ;

	List_Delete(ListOfInitialList_L) ;
	List_Delete(ListOfInitialSuppList_L) ;

	List_Delete(ListOfDefineSystem) ;
	List_Delete(ListOfListOfFormulation) ;

	List_Delete(ListOfConstraintPerRegion) ;
	List_Delete(ListOfRegionIndex) ;
	List_Delete(ListOfSubRegionIndex) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfSupportIndex) ;
	List_Delete(ListOfEntityIndex) ;
	List_Delete(ListOfConstraintInFS) ;
	List_Delete(ListOfConstraintIndex) ;

	List_Delete(ListOfDefineQuantity) ;
	List_Delete(ListOfFunctionSpaceIndex) ;
	List_Delete(ListOfEquationTerm) ;
      }
    }

  ; 


/* ------------------------------------------------------------------------ */
/*  P r o b l e m                                                           */
/* ------------------------------------------------------------------------ */


ProblemDefinitions :

    /* none */
  | ProblemDefinitions
    { Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; }
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

  | Affectation

  | tInclude CharExpr
    {            
      strcpy(yyincludename, $2); yyincludenum++ ; return(0);
    }

  | Interactive

  ;


/* ------------------------------------------------------------------------ */
/*  I n t e r a c t i v e                                                   */
/* ------------------------------------------------------------------------ */

Interactive :
    tHelp tEND
    { Help(NULL); }
  | tHelp tPrint tEND
    { Help("Print"); }
  | tHelp tCheck tEND
    { Help("Check"); }
  | tHelp tLog tEND
    { Help("Log"); }
  | tHelp tCpu tEND
    { Help("Log"); }
  | tHelp tHelp tEND
    { Help("Help"); }
  | tHelp tSTRING tEND
    { Help($2); }
  | tCpu tEND
    { Msg(RESOURCES, ""); }
  | tCheck tEND
    { Print_ProblemStructure(&Problem_S); }
  | tCheck tGroup tEND
    { Print_Group(&Problem_S); }
  | tCheck tFunction tEND
    { Print_Expression(&Problem_S); }
  | tCheck tConstraint tEND
    { Print_Constraint(&Problem_S); }
  | tCheck tJacobian tEND
    { Print_Jacobian(&Problem_S); }
  | tCheck tIntegration tEND
    { Print_Integration(&Problem_S); }
  | tCheck tFunctionSpace tEND
    { Print_FunctionSpace(&Problem_S); }
  | tCheck tFormulation tEND
    { Print_Formulation(&Problem_S); }
  | tCheck tResolution tEND
    { Print_Resolution(&Problem_S); }
  | tCheck tPostProcessing tEND
    { Print_PostProcessing(&Problem_S); }
  | tCheck tPostOperation tEND
    { Print_PostOperation(&Problem_S); }
  | tCheck tINT tEND
    { Print_Object($2, &Problem_S); }

  | {
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    }
    PostSubOperation
    {
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    }
  ;


/* ------------------------------------------------------------------------ */
/*  G r o u p                                                               */
/* ------------------------------------------------------------------------ */


Groups :

    /* none */
  | Groups { Nbr_Index = 0 ; } Group
  ;


Group :

   String__Index tDEF ReducedGroupRHS tEND
    { Add_Group(&Group_S, $1, 0, 0) ; }
  | tSTRING Index tDEF ReducedGroupRHS tEND
    { Add_Group(&Group_S, $1, 2, $2) ; }
/* Patrick, temporary for compatibility with 'String__Index' syntax (19/01/2004)
  | String__Index DefineDimension tDEF
*/
  | tSTRING DefineDimension tDEF
    { Nbr_Index = $2 ; }
    ReducedGroupRHS tEND
    { Add_Group_Index(&Group_S, $1, 2) ; }

  | tDefineGroup '[' DefineGroups ']' tEND

  | MovingBand2DGroup 

  | String__Index '+' tDEF ReducedGroupRHS tEND
    { Add_Group_2(&Group_S, $1, 1, 0, 0, 0) ; }
  
  | Affectation
  
  | Loop
  ;

MovingBand2DGroup :

  String__Index '[' FExpr ']' tDEF tMovingBand2D
    { 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)$3 ;
      List_Add(Group_S.InitialList, &i) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    }
    '[' '#' ListOfRegion 
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = $10 ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)$3 ; 
    }
    ',' '#' ListOfRegion ',' FExpr ']' tEND
    {
      Group_S.MovingBand2D->InitialList2 = $14 ; 
      Add_Group(&Group_S, $1, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)$16 ; 
    } 
  ;

ReducedGroupRHS :

    FunctionForGroup '['
    {
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    }
    ListOfRegionOrAll
    {
      Group_S.FunctionType = $1 ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      if (!Nbr_Index)  Group_S.InitialList = $4 ;
      else             Group_S.InitialList = $4 ;

      ListOfInitialList2_L = ListOfInitialSuppList_L ;  /* Init pour SuppListOfRegion */
    }
    SuppListOfRegion ']'
    {
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = $6 ;
      else             Group_S.InitialSuppList = NULL ;
      $$ = -1 ;
    }

  /* shortcut: #list ==  Region[ list ] */
  | '#' ListOfRegion
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = $2 ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      $$ = -1 ;
    }
  ;

GroupRHS :

    ReducedGroupRHS
    {
      $$ = $1 ;
    }

  | String__Index MultipleIndex
    {
      if (!Flag_MultipleIndex) {
	if ( !strcmp($1, "All") ) {
	  $$ = -3;
	}
	else if ( (i = List_ISearchSeq(Problem_S.Group, $1, fcmp_Group_Name)) < 0 ) {
	  $$ = -2 ; vyyerror("Unknown Group: %s", $1) ;
	}
	else {
	  List_Read(Problem_S.Group, i, &Group_S) ; $$ = i ;
	}
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d_", $1, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				    fcmp_Group_Name)) < 0 ) {
	    $$ = -2 ; vyyerror("Unknown Group: %s {%d}", $1, k+1) ;
	  }
	  else {
	    if (k == 0) {
	      List_Read(Problem_S.Group, i, &Group_S) ; $$ = i ;
	    }
	  }
	  List_Add(ListOfInt_L, &i) ;
	}
      }
      Free($1) ;
    }

  ;

FunctionForGroup :

    tRegion
    { $$ = REGION ; }

  | tSTRING
    { $$ = Get_DefineForString(FunctionForGroup_Type, $1, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", $1);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free($1) ;
    }
  ;


ListOfRegionOrAll :

    ListOfRegion   { $$ = $1 ; }
  | tAll
    { 
      if (!Nbr_Index)
	$$ = NULL ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	InitialList2_L = NULL ;
	for (k = 0 ; k < Nbr_Index ; k++)
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
      }
    }
  ;


SuppListOfRegion :

    /* none */
    { Type_SuppList = SUPPLIST_NONE ;  $$ = NULL ; }

  | Comma SuppListTypeForGroup ListOfRegion
    { Type_SuppList = $2 ; $$ = $3 ; }

  | Comma tInSupport String__Index MultipleIndex
    {
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) >= 0 ) {
	  if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	       ELEMENTLIST ) {
	    if (!Nbr_Index) {
	      $$ = List_Create( 1, 5, sizeof(int)) ;
	      List_Add($$, &i) ;
	    }
	    else {
	      List_Reset(ListOfInitialList2_L) ;
	      for (k = 0 ; k < Nbr_Index ; k++) {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	  }
	  else  vyyerror("Not a Support of Element Type: %s", $3) ;
	}
	else  vyyerror("Unknown Region for Support: %s", $3) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d_", $3, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name))
	       >= 0 ) {
	    if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type ==
		 ELEMENTLIST ) {
	      if (!Nbr_Index)
		vyyerror("Multiple Group out of context: %s {}", $3) ;
	      else {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	    else  vyyerror("Not a Support of Element Type: %s", $3) ;
	  }
	  else  vyyerror("Unknown Region for Support: %s {%d}", $3, k+1) ;
	}
      }
      Free($3) ;
    }
  ;

SuppListTypeForGroup :

    tSTRING
    { $$ = Get_DefineForString(FunctionForGroup_SuppList, $1, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", $1);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free($1) ;
    }
  ;


ListOfRegion :

    IRegion
    {
      if (!Nbr_Index) {
	$$ = List_Create(((List_Nbr($1) > 0)? List_Nbr($1) : 1), 5, sizeof(int)) ;
	for (i = 0 ; i < List_Nbr($1) ; i++)
	  List_Add($$, (int *)List_Pointer($1, i) ) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = $1 ;
	  InitialList2_L =
	    List_Create(((List_Nbr(InitialList0_L) > 0)? List_Nbr($1) : 1), 5,
			sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    }

  | '{' RecursiveListOfRegion '}'
    { $$ = $2 ; }
  ;


RecursiveListOfRegion :

    /* none */
    {
      if (!Nbr_Index)
	$$ = List_Create( 5, 5, sizeof(int)) ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  InitialList2_L = List_Create( 5, 5, sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	}
      }
    }

  | RecursiveListOfRegion Comma IRegion
    { $$ = $1 ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr($3) ; i++)
	  List_Add($$, (int *)List_Pointer($3, i) ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = $3 ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    }

  | RecursiveListOfRegion Comma '-' IRegion
    { $$ = $1 ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr($4) ; i++)
	  List_Suppress($$, (int *)List_Pointer($4, i), fcmp_int ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = $4 ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Suppress(InitialList2_L,
			  (int *)List_Pointer(InitialList0_L, i), fcmp_int) ;
	}
      }
    }
  ;


IRegion :

    tINT
    { Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add($$ = ListOfInt_L, &($1)) ; }

  | '@' RecursiveListOfFExpr '@'
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr($2) ; i++) {
	List_Read($2, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      $$ = ListOfInt_L;
    }

  | tINT tDOTS FExpr
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=$1 ; ($1<$3)?(j<=$3):(j>=$3) ; ($1<$3)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      $$ = ListOfInt_L ;
    }

  | tINT tDOTS tINT tDOTS FExpr
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!(int)$5 || ($1<$3 && (int)$5<0) || ($1>$3 && (int)$5>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", $1, $3, (int)$5) ;
	List_Add(ListOfInt_L, &($1)) ;
      }
      else
	for(j=$1 ; ((int)$5>0)?(j<=$3):(j>=$3) ; j+=(int)$5) 
	  List_Add(ListOfInt_L, &j) ;
      $$ = ListOfInt_L ;
    }

  | String__Index
    {
      Flag_MultipleIndex = 0 ;
      if ( (i = List_ISearchSeq(Problem_S.Group, $1, fcmp_Group_Name)) < 0 ) {
	/* Si ce n'est pas un nom de groupe, est-ce un nom de constante ? : */
	Constant_S.Name = $1 ;
	if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	  vyyerror("Unknown Constant: %s", $1) ;
	  i = 0 ;
	  List_Reset(ListOfInt_L) ; List_Add($$ = ListOfInt_L, &i) ;
	}
	else
	  if (Constant_S.Type == VAR_FLOAT) {
	    i = (int)Constant_S.Value.Float ;
	    List_Reset(ListOfInt_L) ; List_Add($$ = ListOfInt_L, &i) ;
	  }
	  else if (Constant_S.Type == VAR_LISTOFFLOAT) {
	    List_Reset($$ = ListOfInt_L) ;
	    for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ; j = (int)d ;
	      List_Add(ListOfInt_L, &j) ;
	    }
	  }
	  else {
	    vyyerror("Unknown type of Constant: %s", $1) ;
	    i = 0 ;
	    List_Reset(ListOfInt_L) ; List_Add($$ = ListOfInt_L, &i) ;
	  }
      }
      else   /* Si c'est un nom de groupe : */
	$$ = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free($1) ;
    }

  | tSTRING '{' '}'
    {
      Flag_MultipleIndex = 1 ;
      List_Reset(ListOfInitialList0_L) ;
      $$ = ListOfInitialList0_L ;
      for (k = 1 ; k <= Nbr_Index ; k++) {
	sprintf(tmpstr, "%s_%d_", $1, k) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name)) < 0 ) {
	  vyyerror("Unknown Group: %s {%d}", $1, k) ;  break ;
	}
	else
	  List_Add(ListOfInitialList0_L, 
		   &(((struct Group *)
		      List_Pointer(Problem_S.Group, i))->InitialList)) ;
      }
      Free($1) ;
    }
  ;


DefineGroups :

    /* none */

  | DefineGroups Comma tSTRING
    { if ( (i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, $3, 0, 0) ;
      }
      else  Free($3) ;
    }

  | DefineGroups Comma tSTRING '{' FExpr '}'
    { 
      for (k = 0 ; k < (int)$5 ; k++) {
	sprintf(tmpstr, "%s_%d_", $3, k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = ListDummy_L ;
	  Add_Group(&Group_S, $3, 2, k+1) ;
	}
      }
      Free($3) ;
    }
  ;


Comma : /* none */ | ',' ;


DefineDimension :

    '{' '#' FExpr '}'
    { $$ = (int)$3 ; }
  ;

MultipleIndex :

    /* none */ { Flag_MultipleIndex = 0 ; }
  | '{' '}'    { Flag_MultipleIndex = 1 ; }
  ;

Index :
/*
    '{' FExpr '}'    { $$ = (int)$2 ; }
*/
    '{' tINT '}'    { $$ = (int)$2 ; }
  ;



/* ------------------------------------------------------------------------ */
/*  F u n c t i o n                                                         */
/* ------------------------------------------------------------------------ */

Functions :

    /* none */
  | Functions Function
  ;

Function :

    tDefineFunction '[' DefineFunctions ']' tEND 

  | tSTRING '[' ']' tDEF Expression tEND
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, $1, fcmp_Expression_Name)) >= 0 ) {
	if (((struct Expression *)List_Pointer(Problem_S.Expression, i))->Type ==
	    UNDEFINED_EXP) {
	  Free(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name) ;
	  List_Read (Problem_S.Expression, $5, &Expression_S) ;
	  List_Write(Problem_S.Expression,  i, &Expression_S) ;
	  ((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name = $1 ;
	  List_Pop(Problem_S.Expression) ;
	}
	else  { vyyerror("Redefinition of Function: %s", $1) ; }
      }
      else {  /* new identifier */
	Free(((struct Expression *)List_Pointer(Problem_S.Expression, $5))->Name) ;
	((struct Expression *)List_Pointer(Problem_S.Expression, $5))->Name = $1 ;
      }
    }

  | tSTRING '[' GroupRHS ']' tDEF Expression tEND
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, $1, fcmp_Expression_Name)) < 0 ) {
	/* Si le nom n'existe pas : */
	i = List_Nbr(Problem_S.Expression) ;
	Expression_S.Type = PIECEWISEFUNCTION ;
	Expression_S.Case.PieceWiseFunction.ExpressionPerRegion =
	  List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	Expression_S.Case.PieceWiseFunction.NumLastRegion = -1 ;
	Add_Expression(&Expression_S, $1, 0) ;
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i) ;
      }
      else {
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i) ;
	if (Expression_P->Type == UNDEFINED_EXP) {
	  Expression_P->Type = PIECEWISEFUNCTION ;
	  Expression_P->Case.PieceWiseFunction.ExpressionPerRegion =
	    List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	  Expression_P->Case.PieceWiseFunction.NumLastRegion = -1 ;
	}
	else if (Expression_P->Type != PIECEWISEFUNCTION)
	  vyyerror("Not piece-wise Expression: %s", $1) ;
	Free($1) ;
      }

      if ($3 >= 0 || $3 == -1) {
	ExpressionPerRegion_S.ExpressionIndex = $6 ;
	for (i = 0 ; i < List_Nbr(Group_S.InitialList) ; i++) {
	  List_Read(Group_S.InitialList, i, &ExpressionPerRegion_S.RegionIndex) ;

	  if (List_Search(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
			  &ExpressionPerRegion_S.RegionIndex, fcmp_int))
	    vyyerror("Redefinition of piece-wise Function: %s [%d]",
		     Expression_P->Name, ExpressionPerRegion_S.RegionIndex) ;
	  else
	    List_Add(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
		     &ExpressionPerRegion_S) ;
	}
	if ($3 == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group right hand side") ;
    }

  | Affectation

  | Loop
  ;


DefineFunctions :

    /* none */
  | DefineFunctions Comma tSTRING
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, $3, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, $3, 0) ;
      }
      else  Free($3) ;
    }
  ;



/* ------------------------------------------------------------------------ 
    E x p r e s s i o n s                                                   
   ------------------------------------------------------------------------ */

Expression :

  /* expressions constantes: evaluees lors de l'analyse syntaxique */
    tConstant '[' FExpr ']'
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = $3 ;
      $$ = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    }

  /* reutilisation de fonctions deja definies en amont */
  | tFunction '[' tSTRING ']'
    { if((i = List_ISearchSeq(Problem_S.Expression, $3, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", $3) ;
      Free($3) ;  $$ = i ;
    }

  /* whole quantity */
  | { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; }
    WholeQuantityExpression
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = $2 ;
      $$ = Add_Expression(&Expression_S, "Exp_Fct", 1) ; }

  ;

ListOfExpression :

    /* none */  { List_Reset(ListOfInt_L) ; }
  /* shift/reduce 
  | Expression  { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &($1)) ; }
  */
  | '{' RecursiveListOfExpression '}'
  ;


RecursiveListOfExpression :

    Expression
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &($1)) ; }

  | RecursiveListOfExpression ',' Expression
    { List_Add(ListOfInt_L, &($3)) ; }
  ;


WholeQuantityExpression :

    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    }
    WholeQuantity
    { $$ = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    }

  ;


WholeQuantity :

    WholeQuantity_Single

  |  WholeQuantity '?' 
    {
      WholeQuantity_S.Type = WQ_TEST ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    }
    WholeQuantity tDOTS 
    {
      WholeQuantity_P = 
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1)) ;
      List_Pop(ListOfPointer2_L) ;

      WholeQuantity_P->Case.Test.WholeQuantity_True =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    }  
    WholeQuantity
    {
      WholeQuantity_P = 
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1)) ;
      List_Pop(ListOfPointer2_L) ;

      WholeQuantity_P->Case.Test.WholeQuantity_False =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
    }

  | WholeQuantity '*' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tCROSSPRODUCT WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | tCrossProduct '[' WholeQuantity ',' WholeQuantity ']'
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity '/' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity '+' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity '-' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity '%' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity '^' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity '<' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity '>' WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tLESSOREQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tGREATEROREQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tEQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tNOTEQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tAPPROXEQUAL WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tAND WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }
  | WholeQuantity tOR WholeQuantity
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    }

  | '-' WholeQuantity %prec UNARYPREC
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; }

  | '+' WholeQuantity %prec UNARYPREC

  | '!' WholeQuantity
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; }

  ;


WholeQuantity_Single :

    '(' WholeQuantity ')'

  | OneFExpr
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = $1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | NameForFunction ArgumentsForFunction ParametersForFunction
    {

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, $1,fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = $2 ;
	if ($2 < 0)  vyyerror("Uncompatible argument for Function: %s", $1) ;
      }

      /* Built in functions */

      else { 
	Get_Function2NbrForString(F_Function, $1, &FlagError,
				  &WholeQuantity_S.Case.Function.Fct,
				  &WholeQuantity_S.Case.Function.NbrParameters,
				  &WholeQuantity_S.Case.Function.NbrArguments) ;
	WholeQuantity_S.Case.Function.Active = NULL ;
	if (!FlagError) {

	  /* arguments */
	  if ($2 >= 0) {
	    if ($2 == WholeQuantity_S.Case.Function.NbrArguments) {
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	    }
	    else if (WholeQuantity_S.Case.Function.NbrArguments == -1  ||
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
	      /* && ($2)%2 == 0)) { */
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	      WholeQuantity_S.Case.Function.NbrArguments = $2 ;
	    }
	    else {
	      vyyerror("Wrong number of arguments for Function '%s' (%d instead of %d)", 
		       $1, $2, WholeQuantity_S.Case.Function.NbrArguments) ;
	    }
	  }
	  else {
	    WholeQuantity_S.Type = WQ_EXTERNBUILTINFUNCTION ;
	  }

	  /* parameters */
	  if (WholeQuantity_S.Case.Function.NbrParameters >= 0 &&
	      WholeQuantity_S.Case.Function.NbrParameters != List_Nbr($3)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     $1, List_Nbr($3), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 && List_Nbr($3)%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
		     $1, List_Nbr($3)) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr($3) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read($3, i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }

	}

	else {
	  vyyerror("Unknown Function: %s", $1) ;
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
      List_Delete($3);
    }

  | tSTRING Quantity_Def
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, $1, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of discrete Quantity: %s", $1);
	Get_Valid_SXD(QuantityFromFS_Type) ;
      }
      Free($1) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = $2.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $2.Int2 ;

      switch(WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity) {
      case QUANTITY_DOF :
	if (Current_DofIndexInWholeQuantity == -1)
	  Current_DofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("Dof{} definition out of context") ;
	else
	  vyyerror("More than one Dof definition in Expression") ;
	break ;
      case QUANTITY_NODOF :
	if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("NoDof definition out of context") ;
	else if (Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else
	  vyyerror("More than one NoDof definition in Expression") ;
	break ;
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | Quantity_Def
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = $1.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $1.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | Quantity_Def ArgumentsForFunction
    { 
      if($2!=1 && $2!=3 && $2!=4) /* Modification for using the previous result of a Quantity */
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", $2) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = $2 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = $1.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $1.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | tDt
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; }
    '[' WholeQuantityExpression ']'
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = $4 ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    }


  | tAtAnteriorTimeStep
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; }
    '[' WholeQuantityExpression ',' tINT ']'
    { WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = $4 ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = $6 ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    }

  | tMHTransform '[' tSTRING '['  
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; }   
     WholeQuantityExpression ']' ']' '{' FExpr '}'
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, $3,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", $3) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = $6 ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)$10 ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | tMHJacNL '[' tSTRING ']' '{' FExpr ',' FExpr '}'
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, $3,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", $3) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)$6 ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)$8 ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | tSolidAngle '[' Quantity_Def ']'
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $3.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | tOrder '[' Quantity_Def ']'
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = $3.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | tTrace 
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; }
    '[' WholeQuantityExpression ',' GroupRHS ']'
    { WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = $4 ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", $6) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[x, ConnectedTo y]'");

      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = -1 ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity){
	for(i=0 ; i<List_Nbr($4) ; i++){
	  WholeQuantity_P = (struct WholeQuantity*)List_Pointer($4, i) ;
	  if(WholeQuantity_P->Type == WQ_OPERATORANDQUANTITY)
	    if(WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity == QUANTITY_DOF){
	      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = i ;
	      Current_DofIndexInWholeQuantity = -4 ;
	      TypeOperatorDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator ;
	      DefineQuantityIndexDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.Index ;
	    }
	}
	if(Current_DofIndexInWholeQuantity != -4)
	  vyyerror("Dof{} definition out of context in Trace operator");
      }

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | '<' tSTRING '>' '[' WholeQuantityExpression ']'
    { WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = $5 ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, $2,
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp($2, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else if (!strcmp($2, "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2 ;
	else
	  vyyerror("Unknown Cast: %s", $2) ;
      }
      else {
	WholeQuantity_S.Case.Cast.NbrHar = 0 ;
	WholeQuantity_S.Case.Cast.FunctionSpaceIndexForType =
	  ((struct DefineQuantity *)List_Pointer(Formulation_S.DefineQuantity, i))
	    ->FunctionSpaceIndex ;
      }
      Free($2) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | '$' tSTRING
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, $2, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError){
	vyyerror("Unknown current value: $%s", $2);
	Get_Valid_SXP(Current_Value);
      }
      Free($2) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  /* a changer */
  | '$' tTimeStep
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }
  | '$' tDTime
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | '$' tINT
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = $2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | WholeQuantity_Single '#' tINT
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = $3 - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | '#' tINT
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = $2 - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  | WholeQuantity_Single tSHOW FExpr
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)$3 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    }

  ;


ArgumentsForFunction :

    '[' '.' ']'                        { $$ = -1 ; }
  | '[' ']'                            { $$ = 0 ; }
  | '[' RecursiveListOfQuantity ']'    { $$ = $2 ; }
  ;

RecursiveListOfQuantity :

    WholeQuantity                               { $$ = 1 ; }
  | RecursiveListOfQuantity ',' WholeQuantity   { $$ = $1 + 1 ; }
  ;

ParametersForFunction :

    /* none */
    { $$ = NULL; }

  | '{' RecursiveListOfFExpr '}'
    { $$ = $2; }

  | '{' tRegion '[' GroupRHS ']' '}'
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      $$ = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", $4) ;
      List_Add($$, &d) ;
    }

  ;

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n   M e t h o d                                           */
/* ------------------------------------------------------------------------ */

JacobianMethods :

    /* none */
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    }
  | JacobianMethods  '{' JacobianMethod '}'
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; }
  ;


JacobianMethod :

    /* none */
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; }

  | JacobianMethod  JacobianMethodTerm
  ;


JacobianMethodTerm :

    tName tSTRING tEND
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 $2, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = $2 ; }

  | tCase '{' JacobianCases '}'
    { JacobianMethod_S.JacobianCase = $3 ; }
  ;


JacobianCases :

    /* none */
    { $$ = List_Create(5, 5, sizeof (struct JacobianCase)) ; }

  | JacobianCases  '{' JacobianCase '}'
    { List_Add($$ = $1, &JacobianCase_S) ; }
  ;


JacobianCase :

    /* none */
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; }

  | JacobianCase JacobianCaseTerm
  ;


JacobianCaseTerm :

    tRegion GroupRHS tEND
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", $2) ; }

  | tRegion tAll tEND
    { JacobianCase_S.RegionIndex = -1 ; }

  | tJacobian tSTRING ParametersForFunction tEND
    { JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, $2, &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (JacobianCase_S.NbrParameters == -2 && (List_Nbr($3))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   $2, List_Nbr($3)) ;
	if (JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr($3);
	if (List_Nbr($3) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read($3, i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   $2, List_Nbr($3), JacobianCase_S.NbrParameters) ;
      }
      else{
	vyyerror("Unknown type of Jacobian: %s", $2);
	Get_Valid_SXD1N(Jacobian_Type);
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
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    }

  | IntegrationMethods  '{' IntegrationMethod '}'
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; }
  ;


IntegrationMethod :

    /* none */
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    }

  | IntegrationMethod  IntegrationMethodTerm
  ;


IntegrationMethodTerm :

    tName tSTRING tEND
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 $2, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = $2 ; 
    }

  | tCriterion Expression tEND
    { IntegrationMethod_S.CriterionIndex = $2 ;  }

  | tCase '{' IntegrationCases '}'
    { IntegrationMethod_S.IntegrationCase = $3 ; }
  ;


IntegrationCases :

    /* none */  
    { $$ = List_Create(5, 5, sizeof (struct IntegrationCase)) ; }

  | IntegrationCases '{' IntegrationCase '}'
    { List_Add($$ = $1, &IntegrationCase_S) ; }
  ;


IntegrationCase :

    /* none */
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    }

  | IntegrationCase IntegrationCaseTerm
  ;


IntegrationCaseTerm :

    tType tSTRING tEND
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", $2);
	Get_Valid_SXD(Integration_Type);
      }
      Free($2) ;
    }

  | tSubType tSTRING tEND
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", $2);
	Get_Valid_SXD(Integration_Type);
      }
      Free($2) ;
    }

  | tCase '{' QuadratureCases '}'
    { IntegrationCase_S.Case = $3 ; }
  ;
		   

QuadratureCases :

    /* none */
    { $$ = List_Create(5, 5, sizeof (struct Quadrature)) ; }

  | QuadratureCases  '{' QuadratureCase '}'
    { List_Add($$ = $1, &QuadratureCase_S) ; }
  ;


QuadratureCase :

    /* none */
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    }

  | QuadratureCase QuadratureCaseTerm
  ;


QuadratureCaseTerm :

    tGeoElement tSTRING tEND
    { QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Element: %s", $2);
	Get_Valid_SXD(Element_Type);
      }

      switch(IntegrationCase_S.SubType) {

      case STANDARD :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	case GAUSSLEGENDRE :
	  Get_FunctionForDefine
	    (FunctionForGaussLegendre, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	default : 
	  vyyerror("Incompatible type of Integration method") ;
	  break ;
	}
	break ;

      case SINGULAR :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForSingularGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	default : 
	  vyyerror("Incompatible type of Integration method") ;
	  break ;
	}
	break ;
      default :
	vyyerror("Incompatible type of Integration method") ;
	break ;
      }

      if (FlagError)  vyyerror("Bad type of Integration method for Element: %s", $2) ;
      Free($2) ;
    }

  | tNumberOfPoints FExpr tEND
    { QuadratureCase_S.NumberOfPoints = (int)$2 ; }

  | tMaxNumberOfPoints FExpr tEND
    { QuadratureCase_S.MaxNumberOfPoints = (int)$2 ; }

  | tNumberOfDivisions FExpr tEND
    { QuadratureCase_S.NumberOfDivisions = (int)$2 ; }

  | tMaxNumberOfDivisions FExpr tEND
    { QuadratureCase_S.MaxNumberOfDivisions = (int)$2 ; }

  | tStoppingCriterion FExpr tEND
    { QuadratureCase_S.StoppingCriterion = $2 ; }
  ;


/* ------------------------------------------------------------------------ */
/*  C o n s t r a i n t                                                     */
/* ------------------------------------------------------------------------ */

Constraints :

    /* none */
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    }

  | Loop
  | Constraints BracedConstraint 
  ;

BracedConstraint :

    '{' Constraint '}'
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Constraint, &Constraint_S) ;
      else {
	Save_Name = strsave(Constraint_S.Name) ;  Free(Constraint_S.Name) ;
	if (List_Nbr(ListOfConstraintPerRegion))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				       tmpstr, fcmp_Constraint_Name) ;
	    Constraint_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfConstraintPerRegion, k,
		      &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Problem_S.Constraint, &Constraint_S) ;
	  }
	Free(Save_Name) ;
      }
    }

  | Affectation
  ;

Constraint :

    /* none */
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    }

  | Constraint  ConstraintTerm
  ;


ConstraintTerm :

    tName String__Index tEND
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, $2,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = $2 ; }

  | tName String__Index DefineDimension tEND
    { Nbr_Index = $3 ;
      sprintf(tmpstr, "%s_%d_", $2, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 tmpstr, fcmp_Constraint_Name) ;
      Constraint_S.Name = $2 ; }

  | tType tSTRING tEND
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", $2);
	Get_Valid_SXD(Constraint_Type);
      }
      Free($2) ;
    }

  | tCase '{' ConstraintCases '}'
    { Constraint_S.ConstraintPerRegion = $3 ; }

  | tCase tSTRING '{' ConstraintCases '}'
    {
      if (!Nbr_Index) {
	if (!Constraint_S.MultiConstraintPerRegion)
	  Constraint_S.MultiConstraintPerRegion =
	    List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

	MultiConstraintPerRegion_S.Name = $2 ;
	MultiConstraintPerRegion_S.ConstraintPerRegion = $4 ;
	MultiConstraintPerRegion_S.Active = NULL ;

	List_Add(Constraint_S.MultiConstraintPerRegion, 
		 &MultiConstraintPerRegion_S) ;
      }
      else
	vyyerror("Multiple Constraint not allowed for Case Constraint") ;
    }
  ;


ConstraintCases :

    /* none */
    {
      if (!Nbr_Index)
	$$ = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
      else {
	List_Reset(ListOfConstraintPerRegion) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Constraint_S.ConstraintPerRegion =
	    List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
	  List_Add(ListOfConstraintPerRegion, &Constraint_S.ConstraintPerRegion) ;
	}
	$$ = Constraint_S.ConstraintPerRegion ;
      }
    }

  | ConstraintCases  '{' ConstraintCase '}'
    {
      if (!Nbr_Index)
	List_Add($$ = $1, &ConstraintPerRegion_S) ;
      else {
	if (List_Nbr(ListOfRegionIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfRegionIndex, k, &ConstraintPerRegion_S.RegionIndex) ;
	    if (List_Nbr(ListOfSubRegionIndex))
	      List_Read
		(ListOfSubRegionIndex, k, &ConstraintPerRegion_S.SubRegionIndex) ;

	    List_Read
	      (ListOfConstraintPerRegion, k, &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Constraint_S.ConstraintPerRegion, &ConstraintPerRegion_S) ;
	  }
	$$ = Constraint_S.ConstraintPerRegion ;
      }
    }

  | ConstraintCases Loop
    { 
      $$ = $1 ;
    }
  ;


ConstraintCase :

    /* none */
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    }

  | ConstraintCase ConstraintCaseTerm
  ;


ConstraintCaseTerm :

    tType tSTRING tEND
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", $2);
	Get_Valid_SXD(Constraint_Type);
      }
      Free($2) ;
    }

  | tRegion GroupRHS tEND
    { 
      if (!Nbr_Index){
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", $2) ;
      }
      else {
	List_Reset(ListOfRegionIndex) ;
	if ($2 >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = $2 ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else if ($2 == -1) {
	  Add_Group_Index(&Group_S, "CO_Region", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    }

  | tSubRegion GroupRHS tEND
    { 
      if (!Nbr_Index)
	ConstraintPerRegion_S.SubRegionIndex =
	  Num_Group(&Group_S, "CO_SubRegion", $2) ;
      else {
	List_Reset(ListOfSubRegionIndex) ;
	if ($2 >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = $2 ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else if ($2 == -1) {
	  Add_Group_Index(&Group_S, "CO_SubRegion", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    }

  | tTimeFunction Expression tEND
    {
      ConstraintPerRegion_S.TimeFunctionIndex = $2 ;
    }

  | tValue Expression tEND
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = $2 ;
      else  vyyerror("Value incompatible with Type") ;
    }

  | tNameOfResolution tSTRING tEND
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = $2 ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    }

  | tBranch '{' OneFExpr Comma OneFExpr '}' tEND
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)$3 ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)$5 ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    }

  | tRegionRef GroupRHS tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.RegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", $2) ;
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex = -1 ;

	ConstraintPerRegion_S.Case.Link.FilterIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = -1 ;
      }
      else  vyyerror("RegionRef incompatible with Type") ;
    }

  | tSubRegionRef GroupRHS tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", $2) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    }

  | tFunction Expression tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = $2 ;
      else  vyyerror("Function incompatible with Type") ;
    }

  | tCoefficient Expression tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = $2 ;
      else  vyyerror("Coefficient incompatible with Type") ;
    }

  | tFilter Expression tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = $2 ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    }

  | tFunction '[' Expression ',' Expression ']' tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = $3 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = $5 ;
      }
      else  vyyerror("Function incompatible with Type") ;
    }

  | tCoefficient '[' Expression ',' Expression ']' tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = $3 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = $5 ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    }

  | tFilter '[' Expression ',' Expression ']' tEND
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = $3 ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = $5 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    }

  ;


/* ------------------------------------------------------------------------ */
/*  F u n c t i o n   S p a c e                                             */
/* ------------------------------------------------------------------------ */


FunctionSpaces :

    /* none */
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    }

  | FunctionSpaces  BracedFunctionSpace 
  ;

BracedFunctionSpace :

    '{' FunctionSpace '}'
    {
      if (!Nbr_Index)
	List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
      else {
	Save_Name = strsave(FunctionSpace_S.Name) ;  Free(FunctionSpace_S.Name) ;
	if (List_Nbr(ListOfBasisFunction))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				       tmpstr, fcmp_FunctionSpace_Name) ;
	    FunctionSpace_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfBasisFunction , k, &FunctionSpace_S.BasisFunction) ;
	    if (List_Nbr(ListOfConstraintInFS))
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	    List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
	  }
	Free(Save_Name) ;
      }
    }

  | Affectation

  | Loop  
  ;


FunctionSpace :

    /* none */
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    }

  | FunctionSpace  FunctionSpaceTerm
  ;


FunctionSpaceTerm :

    tName String__Index tEND
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 $2, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = $2 ; }

  | tName tSTRING DefineDimension tEND
    { Nbr_Index = $3 ;
      sprintf(tmpstr, "%s_%d_", $2, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 tmpstr, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = $2 ; }

  | tType tSTRING tEND
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", $2);
	Get_Valid_SXD(Field_Type);
      }
      Free($2) ;
    }

  | tBasisFunction  '{' BasisFunctions '}'
    { FunctionSpace_S.BasisFunction  = $3 ; }

  | tSubSpace       '{' SubSpaces '}'
    { FunctionSpace_S.SubSpace       = $3 ; }

  | tGlobalQuantity '{' GlobalQuantities '}'
    { FunctionSpace_S.GlobalQuantity = $3 ; }

  | tConstraint     '{' ConstraintInFSs '}'
    { FunctionSpace_S.Constraint     = $3 ; }
  ;


BasisFunctions :

    /* none */
    {
      if (!Nbr_Index)
	$$ = Current_BasisFunction_L =
	  List_Create(6, 6, sizeof (struct BasisFunction)) ;
      else {
	List_Reset(ListOfBasisFunction) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.BasisFunction =
	    List_Create(6, 6, sizeof (struct BasisFunction)) ;
	  List_Add(ListOfBasisFunction, &FunctionSpace_S.BasisFunction) ;
	}
	$$ = Current_BasisFunction_L = FunctionSpace_S.BasisFunction ;
      }
    }

  | BasisFunctions  '{' BasisFunction '}'
    {
      if (!Nbr_Index) {
	if ( (i = List_ISearchSeq($1, BasisFunction_S.Name, 
				  fcmp_BasisFunction_Name)) < 0 ) {
	  /*
	  BasisFunction_S.Num = Num_BasisFunction++ ;
	  */
	  BasisFunction_S.Num = Num_BasisFunction ;
	  Num_BasisFunction += (BasisFunction_S.SubFunction)?
	    List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	}
	else  /* BasisFunction definie par morceaux => meme Num */
	  BasisFunction_S.Num = ((struct BasisFunction *)List_Pointer($1, i))->Num ;
	
	List_Add($$ = $1, &BasisFunction_S) ;
      }
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfSupportIndex, k, &BasisFunction_S.SupportIndex) ;
	    List_Read(ListOfEntityIndex , k, &BasisFunction_S.EntityIndex ) ;
	    List_Read(ListOfBasisFunction, k, &FunctionSpace_S.BasisFunction) ;

	    if ( (i = List_ISearchSeq(FunctionSpace_S.BasisFunction,
				      BasisFunction_S.Name, 
				      fcmp_BasisFunction_Name)) < 0 ) {
	      /*
	      BasisFunction_S.Num = Num_BasisFunction++ ;
	      */
	      BasisFunction_S.Num = Num_BasisFunction ;
	      Num_BasisFunction += (BasisFunction_S.SubFunction)?
		List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	    }
	    else  /* BasisFunction definie par morceaux => meme Num */
	      BasisFunction_S.Num =
		((struct BasisFunction *)
		 List_Pointer(FunctionSpace_S.BasisFunction, i))->Num ;

	    List_Add(FunctionSpace_S.BasisFunction, &BasisFunction_S) ;
	  }
	$$ = FunctionSpace_S.BasisFunction ;
      }
    }
  ;


BasisFunction :

    /* none */
    { 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SubFunction = NULL ; 
      BasisFunction_S.SubdFunction = NULL ; 
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    }

  | BasisFunction  BasisFunctionTerm
  ;


BasisFunctionTerm :

    tName tSTRING tEND
    { BasisFunction_S.Name = $2 ; }

  | tNameOfCoef tSTRING tEND
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 $2, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = $2 ; BasisFunction_S.Dimension = 1 ; }

  | tNameOfCoef tSTRING DefineDimension tEND
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 $2, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = $2 ; BasisFunction_S.Dimension = $3 ; }

  | tFunction tSTRING OptionalParametersForBasisFunction tEND
    {
      Get_3Function2NbrForString
	(BF_Function, $2, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError){
	vyyerror("Unknown Function for BasisFunction: %s", $2);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free($2) ;
    }

  | tdFunction '{' tSTRING Comma tSTRING '}' tEND
    {
      Get_3Function2NbrForString
	(BF_Function, $3, &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", $3);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free($3) ;
      Get_3Function2NbrForString
	(BF_Function, $5, &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", $5);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free($5) ;
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
      if (!Nbr_Index)
	BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", $2) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if ($2 >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = $2 ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if ($2 == -1) {
	  Add_Group_Index(&Group_S, "BF_Support", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    }

  | tEntity GroupRHS tEND
    {
      if (!Nbr_Index) {
	if ($2 >= 0) {
	  BasisFunction_S.EntityIndex = $2 ;
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	}
	else if ($2 == -1) {
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	  BasisFunction_S.EntityIndex = Add_Group(&Group_S, "BF_Entity", 1, 0) ;
	}
	else  vyyerror("Bad Group right hand side") ;

	if (BasisFunction_S.GlobalBasisFunction) {
	  if (Group_S.FunctionType == GLOBAL) {
	    if (List_Nbr(BasisFunction_S.GlobalBasisFunction) ==
		List_Nbr(Group_S.InitialList)) {
	      for (k = 0 ; k < List_Nbr(Group_S.InitialList) ; k++)
		if (*((int*)List_Pointer(Group_S.InitialList, k)) !=
		    *((int*)List_Pointer(BasisFunction_S.GlobalBasisFunction, k))) {
		  vyyerror("Bad correspondance between Group and Entity") ;
		  break ;
		}
	    }
	    else if (List_Nbr(Group_S.InitialList) != 0 ||
		     GlobalBasisFunction_S.EntityIndex != -1)
	      vyyerror("Bad correspondance between Group and Entity") ;
	  }
	  else  vyyerror("Bad correspondance between Group and Entity") ;
	}
      }
      else {
	List_Reset(ListOfEntityIndex) ;
	if ($2 >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = $2 ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else if ($2 == -1) {
	  Add_Group_Index(&Group_S, "BF_Entity", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    }
  ;


OptionalParametersForBasisFunction :

    /* none */

  | '{' tQuantity tSTRING tEND
    tFormulation tSTRING DefineDimension tEND
    { 
      Save_Nbr_Index = Nbr_Index ; Nbr_Index = $7 ; 
    }
    tGroup GroupRHS tEND
    {
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create($7, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", $6) ;
    }
    tResolution tSTRING MultipleIndex tEND '}'
    {
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", $6) ;

      for (k = 0 ; k < $7 ; k++) {

	List_Read(ListOfInt_L, k, &i) ;
	List_Read(Problem_S.Group, i, &Group_S) ;
	if (List_Nbr(Group_S.InitialList) == 1) {
	  List_Read(Group_S.InitialList, 0, &i) ;
	  GlobalBasisFunction_S.EntityIndex = i ;
	}
	else if (List_Nbr(Group_S.InitialList) == 0) {
	  GlobalBasisFunction_S.EntityIndex = -1 ;
	}
	else
	  vyyerror("Only one Region needed in Group: %s", Group_S.Name) ;

	sprintf(tmpstr, "%s_%d_", $6, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) < 0)
	  vyyerror("Unknown Formulation: %s {%d}", $6, k+1) ;
	else {
	  GlobalBasisFunction_S.FormulationIndex = i ;

	  sprintf(tmpstr, "%s_%d_", $15, k+1) ;
	  if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				   fcmp_Resolution_Name)) < 0)
	    vyyerror("Unknown Resolution: %s {%d}", $15, k+1) ;
	  else {
	    GlobalBasisFunction_S.ResolutionIndex = i ;

	    GlobalBasisFunction_S.DefineQuantityIndex = -1 ;
	    GlobalBasisFunction_S.QuantityStorage = NULL ;
	    List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
	  }
	}
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      for (k = 0 ; k < $7 ; k++) {
	List_Read(BasisFunction_S.GlobalBasisFunction, k, &GlobalBasisFunction_S) ;
	List_Read(Problem_S.Formulation,
		  GlobalBasisFunction_S.FormulationIndex, &Formulation_S) ;
	if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, $3, 
				 fcmp_DefineQuantity_Name)) < 0) {
	  vyyerror("Unknown Quantity '%s' in Formulation '%s'", $3,
		   Formulation_S.Name) ;
	  break ;
	}
	else {
	  GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  List_Write(BasisFunction_S.GlobalBasisFunction, k,
		     &GlobalBasisFunction_S) ;
	}
      }

      Free($3) ; Free($6) ; Free($15) ;
    }
  ;


SubSpaces :

    /* none */
    { 
      $$ = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    }

  | SubSpaces  '{' SubSpace '}'
    { 
      List_Add($$ = $1, &SubSpace_S) ; 
    }
  ;


SubSpace :

    /* none */
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    }

  | SubSpace  SubSpaceTerm
  ;


SubSpaceTerm :

    tName tSTRING tEND
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 $2, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = $2 ; 
    }

  | tNameOfBasisFunction ListOfBasisFunction tEND
    { SubSpace_S.BasisFunction = $2 ; }

  | tNameOfCoef ListOfBasisFunctionCoef tEND
    { SubSpace_S.BasisFunction = $2 ; }
  ;


ListOfBasisFunction :

    tSTRING
    {
      $$ = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       $1, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", $1) ;
      else {
	List_Add($$, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   $1, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add($$, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      Free($1) ;
    }

  | '{' RecursiveListOfBasisFunction '}'
    { $$ = $2 ; }
  ;


RecursiveListOfBasisFunction :

    /* none */    { $$ = List_Create(5, 5, sizeof(int)) ; }

  | RecursiveListOfBasisFunction Comma tSTRING
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       $3, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", $3) ;
      else {
	List_Add($1, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   $3, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add($1, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      $$ = $1 ; Free($3) ;
    }
  ;


ListOfBasisFunctionCoef :

    tSTRING
    {
      $$ = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       $1, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", $1) ;
      else {
	List_Add($$, &i) ; j = i+1 ;
      }
      Free($1) ;
    }

  | '{' RecursiveListOfBasisFunctionCoef '}'
    { $$ = $2 ; }
  ;


RecursiveListOfBasisFunctionCoef :

    /* none */
    { 
      $$ = List_Create(5, 5, sizeof(int)) ; 
    }

  | RecursiveListOfBasisFunctionCoef Comma tSTRING
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       $3, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", $3) ;
      else {
	List_Add($1, &i) ; j = i+1 ;
      }
      $$ = $1 ; Free($3) ;
    }
  ;


GlobalQuantities :

    /* none */
    { 
      $$ = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    }

  | GlobalQuantities  '{' GlobalQuantity '}'
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add($$ = $1, &GlobalQuantity_S) ;
    }
  ;


GlobalQuantity :

    /* none */
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    }

  | GlobalQuantity  GlobalQuantityTerm
  ;


GlobalQuantityTerm :

    tName String__Index tEND
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 $2, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = $2 ; 
    }

  | tType tSTRING tEND
    { 
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", $2);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free($2) ;
    }

  | tNameOfCoef tSTRING tEND
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, $2, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", $2) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free($2) ;
    }
  ;


ConstraintInFSs :

    /* none */
    {
      if (!Nbr_Index)
	$$ = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
      else {
	List_Reset(ListOfConstraintInFS) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.Constraint =
	    List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
	  List_Add(ListOfConstraintInFS, &FunctionSpace_S.Constraint) ;
	}
	$$ = FunctionSpace_S.Constraint ;
      }
    }

  | ConstraintInFSs '{' ConstraintInFS '}'
    {
      Group_S.FunctionType = Type_Function ;
      Group_S.SuppListType = Type_SuppList ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }

      if (!Nbr_Index && Constraint_Index >= 0) {
	Constraint_P = (struct Constraint *)
	  List_Pointer(Problem_S.Constraint, Constraint_Index) ;

	for (i = 0 ; i < List_Nbr(Constraint_P->ConstraintPerRegion) ; i++) {
	  ConstraintPerRegion_P = (struct ConstraintPerRegion *)
	    List_Pointer(Constraint_P->ConstraintPerRegion, i) ;

	  if (ConstraintPerRegion_P->RegionIndex >= 0) {
	    Group_S.InitialList =
	      ((struct Group *)
	       List_Pointer(Problem_S.Group, ConstraintPerRegion_P->RegionIndex))
	      ->InitialList ;
	    Group_S.InitialSuppList =
	      (ConstraintPerRegion_P->SubRegionIndex >= 0)?
	      ((struct Group *)
	       List_Pointer(Problem_S.Group,
			    ConstraintPerRegion_P->SubRegionIndex))
	      ->InitialList : NULL ;
	    ConstraintInFS_S.EntityIndex = Add_Group(&Group_S, "CO_Entity", 1, 0) ;
	    ConstraintInFS_S.ConstraintPerRegion = ConstraintPerRegion_P ;
	    
	    List_Add($$ = $1, &ConstraintInFS_S) ;
	  }
	}
      }

      else if (Nbr_Index && List_Nbr(ListOfConstraintIndex)) {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  List_Read(ListOfConstraintIndex, k, &Constraint_Index) ;
	  /* same as above... */
	  Constraint_P = (struct Constraint *)
	    List_Pointer(Problem_S.Constraint, Constraint_Index) ;

	  for (i = 0 ; i < List_Nbr(Constraint_P->ConstraintPerRegion) ; i++) {
	    ConstraintPerRegion_P = (struct ConstraintPerRegion *)
	      List_Pointer(Constraint_P->ConstraintPerRegion, i) ;

	    if (ConstraintPerRegion_P->RegionIndex >= 0) {
	      Group_S.InitialList =
		((struct Group *)
		 List_Pointer(Problem_S.Group, ConstraintPerRegion_P->RegionIndex))
		->InitialList ;
	      Group_S.InitialSuppList =
		(ConstraintPerRegion_P->SubRegionIndex >= 0)?
		((struct Group *)
		 List_Pointer(Problem_S.Group,
			      ConstraintPerRegion_P->SubRegionIndex))
		->InitialList : NULL ;
	      ConstraintInFS_S.EntityIndex = Add_Group(&Group_S, "CO_Entity", 1, 0) ;
	      ConstraintInFS_S.ConstraintPerRegion = ConstraintPerRegion_P ;
	      /* ... same */
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	      List_Add(FunctionSpace_S.Constraint, &ConstraintInFS_S) ;
	    }
	  }
	}
      }

    }
  ;


ConstraintInFS :

    /* none */
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    }

  | ConstraintInFS  ConstraintInFSTerm
  ;


ConstraintInFSTerm :

    tNameOfCoef tSTRING tEND
    { if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, $2, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) {
	if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, $2,
				 fcmp_GlobalQuantity_Name)) < 0)
	  vyyerror("Unknown NameOfCoef: %s", $2) ;
	else {
	  ConstraintInFS_S.QuantityType   = GLOBALQUANTITY ;
	  ConstraintInFS_S.ReferenceIndex = i ;
	}
      }
      else {
	ConstraintInFS_S.QuantityType   = LOCALQUANTITY ;
	ConstraintInFS_S.ReferenceIndex = i ;
      }
      Free($2) ;
    }

/* Attention: doit disparaitre
  | tEntity FunctionForGroup tNameOfConstraint tSTRING tEND
    {
      if (!Nbr_Index) {
	Type_Function = $2 ;
	Type_SuppList = SUPPLIST_NONE ;
	Constraint_Index =
	  List_ISearchSeq(Problem_S.Constraint, $4, fcmp_Constraint_Name) ;
      }
      else {
	vyyerror("New syntax for Constraint needed in multiple FunctionSpace") ;
      }
      Free($4) ;
    }
*/
  | tEntityType FunctionForGroup tEND
    { Type_Function = $2 ; }

  | tEntitySubType SuppListTypeForGroup tEND
    { Type_SuppList = $2 ; }

  | tNameOfConstraint String__Index MultipleIndex tEND
    {
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex) {
	  Constraint_Index =
	    List_ISearchSeq(Problem_S.Constraint, $2, fcmp_Constraint_Name) ;
	}
	else {
	  vyyerror("Multiple Constraint out of context: %s {}", $2) ;
	}
      }
      else {
	List_Reset(ListOfConstraintIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Constraint, $2,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s", $2) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", $2, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Constraint, tmpstr,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s {%d}", tmpstr, k+1) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	}
      }
      Free($2) ;
    }
  ;


/* ------------------------------------------------------------------------ */
/*  F o r m u l a t i o n                                                   */
/* ------------------------------------------------------------------------ */

Formulations :

    /* none */
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    }

  | Formulations  BracedFormulation 
  ;

BracedFormulation :

    '{' Formulation '}'
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Formulation, &Formulation_S) ;
      else {
	Save_Name = strsave(Formulation_S.Name) ;  Free(Formulation_S.Name) ;
	if (List_Nbr(ListOfDefineQuantity))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    Formulation_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Read(ListOfEquationTerm  , k, &Formulation_S.Equation      ) ;
	    List_Add(Problem_S.Formulation, &Formulation_S) ;
	  }
	Free(Save_Name) ;
      }
    }

  | Affectation

  | Loop
  ;


Formulation :

    /* none */
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    }

  | Formulation  FormulationTerm
  ;


FormulationTerm :

    tName String__Index tEND
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 $2, fcmp_Formulation_Name) ;
      Formulation_S.Name = $2 ; }

  | tName tSTRING DefineDimension tEND
    { Nbr_Index = $3 ;
      sprintf(tmpstr, "%s_%d_", $2, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 tmpstr, fcmp_Formulation_Name) ;
      Formulation_S.Name = $2 ; }

  | tType tSTRING tEND
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", $2);
	Get_Valid_SXD(Formulation_Type);
      }
      Free($2) ;
    }

  | tQuantity  '{' DefineQuantities '}'

  | tEquation  '{' Equations '}'
    { Formulation_S.Equation = $3 ; }
  ;


DefineQuantities :
    /* none */
    {
      if (!Nbr_Index)
	Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
      else {
	List_Reset(ListOfDefineQuantity) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.DefineQuantity =
	    List_Create(6, 6, sizeof (struct DefineQuantity)) ;
	  List_Add(ListOfDefineQuantity, &Formulation_S.DefineQuantity) ;
	}
      }
    }

  | DefineQuantities  '{' DefineQuantity '}'
    {
      if (!Nbr_Index)
	List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
      else {
	if (List_Nbr(ListOfFunctionSpaceIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfFunctionSpaceIndex, k, &DefineQuantity_S.FunctionSpaceIndex) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
	  }
      }
    }

  | DefineQuantities Loop
  ;


DefineQuantity :

    /* none */
    { DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;
      DefineQuantity_S.DummyFrequency = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    }

  | DefineQuantity DefineQuantityTerm
  ;


DefineQuantityTerm :

    tName String__Index tEND
    { DefineQuantity_S.Name = $2 ; }

  | tType tGlobalQuantity tEND
    { DefineQuantity_S.Type = GLOBALQUANTITY ; }

    /* Doit rester tant qu'on ne supprime pas l'association 'Integral <-> tGalerkin' */
  | tType tGalerkin tEND
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; }

  | tType tSTRING tEND
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", $2);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free($2) ;
    }

  | tDummyFrequency ListOfFExpr tEND
    { DefineQuantity_S.DummyFrequency = $2;
    }

  | tNameOfSpace String__Index 
    {
      if (!Nbr_Index) {
	if ((i = List_ISearchSeq(Problem_S.FunctionSpace, $2,
				 fcmp_FunctionSpace_Name)) < 0)
	  vyyerror("Unknown FunctionSpace: %s", $2) ;
	else
	  DefineQuantity_S.FunctionSpaceIndex = i ;
      }
      else{ 
	vyyerror("Multiple Formulation out of context: %s {}", $2) ;
      }
    }
    IndexInFunctionSpace tEND
    { 
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == GLOBALQUANTITY &&
	    !DefineQuantity_S.IndexInFunctionSpace) {
	  if (DefineQuantity_S.Name) {
	    List_Read(Problem_S.FunctionSpace,
		      DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	    if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				     DefineQuantity_S.Name,
				     fcmp_GlobalQuantity_Name)) < 0) {
	      vyyerror("Unknown GlobalQuantity: %s", DefineQuantity_S.Name) ;
	    }
	    else {
	      DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	      List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	    }
	  }
	  else  vyyerror("No Name pre-defined for GlobalQuantity") ;
	}
      }
     
    }

/* Patrick, temporary for compatibility with 'String__Index' syntax (19/01/2004)
  | tNameOfSpace tSTRING MultipleIndex
*/
  | tNameOfSpace tSTRING '{' '}'
    {
      Flag_MultipleIndex = 1 ;

      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.FunctionSpace, $2,
				   fcmp_FunctionSpace_Name)) < 0)
	    vyyerror("Unknown FunctionSpace: %s", $2) ;
	  else
	    DefineQuantity_S.FunctionSpaceIndex = i ;
	}
	else{ 
	  vyyerror("Multiple Formulation out of context: %s {}", $2) ;
	}
      }
      else {
	List_Reset(ListOfFunctionSpaceIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, $2,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s", $2) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", $2, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, tmpstr,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s {%d}", tmpstr, k+1) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	}
      }
    }
    IndexInFunctionSpace tEND
    { /* attention : doit disparaitre. */
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == GLOBALQUANTITY &&
	    !DefineQuantity_S.IndexInFunctionSpace) {
	  if (DefineQuantity_S.Name) {
	    List_Read(Problem_S.FunctionSpace,
		      DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	    if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				     DefineQuantity_S.Name,
				     fcmp_GlobalQuantity_Name)) < 0) {
	      vyyerror("Unknown GlobalQuantity: %s", DefineQuantity_S.Name) ;
	    }
	    else {
	      DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	      List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	    }
	  }
	  else  vyyerror("No Name pre-defined for GlobalQuantity") ;
	}
      }
      Free($2) ;
    }

  | tIndexOfSystem tINT tEND
    { 
      DefineQuantity_S.DofDataIndex = $2 ; 
    }

  | '['
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    }
    WholeQuantityExpression ']' tEND
    { 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = $3 ;
      DefineQuantity_S.IntegralQuantity.DofIndexInWholeQuantity = 
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(DefineQuantity_S.IntegralQuantity.WholeQuantity, 0) ;

      /* Ce qui suit ne suffit pas : il faudrait aussi gerer des
	Quantity_def sans Dof */

      if (Current_DofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
	DefineQuantity_S.FunctionSpaceIndex = 
	  ((struct DefineQuantity*)
	   List_Pointer(Formulation_S.DefineQuantity,
			DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof))->
	  FunctionSpaceIndex ;
      }
      else { /* No Dof{} */
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof = NOOP ;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form */

      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_NONE ;

      if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 1){

	/* GF_FUNCTION */	
	if ( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION ) {
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	   	  
	  if (!FlagError){	   
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	    
	  
	}
      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 3){
	
	/* GF_FUNCTION  OPER  DOF */
	if     ( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 1 ) {
	  
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_DOF ;
	    
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;
	}

	/* DOF OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 0 ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;/* Scalar Prod Transitive */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_DOF_PVEC_GF ;
	  
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
	}

	/* GF_FUNCTION  OPER  EXPR */
	else if( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+1)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR  ) {
	 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
		  
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+1)->Case.Expression.Index ;
	    
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_EXP ;
	  /*
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	  */
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	}	  
      
	/* EXPR OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR  ) {
	 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct) ;
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;/* Transitive product */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF ;
	     
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
	}
      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 5){
	
	/* EXPR  OPER  GF_FUNCTION  OPER  DOF */
	if     ( (WholeQuantity_P+0)->Type == WQ_EXPRESSION          &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3 ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	  
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PVEC_DOF ;
	  } 
	}

	/* FCT OPER  GF_FUNCTION  OPER  DOF */	
	else if( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3 ) {
 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.AnyFunction.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PVEC_DOF ;
	  } 
	}
      }

      Pro_DefineQuantityIndex
	(DefineQuantity_S.IntegralQuantity.WholeQuantity,
	 -1,
	 &DefineQuantity_S.IntegralQuantity.NbrQuantityIndex,
	 &DefineQuantity_S.IntegralQuantity.QuantityIndexTable,
	 &DefineQuantity_S.IntegralQuantity.QuantityTraceGroupIndexTable) ;
      if(DefineQuantity_S.IntegralQuantity.NbrQuantityIndex > 1)
	vyyerror("More than one LocalQuantity in IntegralQuantity");

    }

  | tIn GroupRHS tEND
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", $2) ;
    }

  | tIntegration tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", $2) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free($2) ;
    }

  | tFMMIntegration tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", $2) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free($2) ;
    }

  | tJacobian tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, $2,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", $2) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free($2) ;
    }

  | tSymmetry tINT tEND
    { DefineQuantity_S.IntegralQuantity.Symmetry = $2 ; }

  ;

IndexInFunctionSpace :

    /* none */
  | '[' String__Index ']'
    {
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == LOCALQUANTITY) {
	  if ((i = List_ISearchSeq
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, $2,
		fcmp_SubSpace_Name)) < 0)
	    vyyerror("Unknown SubSpace: %s", $2) ;
	  else {
	    DefineQuantity_S.IndexInFunctionSpace =
	      ((struct SubSpace *)
	       List_Pointer
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, i))
		->BasisFunction ;
	  }
	}
	else if (DefineQuantity_S.Type == GLOBALQUANTITY) {
	  List_Read(Problem_S.FunctionSpace,
		    DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	  if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				   $2, fcmp_GlobalQuantity_Name)) < 0) {
	    vyyerror("Unknown GlobalQuantity: %s", $2) ;
	  }
	  else {
	    DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	    List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	  }
	}
      }
      Free($2) ;
    }
  ;


Equations :

    /* none */
    {
      if (!Nbr_Index)
	$$ = List_Create(6, 6, sizeof(struct EquationTerm)) ;
      else {
	List_Reset(ListOfEquationTerm) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.Equation =
	    List_Create(6, 6, sizeof (struct EquationTerm)) ;
	  List_Add(ListOfEquationTerm, &Formulation_S.Equation) ;
	}
	$$ = Formulation_S.Equation ;
      }
    }

  | Equations  EquationTerm
    {
      if (!Nbr_Index)
	List_Add($$ = $1, &EquationTerm_S) ;
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (EquationTerm_S.Type == GALERKIN || EquationTerm_S.Type == DERHAM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.LocalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALTERM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.GlobalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALEQUATION)  /* Attention: Pas fait ! */
	      vyyerror("Multiple GlobalEquation not yet implemented in parser ...") ; 

	    List_Read(ListOfEquationTerm, k, &Formulation_S.Equation) ;

	    List_Add(Formulation_S.Equation, &EquationTerm_S) ;
	  }
	$$ = Formulation_S.Equation ;
      }
    }

  | Equations  Affectation
    {
      $$ = $1 ;
    }

  | Equations  Loop
    {
      $$ = $1 ;
    }
  ;


EquationTerm :

    tGalerkin  '{' LocalTerm '}'
    { EquationTerm_S.Type = GALERKIN ; }

  | tdeRham  '{' LocalTerm '}'
    { EquationTerm_S.Type = DERHAM ; }

  | tGlobalTerm  '{' GlobalTerm '}'
    { EquationTerm_S.Type = GLOBALTERM ; }

  | tGlobalEquation  '{' GlobalEquation '}'
    { EquationTerm_S.Type = GLOBALEQUATION ; }
/*
  | tDiscreteGeometry  '{' LocalTerm '}'
    { EquationTerm_S.Type = DISCRETEGEOMETRY ; }
*/
  ;


GlobalEquation :

    /* none */
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    }
  | GlobalEquation GlobalEquationTerm
  ;

GlobalEquationTerm :

    tType tSTRING tEND
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", $2);
	Get_Valid_SXD(Constraint_Type);
      }
      Free($2) ;
    }

  | tNameOfConstraint tSTRING tEND
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, $2,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free($2) ;
    }

  | '{' GlobalEquationTermTerm '}'
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    }
  ;



GlobalEquationTermTerm :

    /* none */
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    }
  | GlobalEquationTermTerm GlobalEquationTermTermTerm
  ;

GlobalEquationTermTermTerm :

    tNode Quantity_Def  tEND
    { GlobalEquationTerm_S.DefineQuantityIndexNode = $2.Int2 ; }
  | tLoop Quantity_Def  tEND
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = $2.Int2 ; }
  | tEquation Quantity_Def  tEND
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = $2.Int2 ; }
  | tIn GroupRHS tEND
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", $2) ; }
  ;



LocalTerm :

    /* none */
    { EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = NOOP ;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = NULL ;
      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 0 ;
      EquationTerm_S.Case.LocalTerm.InIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.MatrixIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.Active = NULL ;
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 0 ;
    }

  | LocalTerm LocalTermTerm
  ;


LocalTermTerm  :

    TermOperator '['
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    }

    WholeQuantityExpression
    { EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = $4 ;

      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity, 0) ;

      if (Current_DofIndexInWholeQuantity == -4){
	EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 1 ;
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = 
	  TypeOperatorDofInTrace ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = 
	  DefineQuantityIndexDofInTrace ;
      }
      else if (Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_TIME_DOF ;
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_PVEC_DOF ;
	    
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Fct =
	  (WholeQuantity_P+0)->Case.Function.Fct ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.NbrParameters =
	  (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Para =
	  (WholeQuantity_P+0)->Case.Function.Para ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_DOF ;
      }
      else {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_NONE ;
      }

    }

    ','  WholeQuantityExpression ']'  tEND
    { 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer($7, 0) ;

      if (List_Nbr($7) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing Quantity in Equation");
      }
      else if (List_Nbr($7) == 3 &&
	       ( (WholeQuantity_P+0)->Type == WQ_EXPRESSION &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR ) ) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = 
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical_Equ = 
	  (WholeQuantity_P+0)->Case.Expression.Index ;
	EquationTerm_S.Case.LocalTerm.Term.OperatorTypeForCanonical_Equ =
	  (WholeQuantity_P+2)->Case.Operator.TypeOperator ;
      }
      else{
	vyyerror("Unrecognized quantity structure in Equation");
      }

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityTraceGroupIndexTable) ;

      EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 0 ;
      for (i = 0 ; i < EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex ; i++) {
	if ((EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu) &&
	    (EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof)) {
	  EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 1 ;
	  break ;
	}
      }
    }

  | tIn GroupRHS tEND
    {
      if (!Nbr_Index)
	EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", $2) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if ($2 >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = $2 ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if ($2 == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    }

  | tJacobian tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, $2,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",$2) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free($2) ;
    }

  | tIntegration tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", $2) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free($2) ;
    }

  | tFull_Matrix tEND
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    }

  | tFMMIntegration tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", $2) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free($2) ;
    }

  | tMatrix '[' tINT ']' tEND
    { if ( $3 == 1 || $3 == 2 || $3 == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = $3 ;
      else
	vyyerror("Unknown Matrix123: %d", $3) ;
    }
  ;


GlobalTerm :

    /* none */
    { EquationTerm_S.Case.GlobalTerm.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.GlobalTerm.DefineQuantityIndex = -1 ;

      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = NOOP ;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = NULL ;
      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity = -1 ;
      EquationTerm_S.Case.GlobalTerm.InIndex = -1 ;
    }

  | GlobalTerm  GlobalTermTerm
  ;


GlobalTermTerm :
/*
    TermOperator
    { 
      EquationTerm_S.Case.GlobalTerm.TypeTimeDerivative  = Type_TermOperator ;
    }

    '{' Quantity_Def  ']' tEND
    { EquationTerm_S.Case.GlobalTerm.DefineQuantityIndex = $2.Int2 ; }
*/
    tIn GroupRHS tEND
    {
      if (!Nbr_Index)
	EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", $2) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if ($2 >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = $2 ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if ($2 == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    }

  |  TermOperator '['
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    }

    WholeQuantityExpression
    { EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = $4 ;

      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity, 0) ;

      if (Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP ;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if ((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.GlobalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_DOF ;
      }
      else {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_NONE ;
      }

    }

    ','  Quantity_Def  ']' tEND
    { EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = $7.Int1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = $7.Int2 ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    }

  ;



TermOperator :

    /* none */     { Type_TermOperator = NODT_    ; }
  | tDt            { Type_TermOperator = DT_      ; }
  | tDtDof         { Type_TermOperator = DTDOF_   ; }
  | tDtDt          { Type_TermOperator = DTDT_    ; }
  | tDtDtDof       { Type_TermOperator = DTDTDOF_ ; }
  | tJacNL         { Type_TermOperator = JACNL_   ; }
  | tNeverDt       { Type_TermOperator = NEVERDT_ ; }
  | tDtNL          { Type_TermOperator = DTNL_    ; }
  ;


Quantity_Def :

    '{' tSTRING String__Index '}'
    { $$.Int1 = Get_DefineForString(Operator_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown Operator for discrete Quantity: %s", $2);
	Get_Valid_SXD(Operator_Type);
      }
      Free($2) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, $3,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", $3) ;
      $$.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = $$.Int1 ;
      Quantity_Index = $$.Int2 ;

      Free($3) ;
    }

  | '{' String__Index '}'
    { $$.Int1 = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, $2,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", $2) ;
      $$.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = $$.Int1 ;
      Quantity_Index = $$.Int2 ;

      Free($2) ;
    }
  ;  


/* ------------------------------------------------------------------------ */
/*  R e s o l u t i o n                                                     */
/* ------------------------------------------------------------------------ */

Resolutions :

    /* none */
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    }

  | Resolutions  BracedResolution
  ;

BracedResolution :

    '{' Resolution '}'
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Resolution, &Resolution_S) ;
      else {
	Save_Name = strsave(Resolution_S.Name) ;  Free(Resolution_S.Name) ;
	if (List_Nbr(ListOfDefineSystem))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				       tmpstr, fcmp_Resolution_Name) ;
	    Resolution_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Problem_S.Resolution, &Resolution_S) ;
	  }
	Free(Save_Name) ;
      }
    }

  | Affectation

  | Loop
  ;


Resolution :

    /* none */
    { Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    }

  | Resolution  ResolutionTerm
  ;


ResolutionTerm :

    tName String__Index tEND
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 $2, fcmp_Resolution_Name) ;
      Resolution_S.Name = $2 ;
    }

  | tName tSTRING DefineDimension tEND
    { Nbr_Index = $3 ;
      sprintf(tmpstr, "%s_%d_", $2, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 tmpstr, fcmp_Resolution_Name) ;
      Resolution_S.Name = $2 ; }

  | tDefineSystem  '{' DefineSystems '}'
    { Resolution_S.DefineSystem = $3 ; }

  | tOperation
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; }
    '{' Operation '}'
    { Resolution_S.Operation = $4 ;  List_Delete(Operation_L) ; }

  | Loop
  ;


DefineSystems :
    /* none */
    {
      if (!Nbr_Index)
	$$ = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
      else {
	List_Reset(ListOfDefineSystem) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Resolution_S.DefineSystem =
	    List_Create(6, 6, sizeof (struct DefineSystem)) ;
	  List_Add(ListOfDefineSystem, &Resolution_S.DefineSystem) ;
	}
	$$ = Current_System_L = Resolution_S.DefineSystem ;
      }
    }

  | DefineSystems  '{' DefineSystem '}'
    {
      if (!Nbr_Index)
	List_Add($$ = Current_System_L = $1, &DefineSystem_S) ;
      else {
	if (List_Nbr(ListOfListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfListOfFormulation, k, &DefineSystem_S.FormulationIndex) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Resolution_S.DefineSystem, &DefineSystem_S) ;
	  }
	$$ = Current_System_L = Resolution_S.DefineSystem ;
      }
    }

  |  DefineSystems Loop
     {
       $$ = $1 ;
     }

  ;


DefineSystem :

    /* none */
    { DefineSystem_S.Name = NULL ;  
      DefineSystem_S.Type = VAL_REAL ;
      DefineSystem_S.FormulationIndex = NULL ;
      DefineSystem_S.MeshName = NULL ;
      DefineSystem_S.AdaptName = NULL ;
      DefineSystem_S.FrequencyValue = NULL ;
      DefineSystem_S.SolverDataFileName = NULL ;
      DefineSystem_S.OriginSystemIndex = NULL ;
      DefineSystem_S.DestinationSystemName = NULL ;
      DefineSystem_S.DestinationSystemIndex = -1 ;
      DefineSystem_S.Flag_FMM = 0 ;
    }

  | DefineSystem DefineSystemTerm
  ;


DefineSystemTerm :

    tName String__Index tEND
    { DefineSystem_S.Name = $2 ; }

  | tType tSTRING tEND
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", $2);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free($2) ;
    }

  | tNameOfFormulation ListOfFormulation tEND
    { DefineSystem_S.FormulationIndex = $2 ; }

  | tNameOfMesh CharExpr tEND
    {
      DefineSystem_S.MeshName = $2 ;
    }

  | tOriginSystem ListOfSystem tEND
    { 
      DefineSystem_S.OriginSystemIndex = $2 ;
    }

  | tDestinationSystem tSTRING tEND
    { 
      DefineSystem_S.DestinationSystemName = $2 ; 
    }

  | tFrequency ListOfFExpr tEND
    { DefineSystem_S.FrequencyValue = $2;
      DefineSystem_S.Type = VAL_COMPLEX ;
    }

  | tSolver CharExpr tEND
    {
      DefineSystem_S.SolverDataFileName = $2 ;
    }

  | Loop
  ;


ListOfFormulation :

    String__Index MultipleIndex
    {
      if (!Nbr_Index) {
	$$ = List_Create(1, 1, sizeof(int)) ;
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, $1, fcmp_Formulation_Name)) < 0)
	    vyyerror("Unknown Formulation: %s", $1) ;
	  else  List_Add($$, &i) ;
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", $1) ;
	}
      }
      else {
	List_Reset(ListOfListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  DefineSystem_S.FormulationIndex = List_Create(1, 1, sizeof(int)) ;
	  List_Add(ListOfListOfFormulation, &DefineSystem_S.FormulationIndex) ;

	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, $1,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", $1) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", $1, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", $1, k+1) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	}
      }
      Free($1) ;
    }

  | '{' RecursiveListOfFormulation '}'
    { $$ = $2 ; }
  ;


RecursiveListOfFormulation :

    /* none */    
    { $$ = List_Create(2, 2, sizeof(int)) ; }

  | RecursiveListOfFormulation Comma String__Index
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, $3, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", $3) ;
      else  
	List_Add($1, &i) ;
      $$ = $1 ; Free($3) ;
    }
  ;

ListOfSystem :

    String__Index
    {
      $$ = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, $1, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $1) ;
      else  
	List_Add($$, &i) ;
      Free($1) ;
    }

  | '{' RecursiveListOfSystem '}'
    { $$ = $2 ;  }
  ;

RecursiveListOfSystem :

    /* none */    
    { $$ = List_Create(2, 2, sizeof(int)) ; }

  | RecursiveListOfSystem Comma String__Index
    {
      if ((i = List_ISearchSeq(Current_System_L, $3, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      else  
	List_Add($1, &i) ;
      $$ = $1 ; Free($3) ;
    }
  ;


Operation :
    /* none */
    { 
      $$ = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    }

  | Operation OperationTerm
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add($$ = $1, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    }
  ;

OperationTerm :

  /* OLD syntax */

    tSTRING String__Index tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, $1, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", $1);
	Get_Valid_SXD(Operation_Type);
      }
      Free($1) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $2,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $2) ;
      Free($2) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    }

  | tSetTime Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = $2 ;
    }

  | tTimeLoopTheta '{' TimeLoopTheta '}' 
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    }

  | tTimeLoopNewmark '{' TimeLoopNewmark '}' 
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    }

  | tIterativeLoop '{' IterativeLoop '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    }

  | tIterativeTimeReduction '{' IterativeTimeReduction '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    }

  /* NEW syntax (function style): Only missing is IterativeTimeReduction */

  | tSTRING '[' String__Index ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, $1, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", $1);
	Get_Valid_SXD(Operation_Type);
      }
      Free($1) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;
    }

  | tSetTime '[' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = $3 ;
    }

  | tBreak tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    }

  | tIf '[' Expression ']' '{' Operation '}' 
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = $3 ;
      Operation_P->Case.Test.Operation_True = $6 ;
      Operation_P->Case.Test.Operation_False = NULL ;
    }

  | tIf '[' Expression ']' '{' Operation '}' tElse '{' Operation '}' 
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = $3 ;
      Operation_P->Case.Test.Operation_True = $6 ;
      Operation_P->Case.Test.Operation_False = $10 ;
    }

  | tSetFrequency '[' tSTRING ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = $5 ;
    }


  | tGenerateFMMGroups '[' tSTRING ',' Expression ',' Expression ',' Expression ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = $5;      
      Operation_P->Case.GenerateFMMGroups.Dfar = $7;
      Operation_P->Case.GenerateFMMGroups.Precision = $9;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = $11;      
    }

  | tGenerateFMMGroups '[' tSTRING ',' Expression ',' Expression ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = $5;      
      Operation_P->Case.GenerateFMMGroups.Dfar = $7;
      Operation_P->Case.GenerateFMMGroups.Precision = $9;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    }

  | tGenerateFMMGroups '[' tSTRING ',' Expression ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = $5;      
      Operation_P->Case.GenerateFMMGroups.Dfar = $7;
      Operation_P->Case.GenerateFMMGroups.Precision = -1;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    }

  | tGenerateOnly '[' tSTRING ',' ListOfFExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr($5),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr($5) ; i++){
	List_Read($5,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete($5); 
    }

  | tGenerateOnlyJac '[' tSTRING ',' ListOfFExpr ']' tEND
     { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLYJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr($5),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr($5) ; i++){
	List_Read($5,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete($5); 
    }


  | tUpdate '[' tSTRING ',' Expression ']' tEND
    { Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = $5 ;
    }
    
  | tUpdateConstraint '[' tSTRING ',' GroupRHS ',' tSTRING ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
    Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex =
	Num_Group(&Group_S, "OP_UpdateCst", $5) ;
      Operation_P->Case.UpdateConstraint.Type =
	Get_DefineForString(Constraint_Type, $7, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", $7);
	Get_Valid_SXD(Constraint_Type);
      }
      Free($7) ;
    }

  | tFourierTransform '[' tSTRING ',' tSTRING ',' ListOfFExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $5,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $5) ;
      Free($5) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = $7;
    }

  | tFourierTransformJ '[' tSTRING ',' tSTRING ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $5,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $5) ;
      Free($5) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = $7;
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    }

  | tLanczos '[' tSTRING ',' FExpr ',' ListOfFExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)$5 ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr($7), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr($7) ; i++) {
	List_Read($7, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete($7);
      Operation_P->Case.Lanczos.Shift = $9 ;
    }

  | tEigenSolve '[' tSTRING ',' FExpr ',' FExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)$5 ;
      Operation_P->Case.EigenSolve.Shift_r = $7 ;
      Operation_P->Case.EigenSolve.Shift_i = $9 ;
    }

  | tEigenSolveJac '[' tSTRING ',' FExpr ',' FExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVEJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)$5 ;
      Operation_P->Case.EigenSolve.Shift_r = $7 ;
      Operation_P->Case.EigenSolve.Shift_i = $9 ;
    }

  | tEvaluate '[' Expression ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)$3 ;
    }

  | tPerturbation '[' tSTRING ',' tSTRING ',' tSTRING ','
    FExpr ',' ListOfFExpr ',' FExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PERTURBATION ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $5,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $5) ;
      Free($5) ;
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $7,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $7) ;
      Free($7) ;
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i ;
      Operation_P->Case.Perturbation.Size = (int)$9 ;
      Operation_P->Case.Perturbation.Save = 
	List_Create(List_Nbr($11), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr($11) ; i++) {
	List_Read($11, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete($11);
      Operation_P->Case.Perturbation.Shift = $13 ;
      Operation_P->Case.Perturbation.PertFreq = (int)$15 ;
    }


  | tTimeLoopTheta '[' FExpr ',' FExpr ',' Expression ',' Expression ']' 
                   '{' Operation '}' 
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
      Operation_P->Case.TimeLoopTheta.Time0 = $3 ;
      Operation_P->Case.TimeLoopTheta.TimeMax = $5 ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = $7 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = $9 ;
      Operation_P->Case.TimeLoopTheta.Operation = $12 ;
    }

  | tTimeLoopNewmark '[' FExpr ',' FExpr ',' Expression ',' FExpr ',' FExpr ']' 
                     '{' Operation '}' 
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
      Operation_P->Case.TimeLoopNewmark.Time0 = $3 ; 
      Operation_P->Case.TimeLoopNewmark.TimeMax = $5 ; 
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = $7 ; 
      Operation_P->Case.TimeLoopNewmark.Beta = $9 ; 
      Operation_P->Case.TimeLoopNewmark.Gamma = $11 ; 
      Operation_P->Case.TimeLoopNewmark.Operation = $14 ;
    }

  | tIterativeLoop  '[' FExpr ',' FExpr ',' Expression ']' 
                     '{' Operation '}' 
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)$3 ;
      Operation_P->Case.IterativeLoop.Criterion = $5 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = $7 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = $10 ;
    }

  | tIterativeLoop  '[' FExpr ',' FExpr ',' Expression ',' FExpr ']' 
                     '{' Operation '}' 
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)$3 ;
      Operation_P->Case.IterativeLoop.Criterion = $5 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = $7 ;
      Operation_P->Case.IterativeLoop.Flag = (int)$9 ;
      Operation_P->Case.IterativeLoop.Operation = $12 ;
    }

  | tPrint 
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    }
   '[' PrintOperation PrintOperationOptions ']' tEND

  | tWrite
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    }
   '[' PrintOperation PrintOperationOptions ']' tEND

  | tChangeOfCoordinates '[' GroupRHS ',' Expression ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", $3) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = $5 ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    }

  | tChangeOfCoordinates '[' GroupRHS ',' Expression ',' FExpr ',' Expression ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", $3) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = $5 ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)$7 ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = $9 ; 
    }

  | tPostOperation '[' String__Index ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &$3);
    }

  | tSystemCommand '[' CharExpr ']' tEND
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = $3 ; 
    }

  | tSolveJac_AdaptRelax '[' tSTRING ',' ListOfFExpr ',' FExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)$7 ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = $5 ; 
    }

  | tSaveSolutionExtendedMH '[' tSTRING ',' FExpr ',' CharExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)$5 ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = $7 ;
    }

  | tSaveSolutionMHtoTime '[' tSTRING ',' ListOfFExpr ',' CharExpr ']' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionMHtoTime.Time = $5 ;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = $7 ;
    }


  | tInit_MovingBand2D  '{' String__Index '}' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", $3) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free($3) ;
    }

  | tMesh_MovingBand2D  '{' String__Index '}' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, $3, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", $3) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free($3) ;
    }

  | tSaveMesh  '{' String__Index ',' GroupRHS ',' CharExpr ',' Expression '}' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", $5) ;
      Operation_P->Case.SaveMesh.FileName = $7 ;
      Operation_P->Case.SaveMesh.ExprIndex = $9 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    }

  | tSaveMesh  '{' String__Index ',' GroupRHS ',' CharExpr '}' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", $5) ;
      Operation_P->Case.SaveMesh.FileName = $7 ;
      Operation_P->Case.SaveMesh.ExprIndex = -1 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    }

  | tGenerate_MH_Moving  '[' tSTRING ',' tSTRING ',' FExpr ',' FExpr ']' '{' Operation '}'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, $5, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", $5) ;
      Free($5) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = $7 ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)$9 ;
      Operation_P->Case.Generate_MH_Moving.Operation = $12 ;
    }

  | tGenerate_MH_Moving_Separate  '[' tSTRING ',' tSTRING ',' FExpr ',' FExpr ']' 
                                  '{' Operation '}'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, $5, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", $5) ;
      Free($5) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = $7 ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)$9 ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = $12 ;
    }

  | tAdd_MH_Moving  '[' tSTRING ',' FExpr ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = $5 ;
    }

  | tDeformeMesh  '{' tSTRING ',' tSTRING ',' tNameOfMesh CharExpr ',' tFLOAT '}' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = $5 ;
      Operation_P->Case.DeformeMesh.Name_MshFile = $8 ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = $10 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    }

  | tDeformeMesh  '{' tSTRING ',' tSTRING ',' tNameOfMesh CharExpr '}' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = $5 ;
      Operation_P->Case.DeformeMesh.Name_MshFile = $8 ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    }

  | tDeformeMesh  '{' tSTRING ',' tSTRING '}' tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = $5 ;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    }

  | tGenerateGroup  '[' tSTRING ',' tSTRING ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, $5, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", $5) ;
      Free($5) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    }

  | tGenerateJacGroup  '[' tSTRING ',' tSTRING ']'  tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $3,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $3) ;
      Free($3) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, $5, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", $5) ;
      Free($5) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    }

  | Loop
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    } 
  ;



PrintOperation :
    ListOfExpression
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    }

  | tSTRING
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $1,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $1) ;
      Free($1) ;
      Operation_P->DefineSystemIndex = i ;
    }

  ;

PrintOperationOptions :
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    }
  | PrintOperationOptions PrintOperationOption 
  ;

PrintOperationOption :
    ',' tFile CharExpr
    { Operation_P->Case.Print.FileOut = $3 ; }

  | ',' tTimeStep ListOfFExpr
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr($3), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr($3) ; i++){
	List_Read($3,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete($3);
    }

  | ',' ListOfFExpr
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr($2), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr($2) ; i++) {
	List_Read($2, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete($2);
    }


/* ------ the following should disapear with the new syntax ------------- */

TimeLoopTheta :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    }

  | TimeLoopTheta TimeLoopThetaTerm
  ;


TimeLoopThetaTerm :

    tTime0 FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = $2 ; }
  | tTimeMax FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = $2 ; }
  | tDTime Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = $2 ; }
  | tTheta Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = $2 ; }

  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = $3 ;
    }
  ;


TimeLoopNewmark :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = 0. ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = 1. ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopNewmark.Beta   = 0.25 ;
      Operation_P->Case.TimeLoopNewmark.Gamma  = 0.5 ;
      Operation_P->Case.TimeLoopNewmark.Operation = NULL ;
    }

  | TimeLoopNewmark TimeLoopNewmarkTerm
  ;


TimeLoopNewmarkTerm :

    tTime0 FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = $2 ; }
  | tTimeMax FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = $2 ; }
  | tDTime Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = $2 ; }
  | tBeta FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = $2 ; }
  | tGamma FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = $2 ; }

  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = $3 ;
    }
  ;


IterativeLoop :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    }

  | IterativeLoop IterativeLoopTerm
  ;

IterativeLoopTerm :

    tNbrMaxIteration FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)$2 ; }
  | tCriterion FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = $2 ; }
  | tRelaxationFactor Expression tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = $2 ; }
  | tFlag FExpr tEND  /* Attention: phase test */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)$2 ; }
  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = $3 ;
    }
  ;


IterativeTimeReduction :

    /* none */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration     = 20 ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = 2. ;
      Operation_P->Case.IterativeTimeReduction.Criterion           = 1.e-3 ;
      Operation_P->Case.IterativeTimeReduction.Flag                = 0 ;
      Current_System = Operation_P->DefineSystemIndex              = -1 ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState       = NULL ;
      Operation_P->Case.IterativeTimeReduction.Operation           = NULL ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd        = NULL ;
    }

  | IterativeTimeReduction IterativeTimeReductionTerm
  ;

IterativeTimeReductionTerm :

    tNbrMaxIteration FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)$2 ; }
  | tDivisionCoefficient FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = $2 ; }
  | tCriterion FExpr tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = $2 ; }
  | tFlag FExpr tEND  /* Attention: phase test */
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)$2 ; }

  | tDefineSystem tSTRING tEND
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, $2,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", $2) ;
      Free($2) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    }

  | tChangeOfState  '{' ChangeOfStates '}'
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = $3 ;
    }

  | tOperation  '{' Operation '}'
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = $3 ;
    }
  | tOperationEnd  '{' Operation '}'
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = $3 ;
    }
  ;


ChangeOfStates :
    /* none */
    { $$ = List_Create(3, 3, sizeof (struct ChangeOfState)) ; }

  | ChangeOfStates '{' ChangeOfState '}'
    { List_Add($$ = $1, &ChangeOfState_S) ; }
  ;

ChangeOfState :
    /* none */
    {
      ChangeOfState_S.Type = CHANGEOFSTATE_CHANGESIGN ;
      ChangeOfState_S.QuantityIndex       = -1 ;
      ChangeOfState_S.FormulationIndex    = -1 ;
      ChangeOfState_S.InIndex             = -1 ;
      ChangeOfState_S.Criterion           = 1.e-2 ;
      ChangeOfState_S.ExpressionIndex = ChangeOfState_S.ExpressionIndex2 = -1 ;
      ChangeOfState_S.FlagIndex           = -1 ;
      ChangeOfState_S.ActiveList[0]       = NULL ;
      ChangeOfState_S.ActiveList[1]       = NULL ;
    }

  | ChangeOfState  ChangeOfStateTerm
  ;

ChangeOfStateTerm :

    tType tSTRING tEND
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", $2);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free($2) ;
    }

  | tQuantity tSTRING tEND
    {
      if (Current_System >= 0) {
	ListOfInt_Lnew =
	  ((struct DefineSystem *)List_Pointer(Resolution_S.DefineSystem,
					       Current_System))->FormulationIndex ;
	ListOfInt_P =(int *)List_Pointer(ListOfInt_Lnew, 0) ;

	for (j=0 ; j<List_Nbr(ListOfInt_Lnew) ; j++) {
	  Formulation_S.DefineQuantity =
	    ((struct Formulation *)
	     List_Pointer(Problem_S.Formulation, ListOfInt_P[j]))->DefineQuantity ;

	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, $2,
				   fcmp_DefineQuantity_Name)) >= 0)
	    break ;
	}
	if (j<List_Nbr(ListOfInt_Lnew)) {
	  ChangeOfState_S.FormulationIndex = ListOfInt_P[j] ;
	  ChangeOfState_S.QuantityIndex = i ;
	}
	else
	  vyyerror("Unknown discrete Quantity: %s", $2) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", $2) ;
      Free($2) ;
    }

  | tIn GroupRHS tEND
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", $2) ; }

  | tCriterion FExpr tEND
    { ChangeOfState_S.Criterion = $2 ; }

  | tFunction Expression tEND
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = $2 ;
      else
	ChangeOfState_S.ExpressionIndex2 = $2 ;
    }

  | tFlag tSTRING tEND
    {
      if((i = List_ISearchSeq(Problem_S.Expression, $2, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", $2) ;
      Free($2) ;
      ChangeOfState_S.FlagIndex = i ;
    }
  ;

/* ------ end of "the following should disapear with the new syntax" ------ */


/* ------------------------------------------------------------------------ */
/*  P o s t P r o c e s s i n g                                             */
/* ------------------------------------------------------------------------ */

PostProcessings :
    /* none */
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    }

  | PostProcessings  BracedPostProcessing
  ;

BracedPostProcessing :

    '{' PostProcessing '}'
    {
      if (!Nbr_Index)
	List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
      else {
	Save_Name = strsave(PostProcessing_S.Name) ;  Free(PostProcessing_S.Name) ;
	if (List_Nbr(ListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    PostProcessing_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfFormulation, k, &PostProcessing_S.FormulationIndex) ;
	    List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
	  }
	Free(Save_Name) ;
      }
    }
 
  | Affectation
  ;

PostProcessing :
    /* none */
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    }

  | PostProcessing  PostProcessingTerm
  ;

PostProcessingTerm :
    tName String__Index tEND
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 $2, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = $2 ; 
    }

  | tName tSTRING DefineDimension tEND
    { Nbr_Index = $3 ;
      sprintf(tmpstr, "%s_%d_", $2, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 tmpstr, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = $2 ; 
    }

  | tNameOfFormulation String__Index MultipleIndex tEND
    { 
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, $2,
				   fcmp_Formulation_Name)) < 0){
	    vyyerror("Unknown Formulation: %s", $2) ;
	  }
	  else {
	    PostProcessing_S.FormulationIndex = i ;
	    List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  }
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", $2) ;
	}
      }
      else {
	List_Reset(ListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, $2,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", $2) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", $2, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", $2, k+1) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	}
      }
      Free($2) ;
    }

  | tNameOfSystem tSTRING tEND
    { 
      PostProcessing_S.NameOfSystem = $2 ;
    }

  | tQuantity  '{' PostQuantities '}'
    { PostProcessing_S.PostQuantity = $3 ; }
  ;


PostQuantities :
    /* none */
    { $$ = List_Create(5, 5, sizeof (struct PostQuantity)) ; }

  | PostQuantities '{' PostQuantity '}'
    { List_Add($$ = $1, &PostQuantity_S) ; }

  | PostQuantities  Affectation 
    { $$ = $1 ; }
  | PostQuantities  Loop 
    { $$ = $1 ; }

  ;

PostQuantity :
    /* none */
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    }

  | PostQuantity PostQuantityTerm 
  ;


PostQuantityTerm :
    tName String__Index tEND
    { PostQuantity_S.Name = $2 ; }

  | tValue '{' SubPostQuantities '}'
    { PostQuantity_S.PostQuantityTerm = $3 ; }

  ;
 
SubPostQuantities :
    /* none */
    { $$ = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; }


    /* Doit rester tant qu'on ne supprime pas l'association 'Integral <-> tGalerkin' */
  | SubPostQuantities tGalerkin '{' SubPostQuantity '}' 
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add($$ = $1, &PostQuantityTerm_S) ; 
    }

  | SubPostQuantities tSTRING '{' SubPostQuantity '}' 
    { 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", $2);
	Get_Valid_SXD(PostQuantityTerm_EvaluationType);
      }
      Free($2) ;
      List_Add($$ = $1, &PostQuantityTerm_S) ; 
    }
  ;

SubPostQuantity :
    /* none */
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    }

  | SubPostQuantity SubPostQuantityTerm
  ;

SubPostQuantityTerm :
    TermOperator '['
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    }

    WholeQuantityExpression ']' tEND
    { PostQuantityTerm_S.WholeQuantity = $4 ;

      Pro_DefineQuantityIndex
	(PostQuantityTerm_S.WholeQuantity, -1,
	 &PostQuantityTerm_S.NbrQuantityIndex, 
	 &PostQuantityTerm_S.QuantityIndexTable,
	 &PostQuantityTerm_S.QuantityTraceGroupIndexTable) ;
      if (!PostQuantityTerm_S.Type) {
	PostQuantityTerm_S.Type = 0 ;
	for (i = 0 ; i < PostQuantityTerm_S.NbrQuantityIndex ; i++) {
	  if (PostQuantityTerm_S.QuantityIndexTable[i] >= 0)
	    j = ((struct DefineQuantity *)
		 List_Pointer
		 (((struct Formulation *)
		   List_Pointer(Problem_S.Formulation,
				PostProcessing_S.FormulationIndex))->DefineQuantity,
		  PostQuantityTerm_S.QuantityIndexTable[i])) -> Type ;
	  if (PostQuantityTerm_S.Type == 0)
	    PostQuantityTerm_S.Type = j ;
	  else if (PostQuantityTerm_S.Type != j)	  
	    yyerror("Mixed discrete Quantity types in term (should be split in separate terms)") ;
	}
	if (PostQuantityTerm_S.Type == 0)  PostQuantityTerm_S.Type = LOCALQUANTITY ;
      }

    }

 | tType tSTRING tEND
   { /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, $2, &FlagError) ;
     if (FlagError){
       vyyerror("Unknown type of Operation: %s", $2);
       Get_Valid_SXD(DefineQuantity_Type);
     }
     Free($2) ;
   }

 | tIn { Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; } GroupRHS tEND
   { 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", $3) ;
   }

  | tJacobian tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, $2,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",$2) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free($2) ;
    }

  | tIntegration tSTRING tEND
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, $2,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",$2) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free($2) ;
    }

  ;


/* ------------------------------------------------------------------------ */
/*  P o s t O p e r a t i o n                                               */
/* ------------------------------------------------------------------------ */

PostOperations :
    /* none */
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    }

  | PostOperations  BracedPostOperation
  ;

BracedPostOperation :

    '{' PostOperation '}'
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; }

  | Affectation
  
  | Loop
  ;

PostOperation :
    /* none */
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    }

  | PostOperation  PostOperationTerm
  ;

PostOperationTerm :
    tName String__Index tEND
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 $2, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = $2 ; 
    }

  | tNameOfPostProcessing tSTRING tEND
    { 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, $2,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", $2) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
      }
      Free($2) ;
    }

  | tFormat tSTRING tEND
    { 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, $2, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", $2);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free($2) ;
    }

  | tAppend CharExpr tEND
    { 
      PostOperation_S.AppendString = $2 ;
    }

  | tOperation  '{' PostSubOperations '}'
    { PostOperation_S.PostSubOperation = $3 ; }
  ;


SeparatePostOperation :
    tPostOperation String__Index tUsingPost String__Index
    {
      PostOperation_S.PostProcessingIndex = -1 ;
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, $4,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", $4) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
	if (!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation)) ;
	PostOperation_S.Name = $2 ;
      }
      Free($4) ;
    }
    '{' PostSubOperations '}'
    {
      PostOperation_S.PostSubOperation = $7 ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    }
  ;


PostSubOperations :
    /* none */
    { $$ = List_Create(5, 5, sizeof (struct PostSubOperation)) ; }

  | PostSubOperations 
    {
      PostSubOperation_S.Format = -1 ;
    }
    PostSubOperation
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add($$ = $1, &PostSubOperation_S) ; 
      }
    }
  ;


PostSubOperation :

    tPlot '[' PostQuantitiesToPrint PrintSubType PrintOptions ']' tEND
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    }

  | tPrint '[' PostQuantitiesToPrint PrintSubType PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_PRINT ;
    }

  | tPrint '[' tBIGSTR ',' Expression PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = $3 ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = $5 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    }

  | tPrint '[' tBIGSTR ',' tStr '[' CharExpr ']' PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = $3 ;
      PostSubOperation_S.Case.Expression.String2 = $7 ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    }

  | tEcho '[' tBIGSTR PrintOptions ']' tEND
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = $3 ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    }

  | tPrintGroup '[' GroupRHS 
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", $3) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    }
    ',' tIn GroupRHS PrintOptions ']' tEND
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", $7) ;
    }

  | Loop
    {
      PostSubOperation_S.Type = POP_NONE ;
    }

  ;

PostQuantitiesToPrint :

    String__Index PostQuantitySupport ','
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, $1, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", $1) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = $2 ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free($1) ;
    }

 |  String__Index  PostQuantitySupport Combination tSTRING  PostQuantitySupport ','
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, $1, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", $1) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantitySupport[0] = $2 ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, $4, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", $4) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;
      PostSubOperation_S.PostQuantitySupport[1] = $5 ;

      if (($2<0 && $5<0) || ($2>=0 && $5>=0)) {
	vyyerror("Postprocessing Quantities '%s' and '%s' of same type (%s)", 
		 $1, $4, ($2>0)? "with Support":"without Support") ;
      }      
      Free($1) ; Free($4) ;
    }
  ;

Combination :

    '*' { PostSubOperation_S.CombinationType = MULTIPLICATION ; }
  | '/' { PostSubOperation_S.CombinationType = DIVISION ; }
  | '+' { PostSubOperation_S.CombinationType = ADDITION ; }
  | '-' { PostSubOperation_S.CombinationType = SOUSTRACTION ; }
  ;

PostQuantitySupport :

    /* none */
    { $$ = -1 ; }
  | '[' GroupRHS ']'
    { $$ = Num_Group(&Group_S, "PO_Support", $2) ; }
  ;

PrintSubType :

    tOnGlobal
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    }

  | tOnRegion GroupRHS
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", $2) ;
    }

  | tOnElementsOf GroupRHS
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", $2) ;
    }

  | tOnSection '{' '{' RecursiveListOfFExpr '}'
                   '{' RecursiveListOfFExpr '}'
                   '{' RecursiveListOfFExpr '}' '}'
    {
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      if(List_Nbr($4)!=3 || List_Nbr($7)!=3 || List_Nbr($10)!=3)
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
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", $2) ;
    }

  | tOnGrid '{' Expression ',' Expression ',' Expression '}' 
            '{' ListOfFExpr ','  ListOfFExpr ','  ListOfFExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = $3 ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = $5 ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = $7 ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = $10 ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = $12 ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = $14 ;
    }

  | tOnPoint '{' RecursiveListOfFExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      if(List_Nbr($3)!=3)
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
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      if(List_Nbr($4)!=3 || List_Nbr($7)!=3)
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
      PostSubOperation_S.Case.OnGrid.n[0] = (int)$11 ;
      List_Delete($4);
      List_Delete($7);
    }

  | tOnPlane '{' '{' RecursiveListOfFExpr '}'
                 '{' RecursiveListOfFExpr '}'
                 '{' RecursiveListOfFExpr '}' '}'  '{' FExpr ',' FExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      if(List_Nbr($4)!=3 || List_Nbr($7)!=3 || List_Nbr($10)!=3)
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
      PostSubOperation_S.Case.OnGrid.n[0] = (int)$14 ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)$16 ;
      List_Delete($4);
      List_Delete($7);
      List_Delete($10);
    }

  | tOnBox '{' '{' RecursiveListOfFExpr '}'
               '{' RecursiveListOfFExpr '}'
               '{' RecursiveListOfFExpr '}'
               '{' RecursiveListOfFExpr '}' '}'  '{' FExpr ',' FExpr ',' FExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      if(List_Nbr($4)!=3 || List_Nbr($7)!=3 || List_Nbr($10)!=3 || List_Nbr($13)!=3)
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
      PostSubOperation_S.Case.OnGrid.n[0] = (int)$17 ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)$19 ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)$21 ;
      List_Delete($4);
      List_Delete($7);
      List_Delete($10);
      List_Delete($13);
    }

  /* should be generalized with a '{' RecursiveListOfFExpr '}' */
  | tOnRegion GroupRHS
    tWithArgument tSTRING '{' FExpr ',' FExpr '}'  '{' FExpr '}'
    {
      PostSubOperation_S.SubType = PRINT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", $2) ;

      if((i = List_ISearchSeq(Problem_S.Expression, $4, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", $4) ;
      Free($4) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = $6 ;
      PostSubOperation_S.Case.WithArgument.x[1] = $8 ;
      PostSubOperation_S.Case.WithArgument.n = (int)$11 ;
    }

  ;

PrintOptions :
    /* none */        
    { 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Dimension = _ALL ;
      PostSubOperation_S.Adapt = 0 ;
      PostSubOperation_S.Target = -1. ;
      PostSubOperation_S.HarmonicToTime = 1 ;
      PostSubOperation_S.FrozenTimeStepList = 0;
      PostSubOperation_S.TimeStep_L = List_Create(10,10,sizeof(int)); ;
      PostSubOperation_S.Frequency_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Value_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Iso = 0 ;
      PostSubOperation_S.Iso_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Sort = 0 ;
      PostSubOperation_S.NoNewLine = 0 ;
      PostSubOperation_S.DecomposeInSimplex = 0 ;
      PostSubOperation_S.ChangeOfCoordinates[0] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[1] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[2] = -1 ;
      PostSubOperation_S.ChangeOfValues = NULL ;
      PostSubOperation_S.Legend = LEGEND_NONE;
      PostSubOperation_S.LegendPosition[0] = 0.;
      PostSubOperation_S.LegendPosition[1] = 0.;
      PostSubOperation_S.LegendPosition[2] = 0.;
      PostSubOperation_S.EvaluationPoints = NULL ;
      PostSubOperation_S.StoreInRegister = -1 ;
      PostSubOperation_S.LastTimeStepOnly = 0;
    }
  | PrintOptions PrintOption 
  ;

PrintOption :
    ',' tFile CharExpr
    { 
      PostSubOperation_S.FileOut = $3 ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    }
  | ',' tFile '>' CharExpr
    { 
      PostSubOperation_S.FileOut = $4 ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    }
  | ',' tFile tGREATERGREATER CharExpr
    { 
      PostSubOperation_S.FileOut = $4 ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    }
  | ',' tDepth FExpr  
    { 
      PostSubOperation_S.Depth = (int)$3 ; 
    }
  | ',' tSkin   
    { 
      PostSubOperation_S.Skin = 1 ; 
    }
  | ',' tSmoothing
    {
      PostSubOperation_S.Smoothing = 1 ; 
    }
  | ',' tHarmonicToTime FExpr
    {
      PostSubOperation_S.HarmonicToTime = (int)$3 ; 
    }
  | ',' tFormat tSTRING
    { 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, $3, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", $3);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free($3) ;
    }
  | ',' tHeader ParsedStrings
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    }
  | ',' tFooter ParsedStrings
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    }
  | ',' tFormat ParsedStrings
    {
      PostSubOperation_S.FormatChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FormatTag_L  = List_Copy(ListOfInt_L) ;

      printf("--> string: \"");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatChar_L);i++){
	List_Read(PostSubOperation_S.FormatChar_L, i, &tmpstr[0]) ;
	printf("%c", tmpstr[0]);
      }
      printf("\"\n");
      
      printf("--> tags: ");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatTag_L);i+=2){
	List_Read(PostSubOperation_S.FormatTag_L, i, &j) ;
	List_Read(PostSubOperation_S.FormatTag_L, i+1, &k) ;
	printf("%d:%d ", j, k);
      }
      printf("\n");
    }
  | ',' tDimension FExpr
    { 
      if((int)$3 >= 1 && (int)$3 <= 3)
	PostSubOperation_S.Dimension = (int)$3 ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    }
  | ',' tTimeStep ListOfFExpr 
    { 
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(i=0 ; i<List_Nbr($3) ; i++){
	List_Read($3,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete($3);
    }
  | ',' tAdapt tSTRING
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, $3, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", $3);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    }
  | ',' tSort tSTRING
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, $3, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", $3);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    }
  | ',' tTarget FExpr
    { 
      if($3 >= 0.)
	PostSubOperation_S.Target = $3 ;
      else
	vyyerror("Bad Target value") ;
    }
  | ',' tValue ListOfFExpr 
    { 
      for(i=0 ; i<List_Nbr($3) ; i++){
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
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr($4) ; i++){
	List_Read($4,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete($4);
    }
  | ',' tNoNewLine
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    }
  | ',' tDecomposeInSimplex
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    }
  | ',' tFrequency ListOfFExpr
    { 
      for(i=0 ; i<List_Nbr($3) ; i++){
	List_Read($3,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete($3);
    }
  | ',' tChangeOfCoordinates '{' Expression ',' Expression ',' Expression '}'
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = $4 ;
      PostSubOperation_S.ChangeOfCoordinates[1] = $6 ;
      PostSubOperation_S.ChangeOfCoordinates[2] = $8 ;
    }
  | ',' tChangeOfValues ListOfExpression
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    }
  | ',' tTimeLegend
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    }
  | ',' tTimeLegend '{' FExpr ',' FExpr ',' FExpr '}'
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = $4 ;
      PostSubOperation_S.LegendPosition[1] = $6 ;
      PostSubOperation_S.LegendPosition[2] = $8 ;
    }
  | ',' tFrequencyLegend
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    }
  | ',' tFrequencyLegend '{' FExpr ',' FExpr ',' FExpr '}'
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = $4 ;
      PostSubOperation_S.LegendPosition[1] = $6 ;
      PostSubOperation_S.LegendPosition[2] = $8 ;
    }
  | ',' tEigenvalueLegend
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    }
  | ',' tEigenvalueLegend '{' FExpr ',' FExpr ',' FExpr '}'
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = $4 ;
      PostSubOperation_S.LegendPosition[1] = $6 ;
      PostSubOperation_S.LegendPosition[2] = $8 ;
    }
  | ',' tEvaluationPoints '{' RecursiveListOfFExpr '}'
    { 
      if(List_Nbr($4)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr($4));
      else {
	PostSubOperation_S.EvaluationPoints = $4 ;
      }
    }
  | ',' tStore tINT
    {
      PostSubOperation_S.StoreInRegister = $3 - 1 ;
    }
  | ',' tLastTimeStepOnly
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    }
  ;



ParsedStrings :
    /* */
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    }

  | ParsedStrings tBIGSTR 
    {
      i = 0 ;
      do{
	if($2[i] == '%'){ 
	  i++ ; j=i ;
	  do{
	    if($2[i] == '+'  || $2[i] == '-'  || $2[i] == '*'  || $2[i] == '%'  ||
	       $2[i] == '>'  || $2[i] == '<'  || $2[i] == '|'  || $2[i] == '&'  ||
	       $2[i] == '$'  || $2[i] == '\'' || $2[i] == '\\' || $2[i] == '/'  || 
	       $2[i] == '{'  ||	$2[i] == '}'  || $2[i] == '('  || $2[i] == ')'  ||
	       $2[i] == '['  || $2[i] == ']'  || $2[i] == '!'  || $2[i] == ','  ||
	       $2[i] == '^'  || $2[i] == '.'  || $2[i] == ';'  || $2[i] == '~'  || 
	       $2[i] == ' '  || $2[i] == '\n' || $2[i] == '\t' || $2[i] == '#'  ||
               $2[i] == '`'  || $2[i] == ':'  ){
              break ;
            }
	    i++ ;
	  } while(i<(int)strlen($2)) ;
	  strncpy(tmpstr, &$2[j], i-j); 
	  tmpstr[i-j] = '\0'; 
	  k = Get_DefineForString(PostSubOperation_FormatTag, tmpstr, &FlagError) ;
	  if (FlagError){
	    vyyerror("Unknown Tag in Format: %s", tmpstr);
	    Get_Valid_SXD(PostSubOperation_FormatTag) ;
	  }
	  else {
	    l = List_Nbr(ListOfChar_L) ;
	    List_Add(ListOfInt_L, &l);
	    List_Add(ListOfInt_L, &k);
	  }
        }
	else{
	  List_Add(ListOfChar_L, &$2[i]);
	  i++ ;
	}
      } while (i<(int)strlen($2)) ;
      Free($2) ;
    }
;




/* ------------------------------------------------------------------------ */
/*  L o o p                                                                 */
/* ------------------------------------------------------------------------ */

Loop :
  
    tFor '(' FExpr tDOTS FExpr ')'
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $3 ;
      LoopControlVariablesTab[ImbricatedLoop][1] = $5 ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if($3 > $5) skip_until("For", "EndFor");
    }
  | tFor '(' FExpr tDOTS FExpr tDOTS FExpr ')'
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $3 ;
      LoopControlVariablesTab[ImbricatedLoop][1] = $5 ;
      LoopControlVariablesTab[ImbricatedLoop][2] = $7 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(($7 > 0. && $3 > $5) || ($7 < 0. && $3 < $5))
	skip_until("For", "EndFor");
    }
  | tFor tSTRING tIn '{' FExpr tDOTS FExpr '}' 
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $5 ;
      LoopControlVariablesTab[ImbricatedLoop][1] = $7 ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = $2 ;      
      Constant_S.Name = $2 ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = $5 ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if($5 > $7) skip_until("For", "EndFor");
    }
  | tFor tSTRING tIn '{' FExpr tDOTS FExpr tDOTS FExpr '}' 
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = $5 ;
      LoopControlVariablesTab[ImbricatedLoop][1] = $7 ;
      LoopControlVariablesTab[ImbricatedLoop][2] = $9 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = $2 ;      
      Constant_S.Name = $2 ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = $5 ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(($9 > 0. && $5 > $7) || ($9 < 0. && $5 < $7))
	skip_until("For", "EndFor");
    }
  | tEndFor 
    {
      if(ImbricatedLoop <= 0){
	vyyerror("Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	x0 = LoopControlVariablesTab[ImbricatedLoop-1][0];
	x1 = LoopControlVariablesTab[ImbricatedLoop-1][1];
	step = LoopControlVariablesTab[ImbricatedLoop-1][2];
	do_next = (step > 0.) ? (x0+step <= x1) : (x0+step >= x1);
	if(do_next){
	  LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	    LoopControlVariablesTab[ImbricatedLoop-1][2];
	  if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	    Constant_S.Name = LoopControlVariablesNameTab[ImbricatedLoop-1] ; 
	    Constant_S.Type = VAR_FLOAT ;
	    Constant_S.Value.Float = LoopControlVariablesTab[ImbricatedLoop-1][0] ;
	    if ((i=List_ISearchSeq(ConstantTable_L, &Constant_S, fcmp_Constant))<0) 
	      vyyerror("Something wrong with For loop starting ") ;
	    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;      
	  }
	  fsetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	}
      }
    }

  | tIf '(' FExpr ')'
    {
      if(!$3) skip_until("If", "EndIf");
    }
  | tEndIf
    {
    }

;



/* ------------------------------------------------------------------------ */
/*  C o n s t a n t   E x p r e s s i o n s  (FExpr)                        */
/* ------------------------------------------------------------------------ */

Affectation :

   tDefineConstant '[' DefineConstants ']' tEND

  | String__Index  tDEF ListOfFExpr tEND
    {
      Constant_S.Name = $1 ; 
      if(List_Nbr($3) == 1){
	Constant_S.Type = VAR_FLOAT ;
	List_Read($3, 0, &Constant_S.Value.Float) ;
	List_Delete($3);
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT ;
	Constant_S.Value.ListOfFloat = $3;
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }

  | String__Index tDEF tBIGSTR tEND
    { Constant_S.Name = $1 ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = $3 ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }

  | String__Index tDEF tStr '[' CharExpr ']' tEND
    { Constant_S.Name = $1 ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = $5 ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }

  | String__Index tDEF StrCat tEND
    { Constant_S.Name = $1 ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = $3 ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }

  | String__Index tDEF tListFromFile '[' CharExpr ']' tEND
    { Constant_S.Name = $1 ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen($5, "r"))) Msg(ERROR, "Unable to open file '%s'", $5);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }

  | tPrintf '(' tBIGSTR ')' tEND
    {
      Msg(DIRECT, $3);
    }

  | tPrintf '(' tBIGSTR ',' RecursiveListOfFExpr ')' tEND
    {
      i = Print_ListOfDouble($3,$5,tmpstr);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstr);
      List_Delete($5);
    }

  | tRead '(' String__Index ')' tEND
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = $3 ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }

  | tRead '(' String__Index ')' '[' FExpr ']' tEND
    {
      Msg(INFO2, "[<return>=%g] ? ",$6);
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = $6;
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = $3 ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }

  ;

DefineConstants :

    /* none */
  | DefineConstants Comma tSTRING
    { Constant_S.Name = $3 ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }
  | DefineConstants Comma tSTRING tDEF FExpr
    { Constant_S.Name = $3 ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = $5 ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }
  | DefineConstants Comma tSTRING tDEF tBIGSTR
    { Constant_S.Name = $3 ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = $5 ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    }
  ;

/* Ce bricolage affreux (?) est necessaire pour permettre la meme 
   syntaxe dans les expressions constantes et dans les whole_expressions */

NameForFunction :
    tExp     { $$ = "Exp";    }
  | tLog     { $$ = "Log";    }
  | tLog10   { $$ = "Log10";  }
  | tSqrt    { $$ = "Sqrt";   }
  | tSin     { $$ = "Sin";    }
  | tAsin    { $$ = "Asin";   }
  | tCos     { $$ = "Cos";    }
  | tAcos    { $$ = "Acos";   }
  | tTan     { $$ = "Tan";    }
  | tAtan    { $$ = "Atan";   }
  | tAtan2   { $$ = "Atan2";  }
  | tSinh    { $$ = "Sinh";   }
  | tCosh    { $$ = "Cosh";   }
  | tTanh    { $$ = "Tanh";   }
  | tFabs    { $$ = "Fabs";   }
  | tFloor   { $$ = "Floor";  }
  | tCeil    { $$ = "Ceil";   }
  | tFmod    { $$ = "Fmod";   }
  | tModulo  { $$ = "Modulo"; }
  | tHypot   { $$ = "Hypot";  }
  | String__Index  { $$ = $1;       }
  ;

FExpr :
    OneFExpr                         { $$ = $1 ;          }
  | '(' FExpr ')'                    { $$ = $2 ;          }
  | '-' FExpr %prec UNARYPREC        { $$ = -$2 ;         }
  | '!' FExpr                        { $$ = !$2 ;         }
  | FExpr '-' FExpr                  { $$ = $1 - $3 ;     }
  | FExpr '+' FExpr                  { $$ = $1 + $3 ;     }
  | FExpr '*' FExpr                  { $$ = $1 * $3 ;     }
  | FExpr '/' FExpr                  { $$ = $1 / $3 ;     }
  | FExpr '%' FExpr                  { $$ = (int)$1 % (int)$3 ;  }
  | FExpr '^' FExpr                  { $$ = pow($1,$3) ;  }
  | FExpr '<' FExpr                  { $$ = $1 < $3 ;     }
  | FExpr '>' FExpr                  { $$ = $1 > $3 ;     }
  | FExpr tLESSOREQUAL FExpr         { $$ = $1 <= $3 ;    }
  | FExpr tGREATEROREQUAL FExpr      { $$ = $1 >= $3 ;    }
  | FExpr tEQUAL FExpr               { $$ = $1 == $3 ;    }
  | FExpr tNOTEQUAL FExpr            { $$ = $1 != $3 ;    }
  | FExpr tAND FExpr                 { $$ = $1 && $3 ;    }
  | FExpr tOR FExpr                  { $$ = $1 || $3 ;    }
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
  | tFmod   '[' FExpr ',' FExpr ']'  { $$ = fmod($3,$5);  }
  | tModulo '[' FExpr ',' FExpr ']'  { $$ = fmod($3,$5);  }
  | tHypot  '[' FExpr ',' FExpr ']'  { $$ = sqrt($3*$3+$5*$5);  }
  | FExpr '?' FExpr tDOTS FExpr      { $$ = $1? $3 : $5 ; }
  | FExpr '#' { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, $1); }
  ;

OneFExpr :

    tFLOAT                     { $$ = $1 ; }
  | tINT                       { $$ = (double)$1 ; }
  | tPi                        { $$ = 3.1415926535897932 ; }
  | t0D                        { $$ = (double)_0D ; }
  | t1D                        { $$ = (double)_1D ; }
  | t2D                        { $$ = (double)_2D ; }
  | t3D                        { $$ = (double)_3D ; }
  | String__Index
    { Constant_S.Name = $1 ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", $1) ;  $$ = 0. ;
      }
      else  {
	if (Constant_S.Type == VAR_FLOAT)
	  $$ = Constant_S.Value.Float ;
	else {
	  vyyerror("Single value Constant needed: %s", $1) ;  $$ = 0. ;
	}
      }
      Free($1) ;
    }
  ;

ListOfFExpr :

    /* none */
    { $$ = NULL; }

  | FExpr
    { 
      $$ = List_Create(1,1,sizeof(double)) ;  
      List_Add($$, &($1)) ; 
    }

  | MultiFExpr  
    { $$ = $1; }

  | '{' RecursiveListOfFExpr '}'
    { $$ = $2; }
  ;


RecursiveListOfFExpr :

    FExpr
    { 
      $$ = List_Create(20,20,sizeof(double));
      List_Add($$, &($1)) ; 
    }

  | MultiFExpr
    { $$ = $1; }

  | RecursiveListOfFExpr ',' FExpr
    { List_Add($$, &($3)) ; }

  | RecursiveListOfFExpr ',' MultiFExpr
    { 
      for(i=0 ; i<List_Nbr($3) ; i++){
	List_Read($3, i, &d) ;
	List_Add($$, &d) ;
      }
      List_Delete($3);
    }
  ;

MultiFExpr :

    FExpr tDOTS FExpr
    { $$ = List_Create(20,20,sizeof(double)) ; 
      for(d=$1 ; ($1<$3)?(d<=$3):(d>=$3) ; ($1<$3)?(d+=1.):(d-=1.)) 
	List_Add($$, &d) ;
    }

  | FExpr tDOTS FExpr tDOTS FExpr
    { $$ = List_Create(20,20,sizeof(double)) ; 
      if(!$5 || ($1<$3 && $5<0) || ($1>$3 && $5>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", $1, $3, $5) ;
	List_Add($$, &($1)) ;
      }
      else
	for(d=$1 ; ($5>0)?(d<=$3):(d>=$3) ; d+=$5) 
	  List_Add($$, &d) ;
    }

  | tSTRING '{' '}' 
    { $$ = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = $1 ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", $1) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1) ; */
	  List_Add($$, &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add($$, &d) ;
	  }
    }

  | tSTRING '{' RecursiveListOfFExpr '}' 
    { $$ = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = $1 ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", $1) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", $1) ;
	else
	  for(i=0 ; i<List_Nbr($3) ; i++) {
	    if(i < List_Nbr(Constant_S.Value.ListOfFloat)){
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	      List_Add($$, &d) ;
	    }
	    else{
	      d = 0.;
	      List_Add($$, &d) ;
	    }
	  }
    }

  /* This a synonym for tSTRING '{' '}' */
  | tList '[' tSTRING ']'
    { $$ = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = $3 ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", $3) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", $3) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add($$, &d) ;
	  }
    }

  | tListAlt '[' tSTRING ',' tSTRING ']'
    { $$ = List_Create(20,20,sizeof(double)) ; 
      Constant1_S.Name = $3 ; Constant2_S.Name = $5 ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", $3) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", $3) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", $5) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", $5) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 $3, List_Nbr(Constant1_S.Value.ListOfFloat),
			 $5, List_Nbr(Constant2_S.Value.ListOfFloat)) ;
	      }
	      else {
		for(i=0 ; i<List_Nbr(Constant1_S.Value.ListOfFloat) ; i++) {
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d) ;
		  List_Add($$, &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add($$, &d) ;
		}
	      }
	    }
	}
    }

  | tLinSpace '[' FExpr ',' FExpr ',' FExpr ']'
    { $$ = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)$7 ; i++) {
	d = $3 + ($5-$3)*(double)i/($7-1) ;
	List_Add($$, &d) ;
      }
    }

  | tLogSpace '[' FExpr ',' FExpr ',' FExpr ']'
    { $$ = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)$7 ; i++) {
	d = pow(10,$3 + ($5-$3)*(double)i/($7-1)) ;
	List_Add($$, &d) ;
      }
    }

  ;

StringIndex :
  
    tSTRING  '~' '{' FExpr '}'  
    { 
      sprintf(tmpstr, "_%d", (int)$4) ;
      $$ = (char *)Malloc((strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy($$, $1) ; strcat($$, tmpstr) ;
      Free($1) ;
    }

  | StringIndex '~'  '{' FExpr '}' 
    {
      sprintf(tmpstr, "_%d", (int)$4) ;
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy($$, $1) ; strcat($$, tmpstr) ;
    }

  ;


String__Index :

    tSTRING 
    { $$ = $1 ; }
  | StringIndex
    { $$ = $1 ; }

  ;

CharExpr :

    tBIGSTR
    { $$ = $1 ; }

  | tSTRING
    { Constant_S.Name = $1 ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", $1) ;  $$ = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  $$ = Constant_S.Value.Char ;
	else {
	  vyyerror("String Constant needed: %s", $1) ;  $$ = NULL ;
	}
      }
      Free($1) ;
    }

  | StrCat
    {
      $$ = $1 ;
    }

  | tSprintf '(' CharExpr ')'
    {
      $$ = $3;
    }

  | tSprintf '(' CharExpr ',' RecursiveListOfFExpr ')'
    {
      i = Print_ListOfDouble($3,$5,tmpstr);
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
      time(&date_info);
      $$ = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy($$, ctime(&date_info));
      $$[strlen($$)-1] = 0;
    }
  ;

StrCat :
    tStrCat '[' CharExpr ',' CharExpr ']'
    {
      if ($3 != NULL && $5 != NULL) {
	$$ = (char *)Malloc((strlen($3)+strlen($5)+1)*sizeof(char)) ;
	strcpy($$, $3) ;  strcat($$, $5) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  $$ = NULL ;
      }
    }
  ;

%%


/* 
   This is a hack... Bison redefines 'const' if !__cplusplus and !__STDC__ 
*/

#ifdef const
#undef const
#endif

/*  A d d _ G r o u p   &   C o .  */

int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) {
  int  i ;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  switch (Flag_Plus) {
  case 1 :
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Group)) ;
    Group_P->Name = strsave(tmpstr) ;
    break ;
  case 2 :
    sprintf(tmpstr, "%s_%d_", Name, Num_Index) ;
    Group_P->Name = strsave(tmpstr) ;
    break ;
  default :
    Group_P->Name = Name ;
  }

  if ((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group) ;
    Group_P->ExtendedList = NULL ;  Group_P->ExtendedSuppList = NULL ;
    List_Add(Problem_S.Group, Group_P) ;
  }
  else  List_Write(Problem_S.Group, i, Group_P) ;

  return i ;

}


int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) {
  int  i, j ;
  List_T *InitialList;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  if (Flag_Plus == 0)
    sprintf(tmpstr, "%s", Name) ;
  else if (Flag_Plus == 1)
    sprintf(tmpstr, "%s_%d_", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(tmpstr, "%s_%d_%d_", Name, Num_Index1,Num_Index2) ;

  Group_P->Name = strsave(tmpstr) ;
  
  if ((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group) ;
    Group_P->ExtendedList = NULL ;  Group_P->ExtendedSuppList = NULL ;
    List_Add(Problem_S.Group, Group_P) ;
  } else if (Flag_Add) {
    InitialList = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
    for (j = 0 ; j < List_Nbr(Group_P->InitialList) ; j++) {
      List_Add(InitialList, (int *)List_Pointer(Group_P->InitialList, j)) ;
    } 
  } else List_Write(Problem_S.Group, i, Group_P) ;

  return i ;
}



int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) {

  if      (Num_Group >= 0)   /* OK */ ;
  else if (Num_Group == -1)  Num_Group = Add_Group(Group_P, Name, 1, 0) ;
  else                       vyyerror("Bad Group right hand side") ;

  return Num_Group ;
}


int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) {
  int k, Num ;

  List_Reset(ListOfInt_L) ;

  for (k = 0 ; k < Nbr_Index ; k++) {
    List_Read(ListOfInitialList_L, k, &Group_P->InitialList) ;
    if (Group_P->SuppListType != SUPPLIST_NONE)
      List_Read(ListOfInitialSuppList_L, k, &Group_P->InitialSuppList) ;
    Num = Add_Group(Group_P, Name, Flag_Plus, k+1) ;
    List_Add(ListOfInt_L, &Num) ;
  }
  return (Num-Nbr_Index+1) ;
}

/*  A d d _ E x p r e s s i o n   */

int  Add_Expression(struct Expression * Expression_P,
		    char * Name, int Flag_Plus) {
  int  i ;

  if (!Problem_S.Expression)
    Problem_S.Expression = List_Create(50, 50, sizeof (struct Expression) ) ;

  if (Flag_Plus) {
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strsave(tmpstr) ;
  }
  else  Expression_P->Name = Name ;

  if ((i = List_ISearchSeq
       (Problem_S.Expression, Name, fcmp_Expression_Name)) < 0) {
    i = List_Nbr(Problem_S.Expression) ;
    List_Add(Problem_S.Expression, Expression_P) ;
  }
  else  List_Write(Problem_S.Expression, i, Expression_P) ;

  return i ;
}

/*  L i s t e   I n d e x   d e s   D e f i n e Q u a n t i t y  */

void  Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) {
  int  i ;
  struct WholeQuantity * WholeQuantity_P ;
  struct TwoInt Pair ;

  WholeQuantity_P = (List_Nbr(WholeQuantity_L) > 0)?
    (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) : NULL ;

  for (i = 0 ; i < List_Nbr(WholeQuantity_L) ; i++)
    switch ((WholeQuantity_P+i)->Type) {
    case WQ_OPERATORANDQUANTITY :
    case WQ_OPERATORANDQUANTITYEVAL :
    case WQ_SOLIDANGLE :
    case WQ_ORDER :
      Pair.Int1 = (WholeQuantity_P+i)->Case.OperatorAndQuantity.Index ;
      Pair.Int2 = TraceGroupIndex ;
      List_Insert(ListOfTwoInt_L, &Pair, fcmp_int) ;
      break ;
    case WQ_MHTRANSFORM  :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.MHTransform.WholeQuantity, TraceGroupIndex) ;
    case WQ_TIMEDERIVATIVE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.TimeDerivative.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_ATANTERIORTIMESTEP :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.AtAnteriorTimeStep.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_CAST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Cast.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_TRACE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Trace.WholeQuantity, 
	 (WholeQuantity_P+i)->Case.Trace.InIndex) ;
      break ;
    case WQ_TEST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_True, TraceGroupIndex) ;
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_False, TraceGroupIndex) ;
      break ;
    }
  List_Sort(ListOfTwoInt_L, fcmp_int) ;
}

void  Pro_DefineQuantityIndex(List_T * WholeQuantity_L,
			      int DefineQuantityIndexEqu,
			      int * NbrQuantityIndex, int ** QuantityIndexTable, 
			      int ** QuantityTraceGroupIndexTable) {
  int i ;
  struct TwoInt Pair, *Pair_P ;

  List_Reset(ListOfTwoInt_L) ;

  /* special case for the Equ part (right of the comma) 
     FIXME: change this when we allow a full WholeQuantity expression
     there */
  if (DefineQuantityIndexEqu >= 0){
    Pair.Int1 = DefineQuantityIndexEqu ;
    Pair.Int2 = -1 ;
    List_Add(ListOfTwoInt_L, &Pair) ;
  }

  Pro_DefineQuantityIndex_1(WholeQuantity_L, -1) ;

  *NbrQuantityIndex = List_Nbr(ListOfTwoInt_L) ;
  *QuantityIndexTable = (int *)Malloc(List_Nbr(ListOfTwoInt_L) * sizeof(int)) ;
  *QuantityTraceGroupIndexTable = (int *)Malloc(List_Nbr(ListOfTwoInt_L) * sizeof(int)) ;
  for (i = 0 ; i < List_Nbr(ListOfTwoInt_L) ; i++){
    Pair_P =  (struct TwoInt*)List_Pointer(ListOfTwoInt_L, i) ;
    (*QuantityIndexTable)[i] = Pair_P->Int1 ;
    (*QuantityTraceGroupIndexTable)[i] = Pair_P->Int2 ;
  }
}


/* C h e c k _ N a m e O f S t r u c t N o t E x i s t   */

void  Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				 int (*fcmp)(const void *a, const void *b)) {
  if (List_ISearchSeq(List_L, data, fcmp) >= 0)
    vyyerror("Redefinition of %s %s", Struct, (char*)data) ;
}


/* P r i n t _ C o n s t a n t  */

void  Print_Constant(){
  int i,j;
  char tmp1[1000], tmp2[100];
  struct Constant *Constant_P;

  for(i=0 ; i<List_Nbr(ConstantTable_L) ; i++){
    Constant_P = (struct Constant*)List_Pointer(ConstantTable_L, i);
    switch(Constant_P->Type){
    case VAR_FLOAT:
      Msg(CHECK, "%s = %g;\n", Constant_P->Name, Constant_P->Value.Float);
      break;
    case VAR_LISTOFFLOAT:
      sprintf(tmp1, "%g", *(double*)List_Pointer(Constant_P->Value.ListOfFloat,0));
      for(j=1 ; j<List_Nbr(Constant_P->Value.ListOfFloat) ; j++){
	sprintf(tmp2, ",%g", *(double*)List_Pointer(Constant_P->Value.ListOfFloat,j));
	strcat(tmp1,tmp2);
      }
      Msg(CHECK, "%s = {%s};\n", Constant_P->Name, tmp1);
      break;
    case VAR_CHAR:
      Msg(CHECK, "%s = \"%s\";\n", Constant_P->Name, Constant_P->Value.Char);
      break;
    }
  }
}


/* f c m p _ . . .  */

int  fcmp_Constant (const void *a, const void *b) {
  return ( strcmp(((struct Constant *)a)->Name, ((struct Constant *)b)->Name)) ;
}
int  fcmp_Expression_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Expression *)b)->Name ) ) ;
}
int  fcmp_Group_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Group *)b)->Name ) ) ;
}
int  fcmp_Constraint_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Constraint *)b)->Name ) ) ;
}
int  fcmp_JacobianMethod_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct JacobianMethod *)b)->Name ) ) ;
}
int  fcmp_IntegrationMethod_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct IntegrationMethod *)b)->Name ) ) ;
}
int  fcmp_BasisFunction_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->Name ) ) ;
}
int  fcmp_FunctionSpace_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct FunctionSpace *)b)->Name ) ) ;
}
int  fcmp_BasisFunction_NameOfCoef(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->NameOfCoef ) ) ;
}
int  fcmp_SubSpace_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct SubSpace *)b)->Name ) ) ;
}
int  fcmp_GlobalQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct GlobalQuantity *)b)->Name ) ) ;
}
int  fcmp_Formulation_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Formulation *)b)->Name ) ) ;
}
int  fcmp_DefineQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct DefineQuantity *)b)->Name ) ) ;
}
int  fcmp_DefineSystem_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct DefineSystem *)b)->Name ) ) ;
}
int  fcmp_Resolution_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Resolution *)b)->Name ) ) ;
}
int  fcmp_PostProcessing_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostProcessing *)b)->Name ) ) ;
}
int  fcmp_PostQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostQuantity *)b)->Name ) ) ;
}
int  fcmp_PostOperation_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostOperation *)b)->Name ) ) ;
}

int Print_ListOfDouble(char *format, List_T *list, char *buffer){
  int i, j, k;
  char tmp1[256], tmp2[256];

  j=0;
  while(format[j]!='%') j++;
  strncpy(buffer, format, j); 
  buffer[j]='\0'; 
  for(i = 0 ; i<List_Nbr(list) ; i++){
    k = j;
    j++;
    if(j<(int)strlen(format)){
      if(format[j]=='%'){
	strcat(buffer, "%");
	j++;
      }
      while(format[j]!='%' && j<(int)strlen(format)) j++;
      if(k != j){
	strncpy(tmp1, &(format[k]),j-k);
	tmp1[j-k]='\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list,i)); 
	strcat(buffer, tmp2);
      }
    }
    else{
      return List_Nbr(list)-i;
      break ;
    }
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}


/*  E r r o r   h a n d l i n g  */

void  yyerror (char *s) {
  int  i, nn ;
  char space1[32] = "", space2[512]= "";

  if(!InteractiveLevel){
    Msg(DIRECT, "Error ('%s' line %ld): %s on '%s'", yyname, yylinenum, 
	s, yytext) ;
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
	strcat(space2, " ");
      }
      for(i=0 ; i<yycolnum-2 ; i++) {
	strcat(space2, " ");
      }
      Msg(DIRECT, "%s^", space2);
      Msg(DIRECT, "%s%s", space1, s);
      Msg(DIRECT, "") ;
      Msg(DIRECT, "") ;
    }
  }

  ErrorLevel=1 ;
}

void  vyyerror (char *fmt, ...){
  int      i, nn ;
  char space1[32] = "", str[256];
  va_list  args;

  va_start (args, fmt);
  vsprintf (str, fmt, args);
  va_end (args);

  if(!InteractiveLevel){
    Msg(DIRECT, "Error ('%s' line %ld): %s", yyname, yylinenum, str);
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
      }
      Msg(DIRECT, "%s%s", space1, str) ;
      Msg(DIRECT, "");
    }
  }

  ErrorLevel=1 ;
}

