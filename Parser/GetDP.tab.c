/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tINT = 258,
     tFLOAT = 259,
     tSTRING = 260,
     tBIGSTR = 261,
     tEND = 262,
     tDOTS = 263,
     tStrCat = 264,
     tSprintf = 265,
     tPrintf = 266,
     tRead = 267,
     tPrintConstants = 268,
     tStrCmp = 269,
     tNbrRegions = 270,
     tFor = 271,
     tEndFor = 272,
     tIf = 273,
     tElse = 274,
     tEndIf = 275,
     tFlag = 276,
     tHelp = 277,
     tCpu = 278,
     tCheck = 279,
     tInclude = 280,
     tConstant = 281,
     tList = 282,
     tListAlt = 283,
     tLinSpace = 284,
     tLogSpace = 285,
     tListFromFile = 286,
     tDefineConstant = 287,
     tPi = 288,
     t0D = 289,
     t1D = 290,
     t2D = 291,
     t3D = 292,
     tExp = 293,
     tLog = 294,
     tLog10 = 295,
     tSqrt = 296,
     tSin = 297,
     tAsin = 298,
     tCos = 299,
     tAcos = 300,
     tTan = 301,
     tAtan = 302,
     tAtan2 = 303,
     tSinh = 304,
     tCosh = 305,
     tTanh = 306,
     tFabs = 307,
     tFloor = 308,
     tCeil = 309,
     tFmod = 310,
     tModulo = 311,
     tHypot = 312,
     tSolidAngle = 313,
     tTrace = 314,
     tOrder = 315,
     tCrossProduct = 316,
     tDofValue = 317,
     tMHTransform = 318,
     tMHJacNL = 319,
     tGroup = 320,
     tDefineGroup = 321,
     tAll = 322,
     tInSupport = 323,
     tMovingBand2D = 324,
     tDefineFunction = 325,
     tConstraint = 326,
     tRegion = 327,
     tSubRegion = 328,
     tRegionRef = 329,
     tSubRegionRef = 330,
     tFilter = 331,
     tCoefficient = 332,
     tValue = 333,
     tTimeFunction = 334,
     tBranch = 335,
     tNode = 336,
     tLoop = 337,
     tNameOfResolution = 338,
     tJacobian = 339,
     tCase = 340,
     tIntegration = 341,
     tFMMIntegration = 342,
     tMatrix = 343,
     tType = 344,
     tSubType = 345,
     tCriterion = 346,
     tGeoElement = 347,
     tNumberOfPoints = 348,
     tMaxNumberOfPoints = 349,
     tNumberOfDivisions = 350,
     tMaxNumberOfDivisions = 351,
     tStoppingCriterion = 352,
     tFunctionSpace = 353,
     tName = 354,
     tBasisFunction = 355,
     tNameOfCoef = 356,
     tFunction = 357,
     tdFunction = 358,
     tSubFunction = 359,
     tSubdFunction = 360,
     tSupport = 361,
     tEntity = 362,
     tSubSpace = 363,
     tNameOfBasisFunction = 364,
     tGlobalQuantity = 365,
     tEntityType = 366,
     tEntitySubType = 367,
     tNameOfConstraint = 368,
     tFormulation = 369,
     tQuantity = 370,
     tNameOfSpace = 371,
     tIndexOfSystem = 372,
     tSymmetry = 373,
     tEquation = 374,
     tGalerkin = 375,
     tdeRham = 376,
     tGlobalTerm = 377,
     tGlobalEquation = 378,
     tDiscreteGeometry = 379,
     tDt = 380,
     tDtDof = 381,
     tDtDt = 382,
     tDtDtDof = 383,
     tJacNL = 384,
     tNeverDt = 385,
     tDtNL = 386,
     tAtAnteriorTimeStep = 387,
     tIn = 388,
     tFull_Matrix = 389,
     tResolution = 390,
     tDefineSystem = 391,
     tNameOfFormulation = 392,
     tNameOfMesh = 393,
     tFrequency = 394,
     tSolver = 395,
     tOriginSystem = 396,
     tDestinationSystem = 397,
     tOperation = 398,
     tOperationEnd = 399,
     tSetTime = 400,
     tDTime = 401,
     tSetFrequency = 402,
     tFourierTransform = 403,
     tFourierTransformJ = 404,
     tLanczos = 405,
     tEigenSolve = 406,
     tEigenSolveJac = 407,
     tPerturbation = 408,
     tUpdate = 409,
     tUpdateConstraint = 410,
     tBreak = 411,
     tEvaluate = 412,
     tTimeLoopTheta = 413,
     tTime0 = 414,
     tTimeMax = 415,
     tTheta = 416,
     tTimeLoopNewmark = 417,
     tBeta = 418,
     tGamma = 419,
     tIterativeLoop = 420,
     tNbrMaxIteration = 421,
     tRelaxationFactor = 422,
     tIterativeTimeReduction = 423,
     tDivisionCoefficient = 424,
     tChangeOfState = 425,
     tChangeOfCoordinates = 426,
     tChangeOfCoordinates2 = 427,
     tSystemCommand = 428,
     tGenerateFMMGroups = 429,
     tGenerateOnly = 430,
     tGenerateOnlyJac = 431,
     tSolveJac_AdaptRelax = 432,
     tSaveSolutionExtendedMH = 433,
     tSaveSolutionMHtoTime = 434,
     tInit_MovingBand2D = 435,
     tMesh_MovingBand2D = 436,
     tGenerate_MH_Moving = 437,
     tGenerate_MH_Moving_Separate = 438,
     tAdd_MH_Moving = 439,
     tGenerateGroup = 440,
     tGenerateJacGroup = 441,
     tSaveMesh = 442,
     tDeformeMesh = 443,
     tDummyFrequency = 444,
     tPostProcessing = 445,
     tNameOfSystem = 446,
     tPostOperation = 447,
     tNameOfPostProcessing = 448,
     tUsingPost = 449,
     tAppend = 450,
     tPlot = 451,
     tPrint = 452,
     tPrintGroup = 453,
     tEcho = 454,
     tWrite = 455,
     tAdapt = 456,
     tOnGlobal = 457,
     tOnRegion = 458,
     tOnElementsOf = 459,
     tOnGrid = 460,
     tOnSection = 461,
     tOnPoint = 462,
     tOnLine = 463,
     tOnPlane = 464,
     tOnBox = 465,
     tWithArgument = 466,
     tFile = 467,
     tDepth = 468,
     tDimension = 469,
     tComma = 470,
     tTimeStep = 471,
     tHarmonicToTime = 472,
     tFormat = 473,
     tHeader = 474,
     tFooter = 475,
     tSkin = 476,
     tSmoothing = 477,
     tTarget = 478,
     tSort = 479,
     tIso = 480,
     tNoNewLine = 481,
     tDecomposeInSimplex = 482,
     tChangeOfValues = 483,
     tTimeLegend = 484,
     tFrequencyLegend = 485,
     tEigenvalueLegend = 486,
     tEvaluationPoints = 487,
     tStore = 488,
     tLastTimeStepOnly = 489,
     tStr = 490,
     tDate = 491,
     tDEF = 492,
     tOR = 493,
     tAND = 494,
     tAPPROXEQUAL = 495,
     tNOTEQUAL = 496,
     tEQUAL = 497,
     tGREATERGREATER = 498,
     tLESSLESS = 499,
     tGREATEROREQUAL = 500,
     tLESSOREQUAL = 501,
     tCROSSPRODUCT = 502,
     UNARYPREC = 503,
     tSHOW = 504
   };
#endif
/* Tokens.  */
#define tINT 258
#define tFLOAT 259
#define tSTRING 260
#define tBIGSTR 261
#define tEND 262
#define tDOTS 263
#define tStrCat 264
#define tSprintf 265
#define tPrintf 266
#define tRead 267
#define tPrintConstants 268
#define tStrCmp 269
#define tNbrRegions 270
#define tFor 271
#define tEndFor 272
#define tIf 273
#define tElse 274
#define tEndIf 275
#define tFlag 276
#define tHelp 277
#define tCpu 278
#define tCheck 279
#define tInclude 280
#define tConstant 281
#define tList 282
#define tListAlt 283
#define tLinSpace 284
#define tLogSpace 285
#define tListFromFile 286
#define tDefineConstant 287
#define tPi 288
#define t0D 289
#define t1D 290
#define t2D 291
#define t3D 292
#define tExp 293
#define tLog 294
#define tLog10 295
#define tSqrt 296
#define tSin 297
#define tAsin 298
#define tCos 299
#define tAcos 300
#define tTan 301
#define tAtan 302
#define tAtan2 303
#define tSinh 304
#define tCosh 305
#define tTanh 306
#define tFabs 307
#define tFloor 308
#define tCeil 309
#define tFmod 310
#define tModulo 311
#define tHypot 312
#define tSolidAngle 313
#define tTrace 314
#define tOrder 315
#define tCrossProduct 316
#define tDofValue 317
#define tMHTransform 318
#define tMHJacNL 319
#define tGroup 320
#define tDefineGroup 321
#define tAll 322
#define tInSupport 323
#define tMovingBand2D 324
#define tDefineFunction 325
#define tConstraint 326
#define tRegion 327
#define tSubRegion 328
#define tRegionRef 329
#define tSubRegionRef 330
#define tFilter 331
#define tCoefficient 332
#define tValue 333
#define tTimeFunction 334
#define tBranch 335
#define tNode 336
#define tLoop 337
#define tNameOfResolution 338
#define tJacobian 339
#define tCase 340
#define tIntegration 341
#define tFMMIntegration 342
#define tMatrix 343
#define tType 344
#define tSubType 345
#define tCriterion 346
#define tGeoElement 347
#define tNumberOfPoints 348
#define tMaxNumberOfPoints 349
#define tNumberOfDivisions 350
#define tMaxNumberOfDivisions 351
#define tStoppingCriterion 352
#define tFunctionSpace 353
#define tName 354
#define tBasisFunction 355
#define tNameOfCoef 356
#define tFunction 357
#define tdFunction 358
#define tSubFunction 359
#define tSubdFunction 360
#define tSupport 361
#define tEntity 362
#define tSubSpace 363
#define tNameOfBasisFunction 364
#define tGlobalQuantity 365
#define tEntityType 366
#define tEntitySubType 367
#define tNameOfConstraint 368
#define tFormulation 369
#define tQuantity 370
#define tNameOfSpace 371
#define tIndexOfSystem 372
#define tSymmetry 373
#define tEquation 374
#define tGalerkin 375
#define tdeRham 376
#define tGlobalTerm 377
#define tGlobalEquation 378
#define tDiscreteGeometry 379
#define tDt 380
#define tDtDof 381
#define tDtDt 382
#define tDtDtDof 383
#define tJacNL 384
#define tNeverDt 385
#define tDtNL 386
#define tAtAnteriorTimeStep 387
#define tIn 388
#define tFull_Matrix 389
#define tResolution 390
#define tDefineSystem 391
#define tNameOfFormulation 392
#define tNameOfMesh 393
#define tFrequency 394
#define tSolver 395
#define tOriginSystem 396
#define tDestinationSystem 397
#define tOperation 398
#define tOperationEnd 399
#define tSetTime 400
#define tDTime 401
#define tSetFrequency 402
#define tFourierTransform 403
#define tFourierTransformJ 404
#define tLanczos 405
#define tEigenSolve 406
#define tEigenSolveJac 407
#define tPerturbation 408
#define tUpdate 409
#define tUpdateConstraint 410
#define tBreak 411
#define tEvaluate 412
#define tTimeLoopTheta 413
#define tTime0 414
#define tTimeMax 415
#define tTheta 416
#define tTimeLoopNewmark 417
#define tBeta 418
#define tGamma 419
#define tIterativeLoop 420
#define tNbrMaxIteration 421
#define tRelaxationFactor 422
#define tIterativeTimeReduction 423
#define tDivisionCoefficient 424
#define tChangeOfState 425
#define tChangeOfCoordinates 426
#define tChangeOfCoordinates2 427
#define tSystemCommand 428
#define tGenerateFMMGroups 429
#define tGenerateOnly 430
#define tGenerateOnlyJac 431
#define tSolveJac_AdaptRelax 432
#define tSaveSolutionExtendedMH 433
#define tSaveSolutionMHtoTime 434
#define tInit_MovingBand2D 435
#define tMesh_MovingBand2D 436
#define tGenerate_MH_Moving 437
#define tGenerate_MH_Moving_Separate 438
#define tAdd_MH_Moving 439
#define tGenerateGroup 440
#define tGenerateJacGroup 441
#define tSaveMesh 442
#define tDeformeMesh 443
#define tDummyFrequency 444
#define tPostProcessing 445
#define tNameOfSystem 446
#define tPostOperation 447
#define tNameOfPostProcessing 448
#define tUsingPost 449
#define tAppend 450
#define tPlot 451
#define tPrint 452
#define tPrintGroup 453
#define tEcho 454
#define tWrite 455
#define tAdapt 456
#define tOnGlobal 457
#define tOnRegion 458
#define tOnElementsOf 459
#define tOnGrid 460
#define tOnSection 461
#define tOnPoint 462
#define tOnLine 463
#define tOnPlane 464
#define tOnBox 465
#define tWithArgument 466
#define tFile 467
#define tDepth 468
#define tDimension 469
#define tComma 470
#define tTimeStep 471
#define tHarmonicToTime 472
#define tFormat 473
#define tHeader 474
#define tFooter 475
#define tSkin 476
#define tSmoothing 477
#define tTarget 478
#define tSort 479
#define tIso 480
#define tNoNewLine 481
#define tDecomposeInSimplex 482
#define tChangeOfValues 483
#define tTimeLegend 484
#define tFrequencyLegend 485
#define tEigenvalueLegend 486
#define tEvaluationPoints 487
#define tStore 488
#define tLastTimeStepOnly 489
#define tStr 490
#define tDate 491
#define tDEF 492
#define tOR 493
#define tAND 494
#define tAPPROXEQUAL 495
#define tNOTEQUAL 496
#define tEQUAL 497
#define tGREATERGREATER 498
#define tLESSLESS 499
#define tGREATEROREQUAL 500
#define tLESSOREQUAL 501
#define tCROSSPRODUCT 502
#define UNARYPREC 503
#define tSHOW 504




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.120 2008-02-20 10:37:13 dular Exp $ */
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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

void hack_fsetpos(void) ;
void hack_fsetpos_printf(void) ;

void Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				int (*fcmp)(const void *a, const void *b)) ;
int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
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

int      Nbr_Index, Flag_MultipleIndex, Flag1 ;
List_T  * ListOfFormulation ;
List_T  * ListOfBasisFunction, * ListOfEntityIndex ;

List_T  * ListOfInt_Lnew ;
int     * ListOfInt_P ;

char     tmpstr[1024] ;

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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 183 "GetDP.y"
{
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
}
/* Line 187 of yacc.c.  */
#line 783 "GetDP.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 796 "GetDP.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  272
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  755
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2062

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   504

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   256,     2,   264,   265,   254,     2,     2,
     259,   260,   252,   250,   269,   251,   263,   253,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     244,     2,   245,   238,   270,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   261,     2,   262,   258,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   267,     2,   268,   271,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   239,   240,   241,   242,   243,   246,   247,
     248,   249,   255,   257,   266
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,     9,    13,    18,    23,
      28,    33,    38,    43,    48,    53,    58,    63,    65,    67,
      70,    72,    75,    79,    83,    87,    91,    95,    99,   102,
     105,   109,   113,   117,   121,   125,   129,   133,   137,   141,
     145,   149,   150,   153,   158,   164,   170,   176,   178,   184,
     186,   187,   188,   207,   208,   215,   218,   220,   222,   225,
     227,   229,   231,   233,   234,   238,   242,   244,   246,   250,
     251,   255,   260,   262,   266,   270,   274,   280,   286,   294,
     296,   297,   301,   308,   315,   325,   326,   328,   333,   334,
     337,   341,   342,   345,   351,   358,   366,   368,   369,   373,
     380,   385,   390,   391,   394,   398,   399,   403,   405,   409,
     410,   413,   415,   416,   417,   425,   429,   433,   440,   444,
     448,   452,   456,   460,   464,   468,   472,   476,   480,   484,
     488,   492,   496,   499,   502,   505,   509,   511,   515,   518,
     520,   523,   524,   530,   531,   539,   540,   552,   562,   567,
     572,   573,   581,   588,   591,   594,   597,   600,   604,   607,
     611,   613,   615,   619,   622,   626,   628,   632,   633,   637,
     644,   645,   650,   651,   654,   658,   663,   664,   669,   670,
     673,   677,   681,   686,   687,   692,   693,   696,   700,   704,
     709,   710,   715,   716,   719,   723,   727,   732,   733,   738,
     739,   742,   746,   750,   754,   758,   762,   766,   767,   770,
     774,   776,   777,   780,   784,   789,   793,   798,   804,   805,
     810,   813,   814,   817,   821,   825,   829,   833,   837,   841,
     849,   853,   857,   861,   865,   869,   877,   885,   893,   894,
     897,   901,   903,   904,   907,   910,   914,   919,   923,   928,
     933,   938,   943,   944,   949,   952,   953,   956,   960,   964,
     969,   974,   982,   986,   990,   994,   998,   999,  1000,  1001,
    1020,  1021,  1026,  1027,  1030,  1034,  1038,  1042,  1044,  1048,
    1049,  1053,  1055,  1059,  1060,  1064,  1065,  1070,  1073,  1074,
    1077,  1081,  1085,  1089,  1090,  1095,  1098,  1099,  1102,  1106,
    1110,  1114,  1118,  1119,  1122,  1126,  1128,  1129,  1132,  1136,
    1141,  1145,  1150,  1155,  1156,  1161,  1164,  1165,  1168,  1172,
    1176,  1180,  1184,  1188,  1189,  1195,  1199,  1200,  1206,  1210,
    1214,  1218,  1222,  1226,  1227,  1231,  1232,  1235,  1238,  1243,
    1248,  1253,  1258,  1259,  1262,  1266,  1270,  1274,  1275,  1278,
    1282,  1286,  1290,  1294,  1295,  1298,  1299,  1300,  1310,  1314,
    1318,  1322,  1325,  1329,  1335,  1336,  1339,  1343,  1344,  1345,
    1355,  1356,  1358,  1360,  1362,  1364,  1366,  1368,  1370,  1375,
    1379,  1380,  1383,  1387,  1389,  1390,  1393,  1397,  1402,  1407,
    1408,  1414,  1416,  1417,  1422,  1425,  1426,  1429,  1433,  1437,
    1441,  1445,  1449,  1453,  1457,  1461,  1463,  1465,  1469,  1470,
    1474,  1476,  1480,  1481,  1485,  1486,  1489,  1493,  1497,  1502,
    1507,  1512,  1517,  1523,  1529,  1532,  1540,  1552,  1560,  1574,
    1586,  1596,  1604,  1612,  1620,  1630,  1640,  1650,  1662,  1674,
    1686,  1692,  1710,  1724,  1740,  1752,  1766,  1767,  1775,  1776,
    1784,  1792,  1804,  1810,  1816,  1826,  1836,  1846,  1852,  1858,
    1870,  1880,  1895,  1910,  1918,  1931,  1942,  1950,  1958,  1966,
    1968,  1970,  1972,  1973,  1976,  1980,  1984,  1987,  1988,  1991,
    1995,  1999,  2003,  2007,  2012,  2013,  2016,  2020,  2024,  2028,
    2032,  2036,  2041,  2042,  2045,  2049,  2053,  2057,  2061,  2066,
    2067,  2070,  2074,  2078,  2082,  2086,  2090,  2095,  2100,  2105,
    2106,  2111,  2112,  2115,  2119,  2123,  2127,  2131,  2135,  2139,
    2140,  2143,  2147,  2149,  2150,  2153,  2157,  2162,  2166,  2170,
    2175,  2176,  2181,  2184,  2185,  2188,  2192,  2197,  2198,  2204,
    2210,  2213,  2214,  2217,  2218,  2225,  2229,  2233,  2237,  2241,
    2242,  2245,  2249,  2251,  2252,  2255,  2259,  2263,  2267,  2271,
    2276,  2277,  2286,  2287,  2288,  2292,  2300,  2308,  2317,  2329,
    2336,  2337,  2348,  2350,  2354,  2361,  2363,  2365,  2367,  2369,
    2370,  2374,  2376,  2379,  2382,  2395,  2398,  2414,  2419,  2432,
    2450,  2473,  2486,  2487,  2490,  2494,  2499,  2504,  2508,  2511,
    2514,  2518,  2522,  2526,  2530,  2534,  2537,  2541,  2545,  2549,
    2553,  2557,  2561,  2565,  2571,  2574,  2577,  2581,  2591,  2595,
    2598,  2608,  2611,  2621,  2624,  2634,  2640,  2644,  2647,  2648,
    2651,  2658,  2667,  2676,  2687,  2689,  2694,  2696,  2698,  2704,
    2709,  2714,  2722,  2727,  2735,  2741,  2745,  2749,  2757,  2763,
    2772,  2775,  2776,  2780,  2787,  2793,  2799,  2801,  2803,  2805,
    2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,
    2827,  2829,  2831,  2833,  2835,  2837,  2839,  2841,  2843,  2847,
    2850,  2853,  2857,  2861,  2865,  2869,  2873,  2877,  2881,  2885,
    2889,  2893,  2897,  2901,  2905,  2909,  2914,  2919,  2924,  2929,
    2934,  2939,  2944,  2949,  2954,  2959,  2966,  2971,  2976,  2981,
    2986,  2991,  2996,  3003,  3010,  3017,  3023,  3025,  3027,  3030,
    3032,  3034,  3036,  3038,  3040,  3042,  3044,  3046,  3047,  3049,
    3051,  3055,  3057,  3059,  3063,  3067,  3071,  3077,  3081,  3086,
    3091,  3098,  3107,  3116,  3122,  3128,  3130,  3132,  3134,  3136,
    3138,  3143,  3150,  3152,  3159,  3166
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     273,     0,    -1,    -1,   274,   275,    -1,    -1,    -1,   275,
     276,   277,    -1,    65,   267,   279,   268,    -1,   102,   267,
     300,   268,    -1,    71,   267,   335,   268,    -1,    84,   267,
     320,   268,    -1,    86,   267,   326,   268,    -1,    98,   267,
     342,   268,    -1,   114,   267,   365,   268,    -1,   135,   267,
     391,   268,    -1,   190,   267,   421,   268,    -1,   192,   267,
     432,   268,    -1,   436,    -1,   449,    -1,    25,   460,    -1,
     278,    -1,    22,     7,    -1,    22,   197,     7,    -1,    22,
      24,     7,    -1,    22,    39,     7,    -1,    22,    23,     7,
      -1,    22,    22,     7,    -1,    22,     5,     7,    -1,    23,
       7,    -1,    24,     7,    -1,    24,    65,     7,    -1,    24,
     102,     7,    -1,    24,    71,     7,    -1,    24,    84,     7,
      -1,    24,    86,     7,    -1,    24,    98,     7,    -1,    24,
     114,     7,    -1,    24,   135,     7,    -1,    24,   190,     7,
      -1,    24,   192,     7,    -1,    24,     3,     7,    -1,    -1,
     279,   280,    -1,   459,   237,   284,     7,    -1,     5,   299,
     237,   284,     7,    -1,     5,   297,   237,   284,     7,    -1,
      66,   261,   295,   262,     7,    -1,   281,    -1,   459,   250,
     237,   284,     7,    -1,   449,    -1,    -1,    -1,   459,   261,
     453,   262,   237,    69,   282,   261,   264,   292,   283,   269,
     264,   292,   269,   453,   262,     7,    -1,    -1,   288,   261,
     289,   285,   290,   262,    -1,   264,   292,    -1,   284,    -1,
     459,    -1,   459,   298,    -1,    72,    -1,     5,    -1,   292,
      -1,    67,    -1,    -1,   296,   291,   292,    -1,   296,    68,
     459,    -1,     5,    -1,   294,    -1,   267,   293,   268,    -1,
      -1,   293,   296,   294,    -1,   293,   296,   251,   294,    -1,
       3,    -1,   259,   453,   260,    -1,   270,   456,   270,    -1,
       3,     8,   453,    -1,   259,   453,   260,     8,   453,    -1,
       3,     8,   453,     8,   453,    -1,   259,   453,   260,     8,
     453,     8,   453,    -1,   459,    -1,    -1,   295,   296,   459,
      -1,   295,   296,   459,   237,   267,   268,    -1,   295,   296,
     459,   267,   453,   268,    -1,   295,   296,   459,   267,   453,
     268,   237,   267,   268,    -1,    -1,   269,    -1,   267,   264,
     453,   268,    -1,    -1,   267,   268,    -1,   267,   453,   268,
      -1,    -1,   300,   301,    -1,    70,   261,   302,   262,     7,
      -1,   459,   261,   262,   237,   303,     7,    -1,   459,   261,
     286,   262,   237,   303,     7,    -1,   449,    -1,    -1,   302,
     296,     5,    -1,   302,   296,     5,   267,   453,   268,    -1,
      26,   261,   453,   262,    -1,   102,   261,     5,   262,    -1,
      -1,   304,   307,    -1,   252,   252,   252,    -1,    -1,   267,
     306,   268,    -1,   303,    -1,   306,   269,   303,    -1,    -1,
     308,   309,    -1,   312,    -1,    -1,    -1,   309,   238,   310,
     309,     8,   311,   309,    -1,   309,   252,   309,    -1,   309,
     255,   309,    -1,    61,   261,   309,   269,   309,   262,    -1,
     309,   253,   309,    -1,   309,   250,   309,    -1,   309,   251,
     309,    -1,   309,   254,   309,    -1,   309,   258,   309,    -1,
     309,   244,   309,    -1,   309,   245,   309,    -1,   309,   249,
     309,    -1,   309,   248,   309,    -1,   309,   243,   309,    -1,
     309,   242,   309,    -1,   309,   241,   309,    -1,   309,   240,
     309,    -1,   309,   239,   309,    -1,   251,   309,    -1,   250,
     309,    -1,   256,   309,    -1,   259,   309,   260,    -1,   454,
      -1,   452,   317,   319,    -1,     5,   390,    -1,   390,    -1,
     390,   317,    -1,    -1,   125,   313,   261,   307,   262,    -1,
      -1,   132,   314,   261,   307,   269,     3,   262,    -1,    -1,
      63,   261,     5,   261,   315,   307,   262,   262,   267,   453,
     268,    -1,    64,   261,     5,   262,   267,   453,   269,   453,
     268,    -1,    58,   261,   390,   262,    -1,    60,   261,   390,
     262,    -1,    -1,    59,   316,   261,   307,   269,   286,   262,
      -1,   244,     5,   245,   261,   307,   262,    -1,   265,     5,
      -1,   265,   216,    -1,   265,   146,    -1,   265,     3,    -1,
     312,   264,     3,    -1,   264,     3,    -1,   312,   266,   453,
      -1,   462,    -1,   463,    -1,   261,   263,   262,    -1,   261,
     262,    -1,   261,   318,   262,    -1,   309,    -1,   318,   269,
     309,    -1,    -1,   267,   456,   268,    -1,   267,    72,   261,
     286,   262,   268,    -1,    -1,   320,   267,   321,   268,    -1,
      -1,   321,   322,    -1,    99,     5,     7,    -1,    85,   267,
     323,   268,    -1,    -1,   323,   267,   324,   268,    -1,    -1,
     324,   325,    -1,    72,   286,     7,    -1,    72,    67,     7,
      -1,    84,     5,   319,     7,    -1,    -1,   326,   267,   327,
     268,    -1,    -1,   327,   328,    -1,    99,     5,     7,    -1,
      91,   303,     7,    -1,    85,   267,   329,   268,    -1,    -1,
     329,   267,   330,   268,    -1,    -1,   330,   331,    -1,    89,
       5,     7,    -1,    90,     5,     7,    -1,    85,   267,   332,
     268,    -1,    -1,   332,   267,   333,   268,    -1,    -1,   333,
     334,    -1,    92,     5,     7,    -1,    93,   453,     7,    -1,
      94,   453,     7,    -1,    95,   453,     7,    -1,    96,   453,
       7,    -1,    97,   453,     7,    -1,    -1,   335,   336,    -1,
     267,   337,   268,    -1,   449,    -1,    -1,   337,   338,    -1,
      99,   459,     7,    -1,    99,     5,   297,     7,    -1,    89,
       5,     7,    -1,    85,   267,   339,   268,    -1,    85,     5,
     267,   339,   268,    -1,    -1,   339,   267,   340,   268,    -1,
     339,   449,    -1,    -1,   340,   341,    -1,    89,     5,     7,
      -1,    72,   286,     7,    -1,    73,   286,     7,    -1,    79,
     303,     7,    -1,    78,   303,     7,    -1,    83,   459,     7,
      -1,    80,   267,   454,   296,   454,   268,     7,    -1,    74,
     286,     7,    -1,    75,   286,     7,    -1,   102,   303,     7,
      -1,    77,   303,     7,    -1,    76,   303,     7,    -1,   102,
     261,   303,   269,   303,   262,     7,    -1,    77,   261,   303,
     269,   303,   262,     7,    -1,    76,   261,   303,   269,   303,
     262,     7,    -1,    -1,   342,   343,    -1,   267,   344,   268,
      -1,   449,    -1,    -1,   344,   345,    -1,   344,   449,    -1,
      99,   459,     7,    -1,    99,     5,   297,     7,    -1,    89,
       5,     7,    -1,   100,   267,   346,   268,    -1,   108,   267,
     352,   268,    -1,   110,   267,   359,   268,    -1,    71,   267,
     362,   268,    -1,    -1,   346,   267,   347,   268,    -1,   346,
     449,    -1,    -1,   347,   348,    -1,    99,     5,     7,    -1,
     101,     5,     7,    -1,   101,     5,   297,     7,    -1,   102,
       5,   349,     7,    -1,   103,   267,     5,   296,     5,   268,
       7,    -1,   104,   305,     7,    -1,   105,   305,     7,    -1,
     106,   286,     7,    -1,   107,   286,     7,    -1,    -1,    -1,
      -1,   267,   115,     5,     7,   114,     5,   297,     7,   350,
      65,   287,     7,   351,   135,     5,   298,     7,   268,    -1,
      -1,   352,   267,   353,   268,    -1,    -1,   353,   354,    -1,
      99,     5,     7,    -1,   109,   355,     7,    -1,   101,   357,
       7,    -1,     5,    -1,   267,   356,   268,    -1,    -1,   356,
     296,     5,    -1,     5,    -1,   267,   358,   268,    -1,    -1,
     358,   296,     5,    -1,    -1,   359,   267,   360,   268,    -1,
     359,   449,    -1,    -1,   360,   361,    -1,    99,   459,     7,
      -1,    89,     5,     7,    -1,   101,     5,     7,    -1,    -1,
     362,   267,   363,   268,    -1,   362,   449,    -1,    -1,   363,
     364,    -1,   101,     5,     7,    -1,   111,   288,     7,    -1,
     112,   291,     7,    -1,   113,   459,     7,    -1,    -1,   365,
     366,    -1,   267,   367,   268,    -1,   449,    -1,    -1,   367,
     368,    -1,    99,   459,     7,    -1,    99,     5,   297,     7,
      -1,    89,     5,     7,    -1,   115,   267,   369,   268,    -1,
     119,   267,   375,   268,    -1,    -1,   369,   267,   370,   268,
      -1,   369,   449,    -1,    -1,   370,   371,    -1,    99,   459,
       7,    -1,    89,   110,     7,    -1,    89,   120,     7,    -1,
      89,     5,     7,    -1,   189,   455,     7,    -1,    -1,   116,
     459,   372,   374,     7,    -1,   117,   453,     7,    -1,    -1,
     261,   373,   307,   262,     7,    -1,   133,   286,     7,    -1,
      86,     5,     7,    -1,    87,     5,     7,    -1,    84,     5,
       7,    -1,   118,     3,     7,    -1,    -1,   261,   459,   262,
      -1,    -1,   375,   376,    -1,   375,   449,    -1,   120,   267,
     381,   268,    -1,   121,   267,   381,   268,    -1,   122,   267,
     385,   268,    -1,   123,   267,   377,   268,    -1,    -1,   377,
     378,    -1,    89,     5,     7,    -1,   113,     5,     7,    -1,
     267,   379,   268,    -1,    -1,   379,   380,    -1,    81,   390,
       7,    -1,    82,   390,     7,    -1,   119,   390,     7,    -1,
     133,   286,     7,    -1,    -1,   381,   382,    -1,    -1,    -1,
     389,   261,   383,   307,   384,   269,   307,   262,     7,    -1,
     133,   286,     7,    -1,    84,     5,     7,    -1,    86,     5,
       7,    -1,   134,     7,    -1,    87,     5,     7,    -1,    88,
     261,     3,   262,     7,    -1,    -1,   385,   386,    -1,   133,
     286,     7,    -1,    -1,    -1,   389,   261,   387,   307,   388,
     269,   390,   262,     7,    -1,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,
     267,     5,   459,   268,    -1,   267,   459,   268,    -1,    -1,
     391,   392,    -1,   267,   393,   268,    -1,   449,    -1,    -1,
     393,   394,    -1,    99,   459,     7,    -1,    99,     5,   297,
       7,    -1,   136,   267,   396,   268,    -1,    -1,   143,   395,
     267,   403,   268,    -1,   449,    -1,    -1,   396,   267,   397,
     268,    -1,   396,   449,    -1,    -1,   397,   398,    -1,    99,
     459,     7,    -1,    89,     5,     7,    -1,   137,   399,     7,
      -1,   138,   460,     7,    -1,   141,   401,     7,    -1,   142,
     459,     7,    -1,   139,   455,     7,    -1,   140,   460,     7,
      -1,   449,    -1,   459,    -1,   267,   400,   268,    -1,    -1,
     400,   296,   459,    -1,   459,    -1,   267,   402,   268,    -1,
      -1,   402,   296,   459,    -1,    -1,   403,   404,    -1,     5,
     459,     7,    -1,   145,   303,     7,    -1,   158,   267,   410,
     268,    -1,   162,   267,   412,   268,    -1,   165,   267,   414,
     268,    -1,   168,   267,   416,   268,    -1,     5,   261,   459,
     262,     7,    -1,   145,   261,   303,   262,     7,    -1,   156,
       7,    -1,    18,   261,   303,   262,   267,   403,   268,    -1,
      18,   261,   303,   262,   267,   403,   268,    19,   267,   403,
     268,    -1,   147,   261,   459,   269,   303,   262,     7,    -1,
     174,   261,   459,   269,   303,   269,   303,   269,   303,   269,
     303,   262,     7,    -1,   174,   261,   459,   269,   303,   269,
     303,   269,   303,   262,     7,    -1,   174,   261,   459,   269,
     303,   269,   303,   262,     7,    -1,   175,   261,   459,   269,
     455,   262,     7,    -1,   176,   261,   459,   269,   455,   262,
       7,    -1,   154,   261,   459,   269,   303,   262,     7,    -1,
     155,   261,   459,   269,   286,   269,   459,   262,     7,    -1,
     148,   261,   459,   269,   459,   269,   455,   262,     7,    -1,
     149,   261,   459,   269,   459,   269,   453,   262,     7,    -1,
     150,   261,   459,   269,   453,   269,   455,   269,   453,   262,
       7,    -1,   151,   261,   459,   269,   453,   269,   453,   269,
     453,   262,     7,    -1,   152,   261,   459,   269,   453,   269,
     453,   269,   453,   262,     7,    -1,   157,   261,   303,   262,
       7,    -1,   153,   261,   459,   269,   459,   269,   459,   269,
     453,   269,   455,   269,   453,   269,   453,   262,     7,    -1,
     158,   261,   453,   269,   453,   269,   303,   269,   303,   262,
     267,   403,   268,    -1,   162,   261,   453,   269,   453,   269,
     303,   269,   453,   269,   453,   262,   267,   403,   268,    -1,
     165,   261,   453,   269,   453,   269,   303,   262,   267,   403,
     268,    -1,   165,   261,   453,   269,   453,   269,   303,   269,
     453,   262,   267,   403,   268,    -1,    -1,   197,   405,   261,
     407,   408,   262,     7,    -1,    -1,   200,   406,   261,   407,
     408,   262,     7,    -1,   171,   261,   286,   269,   303,   262,
       7,    -1,   171,   261,   286,   269,   303,   269,   453,   269,
     303,   262,     7,    -1,   192,   261,   459,   262,     7,    -1,
     173,   261,   460,   262,     7,    -1,   177,   261,   459,   269,
     455,   269,   453,   262,     7,    -1,   178,   261,   459,   269,
     453,   269,   460,   262,     7,    -1,   179,   261,   459,   269,
     455,   269,   460,   262,     7,    -1,   180,   267,   459,   268,
       7,    -1,   181,   267,   459,   268,     7,    -1,   187,   267,
     459,   269,   286,   269,   460,   269,   303,   268,     7,    -1,
     187,   267,   459,   269,   286,   269,   460,   268,     7,    -1,
     182,   261,   459,   269,   459,   269,   453,   269,   453,   262,
     267,   403,   268,     7,    -1,   183,   261,   459,   269,   459,
     269,   453,   269,   453,   262,   267,   403,   268,     7,    -1,
     184,   261,   459,   269,   453,   262,     7,    -1,   188,   267,
       5,   269,     5,   269,   138,   460,   269,   453,   268,     7,
      -1,   188,   267,     5,   269,     5,   269,   138,   460,   268,
       7,    -1,   188,   267,     5,   269,     5,   268,     7,    -1,
     185,   261,   459,   269,   459,   262,     7,    -1,   186,   261,
     459,   269,   459,   262,     7,    -1,   449,    -1,   305,    -1,
     459,    -1,    -1,   408,   409,    -1,   269,   212,   460,    -1,
     269,   216,   455,    -1,   269,   455,    -1,    -1,   410,   411,
      -1,   159,   453,     7,    -1,   160,   453,     7,    -1,   146,
     303,     7,    -1,   161,   303,     7,    -1,   143,   267,   403,
     268,    -1,    -1,   412,   413,    -1,   159,   453,     7,    -1,
     160,   453,     7,    -1,   146,   303,     7,    -1,   163,   453,
       7,    -1,   164,   453,     7,    -1,   143,   267,   403,   268,
      -1,    -1,   414,   415,    -1,   166,   453,     7,    -1,    91,
     453,     7,    -1,   167,   303,     7,    -1,    21,   453,     7,
      -1,   143,   267,   403,   268,    -1,    -1,   416,   417,    -1,
     166,   453,     7,    -1,   169,   453,     7,    -1,    91,   453,
       7,    -1,    21,   453,     7,    -1,   136,   459,     7,    -1,
     170,   267,   418,   268,    -1,   143,   267,   403,   268,    -1,
     144,   267,   403,   268,    -1,    -1,   418,   267,   419,   268,
      -1,    -1,   419,   420,    -1,    89,     5,     7,    -1,   115,
       5,     7,    -1,   133,   286,     7,    -1,    91,   453,     7,
      -1,   102,   303,     7,    -1,    21,     5,     7,    -1,    -1,
     421,   422,    -1,   267,   423,   268,    -1,   449,    -1,    -1,
     423,   424,    -1,    99,   459,     7,    -1,    99,     5,   297,
       7,    -1,   137,   459,     7,    -1,   191,   459,     7,    -1,
     115,   267,   425,   268,    -1,    -1,   425,   267,   426,   268,
      -1,   425,   449,    -1,    -1,   426,   427,    -1,    99,   459,
       7,    -1,    78,   267,   428,   268,    -1,    -1,   428,   120,
     267,   429,   268,    -1,   428,     5,   267,   429,   268,    -1,
     428,   449,    -1,    -1,   429,   430,    -1,    -1,   389,   261,
     431,   307,   262,     7,    -1,    89,     5,     7,    -1,   133,
     286,     7,    -1,    84,     5,     7,    -1,    86,     5,     7,
      -1,    -1,   432,   433,    -1,   267,   434,   268,    -1,   449,
      -1,    -1,   434,   435,    -1,    99,   459,     7,    -1,   193,
     459,     7,    -1,   218,     5,     7,    -1,   195,   460,     7,
      -1,   143,   267,   438,   268,    -1,    -1,   192,   459,   194,
     459,   437,   267,   438,   268,    -1,    -1,    -1,   438,   439,
     440,    -1,   196,   261,   442,   445,   446,   262,     7,    -1,
     197,   261,   442,   445,   446,   262,     7,    -1,   197,   261,
       6,   269,   303,   446,   262,     7,    -1,   197,   261,     6,
     269,   235,   261,   460,   262,   446,   262,     7,    -1,   199,
     261,     6,   446,   262,     7,    -1,    -1,   198,   261,   286,
     441,   269,   133,   286,   446,   262,     7,    -1,   449,    -1,
     459,   444,   269,    -1,   459,   444,   443,     5,   444,   269,
      -1,   252,    -1,   253,    -1,   250,    -1,   251,    -1,    -1,
     261,   286,   262,    -1,   202,    -1,   203,   286,    -1,   204,
     286,    -1,   206,   267,   267,   456,   268,   267,   456,   268,
     267,   456,   268,   268,    -1,   205,   286,    -1,   205,   267,
     303,   269,   303,   269,   303,   268,   267,   455,   269,   455,
     269,   455,   268,    -1,   207,   267,   456,   268,    -1,   208,
     267,   267,   456,   268,   267,   456,   268,   268,   267,   453,
     268,    -1,   209,   267,   267,   456,   268,   267,   456,   268,
     267,   456,   268,   268,   267,   453,   269,   453,   268,    -1,
     210,   267,   267,   456,   268,   267,   456,   268,   267,   456,
     268,   267,   456,   268,   268,   267,   453,   269,   453,   269,
     453,   268,    -1,   203,   286,   211,     5,   267,   453,   269,
     453,   268,   267,   453,   268,    -1,    -1,   446,   447,    -1,
     269,   212,   460,    -1,   269,   212,   245,   460,    -1,   269,
     212,   246,   460,    -1,   269,   213,   453,    -1,   269,   221,
      -1,   269,   222,    -1,   269,   217,   453,    -1,   269,   218,
       5,    -1,   269,   219,   448,    -1,   269,   220,   448,    -1,
     269,   218,   448,    -1,   269,   215,    -1,   269,   214,   453,
      -1,   269,   216,   455,    -1,   269,   201,     5,    -1,   269,
     224,     5,    -1,   269,   223,   453,    -1,   269,    78,   455,
      -1,   269,   225,   453,    -1,   269,   225,   267,   456,   268,
      -1,   269,   226,    -1,   269,   227,    -1,   269,   139,   455,
      -1,   269,   171,   267,   303,   269,   303,   269,   303,   268,
      -1,   269,   228,   305,    -1,   269,   229,    -1,   269,   229,
     267,   453,   269,   453,   269,   453,   268,    -1,   269,   230,
      -1,   269,   230,   267,   453,   269,   453,   269,   453,   268,
      -1,   269,   231,    -1,   269,   231,   267,   453,   269,   453,
     269,   453,   268,    -1,   269,   232,   267,   456,   268,    -1,
     269,   233,     3,    -1,   269,   234,    -1,    -1,   448,     6,
      -1,    16,   259,   453,     8,   453,   260,    -1,    16,   259,
     453,     8,   453,     8,   453,   260,    -1,    16,     5,   133,
     267,   453,     8,   453,   268,    -1,    16,     5,   133,   267,
     453,     8,   453,     8,   453,   268,    -1,    17,    -1,    18,
     259,   453,   260,    -1,    20,    -1,   450,    -1,    32,   261,
     451,   262,     7,    -1,   459,   237,   455,     7,    -1,   459,
     237,     6,     7,    -1,   459,   237,   235,   261,   460,   262,
       7,    -1,   459,   237,   461,     7,    -1,   459,   237,    31,
     261,   460,   262,     7,    -1,    11,   259,     6,   260,     7,
      -1,    11,   459,     7,    -1,    11,   264,     7,    -1,    11,
     259,     6,   269,   456,   260,     7,    -1,    12,   259,   459,
     260,     7,    -1,    12,   259,   459,   260,   261,   453,   262,
       7,    -1,    13,     7,    -1,    -1,   451,   296,   459,    -1,
     451,   296,   459,   267,   453,   268,    -1,   451,   296,   459,
     237,   453,    -1,   451,   296,   459,   237,     6,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,   459,
      -1,   454,    -1,   259,   453,   260,    -1,   251,   453,    -1,
     256,   453,    -1,   453,   251,   453,    -1,   453,   250,   453,
      -1,   453,   252,   453,    -1,   453,   253,   453,    -1,   453,
     254,   453,    -1,   453,   258,   453,    -1,   453,   244,   453,
      -1,   453,   245,   453,    -1,   453,   249,   453,    -1,   453,
     248,   453,    -1,   453,   243,   453,    -1,   453,   242,   453,
      -1,   453,   240,   453,    -1,   453,   239,   453,    -1,    38,
     261,   453,   262,    -1,    39,   261,   453,   262,    -1,    40,
     261,   453,   262,    -1,    41,   261,   453,   262,    -1,    42,
     261,   453,   262,    -1,    43,   261,   453,   262,    -1,    44,
     261,   453,   262,    -1,    45,   261,   453,   262,    -1,    46,
     261,   453,   262,    -1,    47,   261,   453,   262,    -1,    48,
     261,   453,   269,   453,   262,    -1,    49,   261,   453,   262,
      -1,    50,   261,   453,   262,    -1,    51,   261,   453,   262,
      -1,    52,   261,   453,   262,    -1,    53,   261,   453,   262,
      -1,    54,   261,   453,   262,    -1,    55,   261,   453,   269,
     453,   262,    -1,    56,   261,   453,   269,   453,   262,    -1,
      57,   261,   453,   269,   453,   262,    -1,   453,   238,   453,
       8,   453,    -1,   462,    -1,   463,    -1,   453,   264,    -1,
       4,    -1,     3,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,   459,    -1,    -1,   453,    -1,   457,
      -1,   267,   456,   268,    -1,   453,    -1,   457,    -1,   456,
     269,   453,    -1,   456,   269,   457,    -1,   453,     8,   453,
      -1,   453,     8,   453,     8,   453,    -1,     5,   267,   268,
      -1,     5,   267,   456,   268,    -1,    27,   261,     5,   262,
      -1,    28,   261,     5,   269,     5,   262,    -1,    29,   261,
     453,   269,   453,   269,   453,   262,    -1,    30,   261,   453,
     269,   453,   269,   453,   262,    -1,     5,   271,   267,   453,
     268,    -1,   458,   271,   267,   453,   268,    -1,     5,    -1,
     458,    -1,     6,    -1,   459,    -1,   461,    -1,    10,   259,
     460,   260,    -1,    10,   259,   460,   269,   456,   260,    -1,
     236,    -1,     9,   261,   460,   269,   460,   262,    -1,    14,
     261,   460,   269,   460,   262,    -1,    15,   261,   459,   262,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   341,   341,   341,   377,   381,   380,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   399,   401,   404,
     409,   419,   421,   423,   425,   427,   429,   431,   433,   435,
     437,   439,   441,   443,   445,   447,   449,   451,   453,   455,
     457,   483,   486,   492,   495,   501,   507,   509,   511,   514,
     520,   530,   519,   547,   546,   563,   574,   579,   596,   626,
     629,   642,   643,   650,   652,   655,   673,   686,   693,   701,
     705,   712,   723,   729,   736,   747,   756,   764,   778,   791,
     826,   830,   840,   851,   866,   887,   887,   892,   898,   899,
     904,   912,   915,   920,   922,   942,   986,   990,   993,  1003,
    1026,  1032,  1039,  1039,  1046,  1054,  1058,  1064,  1067,  1074,
    1074,  1087,  1090,  1103,  1089,  1131,  1137,  1143,  1149,  1155,
    1161,  1167,  1173,  1179,  1185,  1191,  1197,  1203,  1209,  1215,
    1221,  1227,  1234,  1240,  1242,  1253,  1255,  1261,  1335,  1369,
    1378,  1391,  1390,  1405,  1404,  1419,  1418,  1434,  1446,  1452,
    1459,  1458,  1489,  1515,  1528,  1534,  1541,  1547,  1554,  1561,
    1568,  1574,  1584,  1585,  1586,  1591,  1592,  1598,  1600,  1603,
    1619,  1623,  1631,  1633,  1639,  1644,  1652,  1654,  1662,  1665,
    1671,  1674,  1677,  1716,  1721,  1729,  1735,  1741,  1748,  1751,
    1759,  1761,  1769,  1774,  1780,  1790,  1800,  1808,  1810,  1818,
    1827,  1833,  1881,  1884,  1887,  1890,  1893,  1905,  1909,  1914,
    1919,  1925,  1931,  1937,  1944,  1952,  1961,  1964,  1983,  1987,
    1992,  2002,  2009,  2015,  2025,  2030,  2036,  2041,  2049,  2057,
    2066,  2084,  2093,  2101,  2109,  2119,  2129,  2139,  2160,  2165,
    2170,  2175,  2182,  2187,  2189,  2195,  2202,  2210,  2219,  2222,
    2225,  2228,  2236,  2241,  2258,  2268,  2282,  2288,  2291,  2296,
    2301,  2315,  2335,  2340,  2345,  2350,  2379,  2385,  2389,  2383,
    2463,  2468,  2478,  2482,  2488,  2495,  2498,  2505,  2521,  2528,
    2530,  2549,  2561,  2569,  2573,  2589,  2594,  2600,  2610,  2615,
    2621,  2628,  2639,  2654,  2658,  2695,  2705,  2714,  2720,  2753,
    2756,  2759,  2775,  2779,  2784,  2789,  2796,  2800,  2806,  2813,
    2821,  2831,  2833,  2840,  2844,  2849,  2856,  2872,  2878,  2881,
    2885,  2888,  2898,  2903,  2902,  2934,  2940,  2939,  3256,  3261,
    3270,  3279,  3288,  3293,  3296,  3337,  3341,  3346,  3355,  3358,
    3361,  3364,  3376,  3381,  3386,  3396,  3406,  3421,  3427,  3432,
    3434,  3436,  3438,  3447,  3465,  3472,  3480,  3471,  3612,  3617,
    3626,  3635,  3640,  3649,  3661,  3675,  3689,  3695,  3703,  3694,
    3775,  3776,  3777,  3778,  3779,  3780,  3781,  3782,  3788,  3809,
    3834,  3838,  3843,  3848,  3855,  3860,  3866,  3873,  3881,  3885,
    3884,  3889,  3895,  3899,  3904,  3914,  3927,  3933,  3936,  3945,
    3948,  3953,  3964,  3969,  3974,  3979,  3985,  3994,  4002,  4004,
    4016,  4026,  4033,  4035,  4048,  4055,  4068,  4090,  4097,  4103,
    4109,  4115,  4123,  4145,  4152,  4158,  4169,  4180,  4193,  4208,
    4223,  4238,  4258,  4279,  4291,  4311,  4328,  4347,  4368,  4382,
    4396,  4403,  4437,  4450,  4464,  4477,  4491,  4490,  4500,  4499,
    4508,  4519,  4531,  4541,  4549,  4562,  4575,  4589,  4599,  4609,
    4623,  4637,  4655,  4674,  4685,  4700,  4715,  4730,  4745,  4760,
    4771,  4776,  4787,  4792,  4796,  4799,  4809,  4826,  4835,  4841,
    4845,  4849,  4853,  4858,  4870,  4880,  4886,  4890,  4894,  4898,
    4902,  4907,  4919,  4928,  4933,  4937,  4941,  4945,  4949,  4961,
    4973,  4978,  4982,  4986,  4990,  4995,  5005,  5011,  5017,  5028,
    5030,  5036,  5048,  5053,  5063,  5092,  5095,  5098,  5106,  5124,
    5130,  5135,  5140,  5145,  5153,  5157,  5164,  5172,  5185,  5190,
    5197,  5199,  5202,  5209,  5214,  5219,  5222,  5229,  5233,  5239,
    5251,  5257,  5266,  5271,  5270,  5305,  5316,  5321,  5330,  5348,
    5354,  5359,  5362,  5367,  5374,  5378,  5385,  5397,  5408,  5413,
    5420,  5419,  5447,  5450,  5449,  5466,  5471,  5476,  5485,  5494,
    5504,  5503,  5514,  5522,  5534,  5558,  5559,  5560,  5561,  5567,
    5568,  5574,  5580,  5587,  5594,  5618,  5625,  5637,  5650,  5670,
    5696,  5729,  5751,  5782,  5786,  5800,  5814,  5828,  5832,  5836,
    5840,  5844,  5854,  5859,  5864,  5884,  5888,  5895,  5905,  5914,
    5923,  5930,  5938,  5942,  5951,  5955,  5959,  5967,  5973,  5977,
    5985,  5992,  6000,  6007,  6015,  6022,  6030,  6034,  6044,  6049,
    6099,  6114,  6130,  6150,  6170,  6208,  6212,  6216,  6226,  6228,
    6243,  6249,  6255,  6261,  6277,  6282,  6298,  6303,  6315,  6325,
    6339,  6362,  6365,  6371,  6385,  6391,  6402,  6403,  6404,  6405,
    6406,  6407,  6408,  6409,  6410,  6411,  6412,  6413,  6414,  6415,
    6416,  6417,  6418,  6419,  6420,  6421,  6422,  6426,  6427,  6428,
    6429,  6430,  6431,  6432,  6433,  6434,  6435,  6436,  6437,  6438,
    6439,  6440,  6441,  6442,  6443,  6444,  6445,  6446,  6447,  6448,
    6449,  6450,  6451,  6452,  6453,  6454,  6455,  6456,  6457,  6458,
    6459,  6460,  6461,  6462,  6463,  6465,  6467,  6469,  6471,  6476,
    6477,  6478,  6479,  6480,  6481,  6482,  6483,  6502,  6504,  6510,
    6513,  6520,  6526,  6529,  6532,  6544,  6550,  6561,  6577,  6599,
    6614,  6652,  6660,  6672,  6680,  6694,  6697,  6704,  6707,  6722,
    6727,  6732,  6751,  6761,  6774,  6786
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT", "tFLOAT", "tSTRING", "tBIGSTR",
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead",
  "tPrintConstants", "tStrCmp", "tNbrRegions", "tFor", "tEndFor", "tIf",
  "tElse", "tEndIf", "tFlag", "tHelp", "tCpu", "tCheck", "tInclude",
  "tConstant", "tList", "tListAlt", "tLinSpace", "tLogSpace",
  "tListFromFile", "tDefineConstant", "tPi", "t0D", "t1D", "t2D", "t3D",
  "tExp", "tLog", "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos",
  "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor",
  "tCeil", "tFmod", "tModulo", "tHypot", "tSolidAngle", "tTrace", "tOrder",
  "tCrossProduct", "tDofValue", "tMHTransform", "tMHJacNL", "tGroup",
  "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", "tDefineFunction",
  "tConstraint", "tRegion", "tSubRegion", "tRegionRef", "tSubRegionRef",
  "tFilter", "tCoefficient", "tValue", "tTimeFunction", "tBranch", "tNode",
  "tLoop", "tNameOfResolution", "tJacobian", "tCase", "tIntegration",
  "tFMMIntegration", "tMatrix", "tType", "tSubType", "tCriterion",
  "tGeoElement", "tNumberOfPoints", "tMaxNumberOfPoints",
  "tNumberOfDivisions", "tMaxNumberOfDivisions", "tStoppingCriterion",
  "tFunctionSpace", "tName", "tBasisFunction", "tNameOfCoef", "tFunction",
  "tdFunction", "tSubFunction", "tSubdFunction", "tSupport", "tEntity",
  "tSubSpace", "tNameOfBasisFunction", "tGlobalQuantity", "tEntityType",
  "tEntitySubType", "tNameOfConstraint", "tFormulation", "tQuantity",
  "tNameOfSpace", "tIndexOfSystem", "tSymmetry", "tEquation", "tGalerkin",
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDiscreteGeometry", "tDt",
  "tDtDof", "tDtDt", "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL",
  "tAtAnteriorTimeStep", "tIn", "tFull_Matrix", "tResolution",
  "tDefineSystem", "tNameOfFormulation", "tNameOfMesh", "tFrequency",
  "tSolver", "tOriginSystem", "tDestinationSystem", "tOperation",
  "tOperationEnd", "tSetTime", "tDTime", "tSetFrequency",
  "tFourierTransform", "tFourierTransformJ", "tLanczos", "tEigenSolve",
  "tEigenSolveJac", "tPerturbation", "tUpdate", "tUpdateConstraint",
  "tBreak", "tEvaluate", "tTimeLoopTheta", "tTime0", "tTimeMax", "tTheta",
  "tTimeLoopNewmark", "tBeta", "tGamma", "tIterativeLoop",
  "tNbrMaxIteration", "tRelaxationFactor", "tIterativeTimeReduction",
  "tDivisionCoefficient", "tChangeOfState", "tChangeOfCoordinates",
  "tChangeOfCoordinates2", "tSystemCommand", "tGenerateFMMGroups",
  "tGenerateOnly", "tGenerateOnlyJac", "tSolveJac_AdaptRelax",
  "tSaveSolutionExtendedMH", "tSaveSolutionMHtoTime", "tInit_MovingBand2D",
  "tMesh_MovingBand2D", "tGenerate_MH_Moving",
  "tGenerate_MH_Moving_Separate", "tAdd_MH_Moving", "tGenerateGroup",
  "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh", "tDummyFrequency",
  "tPostProcessing", "tNameOfSystem", "tPostOperation",
  "tNameOfPostProcessing", "tUsingPost", "tAppend", "tPlot", "tPrint",
  "tPrintGroup", "tEcho", "tWrite", "tAdapt", "tOnGlobal", "tOnRegion",
  "tOnElementsOf", "tOnGrid", "tOnSection", "tOnPoint", "tOnLine",
  "tOnPlane", "tOnBox", "tWithArgument", "tFile", "tDepth", "tDimension",
  "tComma", "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader",
  "tFooter", "tSkin", "tSmoothing", "tTarget", "tSort", "tIso",
  "tNoNewLine", "tDecomposeInSimplex", "tChangeOfValues", "tTimeLegend",
  "tFrequencyLegend", "tEigenvalueLegend", "tEvaluationPoints", "tStore",
  "tLastTimeStepOnly", "tStr", "tDate", "tDEF", "'?'", "tOR", "tAND",
  "tAPPROXEQUAL", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATERGREATER",
  "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'",
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'",
  "'~'", "$accept", "Stats", "@1", "ProblemDefinitions", "@2",
  "ProblemDefinition", "Interactive", "Groups", "Group",
  "MovingBand2DGroup", "@3", "@4", "ReducedGroupRHS", "@5", "GroupRHS",
  "GroupRHS_MultipleIndex", "FunctionForGroup", "ListOfRegionOrAll",
  "SuppListOfRegion", "SuppListTypeForGroup", "ListOfRegion",
  "RecursiveListOfRegion", "IRegion", "DefineGroups", "Comma",
  "DefineDimension", "MultipleIndex", "Index", "Functions", "Function",
  "DefineFunctions", "Expression", "@6", "ListOfExpression",
  "RecursiveListOfExpression", "WholeQuantityExpression", "@7",
  "WholeQuantity", "@8", "@9", "WholeQuantity_Single", "@10", "@11", "@12",
  "@13", "ArgumentsForFunction", "RecursiveListOfQuantity",
  "ParametersForFunction", "JacobianMethods", "JacobianMethod",
  "JacobianMethodTerm", "JacobianCases", "JacobianCase",
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod",
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase",
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase",
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint",
  "ConstraintTerm", "ConstraintCases", "ConstraintCase",
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace",
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction",
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@14", "@15",
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction",
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef",
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", "GlobalQuantity",
  "GlobalQuantityTerm", "ConstraintInFSs", "ConstraintInFS",
  "ConstraintInFSTerm", "Formulations", "BracedFormulation", "Formulation",
  "FormulationTerm", "DefineQuantities", "DefineQuantity",
  "DefineQuantityTerm", "@16", "@17", "IndexInFunctionSpace", "Equations",
  "EquationTerm", "GlobalEquation", "GlobalEquationTerm",
  "GlobalEquationTermTerm", "GlobalEquationTermTermTerm", "LocalTerm",
  "LocalTermTerm", "@18", "@19", "GlobalTerm", "GlobalTermTerm", "@20",
  "@21", "TermOperator", "Quantity_Def", "Resolutions", "BracedResolution",
  "Resolution", "ResolutionTerm", "@22", "DefineSystems", "DefineSystem",
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation",
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm",
  "@23", "@24", "PrintOperation", "PrintOperationOptions",
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm",
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop",
  "IterativeLoopTerm", "IterativeTimeReduction",
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState",
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing",
  "PostProcessing", "PostProcessingTerm", "PostQuantities", "PostQuantity",
  "PostQuantityTerm", "SubPostQuantities", "SubPostQuantity",
  "SubPostQuantityTerm", "@25", "PostOperations", "BracedPostOperation",
  "PostOperation", "PostOperationTerm", "SeparatePostOperation", "@26",
  "PostSubOperations", "@27", "PostSubOperation", "@28",
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport",
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", "Loop",
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", "OneFExpr",
  "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", "StringIndex",
  "String__Index", "CharExpr", "StrCat", "StrCmp", "NbrRegions", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,    63,   493,
     494,   495,   496,   497,    60,    62,   498,   499,   500,   501,
      43,    45,    42,    47,    37,   502,    33,   503,    94,    40,
      41,    91,    93,    46,    35,    36,   504,   123,   125,    44,
      64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   272,   274,   273,   275,   276,   275,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   279,   279,   280,   280,   280,   280,   280,   280,   280,
     282,   283,   281,   285,   284,   284,   286,   286,   287,   288,
     288,   289,   289,   290,   290,   290,   291,   292,   292,   293,
     293,   293,   294,   294,   294,   294,   294,   294,   294,   294,
     295,   295,   295,   295,   295,   296,   296,   297,   298,   298,
     299,   300,   300,   301,   301,   301,   301,   302,   302,   302,
     303,   303,   304,   303,   303,   305,   305,   306,   306,   308,
     307,   309,   310,   311,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   312,   312,   312,   312,   312,
     312,   313,   312,   314,   312,   315,   312,   312,   312,   312,
     316,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   317,   317,   317,   318,   318,   319,   319,   319,
     320,   320,   321,   321,   322,   322,   323,   323,   324,   324,
     325,   325,   325,   326,   326,   327,   327,   328,   328,   328,
     329,   329,   330,   330,   331,   331,   331,   332,   332,   333,
     333,   334,   334,   334,   334,   334,   334,   335,   335,   336,
     336,   337,   337,   338,   338,   338,   338,   338,   339,   339,
     339,   340,   340,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   342,   342,
     343,   343,   344,   344,   344,   345,   345,   345,   345,   345,
     345,   345,   346,   346,   346,   347,   347,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   349,   350,   351,   349,
     352,   352,   353,   353,   354,   354,   354,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   359,   360,   360,
     361,   361,   361,   362,   362,   362,   363,   363,   364,   364,
     364,   364,   365,   365,   366,   366,   367,   367,   368,   368,
     368,   368,   368,   369,   369,   369,   370,   370,   371,   371,
     371,   371,   371,   372,   371,   371,   373,   371,   371,   371,
     371,   371,   371,   374,   374,   375,   375,   375,   376,   376,
     376,   376,   377,   377,   378,   378,   378,   379,   379,   380,
     380,   380,   380,   381,   381,   383,   384,   382,   382,   382,
     382,   382,   382,   382,   385,   385,   386,   387,   388,   386,
     389,   389,   389,   389,   389,   389,   389,   389,   390,   390,
     391,   391,   392,   392,   393,   393,   394,   394,   394,   395,
     394,   394,   396,   396,   396,   397,   397,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   399,   399,   400,   400,
     401,   401,   402,   402,   403,   403,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   405,   404,   406,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     407,   407,   408,   408,   409,   409,   409,   410,   410,   411,
     411,   411,   411,   411,   412,   412,   413,   413,   413,   413,
     413,   413,   414,   414,   415,   415,   415,   415,   415,   416,
     416,   417,   417,   417,   417,   417,   417,   417,   417,   418,
     418,   419,   419,   420,   420,   420,   420,   420,   420,   421,
     421,   422,   422,   423,   423,   424,   424,   424,   424,   424,
     425,   425,   425,   426,   426,   427,   427,   428,   428,   428,
     428,   429,   429,   431,   430,   430,   430,   430,   430,   432,
     432,   433,   433,   434,   434,   435,   435,   435,   435,   435,
     437,   436,   438,   439,   438,   440,   440,   440,   440,   440,
     441,   440,   440,   442,   442,   443,   443,   443,   443,   444,
     444,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   446,   446,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   448,   448,
     449,   449,   449,   449,   449,   449,   449,   449,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   451,   451,   451,   451,   451,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   454,
     454,   454,   454,   454,   454,   454,   454,   455,   455,   455,
     455,   456,   456,   456,   456,   457,   457,   457,   457,   457,
     457,   457,   457,   458,   458,   459,   459,   460,   460,   460,
     460,   460,   460,   461,   462,   463
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     0,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     1,     2,
       1,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     2,     4,     5,     5,     5,     1,     5,     1,
       0,     0,    18,     0,     6,     2,     1,     1,     2,     1,
       1,     1,     1,     0,     3,     3,     1,     1,     3,     0,
       3,     4,     1,     3,     3,     3,     5,     5,     7,     1,
       0,     3,     6,     6,     9,     0,     1,     4,     0,     2,
       3,     0,     2,     5,     6,     7,     1,     0,     3,     6,
       4,     4,     0,     2,     3,     0,     3,     1,     3,     0,
       2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
       2,     0,     5,     0,     7,     0,    11,     9,     4,     4,
       0,     7,     6,     2,     2,     2,     2,     3,     2,     3,
       1,     1,     3,     2,     3,     1,     3,     0,     3,     6,
       0,     4,     0,     2,     3,     4,     0,     4,     0,     2,
       3,     3,     4,     0,     4,     0,     2,     3,     3,     4,
       0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
       2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
       1,     0,     2,     3,     4,     3,     4,     5,     0,     4,
       2,     0,     2,     3,     3,     3,     3,     3,     3,     7,
       3,     3,     3,     3,     3,     7,     7,     7,     0,     2,
       3,     1,     0,     2,     2,     3,     4,     3,     4,     4,
       4,     4,     0,     4,     2,     0,     2,     3,     3,     4,
       4,     7,     3,     3,     3,     3,     0,     0,     0,    18,
       0,     4,     0,     2,     3,     3,     3,     1,     3,     0,
       3,     1,     3,     0,     3,     0,     4,     2,     0,     2,
       3,     3,     3,     0,     4,     2,     0,     2,     3,     3,
       3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
       3,     4,     4,     0,     4,     2,     0,     2,     3,     3,
       3,     3,     3,     0,     5,     3,     0,     5,     3,     3,
       3,     3,     3,     0,     3,     0,     2,     2,     4,     4,
       4,     4,     0,     2,     3,     3,     3,     0,     2,     3,
       3,     3,     3,     0,     2,     0,     0,     9,     3,     3,
       3,     2,     3,     5,     0,     2,     3,     0,     0,     9,
       0,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     2,     3,     1,     0,     2,     3,     4,     4,     0,
       5,     1,     0,     4,     2,     0,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     3,     0,     3,
       1,     3,     0,     3,     0,     2,     3,     3,     4,     4,
       4,     4,     5,     5,     2,     7,    11,     7,    13,    11,
       9,     7,     7,     7,     9,     9,     9,    11,    11,    11,
       5,    17,    13,    15,    11,    13,     0,     7,     0,     7,
       7,    11,     5,     5,     9,     9,     9,     5,     5,    11,
       9,    14,    14,     7,    12,    10,     7,     7,     7,     1,
       1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
       3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
       2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
       4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     4,     3,     3,     4,
       0,     4,     2,     0,     2,     3,     4,     0,     5,     5,
       2,     0,     2,     0,     6,     3,     3,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     3,     3,     3,     4,
       0,     8,     0,     0,     3,     7,     7,     8,    11,     6,
       0,    10,     1,     3,     6,     1,     1,     1,     1,     0,
       3,     1,     2,     2,    12,     2,    15,     4,    12,    17,
      22,    12,     0,     2,     3,     4,     4,     3,     2,     2,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     5,     2,     2,     3,     9,     3,     2,
       9,     2,     9,     2,     9,     5,     3,     2,     0,     2,
       6,     8,     8,    10,     1,     4,     1,     1,     5,     4,
       4,     7,     4,     7,     5,     3,     3,     7,     5,     8,
       2,     0,     3,     6,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
       4,     4,     6,     6,     6,     5,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       3,     1,     1,     3,     3,     3,     5,     3,     4,     4,
       6,     8,     8,     5,     5,     1,     1,     1,     1,     1,
       4,     6,     1,     6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   745,     0,     0,     0,
       0,   634,     0,   636,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   637,   746,     0,     0,     0,     0,     0,
       0,   650,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   747,     0,     0,   752,   748,
      19,   749,   651,    41,   207,   170,   183,   238,    91,   302,
     380,   519,   549,     0,     0,   727,     0,     0,   646,   645,
       0,     0,   720,   719,     0,     0,   721,   722,   723,   724,
     725,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,   726,   716,   717,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   745,     0,     0,     0,     0,     0,     0,     0,
       0,   728,     0,   729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   679,   680,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   718,   635,     0,     0,     0,    86,     0,   745,     0,
       7,    42,    47,    49,     0,   211,     9,   208,   210,   172,
      10,   185,    11,   242,    12,   239,   241,     0,     8,    92,
      96,     0,   306,    13,   303,   305,   384,    14,   381,   383,
     523,    15,   520,   522,   553,    16,   550,   552,   560,     0,
       0,   640,     0,     0,     0,     0,     0,     0,   731,     0,
     732,     0,   639,   642,   743,   644,     0,   648,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   678,     0,     0,   694,   693,   692,   691,   687,
     688,   690,   689,   682,   681,   683,   684,   685,   686,     0,
     750,     0,   638,   652,     0,     0,     0,    80,   727,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   744,   737,     0,     0,     0,     0,     0,     0,
       0,   730,     0,   735,     0,     0,     0,     0,   755,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,     0,
     706,   707,   708,   709,   710,   711,     0,     0,     0,     0,
     630,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   745,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   209,   212,     0,     0,   171,   173,     0,   102,     0,
     184,   186,     0,     0,     0,     0,     0,     0,   240,   243,
     244,    85,   745,     0,    56,     0,    57,     0,     0,     0,
       0,   304,   307,     0,     0,   389,   382,   385,   391,     0,
       0,     0,     0,   521,   524,     0,     0,     0,     0,     0,
     551,   554,   562,   738,   739,     0,     0,     0,     0,     0,
     733,   734,     0,   647,     0,     0,     0,     0,     0,     0,
       0,     0,   715,   753,   751,   655,   654,     0,     0,    90,
      60,     0,     0,     0,     0,    72,     0,    69,     0,    55,
      67,    79,    43,     0,     0,     0,     0,   218,     0,   745,
       0,   176,     0,   190,     0,     0,     0,     0,   109,     0,
     293,     0,   745,     0,   252,   270,   285,     0,     0,   102,
       0,     0,   745,     0,   313,   335,   745,     0,   392,     0,
     745,     0,   530,     0,     0,     0,   562,     0,     0,     0,
     563,     0,     0,     0,   643,   641,   736,   649,     0,   632,
     754,   705,   712,   713,   714,   631,   653,    87,    45,    44,
      46,    81,     0,     0,    85,     0,    62,    53,    61,    48,
       0,   218,     0,   215,     0,     0,   213,     0,   174,     0,
       0,     0,     0,   188,   103,     0,   187,     0,   247,     0,
     245,     0,     0,     0,    93,    98,     0,   102,   310,     0,
     308,     0,     0,     0,   386,     0,   414,     0,   525,     0,
     527,   528,   555,   563,   556,   558,   557,   561,     0,   740,
       0,     0,     0,     0,     0,    75,    73,    68,     0,    74,
      85,    50,     0,   221,   216,   220,   214,   178,   175,   192,
     189,     0,     0,   104,   745,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,     0,   150,     0,     0,     0,
       0,   141,   143,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   139,     0,   136,   726,   160,   161,   296,
     251,   295,   246,   255,   248,   254,   272,   249,   288,   250,
     287,     0,    94,     0,   309,   316,   311,   315,     0,     0,
       0,     0,   312,   336,   337,   387,   395,   388,   394,     0,
     526,   533,   529,   532,   559,     0,     0,     0,     0,   564,
     572,     0,     0,   633,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   217,     0,     0,     0,   100,   101,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     132,   134,     0,   158,   156,   153,   155,   154,   745,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   167,     0,     0,     0,     0,     0,    95,     0,   353,
     353,   364,   342,     0,   745,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   448,   390,   415,   469,     0,     0,     0,     0,     0,
     741,   742,    82,    83,    77,    76,    71,    54,    66,     0,
       0,     0,     0,     0,     0,     0,   102,   102,   102,   102,
       0,     0,     0,   102,   219,   222,     0,     0,   177,   179,
       0,     0,     0,   191,   193,     0,   109,     0,     0,     0,
       0,   109,   109,     0,   135,     0,   379,     0,   131,   130,
     129,   128,   127,   123,   124,   126,   125,   119,   120,   115,
     118,   121,   116,   122,   157,   159,   163,     0,   165,     0,
       0,   137,     0,     0,     0,     0,   294,   297,     0,     0,
       0,     0,   105,   105,     0,     0,   253,   256,     0,     0,
       0,   271,   273,     0,     0,     0,   286,   289,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   727,   326,
     314,   317,   370,   370,   370,     0,     0,     0,     0,     0,
     727,     0,     0,     0,   393,   396,   405,     0,     0,   102,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   424,   102,     0,   477,     0,   484,     0,   492,   499,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   531,   534,     0,   579,     0,     0,   570,   592,
       0,     0,    65,    64,     0,     0,     0,     0,     0,   102,
       0,   102,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,   167,   197,     0,     0,   148,     0,   149,     0,
     145,     0,     0,     0,   109,   378,     0,   162,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,     0,
     102,     0,     0,     0,     0,     0,   281,   283,     0,   277,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   323,     0,     0,     0,     0,   109,     0,     0,
       0,     0,   371,   372,   373,   374,   375,   376,   377,     0,
       0,   338,   354,     0,   339,     0,   340,   365,     0,     0,
       0,   347,   341,   343,     0,     0,   408,     0,   406,     0,
       0,     0,   412,     0,   410,     0,     0,   416,     0,     0,
     417,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   105,   537,     0,
     581,     0,     0,     0,     0,     0,     0,     0,     0,   592,
       0,     0,   102,   592,     0,     0,     0,    78,    51,   224,
     225,   230,   231,     0,   234,     0,   233,   227,   226,    85,
     228,   223,     0,   232,   181,   180,     0,     0,   194,   195,
       0,     0,   109,     0,   142,     0,     0,   113,   166,     0,
     168,   298,   299,   300,   301,   257,   258,     0,     0,     0,
      85,   107,     0,   262,   263,   264,   265,   274,    85,   276,
      85,   275,   291,   290,   292,   331,   329,   330,   321,   319,
     320,   318,   333,   325,   332,   328,   322,     0,     0,     0,
       0,     0,     0,   361,   355,     0,   367,     0,     0,     0,
     398,   397,    85,   399,   400,   403,   404,    85,   401,   402,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,   102,     0,     0,   102,   418,
     478,     0,     0,   102,     0,     0,     0,     0,   419,   485,
       0,     0,     0,     0,     0,   102,   420,   493,     0,     0,
       0,     0,     0,     0,     0,     0,   421,   500,   102,     0,
     102,   727,   727,   727,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,   472,   471,   472,
       0,   535,   582,   583,   102,   585,     0,     0,     0,     0,
       0,     0,     0,   577,   578,   575,   576,   573,     0,     0,
     592,     0,     0,     0,     0,   593,    84,     0,   102,   102,
       0,   102,   182,   199,   196,     0,   117,     0,     0,     0,
     152,     0,     0,   259,     0,   260,     0,   106,   102,   282,
       0,   278,     0,     0,     0,     0,   359,   360,   362,     0,
     358,   109,   366,   109,   344,   345,     0,     0,     0,     0,
     346,   348,   407,     0,   411,     0,   422,   414,   423,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   440,     0,
     414,     0,     0,     0,     0,     0,   414,     0,     0,     0,
       0,     0,     0,     0,     0,   414,     0,     0,     0,     0,
       0,   414,   414,     0,     0,   509,     0,   453,     0,     0,
       0,     0,     0,     0,   457,   458,     0,     0,     0,     0,
       0,     0,     0,   452,     0,     0,   745,     0,   536,   540,
       0,     0,     0,     0,     0,     0,     0,     0,   580,   579,
       0,     0,     0,     0,   569,   727,   727,     0,     0,     0,
       0,     0,   605,   727,     0,   628,   628,   628,   598,   599,
       0,     0,     0,   614,   615,   105,   619,   621,   623,     0,
       0,   627,     0,     0,     0,     0,     0,     0,   151,     0,
       0,   144,   114,     0,     0,     0,   108,   284,   280,     0,
     324,   327,     0,   356,   368,     0,     0,     0,     0,   409,
     413,     0,     0,   727,     0,   727,     0,     0,     0,     0,
       0,   102,     0,   481,   479,   480,   482,   102,     0,   488,
     486,   487,   489,   490,   102,   497,   495,     0,   494,   496,
     504,   503,   505,     0,     0,   501,   502,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   727,   473,     0,   541,   541,
       0,   102,     0,   587,     0,     0,     0,   565,     0,     0,
       0,   566,   592,   611,   616,   102,   608,     0,     0,   594,
     597,   606,   607,   600,   601,   604,   602,   603,   610,   609,
       0,   612,   618,     0,     0,     0,     0,   626,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
     200,     0,     0,   169,     0,     0,   334,   363,     0,     0,
     349,   350,   351,   352,   425,   427,     0,     0,     0,     0,
       0,     0,   433,     0,     0,   483,     0,   491,     0,   498,
     507,   508,   511,   506,   450,     0,     0,   431,   432,     0,
       0,     0,     0,     0,   463,   467,   468,     0,   466,     0,
     447,     0,   727,   476,   449,   370,   370,     0,     0,     0,
       0,     0,     0,   574,   592,   567,     0,     0,   595,   596,
     629,     0,     0,     0,     0,     0,     0,   237,   236,   229,
     235,     0,     0,     0,     0,     0,     0,     0,   147,     0,
     261,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,   102,     0,   102,     0,
       0,     0,     0,     0,     0,   102,     0,   474,   475,     0,
       0,     0,     0,   539,     0,   542,   538,     0,   102,     0,
       0,     0,     0,     0,     0,   102,   613,     0,     0,     0,
     625,     0,   201,   202,   203,   204,   205,   206,     0,     0,
       0,     0,   414,   435,   436,     0,     0,     0,     0,   434,
       0,     0,   414,     0,     0,     0,     0,   102,     0,     0,
     510,   512,     0,   430,     0,   454,   455,   456,     0,     0,
     460,     0,     0,     0,     0,     0,     0,     0,   543,     0,
       0,     0,     0,     0,     0,     0,   571,     0,     0,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   465,     0,   547,
     548,   545,   546,   109,     0,     0,     0,     0,     0,     0,
     568,   102,     0,     0,     0,     0,   267,   357,   369,   426,
     437,   438,   439,     0,   414,     0,   444,   414,   518,   513,
     516,   517,   514,   515,   451,   429,     0,   414,   414,   459,
       0,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,   617,
     620,   622,   624,     0,     0,   442,   414,   445,   428,     0,
       0,   544,     0,   727,     0,     0,     0,     0,     0,    88,
       0,     0,   461,   462,   591,     0,   584,   588,     0,     0,
     268,     0,    58,     0,   443,   727,     0,     0,     0,    89,
       0,     0,     0,     0,     0,   441,   586,     0,     0,    88,
       0,     0,     0,   589,     0,     0,     0,   269,     0,     0,
       0,   590
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   150,   231,   232,
     752,  1407,   434,   640,   435,  2018,   405,   577,   750,   870,
     499,   574,   500,   400,   227,   335,  2032,   336,   155,   249,
     431,   517,   518,  1376,  1262,   594,   595,   691,   907,  1421,
     692,   766,   767,  1242,   761,   800,   929,   931,   152,   342,
     416,   587,   755,   889,   153,   343,   421,   589,   756,   894,
    1237,  1567,  1700,   151,   237,   341,   412,   582,   754,   885,
     154,   245,   344,   429,   601,   803,   947,  1259,  1983,  2038,
     602,   804,   952,  1101,  1270,  1098,  1268,   603,   805,   957,
     597,   802,   937,   156,   254,   347,   442,   611,   808,   971,
    1282,  1117,  1434,   612,   723,   975,  1143,  1299,  1451,   972,
    1132,  1441,  1708,   974,  1137,  1443,  1709,  1133,   693,   157,
     258,   348,   447,   539,   615,   813,   985,  1147,  1302,  1153,
    1307,   729,   853,  1028,  1029,  1377,  1514,  1646,  1172,  1330,
    1174,  1339,  1176,  1347,  1177,  1357,  1627,  1805,  1871,   158,
     262,   349,   454,   619,   855,  1033,  1380,  1755,  1825,  1933,
     159,   266,   350,   461,    31,   351,   550,   628,   739,  1214,
    1034,  1398,  1211,  1209,  1215,  1405,  1675,   854,    33,   149,
     694,   278,   125,   172,   279,   280,    34,   126,    70,    71,
     127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1404
static const yytype_int16 yypact[] =
{
   -1404,    78, -1404, -1404,    98,  4981,  -156,    46,  -128,   134,
      58, -1404,   -76, -1404,   536,   178,  3169,   215,   -31,   -20,
      -9,    19,    27,    35,    55,    91,   103,   106,    17, -1404,
   -1404, -1404, -1404, -1404,    -1,   202,   132,   490,   498,   521,
     526, -1404,   429,  4635,  4635,   569, -1404,   574,   625,   633,
     638,   640, -1404,   649, -1404,   654,   656,   663,   667,   681,
     686,   691,   701,   706,   708, -1404,   312,   352, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404,   492,   416,  1756,  4635,   -33, -1404, -1404,
     457,   455, -1404, -1404,   467,   471, -1404, -1404, -1404, -1404,
   -1404,   473,   479,   483,   502,   531,   540,   544,   551,   575,
     583,   596,   602,   605,   619,   629,   647,   650,   659,   687,
     694,  4635,  4635,  4635,  4493, -1404, -1404, -1404, -1404,  4403,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404,   215,   215,  -102,
     233,   316,  -212,   -54,   374,   655,   391,   409,   679,   689,
     526,  4635,    86,   741,   709,   714,   720,   735,   736,   737,
    4525,  4548,   746, -1404,   815,  5626,   820,  4525,    70,  4635,
     215,   526,  4635,  4635,  4635,  4635,  4635,  4635,  4635,  4635,
    4635,  4635,  4635,  4635,  4635,  4635,  4635,  4635,  4635,  4635,
    4635,  4635,   219,   219,  6139,  4635,  4635,  4635,  4635,  4635,
    4635,  4635,  4635,  4635,  4635,  4635,  4635,  4635,  4635,  4635,
    4635, -1404, -1404,   573,   -32,   881, -1404,   526,   237,   738,
   -1404, -1404, -1404, -1404,  -143, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404,   739, -1404, -1404,
   -1404,  -127, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,  5653,
    1173, -1404,   889,   937,  4635,  4635,   215,   215,  4548,    51,
   -1404,  4635, -1404, -1404, -1404, -1404,   141, -1404,  4635,  4602,
     653,   688,  6162,  6189,  6216,  6243,  6270,  6297,  6324,  6351,
    6378,  6405,  2556,  6432,  6459,  6486,  6513,  6540,  6567,  4565,
    4619,  4805, -1404,  4456,  4657,  1935,  2347,  2643,  2643,   782,
     782,   782,   782,   -35,   -35,   219,   219,   219,   219,   215,
   -1404,  4525, -1404,  -191,  2649,   766,   767, -1404,  2167,   784,
    4635,    -6,    23,   298,    48, -1404,    87,   341,  1105,   487,
     451,   756, -1404, -1404,   189,   762,   758,  4848,  4880,   763,
     769, -1404,  4525,  4685,  1021,  6594,  4635,   215, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,  4635,
   -1404, -1404, -1404, -1404, -1404, -1404,  4635,  4635,  4635,  4635,
   -1404,  4635,   775,   168,  4580,  4635,  4635,  5680,    25,    25,
     -85,    83, -1404,    33,  1031,   780,    25,  6621,    21,  1037,
    1038, -1404, -1404,   777,  1040, -1404, -1404,   798,    88,  1062,
   -1404, -1404,   801,  1065,  1066,   805,   806,   816, -1404, -1404,
   -1404,   -14,  -165,   841, -1404,   823, -1404,  1081,  1082,   821,
     822, -1404, -1404,  1086,   826, -1404, -1404, -1404, -1404,  1089,
     828,   526,   526, -1404, -1404,   526,   830,   526,   215,  1093,
   -1404, -1404, -1404, -1404, -1404,  1095,  4635,  4635,  1096,  1097,
    4548, -1404,  4635, -1404,  1100,   917,   840,  6648,  6675,  6702,
    6729,  6756,  7207, -1404, -1404, -1404,  7207,  5707,  5734, -1404,
   -1404,  1101,  1102,  1104,   526,  1106,  4635, -1404,  4525, -1404,
   -1404, -1404, -1404,    28,  1108,   876,   852, -1404,  1113,   273,
    1119, -1404,  1120, -1404,   868,   870,   882,  1126, -1404,  1128,
   -1404,  1129,   273,  1131, -1404, -1404, -1404,  1132,  1135,    88,
     904,  1137,   273,  1138, -1404, -1404,   273,  1139, -1404,   875,
     273,  1140, -1404,  1141,  1143,  1144, -1404,  1146,  1151,  1157,
     905,   910,  4903,  4936, -1404, -1404,  7207, -1404,  4635, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404,  -110,  4635,  6779,   360,   366, -1404, -1404, -1404, -1404,
    1110, -1404,   734, -1404,   916,  1175, -1404,   385, -1404,   436,
    4635,  1178,   932, -1404, -1404,  2105, -1404,  1064, -1404,  1179,
   -1404,  1240,   459,  1250, -1404,   926,  1187,    88, -1404,  1188,
   -1404,  1273,   112,  1192, -1404,  1337, -1404,  1224, -1404,  1386,
   -1404, -1404, -1404,   964, -1404, -1404, -1404, -1404,  2730, -1404,
    4635,  4635,  5761,   966,  4635,  4714,  1226, -1404,    34, -1404,
     -10, -1404,  1553, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404,  6802,   974, -1404,   281, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404,   977, -1404,   978,   979,   981,
     982, -1404, -1404,  1241,  2105,  2105,  2105,  2105,  1244,    47,
    1249,  7282,  -103,   988,   988, -1404,   998, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404,  4635, -1404,  1257, -1404, -1404, -1404, -1404,  1002,  1004,
    1006,  1007, -1404, -1404, -1404, -1404, -1404, -1404, -1404,  2387,
   -1404, -1404, -1404, -1404, -1404,  1014,  1015,  1016,  1026, -1404,
   -1404,  6829,  6856, -1404,   997,  5788,  4635,  4635,    38, -1404,
    1030,    13,  1027, -1404,  2308,     0,    50, -1404, -1404, -1404,
    1028,  1033,  1028,  2105,  1291,  1292,  1039,  1041,  1053,  1043,
    1043,  1043,  7259, -1404, -1404, -1404, -1404, -1404,     8,  1035,
   -1404,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,
    2105,  2105,  2105,  2105,  2105,  2105,  2105,  1304,  4635,  2005,
   -1404,  1044,   538,   811,   333,    79,  5815, -1404,  3230, -1404,
   -1404, -1404, -1404,  1830,     3,   -97,    94,  1047,  1054,  1056,
    1060,  1061,  1067,  1073,  1077,  1083,  1336,  1090,   275,   324,
     338,  1080,  1091,  1098,  1099,  1109,  1122,  1125,  1133,  1149,
    1094,  1107,  1150,  1152,  1153,  1154,  1156,  1123,  1134,  1158,
   -1404, -1404, -1404, -1404, -1404,    -8,   526,   277,    66,  1350,
   -1404, -1404, -1404,  1121,  7207,  4731, -1404, -1404, -1404,   526,
      33,  1136,    66,    66,    66,    66,   250,   311,    88,    88,
    1145,   526,  1357,   343, -1404, -1404,    37,  1387, -1404, -1404,
    1155,  1388,  1391, -1404, -1404,  1161, -1404,  1163,  4520,  1159,
    1164, -1404, -1404,  1169, -1404,  1165, -1404,  2105,  4348,  7300,
     683,   683,   683,  1205,  1205,  1205,  1205,   561,   561,  1043,
    1043,  1043,  1043,  1043, -1404, -1404, -1404,  1172,  7282,     4,
    4470, -1404,  1400,    64,  1426,   526, -1404, -1404,  1430,  1431,
    1432,  1171,  1176,  1176,    66,    66, -1404, -1404,  1437,    29,
      39, -1404, -1404,  1440,   526,  1441, -1404, -1404, -1404,  1446,
    1447,  1457,   262,   526,   526,  4635,  1461,    66,  2410, -1404,
   -1404, -1404,  2148,  2545,   838,   397,  1462,   526,    40,   215,
    2410,   215,    42,   526, -1404, -1404, -1404,   526,  1459,    88,
      88,  1481,   526,   526,   526,   526,   526,   526,   526,   526,
     526, -1404,    88,  4635, -1404,  4635, -1404,  4635, -1404, -1404,
      66,   215,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,  1484,   526,  1229,  1248,
    1243,   526, -1404, -1404,  1496,  1253,  1246,  1496, -1404, -1404,
    1245,  4635, -1404, -1404,    33,  1509,  1513,  1514,  1520,    88,
    1522,    88,  1523,  1524,  1525,  1519,  1526,  1528,    88,  1529,
    1530,  1531,  1044, -1404,  1532,  1535, -1404,  1277, -1404,  2105,
   -1404,  1259,  1285,  1279, -1404, -1404,  1873, -1404, -1404,  2105,
    1289,   462,  1550,  1552,  1555,  1561,  1565,     2,  1309,  1574,
      88,  1573,  1575,  1576,  1577,  1580, -1404, -1404,  1581, -1404,
   -1404,  1582,  1583,  1584,  1585,  1587,  1589,  1591,  1592,  1593,
    1594,  1595, -1404,  1635,  1599,  1600,  1601, -1404,  1604,  1605,
    1606,  1320, -1404, -1404, -1404, -1404, -1404, -1404, -1404,    66,
    1607, -1404, -1404,  1352, -1404,    66, -1404, -1404,  1354,  1611,
    1612, -1404, -1404, -1404,  1614,  1615, -1404,  1616, -1404,  1618,
    1620,  1621, -1404,  1624, -1404,  1625,  1371, -1404,  1372,  1373,
   -1404,  1368,  1369,  1370,  1374,  1375,  1376,  1377,  1378,  1380,
    1379,  4959,   577,  4982,   661,  5005,   269,   363,  1381,  1389,
    1395,  1397,  1398,  1399,  1402,  1407,  1390,  1392,  1409,  1410,
    1415,  1420,  1421,  1422,  1438,  1393,    44,    44, -1404,  1633,
   -1404,    66,    66,    14,  1473,  1474,  1475,  1476,  1478, -1404,
      66,   240,    90, -1404,  1439,    76,  1401,  7207, -1404, -1404,
   -1404, -1404, -1404,  1444, -1404,  1445, -1404, -1404, -1404,  1479,
   -1404, -1404,  1480, -1404, -1404, -1404,  1649,   489, -1404, -1404,
      66,  7234, -1404,  4635, -1404,  1654,  1485, -1404,  7282,    66,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404,  1743,  1636,  1747,
    1479, -1404,   493, -1404, -1404, -1404, -1404, -1404,   527, -1404,
     564, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404,  1494, -1404, -1404, -1404, -1404,  1495,  1749,  1757,
    1759,  1760,  1761, -1404, -1404,  1762, -1404,  1765,  1766,    -7,
   -1404, -1404,   566, -1404, -1404, -1404, -1404,   570, -1404, -1404,
    1767,  1500,  1768,    88,   526,   526,  4635,  4635,  4635,   526,
      88,    66,  1769,  4635,  1510,    88,  4635,  4635,    88, -1404,
   -1404,  4635,  1511,    88,  4635,  4635,  4635,  4635, -1404, -1404,
    4635,  4635,  4635,  1512,  4635,    88, -1404, -1404,  4635,  4635,
     526,  1521,  1547,  4635,  4635,  1548, -1404, -1404,    88,  1773,
      88,  2410,  2410,  2410,  4635,  2410,  1774,  1809,   526,   526,
    4635,   526,   526,    66,  1813,  1812, -1404, -1404, -1404, -1404,
    1307, -1404,  1613, -1404,    88, -1404,  1556,  4525,  1558,  1559,
    1560,   126,  1567, -1404, -1404, -1404, -1404, -1404,  1817,  1569,
   -1404,   131,  1698,  1825,  4806, -1404, -1404,  1564,    88,    88,
    1519,    88, -1404, -1404, -1404,  1572, -1404,  1590,  5028,  1597,
   -1404,  2105,  1598, -1404,  1831, -1404,  1833, -1404,    88, -1404,
    1844, -1404,  1846,   526,  1847,  1848, -1404, -1404, -1404,  1603,
   -1404, -1404, -1404, -1404, -1404, -1404,  1028,  1028,  1028,    66,
   -1404, -1404, -1404,   526, -1404,   526, -1404, -1404, -1404,  1608,
    1588,  1602,  5051,  5074,  5097,  1626,  1610,  1627, -1404,  5120,
   -1404,  1849,  1838,  2060,  1854,  5143, -1404,  1856,  2090,  2233,
    2516,  2539,  5166,  2700,  2864, -1404,  2891,  1859,  3261,  3320,
    1860, -1404, -1404,  3559,  3622, -1404,   162, -1404,  1628,  1638,
    1640,  1634,  5189,  1637, -1404, -1404,  1641,  1642,  6883,  1643,
    1645,  1644,   572, -1404,   186,   284,   354,  1586, -1404, -1404,
    1863,  1646,  4525,   579,  4525,  4525,  4525,  1862, -1404,  1253,
     215,   299,  1875,    66, -1404,  2410,  2410,  1623,  1899,   529,
    4635,  4635, -1404,  2410,  4635,  1904, -1404, -1404, -1404, -1404,
    4635,  1907,  2465, -1404, -1404,  1176,  1647,  1651,  1655,  1656,
    1918, -1404,  1660,  1663,  1664,  1659,  1666,   675, -1404,  1668,
    4635, -1404,  7282,  1667,  1925,  1669, -1404, -1404, -1404,  1672,
   -1404, -1404,  1929, -1404, -1404,  1932,  1933,  1936,  1937, -1404,
   -1404,  2842,  1938,  2410,  4635,  2410,  4635,  4635,   526,  1939,
     526,    88,  3035, -1404, -1404, -1404, -1404,    88,  3226, -1404,
   -1404, -1404, -1404, -1404,    88, -1404, -1404,  3280, -1404, -1404,
   -1404, -1404, -1404,  3470,  3524, -1404, -1404,   562,  1940,  4635,
      88,  1941,  1943,  4635,   215,   215,  4635,  4635,  1944,  1945,
    1947,   215,  1948,  1804,  1949,  1682, -1404,  1950, -1404, -1404,
    1691,    88,   581, -1404,   586,   591,   593, -1404,  1690,  1699,
    1953, -1404, -1404, -1404, -1404,    88, -1404,   215,   215, -1404,
    7207,  7207, -1404,  7207, -1404,  1956,  1956,  1956,  7207, -1404,
    4525,  7207, -1404,  4635,  4635,  4635,  4525, -1404,    33,  1957,
    1958,  1959,  1966,  1969,  4635,  4635,  4635,  4635,  4635, -1404,
   -1404,  1696,  5842, -1404,  1861,  1970, -1404, -1404,  1707,  1709,
   -1404, -1404, -1404, -1404,  1960, -1404,  1719,  6910,  1714,  5212,
    5235,  1717, -1404,  1725,  1720, -1404,  1721, -1404,   305, -1404,
   -1404, -1404, -1404, -1404, -1404,  5258,   320, -1404, -1404,  6937,
    1726,  1730,  5281,  5304, -1404, -1404, -1404,   604, -1404,   215,
   -1404,   215,  2410, -1404, -1404,  1251,  3224,  4635,  1724,  1727,
    1728,  1729,  1732, -1404, -1404, -1404,   331,  1731, -1404, -1404,
   -1404,   606,  5327,  5350,  5373,   610,  1733, -1404, -1404, -1404,
   -1404,  1994,  3862,  3920,  4141,  4168,  4195,  4635, -1404,  1998,
   -1404, -1404,  1028,  1737,  1999,  2004,  4635,  4635,  4635,  4635,
    2006,    88,  4635,  1738,  4635,   627,    88,  2007,    88,  2010,
    2011,  2014,  4635,  4635,  2015,    88,   615, -1404, -1404,  2019,
    2020,  2021,    66, -1404,  1770, -1404, -1404,  5396,    88,  4525,
    4525,  4525,  4525,   351,  2022,    88, -1404,  4635,  4635,  4635,
   -1404,  4635, -1404, -1404, -1404, -1404, -1404, -1404,  5869,  1763,
    1772,  1775, -1404, -1404, -1404,  6964,  6991,  7018,  5419, -1404,
    1808,  5442, -1404,  7045,  2023,  2030,  4635,    88,  2031,    66,
   -1404, -1404,  1810, -1404,   353, -1404, -1404, -1404,  7072,  7099,
   -1404,  1803,  2066,  4635,  2067,  2068,  2072,  2078, -1404,  4635,
    1826,   624,   628,   631,   635,  2086, -1404,  1758,  5465,  5488,
    5511,  7126, -1404,  2088,  2092,  2093,  3578,  2094,  2096,  2097,
    2410,  1839,  4635,  3768,  1840,  2098,  2122,  4218,  2125,  2126,
    2127,  2128,  2129,    88,  1900,  1923,  2184, -1404,  5896, -1404,
   -1404, -1404, -1404, -1404,  5923,  1961,  1962,  1906,  1964,  1971,
   -1404,    88,  4635,  4635,  4635,  2185, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404,  1972, -1404,  7153, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404,  1963, -1404, -1404, -1404,
    2219,  1965,  1975,  2410,  4525,  1976,  4525,  4525,  1977,  5950,
    5977,  6004, -1404,  2168,  4635,  3822,  1979,  3876,  2237,  4066,
    4120, -1404,  2240,  4635,  1981,   676,  4635,   692,   711, -1404,
   -1404, -1404, -1404,   526,  5534, -1404, -1404, -1404, -1404,  2241,
    2245, -1404,  6031,  2410,  1985,  6058,  1989,  1991,  2252,  1993,
    4635,  4174, -1404, -1404, -1404,  1996, -1404, -1404,  1995,  4525,
   -1404,  2003, -1404,  7180, -1404,  2410,  4635,   715,  2145, -1404,
    2256,  2016,  5557,  2017,  2278, -1404, -1404,  4635,  2025,  1993,
    6085,  4635,  2279, -1404,  5580,  2026,  4635, -1404,  5603,  4635,
    6112, -1404
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404,  -217, -1404,  -632, -1404,  1355, -1404, -1404,  1353,
    -499, -1404,  -553, -1404,  -383,  -508,   241, -1404, -1404, -1404,
   -1404,  -502, -1404,  -936, -1404,  -886, -1404,   267, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404,  1622, -1404,  1233, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404,  1715, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,  1487,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404,  -953,  -649, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1403, -1404, -1404, -1404,  1118,   922, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404, -1404,   657, -1404, -1404,
   -1404, -1404, -1404, -1404, -1404, -1404,  1771, -1404, -1404, -1404,
    1450, -1404,   790,  1283, -1184, -1404,  -561,    15, -1404, -1404,
   -1404,  1286,  -320,  -881,  -137,   -82, -1404,    -5,   -90,   -23,
    -584,  -269
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -677
static const yytype_int16 yytable[] =
{
      35,   585,    39,   173,   578,   759,  1091,  1092,     6,  1256,
    1067,   697,    69,     6,   599,  1072,  1073,   494,   868,   432,
      32,  1138,     6,    83,   609,  1391,   506,   606,   613,  1401,
     490,   495,   617,     6,  1096,    90,   495,   495,     6,     6,
     286,   495,   432,     6,  1099,     6,   394,     6,   528,     6,
     774,     6,   775,     6,  1591,   239,   240,   223,   224,     7,
       8,     9,   174,    42,    10,    11,    12,  1602,    13,   490,
    1030,   432,   886,  1608,  1446,  1447,   395,   287,     3,   408,
      18,   869,  1617,   409,   887,   749,   402,  1116,  1623,  1624,
     290,  1031,   432,   410,   338,   576,   -60,   402,    -3,  1150,
     697,   697,   697,   697,  1060,   713,    36,   339,   413,   402,
      85,   895,  1448,   897,   514,    36,   514,     6,   340,   422,
     514,   404,   414,     7,     8,     9,  1449,   633,    10,    11,
      12,    40,    13,   354,   346,   890,   402,   423,   402,   891,
     892,    41,    69,    69,    18,   234,    35,   424,   425,    35,
     251,    35,    35,    35,    35,   268,   426,   634,   427,   402,
     225,   797,    44,   798,   989,   233,   238,   226,   953,   246,
     250,   255,   259,   263,   267,    69,   291,   493,   954,   697,
     955,   491,   492,    44,   226,    52,   359,   360,  1246,   504,
     515,   638,   515,   776,   393,   866,   515,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   241,   242,   697,  1531,   217,   218,   219,
       6,    65,   333,   220,    66,    67,  1038,   176,   330,   221,
      72,  1287,   718,   719,   720,   721,   177,   331,   228,   392,
    1045,  1046,  1047,  1048,     7,     8,     9,    73,   527,    10,
      11,    12,   -63,    13,  1061,   226,   173,   751,    74,   226,
    1032,  1450,   411,   777,   987,    18,  1078,  1108,   888,   584,
      84,    69,    69,  1079,    36,   695,   514,   476,   403,    36,
     471,  1384,     6,  1036,    82,   748,    75,   496,   507,   403,
    1341,   415,   496,   496,    76,   497,  1097,   496,   498,   229,
     497,   403,    77,   498,   498,    37,  1100,  1146,   498,  1152,
      38,  1090,  1093,  1094,   991,   174,   428,    43,   893,   361,
     362,     6,    78,   697,    69,  1399,   698,     7,     8,     9,
     403,   288,    10,    11,    12,  1115,    13,   514,  1403,    35,
     516,   436,   516,    35,   -60,  1404,   516,   956,    18,   433,
     270,   403,   515,   270,    36,   990,  1417,    36,    79,   430,
    1342,   575,    69,   448,   695,   695,   695,   695,   548,   514,
      80,  1043,  1109,    81,  1050,  1052,  1053,  1054,  1178,     6,
     722,  1059,  1110,   417,  1348,     7,     8,     9,  1527,   418,
      10,    11,    12,  1532,    13,  1404,     6,   419,   501,    86,
    1404,   364,     7,     8,     9,   510,    18,    10,    11,    12,
     362,    13,  1343,   515,     6,   698,   698,   698,   698,   523,
       7,     8,     9,    18,  1628,    10,    11,    12,   484,    13,
     437,  1629,   948,   533,   949,  1344,  1345,   362,   537,    85,
     438,    18,   950,   695,   541,   515,   543,   544,  1644,  1906,
     545,    68,   547,    69,  1349,  1645,   439,   463,   362,  1913,
     440,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   220,  1766,   695,
    1499,  1500,  1501,   221,  1503,   697,  1139,  1158,  1159,   571,
    1393,  1394,  1395,  1396,   698,   697,    87,  1292,   501,  1350,
    1170,   230,   516,  1295,   334,    88,  1351,  1352,    36,  1397,
    1140,  1049,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698,   698,   698,    89,  1353,
     698,     6,  1354,  1355,     6,    65,  1003,  1346,    66,    67,
     584,    45,  1004,    46,    36,  1218,  1647,  1223,   690,  1225,
     455,  1985,    36,  1645,  1987,  1583,  1232,  1584,    47,    48,
      49,  1660,    91,   516,  1989,  1990,   420,  1803,  1404,  1382,
    1383,  1385,  1051,   147,  1804,    50,   130,    35,  1392,  1257,
    1833,   131,  1807,   235,   236,  1005,   449,   695,  1261,  1808,
     696,  1006,    35,  1834,   456,   516,    35,   645,    35,  1007,
    1404,   951,   450,  2021,  1058,  1008,    35,    35,  1415,   441,
      35,   148,   701,  1895,    35,  1922,   705,  1422,   710,  1682,
    1404,  1648,  1923,    35,   451,    36,   717,   724,   637,   226,
     728,  1356,   132,   501,   733,   362,   639,    35,   698,   932,
     133,   243,   244,   740,   457,   134,   458,   135,  1864,   933,
     934,   935,   647,   648,  1663,  1664,   136,   645,   252,   253,
       6,   137,  1672,   138,  1141,  1142,     7,     8,     9,   459,
     139,    10,    11,    12,   140,    13,   256,   257,   452,   696,
     696,   696,   696,   161,     6,   779,   160,    18,   141,  1467,
       7,     8,     9,   142,     6,    10,    11,    12,   143,    13,
       7,     8,     9,   649,   650,    10,    11,    12,   144,    13,
    1400,    18,  1716,   145,  1718,   146,  1865,   178,  1866,   460,
    1324,    18,   179,  1325,    35,   247,   706,   707,   180,  1867,
    1250,   362,   181,    51,   182,  1229,  1326,  1327,  1328,     6,
     183,  1511,  1868,   501,   184,     7,     8,     9,   271,   695,
      10,    11,    12,   282,    13,   453,  1413,  1414,   696,   695,
    1869,  1427,  1428,   185,  1753,    68,    18,  1693,  1694,  1695,
    1696,  1697,  1698,   905,  1667,  1668,   696,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,   186,  1081,   696,  1429,   226,  1585,  1586,  1587,
     698,   187,  1824,  1824,  1332,   188,   936,  1333,    35,   988,
     698,  1459,   189,   792,   793,   794,   795,  1588,  1466,   796,
    1334,  1335,   283,  1471,  1336,  1337,  1474,   285,   986,  1732,
    1733,  1477,  1431,   226,  1452,   226,   190,   697,  1454,   226,
    1642,  1643,   329,  1487,   191,  1329,  1410,  1653,   362,  1759,
     362,  1035,  1035,   436,  1760,   362,  1496,   192,  1498,  1761,
     362,  1762,   362,   193,  1042,   501,   194,   436,   436,   436,
     436,  1818,  1814,  1815,  1836,   362,  1056,  1426,  1840,   362,
     195,   436,  1521,  1882,  1883,  1430,   173,  1432,   332,  1149,
     196,  1151,  1936,   362,   355,  1870,  1937,   362,   173,  1938,
     362,  1662,   696,  1939,   362,  1850,  1563,  1564,   197,  1566,
     938,   198,   939,   940,   941,   942,   943,   944,   945,  1453,
     199,  1179,   367,   248,  1455,   558,  1576,   786,   787,  1338,
    1085,   788,   789,   790,   791,   792,   793,   794,   795,   436,
     436,   796,   356,  1699,  2014,   362,   260,   261,   200,  1103,
     368,   769,   770,   771,   772,   201,   264,   265,  1111,  1112,
    2016,   362,   436,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
     272,  1135,  1145,  1148,    69,   273,    69,  1154,  1155,  2017,
     362,   274,  1156,  2043,   362,  1676,  1677,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,   275,   276,   277,   337,
     345,   643,   644,   398,   399,   436,    69,  1180,  1181,  1182,
    1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,  1191,  1192,
    1193,   406,  1195,   462,   464,   468,  1199,   465,   473,  1953,
     898,   469,   215,   216,   217,   218,   219,   483,   502,   501,
     220,   503,   508,   509,   511,   512,   221,  1971,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   696,   513,   928,   519,   520,     6,
     521,   522,   524,   525,   696,     7,     8,     9,   529,   946,
      10,    11,    12,   526,    13,   530,   531,   532,   534,   535,
    1565,   536,  1994,   538,   540,   542,    18,   546,   549,  1724,
     551,   695,   560,   554,   555,  1726,  1136,   557,   568,   569,
       6,   570,  1728,   580,   572,   579,     7,     8,     9,   581,
     583,    10,    11,    12,   436,    13,   586,   588,  1736,   590,
     436,   591,  2025,   593,   592,   596,   598,    18,   600,   604,
     605,   607,   616,  1851,   608,   610,   614,   618,   620,  1758,
     621,   622,   698,   624,  2041,   206,   207,   208,   625,   209,
     210,   211,   212,  1767,   626,   213,   214,   215,   216,   217,
     218,   219,   629,   627,  1076,   220,    92,    93,   162,   641,
     396,   221,   646,   652,   653,   559,   702,    94,    95,  1776,
    1887,  1378,  1378,   711,   712,   714,   436,   436,   436,   725,
     164,   165,   166,   167,   443,   436,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   730,   734,   744,   747,   436,   758,  1920,   760,   762,
     763,   444,   764,   765,   436,     6,   768,   773,   445,   799,
    1523,     7,     8,     9,   778,     6,    10,    11,    12,  -676,
      13,     7,     8,     9,   807,   862,    10,    11,    12,   809,
      13,   810,    18,   811,   812,   856,   857,   858,     6,   173,
     173,   173,    18,   173,     7,     8,     9,   859,   871,    10,
      11,    12,   867,    13,   896,   690,   899,   900,   903,  1860,
     901,   796,   902,   906,  1872,    18,  1874,   924,   992,  1460,
    1461,   930,  1516,  1881,  1465,   993,   436,   994,     7,     8,
       9,   995,   996,    10,    11,    12,  1890,    13,   997,   124,
     129,   699,   700,  1897,   998,  1819,  1241,  1820,   999,    18,
    1821,  1903,     6,  1001,  1000,  1490,  1248,  1009,     7,     8,
       9,  1002,  1010,    10,    11,    12,  1039,    13,  1040,  1011,
    1012,  1018,  1057,  1506,  1507,  1918,  1509,  1510,   436,    18,
    1013,   171,   175,   446,  1019,    35,  1122,  1123,  1124,  1125,
    1126,  1127,  1128,  1014,  1822,  1652,  1015,  1654,  1655,  1656,
    1025,     6,  1062,  1064,  1016,  1519,  1065,     7,     8,     9,
    1044,  1026,    10,    11,    12,  1082,    13,   202,   203,   204,
    1017,  1020,  1055,  1021,  1022,  1023,   696,  1024,    18,  1027,
    1070,  1966,  1063,  1066,   121,  1068,  1071,  1517,  1579,   122,
    1074,   868,   123,  1075,  1077,  1086,  1087,  1088,  1089,  1978,
    1659,   353,  1095,  1090,   436,  1102,  1104,   269,  1589,  1669,
    1590,  1105,  1106,   173,   173,   790,   791,   792,   793,   794,
     795,   173,  1107,   796,  1114,   289,  1157,  1144,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,  1160,  1194,
    1196,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   703,   704,  1197,
    1198,   173,  1216,   173,  1210,  1212,  1219,   708,   709,  1823,
    1220,  1221,    92,    93,     6,    69,  1243,  1222,   436,  1224,
    1226,  1227,  1228,  1230,    69,  1231,  1233,  1234,  1235,  1238,
     715,   716,  1239,  1771,  1740,  1741,  1240,  1244,  1245,  1775,
    1249,  1747,    96,    97,    98,    99,   100,  1251,     6,  1252,
     357,   358,  1253,   173,     7,     8,     9,   363,  1254,    10,
      11,    12,  1255,    13,   365,  1518,  1258,  1768,  1769,  1260,
    1263,  1291,  1264,  1265,  1266,    18,    35,  1267,  1269,  1271,
    1272,  1273,  1274,  1721,  1275,  1723,  1276,    35,  1277,  1278,
    1279,  1280,  1281,    35,   726,   727,  1284,  1285,  1286,  1288,
    1289,  1290,    35,  1294,  1293,  1296,  1297,  1298,    35,    35,
     397,  1300,  1301,  1303,   171,  1304,   407,  1305,  1306,    69,
      69,  1308,  1309,  1310,  1311,  1312,    69,  1313,  1314,  1315,
    1381,  1322,  1283,  1316,  1317,  1318,  1319,  1320,   470,  1321,
    1358,  1359,   475,   731,   732,  1375,  1412,  1419,  1366,  1816,
    1367,  1817,    69,    69,  1360,   477,  1361,  1362,  1363,  1406,
     173,  1364,   478,   479,   480,   481,  1365,   482,  1368,  1369,
     486,   487,   488,   501,  1370,    92,    93,   162,  1572,  1371,
    1372,  1373,  1891,  1892,  1893,  1894,    94,    95,  1200,  1201,
    1202,  1203,  1204,  1205,  1206,  1207,  1208,  1374,  1402,   164,
     165,   166,   167,  1408,  1409,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
    1386,  1387,  1388,  1389,    69,  1390,    69,  1420,   226,  1411,
    1423,  1424,   552,   553,  1425,  1433,  1436,  1435,   556,    92,
      93,   162,   163,  1439,  1437,    66,  1438,  1457,  1440,  1442,
      94,    95,  1444,  1445,  1456,  1458,  1468,  1470,  1476,  1485,
    1497,  1504,   573,   164,   165,   166,   167,   168,  1491,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,  1492,  1495,  1505,   436,  1512,  1513,
     643,   753,  1529,  1522,  1520,  1524,  1525,  1526,   173,  1528,
    1530,  1533,  1534,  1562,  1568,     6,  1574,  1995,  1575,  1997,
    1998,     7,     8,     9,   632,  1604,    10,    11,    12,  1577,
      13,  1578,  1569,  1649,  1580,  1581,  1603,  1593,   635,  1571,
    1573,  1606,    18,  1609,   436,  1582,  1619,  1622,  1650,  1657,
    1592,  1594,  1599,   206,   207,   208,   651,   209,   210,   211,
     212,  1247,  1661,   213,   214,   215,   216,   217,   218,   219,
    1665,   173,  2037,   220,  1751,  1598,  1600,  1630,  1752,   221,
    1631,    35,  1632,  1633,  1666,  1639,  1635,  1640,    35,  1674,
    1636,  1637,  1679,  1641,  1683,  1651,   741,   742,  1684,   976,
     745,  1687,  1685,  1686,  1688,  1689,  1690,  1691,  1692,   977,
    1701,   173,  1704,   121,  1706,  1703,  1707,  1705,   122,  1710,
    1711,   123,  1749,  1712,  1713,  1715,  1722,  1734,  1737,   170,
    1738,  1744,  1745,   173,  1746,  1748,  1750,  1754,  1757,  1763,
    1765,  1764,  1770,  1787,  1777,  1778,  1779,   978,   979,   980,
     981,   982,   983,  1780,  1781,  1789,  1791,  1790,  1792,  1793,
      35,  1794,    35,  1796,    35,    35,  1799,  1800,  1810,  1801,
    1802,   169,  1811,  1828,  1829,  1830,  1831,   806,  2019,  1832,
    1835,  1842,  1841,  1849,  1852,  1862,  1853,   121,    92,    93,
     654,  1854,   122,  1859,  1873,   123,    35,  1875,  1876,    94,
      95,  1877,  1880,   170,  1884,  1885,  1886,  1941,  1915,  1896,
     584,  1888,   864,   865,  1904,  1916,  1919,  1905,    96,    97,
      98,    99,   100,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,  1605,   679,   680,
    1911,  1926,  1921,  1927,  1929,  1930,   206,   207,   208,  1931,
     209,   210,   211,   212,   925,  1932,   213,   214,   215,   216,
     217,   218,   219,  1940,  1935,  1946,   220,  1610,   984,  1947,
    1948,  1950,   221,  1951,  1952,  1958,  1954,  1957,    92,    93,
     654,   780,   781,   782,   783,   784,   785,   786,   787,    94,
      95,   788,   789,   790,   791,   792,   793,   794,   795,  1959,
     681,   796,  1961,  1962,  1963,  1964,  1965,   682,    96,    97,
      98,    99,   100,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,  1967,   679,   680,
      92,    93,   401,   163,  1975,   208,    66,   209,   210,   211,
     212,    94,    95,   213,   214,   215,   216,   217,   218,   219,
    1968,  1969,  1982,   220,   164,   165,   166,   167,   168,   221,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,  1988,  1991,  1992,  1973,  1974,
     681,  1976,  1118,  2003,  1119,  1120,  1121,   682,  1977,   402,
    1611,  1984,  1993,  1996,  2008,  1999,  2006,  2011,  2022,   683,
    2013,  1113,  2023,  2026,   171,   684,   685,  2028,  2029,  2030,
    2031,   686,  2036,  2045,   687,  2035,   171,   926,   927,   688,
     689,  2039,   690,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
    2044,  1129,  1130,  2049,  2046,  2048,  2055,  1084,  1083,  1171,
    2052,  1173,  2051,  1175,  2057,  1236,   642,   973,   206,   207,
     208,  1515,   209,   210,   211,   212,  1756,  1037,   213,   214,
     215,   216,   217,   218,   219,  1379,   801,   623,   220,  1658,
    1213,     0,     0,     0,   221,     0,     0,  1217,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,   683,
       0,     0,     0,     0,   221,   684,   685,     0,     0,     0,
       0,   686,     0,     0,   687,     0,     0,     0,     0,   688,
     689,     0,   690,     0,     0,     0,     0,     0,     0,     0,
     872,   873,   874,   875,   876,   877,   878,   879,   880,     0,
       0,   881,   814,     0,     0,     0,     0,   882,     7,     8,
       9,     0,   169,    10,    11,   815,     0,    13,     0,     0,
     883,     0,     0,    92,    93,   162,  1131,     0,   121,    18,
       0,     0,     0,   122,    94,    95,   123,     0,     0,     0,
       0,   403,     0,     0,   170,     0,     0,   164,   165,   166,
     167,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    92,    93,
       6,   206,   207,   208,     0,   209,   210,   211,   212,    94,
      95,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,  1612,     0,     0,     0,     0,     0,  1418,
       0,     0,   816,     0,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,  1613,     0,     0,   829,
       0,     0,   830,     0,     0,   831,     0,     0,   832,     0,
     833,   834,   835,   836,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   884,     0,     0,   849,
       0,     0,     0,     0,   850,     0,     0,   851,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,  1462,  1463,  1464,   220,     0,     0,     0,  1469,
       0,   221,  1472,  1473,     0,     0,     0,  1475,     0,     0,
    1478,  1479,  1480,  1481,     0,     0,  1482,  1483,  1484,  1118,
    1486,  1119,  1120,  1121,  1488,  1489,     0,     0,     0,  1493,
    1494,     0,     0,     0,     0,     0,     0,   171,   171,   171,
    1502,   171,    92,    93,     6,   852,  1508,     0,     0,     0,
       0,   121,     0,    94,    95,     0,   122,     0,     0,   123,
    1122,  1123,  1124,  1125,  1126,  1127,  1128,   170,  1129,  1130,
       0,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,  1615,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,   122,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,  1680,     0,     0,     6,     0,     0,     0,     0,
       0,     7,     8,     9,     0,     0,    10,    11,    12,     0,
      13,     0,     0,     0,   206,   207,   208,     0,   209,   210,
     211,   212,    18,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,   206,   207,   208,   220,   209,   210,
     211,   212,     0,   221,   213,   214,   215,   216,   217,   218,
     219,     0,     0,  1134,   220,     0,     0,     0,     0,     0,
     221,   171,   171,     0,     0,   379,  1670,  1671,     0,   171,
    1673,     0,     0,     0,     0,     0,  1678,     0,  1681,     0,
       0,     0,     0,     0,     0,     0,     0,   814,     0,     0,
       0,     0,     0,     7,     8,     9,  1702,     0,    10,    11,
     815,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,     0,     0,    18,     0,     0,     0,     0,   171,
    1717,   171,  1719,  1720,     0,     0,     0,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,  1618,     0,
     121,   220,     0,     0,     0,   122,     0,   221,   123,     0,
       0,     0,     0,   396,     0,  1735,     0,     0,     0,  1739,
       0,     0,  1742,  1743,     0,     0,   735,   736,   737,   738,
       0,   171,     0,     0,     0,     0,     0,     0,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,     0,     0,     0,     0,  1772,
    1773,  1774,     0,     0,     0,     0,     0,     0,     0,     0,
    1782,  1783,  1784,  1785,  1786,     0,     0,   816,     0,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,     0,     0,     0,   829,     0,     0,   830,     0,     0,
     831,     0,     0,   832,     0,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,     0,     0,     0,   849,     0,     0,     0,   171,   850,
     814,     0,   851,  1827,     0,     0,     7,     8,     9,     0,
       0,    10,    11,   815,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,  1848,     0,     0,     0,     0,     0,     0,
       0,     0,  1855,  1856,  1857,  1858,     0,     0,  1861,     0,
    1863,     0,     0,     0,     0,     0,     0,     0,  1878,  1879,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
    1714,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,  1898,  1899,  1900,     0,  1901,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,  1917,     0,     0,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1928,
       0,     0,    53,     0,     0,  1934,    54,     0,     0,     0,
     816,     0,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,     0,     0,   171,   829,  1955,     0,
     830,     0,     0,   831,     0,     0,   832,     0,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,     0,     0,     0,   849,  1979,  1980,
    1981,   814,   850,     0,    55,   851,     0,     7,     8,     9,
      56,     0,    10,    11,   815,     0,    13,     0,     0,     0,
       0,     0,     0,    57,     0,    58,     0,     0,    18,   171,
       0,     0,     0,     0,     0,     0,     0,    59,  1620,     0,
    2004,    60,     0,     0,     0,     0,     0,     0,     0,  2012,
       0,     0,  2015,    61,     0,   814,     0,     0,     0,     0,
       0,     7,     8,     9,     0,     0,    10,    11,   815,   171,
      13,     0,     0,  1725,    62,     0,  2033,     0,  1819,     0,
    1820,     0,    18,  1821,   959,     0,   960,   961,     0,   962,
       0,   171,  2042,     0,     0,     0,     0,  1621,     0,   963,
       0,     0,     0,  2050,     0,     0,     0,  2054,     0,     0,
       0,     0,  2058,     0,     0,  2060,   964,   965,   966,  1122,
    1123,  1124,  1125,  1126,  1127,  1128,     0,  1822,     0,    63,
       0,    64,     0,   967,     0,     0,     0,     0,     0,     0,
       0,   816,     0,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,     0,     0,     0,   829,     0,
       0,   830,     0,     0,   831,     0,     0,   832,     0,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,     0,     0,     0,   849,   968,
       0,     0,     0,   850,     0,   816,   851,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,     0,
       0,     0,   829,     0,     0,   830,     0,     0,   831,     0,
       0,   832,     0,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,     0,
       0,     0,   849,     0,     0,   814,     0,   850,     0,     0,
     851,     7,     8,     9,     0,     0,    10,    11,   815,     0,
      13,   969,  1826,     0,  1727,     0,     0,     0,   970,   206,
     207,   208,    18,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   814,
       0,     0,     0,     0,     0,     7,     8,     9,     0,     0,
      10,    11,   815,     0,    13,     0,     0,     0,  1729,     0,
       0,     0,     0,     0,     0,     0,    18,     0,   206,   207,
     208,     0,   209,   210,   211,   212,  1625,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,   814,   221,     0,     0,     0,     0,     7,
       8,     9,     0,     0,    10,    11,   815,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,   816,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,  1626,
       0,     0,   829,     0,     0,   830,     0,     0,   831,     0,
       0,   832,     0,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,     0,
       0,     0,   849,     0,     0,     0,     0,   850,     0,   816,
     851,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,     0,     0,     0,   829,     0,     0,   830,
       0,     0,   831,     0,     0,   832,     0,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,     0,     0,     0,   849,     0,     0,     0,
       0,   850,     0,   816,   851,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,     0,  1730,     0,
     829,     0,     0,   830,     0,     0,   831,     0,     0,   832,
       0,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,     0,     0,     0,
     849,     0,     0,   814,     0,   850,     0,     0,   851,     7,
       8,     9,     0,     0,    10,    11,   815,     0,    13,     0,
       0,     0,  1731,     0,     0,     0,     0,   206,   207,   208,
      18,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   814,     0,     0,
       0,     0,     0,     7,     8,     9,     0,     0,    10,    11,
     815,     0,    13,     0,     0,     0,  1949,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
     206,   207,   208,     0,   209,   210,   211,   212,     0,  1843,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,   814,     0,     0,     0,     0,   221,     7,     8,     9,
       0,     0,    10,    11,   815,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,   816,     0,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,  1844,     0,     0,
     829,     0,     0,   830,     0,     0,   831,     0,     0,   832,
       0,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,     0,     0,     0,
     849,     0,     0,     0,     0,   850,     0,   816,   851,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,     0,     0,     0,   829,     0,     0,   830,     0,     0,
     831,     0,     0,   832,     0,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,     0,     0,     0,   849,     0,     0,     0,     0,   850,
       0,   816,   851,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,     0,  1956,     0,   829,     0,
       0,   830,     0,     0,   831,     0,     0,   832,     0,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,     0,     0,     0,   849,     0,
       0,   814,     0,   850,     0,     0,   851,     7,     8,     9,
       0,     0,    10,    11,   815,     0,    13,     0,     0,     0,
    2005,     0,     0,     0,     0,     0,     0,     0,    18,     0,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,   814,   221,     0,     0,     0,
       0,     7,     8,     9,     0,     0,    10,    11,   815,     0,
      13,     0,     0,     0,  2007,     0,     0,     0,  1845,     0,
       0,     0,    18,     0,     0,     0,     0,     0,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,  1846,     0,     0,   220,   814,
       0,     0,     0,     0,   221,     7,     8,     9,     0,     0,
      10,    11,   815,     0,    13,     0,     0,     0,     0,     0,
       0,     0,  1847,     0,     0,     0,    18,     0,     0,     0,
       0,   816,     0,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,  1960,     0,     0,   829,     0,
       0,   830,     0,     0,   831,     0,     0,   832,     0,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,     0,     0,     0,   849,     0,
       0,     0,     0,   850,     0,   816,   851,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,     0,
       0,     0,   829,     0,     0,   830,     0,     0,   831,     0,
       0,   832,     0,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,     0,
       0,     0,   849,     0,     0,     0,     0,   850,     0,   816,
     851,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,     0,  2009,     0,   829,     0,     0,   830,
       0,     0,   831,     0,     0,   832,     0,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,     0,     0,     0,   849,     0,     0,     0,
       0,   850,     0,     0,   851,     0,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,  2010,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,  2034,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,   389,     0,   213,   214,   215,   216,
     217,   218,   219,    92,    93,   162,   220,     0,     0,     0,
       0,     0,   221,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   205,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    92,    93,
     162,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,  1080,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   165,   166,   167,   281,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    92,    93,     6,   485,     0,   782,   783,
     784,   785,   786,   787,    94,    95,   788,   789,   790,   791,
     792,   793,   794,   795,     0,     0,   796,     0,     0,     0,
     366,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    92,    93,
       6,   206,   207,   208,     0,   209,   210,   211,   212,    94,
      95,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,   222,     0,   391,     0,   221,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   472,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,   390,     0,     0,     0,
     221,   121,   746,     0,     0,     0,   122,     0,     0,   123,
       0,   206,   207,   208,     0,   209,   210,   211,   212,  1041,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   780,   781,
     782,   783,   784,   785,   786,   787,     0,     0,   788,   789,
     790,   791,   792,   793,   794,   795,   121,     0,   796,     0,
       0,   122,     0,     0,   123,     0,   206,   207,   208,  1069,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,   206,   207,   208,   220,   209,   210,   211,
     212,     0,   221,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,   121,     0,     0,   386,     0,   122,     0,     0,   123,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,   206,   207,   208,
     220,   209,   210,   211,   212,     0,   221,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,  1535,     0,   121,     0,   387,     0,
       0,   122,     0,     0,   123,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,  1536,     0,     0,     0,   221,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,   206,
     207,   208,   220,   209,   210,   211,   212,  1537,   221,   213,
     214,   215,   216,   217,   218,   219,     6,     0,     0,   220,
       0,     0,     7,     8,     9,   221,     0,    10,    11,    12,
       0,    13,     0,    14,    15,    16,    17,  1538,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,  1539,  1540,
    1541,  1542,  1543,  1544,  1545,  1546,  1547,  1548,  1549,  1550,
    1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,
    1561,     0,     0,   206,   207,   208,    19,   209,   210,   211,
     212,     0,    20,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,    21,     0,    22,     0,   221,
       0,     0,     0,     0,   388,     0,     0,     0,     0,    23,
       0,     0,     0,    24,     0,     0,   206,   207,   208,     0,
     209,   210,   211,   212,     0,    25,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,     0,     0,     0,    26,   466,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,   467,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,     0,     0,
       0,    27,   630,    28,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,   631,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1323,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1331,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1340,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1570,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1595,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1596,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1597,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1601,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1607,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1614,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1634,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1797,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1798,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1806,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1812,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1813,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1837,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1838,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1839,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1889,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1910,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1912,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1942,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1943,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1944,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  2020,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  2047,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  2056,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  2059,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,   284,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,   352,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,   489,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,   566,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,   567,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,   743,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,   863,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,   958,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    1788,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,  1902,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  1970,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  1972,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,  2000,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,  2001,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,  2002,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,  2024,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  2027,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  2053,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    2061,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,   312,
     206,   207,   208,   221,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   369,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   370,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   371,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   372,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   373,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   374,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   375,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   376,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     377,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   378,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   380,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   381,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   382,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   383,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   384,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   385,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   474,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   505,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     561,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   562,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   563,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   564,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,   565,   206,   207,   208,
     221,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,   636,
     206,   207,   208,   221,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   757,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   860,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   861,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1638,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  1795,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1809,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1907,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1908,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    1909,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  1914,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1924,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1925,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1945,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1986,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  2040,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   780,   781,   782,   783,   784,   785,   786,   787,
       0,     0,   788,   789,   790,   791,   792,   793,   794,   795,
       0,     0,   796,     0,     0,     0,  1416,   780,   781,   782,
     783,   784,   785,   786,   787,     0,     0,   788,   789,   790,
     791,   792,   793,   794,   795,     0,     0,   796,     0,   904,
     780,   781,   782,   783,   784,   785,   786,   787,     0,     0,
     788,   789,   790,   791,   792,   793,   794,   795,     0,     0,
     796,   783,   784,   785,   786,   787,     0,     0,   788,   789,
     790,   791,   792,   793,   794,   795,     0,     0,   796
};

static const yytype_int16 yycheck[] =
{
       5,   509,     7,    85,   503,   654,   942,   943,     5,     7,
     896,   595,    17,     5,   522,   901,   902,   400,     5,     5,
       5,   974,     5,    28,   532,  1209,     5,   529,   536,  1213,
       5,     3,   540,     5,     5,    40,     3,     3,     5,     5,
     177,     3,     5,     5,     5,     5,   237,     5,   431,     5,
       3,     5,     5,     5,  1457,   267,   268,   147,   148,    11,
      12,    13,    85,     5,    16,    17,    18,  1470,    20,     5,
      78,     5,    72,  1476,    81,    82,   267,     7,     0,    85,
      32,    68,  1485,    89,    84,   638,    72,   968,  1491,  1492,
     180,    99,     5,    99,   237,    67,   261,    72,     0,   980,
     684,   685,   686,   687,    67,   607,   271,   250,    85,    72,
     237,   760,   119,   762,    26,   271,    26,     5,   261,    71,
      26,   338,    99,    11,    12,    13,   133,   237,    16,    17,
      18,   259,    20,   270,   261,    85,    72,    89,    72,    89,
      90,     7,   147,   148,    32,   150,   151,    99,   100,   154,
     155,   156,   157,   158,   159,   160,   108,   267,   110,    72,
     262,   264,   259,   266,   261,   150,   151,   269,    89,   154,
     155,   156,   157,   158,   159,   180,   181,   262,    99,   763,
     101,   398,   399,   259,   269,     7,   276,   277,  1074,   406,
     102,   574,   102,   146,   331,   748,   102,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   267,   268,   799,  1400,   252,   253,   254,
       5,     6,   227,   258,     9,    10,   858,   260,   260,   264,
     261,  1117,   120,   121,   122,   123,   269,   269,     5,   329,
     872,   873,   874,   875,    11,    12,    13,   267,   262,    16,
      17,    18,   262,    20,   886,   269,   338,   640,   267,   269,
     268,   268,   268,   216,   261,    32,   262,     5,   268,   267,
     271,   276,   277,   269,   271,   595,    26,   367,   264,   271,
     362,   267,     5,     6,   267,   251,   267,   259,   267,   264,
      21,   268,   259,   259,   267,   267,   267,   259,   270,    66,
     267,   264,   267,   270,   270,   259,   267,   267,   270,   267,
     264,   267,   944,   945,   816,   338,   268,   259,   268,   268,
     269,     5,   267,   907,   329,   235,   595,    11,    12,    13,
     264,   261,    16,    17,    18,   967,    20,    26,   262,   344,
     252,   346,   252,   348,   261,   269,   252,   268,    32,   262,
     267,   264,   102,   267,   271,   261,  1242,   271,   267,   344,
      91,   498,   367,   348,   684,   685,   686,   687,   458,    26,
     267,   870,   110,   267,   876,   877,   878,   879,  1010,     5,
     268,   883,   120,    85,    21,    11,    12,    13,   262,    91,
      16,    17,    18,   262,    20,   269,     5,    99,   403,   267,
     269,   260,    11,    12,    13,   410,    32,    16,    17,    18,
     269,    20,   143,   102,     5,   684,   685,   686,   687,   424,
      11,    12,    13,    32,   262,    16,    17,    18,   260,    20,
      89,   269,    99,   438,   101,   166,   167,   269,   443,   237,
      99,    32,   109,   763,   449,   102,   451,   452,   262,  1852,
     455,   236,   457,   458,    91,   269,   115,   268,   269,  1862,
     119,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   258,  1662,   799,
    1361,  1362,  1363,   264,  1365,  1069,    89,   989,   990,   494,
     250,   251,   252,   253,   763,  1079,     6,  1129,   503,   136,
    1002,   268,   252,  1135,   267,     7,   143,   144,   271,   269,
     113,   261,   781,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   791,   792,   793,   794,   795,   796,     7,   166,
     799,     5,   169,   170,     5,     6,   261,   268,     9,    10,
     267,     5,   267,     7,   271,  1044,   262,  1049,   267,  1051,
      99,  1954,   271,   269,  1957,  1441,  1058,  1443,    22,    23,
      24,   262,   133,   252,  1967,  1968,   268,   262,   269,  1201,
    1202,  1203,   261,   261,   269,    39,     7,   582,  1210,  1087,
    1764,     7,   262,   267,   268,   261,    99,   907,  1090,   269,
     595,   267,   597,   262,   143,   252,   601,   582,   603,   261,
     269,   268,   115,  2006,   261,   267,   611,   612,  1240,   268,
     615,   259,   597,   262,   619,   262,   601,  1249,   603,  1555,
     269,   267,   269,   628,   137,   271,   611,   612,   268,   269,
     615,   268,     7,   638,   619,   269,   270,   642,   907,   101,
       7,   267,   268,   628,   193,     7,   195,     7,    21,   111,
     112,   113,   267,   268,  1535,  1536,     7,   642,   267,   268,
       5,     7,  1543,     7,   267,   268,    11,    12,    13,   218,
       7,    16,    17,    18,     7,    20,   267,   268,   191,   684,
     685,   686,   687,   267,     5,   690,   194,    32,     7,  1321,
      11,    12,    13,     7,     5,    16,    17,    18,     7,    20,
      11,    12,    13,   267,   268,    16,    17,    18,     7,    20,
    1212,    32,  1593,     7,  1595,     7,    89,   260,    91,   268,
     143,    32,   267,   146,   729,    70,   267,   268,   261,   102,
     268,   269,   261,   197,   261,  1055,   159,   160,   161,     5,
     261,  1373,   115,   748,   261,    11,    12,    13,     7,  1069,
      16,    17,    18,     7,    20,   268,   267,   268,   763,  1079,
     133,   268,   269,   261,  1645,   236,    32,    92,    93,    94,
      95,    96,    97,   778,   245,   246,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   261,   930,   799,   268,   269,  1446,  1447,  1448,
    1069,   261,  1755,  1756,   143,   261,   268,   146,   813,   814,
    1079,  1313,   261,   252,   253,   254,   255,  1449,  1320,   258,
     159,   160,     7,  1325,   163,   164,  1328,     7,   813,   267,
     268,  1333,   268,   269,   268,   269,   261,  1421,   268,   269,
     268,   269,   269,  1345,   261,   268,  1229,   268,   269,   268,
     269,   856,   857,   858,   268,   269,  1358,   261,  1360,   268,
     269,   268,   269,   261,   869,   870,   261,   872,   873,   874,
     875,  1752,   268,   269,   268,   269,   881,  1260,   268,   269,
     261,   886,  1384,   268,   269,  1268,   968,  1270,     7,   979,
     261,   981,   268,   269,     5,   268,   268,   269,   980,   268,
     269,  1533,   907,   268,   269,  1791,  1408,  1409,   261,  1411,
      99,   261,   101,   102,   103,   104,   105,   106,   107,  1302,
     261,  1011,   269,   268,  1307,     8,  1428,   244,   245,   268,
     935,   248,   249,   250,   251,   252,   253,   254,   255,   944,
     945,   258,     5,   268,   268,   269,   267,   268,   261,   954,
     262,   684,   685,   686,   687,   261,   267,   268,   963,   964,
     268,   269,   967,   125,   126,   127,   128,   129,   130,   131,
     261,   133,   977,   978,   979,   261,   981,   982,   983,   268,
     269,   261,   987,   268,   269,  1546,  1547,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,   261,   261,   261,   261,
     261,   267,   268,   237,   237,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,   237,  1027,   267,   262,   262,  1031,   269,     7,  1910,
     763,   262,   250,   251,   252,   253,   254,   262,     7,  1044,
     258,   261,     5,     5,   267,     5,   264,  1933,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,  1069,   267,   799,     5,   267,     5,
       5,     5,   267,   267,  1079,    11,    12,    13,   237,   268,
      16,    17,    18,   267,    20,   262,     5,     5,   267,   267,
    1410,     5,  1973,   267,     5,   267,    32,   267,     5,  1601,
       5,  1421,   262,     7,     7,  1607,   268,     7,     7,     7,
       5,     7,  1614,   237,     8,     7,    11,    12,    13,   267,
       7,    16,    17,    18,  1129,    20,     7,     7,  1630,   261,
    1135,   261,  2013,     7,   252,     7,     7,    32,     7,     7,
       5,   237,   267,  1792,     7,     7,     7,     7,     7,  1651,
       7,     7,  1421,     7,  2035,   238,   239,   240,     7,   242,
     243,   244,   245,  1665,     7,   248,   249,   250,   251,   252,
     253,   254,   262,   268,   907,   258,     3,     4,     5,    69,
     264,   264,     7,     5,   252,   268,     7,    14,    15,  1688,
    1822,  1196,  1197,   267,     7,     7,  1201,  1202,  1203,     7,
      27,    28,    29,    30,    99,  1210,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     7,   268,   267,     8,  1240,   262,  1869,   261,   261,
     261,   136,   261,   261,  1249,     5,     5,     3,   143,   261,
    1387,    11,    12,    13,     5,     5,    16,    17,    18,   261,
      20,    11,    12,    13,     7,   268,    16,    17,    18,   267,
      20,   267,    32,   267,   267,   261,   261,   261,     5,  1361,
    1362,  1363,    32,  1365,    11,    12,    13,   261,   261,    16,
      17,    18,   262,    20,   261,   267,     5,     5,   245,  1801,
     261,   258,   261,   268,  1806,    32,  1808,     3,   261,  1314,
    1315,   267,     5,  1815,  1319,   261,  1321,   261,    11,    12,
      13,   261,   261,    16,    17,    18,  1828,    20,   261,    43,
      44,   267,   268,  1835,   261,    84,  1069,    86,   261,    32,
      89,  1849,     5,     7,   261,  1350,  1079,   267,    11,    12,
      13,   261,   261,    16,    17,    18,     6,    20,   237,   261,
     261,   267,     5,  1368,  1369,  1867,  1371,  1372,  1373,    32,
     261,    85,    86,   268,   267,  1380,   125,   126,   127,   128,
     129,   130,   131,   261,   133,  1522,   261,  1524,  1525,  1526,
     267,     5,     5,     5,   261,  1380,     5,    11,    12,    13,
     264,   267,    16,    17,    18,     5,    20,   121,   122,   123,
     261,   261,   267,   261,   261,   261,  1421,   261,    32,   261,
     261,  1923,   267,   262,   251,   262,   262,   120,  1433,   256,
     261,     5,   259,   268,   262,     5,     5,     5,   267,  1941,
    1530,   268,     5,   267,  1449,     5,     5,   161,  1453,  1539,
    1455,     5,     5,  1535,  1536,   250,   251,   252,   253,   254,
     255,  1543,     5,   258,     3,   179,     7,     5,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,     7,     5,
     261,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   267,   268,   261,
     267,  1593,   267,  1595,   261,   269,     7,   267,   268,   268,
       7,     7,     3,     4,     5,  1530,   267,     7,  1533,     7,
       7,     7,     7,     7,  1539,     7,     7,     7,     7,     7,
     267,   268,     7,  1680,  1634,  1635,   269,   262,   269,  1686,
     261,  1641,    33,    34,    35,    36,    37,     7,     5,     7,
     274,   275,     7,  1645,    11,    12,    13,   281,     7,    16,
      17,    18,     7,    20,   288,   268,   267,  1667,  1668,     5,
       7,   261,     7,     7,     7,    32,  1591,     7,     7,     7,
       7,     7,     7,  1598,     7,  1600,     7,  1602,     7,     7,
       7,     7,     7,  1608,   267,   268,     7,     7,     7,     5,
       5,     5,  1617,   261,     7,   261,     5,     5,  1623,  1624,
     334,     7,     7,     7,   338,     7,   340,     7,     7,  1634,
    1635,     7,     7,   262,   262,   262,  1641,   269,   269,   269,
       7,   262,     7,   269,   269,   269,   269,   269,   362,   269,
     269,   262,   366,   267,   268,   262,     7,     3,   268,  1749,
     268,  1751,  1667,  1668,   269,   379,   269,   269,   269,   268,
    1752,   269,   386,   387,   388,   389,   269,   391,   269,   269,
     394,   395,   396,  1688,   269,     3,     4,     5,  1421,   269,
     269,   269,  1829,  1830,  1831,  1832,    14,    15,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   269,   269,    27,
      28,    29,    30,   269,   269,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     267,   267,   267,   267,  1749,   267,  1751,   262,   269,   269,
       7,   115,   466,   467,     7,   261,     7,   262,   472,     3,
       4,     5,     6,     3,     7,     9,     7,   267,     7,     7,
      14,    15,     7,     7,     7,     7,     7,   267,   267,   267,
       7,     7,   496,    27,    28,    29,    30,    31,   267,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   267,   267,     7,  1822,     5,     7,
     267,   268,     5,   267,   211,   267,   267,   267,  1910,   262,
     261,   133,     7,   269,   262,     5,     5,  1974,     5,  1976,
    1977,    11,    12,    13,   558,     7,    16,    17,    18,     5,
      20,     5,   262,   267,     7,     7,     7,   269,   572,   262,
     262,     7,    32,     7,  1869,   262,     7,     7,     5,     7,
     262,   269,   262,   238,   239,   240,   590,   242,   243,   244,
     245,     8,     7,   248,   249,   250,   251,   252,   253,   254,
     267,  1973,  2029,   258,   212,   269,   269,   269,   216,   264,
     262,  1906,   262,   269,     5,   262,   269,   262,  1913,     5,
     269,   269,     5,   269,   267,   269,   630,   631,   267,    89,
     634,     3,   267,   267,   264,   262,   262,   268,   262,    99,
     262,  2013,     7,   251,   262,   268,     7,   268,   256,     7,
       7,   259,   138,     7,     7,     7,     7,     7,     7,   267,
       7,     7,     7,  2035,     7,     7,     7,     7,   267,   269,
       7,   262,     6,   267,     7,     7,     7,   137,   138,   139,
     140,   141,   142,     7,     5,   114,   269,     7,   269,    19,
    1985,   262,  1987,   269,  1989,  1990,   269,   262,   262,   269,
     269,   235,   262,   269,   267,   267,   267,   711,  2003,   267,
     269,     7,   269,     5,   267,   267,     7,   251,     3,     4,
       5,     7,   256,     7,     7,   259,  2021,     7,     7,    14,
      15,     7,     7,   267,     5,     5,     5,   269,     5,     7,
     267,   261,   746,   747,   262,     5,     5,   262,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     7,    63,    64,
     262,   268,   262,     7,     7,     7,   238,   239,   240,     7,
     242,   243,   244,   245,   798,     7,   248,   249,   250,   251,
     252,   253,   254,     7,   268,     7,   258,     7,   268,     7,
       7,     7,   264,     7,     7,     7,   267,   267,     3,     4,
       5,   238,   239,   240,   241,   242,   243,   244,   245,    14,
      15,   248,   249,   250,   251,   252,   253,   254,   255,     7,
     125,   258,     7,     7,     7,     7,     7,   132,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   267,    63,    64,
       3,     4,     5,     6,   268,   240,     9,   242,   243,   244,
     245,    14,    15,   248,   249,   250,   251,   252,   253,   254,
     267,     7,     7,   258,    27,    28,    29,    30,    31,   264,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,   262,     7,   262,   267,   267,
     125,   267,    84,    65,    86,    87,    88,   132,   267,    72,
       7,   269,   267,   267,     7,   268,   267,     7,     7,   244,
     269,   965,     7,   268,   968,   250,   251,   268,   267,     7,
     267,   256,   267,     7,   259,   269,   980,   262,   263,   264,
     265,   268,   267,   125,   126,   127,   128,   129,   130,   131,
     135,   133,   134,     5,   268,   268,     7,   934,   933,  1003,
    2049,  1005,   267,  1007,   268,  1062,   581,   810,   238,   239,
     240,  1379,   242,   243,   244,   245,  1649,   857,   248,   249,
     250,   251,   252,   253,   254,  1197,   694,   546,   258,  1529,
    1037,    -1,    -1,    -1,   264,    -1,    -1,  1041,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,   244,
      -1,    -1,    -1,    -1,   264,   250,   251,    -1,    -1,    -1,
      -1,   256,    -1,    -1,   259,    -1,    -1,    -1,    -1,   264,
     265,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,     5,    -1,    -1,    -1,    -1,    89,    11,    12,
      13,    -1,   235,    16,    17,    18,    -1,    20,    -1,    -1,
     102,    -1,    -1,     3,     4,     5,   268,    -1,   251,    32,
      -1,    -1,    -1,   256,    14,    15,   259,    -1,    -1,    -1,
      -1,   264,    -1,    -1,   267,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     3,     4,
       5,   238,   239,   240,    -1,   242,   243,   244,   245,    14,
      15,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     7,    -1,    -1,    -1,    -1,    -1,  1243,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     7,    -1,    -1,   162,
      -1,    -1,   165,    -1,    -1,   168,    -1,    -1,   171,    -1,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   268,    -1,    -1,   192,
      -1,    -1,    -1,    -1,   197,    -1,    -1,   200,    -1,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,  1316,  1317,  1318,   258,    -1,    -1,    -1,  1323,
      -1,   264,  1326,  1327,    -1,    -1,    -1,  1331,    -1,    -1,
    1334,  1335,  1336,  1337,    -1,    -1,  1340,  1341,  1342,    84,
    1344,    86,    87,    88,  1348,  1349,    -1,    -1,    -1,  1353,
    1354,    -1,    -1,    -1,    -1,    -1,    -1,  1361,  1362,  1363,
    1364,  1365,     3,     4,     5,   268,  1370,    -1,    -1,    -1,
      -1,   251,    -1,    14,    15,    -1,   256,    -1,    -1,   259,
     125,   126,   127,   128,   129,   130,   131,   267,   133,   134,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
      -1,   256,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,   238,   239,   240,    -1,   242,   243,
     244,   245,    32,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,
     264,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,   238,   239,   240,   258,   242,   243,
     244,   245,    -1,   264,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,   268,   258,    -1,    -1,    -1,    -1,    -1,
     264,  1535,  1536,    -1,    -1,   269,  1540,  1541,    -1,  1543,
    1544,    -1,    -1,    -1,    -1,    -1,  1550,    -1,  1552,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,  1570,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    32,    -1,    -1,    -1,    -1,  1593,
    1594,  1595,  1596,  1597,    -1,    -1,    -1,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,     7,    -1,
     251,   258,    -1,    -1,    -1,   256,    -1,   264,   259,    -1,
      -1,    -1,    -1,   264,    -1,  1629,    -1,    -1,    -1,  1633,
      -1,    -1,  1636,  1637,    -1,    -1,   196,   197,   198,   199,
      -1,  1645,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,  1683,
    1684,  1685,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1694,  1695,  1696,  1697,  1698,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,   171,    -1,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,   192,    -1,    -1,    -1,  1752,   197,
       5,    -1,   200,  1757,    -1,    -1,    11,    12,    13,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,  1787,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1796,  1797,  1798,  1799,    -1,    -1,  1802,    -1,
    1804,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1812,  1813,
      -1,    -1,   238,   239,   240,    -1,   242,   243,   244,   245,
     268,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,  1837,  1838,  1839,    -1,  1841,   264,   238,
     239,   240,    -1,   242,   243,   244,   245,    -1,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,  1866,    -1,    -1,   264,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1883,
      -1,    -1,     3,    -1,    -1,  1889,     7,    -1,    -1,    -1,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,  1910,   162,  1912,    -1,
     165,    -1,    -1,   168,    -1,    -1,   171,    -1,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,    -1,    -1,    -1,   192,  1942,  1943,
    1944,     5,   197,    -1,    65,   200,    -1,    11,    12,    13,
      71,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    32,  1973,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,     7,    -1,
    1984,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1993,
      -1,    -1,  1996,   114,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    16,    17,    18,  2013,
      20,    -1,    -1,   268,   135,    -1,  2020,    -1,    84,    -1,
      86,    -1,    32,    89,    84,    -1,    86,    87,    -1,    89,
      -1,  2035,  2036,    -1,    -1,    -1,    -1,     7,    -1,    99,
      -1,    -1,    -1,  2047,    -1,    -1,    -1,  2051,    -1,    -1,
      -1,    -1,  2056,    -1,    -1,  2059,   116,   117,   118,   125,
     126,   127,   128,   129,   130,   131,    -1,   133,    -1,   190,
      -1,   192,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,   171,    -1,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   189,
      -1,    -1,    -1,   197,    -1,   145,   200,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,   171,    -1,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
      -1,    -1,   192,    -1,    -1,     5,    -1,   197,    -1,    -1,
     200,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,   261,   268,    -1,   268,    -1,    -1,    -1,   268,   238,
     239,   240,    32,   242,   243,   244,   245,    -1,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,   238,   239,
     240,    -1,   242,   243,   244,   245,     7,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,    -1,     5,   264,    -1,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     7,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,   171,    -1,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
      -1,    -1,   192,    -1,    -1,    -1,    -1,   197,    -1,   145,
     200,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,   171,    -1,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,    -1,
      -1,   197,    -1,   145,   200,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,   268,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,   171,
      -1,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
     192,    -1,    -1,     5,    -1,   197,    -1,    -1,   200,    11,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,   268,    -1,    -1,    -1,    -1,   238,   239,   240,
      32,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,    -1,   242,   243,   244,   245,    -1,     7,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,     5,    -1,    -1,    -1,    -1,   264,    11,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     7,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,   171,
      -1,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
     192,    -1,    -1,    -1,    -1,   197,    -1,   145,   200,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,   171,    -1,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,   197,
      -1,   145,   200,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,   268,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,   171,    -1,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    -1,   192,    -1,
      -1,     5,    -1,   197,    -1,    -1,   200,    11,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
     268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
     238,   239,   240,    -1,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,    -1,     5,   264,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,   268,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,     7,    -1,    -1,   258,     5,
      -1,    -1,    -1,    -1,   264,    11,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     7,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,   171,    -1,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,   197,    -1,   145,   200,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,   171,    -1,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
      -1,    -1,   192,    -1,    -1,    -1,    -1,   197,    -1,   145,
     200,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,   268,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,   171,    -1,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,    -1,
      -1,   197,    -1,    -1,   200,    -1,    -1,    -1,    -1,   238,
     239,   240,    -1,   242,   243,   244,   245,    -1,   268,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   238,   239,   240,    -1,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,   268,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,   264,
     242,   243,   244,   245,     8,    -1,   248,   249,   250,   251,
     252,   253,   254,     3,     4,     5,   258,    -1,    -1,    -1,
      -1,    -1,   264,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     3,     4,     5,     6,    -1,   240,   241,
     242,   243,   244,   245,    14,    15,   248,   249,   250,   251,
     252,   253,   254,   255,    -1,    -1,   258,    -1,    -1,    -1,
       8,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     3,     4,
       5,   238,   239,   240,    -1,   242,   243,   244,   245,    14,
      15,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,   260,    -1,     8,    -1,   264,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     8,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,   260,    -1,    -1,    -1,
     264,   251,     8,    -1,    -1,    -1,   256,    -1,    -1,   259,
      -1,   238,   239,   240,    -1,   242,   243,   244,   245,     8,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,   255,   251,    -1,   258,    -1,
      -1,   256,    -1,    -1,   259,    -1,   238,   239,   240,   269,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,   238,   239,   240,   258,   242,   243,   244,
     245,    -1,   264,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
      -1,   251,    -1,    -1,   269,    -1,   256,    -1,    -1,   259,
     238,   239,   240,    -1,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,   238,   239,   240,
     258,   242,   243,   244,   245,    -1,   264,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,    78,    -1,   251,    -1,   269,    -1,
      -1,   256,    -1,    -1,   259,   238,   239,   240,    -1,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,    -1,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,   139,    -1,    -1,    -1,   264,
      -1,    -1,   238,   239,   240,    -1,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,   238,
     239,   240,   258,   242,   243,   244,   245,   171,   264,   248,
     249,   250,   251,   252,   253,   254,     5,    -1,    -1,   258,
      -1,    -1,    11,    12,    13,   264,    -1,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,   201,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,    -1,   238,   239,   240,    65,   242,   243,   244,
     245,    -1,    71,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    84,    -1,    86,    -1,   264,
      -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   238,   239,   240,    -1,
     242,   243,   244,   245,    -1,   114,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,    -1,    -1,    -1,   135,   269,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,   238,   239,   240,   264,   242,   243,   244,   245,   269,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,
      -1,   190,   269,   192,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,
     264,   242,   243,   244,   245,   269,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
     238,   239,   240,   264,   242,   243,   244,   245,   269,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,   238,   239,   240,   264,   242,   243,   244,
     245,   269,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,   264,
     242,   243,   244,   245,   269,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,   238,
     239,   240,   264,   242,   243,   244,   245,   269,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,   238,   239,   240,   264,   242,   243,   244,   245,
     269,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,   238,   239,   240,   264,   242,
     243,   244,   245,   269,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,   238,   239,
     240,   264,   242,   243,   244,   245,   269,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,   238,   239,   240,   264,   242,   243,   244,   245,   269,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,   238,   239,   240,   264,   242,   243,
     244,   245,   269,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,
     264,   242,   243,   244,   245,   269,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
     238,   239,   240,   264,   242,   243,   244,   245,   269,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,   238,   239,   240,   264,   242,   243,   244,
     245,   269,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,   264,
     242,   243,   244,   245,   269,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,   238,
     239,   240,   264,   242,   243,   244,   245,   269,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,   238,   239,   240,   264,   242,   243,   244,   245,
     269,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,   238,   239,   240,   264,   242,
     243,   244,   245,   269,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,   238,   239,
     240,   264,   242,   243,   244,   245,   269,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,   238,   239,   240,   264,   242,   243,   244,   245,   269,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,   238,   239,   240,   264,   242,   243,
     244,   245,   269,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,
     264,   242,   243,   244,   245,   269,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
     238,   239,   240,   264,   242,   243,   244,   245,   269,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,   238,   239,   240,   264,   242,   243,   244,
     245,   269,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,   238,   239,   240,   264,
     242,   243,   244,   245,   269,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,   238,
     239,   240,   264,   242,   243,   244,   245,   269,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,   238,   239,   240,   264,   242,   243,   244,   245,
     269,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,   238,   239,   240,   264,   242,
     243,   244,   245,   269,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,   238,   239,
     240,   264,   242,   243,   244,   245,   269,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,   238,   239,   240,   264,   242,   243,   244,   245,   269,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,   238,   239,   240,   264,   242,   243,
     244,   245,   269,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   238,   239,   240,   268,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   238,   239,
     240,   268,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   238,   239,   240,   268,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   238,   239,   240,   268,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   238,
     239,   240,   268,   242,   243,   244,   245,    -1,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   238,   239,   240,   268,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   238,   239,   240,   268,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     238,   239,   240,   268,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   238,   239,   240,
     268,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,   238,   239,   240,   268,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
     264,   238,   239,   240,   268,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   238,   239,
     240,   268,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,   238,   239,   240,   268,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   238,   239,   240,   268,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   238,
     239,   240,   268,   242,   243,   244,   245,    -1,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,   264,   238,   239,   240,   268,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,   264,   238,   239,   240,   268,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
     238,   239,   240,   268,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,   238,   239,   240,
     268,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,   260,
     238,   239,   240,   264,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,
      -1,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,   264,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,
     264,   238,   239,   240,    -1,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,   262,    -1,   264,   238,   239,   240,    -1,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,   264,   238,   239,   240,    -1,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,    -1,   262,    -1,   264,   238,
     239,   240,    -1,   242,   243,   244,   245,    -1,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,    -1,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,   264,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,   264,
     238,   239,   240,    -1,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,
      -1,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,   264,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,
     264,   238,   239,   240,    -1,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,   262,    -1,   264,   238,   239,   240,    -1,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,   264,   238,   239,   240,    -1,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,    -1,   262,    -1,   264,   238,
     239,   240,    -1,   242,   243,   244,   245,    -1,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,    -1,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,   264,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,   264,
     238,   239,   240,    -1,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,
      -1,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,   264,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,   260,   238,   239,   240,
     264,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,   260,
     238,   239,   240,   264,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,
      -1,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,   264,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,
     264,   238,   239,   240,    -1,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,   262,    -1,   264,   238,   239,   240,    -1,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,   264,   238,   239,   240,    -1,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,    -1,   262,    -1,   264,   238,
     239,   240,    -1,   242,   243,   244,   245,    -1,    -1,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,    -1,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,   264,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,   264,
     238,   239,   240,    -1,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,   240,
      -1,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,   264,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,
     264,   238,   239,   240,    -1,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,   264,   238,   239,
     240,    -1,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,   262,    -1,   264,   238,   239,   240,    -1,   242,
     243,   244,   245,    -1,    -1,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   264,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,   255,
      -1,    -1,   258,    -1,    -1,    -1,   262,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,   255,    -1,    -1,   258,    -1,   260,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,   255,    -1,    -1,
     258,   241,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,   255,    -1,    -1,   258
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   273,   274,     0,   275,   276,     5,    11,    12,    13,
      16,    17,    18,    20,    22,    23,    24,    25,    32,    65,
      71,    84,    86,    98,   102,   114,   135,   190,   192,   277,
     278,   436,   449,   450,   458,   459,   271,   259,   264,   459,
     259,     7,     5,   259,   259,     5,     7,    22,    23,    24,
      39,   197,     7,     3,     7,    65,    71,    84,    86,    98,
     102,   114,   135,   190,   192,     6,     9,    10,   236,   459,
     460,   461,   261,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   459,   271,   237,   267,     6,     7,     7,
     459,   133,     3,     4,    14,    15,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   251,   256,   259,   453,   454,   459,   462,   463,   453,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   261,   259,   451,
     279,   335,   320,   326,   342,   300,   365,   391,   421,   432,
     194,   267,     5,     6,    27,    28,    29,    30,    31,   235,
     267,   453,   455,   457,   461,   453,   260,   269,   260,   267,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   453,   453,   453,     8,   238,   239,   240,   242,
     243,   244,   245,   248,   249,   250,   251,   252,   253,   254,
     258,   264,   260,   460,   460,   262,   269,   296,     5,    66,
     268,   280,   281,   449,   459,   267,   268,   336,   449,   267,
     268,   267,   268,   267,   268,   343,   449,    70,   268,   301,
     449,   459,   267,   268,   366,   449,   267,   268,   392,   449,
     267,   268,   422,   449,   267,   268,   433,   449,   459,   453,
     267,     7,   261,   261,   261,   261,   261,   261,   453,   456,
     457,     8,     7,     7,   268,     7,   456,     7,   261,   453,
     460,   459,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   260,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   269,
     260,   269,     7,   459,   267,   297,   299,   261,   237,   250,
     261,   337,   321,   327,   344,   261,   261,   367,   393,   423,
     434,   437,   268,   268,   456,     5,     5,   453,   453,   460,
     460,   268,   269,   453,   260,   453,     8,   269,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   269,
     262,   262,   262,   262,   262,   262,   269,   269,   269,     8,
     260,     8,   460,   456,   237,   267,   264,   453,   237,   237,
     295,     5,    72,   264,   284,   288,   237,   453,    85,    89,
      99,   268,   338,    85,    99,   268,   322,    85,    91,    99,
     268,   328,    71,    89,    99,   100,   108,   110,   268,   345,
     449,   302,     5,   262,   284,   286,   459,    89,    99,   115,
     119,   268,   368,    99,   136,   143,   268,   394,   449,    99,
     115,   137,   191,   268,   424,    99,   143,   193,   195,   218,
     268,   435,   267,   268,   262,   269,   269,   269,   262,   262,
     453,   457,     8,     7,   262,   453,   460,   453,   453,   453,
     453,   453,   453,   262,   260,     6,   453,   453,   453,   268,
       5,   284,   284,   262,   296,     3,   259,   267,   270,   292,
     294,   459,     7,   261,   284,   262,     5,   267,     5,     5,
     459,   267,     5,   267,    26,   102,   252,   303,   304,     5,
     267,     5,     5,   459,   267,   267,   267,   262,   296,   237,
     262,     5,     5,   459,   267,   267,     5,   459,   267,   395,
       5,   459,   267,   459,   459,   459,   267,   459,   460,     5,
     438,     5,   453,   453,     7,     7,   453,     7,     8,   268,
     262,   262,   262,   262,   262,   260,   268,   268,     7,     7,
       7,   459,     8,   453,   293,   456,    67,   289,   292,     7,
     237,   267,   339,     7,   267,   297,     7,   323,     7,   329,
     261,   261,   252,     7,   307,   308,     7,   362,     7,   297,
       7,   346,   352,   359,     7,     5,   303,   237,     7,   297,
       7,   369,   375,   297,     7,   396,   267,   297,     7,   425,
       7,     7,     7,   438,     7,     7,     7,   268,   439,   262,
     269,   269,   453,   237,   267,   453,   260,   268,   296,   270,
     285,    69,   339,   267,   268,   449,     7,   267,   268,   267,
     268,   453,     5,   252,     5,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      64,   125,   132,   244,   250,   251,   256,   259,   264,   265,
     267,   309,   312,   390,   452,   454,   459,   462,   463,   267,
     268,   449,     7,   267,   268,   449,   267,   268,   267,   268,
     449,   267,     7,   303,     7,   267,   268,   449,   120,   121,
     122,   123,   268,   376,   449,     7,   267,   268,   449,   403,
       7,   267,   268,   449,   268,   196,   197,   198,   199,   440,
     449,   453,   453,   268,   267,   453,     8,     8,   251,   294,
     290,   296,   282,   268,   340,   324,   330,   262,   262,   390,
     261,   316,   261,   261,   261,   261,   313,   314,     5,   309,
     309,   309,   309,     3,     3,     5,   146,   216,     5,   459,
     238,   239,   240,   241,   242,   243,   244,   245,   248,   249,
     250,   251,   252,   253,   254,   255,   258,   264,   266,   261,
     317,   317,   363,   347,   353,   360,   453,     7,   370,   267,
     267,   267,   267,   397,     5,    18,   145,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   162,
     165,   168,   171,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   192,
     197,   200,   268,   404,   449,   426,   261,   261,   261,   261,
     262,   262,   268,   268,   453,   453,   294,   262,     5,    68,
     291,   261,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    83,    89,   102,   268,   341,    72,    84,   268,   325,
      85,    89,    90,   268,   331,   390,   261,   390,   309,     5,
       5,   261,   261,   245,   260,   459,   268,   310,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,     3,   453,   262,   263,   309,   318,
     267,   319,   101,   111,   112,   113,   268,   364,    99,   101,
     102,   103,   104,   105,   106,   107,   268,   348,    99,   101,
     109,   268,   354,    89,    99,   101,   268,   361,   268,    84,
      86,    87,    89,    99,   116,   117,   118,   133,   189,   261,
     268,   371,   381,   381,   385,   377,    89,    99,   137,   138,
     139,   140,   141,   142,   268,   398,   449,   261,   459,   261,
     261,   303,   261,   261,   261,   261,   261,   261,   261,   261,
     261,     7,   261,   261,   267,   261,   267,   261,   267,   267,
     261,   261,   261,   261,   261,   261,   261,   261,   267,   267,
     261,   261,   261,   261,   261,   267,   267,   261,   405,   406,
      78,    99,   268,   427,   442,   459,     6,   442,   286,     6,
     237,     8,   459,   292,   264,   286,   286,   286,   286,   261,
     303,   261,   303,   303,   303,   267,   459,     5,   261,   303,
      67,   286,     5,   267,     5,     5,   262,   307,   262,   269,
     261,   262,   307,   307,   261,   268,   309,   262,   262,   269,
      72,   456,     5,   288,   291,   459,     5,     5,     5,   267,
     267,   305,   305,   286,   286,     5,     5,   267,   357,     5,
     267,   355,     5,   459,     5,     5,     5,     5,     5,   110,
     120,   459,   459,   453,     3,   286,   455,   373,    84,    86,
      87,    88,   125,   126,   127,   128,   129,   130,   131,   133,
     134,   268,   382,   389,   268,   133,   268,   386,   389,    89,
     113,   267,   268,   378,     5,   459,   267,   399,   459,   460,
     455,   460,   267,   401,   459,   459,   459,     7,   303,   303,
       7,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     303,   453,   410,   453,   412,   453,   414,   416,   286,   460,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,     5,   459,   261,   261,   267,   459,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   445,
     261,   444,   269,   445,   441,   446,   267,   453,   292,     7,
       7,     7,     7,   303,     7,   303,     7,     7,     7,   454,
       7,     7,   303,     7,     7,     7,   319,   332,     7,     7,
     269,   309,   315,   267,   262,   269,   307,     8,   309,   261,
     268,     7,     7,     7,     7,     7,     7,   297,   267,   349,
       5,   303,   306,     7,     7,     7,     7,     7,   358,     7,
     356,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,   372,     7,     7,     7,     7,   307,     5,     5,
       5,   261,   286,     7,   261,   286,   261,     5,     5,   379,
       7,     7,   400,     7,     7,     7,     7,   402,     7,     7,
     262,   262,   262,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   262,   269,   143,   146,   159,   160,   161,   268,
     411,   269,   143,   146,   159,   160,   163,   164,   268,   413,
     269,    21,    91,   143,   166,   167,   268,   415,    21,    91,
     136,   143,   144,   166,   169,   170,   268,   417,   269,   262,
     269,   269,   269,   269,   269,   269,   268,   268,   269,   269,
     269,   269,   269,   269,   269,   262,   305,   407,   459,   407,
     428,     7,   286,   286,   267,   286,   267,   267,   267,   267,
     267,   446,   286,   250,   251,   252,   253,   269,   443,   235,
     303,   446,   269,   262,   269,   447,   268,   283,   269,   269,
     296,   269,     7,   267,   268,   286,   262,   307,   453,     3,
     262,   311,   286,     7,   115,     7,   296,   268,   269,   268,
     296,   268,   296,   261,   374,   262,     7,     7,     7,     3,
       7,   383,     7,   387,     7,     7,    81,    82,   119,   133,
     268,   380,   268,   296,   268,   296,     7,   267,     7,   303,
     459,   459,   453,   453,   453,   459,   303,   286,     7,   453,
     267,   303,   453,   453,   303,   453,   267,   303,   453,   453,
     453,   453,   453,   453,   453,   267,   453,   303,   453,   453,
     459,   267,   267,   453,   453,   267,   303,     7,   303,   455,
     455,   455,   453,   455,     7,     7,   459,   459,   453,   459,
     459,   286,     5,     7,   408,   408,     5,   120,   268,   449,
     211,   303,   267,   456,   267,   267,   267,   262,   262,     5,
     261,   446,   262,   133,     7,    78,   139,   171,   201,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   269,   303,   303,   454,   303,   333,   262,   262,
     269,   262,   309,   262,     5,     5,   303,     5,     5,   459,
       7,     7,   262,   307,   307,   390,   390,   390,   286,   459,
     459,   403,   262,   269,   269,   269,   269,   269,   269,   262,
     269,   269,   403,     7,     7,     7,     7,   269,   403,     7,
       7,     7,     7,     7,   269,     7,     7,   403,     7,     7,
       7,     7,     7,   403,   403,     7,     7,   418,   262,   269,
     269,   262,   262,   269,   269,   269,   269,   269,   262,   262,
     262,   269,   268,   269,   262,   269,   409,   262,   267,   267,
       5,   269,   456,   268,   456,   456,   456,     7,   444,   460,
     262,     7,   286,   455,   455,   267,     5,   245,   246,   460,
     453,   453,   455,   453,     5,   448,   448,   448,   453,     5,
     267,   453,   305,   267,   267,   267,   267,     3,   264,   262,
     262,   268,   262,    92,    93,    94,    95,    96,    97,   268,
     334,   262,   453,   268,     7,   268,   262,     7,   384,   388,
       7,     7,     7,     7,   268,     7,   455,   453,   455,   453,
     453,   459,     7,   459,   303,   268,   303,   268,   303,   268,
     268,   268,   267,   268,     7,   453,   303,     7,     7,   453,
     460,   460,   453,   453,     7,     7,     7,   460,     7,   138,
       7,   212,   216,   455,     7,   429,   429,   267,   303,   268,
     268,   268,   268,   269,   262,     7,   446,   303,   460,   460,
       6,   456,   453,   453,   453,   456,   292,     7,     7,     7,
       7,     5,   453,   453,   453,   453,   453,   267,   268,   114,
       7,   269,   269,    19,   262,   262,   269,   269,   269,   269,
     262,   269,   269,   262,   269,   419,   269,   262,   269,   262,
     262,   262,   269,   269,   268,   269,   460,   460,   455,    84,
      86,    89,   133,   268,   389,   430,   268,   453,   269,   267,
     267,   267,   267,   446,   262,   269,   268,   269,   269,   269,
     268,   269,     7,     7,     7,     7,     7,     7,   453,     5,
     307,   390,   267,     7,     7,   453,   453,   453,   453,     7,
     303,   453,   267,   453,    21,    89,    91,   102,   115,   133,
     268,   420,   303,     7,   303,     7,     7,     7,   453,   453,
       7,   303,   268,   269,     5,     5,     5,   286,   261,   269,
     303,   456,   456,   456,   456,   262,     7,   303,   453,   453,
     453,   453,   268,   297,   262,   262,   403,   262,   262,   262,
     269,   262,   269,   403,   262,     5,     5,   453,   303,     5,
     286,   262,   262,   269,   262,   262,   268,     7,   453,     7,
       7,     7,     7,   431,   453,   268,   268,   268,   268,   268,
       7,   269,   269,   269,   269,   262,     7,     7,     7,   268,
       7,     7,     7,   455,   267,   453,   268,   267,     7,     7,
       7,     7,     7,     7,     7,     7,   303,   267,   267,     7,
     268,   307,   268,   267,   267,   268,   267,   267,   303,   453,
     453,   453,     7,   350,   269,   403,   262,   403,   262,   403,
     403,     7,   262,   267,   455,   456,   267,   456,   456,   268,
     268,   268,   268,    65,   453,   268,   267,   268,     7,   268,
     268,     7,   453,   269,   268,   453,   268,   268,   287,   459,
     269,   403,     7,     7,   268,   455,   268,   268,   268,   267,
       7,   267,   298,   453,   268,   269,   267,   456,   351,   268,
     262,   455,   453,   268,   135,     7,   268,   269,   268,     5,
     453,   267,   298,   268,   453,     7,   269,   268,   453,   269,
     453,   268
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 341 "GetDP.y"
    { if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfPointer_L = List_Create(10, 10, sizeof(void *)) ;
	ListOfPointer2_L= List_Create(10, 10, sizeof(void *)) ;
	ListOfChar_L    = List_Create(128, 128, sizeof(char)) ;

	ListOfFormulation       = List_Create(5,5, sizeof(int)) ;

	ListOfBasisFunction     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfEntityIndex       = List_Create(5,5, sizeof(int)) ;
      }
    ;}
    break;

  case 3:
#line 357 "GetDP.y"
    { if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfEntityIndex) ;
      }
    ;}
    break;

  case 5:
#line 381 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; ;}
    break;

  case 19:
#line 405 "GetDP.y"
    {            
      strcpy(yyincludename, (yyvsp[(2) - (2)].c)); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 420 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 422 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 424 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 426 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 428 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 430 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 432 "GetDP.y"
    { Help((yyvsp[(2) - (3)].c)); ;}
    break;

  case 28:
#line 434 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 436 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 438 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 440 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 442 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 444 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 446 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 448 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 450 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 452 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 454 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 456 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 458 "GetDP.y"
    { Print_Object((yyvsp[(2) - (3)].i), &Problem_S); ;}
    break;

  case 43:
#line 493 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (4)].c), 0, 0) ; ;}
    break;

  case 44:
#line 496 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 2, (yyvsp[(2) - (5)].i)) ; ;}
    break;

  case 45:
#line 502 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 0, 0) ;
    ;}
    break;

  case 48:
#line 512 "GetDP.y"
    { Add_Group_2(&Group_S, (yyvsp[(1) - (5)].c), 1, 0, 0, 0) ; ;}
    break;

  case 50:
#line 520 "GetDP.y"
    { 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)(yyvsp[(3) - (6)].d) ;
      List_Add(Group_S.InitialList, &i) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;}
    break;

  case 51:
#line 530 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = (yyvsp[(10) - (10)].l) ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)(yyvsp[(3) - (10)].d) ; 
    ;}
    break;

  case 52:
#line 537 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = (yyvsp[(14) - (18)].l) ; 
      Add_Group(&Group_S, (yyvsp[(1) - (18)].c), 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)(yyvsp[(16) - (18)].d) ; 
    ;}
    break;

  case 53:
#line 547 "GetDP.y"
    {
      Group_S.FunctionType = (yyvsp[(1) - (3)].i) ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      Group_S.InitialList = (yyvsp[(3) - (3)].l) ;
    ;}
    break;

  case 54:
#line 556 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = (yyvsp[(5) - (6)].l) ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 55:
#line 564 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = (yyvsp[(2) - (2)].l) ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 56:
#line 575 "GetDP.y"
    {
      (yyval.i) = (yyvsp[(1) - (1)].i) ;
    ;}
    break;

  case 57:
#line 580 "GetDP.y"
    {
      if ( !strcmp((yyvsp[(1) - (1)].c), "All") ) {
	(yyval.i) = -3;
      }
      else if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(1) - (1)].c), fcmp_Group_Name)) >= 0 ) {
	List_Read(Problem_S.Group, i, &Group_S) ; (yyval.i) = i ;
      }
      else {
	(yyval.i) = -2 ; vyyerror("Unknown Group: %s", (yyvsp[(1) - (1)].c)) ;
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 58:
#line 597 "GetDP.y"
    {
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(1) - (2)].c), fcmp_Group_Name)) >= 0 )
	  List_Read(Problem_S.Group, i, &Group_S) ; (yyval.i) = i ;
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d", (yyvsp[(1) - (2)].c), k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				    fcmp_Group_Name)) < 0 ) {
	    (yyval.i) = -2 ; vyyerror("Unknown Group: %s {%d}", (yyvsp[(1) - (2)].c), k+1) ;
	  }
	  else {
	    if (k == 0) {
	      List_Read(Problem_S.Group, i, &Group_S) ; (yyval.i) = i ;
	    }
	  }
	  List_Add(ListOfInt_L, &i) ;
	}
      }
      Free((yyvsp[(1) - (2)].c)) ;
    ;}
    break;

  case 59:
#line 627 "GetDP.y"
    { (yyval.i) = REGION ; ;}
    break;

  case 60:
#line 630 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_Type, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 61:
#line 642 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l) ; ;}
    break;

  case 62:
#line 643 "GetDP.y"
    { (yyval.l) = NULL ; ;}
    break;

  case 63:
#line 650 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  (yyval.l) = NULL ; ;}
    break;

  case 64:
#line 653 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; (yyval.l) = (yyvsp[(3) - (3)].l) ; ;}
    break;

  case 65:
#line 656 "GetDP.y"
    {
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (3)].c), fcmp_Group_Name)) >= 0 ) {
	if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	     ELEMENTLIST ) {
	  (yyval.l) = List_Create( 1, 5, sizeof(int)) ;
	  List_Add((yyval.l), &i) ;
	}
	else  vyyerror("Not a Support of Element Type: %s", (yyvsp[(3) - (3)].c)) ;
      }
      else  vyyerror("Unknown Region for Support: %s", (yyvsp[(3) - (3)].c)) ;
      Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 66:
#line 674 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_SuppList, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 67:
#line 687 "GetDP.y"
    {
      (yyval.l) = List_Create(((List_Nbr((yyvsp[(1) - (1)].l)) > 0)? List_Nbr((yyvsp[(1) - (1)].l)) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(1) - (1)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(1) - (1)].l), i) ) ;
    ;}
    break;

  case 68:
#line 694 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 69:
#line 701 "GetDP.y"
    {
      (yyval.l) = List_Create( 5, 5, sizeof(int)) ;
    ;}
    break;

  case 70:
#line 706 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (3)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(3) - (3)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(3) - (3)].l), i) ) ;
    ;}
    break;

  case 71:
#line 713 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (4)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(4) - (4)].l)) ; i++)
	List_Suppress((yyval.l), (int *)List_Pointer((yyvsp[(4) - (4)].l), i), fcmp_int ) ;
    ;}
    break;

  case 72:
#line 724 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &((yyvsp[(1) - (1)].i))) ;
    ;}
    break;

  case 73:
#line 730 "GetDP.y"
    {
      i = (int)(yyvsp[(2) - (3)].d) ;
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
    ;}
    break;

  case 74:
#line 737 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr((yyvsp[(2) - (3)].l)) ; i++) {
	List_Read((yyvsp[(2) - (3)].l), i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      (yyval.l) = ListOfInt_L;
    ;}
    break;

  case 75:
#line 748 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(yyvsp[(1) - (3)].i) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?(j<=(yyvsp[(3) - (3)].d)):(j>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 76:
#line 757 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)(yyvsp[(2) - (5)].d) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?(j<=(yyvsp[(5) - (5)].d)):(j>=(yyvsp[(5) - (5)].d)) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 77:
#line 765 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      if(!(int)(yyvsp[(5) - (5)].d) || ((yyvsp[(1) - (5)].i)<(int)(yyvsp[(3) - (5)].d) && (int)(yyvsp[(5) - (5)].d)<0) || ((yyvsp[(1) - (5)].i)>(int)(yyvsp[(3) - (5)].d) && (int)(yyvsp[(5) - (5)].d)>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", (yyvsp[(1) - (5)].i), (int)(yyvsp[(3) - (5)].d), (int)(yyvsp[(5) - (5)].d)) ;
	List_Add(ListOfInt_L, &((yyvsp[(1) - (5)].i))) ;
      }
      else
	for(j=(yyvsp[(1) - (5)].i) ; ((int)(yyvsp[(5) - (5)].d)>0)?(j<=(yyvsp[(3) - (5)].d)):(j>=(yyvsp[(3) - (5)].d)) ; j+=(int)(yyvsp[(5) - (5)].d)) 
	  List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 78:
#line 779 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      if(!(int)(yyvsp[(7) - (7)].d) || ((int)(yyvsp[(2) - (7)].d)<(int)(yyvsp[(5) - (7)].d) && (int)(yyvsp[(7) - (7)].d)<0) || ((int)(yyvsp[(2) - (7)].d)>(int)(yyvsp[(5) - (7)].d) && (int)(yyvsp[(7) - (7)].d)>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", (int)(yyvsp[(2) - (7)].d), (int)(yyvsp[(5) - (7)].d), (int)(yyvsp[(7) - (7)].d)) ;
	 i = (int)(yyvsp[(2) - (7)].d) ; List_Add(ListOfInt_L, &i) ;
      }
      else
	for(j=(int)(yyvsp[(2) - (7)].d) ; ((int)(yyvsp[(7) - (7)].d)>0)?(j<=(int)(yyvsp[(5) - (7)].d)):(j>=(int)(yyvsp[(5) - (7)].d)) ; j+=(int)(yyvsp[(7) - (7)].d)) 
	  List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 79:
#line 792 "GetDP.y"
    {
      if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(1) - (1)].c), fcmp_Group_Name)) < 0 ) {
	/* Si ce n'est pas un nom de groupe, est-ce un nom de constante ? : */
	Constant_S.Name = (yyvsp[(1) - (1)].c) ;
	if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	  vyyerror("Unknown Constant: %s", (yyvsp[(1) - (1)].c)) ;
	  i = 0 ;
	  List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
	}
	else
	  if (Constant_S.Type == VAR_FLOAT) {
	    i = (int)Constant_S.Value.Float ;
	    List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
	  }
	  else if (Constant_S.Type == VAR_LISTOFFLOAT) {
	    List_Reset((yyval.l) = ListOfInt_L) ;
	    for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ; j = (int)d ;
	      List_Add(ListOfInt_L, &j) ;
	    }
	  }
	  else {
	    vyyerror("Unknown type of Constant: %s", (yyvsp[(1) - (1)].c)) ;
	    i = 0 ;
	    List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
	  }
      }
      else   /* Si c'est un nom de groupe : */
	(yyval.l) = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 81:
#line 831 "GetDP.y"
    { if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (3)].c), fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, (yyvsp[(3) - (3)].c), 0, 0) ;
      }
      else  Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 82:
#line 841 "GetDP.y"
    {
      if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (6)].c), fcmp_Group_Name)) >= 0 ) {
	Free((yyvsp[(3) - (6)].c)) ;
      }
      Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
      Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
      Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
      i = Add_Group(&Group_S, (yyvsp[(3) - (6)].c), 0, 0) ;
    ;}
    break;

  case 83:
#line 852 "GetDP.y"
    { 
      for (k = 0 ; k < (int)(yyvsp[(5) - (6)].d) ; k++) {
	sprintf(tmpstr, "%s_%d", (yyvsp[(3) - (6)].c), k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
	  Add_Group(&Group_S, (yyvsp[(3) - (6)].c), 2, k+1) ;
	}
      }
      Free((yyvsp[(3) - (6)].c)) ;
    ;}
    break;

  case 84:
#line 867 "GetDP.y"
    { 
      for (k = 0 ; k < (int)(yyvsp[(5) - (9)].d) ; k++) {
	sprintf(tmpstr, "%s_%d", (yyvsp[(3) - (9)].c), k+1) ;
	/*
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	*/
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
	  Add_Group(&Group_S, (yyvsp[(3) - (9)].c), 2, k+1) ;
	  /*
	}
	  */
      }
      Free((yyvsp[(3) - (9)].c)) ;
    ;}
    break;

  case 87:
#line 893 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(3) - (4)].d) ; ;}
    break;

  case 88:
#line 898 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 89:
#line 899 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 90:
#line 904 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 94:
#line 923 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[(1) - (6)].c), fcmp_Expression_Name)) >= 0 ) {
	if (((struct Expression *)List_Pointer(Problem_S.Expression, i))->Type ==
	    UNDEFINED_EXP) {
	  Free(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name) ;
	  List_Read (Problem_S.Expression, (yyvsp[(5) - (6)].i), &Expression_S) ;
	  List_Write(Problem_S.Expression,  i, &Expression_S) ;
	  ((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name = (yyvsp[(1) - (6)].c) ;
	  List_Pop(Problem_S.Expression) ;
	}
	else  { vyyerror("Redefinition of Function: %s", (yyvsp[(1) - (6)].c)) ; }
      }
      else {  /* new identifier */
	Free(((struct Expression *)List_Pointer(Problem_S.Expression, (yyvsp[(5) - (6)].i)))->Name) ;
	((struct Expression *)List_Pointer(Problem_S.Expression, (yyvsp[(5) - (6)].i)))->Name = (yyvsp[(1) - (6)].c) ;
      }
    ;}
    break;

  case 95:
#line 943 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[(1) - (7)].c), fcmp_Expression_Name)) < 0 ) {
	/* Si le nom n'existe pas : */
	i = List_Nbr(Problem_S.Expression) ;
	Expression_S.Type = PIECEWISEFUNCTION ;
	Expression_S.Case.PieceWiseFunction.ExpressionPerRegion =
	  List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	Expression_S.Case.PieceWiseFunction.NumLastRegion = -1 ;
	Add_Expression(&Expression_S, (yyvsp[(1) - (7)].c), 0) ;
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
	  vyyerror("Not piece-wise Expression: %s", (yyvsp[(1) - (7)].c)) ;
	Free((yyvsp[(1) - (7)].c)) ;
      }

      if ((yyvsp[(3) - (7)].i) >= 0 || (yyvsp[(3) - (7)].i) == -1) {
	ExpressionPerRegion_S.ExpressionIndex = (yyvsp[(6) - (7)].i) ;
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
	if ((yyvsp[(3) - (7)].i) == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group right hand side") ;
    ;}
    break;

  case 98:
#line 994 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[(3) - (3)].c), fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, (yyvsp[(3) - (3)].c), 0) ;
      }
      else  Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 99:
#line 1004 "GetDP.y"
    {
      for (k = 0 ; k < (int)(yyvsp[(5) - (6)].d) ; k++) {
	sprintf(tmpstr, "%s_%d", (yyvsp[(3) - (6)].c), k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Expression, tmpstr,
				  fcmp_Expression_Name)) < 0 ) {
	  Expression_S.Type = UNDEFINED_EXP ;
	  Add_Expression(&Expression_S, tmpstr, 2) ;
	}
      }
      Free((yyvsp[(3) - (6)].c)) ;
    ;}
    break;

  case 100:
#line 1027 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = (yyvsp[(3) - (4)].d) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 101:
#line 1033 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (4)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", (yyvsp[(3) - (4)].c)) ;
      Free((yyvsp[(3) - (4)].c)) ;  (yyval.i) = i ;
    ;}
    break;

  case 102:
#line 1039 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 103:
#line 1042 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = (yyvsp[(2) - (2)].l) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 104:
#line 1047 "GetDP.y"
    { Expression_S.Type = UNDEFINED_EXP ; 
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;}
    break;

  case 105:
#line 1054 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1065 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &((yyvsp[(1) - (1)].i))) ; ;}
    break;

  case 108:
#line 1068 "GetDP.y"
    { List_Add(ListOfInt_L, &((yyvsp[(3) - (3)].i))) ; ;}
    break;

  case 109:
#line 1074 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1078 "GetDP.y"
    { (yyval.l) = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1090 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_TEST ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 113:
#line 1103 "GetDP.y"
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
    ;}
    break;

  case 114:
#line 1117 "GetDP.y"
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
    ;}
    break;

  case 115:
#line 1132 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1138 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1144 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1150 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1156 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1162 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1168 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1174 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1180 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1186 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1192 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1198 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1204 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1210 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1216 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1222 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1228 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1235 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1243 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1256 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1262 "GetDP.y"
    {

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(1) - (3)].c),fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = (yyvsp[(2) - (3)].i) ;
	if ((yyvsp[(2) - (3)].i) < 0)  vyyerror("Uncompatible argument for Function: %s", (yyvsp[(1) - (3)].c)) ;
      }

      /* Built in functions */

      else { 
	Get_Function2NbrForString(F_Function, (yyvsp[(1) - (3)].c), &FlagError,
				  &WholeQuantity_S.Case.Function.Fct,
				  &WholeQuantity_S.Case.Function.NbrParameters,
				  &WholeQuantity_S.Case.Function.NbrArguments) ;
	WholeQuantity_S.Case.Function.Active = NULL ;
	if (!FlagError) {

	  /* arguments */
	  if ((yyvsp[(2) - (3)].i) >= 0) {
	    if ((yyvsp[(2) - (3)].i) == WholeQuantity_S.Case.Function.NbrArguments) {
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	    }
	    else if (WholeQuantity_S.Case.Function.NbrArguments == -1  ||
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
	      /* && ($2)%2 == 0)) { */
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	      WholeQuantity_S.Case.Function.NbrArguments = (yyvsp[(2) - (3)].i) ;
	    }
	    else {
	      vyyerror("Wrong number of arguments for Function '%s' (%d instead of %d)", 
		       (yyvsp[(1) - (3)].c), (yyvsp[(2) - (3)].i), WholeQuantity_S.Case.Function.NbrArguments) ;
	    }
	  }
	  else {
	    WholeQuantity_S.Type = WQ_EXTERNBUILTINFUNCTION ;
	  }

	  /* parameters */
	  if (WholeQuantity_S.Case.Function.NbrParameters >= 0 &&
	      WholeQuantity_S.Case.Function.NbrParameters != List_Nbr((yyvsp[(3) - (3)].l))) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     (yyvsp[(1) - (3)].c), List_Nbr((yyvsp[(3) - (3)].l)), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 && List_Nbr((yyvsp[(3) - (3)].l))%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
		     (yyvsp[(1) - (3)].c), List_Nbr((yyvsp[(3) - (3)].l))) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr((yyvsp[(3) - (3)].l)) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read((yyvsp[(3) - (3)].l), i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }

	}

	else {
	  vyyerror("Unknown Function: %s", (yyvsp[(1) - (3)].c)) ;
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 138:
#line 1336 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, (yyvsp[(1) - (2)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of discrete Quantity: %s", (yyvsp[(1) - (2)].c));
	Get_Valid_SXD(QuantityFromFS_Type) ;
      }
      Free((yyvsp[(1) - (2)].c)) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(2) - (2)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(2) - (2)].t).Int2 ;

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
    ;}
    break;

  case 139:
#line 1370 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (1)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (1)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1379 "GetDP.y"
    { 
      if((yyvsp[(2) - (2)].i)!=1 && (yyvsp[(2) - (2)].i)!=3 && (yyvsp[(2) - (2)].i)!=4)
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", (yyvsp[(2) - (2)].i)) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = (yyvsp[(2) - (2)].i) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (2)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (2)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 141:
#line 1391 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1393 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = (yyvsp[(4) - (5)].l) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 143:
#line 1405 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1407 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = (yyvsp[(4) - (7)].l) ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = (yyvsp[(6) - (7)].i) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 145:
#line 1419 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1421 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (11)].c),fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", (yyvsp[(3) - (11)].c)) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = (yyvsp[(6) - (11)].l) ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)(yyvsp[(10) - (11)].d) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 147:
#line 1435 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (9)].c),fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", (yyvsp[(3) - (9)].c)) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)(yyvsp[(6) - (9)].d) ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)(yyvsp[(8) - (9)].d) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 148:
#line 1447 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1453 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1459 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1461 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = (yyvsp[(4) - (7)].l) ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", (yyvsp[(6) - (7)].i)) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[x, ConnectedTo y]'");

      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = -1 ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity){
	for(i=0 ; i<List_Nbr((yyvsp[(4) - (7)].l)) ; i++){
	  WholeQuantity_P = (struct WholeQuantity*)List_Pointer((yyvsp[(4) - (7)].l), i) ;
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
    ;}
    break;

  case 152:
#line 1490 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = (yyvsp[(5) - (6)].l) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[(2) - (6)].c),
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp((yyvsp[(2) - (6)].c), "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else if (!strcmp((yyvsp[(2) - (6)].c), "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2 ;
	else
	  vyyerror("Unknown Cast: %s", (yyvsp[(2) - (6)].c)) ;
      }
      else {
	WholeQuantity_S.Case.Cast.NbrHar = 0 ;
	WholeQuantity_S.Case.Cast.FunctionSpaceIndexForType =
	  ((struct DefineQuantity *)List_Pointer(Formulation_S.DefineQuantity, i))
	    ->FunctionSpaceIndex ;
      }
      Free((yyvsp[(2) - (6)].c)) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 153:
#line 1516 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, (yyvsp[(2) - (2)].c), &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError){
	vyyerror("Unknown current value: $%s", (yyvsp[(2) - (2)].c));
	Get_Valid_SXP(Current_Value);
      }
      Free((yyvsp[(2) - (2)].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 154:
#line 1529 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1535 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1542 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[(2) - (2)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1548 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[(3) - (3)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1555 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[(2) - (2)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1562 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[(3) - (3)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1569 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1575 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 162:
#line 1584 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 163:
#line 1585 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 164:
#line 1586 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 165:
#line 1591 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 166:
#line 1592 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 167:
#line 1598 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 168:
#line 1601 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 169:
#line 1604 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 170:
#line 1619 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 171:
#line 1624 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 172:
#line 1631 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 174:
#line 1640 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 175:
#line 1645 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 176:
#line 1652 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 177:
#line 1655 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 178:
#line 1662 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 180:
#line 1672 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 181:
#line 1675 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 182:
#line 1678 "GetDP.y"
    { JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, (yyvsp[(2) - (4)].c), &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (JacobianCase_S.NbrParameters == -2 && (List_Nbr((yyvsp[(3) - (4)].l)))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   (yyvsp[(2) - (4)].c), List_Nbr((yyvsp[(3) - (4)].l))) ;
	if (JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr((yyvsp[(3) - (4)].l));
	if (List_Nbr((yyvsp[(3) - (4)].l)) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read((yyvsp[(3) - (4)].l), i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   (yyvsp[(2) - (4)].c), List_Nbr((yyvsp[(3) - (4)].l)), JacobianCase_S.NbrParameters) ;
      }
      else{
	vyyerror("Unknown type of Jacobian: %s", (yyvsp[(2) - (4)].c));
	Get_Valid_SXD1N(Jacobian_Type);
      }
      Free((yyvsp[(2) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 183:
#line 1716 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 184:
#line 1722 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 185:
#line 1729 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 187:
#line 1742 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 188:
#line 1749 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 189:
#line 1752 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 190:
#line 1759 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 191:
#line 1762 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 192:
#line 1769 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 194:
#line 1781 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 195:
#line 1791 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 196:
#line 1801 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 197:
#line 1808 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 198:
#line 1811 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 199:
#line 1818 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 201:
#line 1834 "GetDP.y"
    { QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Element: %s", (yyvsp[(2) - (3)].c));
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

      if (FlagError)  vyyerror("Bad type of Integration method for Element: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 202:
#line 1882 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 203:
#line 1885 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 204:
#line 1888 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 205:
#line 1891 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 206:
#line 1894 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 207:
#line 1905 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 209:
#line 1915 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 211:
#line 1925 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 213:
#line 1938 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 214:
#line 1945 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 215:
#line 1953 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 216:
#line 1962 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 217:
#line 1965 "GetDP.y"
    {
      if (!Constraint_S.MultiConstraintPerRegion)
	Constraint_S.MultiConstraintPerRegion =
	  List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

      MultiConstraintPerRegion_S.Name = (yyvsp[(2) - (5)].c) ;
      MultiConstraintPerRegion_S.ConstraintPerRegion = (yyvsp[(4) - (5)].l) ;
      MultiConstraintPerRegion_S.Active = NULL ;

      List_Add(Constraint_S.MultiConstraintPerRegion, 
	       &MultiConstraintPerRegion_S) ;
    ;}
    break;

  case 218:
#line 1983 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 219:
#line 1988 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 220:
#line 1993 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 221:
#line 2002 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 223:
#line 2016 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 224:
#line 2026 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 225:
#line 2031 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 226:
#line 2037 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 227:
#line 2042 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2050 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2058 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2067 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.RegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex = -1 ;

	ConstraintPerRegion_S.Case.Link.FilterIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = -1 ;
      }
      else  vyyerror("RegionRef incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2085 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2094 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2102 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2110 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(2) - (3)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2120 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2130 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2140 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 238:
#line 2160 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 240:
#line 2171 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 242:
#line 2182 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 245:
#line 2196 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 246:
#line 2203 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 247:
#line 2211 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 248:
#line 2220 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 249:
#line 2223 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 250:
#line 2226 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 251:
#line 2229 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 252:
#line 2236 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 253:
#line 2242 "GetDP.y"
    {
      if ( (i = List_ISearchSeq((yyvsp[(1) - (4)].l), BasisFunction_S.Name, 
				fcmp_BasisFunction_Name)) < 0 ) {
	/*
	  BasisFunction_S.Num = Num_BasisFunction++ ;
	*/
	BasisFunction_S.Num = Num_BasisFunction ;
	Num_BasisFunction += (BasisFunction_S.SubFunction)?
	  List_Nbr(BasisFunction_S.SubFunction) : 1 ;
      }
      else  /* BasisFunction definie par morceaux => meme Num */
	BasisFunction_S.Num = ((struct BasisFunction *)List_Pointer((yyvsp[(1) - (4)].l), i))->Num ;

      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &BasisFunction_S) ;
    ;}
    break;

  case 254:
#line 2259 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 255:
#line 2268 "GetDP.y"
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
    ;}
    break;

  case 257:
#line 2289 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 258:
#line 2292 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 259:
#line 2297 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 260:
#line 2302 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, (yyvsp[(2) - (4)].c), &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError){
	vyyerror("Unknown Function for BasisFunction: %s", (yyvsp[(2) - (4)].c));
	Get_Valid_SX3F2N(BF_Function);
      }
      Free((yyvsp[(2) - (4)].c)) ;
    ;}
    break;

  case 261:
#line 2316 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, (yyvsp[(3) - (7)].c), &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", (yyvsp[(3) - (7)].c));
	Get_Valid_SX3F2N(BF_Function);
      }
      Free((yyvsp[(3) - (7)].c)) ;
      Get_3Function2NbrForString
	(BF_Function, (yyvsp[(5) - (7)].c), &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", (yyvsp[(5) - (7)].c));
	Get_Valid_SX3F2N(BF_Function);
      }
      Free((yyvsp[(5) - (7)].c)) ;
    ;}
    break;

  case 262:
#line 2336 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 263:
#line 2341 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 264:
#line 2346 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 265:
#line 2351 "GetDP.y"
    {
      BasisFunction_S.EntityIndex = Num_Group(&Group_S, "BF_Entity", (yyvsp[(2) - (3)].i)) ;
      if (Group_S.InitialList)
	List_Sort(Group_S.InitialList, fcmp_int) ;  /* Needed for Global Region */

      if (BasisFunction_S.GlobalBasisFunction) { /* Function to be defined before Entity */
	if (Group_S.FunctionType == GLOBAL) {
	  if (List_Nbr(BasisFunction_S.GlobalBasisFunction) ==
	      List_Nbr(Group_S.InitialList)) {
	    for (k = 0 ; k < List_Nbr(Group_S.InitialList) ; k++)
	      if (*((int*)List_Pointer(Group_S.InitialList, k)) !=
		  *((int*)List_Pointer(BasisFunction_S.GlobalBasisFunction, k))) {
		vyyerror("Bad correspondance between Group and Entity (elements differ)") ;
		break ;
	      }
	  }
	  else if (List_Nbr(Group_S.InitialList) != 0 ||
		   GlobalBasisFunction_S.EntityIndex != -1)
	    vyyerror("Bad correspondance between Group and Entity (#BF %d, #Global %d)",
		     List_Nbr(BasisFunction_S.GlobalBasisFunction),
		     List_Nbr(Group_S.InitialList)) ;
	}
	else  vyyerror("Bad correspondance between Group and Entity (Entity must be Global)") ;
      }
    ;}
    break;

  case 267:
#line 2385 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 268:
#line 2389 "GetDP.y"
    {
      Flag1 = Flag_MultipleIndex;
      if (Flag_MultipleIndex)
	Msg(WARNING, "Old way to define Group, remove \'{}\' to use one Group");
      /* Will be the new way to define Group
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", $6) ;
      */
    ;}
    break;

  case 269:
#line 2399 "GetDP.y"
    {
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", (yyvsp[(6) - (18)].c)) ;

      BasisFunction_S.GlobalBasisFunction =
	List_Create((yyvsp[(7) - (18)].i), 1, sizeof(struct GlobalBasisFunction)) ;

      for (k = 0 ; k < (yyvsp[(7) - (18)].i) ; k++) {

	if (!Flag1) { /* New way: only one group with all the single regions is given */
	  List_Read(Group_S.InitialList, k, &i) ;
	  GlobalBasisFunction_S.EntityIndex = i ;
	}
	else { /* Old way */
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
	}

	sprintf(tmpstr, "%s_%d", (yyvsp[(6) - (18)].c), k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) >= 0) {
	  GlobalBasisFunction_S.FormulationIndex = i ;
	  List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[(3) - (18)].c), 
				   fcmp_DefineQuantity_Name)) >= 0)
	    GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  else {
	    vyyerror("Unknown Quantity '%s' in Formulation '%s'", (yyvsp[(3) - (18)].c),
		     Formulation_S.Name) ;
	    break ;
	  }
	}
	else
	  vyyerror("Unknown Formulation: %s {%d}", (yyvsp[(6) - (18)].c), k+1) ;

	sprintf(tmpstr, "%s_%d", (yyvsp[(15) - (18)].c), k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				 fcmp_Resolution_Name)) >= 0)
	  GlobalBasisFunction_S.ResolutionIndex = i ;
	else
	  vyyerror("Unknown Resolution: %s {%d}", (yyvsp[(15) - (18)].c), k+1) ;

	GlobalBasisFunction_S.QuantityStorage = NULL ;
	List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      Free((yyvsp[(3) - (18)].c)) ; Free((yyvsp[(6) - (18)].c)) ; Free((yyvsp[(15) - (18)].c)) ;
    ;}
    break;

  case 270:
#line 2463 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 271:
#line 2469 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 272:
#line 2478 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 274:
#line 2489 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 275:
#line 2496 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 276:
#line 2499 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 277:
#line 2506 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[(1) - (1)].c), fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", (yyvsp[(1) - (1)].c)) ;
      else {
	List_Add((yyval.l), &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   (yyvsp[(1) - (1)].c), j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add((yyval.l), &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 278:
#line 2522 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 279:
#line 2528 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 280:
#line 2531 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[(3) - (3)].c), fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", (yyvsp[(3) - (3)].c)) ;
      else {
	List_Add((yyvsp[(1) - (3)].l), &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   (yyvsp[(3) - (3)].c), j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add((yyvsp[(1) - (3)].l), &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 281:
#line 2550 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[(1) - (1)].c), fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", (yyvsp[(1) - (1)].c)) ;
      else {
	List_Add((yyval.l), &i) ; j = i+1 ;
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 282:
#line 2562 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 283:
#line 2569 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 284:
#line 2574 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[(3) - (3)].c), fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", (yyvsp[(3) - (3)].c)) ;
      else {
	List_Add((yyvsp[(1) - (3)].l), &i) ; j = i+1 ;
      }
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 285:
#line 2589 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 286:
#line 2595 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 287:
#line 2601 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 288:
#line 2610 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 290:
#line 2622 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 291:
#line 2629 "GetDP.y"
    { 
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 292:
#line 2640 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[(2) - (3)].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", (yyvsp[(2) - (3)].c)) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 293:
#line 2654 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 294:
#line 2659 "GetDP.y"
    {
      Group_S.FunctionType = Type_Function ;
      Group_S.SuppListType = Type_SuppList ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }

      if (Constraint_Index >= 0) {
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
	    
	    List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintInFS_S) ;
	  }
	}
      }
    ;}
    break;

  case 295:
#line 2696 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 296:
#line 2705 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 298:
#line 2721 "GetDP.y"
    { if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[(2) - (3)].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) {
	if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, (yyvsp[(2) - (3)].c),
				 fcmp_GlobalQuantity_Name)) < 0)
	  vyyerror("Unknown NameOfCoef: %s", (yyvsp[(2) - (3)].c)) ;
	else {
	  ConstraintInFS_S.QuantityType   = GLOBALQUANTITY ;
	  ConstraintInFS_S.ReferenceIndex = i ;
	}
      }
      else {
	ConstraintInFS_S.QuantityType   = LOCALQUANTITY ;
	ConstraintInFS_S.ReferenceIndex = i ;
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 299:
#line 2754 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 300:
#line 2757 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 301:
#line 2760 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 302:
#line 2775 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 304:
#line 2785 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 306:
#line 2796 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 308:
#line 2807 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 309:
#line 2814 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 310:
#line 2822 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 312:
#line 2834 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 313:
#line 2840 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 314:
#line 2845 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 316:
#line 2856 "GetDP.y"
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
    ;}
    break;

  case 318:
#line 2879 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 319:
#line 2882 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 320:
#line 2886 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 321:
#line 2889 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 322:
#line 2899 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 323:
#line 2903 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 324:
#line 2911 "GetDP.y"
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
     
    ;}
    break;

  case 325:
#line 2935 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 326:
#line 2940 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 327:
#line 2946 "GetDP.y"
    { 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = (yyvsp[(3) - (5)].l) ;
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

    ;}
    break;

  case 328:
#line 3257 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 329:
#line 3262 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 330:
#line 3271 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 331:
#line 3280 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 332:
#line 3289 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 334:
#line 3297 "GetDP.y"
    {
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == LOCALQUANTITY) {
	  if ((i = List_ISearchSeq
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, (yyvsp[(2) - (3)].c),
		fcmp_SubSpace_Name)) < 0)
	    vyyerror("Unknown SubSpace: %s", (yyvsp[(2) - (3)].c)) ;
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
				   (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name)) < 0) {
	    vyyerror("Unknown GlobalQuantity: %s", (yyvsp[(2) - (3)].c)) ;
	  }
	  else {
	    DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	    List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	  }
	}
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 335:
#line 3337 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 336:
#line 3342 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 337:
#line 3347 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 338:
#line 3356 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 339:
#line 3359 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 340:
#line 3362 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 341:
#line 3365 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 342:
#line 3376 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 344:
#line 3387 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 345:
#line 3397 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 346:
#line 3407 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 347:
#line 3421 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 349:
#line 3433 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 350:
#line 3435 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 351:
#line 3437 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 352:
#line 3439 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 353:
#line 3447 "GetDP.y"
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
    ;}
    break;

  case 355:
#line 3472 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 356:
#line 3480 "GetDP.y"
    { EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = (yyvsp[(4) - (4)].l) ;

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

    ;}
    break;

  case 357:
#line 3559 "GetDP.y"
    { 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer((yyvsp[(7) - (9)].l), 0) ;

      if (List_Nbr((yyvsp[(7) - (9)].l)) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing Quantity in Equation");
      }
      else if (List_Nbr((yyvsp[(7) - (9)].l)) == 3 &&
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
      else if (List_Nbr((yyvsp[(7) - (9)].l)) == 2 &&
	       ( (WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION ) ) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = 
	  CWQ_FCT_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.BuiltInFunction_Equ = 
	  (WholeQuantity_P+1)->Case.Function.Fct ;
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
    ;}
    break;

  case 358:
#line 3613 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 359:
#line 3618 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 360:
#line 3627 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 361:
#line 3636 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 362:
#line 3641 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 363:
#line 3650 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 364:
#line 3661 "GetDP.y"
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
    ;}
    break;

  case 366:
#line 3690 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 367:
#line 3695 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 368:
#line 3703 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = (yyvsp[(4) - (4)].l) ;

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

    ;}
    break;

  case 369:
#line 3758 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = (yyvsp[(7) - (9)].t).Int1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = (yyvsp[(7) - (9)].t).Int2 ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;}
    break;

  case 370:
#line 3775 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 371:
#line 3776 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 372:
#line 3777 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 373:
#line 3778 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 374:
#line 3779 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 375:
#line 3780 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 376:
#line 3781 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 377:
#line 3782 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 378:
#line 3789 "GetDP.y"
    { (yyval.t).Int1 = Get_DefineForString(Operator_Type, (yyvsp[(2) - (4)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown Operator for discrete Quantity: %s", (yyvsp[(2) - (4)].c));
	Get_Valid_SXD(Operator_Type);
      }
      Free((yyvsp[(2) - (4)].c)) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[(3) - (4)].c),
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", (yyvsp[(3) - (4)].c)) ;
      (yyval.t).Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = (yyval.t).Int1 ;
      Quantity_Index = (yyval.t).Int2 ;

      Free((yyvsp[(3) - (4)].c)) ;
    ;}
    break;

  case 379:
#line 3810 "GetDP.y"
    { (yyval.t).Int1 = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[(2) - (3)].c),
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", (yyvsp[(2) - (3)].c)) ;
      (yyval.t).Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = (yyval.t).Int1 ;
      Quantity_Index = (yyval.t).Int2 ;

      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 380:
#line 3834 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 382:
#line 3844 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 384:
#line 3855 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 386:
#line 3867 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 387:
#line 3874 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 388:
#line 3882 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 389:
#line 3885 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 390:
#line 3887 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 392:
#line 3895 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 393:
#line 3900 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 394:
#line 3905 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 395:
#line 3914 "GetDP.y"
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
    ;}
    break;

  case 397:
#line 3934 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 398:
#line 3937 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 399:
#line 3946 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 400:
#line 3949 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 401:
#line 3954 "GetDP.y"
    { 
      if (!DefineSystem_S.OriginSystemIndex) {
	DefineSystem_S.OriginSystemIndex = (yyvsp[(2) - (3)].l) ;
      }
      else {
	for (i = 0 ; i < List_Nbr((yyvsp[(2) - (3)].l)) ; i++)
	  List_Add(DefineSystem_S.OriginSystemIndex, (int *)List_Pointer((yyvsp[(2) - (3)].l), i) ) ;
      }
    ;}
    break;

  case 402:
#line 3965 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 403:
#line 3970 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 404:
#line 3975 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 406:
#line 3986 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 407:
#line 3995 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 408:
#line 4002 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 409:
#line 4005 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 410:
#line 4017 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(1) - (1)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 411:
#line 4027 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 412:
#line 4033 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 413:
#line 4036 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 414:
#line 4048 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 415:
#line 4056 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 416:
#line 4069 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, (yyvsp[(1) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", (yyvsp[(1) - (3)].c));
	Get_Valid_SXD(Operation_Type);
      }
      Free((yyvsp[(1) - (3)].c)) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;}
    break;

  case 417:
#line 4091 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 418:
#line 4098 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 419:
#line 4104 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 420:
#line 4110 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 421:
#line 4116 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 422:
#line 4124 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, (yyvsp[(1) - (5)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", (yyvsp[(1) - (5)].c));
	Get_Valid_SXD(Operation_Type);
      }
      Free((yyvsp[(1) - (5)].c)) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (5)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (5)].c)) ;
      Free((yyvsp[(3) - (5)].c)) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;
    ;}
    break;

  case 423:
#line 4146 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 424:
#line 4153 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 425:
#line 4159 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = (yyvsp[(3) - (7)].i) ;
      Operation_P->Case.Test.Operation_True = (yyvsp[(6) - (7)].l) ;
      Operation_P->Case.Test.Operation_False = NULL ;
    ;}
    break;

  case 426:
#line 4170 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = (yyvsp[(3) - (11)].i) ;
      Operation_P->Case.Test.Operation_True = (yyvsp[(6) - (11)].l) ;
      Operation_P->Case.Test.Operation_False = (yyvsp[(10) - (11)].l) ;
    ;}
    break;

  case 427:
#line 4181 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = (yyvsp[(5) - (7)].i) ;
    ;}
    break;

  case 428:
#line 4194 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (13)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (13)].c)) ;
      Free((yyvsp[(3) - (13)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = (yyvsp[(5) - (13)].i);      
      Operation_P->Case.GenerateFMMGroups.Dfar = (yyvsp[(7) - (13)].i);
      Operation_P->Case.GenerateFMMGroups.Precision = (yyvsp[(9) - (13)].i);
      Operation_P->Case.GenerateFMMGroups.FlagDTA = (yyvsp[(11) - (13)].i);      
    ;}
    break;

  case 429:
#line 4209 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (11)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (11)].c)) ;
      Free((yyvsp[(3) - (11)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = (yyvsp[(5) - (11)].i);      
      Operation_P->Case.GenerateFMMGroups.Dfar = (yyvsp[(7) - (11)].i);
      Operation_P->Case.GenerateFMMGroups.Precision = (yyvsp[(9) - (11)].i);
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 430:
#line 4224 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = (yyvsp[(5) - (9)].i);      
      Operation_P->Case.GenerateFMMGroups.Dfar = (yyvsp[(7) - (9)].i);
      Operation_P->Case.GenerateFMMGroups.Precision = -1;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 431:
#line 4239 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr((yyvsp[(5) - (7)].l)),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr((yyvsp[(5) - (7)].l)) ; i++){
	List_Read((yyvsp[(5) - (7)].l),i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete((yyvsp[(5) - (7)].l)); 
    ;}
    break;

  case 432:
#line 4259 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLYJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr((yyvsp[(5) - (7)].l)),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr((yyvsp[(5) - (7)].l)) ; i++){
	List_Read((yyvsp[(5) - (7)].l),i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete((yyvsp[(5) - (7)].l)); 
    ;}
    break;

  case 433:
#line 4280 "GetDP.y"
    { Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = (yyvsp[(5) - (7)].i) ;
    ;}
    break;

  case 434:
#line 4292 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
    Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex =
	Num_Group(&Group_S, "OP_UpdateCst", (yyvsp[(5) - (9)].i)) ;
      Operation_P->Case.UpdateConstraint.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(7) - (9)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(7) - (9)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(7) - (9)].c)) ;
    ;}
    break;

  case 435:
#line 4312 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(5) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(5) - (9)].c)) ;
      Free((yyvsp[(5) - (9)].c)) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = (yyvsp[(7) - (9)].l);
    ;}
    break;

  case 436:
#line 4329 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(5) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(5) - (9)].c)) ;
      Free((yyvsp[(5) - (9)].c)) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = (yyvsp[(7) - (9)].d);
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    ;}
    break;

  case 437:
#line 4348 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (11)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (11)].c)) ;
      Free((yyvsp[(3) - (11)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)(yyvsp[(5) - (11)].d) ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr((yyvsp[(7) - (11)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(7) - (11)].l)) ; i++) {
	List_Read((yyvsp[(7) - (11)].l), i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete((yyvsp[(7) - (11)].l));
      Operation_P->Case.Lanczos.Shift = (yyvsp[(9) - (11)].d) ;
    ;}
    break;

  case 438:
#line 4369 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (11)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (11)].c)) ;
      Free((yyvsp[(3) - (11)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)(yyvsp[(5) - (11)].d) ;
      Operation_P->Case.EigenSolve.Shift_r = (yyvsp[(7) - (11)].d) ;
      Operation_P->Case.EigenSolve.Shift_i = (yyvsp[(9) - (11)].d) ;
    ;}
    break;

  case 439:
#line 4383 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVEJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (11)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (11)].c)) ;
      Free((yyvsp[(3) - (11)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)(yyvsp[(5) - (11)].d) ;
      Operation_P->Case.EigenSolve.Shift_r = (yyvsp[(7) - (11)].d) ;
      Operation_P->Case.EigenSolve.Shift_i = (yyvsp[(9) - (11)].d) ;
    ;}
    break;

  case 440:
#line 4397 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 441:
#line 4405 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PERTURBATION ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (17)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (17)].c)) ;
      Free((yyvsp[(3) - (17)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(5) - (17)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(5) - (17)].c)) ;
      Free((yyvsp[(5) - (17)].c)) ;
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(7) - (17)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(7) - (17)].c)) ;
      Free((yyvsp[(7) - (17)].c)) ;
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i ;
      Operation_P->Case.Perturbation.Size = (int)(yyvsp[(9) - (17)].d) ;
      Operation_P->Case.Perturbation.Save = 
	List_Create(List_Nbr((yyvsp[(11) - (17)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(11) - (17)].l)) ; i++) {
	List_Read((yyvsp[(11) - (17)].l), i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete((yyvsp[(11) - (17)].l));
      Operation_P->Case.Perturbation.Shift = (yyvsp[(13) - (17)].d) ;
      Operation_P->Case.Perturbation.PertFreq = (int)(yyvsp[(15) - (17)].d) ;
    ;}
    break;

  case 442:
#line 4439 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
      Operation_P->Case.TimeLoopTheta.Time0 = (yyvsp[(3) - (13)].d) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(5) - (13)].d) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(7) - (13)].i) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(9) - (13)].i) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(12) - (13)].l) ;
    ;}
    break;

  case 443:
#line 4452 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
      Operation_P->Case.TimeLoopNewmark.Time0 = (yyvsp[(3) - (15)].d) ; 
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(5) - (15)].d) ; 
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(7) - (15)].i) ; 
      Operation_P->Case.TimeLoopNewmark.Beta = (yyvsp[(9) - (15)].d) ; 
      Operation_P->Case.TimeLoopNewmark.Gamma = (yyvsp[(11) - (15)].d) ; 
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(14) - (15)].l) ;
    ;}
    break;

  case 444:
#line 4466 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(3) - (11)].d) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(5) - (11)].d) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(7) - (11)].i) ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(10) - (11)].l) ;
    ;}
    break;

  case 445:
#line 4479 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(3) - (13)].d) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(5) - (13)].d) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(7) - (13)].i) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(9) - (13)].d) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(12) - (13)].l) ;
    ;}
    break;

  case 446:
#line 4491 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 448:
#line 4500 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 450:
#line 4509 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", (yyvsp[(3) - (7)].i)) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = (yyvsp[(5) - (7)].i) ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    ;}
    break;

  case 451:
#line 4520 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", (yyvsp[(3) - (11)].i)) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = (yyvsp[(5) - (11)].i) ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)(yyvsp[(7) - (11)].d) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = (yyvsp[(9) - (11)].i) ; 
    ;}
    break;

  case 452:
#line 4532 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 453:
#line 4542 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 454:
#line 4550 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)(yyvsp[(7) - (9)].d) ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = (yyvsp[(5) - (9)].l) ; 
    ;}
    break;

  case 455:
#line 4563 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)(yyvsp[(5) - (9)].d) ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = (yyvsp[(7) - (9)].c) ;
    ;}
    break;

  case 456:
#line 4576 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionMHtoTime.Time = (yyvsp[(5) - (9)].l) ;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = (yyvsp[(7) - (9)].c) ;
    ;}
    break;

  case 457:
#line 4590 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 458:
#line 4600 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 459:
#line 4610 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (11)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (11)].c)) ;
      Free((yyvsp[(3) - (11)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", (yyvsp[(5) - (11)].i)) ;
      Operation_P->Case.SaveMesh.FileName = (yyvsp[(7) - (11)].c) ;
      Operation_P->Case.SaveMesh.ExprIndex = (yyvsp[(9) - (11)].i) ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 460:
#line 4624 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (9)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (9)].c)) ;
      Free((yyvsp[(3) - (9)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", (yyvsp[(5) - (9)].i)) ;
      Operation_P->Case.SaveMesh.FileName = (yyvsp[(7) - (9)].c) ;
      Operation_P->Case.SaveMesh.ExprIndex = -1 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 461:
#line 4638 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (14)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (14)].c)) ;
      Free((yyvsp[(3) - (14)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(5) - (14)].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[(5) - (14)].c)) ;
      Free((yyvsp[(5) - (14)].c)) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = (yyvsp[(7) - (14)].d) ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)(yyvsp[(9) - (14)].d) ;
      Operation_P->Case.Generate_MH_Moving.Operation = (yyvsp[(12) - (14)].l) ;
    ;}
    break;

  case 462:
#line 4657 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (14)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (14)].c)) ;
      Free((yyvsp[(3) - (14)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(5) - (14)].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[(5) - (14)].c)) ;
      Free((yyvsp[(5) - (14)].c)) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = (yyvsp[(7) - (14)].d) ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)(yyvsp[(9) - (14)].d) ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = (yyvsp[(12) - (14)].l) ;
    ;}
    break;

  case 463:
#line 4675 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = (yyvsp[(5) - (7)].d) ;
    ;}
    break;

  case 464:
#line 4686 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (12)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (12)].c)) ;
      Free((yyvsp[(3) - (12)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = (yyvsp[(5) - (12)].c) ;
      Operation_P->Case.DeformeMesh.Name_MshFile = (yyvsp[(8) - (12)].c) ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = (yyvsp[(10) - (12)].d) ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 465:
#line 4701 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (10)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (10)].c)) ;
      Free((yyvsp[(3) - (10)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = (yyvsp[(5) - (10)].c) ;
      Operation_P->Case.DeformeMesh.Name_MshFile = (yyvsp[(8) - (10)].c) ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 466:
#line 4716 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = (yyvsp[(5) - (7)].c) ;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 467:
#line 4731 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(5) - (7)].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[(5) - (7)].c)) ;
      Free((yyvsp[(5) - (7)].c)) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 468:
#line 4746 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(5) - (7)].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[(5) - (7)].c)) ;
      Free((yyvsp[(5) - (7)].c)) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 469:
#line 4761 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 470:
#line 4772 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 471:
#line 4777 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 472:
#line 4787 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 474:
#line 4797 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 475:
#line 4800 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 476:
#line 4810 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 477:
#line 4826 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 479:
#line 4842 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 480:
#line 4846 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 481:
#line 4850 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 482:
#line 4854 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 483:
#line 4859 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 484:
#line 4870 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = 0. ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = 1. ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopNewmark.Beta   = 0.25 ;
      Operation_P->Case.TimeLoopNewmark.Gamma  = 0.5 ;
      Operation_P->Case.TimeLoopNewmark.Operation = NULL ;
    ;}
    break;

  case 486:
#line 4887 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 487:
#line 4891 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 488:
#line 4895 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 489:
#line 4899 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 490:
#line 4903 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 491:
#line 4908 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 492:
#line 4919 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 494:
#line 4934 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 495:
#line 4938 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 496:
#line 4942 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 497:
#line 4946 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 498:
#line 4950 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 499:
#line 4961 "GetDP.y"
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
    ;}
    break;

  case 501:
#line 4979 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 4983 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 503:
#line 4987 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 504:
#line 4991 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 505:
#line 4996 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 506:
#line 5006 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 507:
#line 5012 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 508:
#line 5018 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 509:
#line 5028 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 510:
#line 5031 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 511:
#line 5036 "GetDP.y"
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
    ;}
    break;

  case 513:
#line 5054 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 514:
#line 5064 "GetDP.y"
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

	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[(2) - (3)].c),
				   fcmp_DefineQuantity_Name)) >= 0)
	    break ;
	}
	if (j<List_Nbr(ListOfInt_Lnew)) {
	  ChangeOfState_S.FormulationIndex = ListOfInt_P[j] ;
	  ChangeOfState_S.QuantityIndex = i ;
	}
	else
	  vyyerror("Unknown discrete Quantity: %s", (yyvsp[(2) - (3)].c)) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 515:
#line 5093 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 516:
#line 5096 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 517:
#line 5099 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 518:
#line 5107 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 519:
#line 5124 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 521:
#line 5136 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 523:
#line 5145 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 525:
#line 5158 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 526:
#line 5165 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 527:
#line 5173 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(2) - (3)].c),
			       fcmp_Formulation_Name)) < 0){
	vyyerror("Unknown Formulation: %s", (yyvsp[(2) - (3)].c)) ;
      }
      else {
	PostProcessing_S.FormulationIndex = i ;
	List_Read(Problem_S.Formulation, i, &Formulation_S) ;
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 528:
#line 5186 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 529:
#line 5191 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 530:
#line 5197 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 531:
#line 5200 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 532:
#line 5203 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 533:
#line 5209 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 535:
#line 5220 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 536:
#line 5223 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 537:
#line 5229 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 538:
#line 5234 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 539:
#line 5240 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, (yyvsp[(2) - (5)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", (yyvsp[(2) - (5)].c));
	Get_Valid_SXD(PostQuantityTerm_EvaluationType);
      }
      Free((yyvsp[(2) - (5)].c)) ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 540:
#line 5252 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 541:
#line 5257 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 543:
#line 5271 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 544:
#line 5278 "GetDP.y"
    { PostQuantityTerm_S.WholeQuantity = (yyvsp[(4) - (6)].l) ;

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

    ;}
    break;

  case 545:
#line 5306 "GetDP.y"
    { /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
     if (FlagError){
       vyyerror("Unknown type of Operation: %s", (yyvsp[(2) - (3)].c));
       Get_Valid_SXD(DefineQuantity_Type);
     }
     Free((yyvsp[(2) - (3)].c)) ;
   ;}
    break;

  case 546:
#line 5317 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 547:
#line 5322 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 548:
#line 5331 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 549:
#line 5348 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 551:
#line 5360 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 553:
#line 5367 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 555:
#line 5379 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 556:
#line 5386 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, (yyvsp[(2) - (3)].c),
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", (yyvsp[(2) - (3)].c)) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 557:
#line 5398 "GetDP.y"
    { 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 558:
#line 5409 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 559:
#line 5414 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 560:
#line 5420 "GetDP.y"
    {
      PostOperation_S.PostProcessingIndex = -1 ;
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, (yyvsp[(4) - (4)].c),
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", (yyvsp[(4) - (4)].c)) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
	if (!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation)) ;
	PostOperation_S.Name = (yyvsp[(2) - (4)].c) ;
      }
      Free((yyvsp[(4) - (4)].c)) ;
    ;}
    break;

  case 561:
#line 5437 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 562:
#line 5447 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 563:
#line 5450 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 564:
#line 5454 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 565:
#line 5467 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 566:
#line 5472 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 567:
#line 5477 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 568:
#line 5486 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 569:
#line 5495 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 570:
#line 5504 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 571:
#line 5510 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 572:
#line 5515 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 573:
#line 5523 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, (yyvsp[(1) - (3)].c), 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", (yyvsp[(1) - (3)].c)) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = (yyvsp[(2) - (3)].i) ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free((yyvsp[(1) - (3)].c)) ;
    ;}
    break;

  case 574:
#line 5535 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, (yyvsp[(1) - (6)].c), 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", (yyvsp[(1) - (6)].c)) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantitySupport[0] = (yyvsp[(2) - (6)].i) ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, (yyvsp[(4) - (6)].c), 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", (yyvsp[(4) - (6)].c)) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;
      PostSubOperation_S.PostQuantitySupport[1] = (yyvsp[(5) - (6)].i) ;

      if (((yyvsp[(2) - (6)].i)<0 && (yyvsp[(5) - (6)].i)<0) || ((yyvsp[(2) - (6)].i)>=0 && (yyvsp[(5) - (6)].i)>=0)) {
	vyyerror("Postprocessing Quantities '%s' and '%s' of same type (%s)", 
		 (yyvsp[(1) - (6)].c), (yyvsp[(4) - (6)].c), ((yyvsp[(2) - (6)].i)>0)? "with Support":"without Support") ;
      }      
      Free((yyvsp[(1) - (6)].c)) ; Free((yyvsp[(4) - (6)].c)) ;
    ;}
    break;

  case 575:
#line 5558 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 576:
#line 5559 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 577:
#line 5560 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 578:
#line 5561 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 579:
#line 5567 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 580:
#line 5569 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 581:
#line 5575 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 582:
#line 5581 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 583:
#line 5588 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 584:
#line 5597 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      if(List_Nbr((yyvsp[(4) - (12)].l))!=3 || List_Nbr((yyvsp[(7) - (12)].l))!=3 || List_Nbr((yyvsp[(10) - (12)].l))!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr((yyvsp[(4) - (12)].l)), List_Nbr((yyvsp[(7) - (12)].l)), List_Nbr((yyvsp[(10) - (12)].l)));
      else{
	List_Read((yyvsp[(4) - (12)].l), 0, &PostSubOperation_S.Case.OnSection.x[0]);
	List_Read((yyvsp[(4) - (12)].l), 1, &PostSubOperation_S.Case.OnSection.y[0]);
	List_Read((yyvsp[(4) - (12)].l), 2, &PostSubOperation_S.Case.OnSection.z[0]);
	List_Read((yyvsp[(7) - (12)].l), 0, &PostSubOperation_S.Case.OnSection.x[1]);
	List_Read((yyvsp[(7) - (12)].l), 1, &PostSubOperation_S.Case.OnSection.y[1]);
	List_Read((yyvsp[(7) - (12)].l), 2, &PostSubOperation_S.Case.OnSection.z[1]);
	List_Read((yyvsp[(10) - (12)].l), 0, &PostSubOperation_S.Case.OnSection.x[2]);
	List_Read((yyvsp[(10) - (12)].l), 1, &PostSubOperation_S.Case.OnSection.y[2]);
	List_Read((yyvsp[(10) - (12)].l), 2, &PostSubOperation_S.Case.OnSection.z[2]);
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(7) - (12)].l));
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 585:
#line 5619 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 586:
#line 5627 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = (yyvsp[(3) - (15)].i) ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = (yyvsp[(5) - (15)].i) ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = (yyvsp[(7) - (15)].i) ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = (yyvsp[(10) - (15)].l) ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = (yyvsp[(12) - (15)].l) ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = (yyvsp[(14) - (15)].l) ;
    ;}
    break;

  case 587:
#line 5638 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      if(List_Nbr((yyvsp[(3) - (4)].l))!=3)
	vyyerror("Expected {3} coordinates, got {%d}", List_Nbr((yyvsp[(3) - (4)].l)));
      else{
	List_Read((yyvsp[(3) - (4)].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[(3) - (4)].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[(3) - (4)].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 588:
#line 5652 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      if(List_Nbr((yyvsp[(4) - (12)].l))!=3 || List_Nbr((yyvsp[(7) - (12)].l))!=3)
	vyyerror("Expected {3}{3} coordinates, got {%d}{%d}", 
		 List_Nbr((yyvsp[(4) - (12)].l)), List_Nbr((yyvsp[(7) - (12)].l)));
      else{
	List_Read((yyvsp[(4) - (12)].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[(4) - (12)].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[(4) - (12)].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read((yyvsp[(7) - (12)].l), 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read((yyvsp[(7) - (12)].l), 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read((yyvsp[(7) - (12)].l), 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)(yyvsp[(11) - (12)].d) ;
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(7) - (12)].l));
    ;}
    break;

  case 589:
#line 5673 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      if(List_Nbr((yyvsp[(4) - (17)].l))!=3 || List_Nbr((yyvsp[(7) - (17)].l))!=3 || List_Nbr((yyvsp[(10) - (17)].l))!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr((yyvsp[(4) - (17)].l)), List_Nbr((yyvsp[(7) - (17)].l)), List_Nbr((yyvsp[(10) - (17)].l)));
      else{
	List_Read((yyvsp[(4) - (17)].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[(4) - (17)].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[(4) - (17)].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read((yyvsp[(7) - (17)].l), 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read((yyvsp[(7) - (17)].l), 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read((yyvsp[(7) - (17)].l), 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read((yyvsp[(10) - (17)].l), 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read((yyvsp[(10) - (17)].l), 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read((yyvsp[(10) - (17)].l), 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)(yyvsp[(14) - (17)].d) ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)(yyvsp[(16) - (17)].d) ;
      List_Delete((yyvsp[(4) - (17)].l));
      List_Delete((yyvsp[(7) - (17)].l));
      List_Delete((yyvsp[(10) - (17)].l));
    ;}
    break;

  case 590:
#line 5700 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      if(List_Nbr((yyvsp[(4) - (22)].l))!=3 || List_Nbr((yyvsp[(7) - (22)].l))!=3 || List_Nbr((yyvsp[(10) - (22)].l))!=3 || List_Nbr((yyvsp[(13) - (22)].l))!=3)
	vyyerror("Expected {3}{3}{3}{3} coordinates, got {%d}{%d}{%d}{%d}", 
		 List_Nbr((yyvsp[(4) - (22)].l)), List_Nbr((yyvsp[(7) - (22)].l)), List_Nbr((yyvsp[(10) - (22)].l)), List_Nbr((yyvsp[(13) - (22)].l)));
      else{
	List_Read((yyvsp[(4) - (22)].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[(4) - (22)].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[(4) - (22)].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read((yyvsp[(7) - (22)].l), 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read((yyvsp[(7) - (22)].l), 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read((yyvsp[(7) - (22)].l), 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read((yyvsp[(10) - (22)].l), 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read((yyvsp[(10) - (22)].l), 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read((yyvsp[(10) - (22)].l), 2, &PostSubOperation_S.Case.OnGrid.z[2]);
	List_Read((yyvsp[(13) - (22)].l), 0, &PostSubOperation_S.Case.OnGrid.x[3]);
	List_Read((yyvsp[(13) - (22)].l), 1, &PostSubOperation_S.Case.OnGrid.y[3]);
	List_Read((yyvsp[(13) - (22)].l), 2, &PostSubOperation_S.Case.OnGrid.z[3]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)(yyvsp[(17) - (22)].d) ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)(yyvsp[(19) - (22)].d) ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)(yyvsp[(21) - (22)].d) ;
      List_Delete((yyvsp[(4) - (22)].l));
      List_Delete((yyvsp[(7) - (22)].l));
      List_Delete((yyvsp[(10) - (22)].l));
      List_Delete((yyvsp[(13) - (22)].l));
    ;}
    break;

  case 591:
#line 5731 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", (yyvsp[(2) - (12)].i)) ;

      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(4) - (12)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", (yyvsp[(4) - (12)].c)) ;
      Free((yyvsp[(4) - (12)].c)) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = (yyvsp[(6) - (12)].d) ;
      PostSubOperation_S.Case.WithArgument.x[1] = (yyvsp[(8) - (12)].d) ;
      PostSubOperation_S.Case.WithArgument.n = (int)(yyvsp[(11) - (12)].d) ;
    ;}
    break;

  case 592:
#line 5751 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Comma = 0 ;
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
    ;}
    break;

  case 594:
#line 5787 "GetDP.y"
    { 
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = (yyvsp[(3) - (3)].c) ; 
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen((yyvsp[(3) - (3)].c))+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, (yyvsp[(3) - (3)].c));
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
	Free((yyvsp[(3) - (3)].c));
      }
      PostSubOperation_S.CatFile = 0 ; 
    ;}
    break;

  case 595:
#line 5801 "GetDP.y"
    { 
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = (yyvsp[(4) - (4)].c) ; 
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen((yyvsp[(4) - (4)].c))+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, (yyvsp[(4) - (4)].c));
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
	Free((yyvsp[(4) - (4)].c));
      }
      PostSubOperation_S.CatFile = 1 ; 
    ;}
    break;

  case 596:
#line 5815 "GetDP.y"
    { 
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = (yyvsp[(4) - (4)].c) ; 
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen((yyvsp[(4) - (4)].c))+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, (yyvsp[(4) - (4)].c));
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
	Free((yyvsp[(4) - (4)].c));
      }
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 597:
#line 5829 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 598:
#line 5833 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 599:
#line 5837 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 600:
#line 5841 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 601:
#line 5845 "GetDP.y"
    { 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, (yyvsp[(3) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 602:
#line 5855 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 603:
#line 5860 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 604:
#line 5865 "GetDP.y"
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
    ;}
    break;

  case 605:
#line 5885 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 606:
#line 5889 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 607:
#line 5896 "GetDP.y"
    { 
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 608:
#line 5906 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 609:
#line 5915 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 610:
#line 5924 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 611:
#line 5931 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 612:
#line 5939 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 613:
#line 5943 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 614:
#line 5952 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 615:
#line 5956 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 616:
#line 5960 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 617:
#line 5968 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 618:
#line 5974 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 619:
#line 5978 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 620:
#line 5986 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 621:
#line 5993 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 622:
#line 6001 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 623:
#line 6008 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 624:
#line 6016 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 625:
#line 6023 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 626:
#line 6031 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 627:
#line 6035 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 628:
#line 6044 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 629:
#line 6050 "GetDP.y"
    {
      i = 0 ;
      do{
	if((yyvsp[(2) - (2)].c)[i] == '%'){ 
	  i++ ; j=i ;
	  do{
	    if((yyvsp[(2) - (2)].c)[i] == '+'  || (yyvsp[(2) - (2)].c)[i] == '-'  || (yyvsp[(2) - (2)].c)[i] == '*'  || (yyvsp[(2) - (2)].c)[i] == '%'  ||
	       (yyvsp[(2) - (2)].c)[i] == '>'  || (yyvsp[(2) - (2)].c)[i] == '<'  || (yyvsp[(2) - (2)].c)[i] == '|'  || (yyvsp[(2) - (2)].c)[i] == '&'  ||
	       (yyvsp[(2) - (2)].c)[i] == '$'  || (yyvsp[(2) - (2)].c)[i] == '\'' || (yyvsp[(2) - (2)].c)[i] == '\\' || (yyvsp[(2) - (2)].c)[i] == '/'  || 
	       (yyvsp[(2) - (2)].c)[i] == '{'  ||	(yyvsp[(2) - (2)].c)[i] == '}'  || (yyvsp[(2) - (2)].c)[i] == '('  || (yyvsp[(2) - (2)].c)[i] == ')'  ||
	       (yyvsp[(2) - (2)].c)[i] == '['  || (yyvsp[(2) - (2)].c)[i] == ']'  || (yyvsp[(2) - (2)].c)[i] == '!'  || (yyvsp[(2) - (2)].c)[i] == ','  ||
	       (yyvsp[(2) - (2)].c)[i] == '^'  || (yyvsp[(2) - (2)].c)[i] == '.'  || (yyvsp[(2) - (2)].c)[i] == ';'  || (yyvsp[(2) - (2)].c)[i] == '~'  || 
	       (yyvsp[(2) - (2)].c)[i] == ' '  || (yyvsp[(2) - (2)].c)[i] == '\n' || (yyvsp[(2) - (2)].c)[i] == '\t' || (yyvsp[(2) - (2)].c)[i] == '#'  ||
               (yyvsp[(2) - (2)].c)[i] == '`'  || (yyvsp[(2) - (2)].c)[i] == ':'  ){
              break ;
            }
	    i++ ;
	  } while(i<(int)strlen((yyvsp[(2) - (2)].c))) ;
	  strncpy(tmpstr, &(yyvsp[(2) - (2)].c)[j], i-j); 
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
	  List_Add(ListOfChar_L, &(yyvsp[(2) - (2)].c)[i]);
	  i++ ;
	}
      } while (i<(int)strlen((yyvsp[(2) - (2)].c))) ;
      Free((yyvsp[(2) - (2)].c)) ;
    ;}
    break;

  case 630:
#line 6100 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (6)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (6)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[(3) - (6)].d) > (yyvsp[(5) - (6)].d)) {skip_until("For", "EndFor"); ImbricatedLoop--;}
    ;}
    break;

  case 631:
#line 6115 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (8)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (8)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(7) - (8)].d) ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(((yyvsp[(7) - (8)].d) > 0. && (yyvsp[(3) - (8)].d) > (yyvsp[(5) - (8)].d)) || ((yyvsp[(7) - (8)].d) < 0. && (yyvsp[(3) - (8)].d) < (yyvsp[(5) - (8)].d)))
	{skip_until("For", "EndFor"); ImbricatedLoop--;}
    ;}
    break;

  case 632:
#line 6131 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (8)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (8)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (8)].c) ;      
      Constant_S.Name = (yyvsp[(2) - (8)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (8)].d) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      /* hack_fsetpos_printf(); */
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[(5) - (8)].d) > (yyvsp[(7) - (8)].d)) {skip_until("For", "EndFor"); ImbricatedLoop--;}
    ;}
    break;

  case 633:
#line 6151 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (10)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (10)].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(9) - (10)].d) ;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (10)].c) ;      
      Constant_S.Name = (yyvsp[(2) - (10)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (10)].d) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(((yyvsp[(9) - (10)].d) > 0. && (yyvsp[(5) - (10)].d) > (yyvsp[(7) - (10)].d)) || ((yyvsp[(9) - (10)].d) < 0. && (yyvsp[(5) - (10)].d) < (yyvsp[(7) - (10)].d)))
	{skip_until("For", "EndFor"); ImbricatedLoop--;}
    ;}
    break;

  case 634:
#line 6171 "GetDP.y"
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
	      vyyerror("Unknown For/EndFor loop control variable %s", Constant_S.Name) ;
	    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;      
	  }
	  fsetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	  /* fsetpos() seems to position the file just after the For
	     but with one additional character (the one after EndFor)
	     at the beginning.  I do not understand why there is such
	     a mixing of two separate data. hack_fsetpos() removes the
	     useless additional character. */
	  hack_fsetpos();
	  /* hack_fsetpos_printf(); */
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	}
      }
    ;}
    break;

  case 635:
#line 6209 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 636:
#line 6213 "GetDP.y"
    {
    ;}
    break;

  case 639:
#line 6229 "GetDP.y"
    {
      Constant_S.Name = (yyvsp[(1) - (4)].c) ; 
      if(List_Nbr((yyvsp[(3) - (4)].l)) == 1){
	Constant_S.Type = VAR_FLOAT ;
	List_Read((yyvsp[(3) - (4)].l), 0, &Constant_S.Value.Float) ;
	List_Delete((yyvsp[(3) - (4)].l));
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT ;
	Constant_S.Value.ListOfFloat = (yyvsp[(3) - (4)].l);
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 640:
#line 6244 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 641:
#line 6250 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 642:
#line 6256 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 643:
#line 6262 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_LISTOFFLOAT ;

    if (!(File = fopen((yyvsp[(5) - (7)].c), "r"))) 
      Constant_S.Value.ListOfFloat = NULL ;
    else{
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
    }

    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 644:
#line 6278 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 645:
#line 6283 "GetDP.y"
    {
      Constant_S.Name = (yyvsp[(2) - (3)].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[(2) - (3)].c)) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  printf("%s: %g\n", (yyvsp[(2) - (3)].c), Constant_S.Value.Float);
	else
	  printf("%s: Dimension %d\n", (yyvsp[(2) - (3)].c), List_Nbr(Constant_S.Value.ListOfFloat));
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    printf(" (%d) %g\n", i, d);
	  }
    ;}
    break;

  case 646:
#line 6299 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 647:
#line 6304 "GetDP.y"
    {
      i = Print_ListOfDouble((yyvsp[(3) - (7)].c),(yyvsp[(5) - (7)].l),tmpstr);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstr);
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 648:
#line 6316 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6326 "GetDP.y"
    {
      Msg(INFO2, "[<return>=%g] ? ",(yyvsp[(6) - (8)].d));
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = (yyvsp[(6) - (8)].d);
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (8)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6340 "GetDP.y"
    {
      Msg(INFO, "Constants:");
      for (i=0; i<List_Nbr(ConstantTable_L); i++) {
	List_Read(ConstantTable_L, i, &Constant_S);
	switch (Constant_S.Type) {
	case VAR_FLOAT:
	  Msg(INFO, "  (%d/%d): '%s' = %g", i+1, List_Nbr(ConstantTable_L),
	      Constant_S.Name, Constant_S.Value.Float);
	  break;
	case VAR_CHAR:
	  Msg(INFO, "  (%d/%d): '%s' = '%s'", i+1, List_Nbr(ConstantTable_L),
	      Constant_S.Name, Constant_S.Value.Char);
	  break;
	default:
	  Msg(INFO, "  (%d/%d): '%s' = ...", i+1, List_Nbr(ConstantTable_L),
	      Constant_S.Name);
	  break;
	}
      }
    ;}
    break;

  case 652:
#line 6366 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 653:
#line 6372 "GetDP.y"
    {
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      for (k = 0 ; k < (int)(yyvsp[(5) - (6)].d) ; k++) {
	sprintf(tmpstr, "%s_%d", (yyvsp[(3) - (6)].c), k+1) ;
	Constant_S.Name = tmpstr ;
	if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	  Constant_S.Name = strsave(tmpstr);
	  List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
	}
      }
      Free((yyvsp[(3) - (6)].c)) ;
    ;}
    break;

  case 654:
#line 6386 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 655:
#line 6392 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 656:
#line 6402 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 657:
#line 6403 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 658:
#line 6404 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 659:
#line 6405 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 660:
#line 6406 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 661:
#line 6407 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 662:
#line 6408 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 663:
#line 6409 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 664:
#line 6410 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 665:
#line 6411 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 666:
#line 6412 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 667:
#line 6413 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 668:
#line 6414 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 669:
#line 6415 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 670:
#line 6416 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 671:
#line 6417 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 672:
#line 6418 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 673:
#line 6419 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 674:
#line 6420 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 675:
#line 6421 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 676:
#line 6422 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 677:
#line 6426 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 678:
#line 6427 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 679:
#line 6428 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 680:
#line 6429 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 681:
#line 6430 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 682:
#line 6431 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 683:
#line 6432 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 684:
#line 6433 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 685:
#line 6434 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 686:
#line 6435 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 687:
#line 6436 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 688:
#line 6437 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 689:
#line 6438 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 690:
#line 6439 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 691:
#line 6440 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 692:
#line 6441 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 693:
#line 6442 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 694:
#line 6443 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 695:
#line 6444 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 696:
#line 6445 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 697:
#line 6446 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 698:
#line 6447 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 699:
#line 6448 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 700:
#line 6449 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 701:
#line 6450 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 702:
#line 6451 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 703:
#line 6452 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 704:
#line 6453 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 705:
#line 6454 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 706:
#line 6455 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6456 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 708:
#line 6457 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6458 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 710:
#line 6459 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 711:
#line 6460 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 712:
#line 6461 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 713:
#line 6462 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 714:
#line 6463 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 715:
#line 6465 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 716:
#line 6467 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 717:
#line 6469 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 718:
#line 6471 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 719:
#line 6476 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 720:
#line 6477 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 721:
#line 6478 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 722:
#line 6479 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 723:
#line 6480 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 724:
#line 6481 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 725:
#line 6482 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 726:
#line 6484 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (1)].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", (yyvsp[(1) - (1)].c)) ;  (yyval.d) = 0. ;
      }
      else  {
	if (Constant_S.Type == VAR_FLOAT)
	  (yyval.d) = Constant_S.Value.Float ;
	else {
	  vyyerror("Single value Constant needed: %s", (yyvsp[(1) - (1)].c)) ;  (yyval.d) = 0. ;
	}
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 727:
#line 6502 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 728:
#line 6505 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 729:
#line 6511 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 730:
#line 6514 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 731:
#line 6521 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 732:
#line 6527 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 733:
#line 6530 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 734:
#line 6533 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 735:
#line 6545 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 736:
#line 6551 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      if(!(yyvsp[(5) - (5)].d) || ((yyvsp[(1) - (5)].d)<(yyvsp[(3) - (5)].d) && (yyvsp[(5) - (5)].d)<0) || ((yyvsp[(1) - (5)].d)>(yyvsp[(3) - (5)].d) && (yyvsp[(5) - (5)].d)>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", (yyvsp[(1) - (5)].d), (yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].d)) ;
	List_Add((yyval.l), &((yyvsp[(1) - (5)].d))) ;
      }
      else
	for(d=(yyvsp[(1) - (5)].d) ; ((yyvsp[(5) - (5)].d)>0)?(d<=(yyvsp[(3) - (5)].d)):(d>=(yyvsp[(3) - (5)].d)) ; d+=(yyvsp[(5) - (5)].d)) 
	  List_Add((yyval.l), &d) ;
    ;}
    break;

  case 737:
#line 6562 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = (yyvsp[(1) - (3)].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[(1) - (3)].c)) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1) ; */
	  List_Add((yyval.l), &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add((yyval.l), &d) ;
	  }
    ;}
    break;

  case 738:
#line 6578 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = (yyvsp[(1) - (4)].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[(1) - (4)].c)) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", (yyvsp[(1) - (4)].c)) ;
	else
	  for(i=0 ; i<List_Nbr((yyvsp[(3) - (4)].l)) ; i++) {
	    if(i < List_Nbr(Constant_S.Value.ListOfFloat)){
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	      List_Add((yyval.l), &d) ;
	    }
	    else{
	      d = 0.;
	      List_Add((yyval.l), &d) ;
	    }
	  }
    ;}
    break;

  case 739:
#line 6600 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = (yyvsp[(3) - (4)].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[(3) - (4)].c)) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", (yyvsp[(3) - (4)].c)) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add((yyval.l), &d) ;
	  }
    ;}
    break;

  case 740:
#line 6615 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant1_S.Name = (yyvsp[(3) - (6)].c) ; Constant2_S.Name = (yyvsp[(5) - (6)].c) ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", (yyvsp[(3) - (6)].c)) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", (yyvsp[(3) - (6)].c)) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", (yyvsp[(5) - (6)].c)) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", (yyvsp[(5) - (6)].c)) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 (yyvsp[(3) - (6)].c), List_Nbr(Constant1_S.Value.ListOfFloat),
			 (yyvsp[(5) - (6)].c), List_Nbr(Constant2_S.Value.ListOfFloat)) ;
	      }
	      else {
		for(i=0 ; i<List_Nbr(Constant1_S.Value.ListOfFloat) ; i++) {
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d) ;
		  List_Add((yyval.l), &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add((yyval.l), &d) ;
		}
	      }
	    }
	}
    ;}
    break;

  case 741:
#line 6653 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 742:
#line 6661 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 743:
#line 6673 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 744:
#line 6681 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 745:
#line 6695 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 746:
#line 6698 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 747:
#line 6705 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 748:
#line 6708 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (1)].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", (yyvsp[(1) - (1)].c)) ;  (yyval.c) = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  (yyval.c) = Constant_S.Value.Char ;
	else {
	  vyyerror("String Constant needed: %s", (yyvsp[(1) - (1)].c)) ;  (yyval.c) = NULL ;
	}
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 749:
#line 6723 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 750:
#line 6728 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 751:
#line 6733 "GetDP.y"
    {
      i = Print_ListOfDouble((yyvsp[(3) - (6)].c),(yyvsp[(5) - (6)].l),tmpstr);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else{
	(yyval.c) = (char*)Malloc((strlen(tmpstr)+1)*sizeof(char));
	strcpy((yyval.c), tmpstr);
	Free((yyvsp[(3) - (6)].c));
      }
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 752:
#line 6752 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 753:
#line 6762 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (6)].c))+strlen((yyvsp[(5) - (6)].c))+1)*sizeof(char)) ;
	strcpy((yyval.c), (yyvsp[(3) - (6)].c)) ;  strcat((yyval.c), (yyvsp[(5) - (6)].c)) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.c) = NULL ;
      }
    ;}
    break;

  case 754:
#line 6775 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;

  case 755:
#line 6787 "GetDP.y"
    {
      if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (4)].c), fcmp_Group_Name)) >= 0 ) {
	(yyval.i) = List_Nbr(((struct Group *)List_Pointer(Problem_S.Group, i))
		      ->InitialList) ;
      }
      else {
	vyyerror("Unknown Group: %s", (yyvsp[(3) - (4)].c)) ;  (yyval.i) = 0 ;
      }
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12107 "GetDP.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 6799 "GetDP.y"



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
    sprintf(tmpstr, "%s_%d", Name, Num_Index) ;
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
  else  List_Write(Problem_S.Group, i, Group_P) ; /* TODO: List_Delete()... */

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
    sprintf(tmpstr, "%s_%d", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(tmpstr, "%s_%d_%d", Name, Num_Index1,Num_Index2) ;

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


/*  A d d _ E x p r e s s i o n   */

int  Add_Expression(struct Expression * Expression_P,
		    char * Name, int Flag_Plus) {
  int  i ;

  if (!Problem_S.Expression)
    Problem_S.Expression = List_Create(50, 50, sizeof (struct Expression) ) ;

  switch (Flag_Plus) {
  case 1 :
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strsave(tmpstr) ;
    break ;
  case 2 :
    Expression_P->Name = strsave(tmpstr) ;
    break ;
  default :
    Expression_P->Name = Name ;
  }

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


