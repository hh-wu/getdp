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
     tChangeCurrentPosition = 287,
     tDefineConstant = 288,
     tPi = 289,
     t0D = 290,
     t1D = 291,
     t2D = 292,
     t3D = 293,
     tExp = 294,
     tLog = 295,
     tLog10 = 296,
     tSqrt = 297,
     tSin = 298,
     tAsin = 299,
     tCos = 300,
     tAcos = 301,
     tTan = 302,
     tAtan = 303,
     tAtan2 = 304,
     tSinh = 305,
     tCosh = 306,
     tTanh = 307,
     tFabs = 308,
     tFloor = 309,
     tCeil = 310,
     tFmod = 311,
     tModulo = 312,
     tHypot = 313,
     tSolidAngle = 314,
     tTrace = 315,
     tOrder = 316,
     tCrossProduct = 317,
     tDofValue = 318,
     tMHTransform = 319,
     tMHJacNL = 320,
     tGroup = 321,
     tDefineGroup = 322,
     tAll = 323,
     tInSupport = 324,
     tMovingBand2D = 325,
     tDefineFunction = 326,
     tConstraint = 327,
     tRegion = 328,
     tSubRegion = 329,
     tRegionRef = 330,
     tSubRegionRef = 331,
     tFilter = 332,
     tCoefficient = 333,
     tValue = 334,
     tTimeFunction = 335,
     tBranch = 336,
     tNode = 337,
     tLoop = 338,
     tNameOfResolution = 339,
     tJacobian = 340,
     tCase = 341,
     tIntegration = 342,
     tFMMIntegration = 343,
     tMatrix = 344,
     tType = 345,
     tSubType = 346,
     tCriterion = 347,
     tGeoElement = 348,
     tNumberOfPoints = 349,
     tMaxNumberOfPoints = 350,
     tNumberOfDivisions = 351,
     tMaxNumberOfDivisions = 352,
     tStoppingCriterion = 353,
     tFunctionSpace = 354,
     tName = 355,
     tBasisFunction = 356,
     tNameOfCoef = 357,
     tFunction = 358,
     tdFunction = 359,
     tSubFunction = 360,
     tSubdFunction = 361,
     tSupport = 362,
     tEntity = 363,
     tSubSpace = 364,
     tNameOfBasisFunction = 365,
     tGlobalQuantity = 366,
     tEntityType = 367,
     tEntitySubType = 368,
     tNameOfConstraint = 369,
     tFormulation = 370,
     tQuantity = 371,
     tNameOfSpace = 372,
     tIndexOfSystem = 373,
     tSymmetry = 374,
     tEquation = 375,
     tGalerkin = 376,
     tdeRham = 377,
     tGlobalTerm = 378,
     tGlobalEquation = 379,
     tDiscreteGeometry = 380,
     tDt = 381,
     tDtDof = 382,
     tDtDt = 383,
     tDtDtDof = 384,
     tJacNL = 385,
     tNeverDt = 386,
     tDtNL = 387,
     tAtAnteriorTimeStep = 388,
     tIn = 389,
     tFull_Matrix = 390,
     tResolution = 391,
     tDefineSystem = 392,
     tNameOfFormulation = 393,
     tNameOfMesh = 394,
     tFrequency = 395,
     tSolver = 396,
     tOriginSystem = 397,
     tDestinationSystem = 398,
     tOperation = 399,
     tOperationEnd = 400,
     tSetTime = 401,
     tDTime = 402,
     tSetFrequency = 403,
     tFourierTransform = 404,
     tFourierTransformJ = 405,
     tLanczos = 406,
     tEigenSolve = 407,
     tEigenSolveJac = 408,
     tPerturbation = 409,
     tUpdate = 410,
     tUpdateConstraint = 411,
     tBreak = 412,
     tEvaluate = 413,
     tSelectCorrection = 414,
     tAddCorrection = 415,
     tMultiplySolution = 416,
     tAddOppositeFullSolution = 417,
     tTimeLoopTheta = 418,
     tTime0 = 419,
     tTimeMax = 420,
     tTheta = 421,
     tTimeLoopNewmark = 422,
     tBeta = 423,
     tGamma = 424,
     tIterativeLoop = 425,
     tNbrMaxIteration = 426,
     tRelaxationFactor = 427,
     tIterativeTimeReduction = 428,
     tDivisionCoefficient = 429,
     tChangeOfState = 430,
     tChangeOfCoordinates = 431,
     tChangeOfCoordinates2 = 432,
     tSystemCommand = 433,
     tGenerateFMMGroups = 434,
     tGenerateOnly = 435,
     tGenerateOnlyJac = 436,
     tSolveJac_AdaptRelax = 437,
     tSaveSolutionExtendedMH = 438,
     tSaveSolutionMHtoTime = 439,
     tInit_MovingBand2D = 440,
     tMesh_MovingBand2D = 441,
     tGenerate_MH_Moving = 442,
     tGenerate_MH_Moving_Separate = 443,
     tAdd_MH_Moving = 444,
     tGenerateGroup = 445,
     tGenerateJacGroup = 446,
     tSaveMesh = 447,
     tDeformeMesh = 448,
     tDummyFrequency = 449,
     tPostProcessing = 450,
     tNameOfSystem = 451,
     tPostOperation = 452,
     tNameOfPostProcessing = 453,
     tUsingPost = 454,
     tAppend = 455,
     tPlot = 456,
     tPrint = 457,
     tPrintGroup = 458,
     tEcho = 459,
     tWrite = 460,
     tAdapt = 461,
     tOnGlobal = 462,
     tOnRegion = 463,
     tOnElementsOf = 464,
     tOnGrid = 465,
     tOnSection = 466,
     tOnPoint = 467,
     tOnLine = 468,
     tOnPlane = 469,
     tOnBox = 470,
     tWithArgument = 471,
     tFile = 472,
     tDepth = 473,
     tDimension = 474,
     tComma = 475,
     tTimeStep = 476,
     tHarmonicToTime = 477,
     tFormat = 478,
     tHeader = 479,
     tFooter = 480,
     tSkin = 481,
     tSmoothing = 482,
     tTarget = 483,
     tSort = 484,
     tIso = 485,
     tNoNewLine = 486,
     tDecomposeInSimplex = 487,
     tChangeOfValues = 488,
     tTimeLegend = 489,
     tFrequencyLegend = 490,
     tEigenvalueLegend = 491,
     tEvaluationPoints = 492,
     tStore = 493,
     tLastTimeStepOnly = 494,
     tStr = 495,
     tDate = 496,
     tDEF = 497,
     tOR = 498,
     tAND = 499,
     tAPPROXEQUAL = 500,
     tNOTEQUAL = 501,
     tEQUAL = 502,
     tGREATERGREATER = 503,
     tLESSLESS = 504,
     tGREATEROREQUAL = 505,
     tLESSOREQUAL = 506,
     tCROSSPRODUCT = 507,
     UNARYPREC = 508,
     tSHOW = 509
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
#define tChangeCurrentPosition 287
#define tDefineConstant 288
#define tPi 289
#define t0D 290
#define t1D 291
#define t2D 292
#define t3D 293
#define tExp 294
#define tLog 295
#define tLog10 296
#define tSqrt 297
#define tSin 298
#define tAsin 299
#define tCos 300
#define tAcos 301
#define tTan 302
#define tAtan 303
#define tAtan2 304
#define tSinh 305
#define tCosh 306
#define tTanh 307
#define tFabs 308
#define tFloor 309
#define tCeil 310
#define tFmod 311
#define tModulo 312
#define tHypot 313
#define tSolidAngle 314
#define tTrace 315
#define tOrder 316
#define tCrossProduct 317
#define tDofValue 318
#define tMHTransform 319
#define tMHJacNL 320
#define tGroup 321
#define tDefineGroup 322
#define tAll 323
#define tInSupport 324
#define tMovingBand2D 325
#define tDefineFunction 326
#define tConstraint 327
#define tRegion 328
#define tSubRegion 329
#define tRegionRef 330
#define tSubRegionRef 331
#define tFilter 332
#define tCoefficient 333
#define tValue 334
#define tTimeFunction 335
#define tBranch 336
#define tNode 337
#define tLoop 338
#define tNameOfResolution 339
#define tJacobian 340
#define tCase 341
#define tIntegration 342
#define tFMMIntegration 343
#define tMatrix 344
#define tType 345
#define tSubType 346
#define tCriterion 347
#define tGeoElement 348
#define tNumberOfPoints 349
#define tMaxNumberOfPoints 350
#define tNumberOfDivisions 351
#define tMaxNumberOfDivisions 352
#define tStoppingCriterion 353
#define tFunctionSpace 354
#define tName 355
#define tBasisFunction 356
#define tNameOfCoef 357
#define tFunction 358
#define tdFunction 359
#define tSubFunction 360
#define tSubdFunction 361
#define tSupport 362
#define tEntity 363
#define tSubSpace 364
#define tNameOfBasisFunction 365
#define tGlobalQuantity 366
#define tEntityType 367
#define tEntitySubType 368
#define tNameOfConstraint 369
#define tFormulation 370
#define tQuantity 371
#define tNameOfSpace 372
#define tIndexOfSystem 373
#define tSymmetry 374
#define tEquation 375
#define tGalerkin 376
#define tdeRham 377
#define tGlobalTerm 378
#define tGlobalEquation 379
#define tDiscreteGeometry 380
#define tDt 381
#define tDtDof 382
#define tDtDt 383
#define tDtDtDof 384
#define tJacNL 385
#define tNeverDt 386
#define tDtNL 387
#define tAtAnteriorTimeStep 388
#define tIn 389
#define tFull_Matrix 390
#define tResolution 391
#define tDefineSystem 392
#define tNameOfFormulation 393
#define tNameOfMesh 394
#define tFrequency 395
#define tSolver 396
#define tOriginSystem 397
#define tDestinationSystem 398
#define tOperation 399
#define tOperationEnd 400
#define tSetTime 401
#define tDTime 402
#define tSetFrequency 403
#define tFourierTransform 404
#define tFourierTransformJ 405
#define tLanczos 406
#define tEigenSolve 407
#define tEigenSolveJac 408
#define tPerturbation 409
#define tUpdate 410
#define tUpdateConstraint 411
#define tBreak 412
#define tEvaluate 413
#define tSelectCorrection 414
#define tAddCorrection 415
#define tMultiplySolution 416
#define tAddOppositeFullSolution 417
#define tTimeLoopTheta 418
#define tTime0 419
#define tTimeMax 420
#define tTheta 421
#define tTimeLoopNewmark 422
#define tBeta 423
#define tGamma 424
#define tIterativeLoop 425
#define tNbrMaxIteration 426
#define tRelaxationFactor 427
#define tIterativeTimeReduction 428
#define tDivisionCoefficient 429
#define tChangeOfState 430
#define tChangeOfCoordinates 431
#define tChangeOfCoordinates2 432
#define tSystemCommand 433
#define tGenerateFMMGroups 434
#define tGenerateOnly 435
#define tGenerateOnlyJac 436
#define tSolveJac_AdaptRelax 437
#define tSaveSolutionExtendedMH 438
#define tSaveSolutionMHtoTime 439
#define tInit_MovingBand2D 440
#define tMesh_MovingBand2D 441
#define tGenerate_MH_Moving 442
#define tGenerate_MH_Moving_Separate 443
#define tAdd_MH_Moving 444
#define tGenerateGroup 445
#define tGenerateJacGroup 446
#define tSaveMesh 447
#define tDeformeMesh 448
#define tDummyFrequency 449
#define tPostProcessing 450
#define tNameOfSystem 451
#define tPostOperation 452
#define tNameOfPostProcessing 453
#define tUsingPost 454
#define tAppend 455
#define tPlot 456
#define tPrint 457
#define tPrintGroup 458
#define tEcho 459
#define tWrite 460
#define tAdapt 461
#define tOnGlobal 462
#define tOnRegion 463
#define tOnElementsOf 464
#define tOnGrid 465
#define tOnSection 466
#define tOnPoint 467
#define tOnLine 468
#define tOnPlane 469
#define tOnBox 470
#define tWithArgument 471
#define tFile 472
#define tDepth 473
#define tDimension 474
#define tComma 475
#define tTimeStep 476
#define tHarmonicToTime 477
#define tFormat 478
#define tHeader 479
#define tFooter 480
#define tSkin 481
#define tSmoothing 482
#define tTarget 483
#define tSort 484
#define tIso 485
#define tNoNewLine 486
#define tDecomposeInSimplex 487
#define tChangeOfValues 488
#define tTimeLegend 489
#define tFrequencyLegend 490
#define tEigenvalueLegend 491
#define tEvaluationPoints 492
#define tStore 493
#define tLastTimeStepOnly 494
#define tStr 495
#define tDate 496
#define tDEF 497
#define tOR 498
#define tAND 499
#define tAPPROXEQUAL 500
#define tNOTEQUAL 501
#define tEQUAL 502
#define tGREATERGREATER 503
#define tLESSLESS 504
#define tGREATEROREQUAL 505
#define tLESSOREQUAL 506
#define tCROSSPRODUCT 507
#define UNARYPREC 508
#define tSHOW 509




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.126 2008-03-28 14:56:43 dular Exp $ */
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
#line 793 "GetDP.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 806 "GetDP.tab.c"

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
#define YYLAST   7837

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  277
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  762
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2100

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   509

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   261,     2,   269,   270,   259,     2,     2,
     264,   265,   257,   255,   274,   256,   268,   258,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     249,     2,   250,   243,   275,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   266,     2,   267,   263,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   272,     2,   273,   276,     2,     2,     2,
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
     235,   236,   237,   238,   239,   240,   241,   242,   244,   245,
     246,   247,   248,   251,   252,   253,   254,   260,   262,   271
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
     572,   573,   581,   588,   598,   601,   604,   607,   610,   614,
     617,   621,   623,   625,   629,   632,   636,   638,   642,   643,
     647,   654,   655,   660,   661,   664,   668,   673,   674,   679,
     680,   683,   687,   691,   696,   697,   702,   703,   706,   710,
     714,   719,   720,   725,   726,   729,   733,   737,   742,   743,
     748,   749,   752,   756,   760,   764,   768,   772,   776,   777,
     780,   784,   786,   787,   790,   794,   799,   803,   808,   814,
     815,   820,   823,   824,   827,   831,   835,   839,   843,   847,
     851,   859,   863,   867,   871,   875,   879,   887,   895,   903,
     904,   907,   911,   913,   914,   917,   920,   924,   929,   933,
     938,   943,   948,   953,   954,   959,   962,   963,   966,   970,
     974,   979,   984,   992,   996,  1000,  1004,  1008,  1009,  1010,
    1011,  1030,  1031,  1036,  1037,  1040,  1044,  1048,  1052,  1054,
    1058,  1059,  1063,  1065,  1069,  1070,  1074,  1075,  1080,  1083,
    1084,  1087,  1091,  1095,  1099,  1100,  1105,  1108,  1109,  1112,
    1116,  1120,  1124,  1128,  1129,  1132,  1136,  1138,  1139,  1142,
    1146,  1151,  1155,  1160,  1165,  1166,  1171,  1174,  1175,  1178,
    1182,  1186,  1190,  1194,  1198,  1199,  1205,  1209,  1210,  1216,
    1220,  1224,  1228,  1232,  1236,  1237,  1241,  1242,  1245,  1248,
    1253,  1258,  1263,  1268,  1269,  1272,  1276,  1280,  1284,  1285,
    1288,  1292,  1296,  1300,  1304,  1305,  1308,  1309,  1310,  1320,
    1324,  1328,  1332,  1335,  1339,  1345,  1346,  1349,  1353,  1354,
    1355,  1365,  1366,  1368,  1370,  1372,  1374,  1376,  1378,  1380,
    1385,  1389,  1390,  1393,  1397,  1399,  1400,  1403,  1407,  1412,
    1417,  1418,  1424,  1426,  1427,  1432,  1435,  1436,  1439,  1443,
    1447,  1451,  1455,  1459,  1463,  1467,  1471,  1473,  1475,  1479,
    1480,  1484,  1486,  1490,  1491,  1495,  1496,  1499,  1503,  1507,
    1512,  1517,  1522,  1527,  1533,  1539,  1542,  1550,  1562,  1570,
    1584,  1596,  1606,  1614,  1622,  1630,  1640,  1646,  1656,  1666,
    1678,  1690,  1702,  1708,  1716,  1722,  1730,  1738,  1744,  1762,
    1776,  1792,  1804,  1818,  1819,  1827,  1828,  1836,  1844,  1856,
    1862,  1868,  1878,  1888,  1898,  1904,  1910,  1922,  1932,  1947,
    1962,  1970,  1983,  1994,  2002,  2010,  2018,  2020,  2022,  2024,
    2025,  2028,  2032,  2036,  2039,  2040,  2043,  2047,  2051,  2055,
    2059,  2064,  2065,  2068,  2072,  2076,  2080,  2084,  2088,  2093,
    2094,  2097,  2101,  2105,  2109,  2113,  2118,  2119,  2122,  2126,
    2130,  2134,  2138,  2142,  2147,  2152,  2157,  2158,  2163,  2164,
    2167,  2171,  2175,  2179,  2183,  2187,  2191,  2192,  2195,  2199,
    2201,  2202,  2205,  2209,  2214,  2218,  2222,  2227,  2228,  2233,
    2236,  2237,  2240,  2244,  2249,  2250,  2256,  2262,  2265,  2266,
    2269,  2270,  2277,  2281,  2285,  2289,  2293,  2294,  2297,  2301,
    2303,  2304,  2307,  2311,  2315,  2319,  2323,  2328,  2329,  2338,
    2339,  2340,  2344,  2352,  2360,  2369,  2381,  2388,  2389,  2400,
    2402,  2406,  2413,  2415,  2417,  2419,  2421,  2422,  2426,  2428,
    2431,  2434,  2447,  2450,  2466,  2471,  2484,  2502,  2525,  2538,
    2539,  2542,  2546,  2551,  2556,  2560,  2563,  2566,  2570,  2574,
    2578,  2582,  2586,  2589,  2593,  2597,  2601,  2605,  2609,  2613,
    2617,  2623,  2626,  2629,  2633,  2643,  2647,  2650,  2660,  2663,
    2673,  2676,  2686,  2692,  2696,  2699,  2700,  2703,  2710,  2719,
    2728,  2739,  2741,  2746,  2748,  2750,  2756,  2761,  2766,  2774,
    2779,  2787,  2793,  2797,  2801,  2809,  2815,  2824,  2827,  2828,
    2832,  2839,  2845,  2851,  2853,  2855,  2857,  2859,  2861,  2863,
    2865,  2867,  2869,  2871,  2873,  2875,  2877,  2879,  2881,  2883,
    2885,  2887,  2889,  2891,  2893,  2895,  2899,  2902,  2905,  2909,
    2913,  2917,  2921,  2925,  2929,  2933,  2937,  2941,  2945,  2949,
    2953,  2957,  2961,  2966,  2971,  2976,  2981,  2986,  2991,  2996,
    3001,  3006,  3011,  3018,  3023,  3028,  3033,  3038,  3043,  3048,
    3055,  3062,  3069,  3075,  3077,  3079,  3082,  3084,  3086,  3088,
    3090,  3092,  3094,  3096,  3098,  3099,  3101,  3103,  3107,  3109,
    3111,  3115,  3119,  3123,  3129,  3133,  3138,  3143,  3150,  3159,
    3168,  3174,  3180,  3182,  3184,  3186,  3188,  3190,  3195,  3202,
    3204,  3211,  3218
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     278,     0,    -1,    -1,   279,   280,    -1,    -1,    -1,   280,
     281,   282,    -1,    66,   272,   284,   273,    -1,   103,   272,
     305,   273,    -1,    72,   272,   340,   273,    -1,    85,   272,
     325,   273,    -1,    87,   272,   331,   273,    -1,    99,   272,
     347,   273,    -1,   115,   272,   370,   273,    -1,   136,   272,
     396,   273,    -1,   195,   272,   426,   273,    -1,   197,   272,
     437,   273,    -1,   441,    -1,   454,    -1,    25,   465,    -1,
     283,    -1,    22,     7,    -1,    22,   202,     7,    -1,    22,
      24,     7,    -1,    22,    40,     7,    -1,    22,    23,     7,
      -1,    22,    22,     7,    -1,    22,     5,     7,    -1,    23,
       7,    -1,    24,     7,    -1,    24,    66,     7,    -1,    24,
     103,     7,    -1,    24,    72,     7,    -1,    24,    85,     7,
      -1,    24,    87,     7,    -1,    24,    99,     7,    -1,    24,
     115,     7,    -1,    24,   136,     7,    -1,    24,   195,     7,
      -1,    24,   197,     7,    -1,    24,     3,     7,    -1,    -1,
     284,   285,    -1,   464,   242,   289,     7,    -1,     5,   304,
     242,   289,     7,    -1,     5,   302,   242,   289,     7,    -1,
      67,   266,   300,   267,     7,    -1,   286,    -1,   464,   255,
     242,   289,     7,    -1,   454,    -1,    -1,    -1,   464,   266,
     458,   267,   242,    70,   287,   266,   269,   297,   288,   274,
     269,   297,   274,   458,   267,     7,    -1,    -1,   293,   266,
     294,   290,   295,   267,    -1,   269,   297,    -1,   289,    -1,
     464,    -1,   464,   303,    -1,    73,    -1,     5,    -1,   297,
      -1,    68,    -1,    -1,   301,   296,   297,    -1,   301,    69,
     464,    -1,     5,    -1,   299,    -1,   272,   298,   273,    -1,
      -1,   298,   301,   299,    -1,   298,   301,   256,   299,    -1,
       3,    -1,   264,   458,   265,    -1,   275,   461,   275,    -1,
       3,     8,   458,    -1,   264,   458,   265,     8,   458,    -1,
       3,     8,   458,     8,   458,    -1,   264,   458,   265,     8,
     458,     8,   458,    -1,   464,    -1,    -1,   300,   301,   464,
      -1,   300,   301,   464,   242,   272,   273,    -1,   300,   301,
     464,   272,   458,   273,    -1,   300,   301,   464,   272,   458,
     273,   242,   272,   273,    -1,    -1,   274,    -1,   272,   269,
     458,   273,    -1,    -1,   272,   273,    -1,   272,   458,   273,
      -1,    -1,   305,   306,    -1,    71,   266,   307,   267,     7,
      -1,   464,   266,   267,   242,   308,     7,    -1,   464,   266,
     291,   267,   242,   308,     7,    -1,   454,    -1,    -1,   307,
     301,     5,    -1,   307,   301,     5,   272,   458,   273,    -1,
      26,   266,   458,   267,    -1,   103,   266,     5,   267,    -1,
      -1,   309,   312,    -1,   257,   257,   257,    -1,    -1,   272,
     311,   273,    -1,   308,    -1,   311,   274,   308,    -1,    -1,
     313,   314,    -1,   317,    -1,    -1,    -1,   314,   243,   315,
     314,     8,   316,   314,    -1,   314,   257,   314,    -1,   314,
     260,   314,    -1,    62,   266,   314,   274,   314,   267,    -1,
     314,   258,   314,    -1,   314,   255,   314,    -1,   314,   256,
     314,    -1,   314,   259,   314,    -1,   314,   263,   314,    -1,
     314,   249,   314,    -1,   314,   250,   314,    -1,   314,   254,
     314,    -1,   314,   253,   314,    -1,   314,   248,   314,    -1,
     314,   247,   314,    -1,   314,   246,   314,    -1,   314,   245,
     314,    -1,   314,   244,   314,    -1,   256,   314,    -1,   255,
     314,    -1,   261,   314,    -1,   264,   314,   265,    -1,   459,
      -1,   457,   322,   324,    -1,     5,   395,    -1,   395,    -1,
     395,   322,    -1,    -1,   126,   318,   266,   312,   267,    -1,
      -1,   133,   319,   266,   312,   274,     3,   267,    -1,    -1,
      64,   266,     5,   266,   320,   312,   267,   267,   272,   458,
     273,    -1,    65,   266,     5,   267,   272,   458,   274,   458,
     273,    -1,    59,   266,   395,   267,    -1,    61,   266,   395,
     267,    -1,    -1,    60,   321,   266,   312,   274,   291,   267,
      -1,   249,     5,   250,   266,   312,   267,    -1,   249,    32,
     266,   308,   267,   250,   266,   312,   267,    -1,   270,     5,
      -1,   270,   221,    -1,   270,   147,    -1,   270,     3,    -1,
     317,   269,     3,    -1,   269,     3,    -1,   317,   271,   458,
      -1,   467,    -1,   468,    -1,   266,   268,   267,    -1,   266,
     267,    -1,   266,   323,   267,    -1,   314,    -1,   323,   274,
     314,    -1,    -1,   272,   461,   273,    -1,   272,    73,   266,
     291,   267,   273,    -1,    -1,   325,   272,   326,   273,    -1,
      -1,   326,   327,    -1,   100,     5,     7,    -1,    86,   272,
     328,   273,    -1,    -1,   328,   272,   329,   273,    -1,    -1,
     329,   330,    -1,    73,   291,     7,    -1,    73,    68,     7,
      -1,    85,     5,   324,     7,    -1,    -1,   331,   272,   332,
     273,    -1,    -1,   332,   333,    -1,   100,     5,     7,    -1,
      92,   308,     7,    -1,    86,   272,   334,   273,    -1,    -1,
     334,   272,   335,   273,    -1,    -1,   335,   336,    -1,    90,
       5,     7,    -1,    91,     5,     7,    -1,    86,   272,   337,
     273,    -1,    -1,   337,   272,   338,   273,    -1,    -1,   338,
     339,    -1,    93,     5,     7,    -1,    94,   458,     7,    -1,
      95,   458,     7,    -1,    96,   458,     7,    -1,    97,   458,
       7,    -1,    98,   458,     7,    -1,    -1,   340,   341,    -1,
     272,   342,   273,    -1,   454,    -1,    -1,   342,   343,    -1,
     100,   464,     7,    -1,   100,     5,   302,     7,    -1,    90,
       5,     7,    -1,    86,   272,   344,   273,    -1,    86,     5,
     272,   344,   273,    -1,    -1,   344,   272,   345,   273,    -1,
     344,   454,    -1,    -1,   345,   346,    -1,    90,     5,     7,
      -1,    73,   291,     7,    -1,    74,   291,     7,    -1,    80,
     308,     7,    -1,    79,   308,     7,    -1,    84,   464,     7,
      -1,    81,   272,   459,   301,   459,   273,     7,    -1,    75,
     291,     7,    -1,    76,   291,     7,    -1,   103,   308,     7,
      -1,    78,   308,     7,    -1,    77,   308,     7,    -1,   103,
     266,   308,   274,   308,   267,     7,    -1,    78,   266,   308,
     274,   308,   267,     7,    -1,    77,   266,   308,   274,   308,
     267,     7,    -1,    -1,   347,   348,    -1,   272,   349,   273,
      -1,   454,    -1,    -1,   349,   350,    -1,   349,   454,    -1,
     100,   464,     7,    -1,   100,     5,   302,     7,    -1,    90,
       5,     7,    -1,   101,   272,   351,   273,    -1,   109,   272,
     357,   273,    -1,   111,   272,   364,   273,    -1,    72,   272,
     367,   273,    -1,    -1,   351,   272,   352,   273,    -1,   351,
     454,    -1,    -1,   352,   353,    -1,   100,     5,     7,    -1,
     102,     5,     7,    -1,   102,     5,   302,     7,    -1,   103,
       5,   354,     7,    -1,   104,   272,     5,   301,     5,   273,
       7,    -1,   105,   310,     7,    -1,   106,   310,     7,    -1,
     107,   291,     7,    -1,   108,   291,     7,    -1,    -1,    -1,
      -1,   272,   116,     5,     7,   115,     5,   302,     7,   355,
      66,   292,     7,   356,   136,     5,   303,     7,   273,    -1,
      -1,   357,   272,   358,   273,    -1,    -1,   358,   359,    -1,
     100,     5,     7,    -1,   110,   360,     7,    -1,   102,   362,
       7,    -1,     5,    -1,   272,   361,   273,    -1,    -1,   361,
     301,     5,    -1,     5,    -1,   272,   363,   273,    -1,    -1,
     363,   301,     5,    -1,    -1,   364,   272,   365,   273,    -1,
     364,   454,    -1,    -1,   365,   366,    -1,   100,   464,     7,
      -1,    90,     5,     7,    -1,   102,     5,     7,    -1,    -1,
     367,   272,   368,   273,    -1,   367,   454,    -1,    -1,   368,
     369,    -1,   102,     5,     7,    -1,   112,   293,     7,    -1,
     113,   296,     7,    -1,   114,   464,     7,    -1,    -1,   370,
     371,    -1,   272,   372,   273,    -1,   454,    -1,    -1,   372,
     373,    -1,   100,   464,     7,    -1,   100,     5,   302,     7,
      -1,    90,     5,     7,    -1,   116,   272,   374,   273,    -1,
     120,   272,   380,   273,    -1,    -1,   374,   272,   375,   273,
      -1,   374,   454,    -1,    -1,   375,   376,    -1,   100,   464,
       7,    -1,    90,   111,     7,    -1,    90,   121,     7,    -1,
      90,     5,     7,    -1,   194,   460,     7,    -1,    -1,   117,
     464,   377,   379,     7,    -1,   118,   458,     7,    -1,    -1,
     266,   378,   312,   267,     7,    -1,   134,   291,     7,    -1,
      87,     5,     7,    -1,    88,     5,     7,    -1,    85,     5,
       7,    -1,   119,     3,     7,    -1,    -1,   266,   464,   267,
      -1,    -1,   380,   381,    -1,   380,   454,    -1,   121,   272,
     386,   273,    -1,   122,   272,   386,   273,    -1,   123,   272,
     390,   273,    -1,   124,   272,   382,   273,    -1,    -1,   382,
     383,    -1,    90,     5,     7,    -1,   114,     5,     7,    -1,
     272,   384,   273,    -1,    -1,   384,   385,    -1,    82,   395,
       7,    -1,    83,   395,     7,    -1,   120,   395,     7,    -1,
     134,   291,     7,    -1,    -1,   386,   387,    -1,    -1,    -1,
     394,   266,   388,   312,   389,   274,   312,   267,     7,    -1,
     134,   291,     7,    -1,    85,     5,     7,    -1,    87,     5,
       7,    -1,   135,     7,    -1,    88,     5,     7,    -1,    89,
     266,     3,   267,     7,    -1,    -1,   390,   391,    -1,   134,
     291,     7,    -1,    -1,    -1,   394,   266,   392,   312,   393,
     274,   395,   267,     7,    -1,    -1,   126,    -1,   127,    -1,
     128,    -1,   129,    -1,   130,    -1,   131,    -1,   132,    -1,
     272,     5,   464,   273,    -1,   272,   464,   273,    -1,    -1,
     396,   397,    -1,   272,   398,   273,    -1,   454,    -1,    -1,
     398,   399,    -1,   100,   464,     7,    -1,   100,     5,   302,
       7,    -1,   137,   272,   401,   273,    -1,    -1,   144,   400,
     272,   408,   273,    -1,   454,    -1,    -1,   401,   272,   402,
     273,    -1,   401,   454,    -1,    -1,   402,   403,    -1,   100,
     464,     7,    -1,    90,     5,     7,    -1,   138,   404,     7,
      -1,   139,   465,     7,    -1,   142,   406,     7,    -1,   143,
     464,     7,    -1,   140,   460,     7,    -1,   141,   465,     7,
      -1,   454,    -1,   464,    -1,   272,   405,   273,    -1,    -1,
     405,   301,   464,    -1,   464,    -1,   272,   407,   273,    -1,
      -1,   407,   301,   464,    -1,    -1,   408,   409,    -1,     5,
     464,     7,    -1,   146,   308,     7,    -1,   163,   272,   415,
     273,    -1,   167,   272,   417,   273,    -1,   170,   272,   419,
     273,    -1,   173,   272,   421,   273,    -1,     5,   266,   464,
     267,     7,    -1,   146,   266,   308,   267,     7,    -1,   157,
       7,    -1,    18,   266,   308,   267,   272,   408,   273,    -1,
      18,   266,   308,   267,   272,   408,   273,    19,   272,   408,
     273,    -1,   148,   266,   464,   274,   308,   267,     7,    -1,
     179,   266,   464,   274,   308,   274,   308,   274,   308,   274,
     308,   267,     7,    -1,   179,   266,   464,   274,   308,   274,
     308,   274,   308,   267,     7,    -1,   179,   266,   464,   274,
     308,   274,   308,   267,     7,    -1,   180,   266,   464,   274,
     460,   267,     7,    -1,   181,   266,   464,   274,   460,   267,
       7,    -1,   155,   266,   464,   274,   308,   267,     7,    -1,
     156,   266,   464,   274,   291,   274,   464,   267,     7,    -1,
     156,   266,   464,   267,     7,    -1,   149,   266,   464,   274,
     464,   274,   460,   267,     7,    -1,   150,   266,   464,   274,
     464,   274,   458,   267,     7,    -1,   151,   266,   464,   274,
     458,   274,   460,   274,   458,   267,     7,    -1,   152,   266,
     464,   274,   458,   274,   458,   274,   458,   267,     7,    -1,
     153,   266,   464,   274,   458,   274,   458,   274,   458,   267,
       7,    -1,   158,   266,   308,   267,     7,    -1,   159,   266,
     464,   274,   458,   267,     7,    -1,   160,   266,   464,   267,
       7,    -1,   160,   266,   464,   274,   458,   267,     7,    -1,
     161,   266,   464,   274,   458,   267,     7,    -1,   162,   266,
     464,   267,     7,    -1,   154,   266,   464,   274,   464,   274,
     464,   274,   458,   274,   460,   274,   458,   274,   458,   267,
       7,    -1,   163,   266,   458,   274,   458,   274,   308,   274,
     308,   267,   272,   408,   273,    -1,   167,   266,   458,   274,
     458,   274,   308,   274,   458,   274,   458,   267,   272,   408,
     273,    -1,   170,   266,   458,   274,   458,   274,   308,   267,
     272,   408,   273,    -1,   170,   266,   458,   274,   458,   274,
     308,   274,   458,   267,   272,   408,   273,    -1,    -1,   202,
     410,   266,   412,   413,   267,     7,    -1,    -1,   205,   411,
     266,   412,   413,   267,     7,    -1,   176,   266,   291,   274,
     308,   267,     7,    -1,   176,   266,   291,   274,   308,   274,
     458,   274,   308,   267,     7,    -1,   197,   266,   464,   267,
       7,    -1,   178,   266,   465,   267,     7,    -1,   182,   266,
     464,   274,   460,   274,   458,   267,     7,    -1,   183,   266,
     464,   274,   458,   274,   465,   267,     7,    -1,   184,   266,
     464,   274,   460,   274,   465,   267,     7,    -1,   185,   272,
     464,   273,     7,    -1,   186,   272,   464,   273,     7,    -1,
     192,   272,   464,   274,   291,   274,   465,   274,   308,   273,
       7,    -1,   192,   272,   464,   274,   291,   274,   465,   273,
       7,    -1,   187,   266,   464,   274,   464,   274,   458,   274,
     458,   267,   272,   408,   273,     7,    -1,   188,   266,   464,
     274,   464,   274,   458,   274,   458,   267,   272,   408,   273,
       7,    -1,   189,   266,   464,   274,   458,   267,     7,    -1,
     193,   272,     5,   274,     5,   274,   139,   465,   274,   458,
     273,     7,    -1,   193,   272,     5,   274,     5,   274,   139,
     465,   273,     7,    -1,   193,   272,     5,   274,     5,   273,
       7,    -1,   190,   266,   464,   274,   464,   267,     7,    -1,
     191,   266,   464,   274,   464,   267,     7,    -1,   454,    -1,
     310,    -1,   464,    -1,    -1,   413,   414,    -1,   274,   217,
     465,    -1,   274,   221,   460,    -1,   274,   460,    -1,    -1,
     415,   416,    -1,   164,   458,     7,    -1,   165,   458,     7,
      -1,   147,   308,     7,    -1,   166,   308,     7,    -1,   144,
     272,   408,   273,    -1,    -1,   417,   418,    -1,   164,   458,
       7,    -1,   165,   458,     7,    -1,   147,   308,     7,    -1,
     168,   458,     7,    -1,   169,   458,     7,    -1,   144,   272,
     408,   273,    -1,    -1,   419,   420,    -1,   171,   458,     7,
      -1,    92,   458,     7,    -1,   172,   308,     7,    -1,    21,
     458,     7,    -1,   144,   272,   408,   273,    -1,    -1,   421,
     422,    -1,   171,   458,     7,    -1,   174,   458,     7,    -1,
      92,   458,     7,    -1,    21,   458,     7,    -1,   137,   464,
       7,    -1,   175,   272,   423,   273,    -1,   144,   272,   408,
     273,    -1,   145,   272,   408,   273,    -1,    -1,   423,   272,
     424,   273,    -1,    -1,   424,   425,    -1,    90,     5,     7,
      -1,   116,     5,     7,    -1,   134,   291,     7,    -1,    92,
     458,     7,    -1,   103,   308,     7,    -1,    21,     5,     7,
      -1,    -1,   426,   427,    -1,   272,   428,   273,    -1,   454,
      -1,    -1,   428,   429,    -1,   100,   464,     7,    -1,   100,
       5,   302,     7,    -1,   138,   464,     7,    -1,   196,   464,
       7,    -1,   116,   272,   430,   273,    -1,    -1,   430,   272,
     431,   273,    -1,   430,   454,    -1,    -1,   431,   432,    -1,
     100,   464,     7,    -1,    79,   272,   433,   273,    -1,    -1,
     433,   121,   272,   434,   273,    -1,   433,     5,   272,   434,
     273,    -1,   433,   454,    -1,    -1,   434,   435,    -1,    -1,
     394,   266,   436,   312,   267,     7,    -1,    90,     5,     7,
      -1,   134,   291,     7,    -1,    85,     5,     7,    -1,    87,
       5,     7,    -1,    -1,   437,   438,    -1,   272,   439,   273,
      -1,   454,    -1,    -1,   439,   440,    -1,   100,   464,     7,
      -1,   198,   464,     7,    -1,   223,     5,     7,    -1,   200,
     465,     7,    -1,   144,   272,   443,   273,    -1,    -1,   197,
     464,   199,   464,   442,   272,   443,   273,    -1,    -1,    -1,
     443,   444,   445,    -1,   201,   266,   447,   450,   451,   267,
       7,    -1,   202,   266,   447,   450,   451,   267,     7,    -1,
     202,   266,     6,   274,   308,   451,   267,     7,    -1,   202,
     266,     6,   274,   240,   266,   465,   267,   451,   267,     7,
      -1,   204,   266,     6,   451,   267,     7,    -1,    -1,   203,
     266,   291,   446,   274,   134,   291,   451,   267,     7,    -1,
     454,    -1,   464,   449,   274,    -1,   464,   449,   448,     5,
     449,   274,    -1,   257,    -1,   258,    -1,   255,    -1,   256,
      -1,    -1,   266,   291,   267,    -1,   207,    -1,   208,   291,
      -1,   209,   291,    -1,   211,   272,   272,   461,   273,   272,
     461,   273,   272,   461,   273,   273,    -1,   210,   291,    -1,
     210,   272,   308,   274,   308,   274,   308,   273,   272,   460,
     274,   460,   274,   460,   273,    -1,   212,   272,   461,   273,
      -1,   213,   272,   272,   461,   273,   272,   461,   273,   273,
     272,   458,   273,    -1,   214,   272,   272,   461,   273,   272,
     461,   273,   272,   461,   273,   273,   272,   458,   274,   458,
     273,    -1,   215,   272,   272,   461,   273,   272,   461,   273,
     272,   461,   273,   272,   461,   273,   273,   272,   458,   274,
     458,   274,   458,   273,    -1,   208,   291,   216,     5,   272,
     458,   274,   458,   273,   272,   458,   273,    -1,    -1,   451,
     452,    -1,   274,   217,   465,    -1,   274,   217,   250,   465,
      -1,   274,   217,   251,   465,    -1,   274,   218,   458,    -1,
     274,   226,    -1,   274,   227,    -1,   274,   222,   458,    -1,
     274,   223,     5,    -1,   274,   224,   453,    -1,   274,   225,
     453,    -1,   274,   223,   453,    -1,   274,   220,    -1,   274,
     219,   458,    -1,   274,   221,   460,    -1,   274,   206,     5,
      -1,   274,   229,     5,    -1,   274,   228,   458,    -1,   274,
      79,   460,    -1,   274,   230,   458,    -1,   274,   230,   272,
     461,   273,    -1,   274,   231,    -1,   274,   232,    -1,   274,
     140,   460,    -1,   274,   176,   272,   308,   274,   308,   274,
     308,   273,    -1,   274,   233,   310,    -1,   274,   234,    -1,
     274,   234,   272,   458,   274,   458,   274,   458,   273,    -1,
     274,   235,    -1,   274,   235,   272,   458,   274,   458,   274,
     458,   273,    -1,   274,   236,    -1,   274,   236,   272,   458,
     274,   458,   274,   458,   273,    -1,   274,   237,   272,   461,
     273,    -1,   274,   238,     3,    -1,   274,   239,    -1,    -1,
     453,     6,    -1,    16,   264,   458,     8,   458,   265,    -1,
      16,   264,   458,     8,   458,     8,   458,   265,    -1,    16,
       5,   134,   272,   458,     8,   458,   273,    -1,    16,     5,
     134,   272,   458,     8,   458,     8,   458,   273,    -1,    17,
      -1,    18,   264,   458,   265,    -1,    20,    -1,   455,    -1,
      33,   266,   456,   267,     7,    -1,   464,   242,   460,     7,
      -1,   464,   242,     6,     7,    -1,   464,   242,   240,   266,
     465,   267,     7,    -1,   464,   242,   466,     7,    -1,   464,
     242,    31,   266,   465,   267,     7,    -1,    11,   264,     6,
     265,     7,    -1,    11,   464,     7,    -1,    11,   269,     7,
      -1,    11,   264,     6,   274,   461,   265,     7,    -1,    12,
     264,   464,   265,     7,    -1,    12,   264,   464,   265,   266,
     458,   267,     7,    -1,    13,     7,    -1,    -1,   456,   301,
     464,    -1,   456,   301,   464,   272,   458,   273,    -1,   456,
     301,   464,   242,   458,    -1,   456,   301,   464,   242,     6,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,   464,    -1,   459,    -1,   264,   458,   265,    -1,   256,
     458,    -1,   261,   458,    -1,   458,   256,   458,    -1,   458,
     255,   458,    -1,   458,   257,   458,    -1,   458,   258,   458,
      -1,   458,   259,   458,    -1,   458,   263,   458,    -1,   458,
     249,   458,    -1,   458,   250,   458,    -1,   458,   254,   458,
      -1,   458,   253,   458,    -1,   458,   248,   458,    -1,   458,
     247,   458,    -1,   458,   245,   458,    -1,   458,   244,   458,
      -1,    39,   266,   458,   267,    -1,    40,   266,   458,   267,
      -1,    41,   266,   458,   267,    -1,    42,   266,   458,   267,
      -1,    43,   266,   458,   267,    -1,    44,   266,   458,   267,
      -1,    45,   266,   458,   267,    -1,    46,   266,   458,   267,
      -1,    47,   266,   458,   267,    -1,    48,   266,   458,   267,
      -1,    49,   266,   458,   274,   458,   267,    -1,    50,   266,
     458,   267,    -1,    51,   266,   458,   267,    -1,    52,   266,
     458,   267,    -1,    53,   266,   458,   267,    -1,    54,   266,
     458,   267,    -1,    55,   266,   458,   267,    -1,    56,   266,
     458,   274,   458,   267,    -1,    57,   266,   458,   274,   458,
     267,    -1,    58,   266,   458,   274,   458,   267,    -1,   458,
     243,   458,     8,   458,    -1,   467,    -1,   468,    -1,   458,
     269,    -1,     4,    -1,     3,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,   464,    -1,    -1,   458,
      -1,   462,    -1,   272,   461,   273,    -1,   458,    -1,   462,
      -1,   461,   274,   458,    -1,   461,   274,   462,    -1,   458,
       8,   458,    -1,   458,     8,   458,     8,   458,    -1,     5,
     272,   273,    -1,     5,   272,   461,   273,    -1,    27,   266,
       5,   267,    -1,    28,   266,     5,   274,     5,   267,    -1,
      29,   266,   458,   274,   458,   274,   458,   267,    -1,    30,
     266,   458,   274,   458,   274,   458,   267,    -1,     5,   276,
     272,   458,   273,    -1,   463,   276,   272,   458,   273,    -1,
       5,    -1,   463,    -1,     6,    -1,   464,    -1,   466,    -1,
      10,   264,   465,   265,    -1,    10,   264,   465,   274,   461,
     265,    -1,   241,    -1,     9,   266,   465,   274,   465,   267,
      -1,    14,   266,   465,   274,   465,   267,    -1,    15,   266,
     464,   267,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   343,   343,   343,   379,   383,   382,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   401,   403,   406,
     411,   421,   423,   425,   427,   429,   431,   433,   435,   437,
     439,   441,   443,   445,   447,   449,   451,   453,   455,   457,
     459,   485,   488,   494,   497,   503,   509,   511,   513,   516,
     522,   532,   521,   549,   548,   565,   576,   581,   598,   628,
     631,   644,   645,   652,   654,   657,   675,   688,   695,   703,
     707,   714,   725,   731,   738,   749,   758,   766,   780,   793,
     828,   832,   842,   853,   868,   889,   889,   894,   900,   901,
     906,   914,   917,   922,   924,   944,   988,   992,   995,  1005,
    1028,  1034,  1041,  1041,  1048,  1056,  1060,  1066,  1069,  1076,
    1076,  1089,  1092,  1105,  1091,  1133,  1139,  1145,  1151,  1157,
    1163,  1169,  1175,  1181,  1187,  1193,  1199,  1205,  1211,  1217,
    1223,  1229,  1236,  1242,  1244,  1255,  1257,  1263,  1337,  1371,
    1380,  1393,  1392,  1407,  1406,  1421,  1420,  1436,  1448,  1454,
    1461,  1460,  1491,  1517,  1527,  1540,  1546,  1553,  1559,  1566,
    1573,  1580,  1586,  1596,  1597,  1598,  1603,  1604,  1610,  1612,
    1615,  1631,  1635,  1643,  1645,  1651,  1656,  1664,  1666,  1674,
    1677,  1683,  1686,  1689,  1728,  1733,  1741,  1747,  1753,  1760,
    1763,  1771,  1773,  1781,  1786,  1792,  1802,  1812,  1820,  1822,
    1830,  1839,  1845,  1893,  1896,  1899,  1902,  1905,  1917,  1921,
    1926,  1931,  1937,  1943,  1949,  1956,  1964,  1973,  1976,  1995,
    1999,  2004,  2014,  2021,  2027,  2037,  2042,  2048,  2053,  2061,
    2069,  2078,  2096,  2105,  2113,  2121,  2131,  2141,  2151,  2172,
    2177,  2182,  2187,  2194,  2199,  2201,  2207,  2214,  2222,  2231,
    2234,  2237,  2240,  2248,  2253,  2270,  2280,  2294,  2300,  2303,
    2308,  2313,  2327,  2347,  2352,  2357,  2362,  2391,  2397,  2401,
    2395,  2475,  2480,  2490,  2494,  2500,  2507,  2510,  2517,  2533,
    2540,  2542,  2561,  2573,  2581,  2585,  2601,  2606,  2612,  2622,
    2627,  2633,  2640,  2651,  2666,  2670,  2707,  2717,  2726,  2732,
    2765,  2768,  2771,  2787,  2791,  2796,  2801,  2808,  2812,  2818,
    2825,  2833,  2843,  2845,  2852,  2856,  2861,  2868,  2884,  2890,
    2893,  2897,  2900,  2910,  2915,  2914,  2946,  2952,  2951,  3268,
    3273,  3282,  3291,  3300,  3305,  3308,  3349,  3353,  3358,  3367,
    3370,  3373,  3376,  3388,  3393,  3398,  3408,  3418,  3433,  3439,
    3444,  3446,  3448,  3450,  3459,  3477,  3484,  3492,  3483,  3624,
    3629,  3638,  3647,  3652,  3661,  3673,  3687,  3701,  3707,  3715,
    3706,  3787,  3788,  3789,  3790,  3791,  3792,  3793,  3794,  3800,
    3821,  3846,  3850,  3855,  3860,  3867,  3872,  3878,  3885,  3893,
    3897,  3896,  3901,  3907,  3911,  3916,  3926,  3939,  3945,  3948,
    3957,  3960,  3965,  3976,  3981,  3986,  3991,  3997,  4006,  4014,
    4016,  4028,  4038,  4045,  4047,  4060,  4067,  4080,  4102,  4109,
    4115,  4121,  4127,  4135,  4157,  4164,  4170,  4181,  4193,  4206,
    4221,  4236,  4251,  4271,  4292,  4304,  4324,  4337,  4354,  4373,
    4394,  4408,  4422,  4429,  4441,  4453,  4465,  4477,  4488,  4522,
    4535,  4549,  4562,  4576,  4575,  4585,  4584,  4593,  4604,  4616,
    4626,  4634,  4647,  4660,  4674,  4684,  4694,  4708,  4722,  4740,
    4759,  4770,  4785,  4800,  4815,  4830,  4845,  4856,  4861,  4872,
    4877,  4881,  4884,  4894,  4911,  4920,  4926,  4930,  4934,  4938,
    4943,  4955,  4965,  4971,  4975,  4979,  4983,  4987,  4992,  5004,
    5013,  5018,  5022,  5026,  5030,  5034,  5046,  5058,  5063,  5067,
    5071,  5075,  5080,  5090,  5096,  5102,  5113,  5115,  5121,  5133,
    5138,  5148,  5177,  5180,  5183,  5191,  5209,  5215,  5220,  5225,
    5230,  5238,  5242,  5249,  5257,  5270,  5275,  5282,  5284,  5287,
    5294,  5299,  5304,  5307,  5314,  5318,  5324,  5336,  5342,  5351,
    5356,  5355,  5390,  5401,  5406,  5415,  5433,  5439,  5444,  5447,
    5452,  5459,  5463,  5470,  5482,  5493,  5498,  5505,  5504,  5532,
    5535,  5534,  5551,  5556,  5561,  5570,  5579,  5589,  5588,  5599,
    5607,  5619,  5643,  5644,  5645,  5646,  5652,  5653,  5659,  5665,
    5672,  5679,  5703,  5710,  5722,  5735,  5755,  5781,  5814,  5836,
    5867,  5871,  5885,  5899,  5913,  5917,  5921,  5925,  5929,  5939,
    5944,  5949,  5969,  5973,  5980,  5990,  5999,  6008,  6015,  6023,
    6027,  6036,  6040,  6044,  6052,  6058,  6062,  6070,  6077,  6085,
    6092,  6100,  6107,  6115,  6119,  6129,  6134,  6184,  6199,  6215,
    6235,  6255,  6293,  6297,  6301,  6311,  6313,  6328,  6334,  6340,
    6346,  6362,  6367,  6383,  6388,  6400,  6410,  6424,  6447,  6450,
    6456,  6470,  6476,  6487,  6488,  6489,  6490,  6491,  6492,  6493,
    6494,  6495,  6496,  6497,  6498,  6499,  6500,  6501,  6502,  6503,
    6504,  6505,  6506,  6507,  6511,  6512,  6513,  6514,  6515,  6516,
    6517,  6518,  6519,  6520,  6521,  6522,  6523,  6524,  6525,  6526,
    6527,  6528,  6529,  6530,  6531,  6532,  6533,  6534,  6535,  6536,
    6537,  6538,  6539,  6540,  6541,  6542,  6543,  6544,  6545,  6546,
    6547,  6548,  6550,  6552,  6554,  6556,  6561,  6562,  6563,  6564,
    6565,  6566,  6567,  6568,  6587,  6589,  6595,  6598,  6605,  6611,
    6614,  6617,  6629,  6635,  6646,  6662,  6684,  6699,  6737,  6745,
    6757,  6765,  6779,  6782,  6789,  6792,  6807,  6812,  6817,  6836,
    6846,  6859,  6871
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
  "tListFromFile", "tChangeCurrentPosition", "tDefineConstant", "tPi",
  "t0D", "t1D", "t2D", "t3D", "tExp", "tLog", "tLog10", "tSqrt", "tSin",
  "tAsin", "tCos", "tAcos", "tTan", "tAtan", "tAtan2", "tSinh", "tCosh",
  "tTanh", "tFabs", "tFloor", "tCeil", "tFmod", "tModulo", "tHypot",
  "tSolidAngle", "tTrace", "tOrder", "tCrossProduct", "tDofValue",
  "tMHTransform", "tMHJacNL", "tGroup", "tDefineGroup", "tAll",
  "tInSupport", "tMovingBand2D", "tDefineFunction", "tConstraint",
  "tRegion", "tSubRegion", "tRegionRef", "tSubRegionRef", "tFilter",
  "tCoefficient", "tValue", "tTimeFunction", "tBranch", "tNode", "tLoop",
  "tNameOfResolution", "tJacobian", "tCase", "tIntegration",
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
  "tBreak", "tEvaluate", "tSelectCorrection", "tAddCorrection",
  "tMultiplySolution", "tAddOppositeFullSolution", "tTimeLoopTheta",
  "tTime0", "tTimeMax", "tTheta", "tTimeLoopNewmark", "tBeta", "tGamma",
  "tIterativeLoop", "tNbrMaxIteration", "tRelaxationFactor",
  "tIterativeTimeReduction", "tDivisionCoefficient", "tChangeOfState",
  "tChangeOfCoordinates", "tChangeOfCoordinates2", "tSystemCommand",
  "tGenerateFMMGroups", "tGenerateOnly", "tGenerateOnlyJac",
  "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH",
  "tSaveSolutionMHtoTime", "tInit_MovingBand2D", "tMesh_MovingBand2D",
  "tGenerate_MH_Moving", "tGenerate_MH_Moving_Separate", "tAdd_MH_Moving",
  "tGenerateGroup", "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh",
  "tDummyFrequency", "tPostProcessing", "tNameOfSystem", "tPostOperation",
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,    63,   498,   499,   500,   501,   502,    60,
      62,   503,   504,   505,   506,    43,    45,    42,    47,    37,
     507,    33,   508,    94,    40,    41,    91,    93,    46,    35,
      36,   509,   123,   125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   277,   279,   278,   280,   281,   280,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   284,   284,   285,   285,   285,   285,   285,   285,   285,
     287,   288,   286,   290,   289,   289,   291,   291,   292,   293,
     293,   294,   294,   295,   295,   295,   296,   297,   297,   298,
     298,   298,   299,   299,   299,   299,   299,   299,   299,   299,
     300,   300,   300,   300,   300,   301,   301,   302,   303,   303,
     304,   305,   305,   306,   306,   306,   306,   307,   307,   307,
     308,   308,   309,   308,   308,   310,   310,   311,   311,   313,
     312,   314,   315,   316,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   317,   317,   317,   317,   317,
     317,   318,   317,   319,   317,   320,   317,   317,   317,   317,
     321,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   322,   322,   322,   323,   323,   324,   324,
     324,   325,   325,   326,   326,   327,   327,   328,   328,   329,
     329,   330,   330,   330,   331,   331,   332,   332,   333,   333,
     333,   334,   334,   335,   335,   336,   336,   336,   337,   337,
     338,   338,   339,   339,   339,   339,   339,   339,   340,   340,
     341,   341,   342,   342,   343,   343,   343,   343,   343,   344,
     344,   344,   345,   345,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   347,
     347,   348,   348,   349,   349,   349,   350,   350,   350,   350,
     350,   350,   350,   351,   351,   351,   352,   352,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   354,   355,   356,
     354,   357,   357,   358,   358,   359,   359,   359,   360,   360,
     361,   361,   362,   362,   363,   363,   364,   364,   364,   365,
     365,   366,   366,   366,   367,   367,   367,   368,   368,   369,
     369,   369,   369,   370,   370,   371,   371,   372,   372,   373,
     373,   373,   373,   373,   374,   374,   374,   375,   375,   376,
     376,   376,   376,   376,   377,   376,   376,   378,   376,   376,
     376,   376,   376,   376,   379,   379,   380,   380,   380,   381,
     381,   381,   381,   382,   382,   383,   383,   383,   384,   384,
     385,   385,   385,   385,   386,   386,   388,   389,   387,   387,
     387,   387,   387,   387,   387,   390,   390,   391,   392,   393,
     391,   394,   394,   394,   394,   394,   394,   394,   394,   395,
     395,   396,   396,   397,   397,   398,   398,   399,   399,   399,
     400,   399,   399,   401,   401,   401,   402,   402,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   404,   404,   405,
     405,   406,   406,   407,   407,   408,   408,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   410,   409,   411,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   412,   412,   413,
     413,   414,   414,   414,   415,   415,   416,   416,   416,   416,
     416,   417,   417,   418,   418,   418,   418,   418,   418,   419,
     419,   420,   420,   420,   420,   420,   421,   421,   422,   422,
     422,   422,   422,   422,   422,   422,   423,   423,   424,   424,
     425,   425,   425,   425,   425,   425,   426,   426,   427,   427,
     428,   428,   429,   429,   429,   429,   429,   430,   430,   430,
     431,   431,   432,   432,   433,   433,   433,   433,   434,   434,
     436,   435,   435,   435,   435,   435,   437,   437,   438,   438,
     439,   439,   440,   440,   440,   440,   440,   442,   441,   443,
     444,   443,   445,   445,   445,   445,   445,   446,   445,   445,
     447,   447,   448,   448,   448,   448,   449,   449,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   451,
     451,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   453,   453,   454,   454,   454,
     454,   454,   454,   454,   454,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   456,   456,
     456,   456,   456,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   459,   459,   459,   459,
     459,   459,   459,   459,   460,   460,   460,   460,   461,   461,
     461,   461,   462,   462,   462,   462,   462,   462,   462,   462,
     463,   463,   464,   464,   465,   465,   465,   465,   465,   465,
     466,   467,   468
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
       0,     7,     6,     9,     2,     2,     2,     2,     3,     2,
       3,     1,     1,     3,     2,     3,     1,     3,     0,     3,
       6,     0,     4,     0,     2,     3,     4,     0,     4,     0,
       2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
       4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
       0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
       3,     1,     0,     2,     3,     4,     3,     4,     5,     0,
       4,     2,     0,     2,     3,     3,     3,     3,     3,     3,
       7,     3,     3,     3,     3,     3,     7,     7,     7,     0,
       2,     3,     1,     0,     2,     2,     3,     4,     3,     4,
       4,     4,     4,     0,     4,     2,     0,     2,     3,     3,
       4,     4,     7,     3,     3,     3,     3,     0,     0,     0,
      18,     0,     4,     0,     2,     3,     3,     3,     1,     3,
       0,     3,     1,     3,     0,     3,     0,     4,     2,     0,
       2,     3,     3,     3,     0,     4,     2,     0,     2,     3,
       3,     3,     3,     0,     2,     3,     1,     0,     2,     3,
       4,     3,     4,     4,     0,     4,     2,     0,     2,     3,
       3,     3,     3,     3,     0,     5,     3,     0,     5,     3,
       3,     3,     3,     3,     0,     3,     0,     2,     2,     4,
       4,     4,     4,     0,     2,     3,     3,     3,     0,     2,
       3,     3,     3,     3,     0,     2,     0,     0,     9,     3,
       3,     3,     2,     3,     5,     0,     2,     3,     0,     0,
       9,     0,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     0,     2,     3,     1,     0,     2,     3,     4,     4,
       0,     5,     1,     0,     4,     2,     0,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     0,
       3,     1,     3,     0,     3,     0,     2,     3,     3,     4,
       4,     4,     4,     5,     5,     2,     7,    11,     7,    13,
      11,     9,     7,     7,     7,     9,     5,     9,     9,    11,
      11,    11,     5,     7,     5,     7,     7,     5,    17,    13,
      15,    11,    13,     0,     7,     0,     7,     7,    11,     5,
       5,     9,     9,     9,     5,     5,    11,     9,    14,    14,
       7,    12,    10,     7,     7,     7,     1,     1,     1,     0,
       2,     3,     3,     2,     0,     2,     3,     3,     3,     3,
       4,     0,     2,     3,     3,     3,     3,     3,     4,     0,
       2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
       3,     3,     3,     4,     4,     4,     0,     4,     0,     2,
       3,     3,     3,     3,     3,     3,     0,     2,     3,     1,
       0,     2,     3,     4,     3,     3,     4,     0,     4,     2,
       0,     2,     3,     4,     0,     5,     5,     2,     0,     2,
       0,     6,     3,     3,     3,     3,     0,     2,     3,     1,
       0,     2,     3,     3,     3,     3,     4,     0,     8,     0,
       0,     3,     7,     7,     8,    11,     6,     0,    10,     1,
       3,     6,     1,     1,     1,     1,     0,     3,     1,     2,
       2,    12,     2,    15,     4,    12,    17,    22,    12,     0,
       2,     3,     4,     4,     3,     2,     2,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       5,     2,     2,     3,     9,     3,     2,     9,     2,     9,
       2,     9,     5,     3,     2,     0,     2,     6,     8,     8,
      10,     1,     4,     1,     1,     5,     4,     4,     7,     4,
       7,     5,     3,     3,     7,     5,     8,     2,     0,     3,
       6,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     6,     4,     4,     4,     4,     4,     4,     6,
       6,     6,     5,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     1,
       3,     3,     3,     5,     3,     4,     4,     6,     8,     8,
       5,     5,     1,     1,     1,     1,     1,     4,     6,     1,
       6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   752,     0,     0,     0,
       0,   641,     0,   643,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   644,   753,     0,     0,     0,     0,     0,
       0,   657,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   754,     0,     0,   759,   755,
      19,   756,   658,    41,   208,   171,   184,   239,    91,   303,
     381,   526,   556,     0,     0,   734,     0,     0,   653,   652,
       0,     0,   727,   726,     0,     0,   728,   729,   730,   731,
     732,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   684,   733,   723,   724,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   752,     0,     0,     0,     0,     0,     0,     0,
       0,   735,     0,   736,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   686,   687,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   725,   642,     0,     0,     0,    86,     0,   752,     0,
       7,    42,    47,    49,     0,   212,     9,   209,   211,   173,
      10,   186,    11,   243,    12,   240,   242,     0,     8,    92,
      96,     0,   307,    13,   304,   306,   385,    14,   382,   384,
     530,    15,   527,   529,   560,    16,   557,   559,   567,     0,
       0,   647,     0,     0,     0,     0,     0,     0,   738,     0,
     739,     0,   646,   649,   750,   651,     0,   655,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   685,     0,     0,   701,   700,   699,   698,   694,
     695,   697,   696,   689,   688,   690,   691,   692,   693,     0,
     757,     0,   645,   659,     0,     0,     0,    80,   734,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   751,   744,     0,     0,     0,     0,     0,     0,
       0,   737,     0,   742,     0,     0,     0,     0,   762,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   711,     0,
     713,   714,   715,   716,   717,   718,     0,     0,     0,     0,
     637,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   752,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   213,     0,     0,   172,   174,     0,   102,     0,
     185,   187,     0,     0,     0,     0,     0,     0,   241,   244,
     245,    85,   752,     0,    56,     0,    57,     0,     0,     0,
       0,   305,   308,     0,     0,   390,   383,   386,   392,     0,
       0,     0,     0,   528,   531,     0,     0,     0,     0,     0,
     558,   561,   569,   745,   746,     0,     0,     0,     0,     0,
     740,   741,     0,   654,     0,     0,     0,     0,     0,     0,
       0,     0,   722,   760,   758,   662,   661,     0,     0,    90,
      60,     0,     0,     0,     0,    72,     0,    69,     0,    55,
      67,    79,    43,     0,     0,     0,     0,   219,     0,   752,
       0,   177,     0,   191,     0,     0,     0,     0,   109,     0,
     294,     0,   752,     0,   253,   271,   286,     0,     0,   102,
       0,     0,   752,     0,   314,   336,   752,     0,   393,     0,
     752,     0,   537,     0,     0,     0,   569,     0,     0,     0,
     570,     0,     0,     0,   650,   648,   743,   656,     0,   639,
     761,   712,   719,   720,   721,   638,   660,    87,    45,    44,
      46,    81,     0,     0,    85,     0,    62,    53,    61,    48,
       0,   219,     0,   216,     0,     0,   214,     0,   175,     0,
       0,     0,     0,   189,   103,     0,   188,     0,   248,     0,
     246,     0,     0,     0,    93,    98,     0,   102,   311,     0,
     309,     0,     0,     0,   387,     0,   415,     0,   532,     0,
     534,   535,   562,   570,   563,   565,   564,   568,     0,   747,
       0,     0,     0,     0,     0,    75,    73,    68,     0,    74,
      85,    50,     0,   222,   217,   221,   215,   179,   176,   193,
     190,     0,     0,   104,   752,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,     0,   150,     0,     0,     0,
       0,   141,   143,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   139,     0,   136,   733,   161,   162,   297,
     252,   296,   247,   256,   249,   255,   273,   250,   289,   251,
     288,     0,    94,     0,   310,   317,   312,   316,     0,     0,
       0,     0,   313,   337,   338,   388,   396,   389,   395,     0,
     533,   540,   536,   539,   566,     0,     0,     0,     0,   571,
     579,     0,     0,   640,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   218,     0,     0,     0,   100,   101,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   132,   134,     0,   159,   157,   154,   156,   155,   752,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   168,     0,     0,     0,     0,     0,    95,     0,
     354,   354,   365,   343,     0,   752,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   453,   455,   391,   416,   476,
       0,     0,     0,     0,     0,   748,   749,    82,    83,    77,
      76,    71,    54,    66,     0,     0,     0,     0,     0,     0,
       0,   102,   102,   102,   102,     0,     0,     0,   102,   220,
     223,     0,     0,   178,   180,     0,     0,     0,   192,   194,
       0,   109,     0,     0,     0,     0,   109,   109,     0,   102,
     135,     0,   380,     0,   131,   130,   129,   128,   127,   123,
     124,   126,   125,   119,   120,   115,   118,   121,   116,   122,
     158,   160,   164,     0,   166,     0,     0,   137,     0,     0,
       0,     0,   295,   298,     0,     0,     0,     0,   105,   105,
       0,     0,   254,   257,     0,     0,     0,   272,   274,     0,
       0,     0,   287,   290,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   734,   327,   315,   318,   371,   371,
     371,     0,     0,     0,     0,     0,   734,     0,     0,     0,
     394,   397,   406,     0,     0,   102,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   425,   102,     0,
       0,     0,     0,     0,   484,     0,   491,     0,   499,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   538,   541,     0,   586,     0,     0,   577,   599,
       0,     0,    65,    64,     0,     0,     0,     0,     0,   102,
       0,   102,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,   168,   198,     0,     0,   148,     0,   149,     0,
     145,     0,     0,     0,   109,     0,   379,     0,   163,   165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,   102,     0,     0,     0,     0,     0,   282,   284,     0,
     278,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   324,     0,     0,     0,     0,   109,     0,
       0,     0,     0,   372,   373,   374,   375,   376,   377,   378,
       0,     0,   339,   355,     0,   340,     0,   341,   366,     0,
       0,     0,   348,   342,   344,     0,     0,   409,     0,   407,
       0,     0,     0,   413,     0,   411,     0,     0,   417,     0,
       0,   418,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   105,   544,     0,   588,     0,     0,     0,     0,
       0,     0,     0,     0,   599,     0,     0,   102,   599,     0,
       0,     0,    78,    51,   225,   226,   231,   232,     0,   235,
       0,   234,   228,   227,    85,   229,   224,     0,   233,   182,
     181,     0,     0,   195,   196,     0,     0,   109,     0,   142,
       0,     0,     0,   113,   167,     0,   169,   299,   300,   301,
     302,   258,   259,     0,     0,     0,    85,   107,     0,   263,
     264,   265,   266,   275,    85,   277,    85,   276,   292,   291,
     293,   332,   330,   331,   322,   320,   321,   319,   334,   326,
     333,   329,   323,     0,     0,     0,     0,     0,     0,   362,
     356,     0,   368,     0,     0,     0,   399,   398,    85,   400,
     401,   404,   405,    85,   402,   403,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     102,   419,   485,     0,     0,   102,     0,     0,     0,     0,
     420,   492,     0,     0,     0,     0,     0,   102,   421,   500,
       0,     0,     0,     0,     0,     0,     0,     0,   422,   507,
     102,     0,   102,   734,   734,   734,     0,   734,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   477,   479,
     478,   479,     0,   542,   589,   590,   102,   592,     0,     0,
       0,     0,     0,     0,     0,   584,   585,   582,   583,   580,
       0,     0,   599,     0,     0,     0,     0,   600,    84,     0,
     102,   102,     0,   102,   183,   200,   197,     0,   117,     0,
       0,     0,   152,     0,     0,     0,   260,     0,   261,     0,
     106,   102,   283,     0,   279,     0,     0,     0,     0,   360,
     361,   363,     0,   359,   109,   367,   109,   345,   346,     0,
       0,     0,     0,   347,   349,   408,     0,   412,     0,   423,
     415,   424,     0,     0,     0,     0,     0,     0,     0,     0,
     436,     0,   442,     0,   444,     0,     0,   447,     0,   415,
       0,     0,     0,     0,     0,   415,     0,     0,     0,     0,
       0,     0,     0,     0,   415,     0,     0,     0,     0,     0,
     415,   415,     0,     0,   516,     0,   460,     0,     0,     0,
       0,     0,     0,   464,   465,     0,     0,     0,     0,     0,
       0,     0,   459,     0,     0,   752,     0,   543,   547,     0,
       0,     0,     0,     0,     0,     0,     0,   587,   586,     0,
       0,     0,     0,   576,   734,   734,     0,     0,     0,     0,
       0,   612,   734,     0,   635,   635,   635,   605,   606,     0,
       0,     0,   621,   622,   105,   626,   628,   630,     0,     0,
     634,     0,     0,     0,     0,     0,     0,   151,     0,     0,
     144,   109,   114,     0,     0,     0,   108,   285,   281,     0,
     325,   328,     0,   357,   369,     0,     0,     0,     0,   410,
     414,     0,     0,   734,     0,   734,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,   488,   486,   487,   489,
     102,     0,   495,   493,   494,   496,   497,   102,   504,   502,
       0,   501,   503,   511,   510,   512,     0,     0,   508,   509,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   734,   480,
       0,   548,   548,     0,   102,     0,   594,     0,     0,     0,
     572,     0,     0,     0,   573,   599,   618,   623,   102,   615,
       0,     0,   601,   604,   613,   614,   607,   608,   611,   609,
     610,   617,   616,     0,   619,   625,     0,     0,     0,     0,
     633,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   199,   201,     0,     0,     0,   170,     0,     0,
     335,   364,     0,     0,   350,   351,   352,   353,   426,   428,
       0,     0,     0,     0,     0,     0,   434,     0,   443,   445,
     446,     0,   490,     0,   498,     0,   505,   514,   515,   518,
     513,   457,     0,     0,   432,   433,     0,     0,     0,     0,
       0,   470,   474,   475,     0,   473,     0,   454,     0,   734,
     483,   456,   371,   371,     0,     0,     0,     0,     0,     0,
     581,   599,   574,     0,     0,   602,   603,   636,     0,     0,
       0,     0,     0,     0,   238,   237,   230,   236,     0,     0,
       0,     0,     0,     0,     0,   147,   153,     0,   262,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,   102,     0,   102,     0,     0,     0,
       0,     0,     0,   102,     0,   481,   482,     0,     0,     0,
       0,   546,     0,   549,   545,     0,   102,     0,     0,     0,
       0,     0,     0,   102,   620,     0,     0,     0,   632,     0,
     202,   203,   204,   205,   206,   207,     0,     0,     0,     0,
     415,   437,   438,     0,     0,     0,     0,   435,     0,     0,
     415,     0,     0,     0,     0,   102,     0,     0,   517,   519,
       0,   431,     0,   461,   462,   463,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,     0,   578,     0,     0,     0,     0,     0,
     146,     0,     0,     0,     0,     0,     0,     0,   734,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,   472,     0,   554,   555,   552,
     553,   109,     0,     0,     0,     0,     0,     0,   575,   102,
       0,     0,     0,     0,   268,   358,   370,   427,   439,   440,
     441,     0,   415,     0,   451,   415,   525,   520,   523,   524,
     521,   522,   458,   430,     0,   415,   415,   466,     0,     0,
       0,   734,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,   471,
       0,     0,     0,     0,     0,     0,     0,   624,   627,   629,
     631,     0,     0,   449,   415,   452,   429,     0,     0,   551,
       0,   734,     0,     0,     0,     0,     0,    88,     0,     0,
     468,   469,   598,     0,   591,   595,     0,     0,   269,     0,
      58,     0,   450,   734,     0,     0,     0,    89,     0,     0,
       0,     0,     0,   448,   593,     0,     0,    88,     0,     0,
       0,   596,     0,     0,     0,   270,     0,     0,     0,   597
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   150,   231,   232,
     752,  1429,   434,   640,   435,  2056,   405,   577,   750,   875,
     499,   574,   500,   400,   227,   335,  2070,   336,   155,   249,
     431,   517,   518,  1398,  1278,   594,   595,   691,   913,  1444,
     692,   766,   767,  1257,   761,   801,   935,   937,   152,   342,
     416,   587,   755,   894,   153,   343,   421,   589,   756,   899,
    1252,  1596,  1733,   151,   237,   341,   412,   582,   754,   890,
     154,   245,   344,   429,   601,   804,   953,  1275,  2021,  2076,
     602,   805,   958,  1112,  1286,  1109,  1284,   603,   806,   963,
     597,   803,   943,   156,   254,   347,   442,   611,   809,   977,
    1298,  1128,  1457,   612,   723,   981,  1154,  1315,  1474,   978,
    1143,  1464,  1742,   980,  1148,  1466,  1743,  1144,   693,   157,
     258,   348,   447,   539,   615,   814,   991,  1158,  1318,  1164,
    1323,   729,   858,  1038,  1039,  1399,  1543,  1679,  1187,  1352,
    1189,  1361,  1191,  1369,  1192,  1379,  1660,  1843,  1909,   158,
     262,   349,   454,   619,   860,  1043,  1402,  1792,  1863,  1971,
     159,   266,   350,   461,    31,   351,   550,   628,   739,  1229,
    1044,  1420,  1226,  1224,  1230,  1427,  1708,   859,    33,   149,
     694,   278,   125,   172,   279,   280,    34,   126,    70,    71,
     127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1420
static const yytype_int16 yypact[] =
{
   -1420,    49, -1420, -1420,    85,  5142,  -176,    76,  -126,   149,
      15, -1420,   -37, -1420,   648,   271,  3274,   106,  -144,    17,
      33,    43,    66,    74,   107,   134,   150,   153,    28, -1420,
   -1420, -1420, -1420, -1420,    89,   201,   173,   342,   441,   463,
     478, -1420,   365,  4393,  4393,   559, -1420,   577,   581,   596,
     602,   610, -1420,   629, -1420,   634,   637,   643,   651,   655,
     657,   662,   666,   679,   690, -1420,   314,   375, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420,   502,   431,  2695,  4393,  -208, -1420, -1420,
     447,   453, -1420, -1420,   461,   469, -1420, -1420, -1420, -1420,
   -1420,   473,   476,   484,   488,   495,   497,   530,   533,   542,
     582,   605,   614,   619,   652,   676,   677,   695,   696,   700,
     706,  4393,  4393,  4393,  3837, -1420, -1420, -1420, -1420,  6327,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,   106,   106,     7,
     384,   678,   -21,   121,   871,  1026,   936,  1049,  1093,  1184,
     478,  4393,  -173,   722,   707,   708,   709,   715,   719,   720,
    3877,  4089,   739, -1420,   818,  5814,   835,  3877,    55,  4393,
     106,   478,  4393,  4393,  4393,  4393,  4393,  4393,  4393,  4393,
    4393,  4393,  4393,  4393,  4393,  4393,  4393,  4393,  4393,  4393,
    4393,  4393,   -34,   -34,  6350,  4393,  4393,  4393,  4393,  4393,
    4393,  4393,  4393,  4393,  4393,  4393,  4393,  4393,  4393,  4393,
    4393, -1420, -1420,   570,    -9,   861, -1420,   478,   -74,   721,
   -1420, -1420, -1420, -1420,   122, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,   723, -1420, -1420,
   -1420,  -160, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,  5841,
     491, -1420,   885,   897,  4393,  4393,   106,   106,  4089,   235,
   -1420,  4393, -1420, -1420, -1420, -1420,    95, -1420,  4393,  4106,
     633,   724,  6373,  6400,  6427,  6454,  6481,  6508,  6535,  6562,
    6589,  6616,  3138,  6643,  6670,  6697,  6724,  6751,  6778,  4929,
    4962,  5005, -1420,  3584,  4358,  1660,  1854,   865,   865,   979,
     979,   979,   979,   814,   814,   -34,   -34,   -34,   -34,   106,
   -1420,  3877, -1420,  -175,  3615,   748,   750, -1420,  2041,   760,
    4393,   340,   164,   103,    58, -1420,    68,   387,   697,   376,
     694,   691, -1420, -1420,   277,   736,   734,  5037,  5060,   744,
     745, -1420,  3877,  4417,  1006,  6805,  4393,   106, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,  4393,
   -1420, -1420, -1420, -1420, -1420, -1420,  4393,  4393,  4393,  4393,
   -1420,  4393,   747,    96,  4131,  4393,  4393,  5868,    59,    59,
      25,   -40, -1420,    26,  1028,   767,    59,  6832,    36,  1036,
    1040, -1420, -1420,   775,  1043, -1420, -1420,   781,   118,  1050,
   -1420, -1420,   784,  1052,  1053,   791,   792,   796, -1420, -1420,
   -1420,    44,  -178,   833, -1420,   803, -1420,  1071,  1073,   807,
     812, -1420, -1420,  1085,   829, -1420, -1420, -1420, -1420,  1095,
     831,   478,   478, -1420, -1420,   478,   840,   478,   106,  1102,
   -1420, -1420, -1420, -1420, -1420,  1103,  4393,  4393,  1110,  1118,
    4089, -1420,  4393, -1420,  1122,  1593,   870,  6859,  6886,  6913,
    6940,  6967,  7499, -1420, -1420, -1420,  7499,  5895,  5922, -1420,
   -1420,  1131,  1132,  1133,   478,  1134,  4393, -1420,  3877, -1420,
   -1420, -1420, -1420,    22,  1139,   905,   896, -1420,  1162,   135,
    1163, -1420,  1181, -1420,   924,   925,   935,  1186, -1420,  1187,
   -1420,  1191,   135,  1192, -1420, -1420, -1420,  1196,  1200,   118,
     968,  1207,   135,  1214, -1420, -1420,   135,  1215, -1420,   943,
     135,  1216, -1420,  1221,  1225,  1232, -1420,  1236,  1237,  1238,
     976,   984,  5101,  5124, -1420, -1420,  7499, -1420,  4393, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420,   -71,  4393,  6990,   326,    21, -1420, -1420, -1420, -1420,
    1182, -1420,  1213, -1420,   986,  1246, -1420,   349, -1420,   395,
    4393,  1251,  1000, -1420, -1420,  2351, -1420,  1256, -1420,  1252,
   -1420,  1270,   403,  1359, -1420,   990,  1257,   118, -1420,  1258,
   -1420,  1402,   228,  1263, -1420,  1432, -1420,  1264, -1420,  1562,
   -1420, -1420, -1420,   985, -1420, -1420, -1420, -1420,  1791, -1420,
    4393,  4393,  5949,   991,  4393,  4444,  1269, -1420,    27, -1420,
     136, -1420,  1572, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420,  7013,  1011, -1420,   203, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420,  1013, -1420,  1014,  1018,  1019,
    1025, -1420, -1420,    72,  2351,  2351,  2351,  2351,  1289,    91,
    1293,  7574,  -132,  1035,  1035, -1420,  1039, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420,  4393, -1420,  1287, -1420, -1420, -1420, -1420,  1030,  1041,
    1042,  1044, -1420, -1420, -1420, -1420, -1420, -1420, -1420,  3275,
   -1420, -1420, -1420, -1420, -1420,  1045,  1051,  1054,  1057, -1420,
   -1420,  7040,  7067, -1420,  1034,  5976,  4393,  4393,    42, -1420,
    1048,   115,  1058, -1420,   480,    20,    -7, -1420, -1420, -1420,
    1046,  1061,  1046,  2351,  1314,  1324,  1075,  1078,  1096,  1081,
    1086,  1086,  1086,  7551, -1420, -1420, -1420, -1420, -1420,     9,
    1077, -1420,  2351,  2351,  2351,  2351,  2351,  2351,  2351,  2351,
    2351,  2351,  2351,  2351,  2351,  2351,  2351,  2351,  1345,  4393,
    1694, -1420,  1079,   372,   698,   318,    31,  6003, -1420,  2852,
   -1420, -1420, -1420, -1420,   242,     4,   -81,    97,  1090,  1092,
    1097,  1107,  1108,  1112,  1114,  1115,  1116,  1352,  1117,  1121,
    1127,  1128,  1129,   102,   245,   296,  1124,  1138,  1140,  1150,
    1155,  1157,  1158,  1161,  1164,  1126,  1156,  1165,  1168,  1170,
    1174,  1175,  1183,  1188,  1176, -1420, -1420, -1420, -1420, -1420,
      93,   478,   687,    84,  1362, -1420, -1420, -1420,  1142,  7499,
    4611, -1420, -1420, -1420,   478,    26,  1100,    84,    84,    84,
      84,   166,   170,   118,   118,  1189,   478,  1394,   216, -1420,
   -1420,    19,  1400, -1420, -1420,  1194,  1424,  1441, -1420, -1420,
    1180, -1420,  1197,  3070,  1193,  1201, -1420, -1420,  1203,   118,
   -1420,  1185, -1420,  2351,  1887,  2114,  1963,  1963,  1963,   836,
     836,   836,   836,   873,   873,  1086,  1086,  1086,  1086,  1086,
   -1420, -1420, -1420,  1205,  7574,   141,  5079, -1420,  1448,    67,
    1449,   478, -1420, -1420,  1458,  1465,  1469,  1204,  1206,  1206,
      84,    84, -1420, -1420,  1470,    37,    50, -1420, -1420,  1472,
     478,  1475, -1420, -1420, -1420,  1477,  1478,  1479,   113,   478,
     478,  4393,  1484,    84,  3094, -1420, -1420, -1420,  1208,  1687,
      34,   114,  1483,   478,    51,   106,  3094,   106,    53,   478,
   -1420, -1420, -1420,   478,  1485,   118,   118,  1486,   478,   478,
     478,   478,   478,   478,   478,   478,   478, -1420,   118,   478,
     478,   478,   478,  4393, -1420,  4393, -1420,  4393, -1420, -1420,
      84,   106,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,  1489,   478,  1229,  1230,
    1219,   478, -1420, -1420,  1399,  1248,  1241,  1399, -1420, -1420,
    1245,  4393, -1420, -1420,    26,  1511,  1512,  1513,  1514,   118,
    1515,   118,  1516,  1520,  1523,   828,  1524,  1526,   118,  1527,
    1528,  1529,  1079, -1420,  1530,  1532, -1420,  1266, -1420,  2351,
   -1420,  1272,  1274,  1271, -1420,  1279, -1420,  2029, -1420, -1420,
    2351,  1281,   426,  1542,  1544,  1545,  1546,  1548,    12,  1288,
    1556,   118,  1555,  1557,  1558,  1559,  1561, -1420, -1420,  1564,
   -1420, -1420,  1565,  1579,  1580,  1584,  1586,  1587,  1591,  1592,
    1595,  1597,  1608, -1420,  1631,  1610,  1611,  1613, -1420,  1616,
    1617,  1619,  1303, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
      84,  1620, -1420, -1420,  1360, -1420,    84, -1420, -1420,  1367,
    1623,  1629, -1420, -1420, -1420,  1628,  1630, -1420,  1632, -1420,
    1633,  1634,  1635, -1420,  1636, -1420,  1640,  1381, -1420,  1382,
    1383, -1420,  1380,  1384,  1393,  1396,  1397,  1398,  1404,  1405,
     157,  1388,  1406,   167,  1408,  1389,  5147,   540,  5170,   576,
    5193,   105,   503,  1413,  1390,  1414,  1415,  1417,  1418,  1419,
    1420,  1403,  1427,  1428,  1429,  1433,  1436,  1443,  1444,  1445,
    1434,    54,    54, -1420,  1666, -1420,    84,    84,    41,  1450,
    1451,  1488,  1490,  1492, -1420,    84,   702,    87, -1420,  1446,
     175,  1442,  7499, -1420, -1420, -1420, -1420, -1420,  1447, -1420,
    1487, -1420, -1420, -1420,  1493, -1420, -1420,  1494, -1420, -1420,
   -1420,  1699,   446, -1420, -1420,    84,  7526, -1420,  4393, -1420,
    1754,  1499,  1521, -1420,  7574,    84, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420,  1763,  1657,  1770,  1493, -1420,   448, -1420,
   -1420, -1420, -1420, -1420,   460, -1420,   464, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,  1518, -1420,
   -1420, -1420, -1420,  1519,  1771,  1772,  1773,  1779,  1778, -1420,
   -1420,  1780, -1420,  1781,  1782,   148, -1420, -1420,   475, -1420,
   -1420, -1420, -1420,   483, -1420, -1420,  1783,  1522,  1784,   118,
     478,   478,  4393,  4393,  4393,   478,   118,  1785,    84,  1786,
    4393,  1792,  4393,  4393,  1793,  4393,  1533,   118,  4393,  4393,
     118, -1420, -1420,  4393,  1540,   118,  4393,  4393,  4393,  4393,
   -1420, -1420,  4393,  4393,  4393,  1551,  4393,   118, -1420, -1420,
    4393,  4393,   478,  1553,  1554,  4393,  4393,  1560, -1420, -1420,
     118,  1794,   118,  3094,  3094,  3094,  4393,  3094,  1821,  1822,
     478,   478,  4393,   478,   478,    84,  1825,  1824, -1420, -1420,
   -1420, -1420,  1648, -1420,  1637, -1420,   118, -1420,  1567,  3877,
    1582,  1585,  1588,   223,  1566, -1420, -1420, -1420, -1420, -1420,
    1853,  1598, -1420,   226,  1725,  1858,  4712, -1420, -1420,  1594,
     118,   118,   828,   118, -1420, -1420, -1420,  1600, -1420,  1615,
    5216,  1624, -1420,  1626,  2351,  1639, -1420,  1872, -1420,  1878,
   -1420,   118, -1420,  1888, -1420,  1890,   478,  1889,  1891, -1420,
   -1420, -1420,  1644, -1420, -1420, -1420, -1420, -1420, -1420,  1046,
    1046,  1046,    84, -1420, -1420, -1420,   478, -1420,   478, -1420,
   -1420, -1420,  1645,  1625,  1627,  5239,  5262,  5285,  1646,  1655,
   -1420,  1652, -1420,  7094, -1420,  7121,  7148, -1420,  5308, -1420,
    1897,  1756,  1918,  1920,  5331, -1420,  1924,  1946,  2001,  2176,
    2203,  5354,  2254,  2305, -1420,  2530,  1925,  2575,  2603,  1927,
   -1420, -1420,  2652,  2857, -1420,   249, -1420,  1661,  1671,  1674,
    1668,  5377,  1670, -1420, -1420,  1673,  1677,  7175,  1678,  1681,
    1680,   486, -1420,   304,   315,   291,  1684, -1420, -1420,  1892,
    1683,  3877,   492,  3877,  3877,  3877,  1952, -1420,  1248,   106,
     330,  1958,    84, -1420,  3094,  3094,  1695,  1973,   324,  4393,
    4393, -1420,  3094,  4393,  1975, -1420, -1420, -1420, -1420,  4393,
    1977,  3150, -1420, -1420,  1206,  1696,  1712,  1713,  1714,  1984,
   -1420,  1719,  1722,  1723,  1718,  1729,   534, -1420,  1730,  4393,
   -1420, -1420,  7574,  1734,  1995,  1743, -1420, -1420, -1420,  1757,
   -1420, -1420,  2014, -1420, -1420,  2019,  2020,  2021,  2023, -1420,
   -1420,  3336,  2024,  3094,  4393,  3094,  4393,  4393,   478,  2025,
     478,  2026,  2027,  2028,   118,  3534, -1420, -1420, -1420, -1420,
     118,  3594, -1420, -1420, -1420, -1420, -1420,   118, -1420, -1420,
    3792, -1420, -1420, -1420, -1420, -1420,  3852,  4050, -1420, -1420,
     539,  2031,  4393,   118,  2032,  2033,  4393,   106,   106,  4393,
    4393,  2034,  2035,  2036,   106,  2042,  1909,  2044,  3038, -1420,
    2045, -1420, -1420,  1787,   118,   541, -1420,   546,   556,   562,
   -1420,  1788,  1790,  2046, -1420, -1420, -1420, -1420,   118, -1420,
     106,   106, -1420,  7499,  7499, -1420,  7499, -1420,  2052,  2052,
    2052,  7499, -1420,  3877,  7499, -1420,  4393,  4393,  4393,  3877,
   -1420,    26,  2053,  2054,  2056,  2057,  2060,  4393,  4393,  4393,
    4393,  4393, -1420, -1420,  1795,  6030,  1799, -1420,  1959,  2066,
   -1420, -1420,  1826,  1831, -1420, -1420, -1420, -1420,  2087, -1420,
    1848,  7202,  1844,  5400,  5423,  1845, -1420,  1855, -1420, -1420,
   -1420,  1846, -1420,  1847, -1420,   341, -1420, -1420, -1420, -1420,
   -1420, -1420,  5446,   344, -1420, -1420,  7229,  1857,  1859,  5469,
    5492, -1420, -1420, -1420,   566, -1420,   106, -1420,   106,  3094,
   -1420, -1420,   641,  1843,  4393,  1851,  1856,  1867,  1876,  1879,
   -1420, -1420, -1420,   345,  1880, -1420, -1420, -1420,   573,  5515,
    5538,  5561,   578,  1881, -1420, -1420, -1420, -1420,  2120,  2913,
    2966,  2983,  3013,  3315,  4393, -1420, -1420,  2124, -1420, -1420,
    1046,  1884,  2123,  2146,  4393,  4393,  4393,  4393,  2151,   118,
    4393,  1898,  4393,   388,   118,  2152,   118,  2157,  2171,  2172,
    4393,  4393,  2173,   118,   580, -1420, -1420,  2180,  2181,  2183,
      84, -1420,  1926, -1420, -1420,  5584,   118,  3877,  3877,  3877,
    3877,   389,  2190,   118, -1420,  4393,  4393,  4393, -1420,  4393,
   -1420, -1420, -1420, -1420, -1420, -1420,  6057,  1934,  1931,  1940,
   -1420, -1420, -1420,  7256,  7283,  7310,  5607, -1420,  1944,  5630,
   -1420,  7337,  2209,  2220,  4393,   118,  2222,    84, -1420, -1420,
    1961, -1420,   392, -1420, -1420, -1420,  7364,  7391, -1420,  1956,
    2223,  4393,  2224,  2227,  2229,  2230, -1420,  4393,  1965,   586,
     604,   622,   624,  2232, -1420,  1966,  5653,  5676,  5699,  7418,
   -1420,  2234,  2235,  2236,  4110,  2240,  2245,  2255,  3094,  1991,
    4393,  4308,  1993,  2259,  2260,  3332,  2261,  2262,  2264,  2273,
    2283,   118,  2022,  2048,  2284, -1420,  6084, -1420, -1420, -1420,
   -1420, -1420,  6111,  2049,  2055,  2030,  2059,  2061, -1420,   118,
    4393,  4393,  4393,  2286, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420,  2043, -1420,  7445, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420,  2037, -1420, -1420, -1420,  2288,  2040,
    2062,  3094,  3877,  2063,  3877,  3877,  2065,  6138,  6165,  6192,
   -1420,  2250,  4393,  4368,  2067,  4566,  2289,  4626,  4824, -1420,
    2294,  4393,  2069,   632,  4393,   636,   639, -1420, -1420, -1420,
   -1420,   478,  5722, -1420, -1420, -1420, -1420,  2311,  2319, -1420,
    6219,  3094,  2071,  6246,  2072,  2068,  2339,  2075,  4393,  4884,
   -1420, -1420, -1420,  2074, -1420, -1420,  2085,  3877, -1420,  2086,
   -1420,  7472, -1420,  3094,  4393,   642,  2239, -1420,  2369,  2105,
    5745,  2106,  2375, -1420, -1420,  4393,  2109,  2075,  6273,  4393,
    2376, -1420,  5768,  2111,  4393, -1420,  5791,  4393,  6300, -1420
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420,  -270, -1420,  -826, -1420,  1498, -1420, -1420,  1474,
    -502, -1420,  -578, -1420,  -383,  -496,   295, -1420, -1420, -1420,
   -1420,   802, -1420,  -941, -1420,  -885, -1420,   716, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420,  1724, -1420,  1350, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,  1836, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,  1643,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,  -976,  -643, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1419, -1420, -1420, -1420,  1226,  1027, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,   758, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420,  1895, -1420, -1420, -1420,
    1581, -1420,   869,  1416, -1185, -1420,  -637,    23, -1420, -1420,
   -1420,   966,  -577,  -971,  -143,   -75, -1420,    -5,  -142,   -35,
    -328,   137
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -684
static const yytype_int16 yytable[] =
{
      35,   578,    39,  1127,  1149,   223,   224,  1102,  1103,     6,
     173,   759,    69,   585,     6,  1161,  1077,   494,   695,  1272,
      42,  1082,  1083,    83,   432,   495,   599,     6,    32,   495,
     495,     6,     6,     6,   286,    90,   609,  1048,   290,  1413,
     613,   506,  1107,  1423,   617,   495,   432,     6,   528,     3,
     174,  1055,  1056,  1057,  1058,  1110,     6,   176,     6,     6,
     749,  1621,   287,     6,   490,  1071,   177,   394,   404,     7,
       8,     9,   490,   432,    10,    11,    12,   768,    13,   895,
    1635,     6,    85,   896,   897,    -3,  1641,  1070,   -60,   432,
     576,    18,   402,   891,   775,  1650,   776,   395,    36,   270,
      36,  1656,  1657,    36,   769,   892,   346,   695,   695,   695,
     695,     6,    65,   514,   402,    66,    67,   900,  1119,   902,
     873,   959,    72,   514,  1104,  1105,  1363,   354,   491,   492,
     422,   960,   402,   961,   359,   360,   504,   798,    40,   799,
     402,   402,    69,    69,   514,   234,    35,  1126,   423,    35,
     251,    35,    35,    35,    35,   268,    41,   402,   424,   425,
    1133,  1134,  1135,  1136,  1137,  1138,  1139,   426,  1146,   427,
     871,   633,  1040,   233,   238,    69,   291,   246,   250,   255,
     259,   263,   267,    44,   874,   995,   695,   392,   393,   417,
     515,   638,   514,  1041,  1193,   418,   514,  1364,   334,  1261,
     515,   634,    36,   419,  1150,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   515,   333,   695,  1120,   476,   -60,    44,  1151,   220,
    1469,  1470,   270,     6,  1121,   221,    36,  1560,   777,     7,
       8,     9,   514,  1303,    10,    11,    12,     6,    13,  1365,
     413,   239,   240,     7,     8,     9,   330,   751,    10,    11,
      12,    18,    13,   173,   414,   331,   898,   697,  1471,   515,
     993,    69,    69,   515,   225,    18,  1366,  1367,    52,    43,
      36,   226,  1472,   748,   584,    36,   496,   471,   403,    73,
     496,   496,   493,   893,   497,   362,   639,   498,   497,   226,
      82,   498,   498,   174,   962,    74,   496,  1147,   507,  1108,
     403,   527,   778,  1406,  1308,    75,   548,   498,   226,   515,
    1311,   288,  1111,  1157,    69,  1163,  1101,  1421,   403,     6,
      65,   428,   982,    66,    67,   433,   695,   403,    76,    35,
      37,   436,   983,    35,   516,    38,    77,    68,    87,   718,
     719,   720,   721,   403,   516,   575,   697,   697,   697,   697,
     364,   484,    69,   996,   338,    84,  1042,   430,  1013,   362,
     362,   448,  1439,  1053,  1014,   516,   420,   339,  1368,    78,
     984,   985,   986,   987,   988,   989,  1152,  1153,   340,   228,
    1404,  1405,  1407,   241,   242,     7,     8,     9,   501,  1414,
      10,    11,    12,   -63,    13,   510,    79,   584,  1089,  1902,
     226,    36,  1528,  1529,  1530,  1090,  1532,    18,   954,   523,
     955,  1473,    80,   516,  1337,    81,   408,   516,   956,  1437,
     409,  1338,  1059,   533,  1341,   697,  1061,   415,   537,  1445,
     410,  1342,  1425,    85,   541,    86,   543,   544,    88,  1426,
     545,   229,   547,    69,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   697,
      89,  1944,   697,   516,   938,   690,   449,   437,  1903,    36,
    1904,  1951,  1068,     6,   939,   940,   941,   438,  1244,   571,
    1556,  1905,   450,  1561,    92,    93,   162,  1426,   501,    91,
    1426,   722,   695,   439,  1906,    94,    95,   440,   361,   362,
    1803,  1015,  1491,   695,   451,   990,  1661,  1016,   164,   165,
     166,   167,  1907,  1662,  1370,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     463,   362,  1233,   877,   878,   879,   880,   881,   882,   883,
     884,   885,  1017,  1681,   886,    68,   130,    36,  1018,  1540,
     887,  1677,   452,  2023,  1700,  1701,  2025,    35,  1678,  1613,
     147,  1614,  1680,   888,   131,   697,  2027,  2028,   132,  1678,
     696,   957,    35,  1696,  1697,  1371,    35,  1693,    35,   637,
     226,  1705,  1273,   133,  1426,   645,    35,    35,  1841,   134,
      35,  1845,  1872,   411,    35,  1842,  1871,   135,  1846,  1426,
     701,   647,   648,    35,   705,  2059,   710,  1726,  1727,  1728,
    1729,  1730,  1731,   501,   717,   724,   136,    35,   728,   148,
    1372,   137,   733,  1715,   138,   942,  1618,  1373,  1374,   453,
     139,   740,  1750,    45,  1752,    46,  1933,   230,   140,  1960,
     441,  1908,   141,  1426,   142,   645,  1961,   649,   650,   143,
      47,    48,    49,   144,  1375,   706,   707,  1376,  1377,   696,
     696,   696,   696,     6,  1346,   780,   145,  1347,    50,     7,
       8,     9,     6,  1046,    10,    11,    12,   146,    13,  1266,
     362,   160,     6,   161,  1348,  1349,  1350,  1790,     7,     8,
       9,    18,   178,    10,    11,    12,  1736,    13,  1435,  1436,
    1354,  1450,  1451,  1355,    35,   179,  1857,   180,  1858,   271,
      18,  1859,   698,  1452,   226,   181,  1695,  1454,   226,   182,
    1356,  1357,   183,   501,  1358,  1359,   282,   121,  1475,   226,
     184,   697,   122,   889,   185,   123,  1477,   226,   696,  1675,
    1676,   186,   697,   187,   353,  1686,   362,  1133,  1134,  1135,
    1136,  1137,  1138,  1139,   911,  1860,  1378,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,   696,  1092,   455,   696,   188,   443,   944,   189,
     945,   946,   947,   948,   949,   950,   951,  1732,   190,    35,
     994,  1769,  1770,  1351,  1796,   362,  1862,  1862,  1856,  1797,
     362,   698,   698,   698,   698,   283,  1615,  1616,  1617,  1798,
     362,    92,    93,     6,   444,  1799,   362,   992,   456,  1852,
    1853,   445,   285,  1160,   329,  1162,  1874,   362,   191,  1360,
      51,  1878,   362,  1920,  1921,  1594,  1045,  1045,   436,  1974,
     362,  1432,    96,    97,    98,    99,   100,   695,   332,  1052,
     501,   192,   436,   436,   436,   436,     6,  1975,   362,  1194,
     193,  1066,     7,     8,     9,   194,   436,    10,    11,    12,
     355,    13,   457,  1449,   458,  1976,   362,  1977,   362,   173,
     698,  1453,   356,  1455,    18,  2052,   362,   367,   696,  2054,
     362,   173,  2055,   362,  1861,  2081,   362,   459,   195,   698,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   698,  1476,  1096,   698,  1709,  1710,
    1478,     6,   196,   197,  1888,   436,   436,     7,     8,     9,
     235,   236,    10,    11,    12,  1114,    13,  1415,  1416,  1417,
    1418,   198,   199,   462,  1122,  1123,   200,   460,   436,    18,
     446,   952,   201,   272,   273,   274,  1419,  1991,  1156,  1159,
      69,   275,    69,  1165,  1166,   276,   277,   337,  1167,   345,
     398,   368,   399,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,   406,   464,  1182,  1183,  1184,  1185,   465,   124,
     129,   468,   469,   473,   483,   436,    69,  1195,  1196,  1197,
    1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,
    1208,     6,  1210,   503,  1925,   502,  1214,     7,     8,     9,
    2032,   508,    10,    11,    12,   509,    13,   511,   512,   501,
     698,   171,   175,   513,     6,   519,   520,   521,   522,    18,
       7,     8,     9,   524,   525,    10,    11,    12,   526,    13,
     530,   217,   218,   219,   696,   529,   531,   220,   532,   534,
    2063,  1958,    18,   221,   535,   696,  2009,   202,   203,   204,
     536,   791,   792,   793,   794,   795,   796,   247,     6,   797,
     540,   538,  2079,   542,     7,     8,     9,   549,   551,    10,
      11,    12,   546,    13,   211,   212,   697,   554,   213,   214,
     215,   216,   217,   218,   219,   555,    18,   269,   220,   557,
     793,   794,   795,   796,   221,   436,   797,   560,   568,   569,
     570,   436,   572,   243,   244,   289,   579,   580,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   581,   583,
     586,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,  1889,   588,     6,
     590,   591,   592,   593,   596,     7,     8,     9,   598,   600,
      10,    11,    12,   604,    13,   605,  1400,  1400,   252,   253,
     607,   436,   436,   436,   608,   616,   698,    18,     6,  1813,
     436,   610,   614,   618,     7,     8,     9,   698,   620,    10,
      11,    12,   621,    13,   215,   216,   217,   218,   219,   622,
     357,   358,   220,   624,   625,   626,    18,   363,   221,   627,
     436,   629,   641,   646,   365,   396,   652,   653,   734,   702,
     436,     6,   711,   744,   712,   714,  1552,     7,     8,     9,
     725,   730,    10,    11,    12,     6,    13,   747,   758,   760,
     762,     7,     8,     9,   763,   764,    10,    11,    12,    18,
      13,   765,   774,  1129,   808,  1130,  1131,  1132,   779,   248,
     397,   800,   810,    18,   171,  -683,   407,   867,   173,   173,
     173,   861,   173,   811,   812,   872,   813,   862,   690,   904,
     863,   256,   257,   864,   876,  1483,  1484,   901,   470,   905,
    1488,   606,   475,   436,  1133,  1134,  1135,  1136,  1137,  1138,
    1139,   906,  1140,  1141,   907,   477,   908,   909,   930,   797,
     912,   936,   478,   479,   480,   481,   998,   482,   999,  1007,
     486,   487,   488,  1000,     6,   260,   261,  1519,  1049,  1054,
       7,     8,     9,  1001,  1002,    10,    11,    12,  1003,    13,
    1004,  1005,  1006,  1008,  1050,  1535,  1536,  1009,  1538,  1539,
     436,  1941,    18,  1010,  1011,  1012,  1019,    35,  1028,  1067,
     770,   771,   772,   773,  1020,  1072,  1021,     6,  1685,   713,
    1687,  1688,  1689,     7,     8,     9,  1022,  1692,    10,    11,
      12,  1023,    13,  1024,  1025,  1548,  1702,  1026,  1029,  1074,
    1027,  1030,   552,   553,  1031,    18,  1032,     6,   556,   696,
    1033,  1034,  1037,     7,     8,     9,  1075,  1076,    10,    11,
      12,  1609,    13,  1093,   873,  1035,   264,   265,  1086,  1080,
    1036,  1065,   573,  1097,  1078,    18,  1073,   436,  1081,  1084,
    1098,  1619,  1088,  1620,  1099,  1106,  1100,  1113,  1101,   903,
    1115,  1142,  1116,  1117,  1118,   643,   644,  1125,  1155,   173,
     173,  1213,  1168,  1171,  1209,  1211,  1212,   173,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,  1225,  1227,   934,  1231,  1234,  1235,
    1236,  1237,  1239,  1241,   632,  1777,  1778,  1242,   699,   700,
    1243,  1245,  1784,  1246,  1248,  1249,  1250,  1253,   635,  1254,
    1255,  1259,   703,   704,  1258,  1260,  1262,  1265,   173,  1267,
     173,  1268,  1269,  1270,    69,  1271,   651,   436,  1805,  1806,
    1274,  1276,  1279,    69,  1280,  1281,  1282,     6,  1283,  1307,
    1808,  1285,  1287,     7,     8,     9,  1812,     6,    10,    11,
      12,   698,    13,     7,     8,     9,  1288,  1289,    10,    11,
      12,  1290,    13,  1291,  1292,    18,   741,   742,  1293,  1294,
     745,   558,  1295,   173,  1296,    18,  1215,  1216,  1217,  1218,
    1219,  1220,  1221,  1222,  1223,  1297,    35,  1300,  1301,   997,
    1302,  1304,  1305,  1755,  1306,  1757,  1310,  1309,  1313,  1087,
      35,   708,   709,  1312,  1314,  1316,    35,  1317,  1299,  1319,
    1320,  1321,  1322,  1324,  1854,    35,  1855,  1325,  1326,  1327,
    1328,    35,    35,  1545,  1329,  1339,  1344,  1381,  1330,     7,
       8,     9,    69,    69,    10,    11,    12,  1331,    13,    69,
    1332,  1333,  1334,  1403,   715,   716,  1388,   807,  1335,  1336,
    1340,    18,  1343,  1060,  1062,  1063,  1064,  1380,  1382,  1383,
    1069,  1384,  1385,  1386,  1387,    69,    69,    92,    93,   654,
    1389,  1397,  1390,  1391,   726,   727,  1434,  1392,    94,    95,
    1393,  1085,   869,   870,   173,  1428,   501,  1394,  1395,  1396,
    1424,  1430,  1408,  1409,  1929,  1930,  1931,  1932,    96,    97,
      98,    99,   100,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,  1441,   679,   680,
    1410,  1431,  1411,  1637,  1412,   931,  1442,   226,  1433,  1546,
    1446,  1443,  1129,  1447,  1130,  1131,  1132,  1448,  1459,  1460,
    1461,    69,  1462,    69,  1456,  1463,  1458,  1465,  1467,  1468,
    1479,  1481,  1490,  1492,  1480,  1256,     6,  1169,  1170,  1494,
    1497,  1526,     7,     8,     9,  1499,  1264,    10,    11,    12,
    1181,    13,  1505,  1133,  1134,  1135,  1136,  1137,  1138,  1139,
     681,  1140,  1141,  1514,    18,  1520,  1521,   682,  1533,  1534,
    1541,  1542,  1524,  1557,   731,   732,   206,   207,   208,  1551,
     209,   210,   211,   212,   643,   753,   213,   214,   215,   216,
     217,   218,   219,  1549,  1553,   436,   220,  1554,  1558,  1562,
    1555,  1238,   221,  1240,  1559,  1563,   559,  1597,  1591,  2033,
    1247,  2035,  2036,   173,   206,   207,   208,  1604,   209,   210,
     211,   212,  1598,  1605,   213,   214,   215,   216,   217,   218,
     219,  1600,  1601,  1607,   220,  1608,  1610,  1683,  1611,  1623,
     221,  1624,   436,  1277,  1636,   208,  1603,   209,   210,   211,
     212,  1612,  1622,   213,   214,   215,   216,   217,   218,   219,
    1628,  1547,  1629,   220,  2075,  1638,  1630,  1639,  1857,   221,
    1858,  1642,  1652,  1859,  1655,  1663,   173,  1124,  1664,    35,
     171,  1665,  1666,   683,  1668,  1672,    35,  1669,  1673,   684,
     685,  1670,   171,  1643,  1674,   686,  1682,  1684,   687,  1690,
    1145,   932,   933,   688,   689,  1694,   690,  1698,  1716,  1133,
    1134,  1135,  1136,  1137,  1138,  1139,   173,  1860,  1699,  1186,
    1707,  1188,  1712,  1190,  1717,  1718,  1719,  1720,  1721,  1722,
    1723,  1724,   735,   736,   737,   738,  1725,  1734,   173,   206,
     207,   208,  1738,   209,   210,   211,   212,  1737,  1644,   213,
     214,   215,   216,   217,   218,   219,  1739,  1232,    35,   220,
      35,  1741,    35,    35,  1740,   221,  1744,  1745,  1746,  1422,
    1747,  1749,  1756,  1758,  1759,  1760,  2057,  1263,  1771,  1774,
    1775,  1781,  1782,  1783,    92,    93,   401,   163,  1786,  1785,
      66,  1787,  1791,  1802,    35,    94,    95,  1801,  1807,  1794,
    1814,  1815,  1800,  1816,  1817,  1818,  1826,  1824,   164,   165,
     166,   167,   168,  1828,  1827,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
    1829,   209,   210,   211,   212,  1830,  1831,   213,   214,   215,
     216,   217,   218,   219,   402,  1832,  1864,   220,  1834,  1837,
    1839,  1840,  1838,   221,  1848,  1866,  1849,  1880,  1867,  1887,
    1891,  1482,   783,   784,   785,   786,   787,   788,  1489,  1868,
     789,   790,   791,   792,   793,   794,   795,   796,  1869,  1500,
     797,  1870,  1503,  1892,  1873,  1879,  1890,  1506,  1897,  1911,
    1602,   206,   207,   208,  1913,   209,   210,   211,   212,  1516,
    1900,   213,   214,   215,   216,   217,   218,   219,  1914,  1915,
    1918,   220,  1525,  1645,  1527,  1922,  1923,   221,  1924,   206,
     207,   208,  1926,   209,   210,   211,   212,  1934,  1942,   213,
     214,   215,   216,   217,   218,   219,   584,  1943,  1550,   220,
    1646,  1949,   787,   788,  1953,   221,   789,   790,   791,   792,
     793,   794,   795,   796,  1440,  1954,   797,  1957,  1959,  1964,
    1965,  1967,  1592,  1593,  1968,  1595,  1969,  1970,  1973,  1978,
    1979,  1984,  1985,  1986,   206,   207,   208,  1988,   209,   210,
     211,   212,  1989,  1606,   213,   214,   215,   216,   217,   218,
     219,  1648,  1990,  1992,   220,  1995,  1996,  1997,  1999,  2000,
     221,  2001,   781,   782,   783,   784,   785,   786,   787,   788,
    2002,   169,   789,   790,   791,   792,   793,   794,   795,   796,
    2003,  2007,   797,  2020,  2005,  2029,  2046,   121,  1485,  1486,
    1487,  2049,   122,  2013,  2026,   123,  1493,  2030,  1495,  1496,
     403,  1498,  1649,   170,  1501,  1502,  2041,  2022,  2060,  1504,
    2006,  2011,  1507,  1508,  1509,  1510,  2061,  2012,  1511,  1512,
    1513,  2014,  1515,  2015,  2031,  2034,  1517,  1518,  2037,  2044,
    2067,  1522,  1523,  2051,  2064,  2066,  2068,  2069,  2073,   171,
     171,   171,  1531,   171,    92,    93,   654,  2074,  1537,  2077,
     784,   785,   786,   787,   788,    94,    95,   789,   790,   791,
     792,   793,   794,   795,   796,  2082,  2083,   797,  2084,  2086,
    2087,  2089,  2090,  2093,  2095,    96,    97,    98,    99,   100,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,  1095,   679,   680,   642,   802,   206,
     207,   208,  1251,   209,   210,   211,   212,  1691,  1544,   213,
     214,   215,   216,   217,   218,   219,  1761,  1094,  1401,   220,
    1793,   623,  1763,  1047,     0,   221,   206,   207,   208,  1765,
     209,   210,   211,   212,   979,     0,   213,   214,   215,   216,
     217,   218,   219,  1228,     0,  1773,   220,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,   681,     0,     0,
       0,     0,     0,     0,   682,     0,  1795,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,   207,   208,
    1804,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,     0,     0,
     171,   171,     0,     0,     0,  1703,  1704,  1651,   171,  1706,
       0,     0,     0,     0,     0,  1711,     0,  1714,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,  1735,     0,     0,   220,     0,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
       0,     0,  1653,     0,     0,     0,     0,     0,     0,   171,
    1751,   171,  1753,  1754,     0,     0,     0,     0,     0,     0,
     683,     0,     0,     0,     0,     0,   684,   685,     0,     0,
    1654,     0,   686,     0,     0,   687,     0,     0,     0,     0,
     688,   689,     0,   690,     0,     0,     0,     0,  1772,     0,
       0,     0,  1776,     0,     0,  1779,  1780,     0,     0,     0,
       0,  1898,     0,     0,   171,     0,  1910,     0,  1912,     0,
       0,     0,     0,     0,     0,  1919,     0,     0,     0,  1658,
       0,     0,     0,     0,     0,     0,     0,     0,  1928,     0,
       0,     0,     0,     0,     0,  1935,     0,     0,     0,     0,
       0,     0,  1809,  1810,  1811,     0,     0,     0,     0,     0,
       0,     0,     0,  1819,  1820,  1821,  1822,  1823,    92,    93,
     162,   163,     0,     0,    66,     0,     0,  1956,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   165,   166,   167,   168,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,   171,     0,     0,     0,     0,
    1865,     0,     0,  2004,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   207,   208,     0,   209,   210,   211,
     212,  2016,     0,   213,   214,   215,   216,   217,   218,   219,
    1886,     0,     0,   220,     0,     0,     0,     0,     0,   221,
    1893,  1894,  1895,  1896,     0,     0,  1899,     0,  1901,     0,
       0,     0,     0,     0,     0,     0,  1916,  1917,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,  1936,  1937,  1938,   221,  1939,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,  1659,     0,   220,     0,     0,     0,
    1955,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1966,     0,     0,
       0,     0,     0,  1972,     0,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,   171,   220,  1993,     0,     0,     0,
    1881,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,     0,   965,     0,   966,
     967,     0,   968,     0,     0,     0,  2017,  2018,  2019,     0,
       0,   121,   969,     0,     0,     0,   122,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,   170,     0,   970,
     971,   972,     0,  1882,     0,     0,     0,   171,     0,     0,
       0,     0,     0,     0,     0,     0,   973,     0,  2042,     0,
    1883,     0,     0,     0,     0,     0,     0,  2050,     0,     0,
    2053,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,     0,     0,
    1884,     0,     0,     0,  2071,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
    2080,    92,    93,   162,     0,     0,   974,     0,     0,     0,
       0,  2088,    94,    95,     0,  2092,     0,     0,     0,     0,
    2096,     0,     0,  2098,     0,   164,   165,   166,   167,     0,
       0,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    92,    93,   162,
     206,   207,   208,     0,   209,   210,   211,   212,    94,    95,
     213,   214,   215,   216,   217,   218,   219,     0,   975,     0,
     220,   164,   165,   166,   167,   976,   221,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    92,    93,     6,   206,   207,   208,     0,
     209,   210,   211,   212,    94,    95,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,   206,   207,   208,   220,
     209,   210,   211,   212,     0,   221,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,     0,     0,  1788,   206,   207,   208,  1789,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,    53,     0,     0,
     815,    54,   221,     0,     0,     0,     7,     8,     9,     0,
       0,    10,    11,   816,   121,    13,     0,     0,     0,   122,
       0,     0,   123,     0,     0,     0,     0,     0,    18,     0,
     170,     0,     0,   781,   782,   783,   784,   785,   786,   787,
     788,     0,  1885,   789,   790,   791,   792,   793,   794,   795,
     796,     0,     0,   797,     0,     0,     0,     0,     0,  1998,
      55,   815,     0,     0,  1079,     0,    56,     7,     8,     9,
     121,     0,    10,    11,   816,   122,    13,     0,   123,    57,
       0,    58,     0,     0,     0,     0,   170,     0,     0,    18,
       0,     0,     0,    59,     0,     0,     0,    60,     0,     0,
       0,   206,   207,   208,     0,   209,   210,   211,   212,    61,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,   121,   221,     0,     0,
      62,   122,   379,     0,   123,     0,     0,     0,     0,     0,
       0,   817,  1713,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,     0,
       0,     0,   834,     0,     0,   835,     0,     0,   836,     0,
       0,   837,     0,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,    63,
       0,    64,   854,     0,     0,     0,     0,   855,     0,     0,
     856,     0,   817,     0,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
       0,     0,     0,   834,     0,     0,   835,     0,     0,   836,
       0,     0,   837,     0,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
       0,     0,     0,   854,     0,     0,     0,     0,   855,   815,
       0,   856,     0,     0,     0,     7,     8,     9,   857,     0,
      10,    11,   816,     0,    13,     0,     0,     0,   206,   207,
     208,     0,   209,   210,   211,   212,     0,    18,   213,   214,
     215,   216,   217,   218,   219,   206,   207,   208,   220,   209,
     210,   211,   212,     0,   221,   213,   214,   215,   216,   217,
     218,   219,   389,     0,     0,   220,     0,     0,     0,   815,
       0,   221,     0,     0,     0,     7,     8,     9,     0,  1748,
      10,    11,   816,     0,    13,     0,     0,     0,    92,    93,
       6,     0,     0,     0,     0,     0,     0,    18,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,     0,
     817,     0,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,   834,     0,     0,   835,     0,     0,   836,     0,     0,
     837,     0,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,     0,     0,
       0,   854,     0,     0,     0,     0,   855,     0,     0,   856,
     817,     0,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,   834,     0,     0,   835,     0,     0,   836,     0,     0,
     837,     0,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,     0,     0,
       0,   854,     0,     0,     0,     0,   855,   815,     0,   856,
       0,     0,     0,     7,     8,     9,     0,  1762,    10,    11,
     816,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,   205,     0,   220,     0,   390,
       0,     0,     0,   221,     0,     0,     0,   815,     0,     0,
       0,     0,     0,     7,     8,     9,     0,  1764,    10,    11,
     816,   121,    13,     0,     0,     0,   122,     0,     0,   123,
      92,    93,   162,     0,   396,    18,     0,     0,     0,     0,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   165,   166,   167,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   817,     0,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,     0,     0,     0,   834,
       0,     0,   835,     0,     0,   836,     0,     0,   837,     0,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,   853,     0,     0,     0,   854,
       0,     0,     0,     0,   855,     0,     0,   856,   817,     0,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,     0,     0,     0,   834,
       0,     0,   835,     0,     0,   836,     0,     0,   837,     0,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,   853,     0,     0,     0,   854,
       0,     0,     0,     0,   855,   815,     0,   856,     0,     0,
       0,     7,     8,     9,     0,  1766,    10,    11,   816,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,   207,   208,    18,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,   281,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,     0,     0,   366,   815,     0,     0,     0,     0,
       0,     7,     8,     9,     0,  1767,    10,    11,   816,     0,
      13,     0,     0,   121,    92,    93,     6,   485,   122,     0,
       0,   123,     0,    18,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
       0,     0,     0,     0,     0,     0,   817,     0,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,     0,     0,     0,   834,     0,     0,
     835,     0,     0,   836,     0,     0,   837,     0,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,     0,     0,     0,   854,     0,     0,
       0,     0,   855,     0,     0,   856,   817,     0,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,     0,     0,     0,   834,     0,     0,
     835,     0,     0,   836,     0,     0,   837,     0,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,     0,     0,     0,   854,     0,     0,
       0,     0,   855,   815,     0,   856,     0,     0,     0,     7,
       8,     9,     0,  1768,    10,    11,   816,     0,    13,     0,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
       0,    18,   213,   214,   215,   216,   217,   218,   219,   206,
     207,   208,   220,   209,   210,   211,   212,     0,   221,   213,
     214,   215,   216,   217,   218,   219,   391,     0,     0,   220,
       0,     0,     0,   815,     0,   221,     0,     0,     0,     7,
       8,     9,     0,  1987,    10,    11,   816,   121,    13,     0,
       0,     0,   122,     0,     0,   123,    92,    93,     6,     0,
       0,    18,     0,     0,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   472,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   746,     0,   817,     0,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,     0,     0,     0,   834,     0,     0,   835,     0,
       0,   836,     0,     0,   837,     0,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,     0,     0,     0,   854,     0,     0,     0,     0,
     855,     0,     0,   856,   817,     0,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,     0,     0,     0,   834,     0,     0,   835,     0,
       0,   836,     0,     0,   837,     0,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,     0,     0,     0,   854,     0,     0,     0,     0,
     855,   815,     0,   856,     0,     0,     0,     7,     8,     9,
       0,  1994,    10,    11,   816,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,  1051,
       0,   220,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   815,     0,     0,     0,     0,     0,     7,     8,     9,
       0,  2043,    10,    11,   816,     0,    13,     0,     0,   121,
       0,     0,     0,     0,   122,     0,     0,   123,     0,    18,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,   817,   221,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
       0,     0,     0,   834,     0,     0,   835,     0,     0,   836,
       0,     0,   837,     0,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
       0,     0,     0,   854,     0,     0,     0,     0,   855,     0,
       0,   856,   817,     0,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
       0,  1564,     0,   834,     0,     0,   835,     0,     0,   836,
       0,     0,   837,     0,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
       0,     0,     0,   854,     0,     0,     0,     0,   855,   815,
       0,   856,     0,     0,     0,     7,     8,     9,     0,  2045,
      10,    11,   816,     0,    13,     0,     0,     0,     0,     0,
       0,     0,  1565,     0,   206,   207,   208,    18,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,  1566,   815,
       0,     0,     0,     0,     0,     7,     8,     9,     0,  2047,
      10,    11,   816,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,  1567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1568,
    1569,  1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,  1578,
    1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,
    1589,  1590,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     817,     0,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,   834,     0,     0,   835,     0,     0,   836,     0,     0,
     837,     0,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,     0,     0,
       0,   854,     0,     0,     0,     0,   855,     0,     0,   856,
     817,     0,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,   834,     0,     0,   835,     0,     0,   836,     0,     0,
     837,     0,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,     0,     0,
       0,   854,    92,    93,   162,     0,   855,     0,     0,   856,
       0,     0,     0,    94,    95,     0,     0,  2048,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   165,   166,   167,
       0,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,  1091,     7,     8,     9,     0,  2072,    10,    11,
      12,     0,    13,     0,    14,    15,    16,    17,     0,     0,
       0,     0,   206,   207,   208,    18,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,     0,
       0,     0,     0,   386,     0,   206,   207,   208,    19,   209,
     210,   211,   212,     0,    20,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,    21,     0,    22,
       0,   221,     0,     0,     0,     0,   387,     0,     0,     0,
       0,    23,     0,     0,     0,    24,     0,     0,   206,   207,
     208,     0,   209,   210,   211,   212,     0,    25,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,     0,     0,     0,    26,   388,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,   466,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   467,   121,     0,    27,     0,    28,
     122,     0,     0,   123,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,   630,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,   631,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1345,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1353,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1362,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1599,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1625,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1626,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1627,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1634,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1640,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1647,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1667,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1835,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1836,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1844,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1850,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1851,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1875,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1876,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1877,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1927,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1948,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1950,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1980,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1981,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1982,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  2058,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  2085,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  2094,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  2097,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,   284,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,   352,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,   489,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,   566,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,   567,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,   743,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,   868,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,   964,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  1825,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    1940,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,  2008,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  2010,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  2038,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,  2039,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,  2040,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,  2062,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,  2065,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  2091,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  2099,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,   222,   206,   207,   208,   221,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,   312,   206,   207,   208,   221,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     369,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   370,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   371,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   372,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   373,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   374,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   375,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   376,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   377,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   378,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     380,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   381,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   382,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   383,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   384,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   385,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   474,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   505,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   561,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   562,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     563,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   564,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,   565,   206,   207,   208,   221,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,   636,   206,   207,   208,   221,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     757,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   865,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   866,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1631,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1632,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1633,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  1671,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1833,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1847,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1945,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    1946,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  1947,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1952,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1962,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1963,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1983,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  2024,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  2078,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   781,
     782,   783,   784,   785,   786,   787,   788,     0,     0,   789,
     790,   791,   792,   793,   794,   795,   796,     0,     0,   797,
       0,     0,     0,  1438,   781,   782,   783,   784,   785,   786,
     787,   788,     0,     0,   789,   790,   791,   792,   793,   794,
     795,   796,     0,     0,   797,     0,   910,   781,   782,   783,
     784,   785,   786,   787,   788,     0,     0,   789,   790,   791,
     792,   793,   794,   795,   796,     0,     0,   797
};

static const yytype_int16 yycheck[] =
{
       5,   503,     7,   974,   980,   147,   148,   948,   949,     5,
      85,   654,    17,   509,     5,   986,   901,   400,   595,     7,
       5,   906,   907,    28,     5,     3,   522,     5,     5,     3,
       3,     5,     5,     5,   177,    40,   532,   863,   180,  1224,
     536,     5,     5,  1228,   540,     3,     5,     5,   431,     0,
      85,   877,   878,   879,   880,     5,     5,   265,     5,     5,
     638,  1480,     7,     5,     5,   891,   274,   242,   338,    11,
      12,    13,     5,     5,    16,    17,    18,     5,    20,    86,
    1499,     5,   242,    90,    91,     0,  1505,    68,   266,     5,
      68,    33,    73,    73,     3,  1514,     5,   272,   276,   272,
     276,  1520,  1521,   276,    32,    85,   266,   684,   685,   686,
     687,     5,     6,    26,    73,     9,    10,   760,     5,   762,
       5,    90,   266,    26,   950,   951,    21,   270,   398,   399,
      72,   100,    73,   102,   276,   277,   406,   269,   264,   271,
      73,    73,   147,   148,    26,   150,   151,   973,    90,   154,
     155,   156,   157,   158,   159,   160,     7,    73,   100,   101,
     126,   127,   128,   129,   130,   131,   132,   109,   134,   111,
     748,   242,    79,   150,   151,   180,   181,   154,   155,   156,
     157,   158,   159,   264,    69,   266,   763,   329,   331,    86,
     103,   574,    26,   100,  1020,    92,    26,    92,   272,  1084,
     103,   272,   276,   100,    90,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   103,   227,   800,   111,   367,   266,   264,   114,   263,
      82,    83,   272,     5,   121,   269,   276,  1422,   147,    11,
      12,    13,    26,  1128,    16,    17,    18,     5,    20,   144,
      86,   272,   273,    11,    12,    13,   265,   640,    16,    17,
      18,    33,    20,   338,   100,   274,   273,   595,   120,   103,
     266,   276,   277,   103,   267,    33,   171,   172,     7,   264,
     276,   274,   134,   256,   272,   276,   264,   362,   269,   272,
     264,   264,   267,   273,   272,   274,   275,   275,   272,   274,
     272,   275,   275,   338,   273,   272,   264,   273,   272,   272,
     269,   267,   221,   272,  1140,   272,   458,   275,   274,   103,
    1146,   266,   272,   272,   329,   272,   272,   240,   269,     5,
       6,   273,    90,     9,    10,   267,   913,   269,   272,   344,
     264,   346,   100,   348,   257,   269,   272,   241,     6,   121,
     122,   123,   124,   269,   257,   498,   684,   685,   686,   687,
     265,   265,   367,   266,   242,   276,   273,   344,   266,   274,
     274,   348,  1257,   875,   272,   257,   273,   255,   273,   272,
     138,   139,   140,   141,   142,   143,   272,   273,   266,     5,
    1216,  1217,  1218,   272,   273,    11,    12,    13,   403,  1225,
      16,    17,    18,   267,    20,   410,   272,   272,   267,    21,
     274,   276,  1383,  1384,  1385,   274,  1387,    33,   100,   424,
     102,   273,   272,   257,   267,   272,    86,   257,   110,  1255,
      90,   274,   266,   438,   267,   763,   266,   273,   443,  1265,
     100,   274,   267,   242,   449,   272,   451,   452,     7,   274,
     455,    67,   457,   458,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
       7,  1890,   800,   257,   102,   272,   100,    90,    90,   276,
      92,  1900,   266,     5,   112,   113,   114,   100,  1065,   494,
     267,   103,   116,   267,     3,     4,     5,   274,   503,   134,
     274,   273,  1079,   116,   116,    14,    15,   120,   273,   274,
    1695,   266,  1338,  1090,   138,   273,   267,   272,    27,    28,
      29,    30,   134,   274,    21,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
     273,   274,  1054,    73,    74,    75,    76,    77,    78,    79,
      80,    81,   266,   272,    84,   241,     7,   276,   272,  1395,
      90,   267,   196,  1992,   250,   251,  1995,   582,   274,  1464,
     266,  1466,   267,   103,     7,   913,  2005,  2006,     7,   274,
     595,   273,   597,  1564,  1565,    92,   601,   267,   603,   273,
     274,  1572,  1098,     7,   274,   582,   611,   612,   267,     7,
     615,   267,   267,   273,   619,   274,  1801,     7,   274,   274,
     597,   272,   273,   628,   601,  2044,   603,    93,    94,    95,
      96,    97,    98,   638,   611,   612,     7,   642,   615,   264,
     137,     7,   619,  1584,     7,   273,  1472,   144,   145,   273,
       7,   628,  1623,     5,  1625,     7,   267,   273,     7,   267,
     273,   273,     7,   274,     7,   642,   274,   272,   273,     7,
      22,    23,    24,     7,   171,   272,   273,   174,   175,   684,
     685,   686,   687,     5,   144,   690,     7,   147,    40,    11,
      12,    13,     5,     6,    16,    17,    18,     7,    20,   273,
     274,   199,     5,   272,   164,   165,   166,  1678,    11,    12,
      13,    33,   265,    16,    17,    18,  1601,    20,   272,   273,
     144,   273,   274,   147,   729,   272,    85,   266,    87,     7,
      33,    90,   595,   273,   274,   266,  1562,   273,   274,   266,
     164,   165,   266,   748,   168,   169,     7,   256,   273,   274,
     266,  1079,   261,   273,   266,   264,   273,   274,   763,   273,
     274,   266,  1090,   266,   273,   273,   274,   126,   127,   128,
     129,   130,   131,   132,   779,   134,   273,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   936,   100,   800,   266,   100,   100,   266,
     102,   103,   104,   105,   106,   107,   108,   273,   266,   814,
     815,   272,   273,   273,   273,   274,  1792,  1793,  1789,   273,
     274,   684,   685,   686,   687,     7,  1469,  1470,  1471,   273,
     274,     3,     4,     5,   137,   273,   274,   814,   144,   273,
     274,   144,     7,   985,   274,   987,   273,   274,   266,   273,
     202,   273,   274,   273,   274,  1432,   861,   862,   863,   273,
     274,  1244,    34,    35,    36,    37,    38,  1444,     7,   874,
     875,   266,   877,   878,   879,   880,     5,   273,   274,  1021,
     266,   886,    11,    12,    13,   266,   891,    16,    17,    18,
       5,    20,   198,  1276,   200,   273,   274,   273,   274,   974,
     763,  1284,     5,  1286,    33,   273,   274,   274,   913,   273,
     274,   986,   273,   274,   273,   273,   274,   223,   266,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,  1318,   941,   800,  1575,  1576,
    1323,     5,   266,   266,  1829,   950,   951,    11,    12,    13,
     272,   273,    16,    17,    18,   960,    20,   255,   256,   257,
     258,   266,   266,   272,   969,   970,   266,   273,   973,    33,
     273,   273,   266,   266,   266,   266,   274,  1948,   983,   984,
     985,   266,   987,   988,   989,   266,   266,   266,   993,   266,
     242,   267,   242,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,   242,   267,  1009,  1010,  1011,  1012,   274,    43,
      44,   267,   267,     7,   267,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1035,     5,  1037,   266,  1860,     7,  1041,    11,    12,    13,
    2011,     5,    16,    17,    18,     5,    20,   272,     5,  1054,
     913,    85,    86,   272,     5,     5,   272,     5,     5,    33,
      11,    12,    13,   272,   272,    16,    17,    18,   272,    20,
     267,   257,   258,   259,  1079,   242,     5,   263,     5,   272,
    2051,  1907,    33,   269,   272,  1090,  1971,   121,   122,   123,
       5,   255,   256,   257,   258,   259,   260,    71,     5,   263,
       5,   272,  2073,   272,    11,    12,    13,     5,     5,    16,
      17,    18,   272,    20,   249,   250,  1444,     7,   253,   254,
     255,   256,   257,   258,   259,     7,    33,   161,   263,     7,
     257,   258,   259,   260,   269,  1140,   263,   267,     7,     7,
       7,  1146,     8,   272,   273,   179,     7,   242,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   272,     7,
       7,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,  1830,     7,     5,
     266,   266,   257,     7,     7,    11,    12,    13,     7,     7,
      16,    17,    18,     7,    20,     5,  1211,  1212,   272,   273,
     242,  1216,  1217,  1218,     7,   272,  1079,    33,     5,  1721,
    1225,     7,     7,     7,    11,    12,    13,  1090,     7,    16,
      17,    18,     7,    20,   255,   256,   257,   258,   259,     7,
     274,   275,   263,     7,     7,     7,    33,   281,   269,   273,
    1255,   267,    70,     7,   288,   269,     5,   257,   273,     7,
    1265,     5,   272,   272,     7,     7,  1409,    11,    12,    13,
       7,     7,    16,    17,    18,     5,    20,     8,   267,   266,
     266,    11,    12,    13,   266,   266,    16,    17,    18,    33,
      20,   266,     3,    85,     7,    87,    88,    89,     5,   273,
     334,   266,   272,    33,   338,   266,   340,   273,  1383,  1384,
    1385,   266,  1387,   272,   272,   267,   272,   266,   272,     5,
     266,   272,   273,   266,   266,  1330,  1331,   266,   362,     5,
    1335,   529,   366,  1338,   126,   127,   128,   129,   130,   131,
     132,   266,   134,   135,   266,   379,   250,   266,     3,   263,
     273,   272,   386,   387,   388,   389,   266,   391,   266,     7,
     394,   395,   396,   266,     5,   272,   273,  1372,     6,   269,
      11,    12,    13,   266,   266,    16,    17,    18,   266,    20,
     266,   266,   266,   266,   242,  1390,  1391,   266,  1393,  1394,
    1395,  1887,    33,   266,   266,   266,   272,  1402,   272,     5,
     684,   685,   686,   687,   266,     5,   266,     5,  1551,   607,
    1553,  1554,  1555,    11,    12,    13,   266,  1559,    16,    17,
      18,   266,    20,   266,   266,  1402,  1568,   266,   272,     5,
     266,   266,   466,   467,   266,    33,   266,     5,   472,  1444,
     266,   266,   266,    11,    12,    13,     5,   267,    16,    17,
      18,  1456,    20,     5,     5,   272,   272,   273,   273,   266,
     272,   272,   496,     5,   267,    33,   272,  1472,   267,   266,
       5,  1476,   267,  1478,     5,     5,   272,     5,   272,   763,
       5,   273,     5,     5,     5,   272,   273,     3,     5,  1564,
    1565,   272,     7,     7,     5,   266,   266,  1572,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   797,   266,   274,   800,   272,     7,     7,
       7,     7,     7,     7,   558,  1667,  1668,     7,   272,   273,
       7,     7,  1674,     7,     7,     7,     7,     7,   572,     7,
     274,   267,   272,   273,   272,   274,   267,   266,  1623,     7,
    1625,     7,     7,     7,  1559,     7,   590,  1562,  1700,  1701,
     272,     5,     7,  1568,     7,     7,     7,     5,     7,   266,
    1713,     7,     7,    11,    12,    13,  1719,     5,    16,    17,
      18,  1444,    20,    11,    12,    13,     7,     7,    16,    17,
      18,     7,    20,     7,     7,    33,   630,   631,     7,     7,
     634,     8,     7,  1678,     7,    33,   207,   208,   209,   210,
     211,   212,   213,   214,   215,     7,  1621,     7,     7,   817,
       7,     5,     5,  1628,     5,  1630,   266,     7,     5,   913,
    1635,   272,   273,   266,     5,     7,  1641,     7,     7,     7,
       7,     7,     7,     7,  1786,  1650,  1788,     7,   267,   267,
     267,  1656,  1657,     5,   274,   267,   267,   267,   274,    11,
      12,    13,  1667,  1668,    16,    17,    18,   274,    20,  1674,
     274,   274,   274,     7,   272,   273,   273,   711,   274,   274,
     274,    33,   274,   881,   882,   883,   884,   274,   274,   274,
     888,   274,   274,   274,   274,  1700,  1701,     3,     4,     5,
     273,   267,   274,   274,   272,   273,     7,   274,    14,    15,
     274,   909,   746,   747,  1789,   273,  1721,   274,   274,   274,
     274,   274,   272,   272,  1867,  1868,  1869,  1870,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     3,    64,    65,
     272,   274,   272,     7,   272,   799,   267,   274,   274,   121,
       7,   250,    85,   116,    87,    88,    89,     7,     7,     7,
       7,  1786,     3,  1788,   266,     7,   267,     7,     7,     7,
       7,     7,     7,     7,   272,  1079,     5,   995,   996,     7,
       7,     7,    11,    12,    13,   272,  1090,    16,    17,    18,
    1008,    20,   272,   126,   127,   128,   129,   130,   131,   132,
     126,   134,   135,   272,    33,   272,   272,   133,     7,     7,
       5,     7,   272,   267,   272,   273,   243,   244,   245,   272,
     247,   248,   249,   250,   272,   273,   253,   254,   255,   256,
     257,   258,   259,   216,   272,  1860,   263,   272,     5,   134,
     272,  1059,   269,  1061,   266,     7,   273,   267,   274,  2012,
    1068,  2014,  2015,  1948,   243,   244,   245,     5,   247,   248,
     249,   250,   267,     5,   253,   254,   255,   256,   257,   258,
     259,   267,   266,     5,   263,     5,     7,     5,     7,   274,
     269,   274,  1907,  1101,     7,   245,   267,   247,   248,   249,
     250,   267,   267,   253,   254,   255,   256,   257,   258,   259,
     274,   273,   267,   263,  2067,     7,   274,     7,    85,   269,
      87,     7,     7,    90,     7,   274,  2011,   971,   267,  1944,
     974,   267,   274,   249,   274,   267,  1951,   274,   267,   255,
     256,   274,   986,     7,   274,   261,   272,   274,   264,     7,
     273,   267,   268,   269,   270,     7,   272,   272,   272,   126,
     127,   128,   129,   130,   131,   132,  2051,   134,     5,  1013,
       5,  1015,     5,  1017,   272,   272,   272,     3,   269,   267,
     267,   273,   201,   202,   203,   204,   267,   267,  2073,   243,
     244,   245,     7,   247,   248,   249,   250,   273,     7,   253,
     254,   255,   256,   257,   258,   259,   273,  1051,  2023,   263,
    2025,     7,  2027,  2028,   267,   269,     7,     7,     7,  1227,
       7,     7,     7,     7,     7,     7,  2041,     8,     7,     7,
       7,     7,     7,     7,     3,     4,     5,     6,   139,     7,
       9,     7,     7,     7,  2059,    14,    15,   267,     6,   272,
       7,     7,   274,     7,     7,     5,   267,   272,    27,    28,
      29,    30,    31,     7,   115,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
     274,   247,   248,   249,   250,   274,    19,   253,   254,   255,
     256,   257,   258,   259,    73,   267,   273,   263,   274,   274,
     274,   274,   267,   269,   267,   274,   267,     7,   272,     5,
       7,  1329,   245,   246,   247,   248,   249,   250,  1336,   272,
     253,   254,   255,   256,   257,   258,   259,   260,   272,  1347,
     263,   272,  1350,     7,   274,   274,   272,  1355,     7,     7,
    1444,   243,   244,   245,     7,   247,   248,   249,   250,  1367,
     272,   253,   254,   255,   256,   257,   258,   259,     7,     7,
       7,   263,  1380,     7,  1382,     5,     5,   269,     5,   243,
     244,   245,   266,   247,   248,   249,   250,     7,   267,   253,
     254,   255,   256,   257,   258,   259,   272,   267,  1406,   263,
       7,   267,   249,   250,     5,   269,   253,   254,   255,   256,
     257,   258,   259,   260,  1258,     5,   263,     5,   267,   273,
       7,     7,  1430,  1431,     7,  1433,     7,     7,   273,     7,
     274,     7,     7,     7,   243,   244,   245,     7,   247,   248,
     249,   250,     7,  1451,   253,   254,   255,   256,   257,   258,
     259,     7,     7,   272,   263,   272,     7,     7,     7,     7,
     269,     7,   243,   244,   245,   246,   247,   248,   249,   250,
       7,   240,   253,   254,   255,   256,   257,   258,   259,   260,
       7,     7,   263,     7,   272,     7,     7,   256,  1332,  1333,
    1334,     7,   261,   273,   267,   264,  1340,   267,  1342,  1343,
     269,  1345,     7,   272,  1348,  1349,    66,   274,     7,  1353,
     272,   272,  1356,  1357,  1358,  1359,     7,   272,  1362,  1363,
    1364,   272,  1366,   272,   272,   272,  1370,  1371,   273,   272,
     272,  1375,  1376,   274,   273,   273,     7,   272,   274,  1383,
    1384,  1385,  1386,  1387,     3,     4,     5,   272,  1392,   273,
     246,   247,   248,   249,   250,    14,    15,   253,   254,   255,
     256,   257,   258,   259,   260,   136,     7,   263,   273,   273,
       5,   272,  2087,     7,   273,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   940,    64,    65,   581,   694,   243,
     244,   245,  1072,   247,   248,   249,   250,  1558,  1401,   253,
     254,   255,   256,   257,   258,   259,  1634,   939,  1212,   263,
    1682,   546,  1640,   862,    -1,   269,   243,   244,   245,  1647,
     247,   248,   249,   250,   811,    -1,   253,   254,   255,   256,
     257,   258,   259,  1047,    -1,  1663,   263,    -1,    -1,    -1,
      -1,    -1,   269,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    -1,  1684,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,   244,   245,
    1698,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
    1564,  1565,    -1,    -1,    -1,  1569,  1570,     7,  1572,  1573,
      -1,    -1,    -1,    -1,    -1,  1579,    -1,  1581,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,  1599,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,  1623,
    1624,  1625,  1626,  1627,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,   255,   256,    -1,    -1,
       7,    -1,   261,    -1,    -1,   264,    -1,    -1,    -1,    -1,
     269,   270,    -1,   272,    -1,    -1,    -1,    -1,  1662,    -1,
      -1,    -1,  1666,    -1,    -1,  1669,  1670,    -1,    -1,    -1,
      -1,  1839,    -1,    -1,  1678,    -1,  1844,    -1,  1846,    -1,
      -1,    -1,    -1,    -1,    -1,  1853,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1866,    -1,
      -1,    -1,    -1,    -1,    -1,  1873,    -1,    -1,    -1,    -1,
      -1,    -1,  1716,  1717,  1718,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1727,  1728,  1729,  1730,  1731,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,  1905,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,  1789,    -1,    -1,    -1,    -1,
    1794,    -1,    -1,  1961,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,   244,   245,    -1,   247,   248,   249,
     250,  1979,    -1,   253,   254,   255,   256,   257,   258,   259,
    1824,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,
    1834,  1835,  1836,  1837,    -1,    -1,  1840,    -1,  1842,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1850,  1851,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,  1875,  1876,  1877,   269,  1879,   243,   244,   245,    -1,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,     7,    -1,   263,    -1,    -1,    -1,
    1904,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1921,    -1,    -1,
      -1,    -1,    -1,  1927,    -1,   243,   244,   245,    -1,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,  1948,   263,  1950,    -1,    -1,    -1,
       7,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    85,    -1,    87,
      88,    -1,    90,    -1,    -1,    -1,  1980,  1981,  1982,    -1,
      -1,   256,   100,    -1,    -1,    -1,   261,    -1,    -1,   264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,   117,
     118,   119,    -1,     7,    -1,    -1,    -1,  2011,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,  2022,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,  2031,    -1,    -1,
    2034,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2051,    -1,    -1,
       7,    -1,    -1,    -1,  2058,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2073,
    2074,     3,     4,     5,    -1,    -1,   194,    -1,    -1,    -1,
      -1,  2085,    14,    15,    -1,  2089,    -1,    -1,    -1,    -1,
    2094,    -1,    -1,  2097,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     3,     4,     5,
     243,   244,   245,    -1,   247,   248,   249,   250,    14,    15,
     253,   254,   255,   256,   257,   258,   259,    -1,   266,    -1,
     263,    27,    28,    29,    30,   273,   269,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     3,     4,     5,   243,   244,   245,    -1,
     247,   248,   249,   250,    14,    15,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,   269,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,   243,   244,   245,   263,
     247,   248,   249,   250,    -1,   269,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,   269,    -1,    -1,   217,   243,   244,   245,   221,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,     3,    -1,    -1,
       5,     7,   269,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    16,    17,    18,   256,    20,    -1,    -1,    -1,   261,
      -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    33,    -1,
     272,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,    -1,     7,   253,   254,   255,   256,   257,   258,   259,
     260,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,     7,
      66,     5,    -1,    -1,   274,    -1,    72,    11,    12,    13,
     256,    -1,    16,    17,    18,   261,    20,    -1,   264,    85,
      -1,    87,    -1,    -1,    -1,    -1,   272,    -1,    -1,    33,
      -1,    -1,    -1,    99,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   243,   244,   245,    -1,   247,   248,   249,   250,   115,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,   256,   269,    -1,    -1,
     136,   261,   274,    -1,   264,    -1,    -1,    -1,    -1,    -1,
      -1,   146,   272,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,
      -1,   176,    -1,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   195,
      -1,   197,   197,    -1,    -1,    -1,    -1,   202,    -1,    -1,
     205,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,
      -1,    -1,   176,    -1,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,   202,     5,
      -1,   205,    -1,    -1,    -1,    11,    12,    13,   273,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,    33,   253,   254,
     255,   256,   257,   258,   259,   243,   244,   245,   263,   247,
     248,   249,   250,    -1,   269,   253,   254,   255,   256,   257,
     258,   259,     8,    -1,    -1,   263,    -1,    -1,    -1,     5,
      -1,   269,    -1,    -1,    -1,    11,    12,    13,    -1,   273,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,
     176,    -1,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,
     176,    -1,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,   202,     5,    -1,   205,
      -1,    -1,    -1,    11,    12,    13,    -1,   273,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,   243,   244,   245,
      -1,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,     8,    -1,   263,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,   273,    16,    17,
      18,   256,    20,    -1,    -1,    -1,   261,    -1,    -1,   264,
       3,     4,     5,    -1,   269,    33,    -1,    -1,    -1,    -1,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,   173,    -1,    -1,   176,    -1,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    -1,   202,    -1,    -1,   205,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,   173,    -1,    -1,   176,    -1,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    -1,   202,     5,    -1,   205,    -1,    -1,
      -1,    11,    12,    13,    -1,   273,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,   244,   245,    33,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,     8,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,   273,    16,    17,    18,    -1,
      20,    -1,    -1,   256,     3,     4,     5,     6,   261,    -1,
      -1,   264,    -1,    33,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,    -1,    -1,   176,    -1,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,   202,    -1,    -1,   205,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,    -1,    -1,   176,    -1,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,   202,     5,    -1,   205,    -1,    -1,    -1,    11,
      12,    13,    -1,   273,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,   243,   244,   245,    -1,   247,   248,   249,   250,
      -1,    33,   253,   254,   255,   256,   257,   258,   259,   243,
     244,   245,   263,   247,   248,   249,   250,    -1,   269,   253,
     254,   255,   256,   257,   258,   259,     8,    -1,    -1,   263,
      -1,    -1,    -1,     5,    -1,   269,    -1,    -1,    -1,    11,
      12,    13,    -1,   273,    16,    17,    18,   256,    20,    -1,
      -1,    -1,   261,    -1,    -1,   264,     3,     4,     5,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     8,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,    -1,   176,    -1,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,
     202,    -1,    -1,   205,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,    -1,   176,    -1,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,
     202,     5,    -1,   205,    -1,    -1,    -1,    11,    12,    13,
      -1,   273,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,   243,   244,   245,    -1,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,     8,
      -1,   263,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,   273,    16,    17,    18,    -1,    20,    -1,    -1,   256,
      -1,    -1,    -1,    -1,   261,    -1,    -1,   264,    -1,    33,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,   269,   243,   244,   245,
      -1,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,   146,   269,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,
      -1,    -1,   176,    -1,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,   202,    -1,
      -1,   205,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    79,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,
      -1,    -1,   176,    -1,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,   202,     5,
      -1,   205,    -1,    -1,    -1,    11,    12,    13,    -1,   273,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,   243,   244,   245,    33,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,   273,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,
     176,    -1,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,
     176,    -1,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,     3,     4,     5,    -1,   202,    -1,    -1,   205,
      -1,    -1,    -1,    14,    15,    -1,    -1,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    73,    11,    12,    13,    -1,   273,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,   243,   244,   245,    33,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,    -1,
      -1,    -1,    -1,   274,    -1,   243,   244,   245,    66,   247,
     248,   249,   250,    -1,    72,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    85,    -1,    87,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,   103,    -1,    -1,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,   115,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,   136,   274,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,   243,   244,   245,   269,   247,   248,   249,
     250,   274,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,
      -1,    -1,    -1,    -1,   274,   256,    -1,   195,    -1,   197,
     261,    -1,    -1,   264,   243,   244,   245,    -1,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,   243,   244,   245,
     269,   247,   248,   249,   250,   274,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
     243,   244,   245,   269,   247,   248,   249,   250,   274,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,   243,   244,   245,   269,   247,   248,   249,
     250,   274,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,   243,   244,   245,   269,
     247,   248,   249,   250,   274,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,   243,
     244,   245,   269,   247,   248,   249,   250,   274,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,   243,   244,   245,   269,   247,   248,   249,   250,
     274,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,   243,   244,   245,   269,   247,
     248,   249,   250,   274,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,   243,   244,
     245,   269,   247,   248,   249,   250,   274,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,   243,   244,   245,   269,   247,   248,   249,   250,   274,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,   243,   244,   245,   269,   247,   248,
     249,   250,   274,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,   243,   244,   245,
     269,   247,   248,   249,   250,   274,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
     243,   244,   245,   269,   247,   248,   249,   250,   274,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,   243,   244,   245,   269,   247,   248,   249,
     250,   274,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,   243,   244,   245,   269,
     247,   248,   249,   250,   274,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,   243,
     244,   245,   269,   247,   248,   249,   250,   274,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,   243,   244,   245,   269,   247,   248,   249,   250,
     274,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,   243,   244,   245,   269,   247,
     248,   249,   250,   274,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,   243,   244,
     245,   269,   247,   248,   249,   250,   274,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,   243,   244,   245,   269,   247,   248,   249,   250,   274,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,   243,   244,   245,   269,   247,   248,
     249,   250,   274,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,   243,   244,   245,
     269,   247,   248,   249,   250,   274,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
     243,   244,   245,   269,   247,   248,   249,   250,   274,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,   243,   244,   245,   269,   247,   248,   249,
     250,   274,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,   243,   244,   245,   269,
     247,   248,   249,   250,   274,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,   243,
     244,   245,   269,   247,   248,   249,   250,   274,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,   243,   244,   245,   269,   247,   248,   249,   250,
     274,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,   243,   244,   245,   269,   247,
     248,   249,   250,   274,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,   243,   244,
     245,   269,   247,   248,   249,   250,   274,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,   243,   244,   245,   269,   247,   248,   249,   250,   274,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,   243,   244,   245,   269,   247,   248,
     249,   250,   274,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,   243,   244,   245,
     269,   247,   248,   249,   250,   274,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,   269,   243,   244,   245,   273,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
     269,   243,   244,   245,   273,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,   269,   243,   244,
     245,   273,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,   269,   243,   244,   245,   273,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,   269,   243,   244,   245,   273,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,   243,
     244,   245,   273,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,   243,   244,   245,   273,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,   269,   243,   244,   245,   273,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,
     243,   244,   245,   273,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,   269,   243,   244,   245,
     273,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,   269,   243,   244,   245,   273,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
     269,   243,   244,   245,   273,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,   269,   243,   244,
     245,   273,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,   269,   243,   244,   245,   273,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,   269,   243,   244,   245,   273,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,   243,
     244,   245,   273,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,   243,   244,   245,   273,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,   269,   243,   244,   245,   273,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,
     243,   244,   245,   273,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,   265,   243,   244,   245,   269,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,   265,   243,   244,   245,   269,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
     267,    -1,   269,   243,   244,   245,    -1,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,   245,
      -1,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,   267,    -1,   269,   243,   244,   245,    -1,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,
     269,   243,   244,   245,    -1,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,    -1,   267,    -1,   269,   243,   244,   245,    -1,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,
      -1,   269,   243,   244,   245,    -1,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,   267,    -1,   269,   243,   244,   245,    -1,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
     267,    -1,   269,   243,   244,   245,    -1,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,   245,
      -1,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,   267,    -1,   269,   243,   244,   245,    -1,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,
     269,   243,   244,   245,    -1,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,    -1,   267,    -1,   269,   243,   244,   245,    -1,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,
      -1,   269,   243,   244,   245,    -1,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,   267,    -1,   269,   243,   244,   245,    -1,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
     267,    -1,   269,   243,   244,   245,    -1,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,   265,   243,   244,   245,   269,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,   265,   243,   244,   245,   269,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
     267,    -1,   269,   243,   244,   245,    -1,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,   245,
      -1,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,   267,    -1,   269,   243,   244,   245,    -1,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,
     269,   243,   244,   245,    -1,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,    -1,   267,    -1,   269,   243,   244,   245,    -1,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,
      -1,   269,   243,   244,   245,    -1,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,   267,    -1,   269,   243,   244,   245,    -1,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
     267,    -1,   269,   243,   244,   245,    -1,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,   269,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,   245,
      -1,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,
      -1,   267,    -1,   269,   243,   244,   245,    -1,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,
     269,   243,   244,   245,    -1,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,   267,    -1,   269,   243,   244,
     245,    -1,   247,   248,   249,   250,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,   263,    -1,
      -1,    -1,   267,    -1,   269,   243,   244,   245,    -1,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,
      -1,   269,   243,   244,   245,    -1,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,   243,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,   260,    -1,    -1,   263,
      -1,    -1,    -1,   267,   243,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,   253,   254,   255,   256,   257,   258,
     259,   260,    -1,    -1,   263,    -1,   265,   243,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,   260,    -1,    -1,   263
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   278,   279,     0,   280,   281,     5,    11,    12,    13,
      16,    17,    18,    20,    22,    23,    24,    25,    33,    66,
      72,    85,    87,    99,   103,   115,   136,   195,   197,   282,
     283,   441,   454,   455,   463,   464,   276,   264,   269,   464,
     264,     7,     5,   264,   264,     5,     7,    22,    23,    24,
      40,   202,     7,     3,     7,    66,    72,    85,    87,    99,
     103,   115,   136,   195,   197,     6,     9,    10,   241,   464,
     465,   466,   266,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   464,   276,   242,   272,     6,     7,     7,
     464,   134,     3,     4,    14,    15,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,   256,   261,   264,   458,   459,   464,   467,   468,   458,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   266,   264,   456,
     284,   340,   325,   331,   347,   305,   370,   396,   426,   437,
     199,   272,     5,     6,    27,    28,    29,    30,    31,   240,
     272,   458,   460,   462,   466,   458,   265,   274,   265,   272,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   458,   458,   458,     8,   243,   244,   245,   247,
     248,   249,   250,   253,   254,   255,   256,   257,   258,   259,
     263,   269,   265,   465,   465,   267,   274,   301,     5,    67,
     273,   285,   286,   454,   464,   272,   273,   341,   454,   272,
     273,   272,   273,   272,   273,   348,   454,    71,   273,   306,
     454,   464,   272,   273,   371,   454,   272,   273,   397,   454,
     272,   273,   427,   454,   272,   273,   438,   454,   464,   458,
     272,     7,   266,   266,   266,   266,   266,   266,   458,   461,
     462,     8,     7,     7,   273,     7,   461,     7,   266,   458,
     465,   464,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   265,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   274,
     265,   274,     7,   464,   272,   302,   304,   266,   242,   255,
     266,   342,   326,   332,   349,   266,   266,   372,   398,   428,
     439,   442,   273,   273,   461,     5,     5,   458,   458,   465,
     465,   273,   274,   458,   265,   458,     8,   274,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   274,
     267,   267,   267,   267,   267,   267,   274,   274,   274,     8,
     265,     8,   465,   461,   242,   272,   269,   458,   242,   242,
     300,     5,    73,   269,   289,   293,   242,   458,    86,    90,
     100,   273,   343,    86,   100,   273,   327,    86,    92,   100,
     273,   333,    72,    90,   100,   101,   109,   111,   273,   350,
     454,   307,     5,   267,   289,   291,   464,    90,   100,   116,
     120,   273,   373,   100,   137,   144,   273,   399,   454,   100,
     116,   138,   196,   273,   429,   100,   144,   198,   200,   223,
     273,   440,   272,   273,   267,   274,   274,   274,   267,   267,
     458,   462,     8,     7,   267,   458,   465,   458,   458,   458,
     458,   458,   458,   267,   265,     6,   458,   458,   458,   273,
       5,   289,   289,   267,   301,     3,   264,   272,   275,   297,
     299,   464,     7,   266,   289,   267,     5,   272,     5,     5,
     464,   272,     5,   272,    26,   103,   257,   308,   309,     5,
     272,     5,     5,   464,   272,   272,   272,   267,   301,   242,
     267,     5,     5,   464,   272,   272,     5,   464,   272,   400,
       5,   464,   272,   464,   464,   464,   272,   464,   465,     5,
     443,     5,   458,   458,     7,     7,   458,     7,     8,   273,
     267,   267,   267,   267,   267,   265,   273,   273,     7,     7,
       7,   464,     8,   458,   298,   461,    68,   294,   297,     7,
     242,   272,   344,     7,   272,   302,     7,   328,     7,   334,
     266,   266,   257,     7,   312,   313,     7,   367,     7,   302,
       7,   351,   357,   364,     7,     5,   308,   242,     7,   302,
       7,   374,   380,   302,     7,   401,   272,   302,     7,   430,
       7,     7,     7,   443,     7,     7,     7,   273,   444,   267,
     274,   274,   458,   242,   272,   458,   265,   273,   301,   275,
     290,    70,   344,   272,   273,   454,     7,   272,   273,   272,
     273,   458,     5,   257,     5,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    64,
      65,   126,   133,   249,   255,   256,   261,   264,   269,   270,
     272,   314,   317,   395,   457,   459,   464,   467,   468,   272,
     273,   454,     7,   272,   273,   454,   272,   273,   272,   273,
     454,   272,     7,   308,     7,   272,   273,   454,   121,   122,
     123,   124,   273,   381,   454,     7,   272,   273,   454,   408,
       7,   272,   273,   454,   273,   201,   202,   203,   204,   445,
     454,   458,   458,   273,   272,   458,     8,     8,   256,   299,
     295,   301,   287,   273,   345,   329,   335,   267,   267,   395,
     266,   321,   266,   266,   266,   266,   318,   319,     5,    32,
     314,   314,   314,   314,     3,     3,     5,   147,   221,     5,
     464,   243,   244,   245,   246,   247,   248,   249,   250,   253,
     254,   255,   256,   257,   258,   259,   260,   263,   269,   271,
     266,   322,   322,   368,   352,   358,   365,   458,     7,   375,
     272,   272,   272,   272,   402,     5,    18,   146,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   167,   170,   173,   176,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   197,   202,   205,   273,   409,   454,
     431,   266,   266,   266,   266,   267,   267,   273,   273,   458,
     458,   299,   267,     5,    69,   296,   266,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    84,    90,   103,   273,
     346,    73,    85,   273,   330,    86,    90,    91,   273,   336,
     395,   266,   395,   314,     5,     5,   266,   266,   250,   266,
     265,   464,   273,   315,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
       3,   458,   267,   268,   314,   323,   272,   324,   102,   112,
     113,   114,   273,   369,   100,   102,   103,   104,   105,   106,
     107,   108,   273,   353,   100,   102,   110,   273,   359,    90,
     100,   102,   273,   366,   273,    85,    87,    88,    90,   100,
     117,   118,   119,   134,   194,   266,   273,   376,   386,   386,
     390,   382,    90,   100,   138,   139,   140,   141,   142,   143,
     273,   403,   454,   266,   464,   266,   266,   308,   266,   266,
     266,   266,   266,   266,   266,   266,   266,     7,   266,   266,
     266,   266,   266,   266,   272,   266,   272,   266,   272,   272,
     266,   266,   266,   266,   266,   266,   266,   266,   272,   272,
     266,   266,   266,   266,   266,   272,   272,   266,   410,   411,
      79,   100,   273,   432,   447,   464,     6,   447,   291,     6,
     242,     8,   464,   297,   269,   291,   291,   291,   291,   266,
     308,   266,   308,   308,   308,   272,   464,     5,   266,   308,
      68,   291,     5,   272,     5,     5,   267,   312,   267,   274,
     266,   267,   312,   312,   266,   308,   273,   314,   267,   267,
     274,    73,   461,     5,   293,   296,   464,     5,     5,     5,
     272,   272,   310,   310,   291,   291,     5,     5,   272,   362,
       5,   272,   360,     5,   464,     5,     5,     5,     5,     5,
     111,   121,   464,   464,   458,     3,   291,   460,   378,    85,
      87,    88,    89,   126,   127,   128,   129,   130,   131,   132,
     134,   135,   273,   387,   394,   273,   134,   273,   391,   394,
      90,   114,   272,   273,   383,     5,   464,   272,   404,   464,
     465,   460,   465,   272,   406,   464,   464,   464,     7,   308,
     308,     7,   464,   464,   464,   464,   464,   464,   464,   464,
     464,   308,   464,   464,   464,   464,   458,   415,   458,   417,
     458,   419,   421,   291,   465,   464,   464,   464,   464,   464,
     464,   464,   464,   464,   464,   464,   464,   464,   464,     5,
     464,   266,   266,   272,   464,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   450,   266,   449,   274,   450,   446,
     451,   272,   458,   297,     7,     7,     7,     7,   308,     7,
     308,     7,     7,     7,   459,     7,     7,   308,     7,     7,
       7,   324,   337,     7,     7,   274,   314,   320,   272,   267,
     274,   312,   267,     8,   314,   266,   273,     7,     7,     7,
       7,     7,     7,   302,   272,   354,     5,   308,   311,     7,
       7,     7,     7,     7,   363,     7,   361,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,   377,     7,
       7,     7,     7,   312,     5,     5,     5,   266,   291,     7,
     266,   291,   266,     5,     5,   384,     7,     7,   405,     7,
       7,     7,     7,   407,     7,     7,   267,   267,   267,   274,
     274,   274,   274,   274,   274,   274,   274,   267,   274,   267,
     274,   267,   274,   274,   267,   274,   144,   147,   164,   165,
     166,   273,   416,   274,   144,   147,   164,   165,   168,   169,
     273,   418,   274,    21,    92,   144,   171,   172,   273,   420,
      21,    92,   137,   144,   145,   171,   174,   175,   273,   422,
     274,   267,   274,   274,   274,   274,   274,   274,   273,   273,
     274,   274,   274,   274,   274,   274,   274,   267,   310,   412,
     464,   412,   433,     7,   291,   291,   272,   291,   272,   272,
     272,   272,   272,   451,   291,   255,   256,   257,   258,   274,
     448,   240,   308,   451,   274,   267,   274,   452,   273,   288,
     274,   274,   301,   274,     7,   272,   273,   291,   267,   312,
     458,     3,   267,   250,   316,   291,     7,   116,     7,   301,
     273,   274,   273,   301,   273,   301,   266,   379,   267,     7,
       7,     7,     3,     7,   388,     7,   392,     7,     7,    82,
      83,   120,   134,   273,   385,   273,   301,   273,   301,     7,
     272,     7,   308,   464,   464,   458,   458,   458,   464,   308,
       7,   291,     7,   458,     7,   458,   458,     7,   458,   272,
     308,   458,   458,   308,   458,   272,   308,   458,   458,   458,
     458,   458,   458,   458,   272,   458,   308,   458,   458,   464,
     272,   272,   458,   458,   272,   308,     7,   308,   460,   460,
     460,   458,   460,     7,     7,   464,   464,   458,   464,   464,
     291,     5,     7,   413,   413,     5,   121,   273,   454,   216,
     308,   272,   461,   272,   272,   272,   267,   267,     5,   266,
     451,   267,   134,     7,    79,   140,   176,   206,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   274,   308,   308,   459,   308,   338,   267,   267,   274,
     267,   266,   314,   267,     5,     5,   308,     5,     5,   464,
       7,     7,   267,   312,   312,   395,   395,   395,   291,   464,
     464,   408,   267,   274,   274,   274,   274,   274,   274,   267,
     274,   267,   267,   267,   274,   408,     7,     7,     7,     7,
     274,   408,     7,     7,     7,     7,     7,   274,     7,     7,
     408,     7,     7,     7,     7,     7,   408,   408,     7,     7,
     423,   267,   274,   274,   267,   267,   274,   274,   274,   274,
     274,   267,   267,   267,   274,   273,   274,   267,   274,   414,
     267,   272,   272,     5,   274,   461,   273,   461,   461,   461,
       7,   449,   465,   267,     7,   291,   460,   460,   272,     5,
     250,   251,   465,   458,   458,   460,   458,     5,   453,   453,
     453,   458,     5,   272,   458,   310,   272,   272,   272,   272,
       3,   269,   267,   267,   273,   267,    93,    94,    95,    96,
      97,    98,   273,   339,   267,   458,   312,   273,     7,   273,
     267,     7,   389,   393,     7,     7,     7,     7,   273,     7,
     460,   458,   460,   458,   458,   464,     7,   464,     7,     7,
       7,   308,   273,   308,   273,   308,   273,   273,   273,   272,
     273,     7,   458,   308,     7,     7,   458,   465,   465,   458,
     458,     7,     7,     7,   465,     7,   139,     7,   217,   221,
     460,     7,   434,   434,   272,   308,   273,   273,   273,   273,
     274,   267,     7,   451,   308,   465,   465,     6,   461,   458,
     458,   458,   461,   297,     7,     7,     7,     7,     5,   458,
     458,   458,   458,   458,   272,   273,   267,   115,     7,   274,
     274,    19,   267,   267,   274,   274,   274,   274,   267,   274,
     274,   267,   274,   424,   274,   267,   274,   267,   267,   267,
     274,   274,   273,   274,   465,   465,   460,    85,    87,    90,
     134,   273,   394,   435,   273,   458,   274,   272,   272,   272,
     272,   451,   267,   274,   273,   274,   274,   274,   273,   274,
       7,     7,     7,     7,     7,     7,   458,     5,   312,   395,
     272,     7,     7,   458,   458,   458,   458,     7,   308,   458,
     272,   458,    21,    90,    92,   103,   116,   134,   273,   425,
     308,     7,   308,     7,     7,     7,   458,   458,     7,   308,
     273,   274,     5,     5,     5,   291,   266,   274,   308,   461,
     461,   461,   461,   267,     7,   308,   458,   458,   458,   458,
     273,   302,   267,   267,   408,   267,   267,   267,   274,   267,
     274,   408,   267,     5,     5,   458,   308,     5,   291,   267,
     267,   274,   267,   267,   273,     7,   458,     7,     7,     7,
       7,   436,   458,   273,   273,   273,   273,   273,     7,   274,
     274,   274,   274,   267,     7,     7,     7,   273,     7,     7,
       7,   460,   272,   458,   273,   272,     7,     7,     7,     7,
       7,     7,     7,     7,   308,   272,   272,     7,   273,   312,
     273,   272,   272,   273,   272,   272,   308,   458,   458,   458,
       7,   355,   274,   408,   267,   408,   267,   408,   408,     7,
     267,   272,   460,   461,   272,   461,   461,   273,   273,   273,
     273,    66,   458,   273,   272,   273,     7,   273,   273,     7,
     458,   274,   273,   458,   273,   273,   292,   464,   274,   408,
       7,     7,   273,   460,   273,   273,   273,   272,     7,   272,
     303,   458,   273,   274,   272,   461,   356,   273,   267,   460,
     458,   273,   136,     7,   273,   274,   273,     5,   458,   272,
     303,   273,   458,     7,   274,   273,   458,   274,   458,   273
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
#line 343 "GetDP.y"
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
#line 359 "GetDP.y"
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
#line 383 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; ;}
    break;

  case 19:
#line 407 "GetDP.y"
    {            
      strcpy(yyincludename, (yyvsp[(2) - (2)].c)); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 422 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 424 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 426 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 428 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 430 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 432 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 434 "GetDP.y"
    { Help((yyvsp[(2) - (3)].c)); ;}
    break;

  case 28:
#line 436 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 438 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 440 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 442 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 444 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 446 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 448 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 450 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 452 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 454 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 456 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 458 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 460 "GetDP.y"
    { Print_Object((yyvsp[(2) - (3)].i), &Problem_S); ;}
    break;

  case 43:
#line 495 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (4)].c), 0, 0) ; ;}
    break;

  case 44:
#line 498 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 2, (yyvsp[(2) - (5)].i)) ; ;}
    break;

  case 45:
#line 504 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 0, 0) ;
    ;}
    break;

  case 48:
#line 514 "GetDP.y"
    { Add_Group_2(&Group_S, (yyvsp[(1) - (5)].c), 1, 0, 0, 0) ; ;}
    break;

  case 50:
#line 522 "GetDP.y"
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
#line 532 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = (yyvsp[(10) - (10)].l) ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)(yyvsp[(3) - (10)].d) ; 
    ;}
    break;

  case 52:
#line 539 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = (yyvsp[(14) - (18)].l) ; 
      Add_Group(&Group_S, (yyvsp[(1) - (18)].c), 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)(yyvsp[(16) - (18)].d) ; 
    ;}
    break;

  case 53:
#line 549 "GetDP.y"
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
#line 558 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = (yyvsp[(5) - (6)].l) ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 55:
#line 566 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = (yyvsp[(2) - (2)].l) ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 56:
#line 577 "GetDP.y"
    {
      (yyval.i) = (yyvsp[(1) - (1)].i) ;
    ;}
    break;

  case 57:
#line 582 "GetDP.y"
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
#line 599 "GetDP.y"
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
#line 629 "GetDP.y"
    { (yyval.i) = REGION ; ;}
    break;

  case 60:
#line 632 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_Type, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 61:
#line 644 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l) ; ;}
    break;

  case 62:
#line 645 "GetDP.y"
    { (yyval.l) = NULL ; ;}
    break;

  case 63:
#line 652 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  (yyval.l) = NULL ; ;}
    break;

  case 64:
#line 655 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; (yyval.l) = (yyvsp[(3) - (3)].l) ; ;}
    break;

  case 65:
#line 658 "GetDP.y"
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
#line 676 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_SuppList, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 67:
#line 689 "GetDP.y"
    {
      (yyval.l) = List_Create(((List_Nbr((yyvsp[(1) - (1)].l)) > 0)? List_Nbr((yyvsp[(1) - (1)].l)) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(1) - (1)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(1) - (1)].l), i) ) ;
    ;}
    break;

  case 68:
#line 696 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 69:
#line 703 "GetDP.y"
    {
      (yyval.l) = List_Create( 5, 5, sizeof(int)) ;
    ;}
    break;

  case 70:
#line 708 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (3)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(3) - (3)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(3) - (3)].l), i) ) ;
    ;}
    break;

  case 71:
#line 715 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (4)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(4) - (4)].l)) ; i++)
	List_Suppress((yyval.l), (int *)List_Pointer((yyvsp[(4) - (4)].l), i), fcmp_int ) ;
    ;}
    break;

  case 72:
#line 726 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &((yyvsp[(1) - (1)].i))) ;
    ;}
    break;

  case 73:
#line 732 "GetDP.y"
    {
      i = (int)(yyvsp[(2) - (3)].d) ;
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
    ;}
    break;

  case 74:
#line 739 "GetDP.y"
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
#line 750 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(yyvsp[(1) - (3)].i) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?(j<=(yyvsp[(3) - (3)].d)):(j>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 76:
#line 759 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)(yyvsp[(2) - (5)].d) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?(j<=(yyvsp[(5) - (5)].d)):(j>=(yyvsp[(5) - (5)].d)) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 77:
#line 767 "GetDP.y"
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
#line 781 "GetDP.y"
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
#line 794 "GetDP.y"
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
#line 833 "GetDP.y"
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
#line 843 "GetDP.y"
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
#line 854 "GetDP.y"
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
#line 869 "GetDP.y"
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
#line 895 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(3) - (4)].d) ; ;}
    break;

  case 88:
#line 900 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 89:
#line 901 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 90:
#line 906 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 94:
#line 925 "GetDP.y"
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
#line 945 "GetDP.y"
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
#line 996 "GetDP.y"
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
#line 1006 "GetDP.y"
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
#line 1029 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = (yyvsp[(3) - (4)].d) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 101:
#line 1035 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (4)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", (yyvsp[(3) - (4)].c)) ;
      Free((yyvsp[(3) - (4)].c)) ;  (yyval.i) = i ;
    ;}
    break;

  case 102:
#line 1041 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 103:
#line 1044 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = (yyvsp[(2) - (2)].l) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 104:
#line 1049 "GetDP.y"
    { Expression_S.Type = UNDEFINED_EXP ; 
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;}
    break;

  case 105:
#line 1056 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1067 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &((yyvsp[(1) - (1)].i))) ; ;}
    break;

  case 108:
#line 1070 "GetDP.y"
    { List_Add(ListOfInt_L, &((yyvsp[(3) - (3)].i))) ; ;}
    break;

  case 109:
#line 1076 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1080 "GetDP.y"
    { (yyval.l) = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1092 "GetDP.y"
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
#line 1105 "GetDP.y"
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
#line 1119 "GetDP.y"
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
#line 1134 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1140 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1146 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1152 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1158 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1164 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1170 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1176 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1182 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1188 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1194 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1200 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1206 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1212 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1218 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1224 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1230 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1237 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1245 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1258 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1264 "GetDP.y"
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
#line 1338 "GetDP.y"
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
#line 1372 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (1)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (1)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1381 "GetDP.y"
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
#line 1393 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1395 "GetDP.y"
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
#line 1407 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1409 "GetDP.y"
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
#line 1421 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1423 "GetDP.y"
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
#line 1437 "GetDP.y"
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
#line 1449 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1455 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1461 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1463 "GetDP.y"
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
#line 1492 "GetDP.y"
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
#line 1518 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CHANGECURRENTPOSITION ;
      WholeQuantity_S.Case.ChangeCurrentPosition.WholeQuantity = (yyvsp[(8) - (9)].l) ;
      WholeQuantity_S.Case.ChangeCurrentPosition.ExpressionIndex = (yyvsp[(4) - (9)].i) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 154:
#line 1528 "GetDP.y"
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

  case 155:
#line 1541 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1547 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1554 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[(2) - (2)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1560 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[(3) - (3)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1567 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[(2) - (2)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1574 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[(3) - (3)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1581 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 162:
#line 1587 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 163:
#line 1596 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 164:
#line 1597 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 165:
#line 1598 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 166:
#line 1603 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 167:
#line 1604 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 168:
#line 1610 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 169:
#line 1613 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 170:
#line 1616 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 171:
#line 1631 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 172:
#line 1636 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 173:
#line 1643 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 175:
#line 1652 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 176:
#line 1657 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 177:
#line 1664 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 178:
#line 1667 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 179:
#line 1674 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 181:
#line 1684 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 182:
#line 1687 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 183:
#line 1690 "GetDP.y"
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

  case 184:
#line 1728 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 185:
#line 1734 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 186:
#line 1741 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 188:
#line 1754 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 189:
#line 1761 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 190:
#line 1764 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 191:
#line 1771 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 192:
#line 1774 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 193:
#line 1781 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 195:
#line 1793 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 196:
#line 1803 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 197:
#line 1813 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 198:
#line 1820 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 199:
#line 1823 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 200:
#line 1830 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 202:
#line 1846 "GetDP.y"
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

  case 203:
#line 1894 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 204:
#line 1897 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 205:
#line 1900 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 206:
#line 1903 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 207:
#line 1906 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 208:
#line 1917 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 210:
#line 1927 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 212:
#line 1937 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 214:
#line 1950 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 215:
#line 1957 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 216:
#line 1965 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 217:
#line 1974 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 218:
#line 1977 "GetDP.y"
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

  case 219:
#line 1995 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 220:
#line 2000 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 221:
#line 2005 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 222:
#line 2014 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 224:
#line 2028 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 225:
#line 2038 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 226:
#line 2043 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 227:
#line 2049 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 228:
#line 2054 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2062 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2070 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2079 "GetDP.y"
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

  case 232:
#line 2097 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2106 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2114 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2122 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(2) - (3)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2132 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2142 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 238:
#line 2152 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 239:
#line 2172 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 241:
#line 2183 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 243:
#line 2194 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 246:
#line 2208 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 247:
#line 2215 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 248:
#line 2223 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 249:
#line 2232 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 250:
#line 2235 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 251:
#line 2238 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 252:
#line 2241 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 253:
#line 2248 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 254:
#line 2254 "GetDP.y"
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

  case 255:
#line 2271 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 256:
#line 2280 "GetDP.y"
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

  case 258:
#line 2301 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 259:
#line 2304 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 260:
#line 2309 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 261:
#line 2314 "GetDP.y"
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

  case 262:
#line 2328 "GetDP.y"
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

  case 263:
#line 2348 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 264:
#line 2353 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 265:
#line 2358 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 266:
#line 2363 "GetDP.y"
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

  case 268:
#line 2397 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 269:
#line 2401 "GetDP.y"
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

  case 270:
#line 2411 "GetDP.y"
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

  case 271:
#line 2475 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 272:
#line 2481 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 273:
#line 2490 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 275:
#line 2501 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 276:
#line 2508 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 277:
#line 2511 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 278:
#line 2518 "GetDP.y"
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

  case 279:
#line 2534 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 280:
#line 2540 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 281:
#line 2543 "GetDP.y"
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

  case 282:
#line 2562 "GetDP.y"
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

  case 283:
#line 2574 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 284:
#line 2581 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 285:
#line 2586 "GetDP.y"
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

  case 286:
#line 2601 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 287:
#line 2607 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 288:
#line 2613 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 289:
#line 2622 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 291:
#line 2634 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 292:
#line 2641 "GetDP.y"
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

  case 293:
#line 2652 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[(2) - (3)].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", (yyvsp[(2) - (3)].c)) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 294:
#line 2666 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 295:
#line 2671 "GetDP.y"
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

  case 296:
#line 2708 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 297:
#line 2717 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 299:
#line 2733 "GetDP.y"
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

  case 300:
#line 2766 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 301:
#line 2769 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 302:
#line 2772 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 303:
#line 2787 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 305:
#line 2797 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 307:
#line 2808 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 309:
#line 2819 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 310:
#line 2826 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 311:
#line 2834 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 313:
#line 2846 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 314:
#line 2852 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 315:
#line 2857 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 317:
#line 2868 "GetDP.y"
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

  case 319:
#line 2891 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 320:
#line 2894 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 321:
#line 2898 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 322:
#line 2901 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 323:
#line 2911 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 324:
#line 2915 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 325:
#line 2923 "GetDP.y"
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

  case 326:
#line 2947 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 327:
#line 2952 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 328:
#line 2958 "GetDP.y"
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

  case 329:
#line 3269 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 330:
#line 3274 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 331:
#line 3283 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 332:
#line 3292 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 333:
#line 3301 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 335:
#line 3309 "GetDP.y"
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

  case 336:
#line 3349 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 337:
#line 3354 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 338:
#line 3359 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 339:
#line 3368 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 340:
#line 3371 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 341:
#line 3374 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 342:
#line 3377 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 343:
#line 3388 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 345:
#line 3399 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 346:
#line 3409 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 347:
#line 3419 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 348:
#line 3433 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 350:
#line 3445 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 351:
#line 3447 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 352:
#line 3449 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 353:
#line 3451 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 354:
#line 3459 "GetDP.y"
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

  case 356:
#line 3484 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 357:
#line 3492 "GetDP.y"
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

  case 358:
#line 3571 "GetDP.y"
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

  case 359:
#line 3625 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 360:
#line 3630 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 361:
#line 3639 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 362:
#line 3648 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 363:
#line 3653 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 364:
#line 3662 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 365:
#line 3673 "GetDP.y"
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

  case 367:
#line 3702 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 368:
#line 3707 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 369:
#line 3715 "GetDP.y"
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

  case 370:
#line 3770 "GetDP.y"
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

  case 371:
#line 3787 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 372:
#line 3788 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 373:
#line 3789 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 374:
#line 3790 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 375:
#line 3791 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 376:
#line 3792 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 377:
#line 3793 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 378:
#line 3794 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 379:
#line 3801 "GetDP.y"
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

  case 380:
#line 3822 "GetDP.y"
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

  case 381:
#line 3846 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 383:
#line 3856 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 385:
#line 3867 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 387:
#line 3879 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 388:
#line 3886 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 389:
#line 3894 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 390:
#line 3897 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 391:
#line 3899 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 393:
#line 3907 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 394:
#line 3912 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 395:
#line 3917 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 396:
#line 3926 "GetDP.y"
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

  case 398:
#line 3946 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 399:
#line 3949 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 400:
#line 3958 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 401:
#line 3961 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 402:
#line 3966 "GetDP.y"
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

  case 403:
#line 3977 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 404:
#line 3982 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 405:
#line 3987 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 407:
#line 3998 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 408:
#line 4007 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 409:
#line 4014 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 410:
#line 4017 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 411:
#line 4029 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(1) - (1)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 412:
#line 4039 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 413:
#line 4045 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 414:
#line 4048 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 415:
#line 4060 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 416:
#line 4068 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 417:
#line 4081 "GetDP.y"
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

  case 418:
#line 4103 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 419:
#line 4110 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 420:
#line 4116 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 421:
#line 4122 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 422:
#line 4128 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 423:
#line 4136 "GetDP.y"
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

  case 424:
#line 4158 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 425:
#line 4165 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 426:
#line 4171 "GetDP.y"
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

  case 427:
#line 4182 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = (yyvsp[(3) - (11)].i) ;
      Operation_P->Case.Test.Operation_True = (yyvsp[(6) - (11)].l) ;
      Operation_P->Case.Test.Operation_False = (yyvsp[(10) - (11)].l) ;
    ;}
    break;

  case 428:
#line 4194 "GetDP.y"
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

  case 429:
#line 4207 "GetDP.y"
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

  case 430:
#line 4222 "GetDP.y"
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

  case 431:
#line 4237 "GetDP.y"
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

  case 432:
#line 4252 "GetDP.y"
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

  case 433:
#line 4272 "GetDP.y"
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

  case 434:
#line 4293 "GetDP.y"
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

  case 435:
#line 4305 "GetDP.y"
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

  case 436:
#line 4325 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (5)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (5)].c)) ;
      Free((yyvsp[(3) - (5)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex = -1;
      Operation_P->Case.UpdateConstraint.Type = ASSIGN;
    ;}
    break;

  case 437:
#line 4338 "GetDP.y"
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

  case 438:
#line 4355 "GetDP.y"
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

  case 439:
#line 4374 "GetDP.y"
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

  case 440:
#line 4395 "GetDP.y"
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

  case 441:
#line 4409 "GetDP.y"
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

  case 442:
#line 4423 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 443:
#line 4430 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SELECTCORRECTION;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SelectCorrection.Iteration = (int)(yyvsp[(5) - (7)].d) ;
    ;}
    break;

  case 444:
#line 4442 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ADDCORRECTION;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (5)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (5)].c)) ;
      Free((yyvsp[(3) - (5)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.AddCorrection.Alpha = 1. ;
    ;}
    break;

  case 445:
#line 4454 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ADDCORRECTION;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.AddCorrection.Alpha = (yyvsp[(5) - (7)].d) ;
    ;}
    break;

  case 446:
#line 4466 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_MULTIPLYSOLUTION;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (7)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (7)].c)) ;
      Free((yyvsp[(3) - (7)].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.MultiplySolution.Alpha = (yyvsp[(5) - (7)].d) ;
    ;}
    break;

  case 447:
#line 4478 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ADDOPPOSITEFULLSOLUTION;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (5)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (5)].c)) ;
      Free((yyvsp[(3) - (5)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 448:
#line 4490 "GetDP.y"
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

  case 449:
#line 4524 "GetDP.y"
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

  case 450:
#line 4537 "GetDP.y"
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

  case 451:
#line 4551 "GetDP.y"
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

  case 452:
#line 4564 "GetDP.y"
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

  case 453:
#line 4576 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 455:
#line 4585 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 457:
#line 4594 "GetDP.y"
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

  case 458:
#line 4605 "GetDP.y"
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

  case 459:
#line 4617 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 460:
#line 4627 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 461:
#line 4635 "GetDP.y"
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

  case 462:
#line 4648 "GetDP.y"
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

  case 463:
#line 4661 "GetDP.y"
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

  case 464:
#line 4675 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 465:
#line 4685 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 466:
#line 4695 "GetDP.y"
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

  case 467:
#line 4709 "GetDP.y"
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

  case 468:
#line 4723 "GetDP.y"
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

  case 469:
#line 4742 "GetDP.y"
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

  case 470:
#line 4760 "GetDP.y"
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

  case 471:
#line 4771 "GetDP.y"
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

  case 472:
#line 4786 "GetDP.y"
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

  case 473:
#line 4801 "GetDP.y"
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

  case 474:
#line 4816 "GetDP.y"
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

  case 475:
#line 4831 "GetDP.y"
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

  case 476:
#line 4846 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 477:
#line 4857 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 478:
#line 4862 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 479:
#line 4872 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 481:
#line 4882 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 482:
#line 4885 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 483:
#line 4895 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 484:
#line 4911 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 486:
#line 4927 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 487:
#line 4931 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 488:
#line 4935 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 489:
#line 4939 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 490:
#line 4944 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 491:
#line 4955 "GetDP.y"
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

  case 493:
#line 4972 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4976 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 495:
#line 4980 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 496:
#line 4984 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 497:
#line 4988 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 498:
#line 4993 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 499:
#line 5004 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 501:
#line 5019 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 5023 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 503:
#line 5027 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 504:
#line 5031 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 505:
#line 5035 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 506:
#line 5046 "GetDP.y"
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

  case 508:
#line 5064 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 509:
#line 5068 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 510:
#line 5072 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 511:
#line 5076 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 512:
#line 5081 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 513:
#line 5091 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 514:
#line 5097 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 515:
#line 5103 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 516:
#line 5113 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 517:
#line 5116 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 518:
#line 5121 "GetDP.y"
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

  case 520:
#line 5139 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 521:
#line 5149 "GetDP.y"
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

  case 522:
#line 5178 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 523:
#line 5181 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 524:
#line 5184 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 525:
#line 5192 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 526:
#line 5209 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 528:
#line 5221 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 530:
#line 5230 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 532:
#line 5243 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 533:
#line 5250 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 534:
#line 5258 "GetDP.y"
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

  case 535:
#line 5271 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 536:
#line 5276 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 537:
#line 5282 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 538:
#line 5285 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 539:
#line 5288 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 540:
#line 5294 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 542:
#line 5305 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 543:
#line 5308 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 544:
#line 5314 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 545:
#line 5319 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 546:
#line 5325 "GetDP.y"
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

  case 547:
#line 5337 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 548:
#line 5342 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 550:
#line 5356 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 551:
#line 5363 "GetDP.y"
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

  case 552:
#line 5391 "GetDP.y"
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

  case 553:
#line 5402 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 554:
#line 5407 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 555:
#line 5416 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 556:
#line 5433 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 558:
#line 5445 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 560:
#line 5452 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 562:
#line 5464 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 563:
#line 5471 "GetDP.y"
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

  case 564:
#line 5483 "GetDP.y"
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

  case 565:
#line 5494 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 566:
#line 5499 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 567:
#line 5505 "GetDP.y"
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

  case 568:
#line 5522 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 569:
#line 5532 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 570:
#line 5535 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 571:
#line 5539 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 572:
#line 5552 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 573:
#line 5557 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 574:
#line 5562 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 575:
#line 5571 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 576:
#line 5580 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 577:
#line 5589 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 578:
#line 5595 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 579:
#line 5600 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 580:
#line 5608 "GetDP.y"
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

  case 581:
#line 5620 "GetDP.y"
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

  case 582:
#line 5643 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 583:
#line 5644 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 584:
#line 5645 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 585:
#line 5646 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 586:
#line 5652 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 587:
#line 5654 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 588:
#line 5660 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 589:
#line 5666 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 590:
#line 5673 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 591:
#line 5682 "GetDP.y"
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

  case 592:
#line 5704 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 593:
#line 5712 "GetDP.y"
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

  case 594:
#line 5723 "GetDP.y"
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

  case 595:
#line 5737 "GetDP.y"
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

  case 596:
#line 5758 "GetDP.y"
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

  case 597:
#line 5785 "GetDP.y"
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

  case 598:
#line 5816 "GetDP.y"
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

  case 599:
#line 5836 "GetDP.y"
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

  case 601:
#line 5872 "GetDP.y"
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

  case 602:
#line 5886 "GetDP.y"
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

  case 603:
#line 5900 "GetDP.y"
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

  case 604:
#line 5914 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 605:
#line 5918 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 606:
#line 5922 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 607:
#line 5926 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 608:
#line 5930 "GetDP.y"
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

  case 609:
#line 5940 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 610:
#line 5945 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 611:
#line 5950 "GetDP.y"
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

  case 612:
#line 5970 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 613:
#line 5974 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 614:
#line 5981 "GetDP.y"
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

  case 615:
#line 5991 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 616:
#line 6000 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 617:
#line 6009 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 618:
#line 6016 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 619:
#line 6024 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 620:
#line 6028 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 621:
#line 6037 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 622:
#line 6041 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 623:
#line 6045 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 624:
#line 6053 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 625:
#line 6059 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 626:
#line 6063 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 627:
#line 6071 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 628:
#line 6078 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 629:
#line 6086 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 630:
#line 6093 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 631:
#line 6101 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 632:
#line 6108 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 633:
#line 6116 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 634:
#line 6120 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 635:
#line 6129 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 636:
#line 6135 "GetDP.y"
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

  case 637:
#line 6185 "GetDP.y"
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

  case 638:
#line 6200 "GetDP.y"
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

  case 639:
#line 6216 "GetDP.y"
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

  case 640:
#line 6236 "GetDP.y"
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

  case 641:
#line 6256 "GetDP.y"
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

  case 642:
#line 6294 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 643:
#line 6298 "GetDP.y"
    {
    ;}
    break;

  case 646:
#line 6314 "GetDP.y"
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

  case 647:
#line 6329 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 648:
#line 6335 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6341 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6347 "GetDP.y"
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

  case 651:
#line 6363 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 652:
#line 6368 "GetDP.y"
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

  case 653:
#line 6384 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 654:
#line 6389 "GetDP.y"
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

  case 655:
#line 6401 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 656:
#line 6411 "GetDP.y"
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

  case 657:
#line 6425 "GetDP.y"
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

  case 659:
#line 6451 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 660:
#line 6457 "GetDP.y"
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

  case 661:
#line 6471 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 662:
#line 6477 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 663:
#line 6487 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 664:
#line 6488 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 665:
#line 6489 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 666:
#line 6490 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 667:
#line 6491 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 668:
#line 6492 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 669:
#line 6493 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 670:
#line 6494 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 671:
#line 6495 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 672:
#line 6496 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 673:
#line 6497 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 674:
#line 6498 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 675:
#line 6499 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 676:
#line 6500 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 677:
#line 6501 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 678:
#line 6502 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 679:
#line 6503 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 680:
#line 6504 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 681:
#line 6505 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 682:
#line 6506 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 683:
#line 6507 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 684:
#line 6511 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 685:
#line 6512 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 686:
#line 6513 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 687:
#line 6514 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 688:
#line 6515 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 689:
#line 6516 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 690:
#line 6517 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 691:
#line 6518 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 692:
#line 6519 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 693:
#line 6520 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 694:
#line 6521 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 695:
#line 6522 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 696:
#line 6523 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 697:
#line 6524 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 698:
#line 6525 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 699:
#line 6526 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 700:
#line 6527 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 701:
#line 6528 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 702:
#line 6529 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 703:
#line 6530 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 704:
#line 6531 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 705:
#line 6532 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 706:
#line 6533 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 707:
#line 6534 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 708:
#line 6535 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 709:
#line 6536 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 710:
#line 6537 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 711:
#line 6538 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 712:
#line 6539 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 713:
#line 6540 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 714:
#line 6541 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 715:
#line 6542 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 716:
#line 6543 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 717:
#line 6544 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 718:
#line 6545 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 719:
#line 6546 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 720:
#line 6547 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 721:
#line 6548 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 722:
#line 6550 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 723:
#line 6552 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 724:
#line 6554 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 725:
#line 6556 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 726:
#line 6561 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 727:
#line 6562 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 728:
#line 6563 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 729:
#line 6564 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 730:
#line 6565 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 731:
#line 6566 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 732:
#line 6567 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 733:
#line 6569 "GetDP.y"
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

  case 734:
#line 6587 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 735:
#line 6590 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 736:
#line 6596 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 737:
#line 6599 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 738:
#line 6606 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 739:
#line 6612 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 740:
#line 6615 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 741:
#line 6618 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 742:
#line 6630 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 743:
#line 6636 "GetDP.y"
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

  case 744:
#line 6647 "GetDP.y"
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

  case 745:
#line 6663 "GetDP.y"
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

  case 746:
#line 6685 "GetDP.y"
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

  case 747:
#line 6700 "GetDP.y"
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

  case 748:
#line 6738 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 749:
#line 6746 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 750:
#line 6758 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 751:
#line 6766 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 752:
#line 6780 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 753:
#line 6783 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 754:
#line 6790 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 755:
#line 6793 "GetDP.y"
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

  case 756:
#line 6808 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 757:
#line 6813 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 758:
#line 6818 "GetDP.y"
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

  case 759:
#line 6837 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 760:
#line 6847 "GetDP.y"
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

  case 761:
#line 6860 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;

  case 762:
#line 6872 "GetDP.y"
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
#line 12290 "GetDP.tab.c"
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


#line 6884 "GetDP.y"



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


