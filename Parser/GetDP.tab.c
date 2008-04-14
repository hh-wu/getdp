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

/* $Id: GetDP.tab.c,v 1.129 2008-04-14 18:31:03 geuzaine Exp $ */
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
/* Line 193 of yacc.c.  */
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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYLAST   7855

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  277
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  193
/* YYNRULES -- Number of rules.  */
#define YYNRULES  763
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2101

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
     488,   492,   496,   499,   502,   505,   506,   517,   521,   523,
     527,   530,   532,   535,   536,   542,   543,   551,   552,   564,
     574,   579,   584,   585,   593,   600,   603,   606,   609,   612,
     616,   619,   623,   625,   627,   631,   634,   638,   640,   644,
     645,   649,   656,   657,   662,   663,   666,   670,   675,   676,
     681,   682,   685,   689,   693,   698,   699,   704,   705,   708,
     712,   716,   721,   722,   727,   728,   731,   735,   739,   744,
     745,   750,   751,   754,   758,   762,   766,   770,   774,   778,
     779,   782,   786,   788,   789,   792,   796,   801,   805,   810,
     816,   817,   822,   825,   826,   829,   833,   837,   841,   845,
     849,   853,   861,   865,   869,   873,   877,   881,   889,   897,
     905,   906,   909,   913,   915,   916,   919,   922,   926,   931,
     935,   940,   945,   950,   955,   956,   961,   964,   965,   968,
     972,   976,   981,   986,   994,   998,  1002,  1006,  1010,  1011,
    1012,  1013,  1032,  1033,  1038,  1039,  1042,  1046,  1050,  1054,
    1056,  1060,  1061,  1065,  1067,  1071,  1072,  1076,  1077,  1082,
    1085,  1086,  1089,  1093,  1097,  1101,  1102,  1107,  1110,  1111,
    1114,  1118,  1122,  1126,  1130,  1131,  1134,  1138,  1140,  1141,
    1144,  1148,  1153,  1157,  1162,  1167,  1168,  1173,  1176,  1177,
    1180,  1184,  1188,  1192,  1196,  1200,  1201,  1207,  1211,  1212,
    1218,  1222,  1226,  1230,  1234,  1238,  1239,  1243,  1244,  1247,
    1250,  1255,  1260,  1265,  1270,  1271,  1274,  1278,  1282,  1286,
    1287,  1290,  1294,  1298,  1302,  1306,  1307,  1310,  1311,  1312,
    1322,  1326,  1330,  1334,  1337,  1341,  1347,  1348,  1351,  1355,
    1356,  1357,  1367,  1368,  1370,  1372,  1374,  1376,  1378,  1380,
    1382,  1387,  1391,  1392,  1395,  1399,  1401,  1402,  1405,  1409,
    1414,  1419,  1420,  1426,  1428,  1429,  1434,  1437,  1438,  1441,
    1445,  1449,  1453,  1457,  1461,  1465,  1469,  1473,  1475,  1477,
    1481,  1482,  1486,  1488,  1492,  1493,  1497,  1498,  1501,  1505,
    1509,  1514,  1519,  1524,  1529,  1535,  1541,  1544,  1552,  1564,
    1572,  1586,  1598,  1608,  1616,  1624,  1632,  1642,  1648,  1658,
    1668,  1680,  1692,  1704,  1710,  1718,  1724,  1732,  1740,  1746,
    1764,  1778,  1794,  1806,  1820,  1821,  1829,  1830,  1838,  1846,
    1858,  1864,  1870,  1880,  1890,  1900,  1906,  1912,  1924,  1934,
    1949,  1964,  1972,  1985,  1996,  2004,  2012,  2020,  2022,  2024,
    2026,  2027,  2030,  2034,  2038,  2041,  2042,  2045,  2049,  2053,
    2057,  2061,  2066,  2067,  2070,  2074,  2078,  2082,  2086,  2090,
    2095,  2096,  2099,  2103,  2107,  2111,  2115,  2120,  2121,  2124,
    2128,  2132,  2136,  2140,  2144,  2149,  2154,  2159,  2160,  2165,
    2166,  2169,  2173,  2177,  2181,  2185,  2189,  2193,  2194,  2197,
    2201,  2203,  2204,  2207,  2211,  2216,  2220,  2224,  2229,  2230,
    2235,  2238,  2239,  2242,  2246,  2251,  2252,  2258,  2264,  2267,
    2268,  2271,  2272,  2279,  2283,  2287,  2291,  2295,  2296,  2299,
    2303,  2305,  2306,  2309,  2313,  2317,  2321,  2325,  2330,  2331,
    2340,  2341,  2342,  2346,  2354,  2362,  2371,  2383,  2390,  2391,
    2402,  2404,  2408,  2415,  2417,  2419,  2421,  2423,  2424,  2428,
    2430,  2433,  2436,  2449,  2452,  2468,  2473,  2486,  2504,  2527,
    2540,  2541,  2544,  2548,  2553,  2558,  2562,  2565,  2568,  2572,
    2576,  2580,  2584,  2588,  2591,  2595,  2599,  2603,  2607,  2611,
    2615,  2619,  2625,  2628,  2631,  2635,  2645,  2649,  2652,  2662,
    2665,  2675,  2678,  2688,  2694,  2698,  2701,  2702,  2705,  2712,
    2721,  2730,  2741,  2743,  2748,  2750,  2752,  2758,  2763,  2768,
    2776,  2781,  2789,  2795,  2799,  2803,  2811,  2817,  2826,  2829,
    2830,  2834,  2841,  2847,  2853,  2855,  2857,  2859,  2861,  2863,
    2865,  2867,  2869,  2871,  2873,  2875,  2877,  2879,  2881,  2883,
    2885,  2887,  2889,  2891,  2893,  2895,  2897,  2901,  2904,  2907,
    2911,  2915,  2919,  2923,  2927,  2931,  2935,  2939,  2943,  2947,
    2951,  2955,  2959,  2963,  2968,  2973,  2978,  2983,  2988,  2993,
    2998,  3003,  3008,  3013,  3020,  3025,  3030,  3035,  3040,  3045,
    3050,  3057,  3064,  3071,  3077,  3079,  3081,  3084,  3086,  3088,
    3090,  3092,  3094,  3096,  3098,  3100,  3101,  3103,  3105,  3109,
    3111,  3113,  3117,  3121,  3125,  3131,  3135,  3140,  3145,  3152,
    3161,  3170,  3176,  3182,  3184,  3186,  3188,  3190,  3192,  3197,
    3204,  3206,  3213,  3220
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     278,     0,    -1,    -1,   279,   280,    -1,    -1,    -1,   280,
     281,   282,    -1,    66,   272,   284,   273,    -1,   103,   272,
     305,   273,    -1,    72,   272,   341,   273,    -1,    85,   272,
     326,   273,    -1,    87,   272,   332,   273,    -1,    99,   272,
     348,   273,    -1,   115,   272,   371,   273,    -1,   136,   272,
     397,   273,    -1,   195,   272,   427,   273,    -1,   197,   272,
     438,   273,    -1,   442,    -1,   455,    -1,    25,   466,    -1,
     283,    -1,    22,     7,    -1,    22,   202,     7,    -1,    22,
      24,     7,    -1,    22,    40,     7,    -1,    22,    23,     7,
      -1,    22,    22,     7,    -1,    22,     5,     7,    -1,    23,
       7,    -1,    24,     7,    -1,    24,    66,     7,    -1,    24,
     103,     7,    -1,    24,    72,     7,    -1,    24,    85,     7,
      -1,    24,    87,     7,    -1,    24,    99,     7,    -1,    24,
     115,     7,    -1,    24,   136,     7,    -1,    24,   195,     7,
      -1,    24,   197,     7,    -1,    24,     3,     7,    -1,    -1,
     284,   285,    -1,   465,   242,   289,     7,    -1,     5,   304,
     242,   289,     7,    -1,     5,   302,   242,   289,     7,    -1,
      67,   266,   300,   267,     7,    -1,   286,    -1,   465,   255,
     242,   289,     7,    -1,   455,    -1,    -1,    -1,   465,   266,
     459,   267,   242,    70,   287,   266,   269,   297,   288,   274,
     269,   297,   274,   459,   267,     7,    -1,    -1,   293,   266,
     294,   290,   295,   267,    -1,   269,   297,    -1,   289,    -1,
     465,    -1,   465,   303,    -1,    73,    -1,     5,    -1,   297,
      -1,    68,    -1,    -1,   301,   296,   297,    -1,   301,    69,
     465,    -1,     5,    -1,   299,    -1,   272,   298,   273,    -1,
      -1,   298,   301,   299,    -1,   298,   301,   256,   299,    -1,
       3,    -1,   264,   459,   265,    -1,   275,   462,   275,    -1,
       3,     8,   459,    -1,   264,   459,   265,     8,   459,    -1,
       3,     8,   459,     8,   459,    -1,   264,   459,   265,     8,
     459,     8,   459,    -1,   465,    -1,    -1,   300,   301,   465,
      -1,   300,   301,   465,   242,   272,   273,    -1,   300,   301,
     465,   272,   459,   273,    -1,   300,   301,   465,   272,   459,
     273,   242,   272,   273,    -1,    -1,   274,    -1,   272,   269,
     459,   273,    -1,    -1,   272,   273,    -1,   272,   459,   273,
      -1,    -1,   305,   306,    -1,    71,   266,   307,   267,     7,
      -1,   465,   266,   267,   242,   308,     7,    -1,   465,   266,
     291,   267,   242,   308,     7,    -1,   455,    -1,    -1,   307,
     301,     5,    -1,   307,   301,     5,   272,   459,   273,    -1,
      26,   266,   459,   267,    -1,   103,   266,     5,   267,    -1,
      -1,   309,   312,    -1,   257,   257,   257,    -1,    -1,   272,
     311,   273,    -1,   308,    -1,   311,   274,   308,    -1,    -1,
     313,   314,    -1,   318,    -1,    -1,    -1,   314,   243,   315,
     314,     8,   316,   314,    -1,   314,   257,   314,    -1,   314,
     260,   314,    -1,    62,   266,   314,   274,   314,   267,    -1,
     314,   258,   314,    -1,   314,   255,   314,    -1,   314,   256,
     314,    -1,   314,   259,   314,    -1,   314,   263,   314,    -1,
     314,   249,   314,    -1,   314,   250,   314,    -1,   314,   254,
     314,    -1,   314,   253,   314,    -1,   314,   248,   314,    -1,
     314,   247,   314,    -1,   314,   246,   314,    -1,   314,   245,
     314,    -1,   314,   244,   314,    -1,   256,   314,    -1,   255,
     314,    -1,   261,   314,    -1,    -1,   249,    32,   266,   314,
     267,   250,   317,   266,   314,   267,    -1,   264,   314,   265,
      -1,   460,    -1,   458,   323,   325,    -1,     5,   396,    -1,
     396,    -1,   396,   323,    -1,    -1,   126,   319,   266,   312,
     267,    -1,    -1,   133,   320,   266,   312,   274,     3,   267,
      -1,    -1,    64,   266,     5,   266,   321,   312,   267,   267,
     272,   459,   273,    -1,    65,   266,     5,   267,   272,   459,
     274,   459,   273,    -1,    59,   266,   396,   267,    -1,    61,
     266,   396,   267,    -1,    -1,    60,   322,   266,   312,   274,
     291,   267,    -1,   249,     5,   250,   266,   312,   267,    -1,
     270,     5,    -1,   270,   221,    -1,   270,   147,    -1,   270,
       3,    -1,   318,   269,     3,    -1,   269,     3,    -1,   318,
     271,   459,    -1,   468,    -1,   469,    -1,   266,   268,   267,
      -1,   266,   267,    -1,   266,   324,   267,    -1,   314,    -1,
     324,   274,   314,    -1,    -1,   272,   462,   273,    -1,   272,
      73,   266,   291,   267,   273,    -1,    -1,   326,   272,   327,
     273,    -1,    -1,   327,   328,    -1,   100,     5,     7,    -1,
      86,   272,   329,   273,    -1,    -1,   329,   272,   330,   273,
      -1,    -1,   330,   331,    -1,    73,   291,     7,    -1,    73,
      68,     7,    -1,    85,     5,   325,     7,    -1,    -1,   332,
     272,   333,   273,    -1,    -1,   333,   334,    -1,   100,     5,
       7,    -1,    92,   308,     7,    -1,    86,   272,   335,   273,
      -1,    -1,   335,   272,   336,   273,    -1,    -1,   336,   337,
      -1,    90,     5,     7,    -1,    91,     5,     7,    -1,    86,
     272,   338,   273,    -1,    -1,   338,   272,   339,   273,    -1,
      -1,   339,   340,    -1,    93,     5,     7,    -1,    94,   459,
       7,    -1,    95,   459,     7,    -1,    96,   459,     7,    -1,
      97,   459,     7,    -1,    98,   459,     7,    -1,    -1,   341,
     342,    -1,   272,   343,   273,    -1,   455,    -1,    -1,   343,
     344,    -1,   100,   465,     7,    -1,   100,     5,   302,     7,
      -1,    90,     5,     7,    -1,    86,   272,   345,   273,    -1,
      86,     5,   272,   345,   273,    -1,    -1,   345,   272,   346,
     273,    -1,   345,   455,    -1,    -1,   346,   347,    -1,    90,
       5,     7,    -1,    73,   291,     7,    -1,    74,   291,     7,
      -1,    80,   308,     7,    -1,    79,   308,     7,    -1,    84,
     465,     7,    -1,    81,   272,   460,   301,   460,   273,     7,
      -1,    75,   291,     7,    -1,    76,   291,     7,    -1,   103,
     308,     7,    -1,    78,   308,     7,    -1,    77,   308,     7,
      -1,   103,   266,   308,   274,   308,   267,     7,    -1,    78,
     266,   308,   274,   308,   267,     7,    -1,    77,   266,   308,
     274,   308,   267,     7,    -1,    -1,   348,   349,    -1,   272,
     350,   273,    -1,   455,    -1,    -1,   350,   351,    -1,   350,
     455,    -1,   100,   465,     7,    -1,   100,     5,   302,     7,
      -1,    90,     5,     7,    -1,   101,   272,   352,   273,    -1,
     109,   272,   358,   273,    -1,   111,   272,   365,   273,    -1,
      72,   272,   368,   273,    -1,    -1,   352,   272,   353,   273,
      -1,   352,   455,    -1,    -1,   353,   354,    -1,   100,     5,
       7,    -1,   102,     5,     7,    -1,   102,     5,   302,     7,
      -1,   103,     5,   355,     7,    -1,   104,   272,     5,   301,
       5,   273,     7,    -1,   105,   310,     7,    -1,   106,   310,
       7,    -1,   107,   291,     7,    -1,   108,   291,     7,    -1,
      -1,    -1,    -1,   272,   116,     5,     7,   115,     5,   302,
       7,   356,    66,   292,     7,   357,   136,     5,   303,     7,
     273,    -1,    -1,   358,   272,   359,   273,    -1,    -1,   359,
     360,    -1,   100,     5,     7,    -1,   110,   361,     7,    -1,
     102,   363,     7,    -1,     5,    -1,   272,   362,   273,    -1,
      -1,   362,   301,     5,    -1,     5,    -1,   272,   364,   273,
      -1,    -1,   364,   301,     5,    -1,    -1,   365,   272,   366,
     273,    -1,   365,   455,    -1,    -1,   366,   367,    -1,   100,
     465,     7,    -1,    90,     5,     7,    -1,   102,     5,     7,
      -1,    -1,   368,   272,   369,   273,    -1,   368,   455,    -1,
      -1,   369,   370,    -1,   102,     5,     7,    -1,   112,   293,
       7,    -1,   113,   296,     7,    -1,   114,   465,     7,    -1,
      -1,   371,   372,    -1,   272,   373,   273,    -1,   455,    -1,
      -1,   373,   374,    -1,   100,   465,     7,    -1,   100,     5,
     302,     7,    -1,    90,     5,     7,    -1,   116,   272,   375,
     273,    -1,   120,   272,   381,   273,    -1,    -1,   375,   272,
     376,   273,    -1,   375,   455,    -1,    -1,   376,   377,    -1,
     100,   465,     7,    -1,    90,   111,     7,    -1,    90,   121,
       7,    -1,    90,     5,     7,    -1,   194,   461,     7,    -1,
      -1,   117,   465,   378,   380,     7,    -1,   118,   459,     7,
      -1,    -1,   266,   379,   312,   267,     7,    -1,   134,   291,
       7,    -1,    87,     5,     7,    -1,    88,     5,     7,    -1,
      85,     5,     7,    -1,   119,     3,     7,    -1,    -1,   266,
     465,   267,    -1,    -1,   381,   382,    -1,   381,   455,    -1,
     121,   272,   387,   273,    -1,   122,   272,   387,   273,    -1,
     123,   272,   391,   273,    -1,   124,   272,   383,   273,    -1,
      -1,   383,   384,    -1,    90,     5,     7,    -1,   114,     5,
       7,    -1,   272,   385,   273,    -1,    -1,   385,   386,    -1,
      82,   396,     7,    -1,    83,   396,     7,    -1,   120,   396,
       7,    -1,   134,   291,     7,    -1,    -1,   387,   388,    -1,
      -1,    -1,   395,   266,   389,   312,   390,   274,   312,   267,
       7,    -1,   134,   291,     7,    -1,    85,     5,     7,    -1,
      87,     5,     7,    -1,   135,     7,    -1,    88,     5,     7,
      -1,    89,   266,     3,   267,     7,    -1,    -1,   391,   392,
      -1,   134,   291,     7,    -1,    -1,    -1,   395,   266,   393,
     312,   394,   274,   396,   267,     7,    -1,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,
     132,    -1,   272,     5,   465,   273,    -1,   272,   465,   273,
      -1,    -1,   397,   398,    -1,   272,   399,   273,    -1,   455,
      -1,    -1,   399,   400,    -1,   100,   465,     7,    -1,   100,
       5,   302,     7,    -1,   137,   272,   402,   273,    -1,    -1,
     144,   401,   272,   409,   273,    -1,   455,    -1,    -1,   402,
     272,   403,   273,    -1,   402,   455,    -1,    -1,   403,   404,
      -1,   100,   465,     7,    -1,    90,     5,     7,    -1,   138,
     405,     7,    -1,   139,   466,     7,    -1,   142,   407,     7,
      -1,   143,   465,     7,    -1,   140,   461,     7,    -1,   141,
     466,     7,    -1,   455,    -1,   465,    -1,   272,   406,   273,
      -1,    -1,   406,   301,   465,    -1,   465,    -1,   272,   408,
     273,    -1,    -1,   408,   301,   465,    -1,    -1,   409,   410,
      -1,     5,   465,     7,    -1,   146,   308,     7,    -1,   163,
     272,   416,   273,    -1,   167,   272,   418,   273,    -1,   170,
     272,   420,   273,    -1,   173,   272,   422,   273,    -1,     5,
     266,   465,   267,     7,    -1,   146,   266,   308,   267,     7,
      -1,   157,     7,    -1,    18,   266,   308,   267,   272,   409,
     273,    -1,    18,   266,   308,   267,   272,   409,   273,    19,
     272,   409,   273,    -1,   148,   266,   465,   274,   308,   267,
       7,    -1,   179,   266,   465,   274,   308,   274,   308,   274,
     308,   274,   308,   267,     7,    -1,   179,   266,   465,   274,
     308,   274,   308,   274,   308,   267,     7,    -1,   179,   266,
     465,   274,   308,   274,   308,   267,     7,    -1,   180,   266,
     465,   274,   461,   267,     7,    -1,   181,   266,   465,   274,
     461,   267,     7,    -1,   155,   266,   465,   274,   308,   267,
       7,    -1,   156,   266,   465,   274,   291,   274,   465,   267,
       7,    -1,   156,   266,   465,   267,     7,    -1,   149,   266,
     465,   274,   465,   274,   461,   267,     7,    -1,   150,   266,
     465,   274,   465,   274,   459,   267,     7,    -1,   151,   266,
     465,   274,   459,   274,   461,   274,   459,   267,     7,    -1,
     152,   266,   465,   274,   459,   274,   459,   274,   459,   267,
       7,    -1,   153,   266,   465,   274,   459,   274,   459,   274,
     459,   267,     7,    -1,   158,   266,   308,   267,     7,    -1,
     159,   266,   465,   274,   459,   267,     7,    -1,   160,   266,
     465,   267,     7,    -1,   160,   266,   465,   274,   459,   267,
       7,    -1,   161,   266,   465,   274,   459,   267,     7,    -1,
     162,   266,   465,   267,     7,    -1,   154,   266,   465,   274,
     465,   274,   465,   274,   459,   274,   461,   274,   459,   274,
     459,   267,     7,    -1,   163,   266,   459,   274,   459,   274,
     308,   274,   308,   267,   272,   409,   273,    -1,   167,   266,
     459,   274,   459,   274,   308,   274,   459,   274,   459,   267,
     272,   409,   273,    -1,   170,   266,   459,   274,   459,   274,
     308,   267,   272,   409,   273,    -1,   170,   266,   459,   274,
     459,   274,   308,   274,   459,   267,   272,   409,   273,    -1,
      -1,   202,   411,   266,   413,   414,   267,     7,    -1,    -1,
     205,   412,   266,   413,   414,   267,     7,    -1,   176,   266,
     291,   274,   308,   267,     7,    -1,   176,   266,   291,   274,
     308,   274,   459,   274,   308,   267,     7,    -1,   197,   266,
     465,   267,     7,    -1,   178,   266,   466,   267,     7,    -1,
     182,   266,   465,   274,   461,   274,   459,   267,     7,    -1,
     183,   266,   465,   274,   459,   274,   466,   267,     7,    -1,
     184,   266,   465,   274,   461,   274,   466,   267,     7,    -1,
     185,   272,   465,   273,     7,    -1,   186,   272,   465,   273,
       7,    -1,   192,   272,   465,   274,   291,   274,   466,   274,
     308,   273,     7,    -1,   192,   272,   465,   274,   291,   274,
     466,   273,     7,    -1,   187,   266,   465,   274,   465,   274,
     459,   274,   459,   267,   272,   409,   273,     7,    -1,   188,
     266,   465,   274,   465,   274,   459,   274,   459,   267,   272,
     409,   273,     7,    -1,   189,   266,   465,   274,   459,   267,
       7,    -1,   193,   272,     5,   274,     5,   274,   139,   466,
     274,   459,   273,     7,    -1,   193,   272,     5,   274,     5,
     274,   139,   466,   273,     7,    -1,   193,   272,     5,   274,
       5,   273,     7,    -1,   190,   266,   465,   274,   465,   267,
       7,    -1,   191,   266,   465,   274,   465,   267,     7,    -1,
     455,    -1,   310,    -1,   465,    -1,    -1,   414,   415,    -1,
     274,   217,   466,    -1,   274,   221,   461,    -1,   274,   461,
      -1,    -1,   416,   417,    -1,   164,   459,     7,    -1,   165,
     459,     7,    -1,   147,   308,     7,    -1,   166,   308,     7,
      -1,   144,   272,   409,   273,    -1,    -1,   418,   419,    -1,
     164,   459,     7,    -1,   165,   459,     7,    -1,   147,   308,
       7,    -1,   168,   459,     7,    -1,   169,   459,     7,    -1,
     144,   272,   409,   273,    -1,    -1,   420,   421,    -1,   171,
     459,     7,    -1,    92,   459,     7,    -1,   172,   308,     7,
      -1,    21,   459,     7,    -1,   144,   272,   409,   273,    -1,
      -1,   422,   423,    -1,   171,   459,     7,    -1,   174,   459,
       7,    -1,    92,   459,     7,    -1,    21,   459,     7,    -1,
     137,   465,     7,    -1,   175,   272,   424,   273,    -1,   144,
     272,   409,   273,    -1,   145,   272,   409,   273,    -1,    -1,
     424,   272,   425,   273,    -1,    -1,   425,   426,    -1,    90,
       5,     7,    -1,   116,     5,     7,    -1,   134,   291,     7,
      -1,    92,   459,     7,    -1,   103,   308,     7,    -1,    21,
       5,     7,    -1,    -1,   427,   428,    -1,   272,   429,   273,
      -1,   455,    -1,    -1,   429,   430,    -1,   100,   465,     7,
      -1,   100,     5,   302,     7,    -1,   138,   465,     7,    -1,
     196,   465,     7,    -1,   116,   272,   431,   273,    -1,    -1,
     431,   272,   432,   273,    -1,   431,   455,    -1,    -1,   432,
     433,    -1,   100,   465,     7,    -1,    79,   272,   434,   273,
      -1,    -1,   434,   121,   272,   435,   273,    -1,   434,     5,
     272,   435,   273,    -1,   434,   455,    -1,    -1,   435,   436,
      -1,    -1,   395,   266,   437,   312,   267,     7,    -1,    90,
       5,     7,    -1,   134,   291,     7,    -1,    85,     5,     7,
      -1,    87,     5,     7,    -1,    -1,   438,   439,    -1,   272,
     440,   273,    -1,   455,    -1,    -1,   440,   441,    -1,   100,
     465,     7,    -1,   198,   465,     7,    -1,   223,     5,     7,
      -1,   200,   466,     7,    -1,   144,   272,   444,   273,    -1,
      -1,   197,   465,   199,   465,   443,   272,   444,   273,    -1,
      -1,    -1,   444,   445,   446,    -1,   201,   266,   448,   451,
     452,   267,     7,    -1,   202,   266,   448,   451,   452,   267,
       7,    -1,   202,   266,     6,   274,   308,   452,   267,     7,
      -1,   202,   266,     6,   274,   240,   266,   466,   267,   452,
     267,     7,    -1,   204,   266,     6,   452,   267,     7,    -1,
      -1,   203,   266,   291,   447,   274,   134,   291,   452,   267,
       7,    -1,   455,    -1,   465,   450,   274,    -1,   465,   450,
     449,     5,   450,   274,    -1,   257,    -1,   258,    -1,   255,
      -1,   256,    -1,    -1,   266,   291,   267,    -1,   207,    -1,
     208,   291,    -1,   209,   291,    -1,   211,   272,   272,   462,
     273,   272,   462,   273,   272,   462,   273,   273,    -1,   210,
     291,    -1,   210,   272,   308,   274,   308,   274,   308,   273,
     272,   461,   274,   461,   274,   461,   273,    -1,   212,   272,
     462,   273,    -1,   213,   272,   272,   462,   273,   272,   462,
     273,   273,   272,   459,   273,    -1,   214,   272,   272,   462,
     273,   272,   462,   273,   272,   462,   273,   273,   272,   459,
     274,   459,   273,    -1,   215,   272,   272,   462,   273,   272,
     462,   273,   272,   462,   273,   272,   462,   273,   273,   272,
     459,   274,   459,   274,   459,   273,    -1,   208,   291,   216,
       5,   272,   459,   274,   459,   273,   272,   459,   273,    -1,
      -1,   452,   453,    -1,   274,   217,   466,    -1,   274,   217,
     250,   466,    -1,   274,   217,   251,   466,    -1,   274,   218,
     459,    -1,   274,   226,    -1,   274,   227,    -1,   274,   222,
     459,    -1,   274,   223,     5,    -1,   274,   224,   454,    -1,
     274,   225,   454,    -1,   274,   223,   454,    -1,   274,   220,
      -1,   274,   219,   459,    -1,   274,   221,   461,    -1,   274,
     206,     5,    -1,   274,   229,     5,    -1,   274,   228,   459,
      -1,   274,    79,   461,    -1,   274,   230,   459,    -1,   274,
     230,   272,   462,   273,    -1,   274,   231,    -1,   274,   232,
      -1,   274,   140,   461,    -1,   274,   176,   272,   308,   274,
     308,   274,   308,   273,    -1,   274,   233,   310,    -1,   274,
     234,    -1,   274,   234,   272,   459,   274,   459,   274,   459,
     273,    -1,   274,   235,    -1,   274,   235,   272,   459,   274,
     459,   274,   459,   273,    -1,   274,   236,    -1,   274,   236,
     272,   459,   274,   459,   274,   459,   273,    -1,   274,   237,
     272,   462,   273,    -1,   274,   238,     3,    -1,   274,   239,
      -1,    -1,   454,     6,    -1,    16,   264,   459,     8,   459,
     265,    -1,    16,   264,   459,     8,   459,     8,   459,   265,
      -1,    16,     5,   134,   272,   459,     8,   459,   273,    -1,
      16,     5,   134,   272,   459,     8,   459,     8,   459,   273,
      -1,    17,    -1,    18,   264,   459,   265,    -1,    20,    -1,
     456,    -1,    33,   266,   457,   267,     7,    -1,   465,   242,
     461,     7,    -1,   465,   242,     6,     7,    -1,   465,   242,
     240,   266,   466,   267,     7,    -1,   465,   242,   467,     7,
      -1,   465,   242,    31,   266,   466,   267,     7,    -1,    11,
     264,     6,   265,     7,    -1,    11,   465,     7,    -1,    11,
     269,     7,    -1,    11,   264,     6,   274,   462,   265,     7,
      -1,    12,   264,   465,   265,     7,    -1,    12,   264,   465,
     265,   266,   459,   267,     7,    -1,    13,     7,    -1,    -1,
     457,   301,   465,    -1,   457,   301,   465,   272,   459,   273,
      -1,   457,   301,   465,   242,   459,    -1,   457,   301,   465,
     242,     6,    -1,    39,    -1,    40,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,    58,    -1,   465,    -1,   460,    -1,   264,   459,   265,
      -1,   256,   459,    -1,   261,   459,    -1,   459,   256,   459,
      -1,   459,   255,   459,    -1,   459,   257,   459,    -1,   459,
     258,   459,    -1,   459,   259,   459,    -1,   459,   263,   459,
      -1,   459,   249,   459,    -1,   459,   250,   459,    -1,   459,
     254,   459,    -1,   459,   253,   459,    -1,   459,   248,   459,
      -1,   459,   247,   459,    -1,   459,   245,   459,    -1,   459,
     244,   459,    -1,    39,   266,   459,   267,    -1,    40,   266,
     459,   267,    -1,    41,   266,   459,   267,    -1,    42,   266,
     459,   267,    -1,    43,   266,   459,   267,    -1,    44,   266,
     459,   267,    -1,    45,   266,   459,   267,    -1,    46,   266,
     459,   267,    -1,    47,   266,   459,   267,    -1,    48,   266,
     459,   267,    -1,    49,   266,   459,   274,   459,   267,    -1,
      50,   266,   459,   267,    -1,    51,   266,   459,   267,    -1,
      52,   266,   459,   267,    -1,    53,   266,   459,   267,    -1,
      54,   266,   459,   267,    -1,    55,   266,   459,   267,    -1,
      56,   266,   459,   274,   459,   267,    -1,    57,   266,   459,
     274,   459,   267,    -1,    58,   266,   459,   274,   459,   267,
      -1,   459,   243,   459,     8,   459,    -1,   468,    -1,   469,
      -1,   459,   269,    -1,     4,    -1,     3,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,   465,    -1,
      -1,   459,    -1,   463,    -1,   272,   462,   273,    -1,   459,
      -1,   463,    -1,   462,   274,   459,    -1,   462,   274,   463,
      -1,   459,     8,   459,    -1,   459,     8,   459,     8,   459,
      -1,     5,   272,   273,    -1,     5,   272,   462,   273,    -1,
      27,   266,     5,   267,    -1,    28,   266,     5,   274,     5,
     267,    -1,    29,   266,   459,   274,   459,   274,   459,   267,
      -1,    30,   266,   459,   274,   459,   274,   459,   267,    -1,
       5,   276,   272,   459,   273,    -1,   464,   276,   272,   459,
     273,    -1,     5,    -1,   464,    -1,     6,    -1,   465,    -1,
     467,    -1,    10,   264,   466,   265,    -1,    10,   264,   466,
     274,   462,   265,    -1,   241,    -1,     9,   266,   466,   274,
     466,   267,    -1,    14,   266,   466,   274,   466,   267,    -1,
      15,   266,   465,   267,    -1
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
    1223,  1229,  1236,  1242,  1244,  1251,  1250,  1281,  1283,  1289,
    1363,  1397,  1406,  1419,  1418,  1433,  1432,  1447,  1446,  1462,
    1474,  1480,  1487,  1486,  1517,  1543,  1556,  1562,  1569,  1575,
    1582,  1589,  1596,  1602,  1612,  1613,  1614,  1619,  1620,  1626,
    1628,  1631,  1647,  1651,  1659,  1661,  1667,  1672,  1680,  1682,
    1690,  1693,  1699,  1702,  1705,  1744,  1749,  1757,  1763,  1769,
    1776,  1779,  1787,  1789,  1797,  1802,  1808,  1818,  1828,  1836,
    1838,  1846,  1855,  1861,  1909,  1912,  1915,  1918,  1921,  1933,
    1937,  1942,  1947,  1953,  1959,  1965,  1972,  1980,  1989,  1992,
    2011,  2015,  2020,  2030,  2037,  2043,  2053,  2058,  2064,  2069,
    2077,  2085,  2094,  2112,  2121,  2129,  2137,  2147,  2157,  2167,
    2188,  2193,  2198,  2203,  2210,  2215,  2217,  2223,  2230,  2238,
    2247,  2250,  2253,  2256,  2264,  2269,  2286,  2296,  2310,  2316,
    2319,  2324,  2329,  2343,  2363,  2368,  2373,  2378,  2407,  2413,
    2417,  2411,  2491,  2496,  2506,  2510,  2516,  2523,  2526,  2533,
    2549,  2556,  2558,  2577,  2589,  2597,  2601,  2617,  2622,  2628,
    2638,  2643,  2649,  2656,  2667,  2682,  2686,  2723,  2733,  2742,
    2748,  2781,  2784,  2787,  2803,  2807,  2812,  2817,  2824,  2828,
    2834,  2841,  2849,  2859,  2861,  2868,  2872,  2877,  2884,  2900,
    2906,  2909,  2913,  2916,  2926,  2931,  2930,  2962,  2968,  2967,
    3284,  3289,  3298,  3307,  3316,  3321,  3324,  3365,  3369,  3374,
    3383,  3386,  3389,  3392,  3404,  3409,  3414,  3424,  3434,  3449,
    3455,  3460,  3462,  3464,  3466,  3475,  3493,  3500,  3508,  3499,
    3640,  3645,  3654,  3663,  3668,  3677,  3689,  3703,  3717,  3723,
    3731,  3722,  3803,  3804,  3805,  3806,  3807,  3808,  3809,  3810,
    3816,  3837,  3862,  3866,  3871,  3876,  3883,  3888,  3894,  3901,
    3909,  3913,  3912,  3917,  3923,  3927,  3932,  3942,  3955,  3961,
    3964,  3973,  3976,  3981,  3992,  3997,  4002,  4007,  4013,  4022,
    4030,  4032,  4044,  4054,  4061,  4063,  4076,  4083,  4096,  4118,
    4125,  4131,  4137,  4143,  4151,  4173,  4180,  4186,  4197,  4209,
    4222,  4237,  4252,  4267,  4287,  4308,  4320,  4340,  4353,  4370,
    4389,  4410,  4424,  4438,  4445,  4457,  4469,  4481,  4493,  4504,
    4538,  4551,  4565,  4578,  4592,  4591,  4601,  4600,  4609,  4620,
    4632,  4642,  4650,  4663,  4676,  4690,  4700,  4710,  4724,  4738,
    4756,  4775,  4786,  4801,  4816,  4831,  4846,  4861,  4872,  4877,
    4888,  4893,  4897,  4900,  4910,  4927,  4936,  4942,  4946,  4950,
    4954,  4959,  4971,  4981,  4987,  4991,  4995,  4999,  5003,  5008,
    5020,  5029,  5034,  5038,  5042,  5046,  5050,  5062,  5074,  5079,
    5083,  5087,  5091,  5096,  5106,  5112,  5118,  5129,  5131,  5137,
    5149,  5154,  5164,  5193,  5196,  5199,  5207,  5225,  5231,  5236,
    5241,  5246,  5254,  5258,  5265,  5273,  5286,  5291,  5298,  5300,
    5303,  5310,  5315,  5320,  5323,  5330,  5334,  5340,  5352,  5358,
    5367,  5372,  5371,  5406,  5417,  5422,  5431,  5449,  5455,  5460,
    5463,  5468,  5475,  5479,  5486,  5498,  5509,  5514,  5521,  5520,
    5548,  5551,  5550,  5567,  5572,  5577,  5586,  5595,  5605,  5604,
    5615,  5623,  5635,  5659,  5660,  5661,  5662,  5668,  5669,  5675,
    5681,  5688,  5695,  5719,  5726,  5738,  5751,  5771,  5797,  5830,
    5852,  5883,  5887,  5901,  5915,  5929,  5933,  5937,  5941,  5945,
    5955,  5960,  5965,  5985,  5989,  5996,  6006,  6015,  6024,  6031,
    6039,  6043,  6052,  6056,  6060,  6068,  6074,  6078,  6086,  6093,
    6101,  6108,  6116,  6123,  6131,  6135,  6145,  6150,  6200,  6215,
    6231,  6251,  6271,  6309,  6313,  6317,  6327,  6329,  6344,  6350,
    6356,  6362,  6378,  6383,  6399,  6404,  6416,  6426,  6440,  6463,
    6466,  6472,  6486,  6492,  6503,  6504,  6505,  6506,  6507,  6508,
    6509,  6510,  6511,  6512,  6513,  6514,  6515,  6516,  6517,  6518,
    6519,  6520,  6521,  6522,  6523,  6527,  6528,  6529,  6530,  6531,
    6532,  6533,  6534,  6535,  6536,  6537,  6538,  6539,  6540,  6541,
    6542,  6543,  6544,  6545,  6546,  6547,  6548,  6549,  6550,  6551,
    6552,  6553,  6554,  6555,  6556,  6557,  6558,  6559,  6560,  6561,
    6562,  6563,  6564,  6566,  6568,  6570,  6572,  6577,  6578,  6579,
    6580,  6581,  6582,  6583,  6584,  6603,  6605,  6611,  6614,  6621,
    6627,  6630,  6633,  6645,  6651,  6662,  6678,  6700,  6715,  6753,
    6761,  6773,  6781,  6795,  6798,  6805,  6808,  6823,  6828,  6833,
    6852,  6862,  6875,  6887
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
  "WholeQuantity", "@8", "@9", "@10", "WholeQuantity_Single", "@11", "@12",
  "@13", "@14", "ArgumentsForFunction", "RecursiveListOfQuantity",
  "ParametersForFunction", "JacobianMethods", "JacobianMethod",
  "JacobianMethodTerm", "JacobianCases", "JacobianCase",
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod",
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase",
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase",
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint",
  "ConstraintTerm", "ConstraintCases", "ConstraintCase",
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace",
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction",
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@15", "@16",
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction",
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef",
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", "GlobalQuantity",
  "GlobalQuantityTerm", "ConstraintInFSs", "ConstraintInFS",
  "ConstraintInFSTerm", "Formulations", "BracedFormulation", "Formulation",
  "FormulationTerm", "DefineQuantities", "DefineQuantity",
  "DefineQuantityTerm", "@17", "@18", "IndexInFunctionSpace", "Equations",
  "EquationTerm", "GlobalEquation", "GlobalEquationTerm",
  "GlobalEquationTermTerm", "GlobalEquationTermTermTerm", "LocalTerm",
  "LocalTermTerm", "@19", "@20", "GlobalTerm", "GlobalTermTerm", "@21",
  "@22", "TermOperator", "Quantity_Def", "Resolutions", "BracedResolution",
  "Resolution", "ResolutionTerm", "@23", "DefineSystems", "DefineSystem",
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation",
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm",
  "@24", "@25", "PrintOperation", "PrintOperationOptions",
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm",
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop",
  "IterativeLoopTerm", "IterativeTimeReduction",
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState",
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing",
  "PostProcessing", "PostProcessingTerm", "PostQuantities", "PostQuantity",
  "PostQuantityTerm", "SubPostQuantities", "SubPostQuantity",
  "SubPostQuantityTerm", "@26", "PostOperations", "BracedPostOperation",
  "PostOperation", "PostOperationTerm", "SeparatePostOperation", "@27",
  "PostSubOperations", "@28", "PostSubOperation", "@29",
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
     314,   314,   314,   314,   314,   317,   314,   318,   318,   318,
     318,   318,   318,   319,   318,   320,   318,   321,   318,   318,
     318,   318,   322,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   323,   323,   323,   324,   324,   325,
     325,   325,   326,   326,   327,   327,   328,   328,   329,   329,
     330,   330,   331,   331,   331,   332,   332,   333,   333,   334,
     334,   334,   335,   335,   336,   336,   337,   337,   337,   338,
     338,   339,   339,   340,   340,   340,   340,   340,   340,   341,
     341,   342,   342,   343,   343,   344,   344,   344,   344,   344,
     345,   345,   345,   346,   346,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     348,   348,   349,   349,   350,   350,   350,   351,   351,   351,
     351,   351,   351,   351,   352,   352,   352,   353,   353,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   355,   356,
     357,   355,   358,   358,   359,   359,   360,   360,   360,   361,
     361,   362,   362,   363,   363,   364,   364,   365,   365,   365,
     366,   366,   367,   367,   367,   368,   368,   368,   369,   369,
     370,   370,   370,   370,   371,   371,   372,   372,   373,   373,
     374,   374,   374,   374,   374,   375,   375,   375,   376,   376,
     377,   377,   377,   377,   377,   378,   377,   377,   379,   377,
     377,   377,   377,   377,   377,   380,   380,   381,   381,   381,
     382,   382,   382,   382,   383,   383,   384,   384,   384,   385,
     385,   386,   386,   386,   386,   387,   387,   389,   390,   388,
     388,   388,   388,   388,   388,   388,   391,   391,   392,   393,
     394,   392,   395,   395,   395,   395,   395,   395,   395,   395,
     396,   396,   397,   397,   398,   398,   399,   399,   400,   400,
     400,   401,   400,   400,   402,   402,   402,   403,   403,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   405,   405,
     406,   406,   407,   407,   408,   408,   409,   409,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   411,   410,   412,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   413,   413,
     414,   414,   415,   415,   415,   416,   416,   417,   417,   417,
     417,   417,   418,   418,   419,   419,   419,   419,   419,   419,
     420,   420,   421,   421,   421,   421,   421,   422,   422,   423,
     423,   423,   423,   423,   423,   423,   423,   424,   424,   425,
     425,   426,   426,   426,   426,   426,   426,   427,   427,   428,
     428,   429,   429,   430,   430,   430,   430,   430,   431,   431,
     431,   432,   432,   433,   433,   434,   434,   434,   434,   435,
     435,   437,   436,   436,   436,   436,   436,   438,   438,   439,
     439,   440,   440,   441,   441,   441,   441,   441,   443,   442,
     444,   445,   444,   446,   446,   446,   446,   446,   447,   446,
     446,   448,   448,   449,   449,   449,   449,   450,   450,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     452,   452,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   454,   454,   455,   455,
     455,   455,   455,   455,   455,   455,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   457,
     457,   457,   457,   457,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   460,   460,   460,
     460,   460,   460,   460,   460,   461,   461,   461,   461,   462,
     462,   462,   462,   463,   463,   463,   463,   463,   463,   463,
     463,   464,   464,   465,   465,   466,   466,   466,   466,   466,
     466,   467,   468,   469
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
       3,     3,     2,     2,     2,     0,    10,     3,     1,     3,
       2,     1,     2,     0,     5,     0,     7,     0,    11,     9,
       4,     4,     0,     7,     6,     2,     2,     2,     2,     3,
       2,     3,     1,     1,     3,     2,     3,     1,     3,     0,
       3,     6,     0,     4,     0,     2,     3,     4,     0,     4,
       0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
       3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
       4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     4,     3,     4,     5,
       0,     4,     2,     0,     2,     3,     3,     3,     3,     3,
       3,     7,     3,     3,     3,     3,     3,     7,     7,     7,
       0,     2,     3,     1,     0,     2,     2,     3,     4,     3,
       4,     4,     4,     4,     0,     4,     2,     0,     2,     3,
       3,     4,     4,     7,     3,     3,     3,     3,     0,     0,
       0,    18,     0,     4,     0,     2,     3,     3,     3,     1,
       3,     0,     3,     1,     3,     0,     3,     0,     4,     2,
       0,     2,     3,     3,     3,     0,     4,     2,     0,     2,
       3,     3,     3,     3,     0,     2,     3,     1,     0,     2,
       3,     4,     3,     4,     4,     0,     4,     2,     0,     2,
       3,     3,     3,     3,     3,     0,     5,     3,     0,     5,
       3,     3,     3,     3,     3,     0,     3,     0,     2,     2,
       4,     4,     4,     4,     0,     2,     3,     3,     3,     0,
       2,     3,     3,     3,     3,     0,     2,     0,     0,     9,
       3,     3,     3,     2,     3,     5,     0,     2,     3,     0,
       0,     9,     0,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     2,     3,     1,     0,     2,     3,     4,
       4,     0,     5,     1,     0,     4,     2,     0,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       0,     3,     1,     3,     0,     3,     0,     2,     3,     3,
       4,     4,     4,     4,     5,     5,     2,     7,    11,     7,
      13,    11,     9,     7,     7,     7,     9,     5,     9,     9,
      11,    11,    11,     5,     7,     5,     7,     7,     5,    17,
      13,    15,    11,    13,     0,     7,     0,     7,     7,    11,
       5,     5,     9,     9,     9,     5,     5,    11,     9,    14,
      14,     7,    12,    10,     7,     7,     7,     1,     1,     1,
       0,     2,     3,     3,     2,     0,     2,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
       3,     3,     3,     3,     4,     4,     4,     0,     4,     0,
       2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
       1,     0,     2,     3,     4,     3,     3,     4,     0,     4,
       2,     0,     2,     3,     4,     0,     5,     5,     2,     0,
       2,     0,     6,     3,     3,     3,     3,     0,     2,     3,
       1,     0,     2,     3,     3,     3,     3,     4,     0,     8,
       0,     0,     3,     7,     7,     8,    11,     6,     0,    10,
       1,     3,     6,     1,     1,     1,     1,     0,     3,     1,
       2,     2,    12,     2,    15,     4,    12,    17,    22,    12,
       0,     2,     3,     4,     4,     3,     2,     2,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     5,     2,     2,     3,     9,     3,     2,     9,     2,
       9,     2,     9,     5,     3,     2,     0,     2,     6,     8,
       8,    10,     1,     4,     1,     1,     5,     4,     4,     7,
       4,     7,     5,     3,     3,     7,     5,     8,     2,     0,
       3,     6,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
       6,     6,     6,     5,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       1,     3,     3,     3,     5,     3,     4,     4,     6,     8,
       8,     5,     5,     1,     1,     1,     1,     1,     4,     6,
       1,     6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   753,     0,     0,     0,
       0,   642,     0,   644,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   645,   754,     0,     0,     0,     0,     0,
       0,   658,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   755,     0,     0,   760,   756,
      19,   757,   659,    41,   209,   172,   185,   240,    91,   304,
     382,   527,   557,     0,     0,   735,     0,     0,   654,   653,
       0,     0,   728,   727,     0,     0,   729,   730,   731,   732,
     733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   685,   734,   724,   725,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   753,     0,     0,     0,     0,     0,     0,     0,
       0,   736,     0,   737,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   687,   688,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   726,   643,     0,     0,     0,    86,     0,   753,     0,
       7,    42,    47,    49,     0,   213,     9,   210,   212,   174,
      10,   187,    11,   244,    12,   241,   243,     0,     8,    92,
      96,     0,   308,    13,   305,   307,   386,    14,   383,   385,
     531,    15,   528,   530,   561,    16,   558,   560,   568,     0,
       0,   648,     0,     0,     0,     0,     0,     0,   739,     0,
     740,     0,   647,   650,   751,   652,     0,   656,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   686,     0,     0,   702,   701,   700,   699,   695,
     696,   698,   697,   690,   689,   691,   692,   693,   694,     0,
     758,     0,   646,   660,     0,     0,     0,    80,   735,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   752,   745,     0,     0,     0,     0,     0,     0,
       0,   738,     0,   743,     0,     0,     0,     0,   763,   703,
     704,   705,   706,   707,   708,   709,   710,   711,   712,     0,
     714,   715,   716,   717,   718,   719,     0,     0,     0,     0,
     638,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   753,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   211,   214,     0,     0,   173,   175,     0,   102,     0,
     186,   188,     0,     0,     0,     0,     0,     0,   242,   245,
     246,    85,   753,     0,    56,     0,    57,     0,     0,     0,
       0,   306,   309,     0,     0,   391,   384,   387,   393,     0,
       0,     0,     0,   529,   532,     0,     0,     0,     0,     0,
     559,   562,   570,   746,   747,     0,     0,     0,     0,     0,
     741,   742,     0,   655,     0,     0,     0,     0,     0,     0,
       0,     0,   723,   761,   759,   663,   662,     0,     0,    90,
      60,     0,     0,     0,     0,    72,     0,    69,     0,    55,
      67,    79,    43,     0,     0,     0,     0,   220,     0,   753,
       0,   178,     0,   192,     0,     0,     0,     0,   109,     0,
     295,     0,   753,     0,   254,   272,   287,     0,     0,   102,
       0,     0,   753,     0,   315,   337,   753,     0,   394,     0,
     753,     0,   538,     0,     0,     0,   570,     0,     0,     0,
     571,     0,     0,     0,   651,   649,   744,   657,     0,   640,
     762,   713,   720,   721,   722,   639,   661,    87,    45,    44,
      46,    81,     0,     0,    85,     0,    62,    53,    61,    48,
       0,   220,     0,   217,     0,     0,   215,     0,   176,     0,
       0,     0,     0,   190,   103,     0,   189,     0,   249,     0,
     247,     0,     0,     0,    93,    98,     0,   102,   312,     0,
     310,     0,     0,     0,   388,     0,   416,     0,   533,     0,
     535,   536,   563,   571,   564,   566,   565,   569,     0,   748,
       0,     0,     0,     0,     0,    75,    73,    68,     0,    74,
      85,    50,     0,   223,   218,   222,   216,   180,   177,   194,
     191,     0,     0,   104,   753,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   683,     0,   152,     0,     0,     0,
       0,   143,   145,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   141,     0,   138,   734,   162,   163,   298,
     253,   297,   248,   257,   250,   256,   274,   251,   290,   252,
     289,     0,    94,     0,   311,   318,   313,   317,     0,     0,
       0,     0,   314,   338,   339,   389,   397,   390,   396,     0,
     534,   541,   537,   540,   567,     0,     0,     0,     0,   572,
     580,     0,     0,   641,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   219,     0,     0,     0,   100,   101,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   132,   134,     0,   160,   158,   155,   157,   156,   753,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,   169,     0,     0,     0,     0,     0,    95,     0,
     355,   355,   366,   344,     0,   753,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   454,   456,   392,   417,   477,
       0,     0,     0,     0,     0,   749,   750,    82,    83,    77,
      76,    71,    54,    66,     0,     0,     0,     0,     0,     0,
       0,   102,   102,   102,   102,     0,     0,     0,   102,   221,
     224,     0,     0,   179,   181,     0,     0,     0,   193,   195,
       0,   109,     0,     0,     0,     0,   109,   109,     0,     0,
     137,     0,   381,     0,   131,   130,   129,   128,   127,   123,
     124,   126,   125,   119,   120,   115,   118,   121,   116,   122,
     159,   161,   165,     0,   167,     0,     0,   139,     0,     0,
       0,     0,   296,   299,     0,     0,     0,     0,   105,   105,
       0,     0,   255,   258,     0,     0,     0,   273,   275,     0,
       0,     0,   288,   291,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   735,   328,   316,   319,   372,   372,
     372,     0,     0,     0,     0,     0,   735,     0,     0,     0,
     395,   398,   407,     0,     0,   102,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   426,   102,     0,
       0,     0,     0,     0,   485,     0,   492,     0,   500,   507,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   539,   542,     0,   587,     0,     0,   578,   600,
       0,     0,    65,    64,     0,     0,     0,     0,     0,   102,
       0,   102,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,   169,   199,     0,     0,   150,     0,   151,     0,
     147,     0,     0,     0,   109,     0,   380,     0,   164,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,   102,     0,     0,     0,     0,     0,   283,   285,     0,
     279,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   325,     0,     0,     0,     0,   109,     0,
       0,     0,     0,   373,   374,   375,   376,   377,   378,   379,
       0,     0,   340,   356,     0,   341,     0,   342,   367,     0,
       0,     0,   349,   343,   345,     0,     0,   410,     0,   408,
       0,     0,     0,   414,     0,   412,     0,     0,   418,     0,
       0,   419,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   105,   545,     0,   589,     0,     0,     0,     0,
       0,     0,     0,     0,   600,     0,     0,   102,   600,     0,
       0,     0,    78,    51,   226,   227,   232,   233,     0,   236,
       0,   235,   229,   228,    85,   230,   225,     0,   234,   183,
     182,     0,     0,   196,   197,     0,     0,   109,     0,   144,
       0,     0,     0,   113,   168,     0,   170,   300,   301,   302,
     303,   259,   260,     0,     0,     0,    85,   107,     0,   264,
     265,   266,   267,   276,    85,   278,    85,   277,   293,   292,
     294,   333,   331,   332,   323,   321,   322,   320,   335,   327,
     334,   330,   324,     0,     0,     0,     0,     0,     0,   363,
     357,     0,   369,     0,     0,     0,   400,   399,    85,   401,
     402,   405,   406,    85,   403,   404,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     102,   420,   486,     0,     0,   102,     0,     0,     0,     0,
     421,   493,     0,     0,     0,     0,     0,   102,   422,   501,
       0,     0,     0,     0,     0,     0,     0,     0,   423,   508,
     102,     0,   102,   735,   735,   735,     0,   735,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   478,   480,
     479,   480,     0,   543,   590,   591,   102,   593,     0,     0,
       0,     0,     0,     0,     0,   585,   586,   583,   584,   581,
       0,     0,   600,     0,     0,     0,     0,   601,    84,     0,
     102,   102,     0,   102,   184,   201,   198,     0,   117,     0,
       0,     0,   154,   135,     0,     0,   261,     0,   262,     0,
     106,   102,   284,     0,   280,     0,     0,     0,     0,   361,
     362,   364,     0,   360,   109,   368,   109,   346,   347,     0,
       0,     0,     0,   348,   350,   409,     0,   413,     0,   424,
     416,   425,     0,     0,     0,     0,     0,     0,     0,     0,
     437,     0,   443,     0,   445,     0,     0,   448,     0,   416,
       0,     0,     0,     0,     0,   416,     0,     0,     0,     0,
       0,     0,     0,     0,   416,     0,     0,     0,     0,     0,
     416,   416,     0,     0,   517,     0,   461,     0,     0,     0,
       0,     0,     0,   465,   466,     0,     0,     0,     0,     0,
       0,     0,   460,     0,     0,   753,     0,   544,   548,     0,
       0,     0,     0,     0,     0,     0,     0,   588,   587,     0,
       0,     0,     0,   577,   735,   735,     0,     0,     0,     0,
       0,   613,   735,     0,   636,   636,   636,   606,   607,     0,
       0,     0,   622,   623,   105,   627,   629,   631,     0,     0,
     635,     0,     0,     0,     0,     0,     0,   153,     0,     0,
     146,     0,   114,     0,     0,     0,   108,   286,   282,     0,
     326,   329,     0,   358,   370,     0,     0,     0,     0,   411,
     415,     0,     0,   735,     0,   735,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,   489,   487,   488,   490,
     102,     0,   496,   494,   495,   497,   498,   102,   505,   503,
       0,   502,   504,   512,   511,   513,     0,     0,   509,   510,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   735,   481,
       0,   549,   549,     0,   102,     0,   595,     0,     0,     0,
     573,     0,     0,     0,   574,   600,   619,   624,   102,   616,
       0,     0,   602,   605,   614,   615,   608,   609,   612,   610,
     611,   618,   617,     0,   620,   626,     0,     0,     0,     0,
     634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,   202,     0,     0,     0,   171,     0,     0,
     336,   365,     0,     0,   351,   352,   353,   354,   427,   429,
       0,     0,     0,     0,     0,     0,   435,     0,   444,   446,
     447,     0,   491,     0,   499,     0,   506,   515,   516,   519,
     514,   458,     0,     0,   433,   434,     0,     0,     0,     0,
       0,   471,   475,   476,     0,   474,     0,   455,     0,   735,
     484,   457,   372,   372,     0,     0,     0,     0,     0,     0,
     582,   600,   575,     0,     0,   603,   604,   637,     0,     0,
       0,     0,     0,     0,   239,   238,   231,   237,     0,     0,
       0,     0,     0,     0,     0,   149,     0,     0,   263,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,   102,     0,   102,     0,     0,     0,
       0,     0,     0,   102,     0,   482,   483,     0,     0,     0,
       0,   547,     0,   550,   546,     0,   102,     0,     0,     0,
       0,     0,     0,   102,   621,     0,     0,     0,   633,     0,
     203,   204,   205,   206,   207,   208,     0,   136,     0,     0,
       0,   416,   438,   439,     0,     0,     0,     0,   436,     0,
       0,   416,     0,     0,     0,     0,   102,     0,     0,   518,
     520,     0,   432,     0,   462,   463,   464,     0,     0,   468,
       0,     0,     0,     0,     0,     0,     0,   551,     0,     0,
       0,     0,     0,     0,     0,   579,     0,     0,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,   735,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,   473,     0,   555,   556,
     553,   554,   109,     0,     0,     0,     0,     0,     0,   576,
     102,     0,     0,     0,     0,   269,   359,   371,   428,   440,
     441,   442,     0,   416,     0,   452,   416,   526,   521,   524,
     525,   522,   523,   459,   431,     0,   416,   416,   467,     0,
       0,     0,   735,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
     472,     0,     0,     0,     0,     0,     0,     0,   625,   628,
     630,   632,     0,     0,   450,   416,   453,   430,     0,     0,
     552,     0,   735,     0,     0,     0,     0,     0,    88,     0,
       0,   469,   470,   599,     0,   592,   596,     0,     0,   270,
       0,    58,     0,   451,   735,     0,     0,     0,    89,     0,
       0,     0,     0,     0,   449,   594,     0,     0,    88,     0,
       0,     0,   597,     0,     0,     0,   271,     0,     0,     0,
     598
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   150,   231,   232,
     752,  1429,   434,   640,   435,  2057,   405,   577,   750,   875,
     499,   574,   500,   400,   227,   335,  2071,   336,   155,   249,
     431,   517,   518,  1398,  1278,   594,   595,   691,   913,  1444,
    1601,   692,   766,   767,  1257,   761,   801,   935,   937,   152,
     342,   416,   587,   755,   894,   153,   343,   421,   589,   756,
     899,  1252,  1596,  1733,   151,   237,   341,   412,   582,   754,
     890,   154,   245,   344,   429,   601,   804,   953,  1275,  2022,
    2077,   602,   805,   958,  1112,  1286,  1109,  1284,   603,   806,
     963,   597,   803,   943,   156,   254,   347,   442,   611,   809,
     977,  1298,  1128,  1457,   612,   723,   981,  1154,  1315,  1474,
     978,  1143,  1464,  1742,   980,  1148,  1466,  1743,  1144,   693,
     157,   258,   348,   447,   539,   615,   814,   991,  1158,  1318,
    1164,  1323,   729,   858,  1038,  1039,  1399,  1543,  1679,  1187,
    1352,  1189,  1361,  1191,  1369,  1192,  1379,  1660,  1843,  1910,
     158,   262,   349,   454,   619,   860,  1043,  1402,  1792,  1863,
    1972,   159,   266,   350,   461,    31,   351,   550,   628,   739,
    1229,  1044,  1420,  1226,  1224,  1230,  1427,  1708,   859,    33,
     149,   694,   278,   125,   172,   279,   280,    34,   126,    70,
      71,   127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1461
static const yytype_int16 yypact[] =
{
   -1461,    78, -1461, -1461,   126,  5043,  -145,    10,   -41,   268,
      20, -1461,    -8, -1461,   557,   283,  1845,   180,    59,     5,
      42,    61,    79,    84,   100,   134,   153,   179,    16, -1461,
   -1461, -1461, -1461, -1461,   178,   229,   232,   474,   528,   552,
     490, -1461,   441,  4826,  4826,   593, -1461,   596,   609,   614,
     643,   647, -1461,   660, -1461,   665,   677,   679,   692,   706,
     708,   715,   728,   740,   744, -1461,   361,   347, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461,   534,   498,  2670,  4826,    -1, -1461, -1461,
     495,   501, -1461, -1461,   496,   530, -1461, -1461, -1461, -1461,
   -1461,   535,   539,   542,   546,   554,   556,   563,   576,   578,
     586,   588,   605,   610,   612,   618,   622,   626,   635,   650,
     659,  4826,  4826,  4826,  2857, -1461, -1461, -1461, -1461,  6295,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461,   180,   180,  -164,
      53,    72,  -112,   115,    96,   538,   151,   658,   685,  1042,
     490,  4826,   113,   787,   662,   666,   669,   678,   690,   693,
    4333,  4646,   807, -1461,   852,  5782,   873,  4333,    68,  4826,
     180,   490,  4826,  4826,  4826,  4826,  4826,  4826,  4826,  4826,
    4826,  4826,  4826,  4826,  4826,  4826,  4826,  4826,  4826,  4826,
    4826,  4826,  -139,  -139,  6318,  4826,  4826,  4826,  4826,  4826,
    4826,  4826,  4826,  4826,  4826,  4826,  4826,  4826,  4826,  4826,
    4826, -1461, -1461,   707,    11,   944, -1461,   490,   200,   701,
   -1461, -1461, -1461, -1461,   128, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461,   721, -1461, -1461,
   -1461,  -151, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,  5809,
    1770, -1461,   984,  1005,  4826,  4826,   180,   180,  4646,   144,
   -1461,  4826, -1461, -1461, -1461, -1461,   139, -1461,  4826,  4673,
     757,   747,  6341,  6368,  6395,  6422,  6449,  6476,  6503,  6530,
    6557,  6584,  4849,  6611,  6638,  6665,  6692,  6719,  6746,  4906,
    4968,  5000, -1461,  4302,  4696,  1928,  2106,   684,   684,   592,
     592,   592,   592,   691,   691,  -139,  -139,  -139,  -139,   180,
   -1461,  4333, -1461,  -131,  2726,   802,   804, -1461,  2566,   806,
    4826,   130,   127,   340,   644, -1461,    48,   488,   249,   573,
     548,   780, -1461, -1461,   251,   805,   799,  5023,  5046,   809,
     810, -1461,  4333,  4726,  1071,  6773,  4826,   180, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,  4826,
   -1461, -1461, -1461, -1461, -1461, -1461,  4826,  4826,  4826,  4826,
   -1461,  4826,   812,   146,  4595,  4826,  4826,  5836,    67,    67,
    -108,  -144, -1461,    28,  1073,   815,    67,  6800,    22,  1077,
    1078, -1461, -1461,   817,  1079, -1461, -1461,   819,    55,  1087,
   -1461, -1461,   821,  1089,  1094,   828,   832,   835, -1461, -1461,
   -1461,   -56,    76,   867, -1461,   843, -1461,  1106,  1107,   841,
     850, -1461, -1461,  1119,   853, -1461, -1461, -1461, -1461,  1122,
     857,   490,   490, -1461, -1461,   490,   858,   490,   180,  1123,
   -1461, -1461, -1461, -1461, -1461,  1126,  4826,  4826,  1125,  1127,
    4646, -1461,  4826, -1461,  1130,  1430,   866,  6827,  6854,  6881,
    6908,  6935,  7467, -1461, -1461, -1461,  7467,  5863,  5890, -1461,
   -1461,  1131,  1133,  1135,   490,  1161,  4826, -1461,  4333, -1461,
   -1461, -1461, -1461,    14,  1136,   947,   918, -1461,  1184,   220,
    1188, -1461,  1189, -1461,   934,   936,   946,  1197, -1461,  1198,
   -1461,  1201,   220,  1202, -1461, -1461, -1461,  1208,  1219,    55,
     985,  1221,   220,  1222, -1461, -1461,   220,  1223, -1461,   954,
     220,  1224, -1461,  1225,  1226,  1227, -1461,  1228,  1230,  1234,
     972,   987,  5069,  5092, -1461, -1461,  7467, -1461,  4826, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461,  -124,  4826,  6958,   321,   270, -1461, -1461, -1461, -1461,
    1182, -1461,  1085, -1461,   986,  1249, -1461,   367, -1461,   436,
    4826,  1252,  1001, -1461, -1461,  2199, -1461,  1103, -1461,  1254,
   -1461,  1205,   448,  1231, -1461,   991,  1258,    55, -1461,  1260,
   -1461,  1257,   379,  1265, -1461,  1280, -1461,  1269, -1461,  1429,
   -1461, -1461, -1461,  1006, -1461, -1461, -1461, -1461,  1568, -1461,
    4826,  4826,  5917,  1008,  4826,  4756,  1251, -1461,    45, -1461,
     -17, -1461,  1463, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461,  6981,  1011, -1461,   254, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,  1016, -1461,  1017,  1018,  1020,
    1021, -1461, -1461,    47,  2199,  2199,  2199,  2199,  1286,   216,
    1289,  7592,   -45,  1029,  1029, -1461,  1035, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461,  4826, -1461,  1295, -1461, -1461, -1461, -1461,  1032,  1034,
    1039,  1044, -1461, -1461, -1461, -1461, -1461, -1461, -1461,  1956,
   -1461, -1461, -1461, -1461, -1461,  1041,  1051,  1052,  1062, -1461,
   -1461,  7008,  7035, -1461,  1056,  5944,  4826,  4826,    46, -1461,
    1065,    54,  1068, -1461,  1432,   -18,   142, -1461, -1461, -1461,
    1063,  1072,  1063,  2199,  1332,  1334,  1074,  1075,  1092,  1080,
    1082,  1082,  1082,  7569, -1461, -1461, -1461, -1461, -1461,    17,
    1070, -1461,  2199,  2199,  2199,  2199,  2199,  2199,  2199,  2199,
    2199,  2199,  2199,  2199,  2199,  2199,  2199,  2199,  1344,  4826,
    2024, -1461,  1076,   -15,   760,   604,   248,  5971, -1461,  1521,
   -1461, -1461, -1461, -1461,  1181,     4,   335,    80,  1084,  1096,
    1097,  1098,  1099,  1102,  1104,  1105,  1114,  1348,  1116,  1117,
    1118,  1121,  1129,   -13,   173,   177,  1124,  1132,  1134,  1137,
    1138,  1139,  1140,  1141,  1152,  1147,  1149,  1156,  1157,  1158,
    1162,  1163,  1155,  1164,  1167, -1461, -1461, -1461, -1461, -1461,
     129,   490,   726,    71,  1363, -1461, -1461, -1461,  1151,  7467,
    4788, -1461, -1461, -1461,   490,    28,  1166,    71,    71,    71,
      71,   271,   272,    55,    55,  1171,   490,  1386,   327, -1461,
   -1461,    97,  1394, -1461, -1461,  1172,  1396,  1397, -1461, -1461,
    1183, -1461,  1185,  3074,  1187,  1190, -1461, -1461,  1192,  2199,
   -1461,  1175, -1461,  2199,  2649,  4358,  1635,  1635,  1635,   782,
     782,   782,   782,   655,   655,  1082,  1082,  1082,  1082,  1082,
   -1461, -1461, -1461,  1193,  7592,   155,  4765, -1461,  1425,    52,
    1450,   490, -1461, -1461,  1451,  1458,  1459,  1194,  1200,  1200,
      71,    71, -1461, -1461,  1460,    32,    41, -1461, -1461,  1464,
     490,  1465, -1461, -1461, -1461,  1479,  1480,  1481,    36,   490,
     490,  4826,  1484,    71,  3094, -1461, -1461, -1461,  2352,  2723,
     704,   221,  1483,   490,    51,   180,  3094,   180,    57,   490,
   -1461, -1461, -1461,   490,  1485,    55,    55,  1486,   490,   490,
     490,   490,   490,   490,   490,   490,   490, -1461,    55,   490,
     490,   490,   490,  4826, -1461,  4826, -1461,  4826, -1461, -1461,
      71,   180,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,  1489,   490,  1229,  1232,
    1242,   490, -1461, -1461,   856,  1233,  1217,   856, -1461, -1461,
    1243,  4826, -1461, -1461,    28,  1493,  1495,  1510,  1511,    55,
    1512,    55,  1513,  1514,  1517,   886,  1524,  1526,    55,  1527,
    1529,  1531,  1076, -1461,  1532,  1534, -1461,  1268, -1461,  2199,
   -1461,  1271,  1277,  1272, -1461,  7494, -1461,  2260, -1461, -1461,
    2199,  1279,   464,  1540,  1542,  1544,  1549,  1553,     9,  1290,
    1556,    55,  1557,  1558,  1559,  1560,  1561, -1461, -1461,  1562,
   -1461, -1461,  1564,  1565,  1567,  1570,  1571,  1575,  1576,  1580,
    1582,  1583,  1585, -1461,  1494,  1590,  1591,  1595, -1461,  1599,
    1600,  1602,  1309, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
      71,  1603, -1461, -1461,  1346, -1461,    71, -1461, -1461,  1347,
    1609,  1610, -1461, -1461, -1461,  1611,  1612, -1461,  1613, -1461,
    1615,  1617,  1619, -1461,  1620, -1461,  1621,  1350, -1461,  1362,
    1364, -1461,  1358,  1367,  1368,  1369,  1373,  1374,  1375,  1376,
     160,  1370,  1379,   168,  1380,  1389,  5115,   653,  5138,   738,
    5161,   210,   395,  1383,  1391,  1385,  1387,  1390,  1392,  1393,
    1398,  1395,  1408,  1416,  1417,  1418,  1420,  1423,  1424,  1426,
    1403,    58,    58, -1461,  1628, -1461,    71,    71,    27,  1388,
    1399,  1410,  1434,  1435, -1461,    71,   373,   107, -1461,  1436,
     208,  1431,  7467, -1461, -1461, -1461, -1461, -1461,  1439, -1461,
    1443, -1461, -1461, -1461,  1444, -1461, -1461,  1445, -1461, -1461,
   -1461,  1658,   467, -1461, -1461,    71,  7519, -1461,  4826, -1461,
    1705,  1442,  1470, -1461,  7592,    71, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461,  1714,  1606,  1716,  1444, -1461,   468, -1461,
   -1461, -1461, -1461, -1461,   476, -1461,   483, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,  1462, -1461,
   -1461, -1461, -1461,  1466,  1722,  1723,  1725,  1731,  1733, -1461,
   -1461,  1738, -1461,  1739,  1747,   294, -1461, -1461,   491, -1461,
   -1461, -1461, -1461,   494, -1461, -1461,  1749,  1488,  1751,    55,
     490,   490,  4826,  4826,  4826,   490,    55,  1754,    71,  1755,
    4826,  1758,  4826,  4826,  1759,  4826,  1496,    55,  4826,  4826,
      55, -1461, -1461,  4826,  1504,    55,  4826,  4826,  4826,  4826,
   -1461, -1461,  4826,  4826,  4826,  1505,  4826,    55, -1461, -1461,
    4826,  4826,   490,  1506,  1507,  4826,  4826,  1508, -1461, -1461,
      55,  1760,    55,  3094,  3094,  3094,  4826,  3094,  1775,  1779,
     490,   490,  4826,   490,   490,    71,  1783,  1782, -1461, -1461,
   -1461, -1461,  1361, -1461,  1574, -1461,    55, -1461,  1519,  4333,
    1520,  1523,  1530,   217,  1536, -1461, -1461, -1461, -1461, -1461,
    1788,  1535, -1461,   223,  1662,  1822,  4971, -1461, -1461,  1573,
      55,    55,   886,    55, -1461, -1461, -1461,  1566, -1461,  1572,
    5184,  1584, -1461, -1461,  2199,  1586, -1461,  1833, -1461,  1844,
   -1461,    55, -1461,  1849, -1461,  1852,   490,  1851,  1853, -1461,
   -1461, -1461,  1592, -1461, -1461, -1461, -1461, -1461, -1461,  1063,
    1063,  1063,    71, -1461, -1461, -1461,   490, -1461,   490, -1461,
   -1461, -1461,  1596,  1588,  1593,  5207,  5230,  5253,  1597,  1598,
   -1461,  1601, -1461,  7062, -1461,  7089,  7116, -1461,  5276, -1461,
    1857,  1587,  1748,  1859,  5299, -1461,  1862,  2304,  2402,  2489,
    2619,  5322,  3013,  3270, -1461,  3319,  1869,  3336,  3353,  1870,
   -1461, -1461,  3523,  3597, -1461,   260, -1461,  1604,  1614,  1616,
    1622,  5345,  1623, -1461, -1461,  1626,  1627,  7143,  1637,  1638,
    1632,   502, -1461,   274,   286,   289,  1608, -1461, -1461,  1881,
    1633,  4333,   525,  4333,  4333,  4333,  1895, -1461,  1233,   180,
     309,  1901,    71, -1461,  3094,  3094,  1641,  1904,   322,  4826,
    4826, -1461,  3094,  4826,  1905, -1461, -1461, -1461, -1461,  4826,
    1910,  2376, -1461, -1461,  1200,  1644,  1646,  1647,  1648,  1918,
   -1461,  1653,  1656,  1657,  1654,  1659,   632, -1461,  1661,  4826,
   -1461,  1663,  7592,  1660,  1924,  1668, -1461, -1461, -1461,  1667,
   -1461, -1461,  1935, -1461, -1461,  1936,  1938,  1939,  1942, -1461,
   -1461,  3014,  1943,  3094,  4826,  3094,  4826,  4826,   490,  1945,
     490,  1946,  1947,  1948,    55,  3219, -1461, -1461, -1461, -1461,
      55,  3280, -1461, -1461, -1461, -1461, -1461,    55, -1461, -1461,
    3478, -1461, -1461, -1461, -1461, -1461,  3538,  3736, -1461, -1461,
     531,  1949,  4826,    55,  1950,  1951,  4826,   180,   180,  4826,
    4826,  1952,  1957,  1959,   180,  1963,  1796,  1964,  3038, -1461,
    1968, -1461, -1461,  1707,    55,   533, -1461,   551,   566,   621,
   -1461,  1710,  1718,  1979, -1461, -1461, -1461, -1461,    55, -1461,
     180,   180, -1461,  7467,  7467, -1461,  7467, -1461,  1981,  1981,
    1981,  7467, -1461,  4333,  7467, -1461,  4826,  4826,  4826,  4333,
   -1461,    28,  1983,  1987,  1993,  2001,  2004,  4826,  4826,  4826,
    4826,  4826, -1461, -1461,  1740,  5998,  2199, -1461,  1873,  2003,
   -1461, -1461,  1741,  1744, -1461, -1461, -1461, -1461,  1994, -1461,
    1753,  7170,  1756,  5368,  5391,  1761, -1461,  1765, -1461, -1461,
   -1461,  1762, -1461,  1767, -1461,   345, -1461, -1461, -1461, -1461,
   -1461, -1461,  5414,   348, -1461, -1461,  7197,  1766,  1777,  5437,
    5460, -1461, -1461, -1461,   624, -1461,   180, -1461,   180,  3094,
   -1461, -1461,  2830,  2880,  4826,  1771,  1742,  1750,  1774,  1776,
   -1461, -1461, -1461,   420,  1773, -1461, -1461, -1461,   636,  5483,
    5506,  5529,   689,  1778, -1461, -1461, -1461, -1461,  2018,  3614,
    3776,  3793,  3836,  3867,  4826, -1461,  7544,  2044, -1461, -1461,
    1063,  1781,  2043,  2047,  4826,  4826,  4826,  4826,  2049,    55,
    4826,  1785,  4826,   620,    55,  2080,    55,  2083,  2084,  2085,
    4826,  4826,  2086,    55,   696, -1461, -1461,  2046,  2089,  2090,
      71, -1461,  1830, -1461, -1461,  5552,    55,  4333,  4333,  4333,
    4333,   421,  2091,    55, -1461,  4826,  4826,  4826, -1461,  4826,
   -1461, -1461, -1461, -1461, -1461, -1461,  6025, -1461,  1825,  1832,
    1834, -1461, -1461, -1461,  7224,  7251,  7278,  5575, -1461,  1836,
    5598, -1461,  7305,  2095,  2115,  4826,    55,  2116,    71, -1461,
   -1461,  1855, -1461,   433, -1461, -1461, -1461,  7332,  7359, -1461,
    1854,  2117,  4826,  2118,  2121,  2123,  2124, -1461,  4826,  1860,
     698,   700,   702,   712,  2144, -1461,  1878,  5621,  5644,  5667,
    7386, -1461,  2147,  2148,  2149,  3796,  2152,  2153,  2155,  3094,
    1891,  4826,  3994,  1892,  2158,  2160,  4046,  2161,  2162,  2163,
    2164,  2167,    55,  1908,  1916,  2182, -1461,  6052, -1461, -1461,
   -1461, -1461, -1461,  6079,  1920,  1921,  1917,  1922,  1926, -1461,
      55,  4826,  4826,  4826,  2189, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461,  1925, -1461,  7413, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461,  1933, -1461, -1461, -1461,  2194,
    1940,  1934,  3094,  4333,  1937,  4333,  4333,  1932,  6106,  6133,
    6160, -1461,  2142,  4826,  4054,  1953,  4252,  2203,  4312,  4510,
   -1461,  2204,  4826,  1941,   718,  4826,   729,   739, -1461, -1461,
   -1461, -1461,   490,  5690, -1461, -1461, -1461, -1461,  2205,  2210,
   -1461,  6187,  3094,  1954,  6214,  1955,  1960,  2211,  1990,  4826,
    4570, -1461, -1461, -1461,  1991, -1461, -1461,  1995,  4333, -1461,
    1958, -1461,  7440, -1461,  3094,  4826,   761,  2088, -1461,  2212,
    1996,  5713,  1997,  2215, -1461, -1461,  4826,  1999,  1990,  6241,
    4826,  2214, -1461,  5736,  2002,  4826, -1461,  5759,  4826,  6268,
   -1461
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461,   219, -1461,  -572, -1461,  1283, -1461, -1461,  1326,
    -502, -1461,  -534, -1461,  -357,  -496,   138, -1461, -1461, -1461,
   -1461,   532, -1461,  -941, -1461,  -877, -1461,  -277, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461,  1578, -1461,  1204, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,  1693, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
    1467, -1461, -1461, -1461, -1461, -1461, -1461, -1461,  -977,  -643,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1460, -1461, -1461, -1461,  1069,   876, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461, -1461,   600, -1461,
   -1461, -1461, -1461, -1461, -1461, -1461, -1461,  1737, -1461, -1461,
   -1461,  1422, -1461,   731,  1239, -1210, -1461,  -519,    23, -1461,
   -1461, -1461,   965,  -591,  -906,  -143,   -75, -1461,    -5,  -142,
     -43,  -548,  -327
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -685
static const yytype_int16 yytable[] =
{
      35,   578,    39,  1149,   695,   223,   224,  1102,  1103,     6,
     173,   759,    69,   585,  1413,     6,  1272,   495,  1423,     6,
    1621,     6,     6,    83,  1077,    42,   599,   506,    32,  1082,
    1083,   495,   432,     6,   286,    90,   609,  1107,   290,  1635,
     613,  1119,   174,   494,   617,  1641,  1110,   697,   495,   495,
       6,     6,   768,   432,  1650,   891,     6,   490,   228,   873,
    1656,  1657,     6,     6,     7,     8,     9,   892,  1127,    10,
      11,    12,   490,    13,   528,   287,   432,     6,     3,   769,
    1161,   514,   576,     7,     8,     9,    18,   938,    10,    11,
      12,    85,    13,   695,   695,   695,   695,   939,   940,   941,
     402,     6,   432,   225,   749,    18,   514,     7,     8,     9,
     226,   394,    10,    11,    12,   346,    13,   900,   633,   902,
     229,   402,   -60,   874,   220,   402,    -3,   354,   270,    18,
     221,    36,    36,   514,   359,   360,   697,   697,   697,   697,
     402,   395,    69,    69,   402,   234,    35,  1120,   634,    35,
     251,    35,    35,    35,    35,   268,     6,  1121,   515,   493,
     239,   240,     7,     8,     9,  1070,   226,    10,    11,    12,
     402,    13,   695,   233,   238,    69,   291,   246,   250,   255,
     259,   263,   267,   515,    18,     6,    65,   392,   393,    66,
      67,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,  1261,  1040,   695,
     515,   527,  1560,   413,   871,   697,   408,   638,   226,   775,
     409,   776,   333,    40,   798,   476,   799,   414,   895,  1041,
     410,  1363,   896,   897,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   697,
     -63,  1303,   697,  1013,     6,   893,    44,   226,   942,  1014,
       7,     8,     9,   173,   176,    10,    11,    12,   698,    13,
     993,    69,    69,   177,    37,    41,   330,    73,   496,    38,
      36,   584,    18,   751,    43,   331,   497,   471,    82,   498,
      52,  1048,   496,    36,   507,   174,   403,   514,   514,  1406,
     497,   748,  1364,   498,  1108,  1055,  1056,  1057,  1058,   496,
     496,  1150,   516,  1111,    74,   433,   548,   403,   695,  1071,
     498,   498,   695,  1157,    69,    72,   230,     6,    65,  1163,
    1101,    66,    67,    75,   288,  1151,   403,   516,   959,    35,
     403,   436,   -60,    35,   235,   236,   996,  1421,   960,   443,
     961,    76,    36,   514,  1365,   575,    77,   698,   698,   698,
     698,   697,    69,   777,   516,   697,   403,   430,   243,   244,
     338,   448,    78,  1053,   515,   515,  1469,  1470,  1104,  1105,
    1439,  1366,  1367,   339,     6,   270,   444,   241,   242,    36,
       7,     8,     9,   445,   340,    10,    11,    12,   501,    13,
     415,  1126,  1042,   411,   364,   510,    79,   770,   771,   772,
     773,   484,    18,   362,  1471,   898,  1370,   361,   362,   523,
     362,    68,  1089,   252,   253,    80,   417,  1337,  1472,  1090,
     515,  1945,   418,   533,  1338,  1341,   698,   778,   537,  1015,
     419,  1952,  1342,  1017,   541,  1016,   543,   544,  1193,  1018,
     545,    81,   547,    69,    84,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     698,    85,   334,   698,  1244,  1425,    36,  1528,  1529,  1530,
      87,  1532,  1426,  1368,  1556,  1803,   903,  1371,   695,   571,
    1561,  1426,   584,  1152,  1153,     6,    36,  1426,   501,   695,
     718,   719,   720,   721,    86,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   962,   446,   934,   463,   362,   690,  1661,   516,   516,
      36,   697,  1372,  2024,  1662,    88,  2026,  1059,  1061,  1373,
    1374,  1677,   697,     6,   362,   639,  2028,  2029,  1678,     7,
       8,     9,  1233,  1680,    10,    11,    12,   404,    13,    89,
    1678,  1681,    45,    68,    46,    36,  1375,  1473,  1308,  1376,
    1377,    18,  1700,  1701,  1311,    91,  1693,    35,   437,    47,
      48,    49,   698,  1426,   516,  2060,   698,  1613,   438,  1614,
     696,  1871,    35,  1068,   637,   226,    35,    50,    35,    44,
     130,   995,  1273,   131,   439,   645,    35,    35,   440,   247,
      35,   148,  1841,   420,    35,  1845,   132,   491,   492,  1842,
     701,   133,  1846,    35,   705,   504,   710,   147,  1415,  1416,
    1417,  1418,  1085,   501,   717,   724,  1087,    35,   728,   647,
     648,  1903,   733,  1715,  1404,  1405,  1407,  1419,   455,     6,
     134,   740,   722,  1414,   135,     7,     8,     9,  1696,  1697,
      10,    11,    12,     6,    13,   645,  1705,   136,  1378,     7,
       8,     9,   137,   449,    10,    11,    12,    18,    13,   696,
     696,   696,   696,  1437,   138,   780,   139,  1872,  1934,   450,
       6,    18,   456,  1445,  1426,  1426,     7,     8,     9,   140,
    1961,    10,    11,    12,   954,    13,   955,  1962,   649,   650,
    1904,   451,  1905,   141,   956,   142,   422,  1750,    18,  1752,
     706,   707,   143,  1906,    35,  1726,  1727,  1728,  1729,  1730,
    1731,     6,  1046,   160,   423,   144,  1907,  1266,   362,  1435,
    1436,  1450,  1451,   501,   424,   425,   457,   145,   458,  1452,
     226,   146,   698,   426,  1908,   427,  1454,   226,   696,    51,
     178,   441,   180,   698,  1475,   226,  1491,  1477,   226,   452,
     161,   459,  1790,   179,   911,  1675,  1676,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,   696,  1092,   271,   696,   181,  1346,  1686,   362,
    1347,   182,  1256,  1769,  1770,   183,  1796,   362,   184,    35,
     994,   248,   185,  1264,   282,  1862,  1862,  1348,  1349,  1350,
     186,   460,   187,  1540,  1797,   362,  1615,  1616,  1617,   188,
    1133,  1134,  1135,  1136,  1137,  1138,  1139,   992,  1146,  1798,
     362,  1594,   189,  1160,   190,  1162,   453,   215,   216,   217,
     218,   219,   191,   695,   192,   220,  1045,  1045,   436,   283,
     944,   221,   945,   946,   947,   948,   949,   950,   951,  1052,
     501,   193,   436,   436,   436,   436,   194,   957,   195,  1194,
     285,  1066,  1354,  1856,   196,  1355,   436,  1432,   197,    92,
      93,     6,   198,  1909,  1799,   362,   697,  1852,  1853,   173,
    1618,   199,  1356,  1357,   696,  1732,  1358,  1359,   696,  1874,
     362,   173,   793,   794,   795,   796,   200,   428,   797,  1449,
      96,    97,    98,    99,   100,   201,  1351,  1453,   272,  1455,
     256,   257,   273,   211,   212,   274,  1096,   213,   214,   215,
     216,   217,   218,   219,   275,   436,   436,   220,   217,   218,
     219,   332,  1889,   221,   220,  1114,   276,   260,   261,   277,
     221,  1476,  1878,   362,  1122,  1123,  1478,   337,   436,  1921,
    1922,  1975,   362,  1976,   362,  1977,   362,  1147,  1156,  1159,
      69,   329,    69,  1165,  1166,  1978,   362,   345,  1167,   355,
    1695,  2053,   362,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  2055,   362,  1182,  1183,  1184,  1185,   124,   129,
     356,  1360,  2056,   362,   368,   436,    69,  1195,  1196,  1197,
    1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,
    1208,   367,  1210,   952,  2082,   362,  1214,   791,   792,   793,
     794,   795,   796,  1992,   398,   797,   399,     6,   406,   501,
     171,   175,   462,     7,     8,     9,  1709,  1710,    10,    11,
      12,   606,    13,  1215,  1216,  1217,  1218,  1219,  1220,  1221,
    1222,  1223,   464,   465,   696,    18,   468,   469,   473,   483,
     502,   503,   508,   509,   512,   696,   202,   203,   204,   511,
       6,   513,   519,   520,   521,  2010,     7,     8,     9,   522,
     524,    10,    11,    12,   525,    13,  2033,   526,     6,   529,
     530,   531,   532,   534,     7,     8,     9,   698,    18,    10,
      11,    12,   535,    13,   536,   538,   269,   540,   549,   542,
     546,   551,   554,   560,   555,   436,    18,   557,   568,   713,
     569,   436,   570,   579,   289,   695,  2064,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,  1602,  2080,   572,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,     6,  1890,   697,   580,
     581,   583,     7,     8,     9,   586,   588,    10,    11,    12,
     590,    13,   591,   592,   593,   596,  1400,  1400,   598,   600,
       6,   436,   436,   436,    18,   604,     7,     8,     9,  1813,
     436,    10,    11,    12,   605,    13,   616,   607,   608,   610,
     614,   618,   620,   621,   622,   624,     6,   625,    18,   357,
     358,   626,     7,     8,     9,   627,   363,    10,    11,    12,
     436,    13,   641,   365,   629,   396,   646,   652,   653,   747,
     436,   702,     6,   711,    18,   712,  1552,   714,     7,     8,
       9,   982,   725,    10,    11,    12,   730,    13,   758,   734,
     744,   983,   760,   762,   763,     6,   764,   765,  1926,   774,
      18,     7,     8,     9,   779,   800,    10,    11,    12,   397,
      13,  -684,   808,   171,   810,   407,   811,   861,   173,   173,
     173,   812,   173,    18,   264,   265,   813,   862,   863,   984,
     985,   986,   987,   988,   989,  1483,  1484,   470,   864,   867,
    1488,   475,   872,   436,   876,   690,  1959,   904,   901,   905,
     906,   907,   908,   912,   477,   797,   909,   930,   936,   997,
     998,   478,   479,   480,   481,  1007,   482,   643,   644,   486,
     487,   488,   999,  1000,  1001,  1002,  1545,  1519,  1003,  1049,
    1004,  1005,     7,     8,     9,   699,   700,    10,    11,    12,
    1006,    13,  1008,  1009,  1010,  1535,  1536,  1011,  1538,  1539,
     436,  1067,  1942,  1050,    18,  1012,  1019,    35,  1020,  1072,
    1021,  1074,  1075,  1022,  1023,  1024,  1025,  1026,  1685,   698,
    1687,  1688,  1689,  1060,  1062,  1063,  1064,  1692,  1027,  1028,
    1069,  1029,  1030,  1031,  1032,  1548,  1702,  1035,  1033,  1034,
    1093,   552,   553,  1037,     6,  1054,  1036,   556,   558,   696,
       7,     8,     9,  1065,  1073,    10,    11,    12,  1086,    13,
    1076,  1609,  1078,  1080,   990,   873,  1097,  1081,  1084,  1826,
    1088,   573,    18,  1098,  1099,  1106,  1100,   436,     6,  1113,
    1115,  1619,  1101,  1620,     7,     8,     9,   703,   704,    10,
      11,    12,  1546,    13,  1116,  1117,  1118,  1125,  1155,   173,
     173,  1227,  1168,  1171,  1209,  1211,    18,   173,  1212,  1225,
    1234,  1299,  1235,   708,   709,   877,   878,   879,   880,   881,
     882,   883,   884,   885,  1213,  1231,   886,  1236,  1237,  1239,
    1241,  1242,   887,   632,  1243,  1777,  1778,  1169,  1170,   715,
     716,  1245,  1784,  1246,  1248,   888,  1249,   635,  1250,  1253,
    1181,  1254,  1255,  1258,  1259,  1265,  1260,  1267,   173,  1268,
     173,  1269,   726,   727,    69,   651,  1270,   436,  1805,  1806,
    1271,  1276,  1274,    69,  1279,  1280,  1281,  1282,  1283,  1285,
    1808,  1287,  1288,     6,  1289,  1307,  1812,  1290,  1291,     7,
       8,     9,  1292,  1293,    10,    11,    12,  1294,    13,  1295,
    1296,  1238,  1297,  1240,  1637,   741,   742,  1300,  1301,   745,
    1247,    18,  1302,   173,  1304,  1305,   965,  1306,   966,   967,
    1309,   968,  1310,  1312,  1313,  1314,    35,  1326,  1316,  1317,
    1319,   969,  1320,  1755,  1321,  1757,  1322,  1324,  1325,  1327,
      35,  1328,  1329,  1277,  1547,  1403,    35,  1339,   970,   971,
     972,  1330,  1331,  1332,  1854,    35,  1855,  1333,  1334,  1335,
    1336,    35,    35,  1340,  1343,   973,  1344,  1380,  1381,  1382,
    1408,  1383,    69,    69,  1384,  1434,  1385,  1386,  1388,    69,
    1397,  1409,  1387,   206,   207,   208,   807,   209,   210,   211,
     212,  1389,  1410,   213,   214,   215,   216,   217,   218,   219,
    1390,  1391,  1392,   220,  1393,    69,    69,  1394,  1395,   221,
    1396,   731,   732,   559,  1428,   889,  1411,  1412,  1441,  1442,
    1424,   869,   870,  1430,   173,   974,   501,  1431,   226,  1433,
    1443,  1446,  1447,  1448,  1930,  1931,  1932,  1933,  1456,  1459,
    1460,   696,  1461,  1458,  1462,   643,   753,   206,   207,   208,
    1463,   209,   210,   211,   212,  1465,  1467,   213,   214,   215,
     216,   217,   218,   219,  1468,  1638,  1479,   220,  1481,  1422,
    1480,  1490,  1492,   221,   931,  1494,  1497,  1526,  1499,   735,
     736,   737,   738,    92,    93,   162,  1505,  1514,  1520,  1521,
    1524,    69,  1533,    69,    94,    95,  1534,   975,  1541,  1542,
    1549,  1551,  1553,  1558,   976,  1554,  1562,   164,   165,   166,
     167,  1559,  1555,  1557,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,  1563,
     206,   207,   208,  1597,   209,   210,   211,   212,  1604,  1598,
     213,   214,   215,   216,   217,   218,   219,  1591,    53,  1605,
     220,  1600,    54,  1603,  1607,   436,   221,  1608,  1610,  1612,
    1611,  1482,  1623,  1622,  1636,  1629,  1639,  1624,  1489,  1642,
    2034,  1628,  2036,  2037,   173,  1630,  1652,  1655,  1663,  1500,
    1682,  1664,  1503,  1665,   787,   788,  1683,  1506,   789,   790,
     791,   792,   793,   794,   795,   796,  1666,  1668,   797,  1516,
    1669,  1670,  1690,   436,  1672,  1673,  1674,  1684,  1694,  1699,
    1707,    55,  1525,  1698,  1527,  1712,  1716,    56,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  2076,  1725,  1724,  1734,  1736,
      57,  1738,    58,  1737,  1740,  1786,  1124,   173,  1550,   171,
      35,  1739,  1741,  1744,    59,  1745,  1746,    35,    60,  1747,
    1749,   171,  1756,  1758,  1759,  1760,  1771,  1774,  1775,  1781,
      61,   815,  1592,  1593,  1782,  1595,  1783,     7,     8,     9,
    1785,  1787,    10,    11,   816,  1791,    13,   173,  1186,  1794,
    1188,    62,  1190,  1606,  1800,  1801,  1802,  1807,  1827,    18,
    1814,   206,   207,   208,  1815,   209,   210,   211,   212,   173,
    1816,   213,   214,   215,   216,   217,   218,   219,  1817,  1818,
    1828,   220,  1824,  1831,  1867,  1829,  1232,   221,  1830,    35,
    1832,    35,  1868,    35,    35,  1880,   121,    92,    93,   654,
    1834,   122,  1838,  1848,   123,  1837,  1839,  2058,    94,    95,
      63,  1840,    64,   353,  1849,  1866,  1869,  1873,  1870,  1888,
    1892,  1923,  1879,  1891,  1893,    35,  1898,  1901,    96,    97,
      98,    99,   100,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,  1912,   679,   680,
    1914,  1915,  1916,  1919,  1924,  1925,  1927,   584,  1935,  1943,
    1954,  1944,   817,  1950,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
    1955,  1958,  1960,   834,  1966,  1968,   835,  1965,  1969,   836,
    1970,  1971,   837,  1974,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
     681,  1979,  1980,   854,  1985,  1986,  1987,   682,   855,  1989,
    1990,   856,  1991,  1993,  1996,  1997,  1761,  1998,  2000,  2001,
    2002,  2003,  1763,   208,  2004,   209,   210,   211,   212,  1765,
    2006,   213,   214,   215,   216,   217,   218,   219,  2007,  2008,
    2014,   220,  2012,  2013,  2015,  1773,  2021,   221,  2016,  2023,
    2027,  2030,    92,    93,   654,  2038,  2032,  2031,  2042,  2035,
    2047,  2050,  2061,    94,    95,  2052,  1795,  2062,  2069,  2084,
    2088,  2094,  1094,  1440,  2083,  2045,  2091,  2065,  2067,   857,
    1804,  2078,  2068,    96,    97,    98,    99,   100,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,  2070,   679,   680,  2074,  1095,  2075,  1263,  2085,
    2087,  2090,   802,   683,   642,  2096,  1251,  1544,   979,   684,
     685,  1401,  1793,   623,  1047,   686,  1228,     0,   687,  1691,
       0,   932,   933,   688,   689,     0,   690,  1485,  1486,  1487,
       0,     0,     0,     0,     0,  1493,     0,  1495,  1496,     0,
    1498,  1643,     0,  1501,  1502,     0,     0,     0,  1504,     0,
       0,  1507,  1508,  1509,  1510,   681,     0,  1511,  1512,  1513,
       0,  1515,   682,     0,     0,  1517,  1518,     0,     0,     0,
    1522,  1523,     0,     0,     0,     0,     0,     0,   171,   171,
     171,  1531,   171,   209,   210,   211,   212,  1537,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,  1899,     0,     0,     0,   221,  1911,     0,  1913,    92,
      93,     6,     0,     0,     0,  1920,     0,     0,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,  1929,     0,
       0,     0,     0,     0,     0,  1936,     0,     0,     0,  1644,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,     0,     0,  1129,  1957,  1130,
    1131,  1132,     0,     0,     0,     0,     0,     0,   683,     0,
       0,     0,     0,     0,   684,   685,     0,     0,     0,     0,
     686,     0,     0,   687,     0,     0,     0,     0,   688,   689,
       0,   690,     0,     0,     0,     0,     0,     0,  1133,  1134,
    1135,  1136,  1137,  1138,  1139,     0,  1140,  1141,     0,     0,
       0,     0,     0,     0,  2005,     0,  1645,     0,     0,     0,
       0,     0,     0,   781,   782,   783,   784,   785,   786,   787,
     788,     0,  2017,   789,   790,   791,   792,   793,   794,   795,
     796,     0,     0,   797,     0,     0,     0,     0,     0,   171,
     171,     0,     0,     0,  1703,  1704,     0,   171,  1706,     0,
       0,     0,     0,     0,  1711,     0,  1714,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,  1735,     0,     0,   220,     0,    92,
      93,   401,   163,   221,     0,    66,     0,     0,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,   171,  1751,
     171,  1753,  1754,   164,   165,   166,   167,   168,     0,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,  1142,  1646,  1772,     0,     0,
       0,  1776,   121,     0,  1779,  1780,     0,   122,     0,   402,
     123,     0,     0,   171,     0,   206,   207,   208,  1713,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,     0,    92,    93,   162,   163,     0,     0,    66,
       0,  1809,  1810,  1811,    94,    95,     0,     0,     0,     0,
       0,     0,  1819,  1820,  1821,  1822,  1823,   164,   165,   166,
     167,   168,     0,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    92,
      93,     6,   206,   207,   208,     0,   209,   210,   211,   212,
      94,    95,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,   171,     0,     0,     0,   221,  1865,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,     0,     0,     0,     0,  1886,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1894,
    1895,  1896,  1897,     0,     0,  1900,   169,  1902,  1129,     0,
    1130,  1131,  1132,     0,     0,  1917,  1918,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,   122,     0,     0,
     123,     0,     0,     0,     0,   403,     0,     0,   170,     0,
    1937,  1938,  1939,     0,  1940,     0,     0,     0,     0,  1133,
    1134,  1135,  1136,  1137,  1138,  1139,     0,  1140,  1141,     0,
       0,     0,   206,   207,   208,   205,   209,   210,   211,   212,
    1956,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,  1967,   221,     0,
       0,     0,     0,  1973,   783,   784,   785,   786,   787,   788,
       0,     0,   789,   790,   791,   792,   793,   794,   795,   796,
     169,     0,   797,     0,   171,  1857,  1994,  1858,     0,     0,
    1859,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,   122,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,   170,     0,     0,     0,  2018,  2019,  2020,     0,
       0,     0,     0,     0,     0,     0,  1133,  1134,  1135,  1136,
    1137,  1138,  1139,     0,  1860,  1857,     0,  1858,     0,     0,
    1859,     0,     0,     0,     0,     0,     0,   171,     0,     0,
       0,     0,   121,     0,     0,     0,     0,   122,  2043,     0,
     123,     0,     0,     0,     0,   396,  1145,  2051,     0,     0,
    2054,     0,     0,     0,     0,     0,  1133,  1134,  1135,  1136,
    1137,  1138,  1139,     0,  1860,     0,     0,   171,     0,   815,
    1648,     0,     0,     0,  2072,     7,     8,     9,     0,     0,
      10,    11,   816,     0,    13,     0,     0,     0,     0,   171,
    2081,    92,    93,   162,     0,     0,     0,    18,     0,     0,
       0,  2089,    94,    95,     0,  2093,     0,     0,     0,     0,
    2097,     0,     0,  2099,     0,   164,   165,   166,   167,     0,
       0,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    92,    93,   162,
     206,   207,   208,  1861,   209,   210,   211,   212,    94,    95,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,   164,   165,   166,   167,     0,   221,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,  1864,     0,     0,     0,     0,     0,     0,
     817,     0,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,   834,     0,     0,   835,     0,     0,   836,     0,     0,
     837,     0,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,     0,     0,
       0,   854,     0,     0,     0,     0,   855,     0,     0,   856,
       0,     0,     0,     0,   815,     0,     0,     0,     0,     0,
       7,     8,     9,     0,     0,    10,    11,   816,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,  1788,   206,   207,   208,  1789,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,  1649,     0,     0,
       0,     0,   221,     0,     0,   815,     0,  1748,     0,     0,
       0,     7,     8,     9,   121,     0,    10,    11,   816,   122,
      13,     0,   123,     0,     0,     0,     0,     0,     0,     0,
     170,     0,     0,    18,     0,     0,     0,   781,   782,   783,
     784,   785,   786,   787,   788,     0,  1651,   789,   790,   791,
     792,   793,   794,   795,   796,     0,     0,   797,     0,     0,
       0,     0,     0,  1653,     0,     0,     0,     0,  1079,     0,
     121,     0,     0,     0,     0,   122,     0,     0,   123,     0,
    1654,     0,     0,     0,     0,   817,   170,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,     0,     0,     0,   834,     0,     0,   835,
       0,     0,   836,     0,     0,   837,     0,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
     851,   852,   853,     0,     0,     0,   854,     0,     0,     0,
       0,   855,     0,     0,   856,     0,   817,     0,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,     0,     0,     0,   834,     0,     0,
     835,     0,     0,   836,     0,     0,   837,     0,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,     0,     0,     0,   854,     0,     0,
       0,     0,   855,   815,     0,   856,     0,     0,     0,     7,
       8,     9,  1762,     0,    10,    11,   816,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
    1658,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   815,     0,     0,     0,     0,     0,     7,
       8,     9,     0,  1764,    10,    11,   816,     0,    13,     0,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
       0,    18,   213,   214,   215,   216,   217,   218,   219,   206,
     207,   208,   220,   209,   210,   211,   212,     0,   221,   213,
     214,   215,   216,   217,   218,   219,   206,   207,   208,   220,
     209,   210,   211,   212,  1659,   221,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,  1881,   221,     0,   817,     0,   818,   819,   820,   821,
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
       0,  1766,    10,    11,   816,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,   207,   208,    18,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,  1882,     0,     0,   220,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,     0,     0,     0,
    1883,   815,     0,     0,     0,     0,     0,     7,     8,     9,
       0,  1767,    10,    11,   816,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,   207,   208,  1884,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,   206,   207,   208,
     220,   209,   210,   211,   212,     0,   221,   213,   214,   215,
     216,   217,   218,   219,  1885,     0,     0,   220,     0,     0,
       0,     0,   817,   221,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
       0,     0,     0,   834,     0,     0,   835,     0,     0,   836,
       0,     0,   837,     0,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
       0,     0,     0,   854,     0,     0,     0,     0,   855,     0,
       0,   856,   817,     0,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
       0,     0,     0,   834,     0,     0,   835,     0,     0,   836,
       0,     0,   837,     0,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
       0,     0,     0,   854,     0,     0,     0,     0,   855,   815,
       0,   856,     0,     0,     0,     7,     8,     9,     0,  1768,
      10,    11,   816,     0,    13,     0,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,    18,     0,   213,
     214,   215,   216,   217,   218,   219,   206,   207,   208,   220,
     209,   210,   211,   212,     0,   221,   213,   214,   215,   216,
     217,   218,   219,  1999,     0,     0,   220,     0,     0,   815,
       0,     0,   221,     0,     0,     7,     8,     9,     0,  1988,
      10,    11,   816,     0,    13,     0,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,    18,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,     0,     0,
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
       0,     0,     0,     7,     8,     9,     0,  1995,    10,    11,
     816,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
     389,     0,     0,     0,     0,   221,     0,   815,     0,     0,
       0,     0,     0,     7,     8,     9,     0,  2044,    10,    11,
     816,     0,    13,     0,     0,     0,    92,    93,   162,     0,
       0,     0,     0,     0,     0,    18,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,   165,   166,   167,     0,     0,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,     0,     0,     0,     0,     0,     0,   817,     0,
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
       0,     7,     8,     9,     0,  2046,    10,    11,   816,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,   390,     0,     0,
       0,   221,     0,     0,     0,   815,     0,     0,     0,     0,
       0,     7,     8,     9,     0,  2048,    10,    11,   816,   121,
      13,     0,     0,     0,   122,     0,     0,   123,    92,    93,
       6,   485,     0,    18,   784,   785,   786,   787,   788,    94,
      95,   789,   790,   791,   792,   793,   794,   795,   796,     0,
       0,   797,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   281,     0,   817,     0,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,     0,     0,     0,   834,     0,     0,
     835,   366,     0,   836,     0,     0,   837,     0,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,   391,     0,     0,   854,     0,     0,
       0,     0,   855,     0,     0,   856,   817,     0,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   472,     0,     0,   834,     0,     0,
     835,     0,     0,   836,     0,     0,   837,     0,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,   746,     0,     0,   854,    92,    93,
     162,     0,   855,     0,     0,   856,     0,     0,     0,    94,
      95,     0,     0,  2049,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   165,   166,   167,  1051,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,    92,
      93,     6,     0,     0,     0,     0,     0,     0,  1091,     0,
      94,    95,     0,  2073,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,   122,     0,     0,   123,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,     0,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,   121,     0,     0,     0,   221,   122,     0,     0,   123,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     6,     0,
    1564,   220,     0,     0,     7,     8,     9,   221,     0,    10,
      11,    12,     0,    13,     0,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,   122,     0,     0,
     123,     0,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,    19,
       0,  1565,   220,     0,     0,    20,     0,     0,   221,     0,
       0,     0,     0,   379,     0,     0,     0,     0,    21,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,    24,  1566,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,    25,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,  1567,     0,    26,
     386,     0,     0,     0,     0,     0,     0,     0,  1568,  1569,
    1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,  1578,  1579,
    1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,  1589,
    1590,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,    27,     0,
      28,     0,   387,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,   388,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,   466,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
     467,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,   630,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,   631,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1345,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1353,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1362,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1599,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1625,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1626,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1627,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1634,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1640,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1647,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1667,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1835,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1836,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1844,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1850,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1851,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1875,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1876,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1877,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1928,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1949,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1951,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1981,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1982,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1983,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  2059,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  2086,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    2095,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  2098,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,   284,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,   352,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,   489,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,   566,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,   567,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
     743,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,   868,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,   964,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  1825,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,  1941,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,  2009,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,  2011,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,  2039,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  2040,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  2041,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    2063,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,  2066,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  2092,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  2100,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
     222,   206,   207,   208,   221,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,   312,   206,   207,   208,   221,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   369,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   370,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   371,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   372,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   373,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   374,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     375,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   376,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   377,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   378,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   380,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   381,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   382,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   383,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   384,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   385,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     474,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   505,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   561,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   562,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   563,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   564,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
     565,   206,   207,   208,   221,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,   636,   206,   207,   208,   221,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   757,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   865,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   866,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1631,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1632,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1633,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    1671,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  1833,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1847,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1946,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1947,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1948,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  1953,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1963,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1964,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1984,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    2025,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  2079,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   781,   782,   783,
     784,   785,   786,   787,   788,     0,     0,   789,   790,   791,
     792,   793,   794,   795,   796,     0,     0,   797,     0,     0,
       0,  1262,   781,   782,   783,   784,   785,   786,   787,   788,
       0,     0,   789,   790,   791,   792,   793,   794,   795,   796,
       0,     0,   797,     0,     0,     0,  1438,   781,   782,   783,
     784,   785,   786,   787,   788,     0,     0,   789,   790,   791,
     792,   793,   794,   795,   796,     0,     0,   797,     0,     0,
       0,  1887,   781,   782,   783,   784,   785,   786,   787,   788,
       0,     0,   789,   790,   791,   792,   793,   794,   795,   796,
       0,     0,   797,     0,   910,   781,   782,   783,   784,   785,
     786,   787,   788,     0,     0,   789,   790,   791,   792,   793,
     794,   795,   796,     0,     0,   797
};

static const yytype_int16 yycheck[] =
{
       5,   503,     7,   980,   595,   147,   148,   948,   949,     5,
      85,   654,    17,   509,  1224,     5,     7,     3,  1228,     5,
    1480,     5,     5,    28,   901,     5,   522,     5,     5,   906,
     907,     3,     5,     5,   177,    40,   532,     5,   180,  1499,
     536,     5,    85,   400,   540,  1505,     5,   595,     3,     3,
       5,     5,     5,     5,  1514,    73,     5,     5,     5,     5,
    1520,  1521,     5,     5,    11,    12,    13,    85,   974,    16,
      17,    18,     5,    20,   431,     7,     5,     5,     0,    32,
     986,    26,    68,    11,    12,    13,    33,   102,    16,    17,
      18,   242,    20,   684,   685,   686,   687,   112,   113,   114,
      73,     5,     5,   267,   638,    33,    26,    11,    12,    13,
     274,   242,    16,    17,    18,   266,    20,   760,   242,   762,
      67,    73,   266,    69,   263,    73,     0,   270,   272,    33,
     269,   276,   276,    26,   276,   277,   684,   685,   686,   687,
      73,   272,   147,   148,    73,   150,   151,   111,   272,   154,
     155,   156,   157,   158,   159,   160,     5,   121,   103,   267,
     272,   273,    11,    12,    13,    68,   274,    16,    17,    18,
      73,    20,   763,   150,   151,   180,   181,   154,   155,   156,
     157,   158,   159,   103,    33,     5,     6,   329,   331,     9,
      10,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,  1084,    79,   800,
     103,   267,  1422,    86,   748,   763,    86,   574,   274,     3,
      90,     5,   227,   264,   269,   367,   271,   100,    86,   100,
     100,    21,    90,    91,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     267,  1128,   800,   266,     5,   273,   264,   274,   273,   272,
      11,    12,    13,   338,   265,    16,    17,    18,   595,    20,
     266,   276,   277,   274,   264,     7,   265,   272,   264,   269,
     276,   272,    33,   640,   264,   274,   272,   362,   272,   275,
       7,   863,   264,   276,   272,   338,   269,    26,    26,   272,
     272,   256,    92,   275,   272,   877,   878,   879,   880,   264,
     264,    90,   257,   272,   272,   267,   458,   269,   909,   891,
     275,   275,   913,   272,   329,   266,   273,     5,     6,   272,
     272,     9,    10,   272,   266,   114,   269,   257,    90,   344,
     269,   346,   266,   348,   272,   273,   266,   240,   100,   100,
     102,   272,   276,    26,   144,   498,   272,   684,   685,   686,
     687,   909,   367,   147,   257,   913,   269,   344,   272,   273,
     242,   348,   272,   875,   103,   103,    82,    83,   950,   951,
    1257,   171,   172,   255,     5,   272,   137,   272,   273,   276,
      11,    12,    13,   144,   266,    16,    17,    18,   403,    20,
     273,   973,   273,   273,   265,   410,   272,   684,   685,   686,
     687,   265,    33,   274,   120,   273,    21,   273,   274,   424,
     274,   241,   267,   272,   273,   272,    86,   267,   134,   274,
     103,  1891,    92,   438,   274,   267,   763,   221,   443,   266,
     100,  1901,   274,   266,   449,   272,   451,   452,  1020,   272,
     455,   272,   457,   458,   276,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   242,   272,   800,  1065,   267,   276,  1383,  1384,  1385,
       6,  1387,   274,   273,   267,  1695,   763,    92,  1079,   494,
     267,   274,   272,   272,   273,     5,   276,   274,   503,  1090,
     121,   122,   123,   124,   272,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   273,   273,   800,   273,   274,   272,   267,   257,   257,
     276,  1079,   137,  1993,   274,     7,  1996,   266,   266,   144,
     145,   267,  1090,     5,   274,   275,  2006,  2007,   274,    11,
      12,    13,  1054,   267,    16,    17,    18,   338,    20,     7,
     274,   272,     5,   241,     7,   276,   171,   273,  1140,   174,
     175,    33,   250,   251,  1146,   134,   267,   582,    90,    22,
      23,    24,   909,   274,   257,  2045,   913,  1464,   100,  1466,
     595,  1801,   597,   266,   273,   274,   601,    40,   603,   264,
       7,   266,  1098,     7,   116,   582,   611,   612,   120,    71,
     615,   264,   267,   273,   619,   267,     7,   398,   399,   274,
     597,     7,   274,   628,   601,   406,   603,   266,   255,   256,
     257,   258,   909,   638,   611,   612,   913,   642,   615,   272,
     273,    21,   619,  1584,  1216,  1217,  1218,   274,   100,     5,
       7,   628,   273,  1225,     7,    11,    12,    13,  1564,  1565,
      16,    17,    18,     5,    20,   642,  1572,     7,   273,    11,
      12,    13,     7,   100,    16,    17,    18,    33,    20,   684,
     685,   686,   687,  1255,     7,   690,     7,   267,   267,   116,
       5,    33,   144,  1265,   274,   274,    11,    12,    13,     7,
     267,    16,    17,    18,   100,    20,   102,   274,   272,   273,
      90,   138,    92,     7,   110,     7,    72,  1623,    33,  1625,
     272,   273,     7,   103,   729,    93,    94,    95,    96,    97,
      98,     5,     6,   199,    90,     7,   116,   273,   274,   272,
     273,   273,   274,   748,   100,   101,   198,     7,   200,   273,
     274,     7,  1079,   109,   134,   111,   273,   274,   763,   202,
     265,   273,   266,  1090,   273,   274,  1338,   273,   274,   196,
     272,   223,  1678,   272,   779,   273,   274,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   936,     7,   800,   266,   144,   273,   274,
     147,   266,  1079,   272,   273,   266,   273,   274,   266,   814,
     815,   273,   266,  1090,     7,  1792,  1793,   164,   165,   166,
     266,   273,   266,  1395,   273,   274,  1469,  1470,  1471,   266,
     126,   127,   128,   129,   130,   131,   132,   814,   134,   273,
     274,  1432,   266,   985,   266,   987,   273,   255,   256,   257,
     258,   259,   266,  1444,   266,   263,   861,   862,   863,     7,
     100,   269,   102,   103,   104,   105,   106,   107,   108,   874,
     875,   266,   877,   878,   879,   880,   266,   273,   266,  1021,
       7,   886,   144,  1789,   266,   147,   891,  1244,   266,     3,
       4,     5,   266,   273,   273,   274,  1444,   273,   274,   974,
    1472,   266,   164,   165,   909,   273,   168,   169,   913,   273,
     274,   986,   257,   258,   259,   260,   266,   273,   263,  1276,
      34,    35,    36,    37,    38,   266,   273,  1284,   266,  1286,
     272,   273,   266,   249,   250,   266,   941,   253,   254,   255,
     256,   257,   258,   259,   266,   950,   951,   263,   257,   258,
     259,     7,  1829,   269,   263,   960,   266,   272,   273,   266,
     269,  1318,   273,   274,   969,   970,  1323,   266,   973,   273,
     274,   273,   274,   273,   274,   273,   274,   273,   983,   984,
     985,   274,   987,   988,   989,   273,   274,   266,   993,     5,
    1562,   273,   274,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,   273,   274,  1009,  1010,  1011,  1012,    43,    44,
       5,   273,   273,   274,   267,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1035,   274,  1037,   273,   273,   274,  1041,   255,   256,   257,
     258,   259,   260,  1949,   242,   263,   242,     5,   242,  1054,
      85,    86,   272,    11,    12,    13,  1575,  1576,    16,    17,
      18,   529,    20,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   267,   274,  1079,    33,   267,   267,     7,   267,
       7,   266,     5,     5,     5,  1090,   121,   122,   123,   272,
       5,   272,     5,   272,     5,  1972,    11,    12,    13,     5,
     272,    16,    17,    18,   272,    20,  2012,   272,     5,   242,
     267,     5,     5,   272,    11,    12,    13,  1444,    33,    16,
      17,    18,   272,    20,     5,   272,   161,     5,     5,   272,
     272,     5,     7,   267,     7,  1140,    33,     7,     7,   607,
       7,  1146,     7,     7,   179,  1736,  2052,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,  1444,  2074,     8,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,     5,  1830,  1736,   242,
     272,     7,    11,    12,    13,     7,     7,    16,    17,    18,
     266,    20,   266,   257,     7,     7,  1211,  1212,     7,     7,
       5,  1216,  1217,  1218,    33,     7,    11,    12,    13,  1721,
    1225,    16,    17,    18,     5,    20,   272,   242,     7,     7,
       7,     7,     7,     7,     7,     7,     5,     7,    33,   274,
     275,     7,    11,    12,    13,   273,   281,    16,    17,    18,
    1255,    20,    70,   288,   267,   269,     7,     5,   257,     8,
    1265,     7,     5,   272,    33,     7,  1409,     7,    11,    12,
      13,    90,     7,    16,    17,    18,     7,    20,   267,   273,
     272,   100,   266,   266,   266,     5,   266,   266,  1860,     3,
      33,    11,    12,    13,     5,   266,    16,    17,    18,   334,
      20,   266,     7,   338,   272,   340,   272,   266,  1383,  1384,
    1385,   272,  1387,    33,   272,   273,   272,   266,   266,   138,
     139,   140,   141,   142,   143,  1330,  1331,   362,   266,   273,
    1335,   366,   267,  1338,   266,   272,  1908,     5,   266,     5,
     266,   266,   250,   273,   379,   263,   266,     3,   272,   817,
     266,   386,   387,   388,   389,     7,   391,   272,   273,   394,
     395,   396,   266,   266,   266,   266,     5,  1372,   266,     6,
     266,   266,    11,    12,    13,   272,   273,    16,    17,    18,
     266,    20,   266,   266,   266,  1390,  1391,   266,  1393,  1394,
    1395,     5,  1888,   242,    33,   266,   272,  1402,   266,     5,
     266,     5,     5,   266,   266,   266,   266,   266,  1551,  1736,
    1553,  1554,  1555,   881,   882,   883,   884,  1559,   266,   272,
     888,   272,   266,   266,   266,  1402,  1568,   272,   266,   266,
       5,   466,   467,   266,     5,   269,   272,   472,     8,  1444,
      11,    12,    13,   272,   272,    16,    17,    18,   273,    20,
     267,  1456,   267,   266,   273,     5,     5,   267,   266,  1736,
     267,   496,    33,     5,     5,     5,   272,  1472,     5,     5,
       5,  1476,   272,  1478,    11,    12,    13,   272,   273,    16,
      17,    18,   121,    20,     5,     5,     5,     3,     5,  1564,
    1565,   274,     7,     7,     5,   266,    33,  1572,   266,   266,
       7,     7,     7,   272,   273,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   272,   272,    84,     7,     7,     7,
       7,     7,    90,   558,     7,  1667,  1668,   995,   996,   272,
     273,     7,  1674,     7,     7,   103,     7,   572,     7,     7,
    1008,     7,   274,   272,   267,   266,   274,     7,  1623,     7,
    1625,     7,   272,   273,  1559,   590,     7,  1562,  1700,  1701,
       7,     5,   272,  1568,     7,     7,     7,     7,     7,     7,
    1713,     7,     7,     5,     7,   266,  1719,     7,     7,    11,
      12,    13,     7,     7,    16,    17,    18,     7,    20,     7,
       7,  1059,     7,  1061,     7,   630,   631,     7,     7,   634,
    1068,    33,     7,  1678,     5,     5,    85,     5,    87,    88,
       7,    90,   266,   266,     5,     5,  1621,   267,     7,     7,
       7,   100,     7,  1628,     7,  1630,     7,     7,     7,   267,
    1635,   267,   274,  1101,   273,     7,  1641,   267,   117,   118,
     119,   274,   274,   274,  1786,  1650,  1788,   274,   274,   274,
     274,  1656,  1657,   274,   274,   134,   267,   274,   267,   274,
     272,   274,  1667,  1668,   274,     7,   274,   274,   273,  1674,
     267,   272,   274,   243,   244,   245,   711,   247,   248,   249,
     250,   273,   272,   253,   254,   255,   256,   257,   258,   259,
     274,   274,   274,   263,   274,  1700,  1701,   274,   274,   269,
     274,   272,   273,   273,   273,   273,   272,   272,     3,   267,
     274,   746,   747,   274,  1789,   194,  1721,   274,   274,   274,
     250,     7,   116,     7,  1867,  1868,  1869,  1870,   266,     7,
       7,  1736,     7,   267,     3,   272,   273,   243,   244,   245,
       7,   247,   248,   249,   250,     7,     7,   253,   254,   255,
     256,   257,   258,   259,     7,     7,     7,   263,     7,  1227,
     272,     7,     7,   269,   799,     7,     7,     7,   272,   201,
     202,   203,   204,     3,     4,     5,   272,   272,   272,   272,
     272,  1786,     7,  1788,    14,    15,     7,   266,     5,     7,
     216,   272,   272,     5,   273,   272,   134,    27,    28,    29,
      30,   266,   272,   267,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     7,
     243,   244,   245,   267,   247,   248,   249,   250,     5,   267,
     253,   254,   255,   256,   257,   258,   259,   274,     3,     5,
     263,   267,     7,   267,     5,  1860,   269,     5,     7,   267,
       7,  1329,   274,   267,     7,   267,     7,   274,  1336,     7,
    2013,   274,  2015,  2016,  1949,   274,     7,     7,   274,  1347,
     272,   267,  1350,   267,   249,   250,     5,  1355,   253,   254,
     255,   256,   257,   258,   259,   260,   274,   274,   263,  1367,
     274,   274,     7,  1908,   267,   267,   274,   274,     7,     5,
       5,    66,  1380,   272,  1382,     5,   272,    72,   272,   272,
     272,     3,   269,   267,   267,  2068,   267,   273,   267,   266,
      85,     7,    87,   273,   267,   139,   971,  2012,  1406,   974,
    1945,   273,     7,     7,    99,     7,     7,  1952,   103,     7,
       7,   986,     7,     7,     7,     7,     7,     7,     7,     7,
     115,     5,  1430,  1431,     7,  1433,     7,    11,    12,    13,
       7,     7,    16,    17,    18,     7,    20,  2052,  1013,   272,
    1015,   136,  1017,  1451,   274,   267,     7,     6,   115,    33,
       7,   243,   244,   245,     7,   247,   248,   249,   250,  2074,
       7,   253,   254,   255,   256,   257,   258,   259,     7,     5,
       7,   263,   272,    19,   272,   274,  1051,   269,   274,  2024,
     267,  2026,   272,  2028,  2029,     7,   256,     3,     4,     5,
     274,   261,   267,   267,   264,   274,   274,  2042,    14,    15,
     195,   274,   197,   273,   267,   274,   272,   274,   272,     5,
       7,     5,   274,   272,     7,  2060,     7,   272,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     7,    64,    65,
       7,     7,     7,     7,     5,     5,   266,   272,     7,   267,
       5,   267,   146,   267,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       5,     5,   267,   167,     7,     7,   170,   273,     7,   173,
       7,     7,   176,   273,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     126,     7,   274,   197,     7,     7,     7,   133,   202,     7,
       7,   205,     7,   272,   272,     7,  1634,     7,     7,     7,
       7,     7,  1640,   245,     7,   247,   248,   249,   250,  1647,
     272,   253,   254,   255,   256,   257,   258,   259,   272,     7,
     273,   263,   272,   272,   272,  1663,     7,   269,   272,   274,
     267,     7,     3,     4,     5,   273,   272,   267,    66,   272,
       7,     7,     7,    14,    15,   274,  1684,     7,     7,     7,
       5,     7,   939,  1258,   136,   272,  2088,   273,   273,   273,
    1698,   273,   272,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,   272,    64,    65,   274,   940,   272,     8,   273,
     273,   272,   694,   249,   581,   273,  1072,  1401,   811,   255,
     256,  1212,  1682,   546,   862,   261,  1047,    -1,   264,  1558,
      -1,   267,   268,   269,   270,    -1,   272,  1332,  1333,  1334,
      -1,    -1,    -1,    -1,    -1,  1340,    -1,  1342,  1343,    -1,
    1345,     7,    -1,  1348,  1349,    -1,    -1,    -1,  1353,    -1,
      -1,  1356,  1357,  1358,  1359,   126,    -1,  1362,  1363,  1364,
      -1,  1366,   133,    -1,    -1,  1370,  1371,    -1,    -1,    -1,
    1375,  1376,    -1,    -1,    -1,    -1,    -1,    -1,  1383,  1384,
    1385,  1386,  1387,   247,   248,   249,   250,  1392,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,  1839,    -1,    -1,    -1,   269,  1844,    -1,  1846,     3,
       4,     5,    -1,    -1,    -1,  1853,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,  1866,    -1,
      -1,    -1,    -1,    -1,    -1,  1873,    -1,    -1,    -1,     7,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    85,  1906,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,   255,   256,    -1,    -1,    -1,    -1,
     261,    -1,    -1,   264,    -1,    -1,    -1,    -1,   269,   270,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,  1962,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,    -1,  1980,   253,   254,   255,   256,   257,   258,   259,
     260,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,  1564,
    1565,    -1,    -1,    -1,  1569,  1570,    -1,  1572,  1573,    -1,
      -1,    -1,    -1,    -1,  1579,    -1,  1581,   243,   244,   245,
      -1,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,  1599,    -1,    -1,   263,    -1,     3,
       4,     5,     6,   269,    -1,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,  1623,  1624,
    1625,  1626,  1627,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,   273,     7,  1662,    -1,    -1,
      -1,  1666,   256,    -1,  1669,  1670,    -1,   261,    -1,    73,
     264,    -1,    -1,  1678,    -1,   243,   244,   245,   272,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,   269,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      -1,  1716,  1717,  1718,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,  1727,  1728,  1729,  1730,  1731,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     3,
       4,     5,   243,   244,   245,    -1,   247,   248,   249,   250,
      14,    15,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,  1789,    -1,    -1,    -1,   269,  1794,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,  1824,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1834,
    1835,  1836,  1837,    -1,    -1,  1840,   240,  1842,    85,    -1,
      87,    88,    89,    -1,    -1,  1850,  1851,    -1,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,   261,    -1,    -1,
     264,    -1,    -1,    -1,    -1,   269,    -1,    -1,   272,    -1,
    1875,  1876,  1877,    -1,  1879,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,   130,   131,   132,    -1,   134,   135,    -1,
      -1,    -1,   243,   244,   245,     8,   247,   248,   249,   250,
    1905,    -1,   253,   254,   255,   256,   257,   258,   259,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,  1922,   269,    -1,
      -1,    -1,    -1,  1928,   245,   246,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,   260,
     240,    -1,   263,    -1,  1949,    85,  1951,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,   261,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,  1981,  1982,  1983,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,  2012,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,   261,  2023,    -1,
     264,    -1,    -1,    -1,    -1,   269,   273,  2032,    -1,    -1,
    2035,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,    -1,    -1,  2052,    -1,     5,
       7,    -1,    -1,    -1,  2059,    11,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,  2074,
    2075,     3,     4,     5,    -1,    -1,    -1,    33,    -1,    -1,
      -1,  2086,    14,    15,    -1,  2090,    -1,    -1,    -1,    -1,
    2095,    -1,    -1,  2098,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     3,     4,     5,
     243,   244,   245,   273,   247,   248,   249,   250,    14,    15,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    27,    28,    29,    30,    -1,   269,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,   273,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,    -1,
     176,    -1,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,   217,   243,   244,   245,   221,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,     7,    -1,    -1,
      -1,    -1,   269,    -1,    -1,     5,    -1,   273,    -1,    -1,
      -1,    11,    12,    13,   256,    -1,    16,    17,    18,   261,
      20,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    33,    -1,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,    -1,     7,   253,   254,   255,
     256,   257,   258,   259,   260,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,   274,    -1,
     256,    -1,    -1,    -1,    -1,   261,    -1,    -1,   264,    -1,
       7,    -1,    -1,    -1,    -1,   146,   272,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,   173,    -1,    -1,   176,    -1,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,   202,    -1,    -1,   205,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,    -1,    -1,   176,    -1,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,   202,     5,    -1,   205,    -1,    -1,    -1,    11,
      12,    13,   273,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,   243,   244,   245,    -1,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
       7,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,   269,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    -1,   273,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,   243,   244,   245,    -1,   247,   248,   249,   250,
      -1,    33,   253,   254,   255,   256,   257,   258,   259,   243,
     244,   245,   263,   247,   248,   249,   250,    -1,   269,   253,
     254,   255,   256,   257,   258,   259,   243,   244,   245,   263,
     247,   248,   249,   250,     7,   269,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,     7,   269,    -1,   146,    -1,   148,   149,   150,   151,
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
      -1,    -1,    -1,    -1,    -1,    -1,   243,   244,   245,    33,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,     7,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,   273,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,   244,   245,     7,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,   243,   244,   245,
     263,   247,   248,   249,   250,    -1,   269,   253,   254,   255,
     256,   257,   258,   259,     7,    -1,    -1,   263,    -1,    -1,
      -1,    -1,   146,   269,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,
      -1,    -1,   176,    -1,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,   202,    -1,
      -1,   205,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,
      -1,    -1,   176,    -1,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,   202,     5,
      -1,   205,    -1,    -1,    -1,    11,    12,    13,    -1,   273,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,   243,
     244,   245,    -1,   247,   248,   249,   250,    33,    -1,   253,
     254,   255,   256,   257,   258,   259,   243,   244,   245,   263,
     247,   248,   249,   250,    -1,   269,   253,   254,   255,   256,
     257,   258,   259,     7,    -1,    -1,   263,    -1,    -1,     5,
      -1,    -1,   269,    -1,    -1,    11,    12,    13,    -1,   273,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,   243,
     244,   245,    -1,   247,   248,   249,   250,    33,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,
     243,   244,   245,    -1,   247,   248,   249,   250,    -1,    -1,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
       8,    -1,    -1,    -1,    -1,   269,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,   273,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
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
      -1,    -1,    -1,    33,    -1,   243,   244,   245,    -1,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,    -1,    -1,    -1,   263,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,   273,    16,    17,    18,   256,
      20,    -1,    -1,    -1,   261,    -1,    -1,   264,     3,     4,
       5,     6,    -1,    33,   246,   247,   248,   249,   250,    14,
      15,   253,   254,   255,   256,   257,   258,   259,   260,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     8,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,    -1,   167,    -1,    -1,
     170,     8,    -1,   173,    -1,    -1,   176,    -1,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,     8,    -1,    -1,   197,    -1,    -1,
      -1,    -1,   202,    -1,    -1,   205,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     8,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,    -1,    -1,   176,    -1,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,     8,    -1,    -1,   197,     3,     4,
       5,    -1,   202,    -1,    -1,   205,    -1,    -1,    -1,    14,
      15,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      14,    15,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,   261,    -1,    -1,   264,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,   243,   244,   245,    -1,
     247,   248,   249,   250,    -1,    -1,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,    -1,   263,    -1,    -1,   243,
     244,   245,   269,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,    -1,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,   256,    -1,    -1,    -1,   269,   261,    -1,    -1,   264,
      -1,   243,   244,   245,    -1,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,     5,    -1,
      79,   263,    -1,    -1,    11,    12,    13,   269,    -1,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,   261,    -1,    -1,
     264,    -1,   243,   244,   245,    -1,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,    66,
      -1,   140,   263,    -1,    -1,    72,    -1,    -1,   269,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    85,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,   103,   176,    -1,   243,
     244,   245,    -1,   247,   248,   249,   250,    -1,   115,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,    -1,   206,    -1,   136,
     274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   243,   244,   245,    -1,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,   269,   195,    -1,
     197,    -1,   274,   243,   244,   245,    -1,   247,   248,   249,
     250,    -1,    -1,   253,   254,   255,   256,   257,   258,   259,
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
     265,   243,   244,   245,   269,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,   265,   243,   244,   245,   269,   247,   248,
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
     265,   243,   244,   245,   269,   247,   248,   249,   250,    -1,
      -1,   253,   254,   255,   256,   257,   258,   259,    -1,    -1,
      -1,   263,    -1,   265,   243,   244,   245,   269,   247,   248,
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
     263,    -1,    -1,    -1,    -1,    -1,   269,   243,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,   260,    -1,    -1,   263,    -1,    -1,
      -1,   267,   243,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,   260,
      -1,    -1,   263,    -1,    -1,    -1,   267,   243,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,   253,   254,   255,
     256,   257,   258,   259,   260,    -1,    -1,   263,    -1,    -1,
      -1,   267,   243,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,   253,   254,   255,   256,   257,   258,   259,   260,
      -1,    -1,   263,    -1,   265,   243,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   259,   260,    -1,    -1,   263
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   278,   279,     0,   280,   281,     5,    11,    12,    13,
      16,    17,    18,    20,    22,    23,    24,    25,    33,    66,
      72,    85,    87,    99,   103,   115,   136,   195,   197,   282,
     283,   442,   455,   456,   464,   465,   276,   264,   269,   465,
     264,     7,     5,   264,   264,     5,     7,    22,    23,    24,
      40,   202,     7,     3,     7,    66,    72,    85,    87,    99,
     103,   115,   136,   195,   197,     6,     9,    10,   241,   465,
     466,   467,   266,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   465,   276,   242,   272,     6,     7,     7,
     465,   134,     3,     4,    14,    15,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,   256,   261,   264,   459,   460,   465,   468,   469,   459,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   266,   264,   457,
     284,   341,   326,   332,   348,   305,   371,   397,   427,   438,
     199,   272,     5,     6,    27,    28,    29,    30,    31,   240,
     272,   459,   461,   463,   467,   459,   265,   274,   265,   272,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   459,   459,   459,     8,   243,   244,   245,   247,
     248,   249,   250,   253,   254,   255,   256,   257,   258,   259,
     263,   269,   265,   466,   466,   267,   274,   301,     5,    67,
     273,   285,   286,   455,   465,   272,   273,   342,   455,   272,
     273,   272,   273,   272,   273,   349,   455,    71,   273,   306,
     455,   465,   272,   273,   372,   455,   272,   273,   398,   455,
     272,   273,   428,   455,   272,   273,   439,   455,   465,   459,
     272,     7,   266,   266,   266,   266,   266,   266,   459,   462,
     463,     8,     7,     7,   273,     7,   462,     7,   266,   459,
     466,   465,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   265,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   274,
     265,   274,     7,   465,   272,   302,   304,   266,   242,   255,
     266,   343,   327,   333,   350,   266,   266,   373,   399,   429,
     440,   443,   273,   273,   462,     5,     5,   459,   459,   466,
     466,   273,   274,   459,   265,   459,     8,   274,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   274,
     267,   267,   267,   267,   267,   267,   274,   274,   274,     8,
     265,     8,   466,   462,   242,   272,   269,   459,   242,   242,
     300,     5,    73,   269,   289,   293,   242,   459,    86,    90,
     100,   273,   344,    86,   100,   273,   328,    86,    92,   100,
     273,   334,    72,    90,   100,   101,   109,   111,   273,   351,
     455,   307,     5,   267,   289,   291,   465,    90,   100,   116,
     120,   273,   374,   100,   137,   144,   273,   400,   455,   100,
     116,   138,   196,   273,   430,   100,   144,   198,   200,   223,
     273,   441,   272,   273,   267,   274,   274,   274,   267,   267,
     459,   463,     8,     7,   267,   459,   466,   459,   459,   459,
     459,   459,   459,   267,   265,     6,   459,   459,   459,   273,
       5,   289,   289,   267,   301,     3,   264,   272,   275,   297,
     299,   465,     7,   266,   289,   267,     5,   272,     5,     5,
     465,   272,     5,   272,    26,   103,   257,   308,   309,     5,
     272,     5,     5,   465,   272,   272,   272,   267,   301,   242,
     267,     5,     5,   465,   272,   272,     5,   465,   272,   401,
       5,   465,   272,   465,   465,   465,   272,   465,   466,     5,
     444,     5,   459,   459,     7,     7,   459,     7,     8,   273,
     267,   267,   267,   267,   267,   265,   273,   273,     7,     7,
       7,   465,     8,   459,   298,   462,    68,   294,   297,     7,
     242,   272,   345,     7,   272,   302,     7,   329,     7,   335,
     266,   266,   257,     7,   312,   313,     7,   368,     7,   302,
       7,   352,   358,   365,     7,     5,   308,   242,     7,   302,
       7,   375,   381,   302,     7,   402,   272,   302,     7,   431,
       7,     7,     7,   444,     7,     7,     7,   273,   445,   267,
     274,   274,   459,   242,   272,   459,   265,   273,   301,   275,
     290,    70,   345,   272,   273,   455,     7,   272,   273,   272,
     273,   459,     5,   257,     5,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    64,
      65,   126,   133,   249,   255,   256,   261,   264,   269,   270,
     272,   314,   318,   396,   458,   460,   465,   468,   469,   272,
     273,   455,     7,   272,   273,   455,   272,   273,   272,   273,
     455,   272,     7,   308,     7,   272,   273,   455,   121,   122,
     123,   124,   273,   382,   455,     7,   272,   273,   455,   409,
       7,   272,   273,   455,   273,   201,   202,   203,   204,   446,
     455,   459,   459,   273,   272,   459,     8,     8,   256,   299,
     295,   301,   287,   273,   346,   330,   336,   267,   267,   396,
     266,   322,   266,   266,   266,   266,   319,   320,     5,    32,
     314,   314,   314,   314,     3,     3,     5,   147,   221,     5,
     465,   243,   244,   245,   246,   247,   248,   249,   250,   253,
     254,   255,   256,   257,   258,   259,   260,   263,   269,   271,
     266,   323,   323,   369,   353,   359,   366,   459,     7,   376,
     272,   272,   272,   272,   403,     5,    18,   146,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   167,   170,   173,   176,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   197,   202,   205,   273,   410,   455,
     432,   266,   266,   266,   266,   267,   267,   273,   273,   459,
     459,   299,   267,     5,    69,   296,   266,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    84,    90,   103,   273,
     347,    73,    85,   273,   331,    86,    90,    91,   273,   337,
     396,   266,   396,   314,     5,     5,   266,   266,   250,   266,
     265,   465,   273,   315,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
       3,   459,   267,   268,   314,   324,   272,   325,   102,   112,
     113,   114,   273,   370,   100,   102,   103,   104,   105,   106,
     107,   108,   273,   354,   100,   102,   110,   273,   360,    90,
     100,   102,   273,   367,   273,    85,    87,    88,    90,   100,
     117,   118,   119,   134,   194,   266,   273,   377,   387,   387,
     391,   383,    90,   100,   138,   139,   140,   141,   142,   143,
     273,   404,   455,   266,   465,   266,   266,   308,   266,   266,
     266,   266,   266,   266,   266,   266,   266,     7,   266,   266,
     266,   266,   266,   266,   272,   266,   272,   266,   272,   272,
     266,   266,   266,   266,   266,   266,   266,   266,   272,   272,
     266,   266,   266,   266,   266,   272,   272,   266,   411,   412,
      79,   100,   273,   433,   448,   465,     6,   448,   291,     6,
     242,     8,   465,   297,   269,   291,   291,   291,   291,   266,
     308,   266,   308,   308,   308,   272,   465,     5,   266,   308,
      68,   291,     5,   272,     5,     5,   267,   312,   267,   274,
     266,   267,   312,   312,   266,   314,   273,   314,   267,   267,
     274,    73,   462,     5,   293,   296,   465,     5,     5,     5,
     272,   272,   310,   310,   291,   291,     5,     5,   272,   363,
       5,   272,   361,     5,   465,     5,     5,     5,     5,     5,
     111,   121,   465,   465,   459,     3,   291,   461,   379,    85,
      87,    88,    89,   126,   127,   128,   129,   130,   131,   132,
     134,   135,   273,   388,   395,   273,   134,   273,   392,   395,
      90,   114,   272,   273,   384,     5,   465,   272,   405,   465,
     466,   461,   466,   272,   407,   465,   465,   465,     7,   308,
     308,     7,   465,   465,   465,   465,   465,   465,   465,   465,
     465,   308,   465,   465,   465,   465,   459,   416,   459,   418,
     459,   420,   422,   291,   466,   465,   465,   465,   465,   465,
     465,   465,   465,   465,   465,   465,   465,   465,   465,     5,
     465,   266,   266,   272,   465,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   451,   266,   450,   274,   451,   447,
     452,   272,   459,   297,     7,     7,     7,     7,   308,     7,
     308,     7,     7,     7,   460,     7,     7,   308,     7,     7,
       7,   325,   338,     7,     7,   274,   314,   321,   272,   267,
     274,   312,   267,     8,   314,   266,   273,     7,     7,     7,
       7,     7,     7,   302,   272,   355,     5,   308,   311,     7,
       7,     7,     7,     7,   364,     7,   362,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,   378,     7,
       7,     7,     7,   312,     5,     5,     5,   266,   291,     7,
     266,   291,   266,     5,     5,   385,     7,     7,   406,     7,
       7,     7,     7,   408,     7,     7,   267,   267,   267,   274,
     274,   274,   274,   274,   274,   274,   274,   267,   274,   267,
     274,   267,   274,   274,   267,   274,   144,   147,   164,   165,
     166,   273,   417,   274,   144,   147,   164,   165,   168,   169,
     273,   419,   274,    21,    92,   144,   171,   172,   273,   421,
      21,    92,   137,   144,   145,   171,   174,   175,   273,   423,
     274,   267,   274,   274,   274,   274,   274,   274,   273,   273,
     274,   274,   274,   274,   274,   274,   274,   267,   310,   413,
     465,   413,   434,     7,   291,   291,   272,   291,   272,   272,
     272,   272,   272,   452,   291,   255,   256,   257,   258,   274,
     449,   240,   308,   452,   274,   267,   274,   453,   273,   288,
     274,   274,   301,   274,     7,   272,   273,   291,   267,   312,
     459,     3,   267,   250,   316,   291,     7,   116,     7,   301,
     273,   274,   273,   301,   273,   301,   266,   380,   267,     7,
       7,     7,     3,     7,   389,     7,   393,     7,     7,    82,
      83,   120,   134,   273,   386,   273,   301,   273,   301,     7,
     272,     7,   308,   465,   465,   459,   459,   459,   465,   308,
       7,   291,     7,   459,     7,   459,   459,     7,   459,   272,
     308,   459,   459,   308,   459,   272,   308,   459,   459,   459,
     459,   459,   459,   459,   272,   459,   308,   459,   459,   465,
     272,   272,   459,   459,   272,   308,     7,   308,   461,   461,
     461,   459,   461,     7,     7,   465,   465,   459,   465,   465,
     291,     5,     7,   414,   414,     5,   121,   273,   455,   216,
     308,   272,   462,   272,   272,   272,   267,   267,     5,   266,
     452,   267,   134,     7,    79,   140,   176,   206,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   274,   308,   308,   460,   308,   339,   267,   267,   274,
     267,   317,   314,   267,     5,     5,   308,     5,     5,   465,
       7,     7,   267,   312,   312,   396,   396,   396,   291,   465,
     465,   409,   267,   274,   274,   274,   274,   274,   274,   267,
     274,   267,   267,   267,   274,   409,     7,     7,     7,     7,
     274,   409,     7,     7,     7,     7,     7,   274,     7,     7,
     409,     7,     7,     7,     7,     7,   409,   409,     7,     7,
     424,   267,   274,   274,   267,   267,   274,   274,   274,   274,
     274,   267,   267,   267,   274,   273,   274,   267,   274,   415,
     267,   272,   272,     5,   274,   462,   273,   462,   462,   462,
       7,   450,   466,   267,     7,   291,   461,   461,   272,     5,
     250,   251,   466,   459,   459,   461,   459,     5,   454,   454,
     454,   459,     5,   272,   459,   310,   272,   272,   272,   272,
       3,   269,   267,   267,   273,   267,    93,    94,    95,    96,
      97,    98,   273,   340,   267,   459,   266,   273,     7,   273,
     267,     7,   390,   394,     7,     7,     7,     7,   273,     7,
     461,   459,   461,   459,   459,   465,     7,   465,     7,     7,
       7,   308,   273,   308,   273,   308,   273,   273,   273,   272,
     273,     7,   459,   308,     7,     7,   459,   466,   466,   459,
     459,     7,     7,     7,   466,     7,   139,     7,   217,   221,
     461,     7,   435,   435,   272,   308,   273,   273,   273,   273,
     274,   267,     7,   452,   308,   466,   466,     6,   462,   459,
     459,   459,   462,   297,     7,     7,     7,     7,     5,   459,
     459,   459,   459,   459,   272,   273,   314,   115,     7,   274,
     274,    19,   267,   267,   274,   274,   274,   274,   267,   274,
     274,   267,   274,   425,   274,   267,   274,   267,   267,   267,
     274,   274,   273,   274,   466,   466,   461,    85,    87,    90,
     134,   273,   395,   436,   273,   459,   274,   272,   272,   272,
     272,   452,   267,   274,   273,   274,   274,   274,   273,   274,
       7,     7,     7,     7,     7,     7,   459,   267,     5,   312,
     396,   272,     7,     7,   459,   459,   459,   459,     7,   308,
     459,   272,   459,    21,    90,    92,   103,   116,   134,   273,
     426,   308,     7,   308,     7,     7,     7,   459,   459,     7,
     308,   273,   274,     5,     5,     5,   291,   266,   274,   308,
     462,   462,   462,   462,   267,     7,   308,   459,   459,   459,
     459,   273,   302,   267,   267,   409,   267,   267,   267,   274,
     267,   274,   409,   267,     5,     5,   459,   308,     5,   291,
     267,   267,   274,   267,   267,   273,     7,   459,     7,     7,
       7,     7,   437,   459,   273,   273,   273,   273,   273,     7,
     274,   274,   274,   274,   267,     7,     7,     7,   273,     7,
       7,     7,   461,   272,   459,   273,   272,     7,     7,     7,
       7,     7,     7,     7,     7,   308,   272,   272,     7,   273,
     312,   273,   272,   272,   273,   272,   272,   308,   459,   459,
     459,     7,   356,   274,   409,   267,   409,   267,   409,   409,
       7,   267,   272,   461,   462,   272,   462,   462,   273,   273,
     273,   273,    66,   459,   273,   272,   273,     7,   273,   273,
       7,   459,   274,   273,   459,   273,   273,   292,   465,   274,
     409,     7,     7,   273,   461,   273,   273,   273,   272,     7,
     272,   303,   459,   273,   274,   272,   462,   357,   273,   267,
     461,   459,   273,   136,     7,   273,   274,   273,     5,   459,
     272,   303,   273,   459,     7,   274,   273,   459,   274,   459,
     273
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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

  case 135:
#line 1251 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CHANGECURRENTPOSITION ;

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 136:
#line 1263 "GetDP.y"
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
    ;}
    break;

  case 138:
#line 1284 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 139:
#line 1290 "GetDP.y"
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

  case 140:
#line 1364 "GetDP.y"
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

  case 141:
#line 1398 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (1)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (1)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 142:
#line 1407 "GetDP.y"
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

  case 143:
#line 1419 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1421 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = (yyvsp[(4) - (5)].l) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 145:
#line 1433 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1435 "GetDP.y"
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

  case 147:
#line 1447 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 148:
#line 1449 "GetDP.y"
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

  case 149:
#line 1463 "GetDP.y"
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

  case 150:
#line 1475 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 151:
#line 1481 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 152:
#line 1487 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 153:
#line 1489 "GetDP.y"
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

  case 154:
#line 1518 "GetDP.y"
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

  case 155:
#line 1544 "GetDP.y"
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

  case 156:
#line 1557 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1563 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1570 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[(2) - (2)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1576 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[(3) - (3)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1583 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[(2) - (2)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1590 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[(3) - (3)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 162:
#line 1597 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 163:
#line 1603 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 164:
#line 1612 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 165:
#line 1613 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 166:
#line 1614 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 167:
#line 1619 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 168:
#line 1620 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 169:
#line 1626 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 170:
#line 1629 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 171:
#line 1632 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 172:
#line 1647 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 173:
#line 1652 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 174:
#line 1659 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 176:
#line 1668 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 177:
#line 1673 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 178:
#line 1680 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 179:
#line 1683 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 180:
#line 1690 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 182:
#line 1700 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 183:
#line 1703 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 184:
#line 1706 "GetDP.y"
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

  case 185:
#line 1744 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 186:
#line 1750 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 187:
#line 1757 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 189:
#line 1770 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 190:
#line 1777 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 191:
#line 1780 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 192:
#line 1787 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 193:
#line 1790 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 194:
#line 1797 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 196:
#line 1809 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 197:
#line 1819 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 198:
#line 1829 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 199:
#line 1836 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 200:
#line 1839 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 201:
#line 1846 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 203:
#line 1862 "GetDP.y"
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

  case 204:
#line 1910 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 205:
#line 1913 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 206:
#line 1916 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 207:
#line 1919 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 208:
#line 1922 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 209:
#line 1933 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 211:
#line 1943 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 213:
#line 1953 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 215:
#line 1966 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 216:
#line 1973 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 217:
#line 1981 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 218:
#line 1990 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 219:
#line 1993 "GetDP.y"
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

  case 220:
#line 2011 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 221:
#line 2016 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 222:
#line 2021 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 223:
#line 2030 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 225:
#line 2044 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 226:
#line 2054 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 227:
#line 2059 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 228:
#line 2065 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 229:
#line 2070 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2078 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2086 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2095 "GetDP.y"
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

  case 233:
#line 2113 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2122 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2130 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2138 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(2) - (3)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2148 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 238:
#line 2158 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 239:
#line 2168 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 240:
#line 2188 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 242:
#line 2199 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 244:
#line 2210 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 247:
#line 2224 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 248:
#line 2231 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 249:
#line 2239 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 250:
#line 2248 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 251:
#line 2251 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 252:
#line 2254 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 253:
#line 2257 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 254:
#line 2264 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 255:
#line 2270 "GetDP.y"
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

  case 256:
#line 2287 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 257:
#line 2296 "GetDP.y"
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

  case 259:
#line 2317 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 260:
#line 2320 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 261:
#line 2325 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 262:
#line 2330 "GetDP.y"
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

  case 263:
#line 2344 "GetDP.y"
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

  case 264:
#line 2364 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 265:
#line 2369 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 266:
#line 2374 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 267:
#line 2379 "GetDP.y"
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

  case 269:
#line 2413 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 270:
#line 2417 "GetDP.y"
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

  case 271:
#line 2427 "GetDP.y"
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

  case 272:
#line 2491 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 273:
#line 2497 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 274:
#line 2506 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 276:
#line 2517 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 277:
#line 2524 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 278:
#line 2527 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 279:
#line 2534 "GetDP.y"
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

  case 280:
#line 2550 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 281:
#line 2556 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 282:
#line 2559 "GetDP.y"
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

  case 283:
#line 2578 "GetDP.y"
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

  case 284:
#line 2590 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 285:
#line 2597 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 286:
#line 2602 "GetDP.y"
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

  case 287:
#line 2617 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 288:
#line 2623 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 289:
#line 2629 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 290:
#line 2638 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 292:
#line 2650 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 293:
#line 2657 "GetDP.y"
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

  case 294:
#line 2668 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[(2) - (3)].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", (yyvsp[(2) - (3)].c)) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 295:
#line 2682 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 296:
#line 2687 "GetDP.y"
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

  case 297:
#line 2724 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 298:
#line 2733 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 300:
#line 2749 "GetDP.y"
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

  case 301:
#line 2782 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 302:
#line 2785 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 303:
#line 2788 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 304:
#line 2803 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 306:
#line 2813 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 308:
#line 2824 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 310:
#line 2835 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 311:
#line 2842 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 312:
#line 2850 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 314:
#line 2862 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 315:
#line 2868 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 316:
#line 2873 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 318:
#line 2884 "GetDP.y"
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

  case 320:
#line 2907 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 321:
#line 2910 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 322:
#line 2914 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 323:
#line 2917 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 324:
#line 2927 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 325:
#line 2931 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 326:
#line 2939 "GetDP.y"
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

  case 327:
#line 2963 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 328:
#line 2968 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 329:
#line 2974 "GetDP.y"
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

  case 330:
#line 3285 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 331:
#line 3290 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 332:
#line 3299 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 333:
#line 3308 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 334:
#line 3317 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 336:
#line 3325 "GetDP.y"
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

  case 337:
#line 3365 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 338:
#line 3370 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 339:
#line 3375 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 340:
#line 3384 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 341:
#line 3387 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 342:
#line 3390 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 343:
#line 3393 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 344:
#line 3404 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 346:
#line 3415 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 347:
#line 3425 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 348:
#line 3435 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 349:
#line 3449 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 351:
#line 3461 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 352:
#line 3463 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 353:
#line 3465 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 354:
#line 3467 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 355:
#line 3475 "GetDP.y"
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

  case 357:
#line 3500 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 358:
#line 3508 "GetDP.y"
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

  case 359:
#line 3587 "GetDP.y"
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

  case 360:
#line 3641 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 361:
#line 3646 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 362:
#line 3655 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 363:
#line 3664 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 364:
#line 3669 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 365:
#line 3678 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 366:
#line 3689 "GetDP.y"
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

  case 368:
#line 3718 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 369:
#line 3723 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 370:
#line 3731 "GetDP.y"
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

  case 371:
#line 3786 "GetDP.y"
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

  case 372:
#line 3803 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 373:
#line 3804 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 374:
#line 3805 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 375:
#line 3806 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 376:
#line 3807 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 377:
#line 3808 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 378:
#line 3809 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 379:
#line 3810 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 380:
#line 3817 "GetDP.y"
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

  case 381:
#line 3838 "GetDP.y"
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

  case 382:
#line 3862 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 384:
#line 3872 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 386:
#line 3883 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 388:
#line 3895 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 389:
#line 3902 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 390:
#line 3910 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 391:
#line 3913 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 392:
#line 3915 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 394:
#line 3923 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 395:
#line 3928 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 396:
#line 3933 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 397:
#line 3942 "GetDP.y"
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

  case 399:
#line 3962 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 400:
#line 3965 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 401:
#line 3974 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 402:
#line 3977 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 403:
#line 3982 "GetDP.y"
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

  case 404:
#line 3993 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 405:
#line 3998 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 406:
#line 4003 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 408:
#line 4014 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 409:
#line 4023 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 410:
#line 4030 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 411:
#line 4033 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 412:
#line 4045 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(1) - (1)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 413:
#line 4055 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 414:
#line 4061 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 415:
#line 4064 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 416:
#line 4076 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 417:
#line 4084 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 418:
#line 4097 "GetDP.y"
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

  case 419:
#line 4119 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 420:
#line 4126 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 421:
#line 4132 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 422:
#line 4138 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 423:
#line 4144 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 424:
#line 4152 "GetDP.y"
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

  case 425:
#line 4174 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 426:
#line 4181 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 427:
#line 4187 "GetDP.y"
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

  case 428:
#line 4198 "GetDP.y"
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

  case 429:
#line 4210 "GetDP.y"
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

  case 430:
#line 4223 "GetDP.y"
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

  case 431:
#line 4238 "GetDP.y"
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

  case 432:
#line 4253 "GetDP.y"
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

  case 433:
#line 4268 "GetDP.y"
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

  case 434:
#line 4288 "GetDP.y"
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

  case 435:
#line 4309 "GetDP.y"
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

  case 436:
#line 4321 "GetDP.y"
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

  case 437:
#line 4341 "GetDP.y"
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

  case 438:
#line 4354 "GetDP.y"
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

  case 439:
#line 4371 "GetDP.y"
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

  case 440:
#line 4390 "GetDP.y"
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

  case 441:
#line 4411 "GetDP.y"
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

  case 442:
#line 4425 "GetDP.y"
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

  case 443:
#line 4439 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 444:
#line 4446 "GetDP.y"
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

  case 445:
#line 4458 "GetDP.y"
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

  case 446:
#line 4470 "GetDP.y"
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

  case 447:
#line 4482 "GetDP.y"
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

  case 448:
#line 4494 "GetDP.y"
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

  case 449:
#line 4506 "GetDP.y"
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

  case 450:
#line 4540 "GetDP.y"
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

  case 451:
#line 4553 "GetDP.y"
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

  case 452:
#line 4567 "GetDP.y"
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

  case 453:
#line 4580 "GetDP.y"
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

  case 454:
#line 4592 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 456:
#line 4601 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 458:
#line 4610 "GetDP.y"
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

  case 459:
#line 4621 "GetDP.y"
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

  case 460:
#line 4633 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 461:
#line 4643 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 462:
#line 4651 "GetDP.y"
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

  case 463:
#line 4664 "GetDP.y"
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

  case 464:
#line 4677 "GetDP.y"
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

  case 465:
#line 4691 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 466:
#line 4701 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 467:
#line 4711 "GetDP.y"
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

  case 468:
#line 4725 "GetDP.y"
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

  case 469:
#line 4739 "GetDP.y"
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

  case 470:
#line 4758 "GetDP.y"
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

  case 471:
#line 4776 "GetDP.y"
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

  case 472:
#line 4787 "GetDP.y"
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

  case 473:
#line 4802 "GetDP.y"
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

  case 474:
#line 4817 "GetDP.y"
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

  case 475:
#line 4832 "GetDP.y"
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

  case 476:
#line 4847 "GetDP.y"
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

  case 477:
#line 4862 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 478:
#line 4873 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 479:
#line 4878 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 480:
#line 4888 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 482:
#line 4898 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 483:
#line 4901 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 484:
#line 4911 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 485:
#line 4927 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 487:
#line 4943 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 488:
#line 4947 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 489:
#line 4951 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 490:
#line 4955 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 491:
#line 4960 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 492:
#line 4971 "GetDP.y"
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

  case 494:
#line 4988 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 495:
#line 4992 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 496:
#line 4996 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 497:
#line 5000 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 498:
#line 5004 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 499:
#line 5009 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 500:
#line 5020 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 502:
#line 5035 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 503:
#line 5039 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 504:
#line 5043 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 505:
#line 5047 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 506:
#line 5051 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 507:
#line 5062 "GetDP.y"
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

  case 509:
#line 5080 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 510:
#line 5084 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 511:
#line 5088 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 512:
#line 5092 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 513:
#line 5097 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 514:
#line 5107 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 515:
#line 5113 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 516:
#line 5119 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 517:
#line 5129 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 518:
#line 5132 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 519:
#line 5137 "GetDP.y"
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

  case 521:
#line 5155 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 522:
#line 5165 "GetDP.y"
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

  case 523:
#line 5194 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 524:
#line 5197 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 525:
#line 5200 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 526:
#line 5208 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 527:
#line 5225 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 529:
#line 5237 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 531:
#line 5246 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 533:
#line 5259 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 534:
#line 5266 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 535:
#line 5274 "GetDP.y"
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

  case 536:
#line 5287 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 537:
#line 5292 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 538:
#line 5298 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 539:
#line 5301 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 540:
#line 5304 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 541:
#line 5310 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 543:
#line 5321 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 544:
#line 5324 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 545:
#line 5330 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 546:
#line 5335 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 547:
#line 5341 "GetDP.y"
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

  case 548:
#line 5353 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 549:
#line 5358 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 551:
#line 5372 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 552:
#line 5379 "GetDP.y"
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

  case 553:
#line 5407 "GetDP.y"
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

  case 554:
#line 5418 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 555:
#line 5423 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 556:
#line 5432 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 557:
#line 5449 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 559:
#line 5461 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 561:
#line 5468 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 563:
#line 5480 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 564:
#line 5487 "GetDP.y"
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

  case 565:
#line 5499 "GetDP.y"
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

  case 566:
#line 5510 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 567:
#line 5515 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 568:
#line 5521 "GetDP.y"
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

  case 569:
#line 5538 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 570:
#line 5548 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 571:
#line 5551 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 572:
#line 5555 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 573:
#line 5568 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 574:
#line 5573 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 575:
#line 5578 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 576:
#line 5587 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 577:
#line 5596 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 578:
#line 5605 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 579:
#line 5611 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 580:
#line 5616 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 581:
#line 5624 "GetDP.y"
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

  case 582:
#line 5636 "GetDP.y"
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

  case 583:
#line 5659 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 584:
#line 5660 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 585:
#line 5661 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 586:
#line 5662 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 587:
#line 5668 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 588:
#line 5670 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 589:
#line 5676 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 590:
#line 5682 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 591:
#line 5689 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 592:
#line 5698 "GetDP.y"
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

  case 593:
#line 5720 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 594:
#line 5728 "GetDP.y"
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

  case 595:
#line 5739 "GetDP.y"
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

  case 596:
#line 5753 "GetDP.y"
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

  case 597:
#line 5774 "GetDP.y"
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

  case 598:
#line 5801 "GetDP.y"
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

  case 599:
#line 5832 "GetDP.y"
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

  case 600:
#line 5852 "GetDP.y"
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

  case 602:
#line 5888 "GetDP.y"
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

  case 603:
#line 5902 "GetDP.y"
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

  case 604:
#line 5916 "GetDP.y"
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

  case 605:
#line 5930 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 606:
#line 5934 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 607:
#line 5938 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 608:
#line 5942 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 609:
#line 5946 "GetDP.y"
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

  case 610:
#line 5956 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 611:
#line 5961 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 612:
#line 5966 "GetDP.y"
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

  case 613:
#line 5986 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 614:
#line 5990 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 615:
#line 5997 "GetDP.y"
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

  case 616:
#line 6007 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 617:
#line 6016 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 618:
#line 6025 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 619:
#line 6032 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 620:
#line 6040 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 621:
#line 6044 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 622:
#line 6053 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 623:
#line 6057 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 624:
#line 6061 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 625:
#line 6069 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 626:
#line 6075 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 627:
#line 6079 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 628:
#line 6087 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 629:
#line 6094 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 630:
#line 6102 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 631:
#line 6109 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 632:
#line 6117 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 633:
#line 6124 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 634:
#line 6132 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 635:
#line 6136 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 636:
#line 6145 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 637:
#line 6151 "GetDP.y"
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

  case 638:
#line 6201 "GetDP.y"
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

  case 639:
#line 6216 "GetDP.y"
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

  case 640:
#line 6232 "GetDP.y"
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

  case 641:
#line 6252 "GetDP.y"
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

  case 642:
#line 6272 "GetDP.y"
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

  case 643:
#line 6310 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 644:
#line 6314 "GetDP.y"
    {
    ;}
    break;

  case 647:
#line 6330 "GetDP.y"
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

  case 648:
#line 6345 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6351 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6357 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6363 "GetDP.y"
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

  case 652:
#line 6379 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 653:
#line 6384 "GetDP.y"
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

  case 654:
#line 6400 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 655:
#line 6405 "GetDP.y"
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

  case 656:
#line 6417 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 657:
#line 6427 "GetDP.y"
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

  case 658:
#line 6441 "GetDP.y"
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

  case 660:
#line 6467 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 661:
#line 6473 "GetDP.y"
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

  case 662:
#line 6487 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 663:
#line 6493 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 664:
#line 6503 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 665:
#line 6504 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 666:
#line 6505 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 667:
#line 6506 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 668:
#line 6507 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 669:
#line 6508 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 670:
#line 6509 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 671:
#line 6510 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 672:
#line 6511 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 673:
#line 6512 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 674:
#line 6513 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 675:
#line 6514 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 676:
#line 6515 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 677:
#line 6516 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 678:
#line 6517 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 679:
#line 6518 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 680:
#line 6519 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 681:
#line 6520 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 682:
#line 6521 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 683:
#line 6522 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 684:
#line 6523 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 685:
#line 6527 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 686:
#line 6528 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 687:
#line 6529 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 688:
#line 6530 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 689:
#line 6531 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 690:
#line 6532 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 691:
#line 6533 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 692:
#line 6534 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 693:
#line 6535 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 694:
#line 6536 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 695:
#line 6537 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 696:
#line 6538 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 697:
#line 6539 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 698:
#line 6540 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 699:
#line 6541 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 700:
#line 6542 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 701:
#line 6543 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 702:
#line 6544 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 703:
#line 6545 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 704:
#line 6546 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 705:
#line 6547 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 706:
#line 6548 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6549 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 708:
#line 6550 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6551 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 710:
#line 6552 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6553 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 712:
#line 6554 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 713:
#line 6555 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 714:
#line 6556 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 715:
#line 6557 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 716:
#line 6558 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 717:
#line 6559 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 718:
#line 6560 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 719:
#line 6561 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 720:
#line 6562 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 721:
#line 6563 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 722:
#line 6564 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 723:
#line 6566 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 724:
#line 6568 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 725:
#line 6570 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 726:
#line 6572 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 727:
#line 6577 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 728:
#line 6578 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 729:
#line 6579 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 730:
#line 6580 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 731:
#line 6581 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 732:
#line 6582 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 733:
#line 6583 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 734:
#line 6585 "GetDP.y"
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

  case 735:
#line 6603 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 736:
#line 6606 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 737:
#line 6612 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 738:
#line 6615 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 739:
#line 6622 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 740:
#line 6628 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 741:
#line 6631 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 742:
#line 6634 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 743:
#line 6646 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 744:
#line 6652 "GetDP.y"
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

  case 745:
#line 6663 "GetDP.y"
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

  case 746:
#line 6679 "GetDP.y"
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

  case 747:
#line 6701 "GetDP.y"
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

  case 748:
#line 6716 "GetDP.y"
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

  case 749:
#line 6754 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 750:
#line 6762 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 751:
#line 6774 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 752:
#line 6782 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 753:
#line 6796 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 754:
#line 6799 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 755:
#line 6806 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 756:
#line 6809 "GetDP.y"
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

  case 757:
#line 6824 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 758:
#line 6829 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 759:
#line 6834 "GetDP.y"
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

  case 760:
#line 6853 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 761:
#line 6863 "GetDP.y"
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

  case 762:
#line 6876 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;

  case 763:
#line 6888 "GetDP.y"
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
#line 12317 "GetDP.tab.c"
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


#line 6900 "GetDP.y"



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


