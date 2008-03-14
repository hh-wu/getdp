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
     tSelectCorrection = 413,
     tAddCorrection = 414,
     tMultiplySolution = 415,
     tAddOppositeFullSolution = 416,
     tTimeLoopTheta = 417,
     tTime0 = 418,
     tTimeMax = 419,
     tTheta = 420,
     tTimeLoopNewmark = 421,
     tBeta = 422,
     tGamma = 423,
     tIterativeLoop = 424,
     tNbrMaxIteration = 425,
     tRelaxationFactor = 426,
     tIterativeTimeReduction = 427,
     tDivisionCoefficient = 428,
     tChangeOfState = 429,
     tChangeOfCoordinates = 430,
     tChangeOfCoordinates2 = 431,
     tSystemCommand = 432,
     tGenerateFMMGroups = 433,
     tGenerateOnly = 434,
     tGenerateOnlyJac = 435,
     tSolveJac_AdaptRelax = 436,
     tSaveSolutionExtendedMH = 437,
     tSaveSolutionMHtoTime = 438,
     tInit_MovingBand2D = 439,
     tMesh_MovingBand2D = 440,
     tGenerate_MH_Moving = 441,
     tGenerate_MH_Moving_Separate = 442,
     tAdd_MH_Moving = 443,
     tGenerateGroup = 444,
     tGenerateJacGroup = 445,
     tSaveMesh = 446,
     tDeformeMesh = 447,
     tDummyFrequency = 448,
     tPostProcessing = 449,
     tNameOfSystem = 450,
     tPostOperation = 451,
     tNameOfPostProcessing = 452,
     tUsingPost = 453,
     tAppend = 454,
     tPlot = 455,
     tPrint = 456,
     tPrintGroup = 457,
     tEcho = 458,
     tWrite = 459,
     tAdapt = 460,
     tOnGlobal = 461,
     tOnRegion = 462,
     tOnElementsOf = 463,
     tOnGrid = 464,
     tOnSection = 465,
     tOnPoint = 466,
     tOnLine = 467,
     tOnPlane = 468,
     tOnBox = 469,
     tWithArgument = 470,
     tFile = 471,
     tDepth = 472,
     tDimension = 473,
     tComma = 474,
     tTimeStep = 475,
     tHarmonicToTime = 476,
     tFormat = 477,
     tHeader = 478,
     tFooter = 479,
     tSkin = 480,
     tSmoothing = 481,
     tTarget = 482,
     tSort = 483,
     tIso = 484,
     tNoNewLine = 485,
     tDecomposeInSimplex = 486,
     tChangeOfValues = 487,
     tTimeLegend = 488,
     tFrequencyLegend = 489,
     tEigenvalueLegend = 490,
     tEvaluationPoints = 491,
     tStore = 492,
     tLastTimeStepOnly = 493,
     tStr = 494,
     tDate = 495,
     tDEF = 496,
     tOR = 497,
     tAND = 498,
     tAPPROXEQUAL = 499,
     tNOTEQUAL = 500,
     tEQUAL = 501,
     tGREATERGREATER = 502,
     tLESSLESS = 503,
     tGREATEROREQUAL = 504,
     tLESSOREQUAL = 505,
     tCROSSPRODUCT = 506,
     UNARYPREC = 507,
     tSHOW = 508
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
#define tSelectCorrection 413
#define tAddCorrection 414
#define tMultiplySolution 415
#define tAddOppositeFullSolution 416
#define tTimeLoopTheta 417
#define tTime0 418
#define tTimeMax 419
#define tTheta 420
#define tTimeLoopNewmark 421
#define tBeta 422
#define tGamma 423
#define tIterativeLoop 424
#define tNbrMaxIteration 425
#define tRelaxationFactor 426
#define tIterativeTimeReduction 427
#define tDivisionCoefficient 428
#define tChangeOfState 429
#define tChangeOfCoordinates 430
#define tChangeOfCoordinates2 431
#define tSystemCommand 432
#define tGenerateFMMGroups 433
#define tGenerateOnly 434
#define tGenerateOnlyJac 435
#define tSolveJac_AdaptRelax 436
#define tSaveSolutionExtendedMH 437
#define tSaveSolutionMHtoTime 438
#define tInit_MovingBand2D 439
#define tMesh_MovingBand2D 440
#define tGenerate_MH_Moving 441
#define tGenerate_MH_Moving_Separate 442
#define tAdd_MH_Moving 443
#define tGenerateGroup 444
#define tGenerateJacGroup 445
#define tSaveMesh 446
#define tDeformeMesh 447
#define tDummyFrequency 448
#define tPostProcessing 449
#define tNameOfSystem 450
#define tPostOperation 451
#define tNameOfPostProcessing 452
#define tUsingPost 453
#define tAppend 454
#define tPlot 455
#define tPrint 456
#define tPrintGroup 457
#define tEcho 458
#define tWrite 459
#define tAdapt 460
#define tOnGlobal 461
#define tOnRegion 462
#define tOnElementsOf 463
#define tOnGrid 464
#define tOnSection 465
#define tOnPoint 466
#define tOnLine 467
#define tOnPlane 468
#define tOnBox 469
#define tWithArgument 470
#define tFile 471
#define tDepth 472
#define tDimension 473
#define tComma 474
#define tTimeStep 475
#define tHarmonicToTime 476
#define tFormat 477
#define tHeader 478
#define tFooter 479
#define tSkin 480
#define tSmoothing 481
#define tTarget 482
#define tSort 483
#define tIso 484
#define tNoNewLine 485
#define tDecomposeInSimplex 486
#define tChangeOfValues 487
#define tTimeLegend 488
#define tFrequencyLegend 489
#define tEigenvalueLegend 490
#define tEvaluationPoints 491
#define tStore 492
#define tLastTimeStepOnly 493
#define tStr 494
#define tDate 495
#define tDEF 496
#define tOR 497
#define tAND 498
#define tAPPROXEQUAL 499
#define tNOTEQUAL 500
#define tEQUAL 501
#define tGREATERGREATER 502
#define tLESSLESS 503
#define tGREATEROREQUAL 504
#define tLESSOREQUAL 505
#define tCROSSPRODUCT 506
#define UNARYPREC 507
#define tSHOW 508




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.125 2008-03-14 09:51:27 dular Exp $ */
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
#line 791 "GetDP.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 804 "GetDP.tab.c"

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
#define YYLAST   7735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  276
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  761
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2092

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   508

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   260,     2,   268,   269,   258,     2,     2,
     263,   264,   256,   254,   273,   255,   267,   257,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     248,     2,   249,   242,   274,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   265,     2,   266,   262,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   271,     2,   272,   275,     2,     2,     2,
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
     235,   236,   237,   238,   239,   240,   241,   243,   244,   245,
     246,   247,   250,   251,   252,   253,   259,   261,   270
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
    1586,  1596,  1604,  1612,  1620,  1630,  1636,  1646,  1656,  1668,
    1680,  1692,  1698,  1706,  1712,  1720,  1728,  1734,  1752,  1766,
    1782,  1794,  1808,  1809,  1817,  1818,  1826,  1834,  1846,  1852,
    1858,  1868,  1878,  1888,  1894,  1900,  1912,  1922,  1937,  1952,
    1960,  1973,  1984,  1992,  2000,  2008,  2010,  2012,  2014,  2015,
    2018,  2022,  2026,  2029,  2030,  2033,  2037,  2041,  2045,  2049,
    2054,  2055,  2058,  2062,  2066,  2070,  2074,  2078,  2083,  2084,
    2087,  2091,  2095,  2099,  2103,  2108,  2109,  2112,  2116,  2120,
    2124,  2128,  2132,  2137,  2142,  2147,  2148,  2153,  2154,  2157,
    2161,  2165,  2169,  2173,  2177,  2181,  2182,  2185,  2189,  2191,
    2192,  2195,  2199,  2204,  2208,  2212,  2217,  2218,  2223,  2226,
    2227,  2230,  2234,  2239,  2240,  2246,  2252,  2255,  2256,  2259,
    2260,  2267,  2271,  2275,  2279,  2283,  2284,  2287,  2291,  2293,
    2294,  2297,  2301,  2305,  2309,  2313,  2318,  2319,  2328,  2329,
    2330,  2334,  2342,  2350,  2359,  2371,  2378,  2379,  2390,  2392,
    2396,  2403,  2405,  2407,  2409,  2411,  2412,  2416,  2418,  2421,
    2424,  2437,  2440,  2456,  2461,  2474,  2492,  2515,  2528,  2529,
    2532,  2536,  2541,  2546,  2550,  2553,  2556,  2560,  2564,  2568,
    2572,  2576,  2579,  2583,  2587,  2591,  2595,  2599,  2603,  2607,
    2613,  2616,  2619,  2623,  2633,  2637,  2640,  2650,  2653,  2663,
    2666,  2676,  2682,  2686,  2689,  2690,  2693,  2700,  2709,  2718,
    2729,  2731,  2736,  2738,  2740,  2746,  2751,  2756,  2764,  2769,
    2777,  2783,  2787,  2791,  2799,  2805,  2814,  2817,  2818,  2822,
    2829,  2835,  2841,  2843,  2845,  2847,  2849,  2851,  2853,  2855,
    2857,  2859,  2861,  2863,  2865,  2867,  2869,  2871,  2873,  2875,
    2877,  2879,  2881,  2883,  2885,  2889,  2892,  2895,  2899,  2903,
    2907,  2911,  2915,  2919,  2923,  2927,  2931,  2935,  2939,  2943,
    2947,  2951,  2956,  2961,  2966,  2971,  2976,  2981,  2986,  2991,
    2996,  3001,  3008,  3013,  3018,  3023,  3028,  3033,  3038,  3045,
    3052,  3059,  3065,  3067,  3069,  3072,  3074,  3076,  3078,  3080,
    3082,  3084,  3086,  3088,  3089,  3091,  3093,  3097,  3099,  3101,
    3105,  3109,  3113,  3119,  3123,  3128,  3133,  3140,  3149,  3158,
    3164,  3170,  3172,  3174,  3176,  3178,  3180,  3185,  3192,  3194,
    3201,  3208
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     277,     0,    -1,    -1,   278,   279,    -1,    -1,    -1,   279,
     280,   281,    -1,    65,   271,   283,   272,    -1,   102,   271,
     304,   272,    -1,    71,   271,   339,   272,    -1,    84,   271,
     324,   272,    -1,    86,   271,   330,   272,    -1,    98,   271,
     346,   272,    -1,   114,   271,   369,   272,    -1,   135,   271,
     395,   272,    -1,   194,   271,   425,   272,    -1,   196,   271,
     436,   272,    -1,   440,    -1,   453,    -1,    25,   464,    -1,
     282,    -1,    22,     7,    -1,    22,   201,     7,    -1,    22,
      24,     7,    -1,    22,    39,     7,    -1,    22,    23,     7,
      -1,    22,    22,     7,    -1,    22,     5,     7,    -1,    23,
       7,    -1,    24,     7,    -1,    24,    65,     7,    -1,    24,
     102,     7,    -1,    24,    71,     7,    -1,    24,    84,     7,
      -1,    24,    86,     7,    -1,    24,    98,     7,    -1,    24,
     114,     7,    -1,    24,   135,     7,    -1,    24,   194,     7,
      -1,    24,   196,     7,    -1,    24,     3,     7,    -1,    -1,
     283,   284,    -1,   463,   241,   288,     7,    -1,     5,   303,
     241,   288,     7,    -1,     5,   301,   241,   288,     7,    -1,
      66,   265,   299,   266,     7,    -1,   285,    -1,   463,   254,
     241,   288,     7,    -1,   453,    -1,    -1,    -1,   463,   265,
     457,   266,   241,    69,   286,   265,   268,   296,   287,   273,
     268,   296,   273,   457,   266,     7,    -1,    -1,   292,   265,
     293,   289,   294,   266,    -1,   268,   296,    -1,   288,    -1,
     463,    -1,   463,   302,    -1,    72,    -1,     5,    -1,   296,
      -1,    67,    -1,    -1,   300,   295,   296,    -1,   300,    68,
     463,    -1,     5,    -1,   298,    -1,   271,   297,   272,    -1,
      -1,   297,   300,   298,    -1,   297,   300,   255,   298,    -1,
       3,    -1,   263,   457,   264,    -1,   274,   460,   274,    -1,
       3,     8,   457,    -1,   263,   457,   264,     8,   457,    -1,
       3,     8,   457,     8,   457,    -1,   263,   457,   264,     8,
     457,     8,   457,    -1,   463,    -1,    -1,   299,   300,   463,
      -1,   299,   300,   463,   241,   271,   272,    -1,   299,   300,
     463,   271,   457,   272,    -1,   299,   300,   463,   271,   457,
     272,   241,   271,   272,    -1,    -1,   273,    -1,   271,   268,
     457,   272,    -1,    -1,   271,   272,    -1,   271,   457,   272,
      -1,    -1,   304,   305,    -1,    70,   265,   306,   266,     7,
      -1,   463,   265,   266,   241,   307,     7,    -1,   463,   265,
     290,   266,   241,   307,     7,    -1,   453,    -1,    -1,   306,
     300,     5,    -1,   306,   300,     5,   271,   457,   272,    -1,
      26,   265,   457,   266,    -1,   102,   265,     5,   266,    -1,
      -1,   308,   311,    -1,   256,   256,   256,    -1,    -1,   271,
     310,   272,    -1,   307,    -1,   310,   273,   307,    -1,    -1,
     312,   313,    -1,   316,    -1,    -1,    -1,   313,   242,   314,
     313,     8,   315,   313,    -1,   313,   256,   313,    -1,   313,
     259,   313,    -1,    61,   265,   313,   273,   313,   266,    -1,
     313,   257,   313,    -1,   313,   254,   313,    -1,   313,   255,
     313,    -1,   313,   258,   313,    -1,   313,   262,   313,    -1,
     313,   248,   313,    -1,   313,   249,   313,    -1,   313,   253,
     313,    -1,   313,   252,   313,    -1,   313,   247,   313,    -1,
     313,   246,   313,    -1,   313,   245,   313,    -1,   313,   244,
     313,    -1,   313,   243,   313,    -1,   255,   313,    -1,   254,
     313,    -1,   260,   313,    -1,   263,   313,   264,    -1,   458,
      -1,   456,   321,   323,    -1,     5,   394,    -1,   394,    -1,
     394,   321,    -1,    -1,   125,   317,   265,   311,   266,    -1,
      -1,   132,   318,   265,   311,   273,     3,   266,    -1,    -1,
      63,   265,     5,   265,   319,   311,   266,   266,   271,   457,
     272,    -1,    64,   265,     5,   266,   271,   457,   273,   457,
     272,    -1,    58,   265,   394,   266,    -1,    60,   265,   394,
     266,    -1,    -1,    59,   320,   265,   311,   273,   290,   266,
      -1,   248,     5,   249,   265,   311,   266,    -1,   269,     5,
      -1,   269,   220,    -1,   269,   146,    -1,   269,     3,    -1,
     316,   268,     3,    -1,   268,     3,    -1,   316,   270,   457,
      -1,   466,    -1,   467,    -1,   265,   267,   266,    -1,   265,
     266,    -1,   265,   322,   266,    -1,   313,    -1,   322,   273,
     313,    -1,    -1,   271,   460,   272,    -1,   271,    72,   265,
     290,   266,   272,    -1,    -1,   324,   271,   325,   272,    -1,
      -1,   325,   326,    -1,    99,     5,     7,    -1,    85,   271,
     327,   272,    -1,    -1,   327,   271,   328,   272,    -1,    -1,
     328,   329,    -1,    72,   290,     7,    -1,    72,    67,     7,
      -1,    84,     5,   323,     7,    -1,    -1,   330,   271,   331,
     272,    -1,    -1,   331,   332,    -1,    99,     5,     7,    -1,
      91,   307,     7,    -1,    85,   271,   333,   272,    -1,    -1,
     333,   271,   334,   272,    -1,    -1,   334,   335,    -1,    89,
       5,     7,    -1,    90,     5,     7,    -1,    85,   271,   336,
     272,    -1,    -1,   336,   271,   337,   272,    -1,    -1,   337,
     338,    -1,    92,     5,     7,    -1,    93,   457,     7,    -1,
      94,   457,     7,    -1,    95,   457,     7,    -1,    96,   457,
       7,    -1,    97,   457,     7,    -1,    -1,   339,   340,    -1,
     271,   341,   272,    -1,   453,    -1,    -1,   341,   342,    -1,
      99,   463,     7,    -1,    99,     5,   301,     7,    -1,    89,
       5,     7,    -1,    85,   271,   343,   272,    -1,    85,     5,
     271,   343,   272,    -1,    -1,   343,   271,   344,   272,    -1,
     343,   453,    -1,    -1,   344,   345,    -1,    89,     5,     7,
      -1,    72,   290,     7,    -1,    73,   290,     7,    -1,    79,
     307,     7,    -1,    78,   307,     7,    -1,    83,   463,     7,
      -1,    80,   271,   458,   300,   458,   272,     7,    -1,    74,
     290,     7,    -1,    75,   290,     7,    -1,   102,   307,     7,
      -1,    77,   307,     7,    -1,    76,   307,     7,    -1,   102,
     265,   307,   273,   307,   266,     7,    -1,    77,   265,   307,
     273,   307,   266,     7,    -1,    76,   265,   307,   273,   307,
     266,     7,    -1,    -1,   346,   347,    -1,   271,   348,   272,
      -1,   453,    -1,    -1,   348,   349,    -1,   348,   453,    -1,
      99,   463,     7,    -1,    99,     5,   301,     7,    -1,    89,
       5,     7,    -1,   100,   271,   350,   272,    -1,   108,   271,
     356,   272,    -1,   110,   271,   363,   272,    -1,    71,   271,
     366,   272,    -1,    -1,   350,   271,   351,   272,    -1,   350,
     453,    -1,    -1,   351,   352,    -1,    99,     5,     7,    -1,
     101,     5,     7,    -1,   101,     5,   301,     7,    -1,   102,
       5,   353,     7,    -1,   103,   271,     5,   300,     5,   272,
       7,    -1,   104,   309,     7,    -1,   105,   309,     7,    -1,
     106,   290,     7,    -1,   107,   290,     7,    -1,    -1,    -1,
      -1,   271,   115,     5,     7,   114,     5,   301,     7,   354,
      65,   291,     7,   355,   135,     5,   302,     7,   272,    -1,
      -1,   356,   271,   357,   272,    -1,    -1,   357,   358,    -1,
      99,     5,     7,    -1,   109,   359,     7,    -1,   101,   361,
       7,    -1,     5,    -1,   271,   360,   272,    -1,    -1,   360,
     300,     5,    -1,     5,    -1,   271,   362,   272,    -1,    -1,
     362,   300,     5,    -1,    -1,   363,   271,   364,   272,    -1,
     363,   453,    -1,    -1,   364,   365,    -1,    99,   463,     7,
      -1,    89,     5,     7,    -1,   101,     5,     7,    -1,    -1,
     366,   271,   367,   272,    -1,   366,   453,    -1,    -1,   367,
     368,    -1,   101,     5,     7,    -1,   111,   292,     7,    -1,
     112,   295,     7,    -1,   113,   463,     7,    -1,    -1,   369,
     370,    -1,   271,   371,   272,    -1,   453,    -1,    -1,   371,
     372,    -1,    99,   463,     7,    -1,    99,     5,   301,     7,
      -1,    89,     5,     7,    -1,   115,   271,   373,   272,    -1,
     119,   271,   379,   272,    -1,    -1,   373,   271,   374,   272,
      -1,   373,   453,    -1,    -1,   374,   375,    -1,    99,   463,
       7,    -1,    89,   110,     7,    -1,    89,   120,     7,    -1,
      89,     5,     7,    -1,   193,   459,     7,    -1,    -1,   116,
     463,   376,   378,     7,    -1,   117,   457,     7,    -1,    -1,
     265,   377,   311,   266,     7,    -1,   133,   290,     7,    -1,
      86,     5,     7,    -1,    87,     5,     7,    -1,    84,     5,
       7,    -1,   118,     3,     7,    -1,    -1,   265,   463,   266,
      -1,    -1,   379,   380,    -1,   379,   453,    -1,   120,   271,
     385,   272,    -1,   121,   271,   385,   272,    -1,   122,   271,
     389,   272,    -1,   123,   271,   381,   272,    -1,    -1,   381,
     382,    -1,    89,     5,     7,    -1,   113,     5,     7,    -1,
     271,   383,   272,    -1,    -1,   383,   384,    -1,    81,   394,
       7,    -1,    82,   394,     7,    -1,   119,   394,     7,    -1,
     133,   290,     7,    -1,    -1,   385,   386,    -1,    -1,    -1,
     393,   265,   387,   311,   388,   273,   311,   266,     7,    -1,
     133,   290,     7,    -1,    84,     5,     7,    -1,    86,     5,
       7,    -1,   134,     7,    -1,    87,     5,     7,    -1,    88,
     265,     3,   266,     7,    -1,    -1,   389,   390,    -1,   133,
     290,     7,    -1,    -1,    -1,   393,   265,   391,   311,   392,
     273,   394,   266,     7,    -1,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,
     271,     5,   463,   272,    -1,   271,   463,   272,    -1,    -1,
     395,   396,    -1,   271,   397,   272,    -1,   453,    -1,    -1,
     397,   398,    -1,    99,   463,     7,    -1,    99,     5,   301,
       7,    -1,   136,   271,   400,   272,    -1,    -1,   143,   399,
     271,   407,   272,    -1,   453,    -1,    -1,   400,   271,   401,
     272,    -1,   400,   453,    -1,    -1,   401,   402,    -1,    99,
     463,     7,    -1,    89,     5,     7,    -1,   137,   403,     7,
      -1,   138,   464,     7,    -1,   141,   405,     7,    -1,   142,
     463,     7,    -1,   139,   459,     7,    -1,   140,   464,     7,
      -1,   453,    -1,   463,    -1,   271,   404,   272,    -1,    -1,
     404,   300,   463,    -1,   463,    -1,   271,   406,   272,    -1,
      -1,   406,   300,   463,    -1,    -1,   407,   408,    -1,     5,
     463,     7,    -1,   145,   307,     7,    -1,   162,   271,   414,
     272,    -1,   166,   271,   416,   272,    -1,   169,   271,   418,
     272,    -1,   172,   271,   420,   272,    -1,     5,   265,   463,
     266,     7,    -1,   145,   265,   307,   266,     7,    -1,   156,
       7,    -1,    18,   265,   307,   266,   271,   407,   272,    -1,
      18,   265,   307,   266,   271,   407,   272,    19,   271,   407,
     272,    -1,   147,   265,   463,   273,   307,   266,     7,    -1,
     178,   265,   463,   273,   307,   273,   307,   273,   307,   273,
     307,   266,     7,    -1,   178,   265,   463,   273,   307,   273,
     307,   273,   307,   266,     7,    -1,   178,   265,   463,   273,
     307,   273,   307,   266,     7,    -1,   179,   265,   463,   273,
     459,   266,     7,    -1,   180,   265,   463,   273,   459,   266,
       7,    -1,   154,   265,   463,   273,   307,   266,     7,    -1,
     155,   265,   463,   273,   290,   273,   463,   266,     7,    -1,
     155,   265,   463,   266,     7,    -1,   148,   265,   463,   273,
     463,   273,   459,   266,     7,    -1,   149,   265,   463,   273,
     463,   273,   457,   266,     7,    -1,   150,   265,   463,   273,
     457,   273,   459,   273,   457,   266,     7,    -1,   151,   265,
     463,   273,   457,   273,   457,   273,   457,   266,     7,    -1,
     152,   265,   463,   273,   457,   273,   457,   273,   457,   266,
       7,    -1,   157,   265,   307,   266,     7,    -1,   158,   265,
     463,   273,   457,   266,     7,    -1,   159,   265,   463,   266,
       7,    -1,   159,   265,   463,   273,   457,   266,     7,    -1,
     160,   265,   463,   273,   457,   266,     7,    -1,   161,   265,
     463,   266,     7,    -1,   153,   265,   463,   273,   463,   273,
     463,   273,   457,   273,   459,   273,   457,   273,   457,   266,
       7,    -1,   162,   265,   457,   273,   457,   273,   307,   273,
     307,   266,   271,   407,   272,    -1,   166,   265,   457,   273,
     457,   273,   307,   273,   457,   273,   457,   266,   271,   407,
     272,    -1,   169,   265,   457,   273,   457,   273,   307,   266,
     271,   407,   272,    -1,   169,   265,   457,   273,   457,   273,
     307,   273,   457,   266,   271,   407,   272,    -1,    -1,   201,
     409,   265,   411,   412,   266,     7,    -1,    -1,   204,   410,
     265,   411,   412,   266,     7,    -1,   175,   265,   290,   273,
     307,   266,     7,    -1,   175,   265,   290,   273,   307,   273,
     457,   273,   307,   266,     7,    -1,   196,   265,   463,   266,
       7,    -1,   177,   265,   464,   266,     7,    -1,   181,   265,
     463,   273,   459,   273,   457,   266,     7,    -1,   182,   265,
     463,   273,   457,   273,   464,   266,     7,    -1,   183,   265,
     463,   273,   459,   273,   464,   266,     7,    -1,   184,   271,
     463,   272,     7,    -1,   185,   271,   463,   272,     7,    -1,
     191,   271,   463,   273,   290,   273,   464,   273,   307,   272,
       7,    -1,   191,   271,   463,   273,   290,   273,   464,   272,
       7,    -1,   186,   265,   463,   273,   463,   273,   457,   273,
     457,   266,   271,   407,   272,     7,    -1,   187,   265,   463,
     273,   463,   273,   457,   273,   457,   266,   271,   407,   272,
       7,    -1,   188,   265,   463,   273,   457,   266,     7,    -1,
     192,   271,     5,   273,     5,   273,   138,   464,   273,   457,
     272,     7,    -1,   192,   271,     5,   273,     5,   273,   138,
     464,   272,     7,    -1,   192,   271,     5,   273,     5,   272,
       7,    -1,   189,   265,   463,   273,   463,   266,     7,    -1,
     190,   265,   463,   273,   463,   266,     7,    -1,   453,    -1,
     309,    -1,   463,    -1,    -1,   412,   413,    -1,   273,   216,
     464,    -1,   273,   220,   459,    -1,   273,   459,    -1,    -1,
     414,   415,    -1,   163,   457,     7,    -1,   164,   457,     7,
      -1,   146,   307,     7,    -1,   165,   307,     7,    -1,   143,
     271,   407,   272,    -1,    -1,   416,   417,    -1,   163,   457,
       7,    -1,   164,   457,     7,    -1,   146,   307,     7,    -1,
     167,   457,     7,    -1,   168,   457,     7,    -1,   143,   271,
     407,   272,    -1,    -1,   418,   419,    -1,   170,   457,     7,
      -1,    91,   457,     7,    -1,   171,   307,     7,    -1,    21,
     457,     7,    -1,   143,   271,   407,   272,    -1,    -1,   420,
     421,    -1,   170,   457,     7,    -1,   173,   457,     7,    -1,
      91,   457,     7,    -1,    21,   457,     7,    -1,   136,   463,
       7,    -1,   174,   271,   422,   272,    -1,   143,   271,   407,
     272,    -1,   144,   271,   407,   272,    -1,    -1,   422,   271,
     423,   272,    -1,    -1,   423,   424,    -1,    89,     5,     7,
      -1,   115,     5,     7,    -1,   133,   290,     7,    -1,    91,
     457,     7,    -1,   102,   307,     7,    -1,    21,     5,     7,
      -1,    -1,   425,   426,    -1,   271,   427,   272,    -1,   453,
      -1,    -1,   427,   428,    -1,    99,   463,     7,    -1,    99,
       5,   301,     7,    -1,   137,   463,     7,    -1,   195,   463,
       7,    -1,   115,   271,   429,   272,    -1,    -1,   429,   271,
     430,   272,    -1,   429,   453,    -1,    -1,   430,   431,    -1,
      99,   463,     7,    -1,    78,   271,   432,   272,    -1,    -1,
     432,   120,   271,   433,   272,    -1,   432,     5,   271,   433,
     272,    -1,   432,   453,    -1,    -1,   433,   434,    -1,    -1,
     393,   265,   435,   311,   266,     7,    -1,    89,     5,     7,
      -1,   133,   290,     7,    -1,    84,     5,     7,    -1,    86,
       5,     7,    -1,    -1,   436,   437,    -1,   271,   438,   272,
      -1,   453,    -1,    -1,   438,   439,    -1,    99,   463,     7,
      -1,   197,   463,     7,    -1,   222,     5,     7,    -1,   199,
     464,     7,    -1,   143,   271,   442,   272,    -1,    -1,   196,
     463,   198,   463,   441,   271,   442,   272,    -1,    -1,    -1,
     442,   443,   444,    -1,   200,   265,   446,   449,   450,   266,
       7,    -1,   201,   265,   446,   449,   450,   266,     7,    -1,
     201,   265,     6,   273,   307,   450,   266,     7,    -1,   201,
     265,     6,   273,   239,   265,   464,   266,   450,   266,     7,
      -1,   203,   265,     6,   450,   266,     7,    -1,    -1,   202,
     265,   290,   445,   273,   133,   290,   450,   266,     7,    -1,
     453,    -1,   463,   448,   273,    -1,   463,   448,   447,     5,
     448,   273,    -1,   256,    -1,   257,    -1,   254,    -1,   255,
      -1,    -1,   265,   290,   266,    -1,   206,    -1,   207,   290,
      -1,   208,   290,    -1,   210,   271,   271,   460,   272,   271,
     460,   272,   271,   460,   272,   272,    -1,   209,   290,    -1,
     209,   271,   307,   273,   307,   273,   307,   272,   271,   459,
     273,   459,   273,   459,   272,    -1,   211,   271,   460,   272,
      -1,   212,   271,   271,   460,   272,   271,   460,   272,   272,
     271,   457,   272,    -1,   213,   271,   271,   460,   272,   271,
     460,   272,   271,   460,   272,   272,   271,   457,   273,   457,
     272,    -1,   214,   271,   271,   460,   272,   271,   460,   272,
     271,   460,   272,   271,   460,   272,   272,   271,   457,   273,
     457,   273,   457,   272,    -1,   207,   290,   215,     5,   271,
     457,   273,   457,   272,   271,   457,   272,    -1,    -1,   450,
     451,    -1,   273,   216,   464,    -1,   273,   216,   249,   464,
      -1,   273,   216,   250,   464,    -1,   273,   217,   457,    -1,
     273,   225,    -1,   273,   226,    -1,   273,   221,   457,    -1,
     273,   222,     5,    -1,   273,   223,   452,    -1,   273,   224,
     452,    -1,   273,   222,   452,    -1,   273,   219,    -1,   273,
     218,   457,    -1,   273,   220,   459,    -1,   273,   205,     5,
      -1,   273,   228,     5,    -1,   273,   227,   457,    -1,   273,
      78,   459,    -1,   273,   229,   457,    -1,   273,   229,   271,
     460,   272,    -1,   273,   230,    -1,   273,   231,    -1,   273,
     139,   459,    -1,   273,   175,   271,   307,   273,   307,   273,
     307,   272,    -1,   273,   232,   309,    -1,   273,   233,    -1,
     273,   233,   271,   457,   273,   457,   273,   457,   272,    -1,
     273,   234,    -1,   273,   234,   271,   457,   273,   457,   273,
     457,   272,    -1,   273,   235,    -1,   273,   235,   271,   457,
     273,   457,   273,   457,   272,    -1,   273,   236,   271,   460,
     272,    -1,   273,   237,     3,    -1,   273,   238,    -1,    -1,
     452,     6,    -1,    16,   263,   457,     8,   457,   264,    -1,
      16,   263,   457,     8,   457,     8,   457,   264,    -1,    16,
       5,   133,   271,   457,     8,   457,   272,    -1,    16,     5,
     133,   271,   457,     8,   457,     8,   457,   272,    -1,    17,
      -1,    18,   263,   457,   264,    -1,    20,    -1,   454,    -1,
      32,   265,   455,   266,     7,    -1,   463,   241,   459,     7,
      -1,   463,   241,     6,     7,    -1,   463,   241,   239,   265,
     464,   266,     7,    -1,   463,   241,   465,     7,    -1,   463,
     241,    31,   265,   464,   266,     7,    -1,    11,   263,     6,
     264,     7,    -1,    11,   463,     7,    -1,    11,   268,     7,
      -1,    11,   263,     6,   273,   460,   264,     7,    -1,    12,
     263,   463,   264,     7,    -1,    12,   263,   463,   264,   265,
     457,   266,     7,    -1,    13,     7,    -1,    -1,   455,   300,
     463,    -1,   455,   300,   463,   271,   457,   272,    -1,   455,
     300,   463,   241,   457,    -1,   455,   300,   463,   241,     6,
      -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,   463,    -1,   458,    -1,   263,   457,   264,    -1,   255,
     457,    -1,   260,   457,    -1,   457,   255,   457,    -1,   457,
     254,   457,    -1,   457,   256,   457,    -1,   457,   257,   457,
      -1,   457,   258,   457,    -1,   457,   262,   457,    -1,   457,
     248,   457,    -1,   457,   249,   457,    -1,   457,   253,   457,
      -1,   457,   252,   457,    -1,   457,   247,   457,    -1,   457,
     246,   457,    -1,   457,   244,   457,    -1,   457,   243,   457,
      -1,    38,   265,   457,   266,    -1,    39,   265,   457,   266,
      -1,    40,   265,   457,   266,    -1,    41,   265,   457,   266,
      -1,    42,   265,   457,   266,    -1,    43,   265,   457,   266,
      -1,    44,   265,   457,   266,    -1,    45,   265,   457,   266,
      -1,    46,   265,   457,   266,    -1,    47,   265,   457,   266,
      -1,    48,   265,   457,   273,   457,   266,    -1,    49,   265,
     457,   266,    -1,    50,   265,   457,   266,    -1,    51,   265,
     457,   266,    -1,    52,   265,   457,   266,    -1,    53,   265,
     457,   266,    -1,    54,   265,   457,   266,    -1,    55,   265,
     457,   273,   457,   266,    -1,    56,   265,   457,   273,   457,
     266,    -1,    57,   265,   457,   273,   457,   266,    -1,   457,
     242,   457,     8,   457,    -1,   466,    -1,   467,    -1,   457,
     268,    -1,     4,    -1,     3,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,   463,    -1,    -1,   457,
      -1,   461,    -1,   271,   460,   272,    -1,   457,    -1,   461,
      -1,   460,   273,   457,    -1,   460,   273,   461,    -1,   457,
       8,   457,    -1,   457,     8,   457,     8,   457,    -1,     5,
     271,   272,    -1,     5,   271,   460,   272,    -1,    27,   265,
       5,   266,    -1,    28,   265,     5,   273,     5,   266,    -1,
      29,   265,   457,   273,   457,   273,   457,   266,    -1,    30,
     265,   457,   273,   457,   273,   457,   266,    -1,     5,   275,
     271,   457,   272,    -1,   462,   275,   271,   457,   272,    -1,
       5,    -1,   462,    -1,     6,    -1,   463,    -1,   465,    -1,
      10,   263,   464,   264,    -1,    10,   263,   464,   273,   460,
     264,    -1,   240,    -1,     9,   265,   464,   273,   464,   266,
      -1,    14,   265,   464,   273,   464,   266,    -1,    15,   265,
     463,   266,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   342,   342,   342,   378,   382,   381,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   400,   402,   405,
     410,   420,   422,   424,   426,   428,   430,   432,   434,   436,
     438,   440,   442,   444,   446,   448,   450,   452,   454,   456,
     458,   484,   487,   493,   496,   502,   508,   510,   512,   515,
     521,   531,   520,   548,   547,   564,   575,   580,   597,   627,
     630,   643,   644,   651,   653,   656,   674,   687,   694,   702,
     706,   713,   724,   730,   737,   748,   757,   765,   779,   792,
     827,   831,   841,   852,   867,   888,   888,   893,   899,   900,
     905,   913,   916,   921,   923,   943,   987,   991,   994,  1004,
    1027,  1033,  1040,  1040,  1047,  1055,  1059,  1065,  1068,  1075,
    1075,  1088,  1091,  1104,  1090,  1132,  1138,  1144,  1150,  1156,
    1162,  1168,  1174,  1180,  1186,  1192,  1198,  1204,  1210,  1216,
    1222,  1228,  1235,  1241,  1243,  1254,  1256,  1262,  1336,  1370,
    1379,  1392,  1391,  1406,  1405,  1420,  1419,  1435,  1447,  1453,
    1460,  1459,  1490,  1516,  1529,  1535,  1542,  1548,  1555,  1562,
    1569,  1575,  1585,  1586,  1587,  1592,  1593,  1599,  1601,  1604,
    1620,  1624,  1632,  1634,  1640,  1645,  1653,  1655,  1663,  1666,
    1672,  1675,  1678,  1717,  1722,  1730,  1736,  1742,  1749,  1752,
    1760,  1762,  1770,  1775,  1781,  1791,  1801,  1809,  1811,  1819,
    1828,  1834,  1882,  1885,  1888,  1891,  1894,  1906,  1910,  1915,
    1920,  1926,  1932,  1938,  1945,  1953,  1962,  1965,  1984,  1988,
    1993,  2003,  2010,  2016,  2026,  2031,  2037,  2042,  2050,  2058,
    2067,  2085,  2094,  2102,  2110,  2120,  2130,  2140,  2161,  2166,
    2171,  2176,  2183,  2188,  2190,  2196,  2203,  2211,  2220,  2223,
    2226,  2229,  2237,  2242,  2259,  2269,  2283,  2289,  2292,  2297,
    2302,  2316,  2336,  2341,  2346,  2351,  2380,  2386,  2390,  2384,
    2464,  2469,  2479,  2483,  2489,  2496,  2499,  2506,  2522,  2529,
    2531,  2550,  2562,  2570,  2574,  2590,  2595,  2601,  2611,  2616,
    2622,  2629,  2640,  2655,  2659,  2696,  2706,  2715,  2721,  2754,
    2757,  2760,  2776,  2780,  2785,  2790,  2797,  2801,  2807,  2814,
    2822,  2832,  2834,  2841,  2845,  2850,  2857,  2873,  2879,  2882,
    2886,  2889,  2899,  2904,  2903,  2935,  2941,  2940,  3257,  3262,
    3271,  3280,  3289,  3294,  3297,  3338,  3342,  3347,  3356,  3359,
    3362,  3365,  3377,  3382,  3387,  3397,  3407,  3422,  3428,  3433,
    3435,  3437,  3439,  3448,  3466,  3473,  3481,  3472,  3613,  3618,
    3627,  3636,  3641,  3650,  3662,  3676,  3690,  3696,  3704,  3695,
    3776,  3777,  3778,  3779,  3780,  3781,  3782,  3783,  3789,  3810,
    3835,  3839,  3844,  3849,  3856,  3861,  3867,  3874,  3882,  3886,
    3885,  3890,  3896,  3900,  3905,  3915,  3928,  3934,  3937,  3946,
    3949,  3954,  3965,  3970,  3975,  3980,  3986,  3995,  4003,  4005,
    4017,  4027,  4034,  4036,  4049,  4056,  4069,  4091,  4098,  4104,
    4110,  4116,  4124,  4146,  4153,  4159,  4170,  4182,  4195,  4210,
    4225,  4240,  4260,  4281,  4293,  4313,  4326,  4343,  4362,  4383,
    4397,  4411,  4418,  4430,  4442,  4454,  4466,  4477,  4511,  4524,
    4538,  4551,  4565,  4564,  4574,  4573,  4582,  4593,  4605,  4615,
    4623,  4636,  4649,  4663,  4673,  4683,  4697,  4711,  4729,  4748,
    4759,  4774,  4789,  4804,  4819,  4834,  4845,  4850,  4861,  4866,
    4870,  4873,  4883,  4900,  4909,  4915,  4919,  4923,  4927,  4932,
    4944,  4954,  4960,  4964,  4968,  4972,  4976,  4981,  4993,  5002,
    5007,  5011,  5015,  5019,  5023,  5035,  5047,  5052,  5056,  5060,
    5064,  5069,  5079,  5085,  5091,  5102,  5104,  5110,  5122,  5127,
    5137,  5166,  5169,  5172,  5180,  5198,  5204,  5209,  5214,  5219,
    5227,  5231,  5238,  5246,  5259,  5264,  5271,  5273,  5276,  5283,
    5288,  5293,  5296,  5303,  5307,  5313,  5325,  5331,  5340,  5345,
    5344,  5379,  5390,  5395,  5404,  5422,  5428,  5433,  5436,  5441,
    5448,  5452,  5459,  5471,  5482,  5487,  5494,  5493,  5521,  5524,
    5523,  5540,  5545,  5550,  5559,  5568,  5578,  5577,  5588,  5596,
    5608,  5632,  5633,  5634,  5635,  5641,  5642,  5648,  5654,  5661,
    5668,  5692,  5699,  5711,  5724,  5744,  5770,  5803,  5825,  5856,
    5860,  5874,  5888,  5902,  5906,  5910,  5914,  5918,  5928,  5933,
    5938,  5958,  5962,  5969,  5979,  5988,  5997,  6004,  6012,  6016,
    6025,  6029,  6033,  6041,  6047,  6051,  6059,  6066,  6074,  6081,
    6089,  6096,  6104,  6108,  6118,  6123,  6173,  6188,  6204,  6224,
    6244,  6282,  6286,  6290,  6300,  6302,  6317,  6323,  6329,  6335,
    6351,  6356,  6372,  6377,  6389,  6399,  6413,  6436,  6439,  6445,
    6459,  6465,  6476,  6477,  6478,  6479,  6480,  6481,  6482,  6483,
    6484,  6485,  6486,  6487,  6488,  6489,  6490,  6491,  6492,  6493,
    6494,  6495,  6496,  6500,  6501,  6502,  6503,  6504,  6505,  6506,
    6507,  6508,  6509,  6510,  6511,  6512,  6513,  6514,  6515,  6516,
    6517,  6518,  6519,  6520,  6521,  6522,  6523,  6524,  6525,  6526,
    6527,  6528,  6529,  6530,  6531,  6532,  6533,  6534,  6535,  6536,
    6537,  6539,  6541,  6543,  6545,  6550,  6551,  6552,  6553,  6554,
    6555,  6556,  6557,  6576,  6578,  6584,  6587,  6594,  6600,  6603,
    6606,  6618,  6624,  6635,  6651,  6673,  6688,  6726,  6734,  6746,
    6754,  6768,  6771,  6778,  6781,  6796,  6801,  6806,  6825,  6835,
    6848,  6860
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
     495,   496,    63,   497,   498,   499,   500,   501,    60,    62,
     502,   503,   504,   505,    43,    45,    42,    47,    37,   506,
      33,   507,    94,    40,    41,    91,    93,    46,    35,    36,
     508,   123,   125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   276,   278,   277,   279,   280,   279,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   283,   283,   284,   284,   284,   284,   284,   284,   284,
     286,   287,   285,   289,   288,   288,   290,   290,   291,   292,
     292,   293,   293,   294,   294,   294,   295,   296,   296,   297,
     297,   297,   298,   298,   298,   298,   298,   298,   298,   298,
     299,   299,   299,   299,   299,   300,   300,   301,   302,   302,
     303,   304,   304,   305,   305,   305,   305,   306,   306,   306,
     307,   307,   308,   307,   307,   309,   309,   310,   310,   312,
     311,   313,   314,   315,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   316,   316,   316,   316,   316,
     316,   317,   316,   318,   316,   319,   316,   316,   316,   316,
     320,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   321,   321,   321,   322,   322,   323,   323,   323,
     324,   324,   325,   325,   326,   326,   327,   327,   328,   328,
     329,   329,   329,   330,   330,   331,   331,   332,   332,   332,
     333,   333,   334,   334,   335,   335,   335,   336,   336,   337,
     337,   338,   338,   338,   338,   338,   338,   339,   339,   340,
     340,   341,   341,   342,   342,   342,   342,   342,   343,   343,
     343,   344,   344,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   346,   346,
     347,   347,   348,   348,   348,   349,   349,   349,   349,   349,
     349,   349,   350,   350,   350,   351,   351,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   353,   354,   355,   353,
     356,   356,   357,   357,   358,   358,   358,   359,   359,   360,
     360,   361,   361,   362,   362,   363,   363,   363,   364,   364,
     365,   365,   365,   366,   366,   366,   367,   367,   368,   368,
     368,   368,   369,   369,   370,   370,   371,   371,   372,   372,
     372,   372,   372,   373,   373,   373,   374,   374,   375,   375,
     375,   375,   375,   376,   375,   375,   377,   375,   375,   375,
     375,   375,   375,   378,   378,   379,   379,   379,   380,   380,
     380,   380,   381,   381,   382,   382,   382,   383,   383,   384,
     384,   384,   384,   385,   385,   387,   388,   386,   386,   386,
     386,   386,   386,   386,   389,   389,   390,   391,   392,   390,
     393,   393,   393,   393,   393,   393,   393,   393,   394,   394,
     395,   395,   396,   396,   397,   397,   398,   398,   398,   399,
     398,   398,   400,   400,   400,   401,   401,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   403,   403,   404,   404,
     405,   405,   406,   406,   407,   407,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   409,   408,   410,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   411,   411,   412,   412,
     413,   413,   413,   414,   414,   415,   415,   415,   415,   415,
     416,   416,   417,   417,   417,   417,   417,   417,   418,   418,
     419,   419,   419,   419,   419,   420,   420,   421,   421,   421,
     421,   421,   421,   421,   421,   422,   422,   423,   423,   424,
     424,   424,   424,   424,   424,   425,   425,   426,   426,   427,
     427,   428,   428,   428,   428,   428,   429,   429,   429,   430,
     430,   431,   431,   432,   432,   432,   432,   433,   433,   435,
     434,   434,   434,   434,   434,   436,   436,   437,   437,   438,
     438,   439,   439,   439,   439,   439,   441,   440,   442,   443,
     442,   444,   444,   444,   444,   444,   445,   444,   444,   446,
     446,   447,   447,   447,   447,   448,   448,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   450,   450,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   452,   452,   453,   453,   453,   453,
     453,   453,   453,   453,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   455,   455,   455,
     455,   455,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   458,   458,   458,   458,   458,
     458,   458,   458,   459,   459,   459,   459,   460,   460,   460,
     460,   461,   461,   461,   461,   461,   461,   461,   461,   462,
     462,   463,   463,   464,   464,   464,   464,   464,   464,   465,
     466,   467
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
       9,     7,     7,     7,     9,     5,     9,     9,    11,    11,
      11,     5,     7,     5,     7,     7,     5,    17,    13,    15,
      11,    13,     0,     7,     0,     7,     7,    11,     5,     5,
       9,     9,     9,     5,     5,    11,     9,    14,    14,     7,
      12,    10,     7,     7,     7,     1,     1,     1,     0,     2,
       3,     3,     2,     0,     2,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     3,     4,     0,     2,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     3,     4,     4,     4,     0,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     0,     2,     3,     1,     0,
       2,     3,     4,     3,     3,     4,     0,     4,     2,     0,
       2,     3,     4,     0,     5,     5,     2,     0,     2,     0,
       6,     3,     3,     3,     3,     0,     2,     3,     1,     0,
       2,     3,     3,     3,     3,     4,     0,     8,     0,     0,
       3,     7,     7,     8,    11,     6,     0,    10,     1,     3,
       6,     1,     1,     1,     1,     0,     3,     1,     2,     2,
      12,     2,    15,     4,    12,    17,    22,    12,     0,     2,
       3,     4,     4,     3,     2,     2,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     5,
       2,     2,     3,     9,     3,     2,     9,     2,     9,     2,
       9,     5,     3,     2,     0,     2,     6,     8,     8,    10,
       1,     4,     1,     1,     5,     4,     4,     7,     4,     7,
       5,     3,     3,     7,     5,     8,     2,     0,     3,     6,
       5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
       6,     5,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     3,     1,     1,     3,
       3,     3,     5,     3,     4,     4,     6,     8,     8,     5,
       5,     1,     1,     1,     1,     1,     4,     6,     1,     6,
       6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   751,     0,     0,     0,
       0,   640,     0,   642,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   643,   752,     0,     0,     0,     0,     0,
       0,   656,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   753,     0,     0,   758,   754,
      19,   755,   657,    41,   207,   170,   183,   238,    91,   302,
     380,   525,   555,     0,     0,   733,     0,     0,   652,   651,
       0,     0,   726,   725,     0,     0,   727,   728,   729,   730,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   683,   732,   722,   723,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
       0,   734,     0,   735,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   685,   686,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,   641,     0,     0,     0,    86,     0,   751,     0,
       7,    42,    47,    49,     0,   211,     9,   208,   210,   172,
      10,   185,    11,   242,    12,   239,   241,     0,     8,    92,
      96,     0,   306,    13,   303,   305,   384,    14,   381,   383,
     529,    15,   526,   528,   559,    16,   556,   558,   566,     0,
       0,   646,     0,     0,     0,     0,     0,     0,   737,     0,
     738,     0,   645,   648,   749,   650,     0,   654,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   684,     0,     0,   700,   699,   698,   697,   693,
     694,   696,   695,   688,   687,   689,   690,   691,   692,     0,
     756,     0,   644,   658,     0,     0,     0,    80,   733,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   750,   743,     0,     0,     0,     0,     0,     0,
       0,   736,     0,   741,     0,     0,     0,     0,   761,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   710,     0,
     712,   713,   714,   715,   716,   717,     0,     0,     0,     0,
     636,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   751,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   209,   212,     0,     0,   171,   173,     0,   102,     0,
     184,   186,     0,     0,     0,     0,     0,     0,   240,   243,
     244,    85,   751,     0,    56,     0,    57,     0,     0,     0,
       0,   304,   307,     0,     0,   389,   382,   385,   391,     0,
       0,     0,     0,   527,   530,     0,     0,     0,     0,     0,
     557,   560,   568,   744,   745,     0,     0,     0,     0,     0,
     739,   740,     0,   653,     0,     0,     0,     0,     0,     0,
       0,     0,   721,   759,   757,   661,   660,     0,     0,    90,
      60,     0,     0,     0,     0,    72,     0,    69,     0,    55,
      67,    79,    43,     0,     0,     0,     0,   218,     0,   751,
       0,   176,     0,   190,     0,     0,     0,     0,   109,     0,
     293,     0,   751,     0,   252,   270,   285,     0,     0,   102,
       0,     0,   751,     0,   313,   335,   751,     0,   392,     0,
     751,     0,   536,     0,     0,     0,   568,     0,     0,     0,
     569,     0,     0,     0,   649,   647,   742,   655,     0,   638,
     760,   711,   718,   719,   720,   637,   659,    87,    45,    44,
      46,    81,     0,     0,    85,     0,    62,    53,    61,    48,
       0,   218,     0,   215,     0,     0,   213,     0,   174,     0,
       0,     0,     0,   188,   103,     0,   187,     0,   247,     0,
     245,     0,     0,     0,    93,    98,     0,   102,   310,     0,
     308,     0,     0,     0,   386,     0,   414,     0,   531,     0,
     533,   534,   561,   569,   562,   564,   563,   567,     0,   746,
       0,     0,     0,     0,     0,    75,    73,    68,     0,    74,
      85,    50,     0,   221,   216,   220,   214,   178,   175,   192,
     189,     0,     0,   104,   751,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,     0,   150,     0,     0,     0,
       0,   141,   143,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   139,     0,   136,   732,   160,   161,   296,
     251,   295,   246,   255,   248,   254,   272,   249,   288,   250,
     287,     0,    94,     0,   309,   316,   311,   315,     0,     0,
       0,     0,   312,   336,   337,   387,   395,   388,   394,     0,
     532,   539,   535,   538,   565,     0,     0,     0,     0,   570,
     578,     0,     0,   639,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   217,     0,     0,     0,   100,   101,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     132,   134,     0,   158,   156,   153,   155,   154,   751,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   167,     0,     0,     0,     0,     0,    95,     0,   353,
     353,   364,   342,     0,   751,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,   454,   390,   415,   475,     0,
       0,     0,     0,     0,   747,   748,    82,    83,    77,    76,
      71,    54,    66,     0,     0,     0,     0,     0,     0,     0,
     102,   102,   102,   102,     0,     0,     0,   102,   219,   222,
       0,     0,   177,   179,     0,     0,     0,   191,   193,     0,
     109,     0,     0,     0,     0,   109,   109,     0,   135,     0,
     379,     0,   131,   130,   129,   128,   127,   123,   124,   126,
     125,   119,   120,   115,   118,   121,   116,   122,   157,   159,
     163,     0,   165,     0,     0,   137,     0,     0,     0,     0,
     294,   297,     0,     0,     0,     0,   105,   105,     0,     0,
     253,   256,     0,     0,     0,   271,   273,     0,     0,     0,
     286,   289,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   326,   314,   317,   370,   370,   370,     0,
       0,     0,     0,     0,   733,     0,     0,     0,   393,   396,
     405,     0,     0,   102,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   424,   102,     0,     0,     0,
       0,     0,   483,     0,   490,     0,   498,   505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     537,   540,     0,   585,     0,     0,   576,   598,     0,     0,
      65,    64,     0,     0,     0,     0,     0,   102,     0,   102,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
     167,   197,     0,     0,   148,     0,   149,     0,   145,     0,
       0,     0,   109,   378,     0,   162,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,   102,     0,
       0,     0,     0,     0,   281,   283,     0,   277,   279,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     323,     0,     0,     0,     0,   109,     0,     0,     0,     0,
     371,   372,   373,   374,   375,   376,   377,     0,     0,   338,
     354,     0,   339,     0,   340,   365,     0,     0,     0,   347,
     341,   343,     0,     0,   408,     0,   406,     0,     0,     0,
     412,     0,   410,     0,     0,   416,     0,     0,   417,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   105,
     543,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,   598,     0,     0,   102,   598,     0,     0,     0,    78,
      51,   224,   225,   230,   231,     0,   234,     0,   233,   227,
     226,    85,   228,   223,     0,   232,   181,   180,     0,     0,
     194,   195,     0,     0,   109,     0,   142,     0,     0,   113,
     166,     0,   168,   298,   299,   300,   301,   257,   258,     0,
       0,     0,    85,   107,     0,   262,   263,   264,   265,   274,
      85,   276,    85,   275,   291,   290,   292,   331,   329,   330,
     321,   319,   320,   318,   333,   325,   332,   328,   322,     0,
       0,     0,     0,     0,     0,   361,   355,     0,   367,     0,
       0,     0,   398,   397,    85,   399,   400,   403,   404,    85,
     401,   402,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   102,   418,   484,     0,
       0,   102,     0,     0,     0,     0,   419,   491,     0,     0,
       0,     0,     0,   102,   420,   499,     0,     0,     0,     0,
       0,     0,     0,     0,   421,   506,   102,     0,   102,   733,
     733,   733,     0,   733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,   478,   477,   478,     0,   541,
     588,   589,   102,   591,     0,     0,     0,     0,     0,     0,
       0,   583,   584,   581,   582,   579,     0,     0,   598,     0,
       0,     0,     0,   599,    84,     0,   102,   102,     0,   102,
     182,   199,   196,     0,   117,     0,     0,     0,   152,     0,
       0,   259,     0,   260,     0,   106,   102,   282,     0,   278,
       0,     0,     0,     0,   359,   360,   362,     0,   358,   109,
     366,   109,   344,   345,     0,     0,     0,     0,   346,   348,
     407,     0,   411,     0,   422,   414,   423,     0,     0,     0,
       0,     0,     0,     0,     0,   435,     0,   441,     0,   443,
       0,     0,   446,     0,   414,     0,     0,     0,     0,     0,
     414,     0,     0,     0,     0,     0,     0,     0,     0,   414,
       0,     0,     0,     0,     0,   414,   414,     0,     0,   515,
       0,   459,     0,     0,     0,     0,     0,     0,   463,   464,
       0,     0,     0,     0,     0,     0,     0,   458,     0,     0,
     751,     0,   542,   546,     0,     0,     0,     0,     0,     0,
       0,     0,   586,   585,     0,     0,     0,     0,   575,   733,
     733,     0,     0,     0,     0,     0,   611,   733,     0,   634,
     634,   634,   604,   605,     0,     0,     0,   620,   621,   105,
     625,   627,   629,     0,     0,   633,     0,     0,     0,     0,
       0,     0,   151,     0,     0,   144,   114,     0,     0,     0,
     108,   284,   280,     0,   324,   327,     0,   356,   368,     0,
       0,     0,     0,   409,   413,     0,     0,   733,     0,   733,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     487,   485,   486,   488,   102,     0,   494,   492,   493,   495,
     496,   102,   503,   501,     0,   500,   502,   510,   509,   511,
       0,     0,   507,   508,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   479,     0,   547,   547,     0,   102,     0,
     593,     0,     0,     0,   571,     0,     0,     0,   572,   598,
     617,   622,   102,   614,     0,     0,   600,   603,   612,   613,
     606,   607,   610,   608,   609,   616,   615,     0,   618,   624,
       0,     0,     0,     0,   632,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,   200,     0,     0,
     169,     0,     0,   334,   363,     0,     0,   349,   350,   351,
     352,   425,   427,     0,     0,     0,     0,     0,     0,   433,
       0,   442,   444,   445,     0,   489,     0,   497,     0,   504,
     513,   514,   517,   512,   456,     0,     0,   431,   432,     0,
       0,     0,     0,     0,   469,   473,   474,     0,   472,     0,
     453,     0,   733,   482,   455,   370,   370,     0,     0,     0,
       0,     0,     0,   580,   598,   573,     0,     0,   601,   602,
     635,     0,     0,     0,     0,     0,     0,   237,   236,   229,
     235,     0,     0,     0,     0,     0,     0,     0,   147,     0,
     261,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,   102,     0,   102,     0,
       0,     0,     0,     0,     0,   102,     0,   480,   481,     0,
       0,     0,     0,   545,     0,   548,   544,     0,   102,     0,
       0,     0,     0,     0,     0,   102,   619,     0,     0,     0,
     631,     0,   201,   202,   203,   204,   205,   206,     0,     0,
       0,     0,   414,   436,   437,     0,     0,     0,     0,   434,
       0,     0,   414,     0,     0,     0,     0,   102,     0,     0,
     516,   518,     0,   430,     0,   460,   461,   462,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,   549,     0,
       0,     0,     0,     0,     0,     0,   577,     0,     0,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
     733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   471,     0,   553,
     554,   551,   552,   109,     0,     0,     0,     0,     0,     0,
     574,   102,     0,     0,     0,     0,   267,   357,   369,   426,
     438,   439,   440,     0,   414,     0,   450,   414,   524,   519,
     522,   523,   520,   521,   457,   429,     0,   414,   414,   465,
       0,     0,     0,   733,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,     0,     0,   623,
     626,   628,   630,     0,     0,   448,   414,   451,   428,     0,
       0,   550,     0,   733,     0,     0,     0,     0,     0,    88,
       0,     0,   467,   468,   597,     0,   590,   594,     0,     0,
     268,     0,    58,     0,   449,   733,     0,     0,     0,    89,
       0,     0,     0,     0,     0,   447,   592,     0,     0,    88,
       0,     0,     0,   595,     0,     0,     0,   269,     0,     0,
       0,   596
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   150,   231,   232,
     752,  1425,   434,   640,   435,  2048,   405,   577,   750,   874,
     499,   574,   500,   400,   227,   335,  2062,   336,   155,   249,
     431,   517,   518,  1394,  1274,   594,   595,   691,   911,  1439,
     692,   766,   767,  1254,   761,   800,   933,   935,   152,   342,
     416,   587,   755,   893,   153,   343,   421,   589,   756,   898,
    1249,  1591,  1727,   151,   237,   341,   412,   582,   754,   889,
     154,   245,   344,   429,   601,   803,   951,  1271,  2013,  2068,
     602,   804,   956,  1109,  1282,  1106,  1280,   603,   805,   961,
     597,   802,   941,   156,   254,   347,   442,   611,   808,   975,
    1294,  1125,  1452,   612,   723,   979,  1151,  1311,  1469,   976,
    1140,  1459,  1735,   978,  1145,  1461,  1736,  1141,   693,   157,
     258,   348,   447,   539,   615,   813,   989,  1155,  1314,  1161,
    1319,   729,   857,  1036,  1037,  1395,  1538,  1673,  1184,  1348,
    1186,  1357,  1188,  1365,  1189,  1375,  1654,  1835,  1901,   158,
     262,   349,   454,   619,   859,  1041,  1398,  1785,  1855,  1963,
     159,   266,   350,   461,    31,   351,   550,   628,   739,  1226,
    1042,  1416,  1223,  1221,  1227,  1423,  1702,   858,    33,   149,
     694,   278,   125,   172,   279,   280,    34,   126,    70,    71,
     127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1442
static const yytype_int16 yypact[] =
{
   -1442,   144, -1442, -1442,   158,  4995,  -229,    17,  -178,   176,
      24, -1442,   -50, -1442,   837,   178,  1895,   218,   -40,   -41,
     -23,    -8,    10,    13,    56,    69,   111,   125,    38, -1442,
   -1442, -1442, -1442, -1442,   -24,     2,   138,   286,   340,   354,
     361, -1442,   258,  4938,  4938,   427, -1442,   430,   441,   447,
     452,   462, -1442,   470, -1442,   473,   481,   495,   500,   506,
     508,   546,   548,   567,   576, -1442,   157,   322, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442,   323,   329,  2028,  4938,  -139, -1442, -1442,
     339,   334, -1442, -1442,   376,   382, -1442, -1442, -1442, -1442,
   -1442,   396,   405,   419,   424,   431,   450,   472,   477,   490,
     492,   507,   527,   530,   532,   540,   542,   550,   559,   564,
     581,  4938,  4938,  4938,  4011, -1442, -1442, -1442, -1442,  6251,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,   218,   218,  -109,
     244,   651,   171,   211,   696,   736,   718,   820,  1084,  1173,
     361,  4938,  -191,   612,   586,   588,   602,   619,   625,   628,
    4054,  4028,   614, -1442,   803,  2146,   806,  4054,    65,  4938,
     218,   361,  4938,  4938,  4938,  4938,  4938,  4938,  4938,  4938,
    4938,  4938,  4938,  4938,  4938,  4938,  4938,  4938,  4938,  4938,
    4938,  4938,  -106,  -106,  6274,  4938,  4938,  4938,  4938,  4938,
    4938,  4938,  4938,  4938,  4938,  4938,  4938,  4938,  4938,  4938,
    4938, -1442, -1442,   371,   -32,   812, -1442,   361,   136,   638,
   -1442, -1442, -1442, -1442,   -20, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,   642, -1442, -1442,
   -1442,  -135, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  5765,
    1766, -1442,   741,   834,  4938,  4938,   218,   218,  4028,   336,
   -1442,  4938, -1442, -1442, -1442, -1442,     1, -1442,  4938,  4279,
     471,   561,  6297,  6324,  6351,  6378,  6405,  6432,  6459,  6486,
    6513,  6540,  4858,  6567,  6594,  6621,  6648,  6675,  6702,  4917,
    4960,  4983, -1442,  3760,  4338,  4079,  2402,  1347,  1347,   692,
     692,   692,   692,   252,   252,  -106,  -106,  -106,  -106,   218,
   -1442,  4054, -1442,  -201,  2681,   600,   634, -1442,  3021,   672,
    4938,   319,   -28,    95,   368, -1442,    68,   356,   479,   386,
     715,   572, -1442, -1442,   377,   659,   663,  5006,  5029,   675,
     679, -1442,  4054,  4365,   945,  6729,  4938,   218, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  4938,
   -1442, -1442, -1442, -1442, -1442, -1442,  4938,  4938,  4938,  4938,
   -1442,  4938,   689,    85,  4315,  4938,  4938,  5792,    76,    76,
     -61,   141, -1442,    74,   954,   710,    76,  6756,    43,   974,
     980, -1442, -1442,   717,  1024, -1442, -1442,   762,    98,  1034,
   -1442, -1442,   765,  1036,  1039,   774,   775,   777, -1442, -1442,
   -1442,    -7,  -154,   808, -1442,   784, -1442,  1046,  1047,   798,
     799, -1442, -1442,  1068,   804, -1442, -1442, -1442, -1442,  1071,
     810,   361,   361, -1442, -1442,   361,   815,   361,   218,  1078,
   -1442, -1442, -1442, -1442, -1442,  1085,  4938,  4938,  1086,  1091,
    4028, -1442,  4938, -1442,  1100,  1510,   842,  6783,  6810,  6837,
    6864,  6891,  7423, -1442, -1442, -1442,  7423,  5819,  5846, -1442,
   -1442,  1108,  1119,  1121,   361,  1122,  4938, -1442,  4054, -1442,
   -1442, -1442, -1442,    55,  1124,   888,   862, -1442,  1127,   149,
    1128, -1442,  1130, -1442,   894,   895,   905,  1180, -1442,  1181,
   -1442,  1185,   149,  1199, -1442, -1442, -1442,  1200,  1175,    98,
     970,  1205,   149,  1206, -1442, -1442,   149,  1211, -1442,   948,
     149,  1213, -1442,  1214,  1216,  1218, -1442,  1219,  1220,  1229,
     952,   973,  5052,  5075, -1442, -1442,  7423, -1442,  4938, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442,  -153,  4938,  6914,   387,   271, -1442, -1442, -1442, -1442,
    1171, -1442,  1217, -1442,   975,  1234, -1442,   402, -1442,   406,
    4938,  1237,   992, -1442, -1442,  2439, -1442,  1241, -1442,  1243,
   -1442,  1264,   415,  1293, -1442,   984,  1244,    98, -1442,  1253,
   -1442,  1322,   115,  1255, -1442,  1356, -1442,  1256, -1442,  1415,
   -1442, -1442, -1442,   972, -1442, -1442, -1442, -1442,  2171, -1442,
    4938,  4938,  5873,   996,  4938,  4531,  1257, -1442,    58, -1442,
      87, -1442,  1479, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442,  6937,  1002, -1442,   185, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442,  1005, -1442,  1006,  1007,  1009,
    1013, -1442, -1442,  1274,  2439,  2439,  2439,  2439,  1280,   206,
    1287,  7473,  -168,  1029,  1029, -1442,  1037, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442,  4938, -1442,  1300, -1442, -1442, -1442, -1442,  1041,  1043,
    1044,  1045, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  2997,
   -1442, -1442, -1442, -1442, -1442,  1052,  1053,  1055,  1059, -1442,
   -1442,  6964,  6991, -1442,  1056,  5900,  4938,  4938,    49, -1442,
    1042,   110,  1065, -1442,   822,   -39,    -3, -1442, -1442, -1442,
    1060,  1067,  1060,  2439,  1332,  1336,  1082,  1092,  1101,  1096,
    1096,  1096,  7450, -1442, -1442, -1442, -1442, -1442,    14,  1088,
   -1442,  2439,  2439,  2439,  2439,  2439,  2439,  2439,  2439,  2439,
    2439,  2439,  2439,  2439,  2439,  2439,  2439,  1359,  4938,  2093,
   -1442,  1093,   282,   697,   269,   153,  5927, -1442,  1353, -1442,
   -1442, -1442, -1442,    78,     3,   134,    21,  1105,  1110,  1112,
    1113,  1114,  1115,  1118,  1129,  1131,  1358,  1135,  1136,  1145,
    1146,  1147,   -78,     8,   106,  1095,  1149,  1150,  1152,  1154,
    1156,  1157,  1165,  1176,  1116,  1167,  1178,  1183,  1184,  1186,
    1193,  1179,  1188,  1195, -1442, -1442, -1442, -1442, -1442,    -2,
     361,   693,    88,  1383, -1442, -1442, -1442,  1151,  7423,  4608,
   -1442, -1442, -1442,   361,    74,  1168,    88,    88,    88,    88,
      77,    90,    98,    98,  1192,   361,  1390,   214, -1442, -1442,
      96,  1459, -1442, -1442,  1194,  1462,  1467, -1442, -1442,  1207,
   -1442,  1208,  3056,  1210,  1212, -1442, -1442,  1228, -1442,  1204,
   -1442,  2439,  4777,  2739,  1421,  1421,  1421,  1031,  1031,  1031,
    1031,   855,   855,  1096,  1096,  1096,  1096,  1096, -1442, -1442,
   -1442,  1215,  7473,   103,  4787, -1442,  1472,    36,  1477,   361,
   -1442, -1442,  1478,  1480,  1489,  1227,  1230,  1230,    88,    88,
   -1442, -1442,  1495,    44,    46, -1442, -1442,  1497,   361,  1498,
   -1442, -1442, -1442,  1499,  1500,  1502,    94,   361,   361,  4938,
    1505,    88,  3076, -1442, -1442, -1442,  2296,  2706,   994,   118,
    1504,   361,    51,   218,  3076,   218,    57,   361, -1442, -1442,
   -1442,   361,  1503,    98,    98,  1507,   361,   361,   361,   361,
     361,   361,   361,   361,   361, -1442,    98,   361,   361,   361,
     361,  4938, -1442,  4938, -1442,  4938, -1442, -1442,    88,   218,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,  1511,   361,  1252,  1254,  1249,   361,
   -1442, -1442,   988,  1260,  1248,   988, -1442, -1442,  1251,  4938,
   -1442, -1442,    74,  1519,  1520,  1521,  1524,    98,  1525,    98,
    1526,  1527,  1531,   514,  1533,  1534,    98,  1535,  1536,  1537,
    1093, -1442,  1538,  1541, -1442,  1277, -1442,  2439, -1442,  1282,
    1285,  1281, -1442, -1442,  2203, -1442, -1442,  2439,  1290,   438,
    1552,  1553,  1554,  1555,  1556,    48,  1298,  1565,    98,  1564,
    1566,  1567,  1568,  1569, -1442, -1442,  1570, -1442, -1442,  1571,
    1572,  1574,  1575,  1576,  1577,  1578,  1579,  1583,  1590,  1591,
   -1442,  1582,  1599,  1600,  1601, -1442,  1606,  1607,  1608,  1349,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,    88,  1609, -1442,
   -1442,  1355, -1442,    88, -1442, -1442,  1357,  1616,  1618, -1442,
   -1442, -1442,  1619,  1622, -1442,  1627, -1442,  1628,  1629,  1630,
   -1442,  1631, -1442,  1635,  1378, -1442,  1381,  1382, -1442,  1376,
    1377,  1379,  1380,  1387,  1388,  1389,  1391,   199,  1385,  1392,
     220,  1393,  1401,  5098,   554,  5121,   942,  5144,    18,   330,
    1398,  1416,  1408,  1411,  1412,  1418,  1419,  1420,  1425,  1426,
    1427,  1428,  1434,  1435,  1436,  1439,  1440,  1422,    64,    64,
   -1442,  1647, -1442,    88,    88,    20,  1384,  1443,  1444,  1445,
    1446, -1442,    88,   448,    11, -1442,  1449,   221,  1451,  7423,
   -1442, -1442, -1442, -1442, -1442,  1476, -1442,  1487, -1442, -1442,
   -1442,  1488, -1442, -1442,  1506, -1442, -1442, -1442,  1652,   455,
   -1442, -1442,    88,  2710, -1442,  4938, -1442,  1696,  1509, -1442,
    7473,    88, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  1770,
    1658,  1776,  1488, -1442,   460, -1442, -1442, -1442, -1442, -1442,
     467, -1442,   487, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442,  1522, -1442, -1442, -1442, -1442,  1518,
    1778,  1779,  1781,  1786,  1783, -1442, -1442,  1784, -1442,  1785,
    1790,   120, -1442, -1442,   498, -1442, -1442, -1442, -1442,   502,
   -1442, -1442,  1820,  1561,  1826,    98,   361,   361,  4938,  4938,
    4938,   361,    98,  1834,    88,  1835,  4938,  1836,  4938,  4938,
    1838,  4938,  1580,    98,  4938,  4938,    98, -1442, -1442,  4938,
    1581,    98,  4938,  4938,  4938,  4938, -1442, -1442,  4938,  4938,
    4938,  1584,  4938,    98, -1442, -1442,  4938,  4938,   361,  1585,
    1586,  4938,  4938,  1587, -1442, -1442,    98,  1839,    98,  3076,
    3076,  3076,  4938,  3076,  1841,  1842,   361,   361,  4938,   361,
     361,    88,  1848,  1847, -1442, -1442, -1442, -1442,  1386, -1442,
    1644, -1442,    98, -1442,  1604,  4054,  1605,  1613,  1614,   239,
    1595, -1442, -1442, -1442, -1442, -1442,  1865,  1597, -1442,   338,
    1753,  1881,  4919, -1442, -1442,  1617,    98,    98,   514,    98,
   -1442, -1442, -1442,  1623, -1442,  1626,  5167,  1634, -1442,  2439,
    1637, -1442,  1886, -1442,  1890, -1442,    98, -1442,  1891, -1442,
    1892,   361,  1894,  1897, -1442, -1442, -1442,  1639, -1442, -1442,
   -1442, -1442, -1442, -1442,  1060,  1060,  1060,    88, -1442, -1442,
   -1442,   361, -1442,   361, -1442, -1442, -1442,  1641,  1636,  1638,
    5190,  5213,  5236,  1640,  1642, -1442,  1643, -1442,  7018, -1442,
    7045,  7072, -1442,  5259, -1442,  1903,  1625,  1857,  1905,  5282,
   -1442,  1907,  1917,  1980,  2016,  2384,  5305,  2499,  2603, -1442,
    2636,  1908,  2659,  2982,  1912, -1442, -1442,  3240,  3257, -1442,
     347, -1442,  1648,  1656,  1661,  1655,  5328,  1657, -1442, -1442,
    1659,  1660,  7099,  1668,  1669,  1663,   545, -1442,   351,   359,
     313,  1671, -1442, -1442,  1934,  1667,  4054,   562,  4054,  4054,
    4054,  1936, -1442,  1260,   218,   363,  1937,    88, -1442,  3076,
    3076,  1674,  1942,   426,  4938,  4938, -1442,  3076,  4938,  1943,
   -1442, -1442, -1442, -1442,  4938,  1944,  1691, -1442, -1442,  1230,
    1682,  1684,  1685,  1686,  1955, -1442,  1693,  1698,  1699,  1687,
    1701,   598, -1442,  1703,  4938, -1442,  7473,  1702,  1964,  1705,
   -1442, -1442, -1442,  1707, -1442, -1442,  1968, -1442, -1442,  1971,
    1973,  1975,  1976, -1442, -1442,  3201,  1977,  3076,  4938,  3076,
    4938,  4938,   361,  1979,   361,  1981,  1982,  1983,    98,  3262,
   -1442, -1442, -1442, -1442,    98,  3459, -1442, -1442, -1442, -1442,
   -1442,    98, -1442, -1442,  3519, -1442, -1442, -1442, -1442, -1442,
    3716,  3776, -1442, -1442,   578,  1984,  4938,    98,  1985,  1987,
    4938,   218,   218,  4938,  4938,  1988,  1989,  1991,   218,  1992,
    1864,  1997,  2552, -1442,  1998, -1442, -1442,  1736,    98,   590,
   -1442,   593,   605,   610, -1442,  1735,  1745,  2006, -1442, -1442,
   -1442, -1442,    98, -1442,   218,   218, -1442,  7423,  7423, -1442,
    7423, -1442,  2010,  2010,  2010,  7423, -1442,  4054,  7423, -1442,
    4938,  4938,  4938,  4054, -1442,    74,  2011,  2012,  2015,  2017,
    2020,  4938,  4938,  4938,  4938,  4938, -1442, -1442,  1746,  5954,
   -1442,  1913,  2029, -1442, -1442,  1762,  1767, -1442, -1442, -1442,
   -1442,  2022, -1442,  1773,  7126,  1771,  5351,  5374,  1772, -1442,
    1782, -1442, -1442, -1442,  1774, -1442,  1777, -1442,   365, -1442,
   -1442, -1442, -1442, -1442, -1442,  5397,   369, -1442, -1442,  7153,
    1787,  1788,  5420,  5443, -1442, -1442, -1442,   637, -1442,   218,
   -1442,   218,  3076, -1442, -1442,   636,   802,  4938,  1813,  1780,
    1789,  1816,  1817, -1442, -1442, -1442,   373,  1819, -1442, -1442,
   -1442,   643,  5466,  5489,  5512,   645,  1821, -1442, -1442, -1442,
   -1442,  2042,  3300,  3317,  3334,  3509,  3577,  4938, -1442,  2047,
   -1442, -1442,  1060,  1822,  2083,  2088,  4938,  4938,  4938,  4938,
    2095,    98,  4938,  1845,  4938,    93,    98,  2110,    98,  2111,
    2113,  2114,  4938,  4938,  2115,    98,   647, -1442, -1442,  2118,
    2119,  2150,    88, -1442,  1893, -1442, -1442,  5535,    98,  4054,
    4054,  4054,  4054,   379,  2155,    98, -1442,  4938,  4938,  4938,
   -1442,  4938, -1442, -1442, -1442, -1442, -1442, -1442,  5981,  1896,
    1902,  1911, -1442, -1442, -1442,  7180,  7207,  7234,  5558, -1442,
    1914,  5581, -1442,  7261,  2173,  2176,  4938,    98,  2181,    88,
   -1442, -1442,  1924, -1442,   399, -1442, -1442, -1442,  7288,  7315,
   -1442,  1920,  2186,  4938,  2187,  2188,  2189,  2190, -1442,  4938,
    1926,   666,   698,   700,   711,  2192, -1442,  1927,  5604,  5627,
    5650,  7342, -1442,  2194,  2197,  2198,  3973,  2199,  2200,  2202,
    3076,  1939,  4938,  4033,  1945,  2206,  2207,  3594,  2210,  2212,
    2213,  2214,  2223,    98,  1969,  1970,  2232, -1442,  6008, -1442,
   -1442, -1442, -1442, -1442,  6035,  1972,  1974,  1978,  1986,  1990,
   -1442,    98,  4938,  4938,  4938,  2237, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442,  2002, -1442,  7369, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442,  2013, -1442, -1442, -1442,
    2239,  2014,  2005,  3076,  4054,  2018,  4054,  4054,  2009,  6062,
    6089,  6116, -1442,  2182,  4938,  4230,  2019,  4290,  2242,  4487,
    4547, -1442,  2244,  4938,  2004,   734,  4938,   737,   739, -1442,
   -1442, -1442, -1442,   361,  5673, -1442, -1442, -1442, -1442,  2246,
    2247, -1442,  6143,  3076,  2025,  6170,  2031,  2021,  2248,  2023,
    4938,  4744, -1442, -1442, -1442,  2027, -1442, -1442,  2033,  4054,
   -1442,  2035, -1442,  7396, -1442,  3076,  4938,   759,  2121, -1442,
    2275,  2036,  5696,  2041,  2300, -1442, -1442,  4938,  2043,  2023,
    6197,  4938,  2311, -1442,  5719,  2048,  4938, -1442,  5742,  4938,
    6224, -1442
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442,  -294, -1442,  -812, -1442,  1394, -1442, -1442,  1395,
    -500, -1442,  -607, -1442,  -393,  -508,   242, -1442, -1442, -1442,
   -1442,   574, -1442,  -931, -1442,  -879, -1442,   272, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442,  1632, -1442,  1262, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,  1741, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  1515,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,  -974,  -643, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1441, -1442, -1442, -1442,  1125,   930, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,   654, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442,  1796, -1442, -1442, -1442,
    1474, -1442,   790,  1299, -1208, -1442,  -606,    15, -1442, -1442,
   -1442,   957,  -488,  -966,  -141,   -80, -1442,    -5,  -138,   -55,
    -257,  -223
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -683
static const yytype_int16 yytable[] =
{
      35,   585,    39,   578,  1146,   173,  1124,   494,     6,   223,
     224,   759,    69,  1409,   599,  1099,  1100,  1419,  1158,     6,
      32,  1075,     6,    83,   609,   432,  1080,  1081,   613,    42,
     174,   749,   617,   890,  1615,    90,   286,   514,   528,  1359,
     394,   490,   290,     6,   404,   891,    36,   514,   506,  1104,
    1046,  1107,   495,  1629,     6,  1268,     6,   413,   495,  1635,
       6,   495,     6,     6,  1053,  1054,  1055,  1056,  1644,     6,
     395,   414,   287,   432,  1650,  1651,  1038,   495,  1069,     6,
     270,   490,   894,     6,    36,    40,   895,   896,   633,     7,
       8,     9,   402,   432,    10,    11,    12,  1039,    13,  1116,
     797,   432,   798,   514,   491,   492,    85,   695,   402,  1360,
      18,   -60,   504,   515,  1894,   872,   514,   899,   634,   901,
       6,    36,   576,   515,   514,   176,     7,     8,     9,   354,
     346,    10,    11,    12,   177,    13,  1101,  1102,   359,   360,
     402,   870,    69,    69,     3,   234,    35,    18,   402,    35,
     251,    35,    35,    35,    35,   268,   220,   225,    -3,  1123,
     402,  1361,   221,  1068,   226,   233,   238,   980,   402,   246,
     250,   255,   259,   263,   267,    69,   291,   981,   873,   515,
     417,   638,  1895,    41,  1896,    52,   418,  1011,  1362,  1363,
     393,   392,   515,  1012,   419,  1897,   695,   695,   695,   695,
     515,  1464,  1465,  1258,  1117,   493,  1190,  1147,  1898,   774,
    1555,   775,   226,    44,  1118,   982,   983,   984,   985,   986,
     987,   338,   333,     6,    65,    72,  1899,    66,    67,   476,
      73,  1148,   330,   892,   339,   718,   719,   720,   721,  1466,
     514,   331,   957,    85,   415,   340,  1299,   751,    74,   228,
    1417,    84,   958,  1467,   959,     7,     8,     9,   173,   527,
      10,    11,    12,    75,    13,   364,   226,   516,   991,   897,
    1040,    69,    69,  1013,   362,   695,    18,   516,    36,  1014,
      37,    76,   471,   174,    77,    38,   994,    43,   403,    36,
    1364,  1402,    87,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,    82,
     229,   695,   496,   748,   507,  1105,   515,  1108,   496,   584,
     548,   496,  1154,   498,    69,  1304,   497,    78,  1160,   498,
     288,  1307,   498,   516,   433,  1098,   403,   496,   697,    35,
      79,   436,  1057,    35,   403,   497,   516,    88,   498,   484,
     988,  1366,   776,   -63,   516,  1059,   403,   575,   362,   430,
     226,    89,    69,   448,   403,  1900,     6,   420,   952,  1086,
     953,  1015,   698,     6,  1051,  1435,  1087,  1016,   954,     7,
       8,     9,    80,   936,    10,    11,    12,   722,    13,  1149,
    1150,    91,  1468,   937,   938,   939,    81,    44,   501,   993,
      18,  1400,  1401,  1403,   408,   510,   -60,   334,   409,    86,
    1410,    36,   270,  1523,  1524,  1525,    36,  1527,   410,   523,
     584,  1367,   147,   695,    36,   960,   777,   697,   697,   697,
     697,     6,    65,   533,   130,    66,    67,   131,   537,   422,
    1433,  1936,   239,   240,   541,   437,   543,   544,   132,  1440,
     545,  1943,   547,    69,   133,   438,   690,   423,    68,   134,
      36,   698,   698,   698,   698,  1333,  1368,   424,   425,   135,
     516,   439,  1334,  1369,  1370,   440,   426,   136,   427,  1066,
     137,  1796,   241,   242,     6,   449,  1337,  1421,   138,   571,
       7,     8,     9,  1338,  1422,    10,    11,    12,   501,    13,
    1371,   450,   139,  1372,  1373,  1551,   697,   140,   217,   218,
     219,    18,  1422,   141,   220,   142,   230,    92,    93,     6,
     221,   160,  1486,   451,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   697,
     698,   955,   697,  2015,   362,   639,  2017,    96,    97,    98,
      99,   100,  1230,   143,   940,   144,  2019,  2020,   698,   698,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   145,  1241,   698,    35,   443,  1535,
    1607,   452,  1608,   146,  1675,   148,  1863,  1269,    36,   695,
     696,   411,    35,  1690,  1691,  2051,    35,   645,    35,   695,
     161,  1699,  1374,   178,  1556,   179,    35,    35,   361,   362,
      35,  1422,   701,  1655,    35,   444,   705,  1671,   710,   271,
    1656,   282,   445,    35,  1672,  1674,   717,   724,   441,  1687,
     728,  1833,  1672,   501,   733,  1837,  1422,    35,  1834,  1864,
     428,   180,  1838,   740,   329,  1925,  1422,   181,  1709,   463,
     362,  1743,  1422,  1745,   697,  1612,     6,   645,   453,   637,
     226,   182,     7,     8,     9,  1952,    68,    10,    11,    12,
     183,    13,  1953,   647,   648,  1694,  1695,   649,   650,   696,
     696,   696,   696,    18,   184,   779,   706,   707,   698,   185,
    1720,  1721,  1722,  1723,  1724,  1725,   186,  1342,     6,  1044,
    1343,     6,  1411,  1412,  1413,  1414,  1783,     7,     8,     9,
    1262,   362,    10,    11,    12,   187,    13,  1344,  1345,  1346,
    1849,  1415,  1850,     6,    35,  1851,  1431,  1432,    18,     7,
       8,     9,  1445,  1446,    10,    11,    12,   188,    13,  1447,
     226,     6,   189,   501,   367,  1689,   355,     7,     8,     9,
      18,   446,    10,    11,    12,   190,    13,   191,   696,  1449,
     226,  1130,  1131,  1132,  1133,  1134,  1135,  1136,    18,  1852,
    1470,   226,   192,   909,  1472,   226,   696,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,   193,  1089,   696,   194,   942,   195,   943,   944,
     945,   946,   947,   948,   949,   196,   247,   197,    35,   992,
     283,  1854,  1854,   285,   455,   198,  1848,  1669,  1670,   332,
     697,  1609,  1610,  1611,   199,     6,  1347,   368,   990,   200,
     697,     7,     8,     9,  1680,   362,    10,    11,    12,   356,
      13,   398,    45,   462,    46,  1157,   201,  1159,  1428,  1762,
    1763,   272,    18,   273,   698,  1043,  1043,   436,   456,    47,
      48,    49,  1789,   362,   698,  1790,   362,   274,  1050,   501,
    1726,   436,   436,   436,   436,   399,    50,  1791,   362,  1444,
    1064,  1191,  1792,   362,   275,   436,  1849,  1448,  1850,  1450,
     276,  1851,   173,   277,   876,   877,   878,   879,   880,   881,
     882,   883,   884,   337,   173,   885,   696,   345,  1853,  1844,
    1845,   886,   457,   406,   458,  1866,   362,  1870,   362,  1912,
    1913,  1471,   235,   236,   887,   464,  1473,  1130,  1131,  1132,
    1133,  1134,  1135,  1136,  1093,  1852,   465,   459,  1966,   362,
    1589,   468,  1880,   436,   436,   469,   215,   216,   217,   218,
     219,   695,   473,  1111,   220,   483,   769,   770,   771,   772,
     221,   502,  1119,  1120,  1703,  1704,   436,   243,   244,   950,
    1967,   362,  1968,   362,  1983,   503,  1153,  1156,    69,   508,
      69,  1162,  1163,  1969,   362,   509,  1164,   460,   511,   252,
     253,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
     124,   129,  1179,  1180,  1181,  1182,  2044,   362,   248,  2046,
     362,  2047,   362,   436,    69,  1192,  1193,  1194,  1195,  1196,
    1197,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,   512,
    1207,  2073,   362,   513,  1211,   902,   520,  2024,    51,   519,
    1917,   521,   171,   175,   522,   524,   525,   501,   526,   529,
     530,   531,   532,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   534,
     535,   932,   696,   536,  1856,   538,   540,  2055,   202,   203,
     204,   542,   696,   549,  2001,  1350,   546,  1950,  1351,     6,
     551,   256,   257,   554,   888,     7,     8,     9,   555,  2071,
      10,    11,    12,   606,    13,  1352,  1353,   557,   560,  1354,
    1355,   792,   793,   794,   795,   568,    18,   796,   269,  1130,
    1131,  1132,  1133,  1134,  1135,  1136,   569,  1143,   570,   580,
     572,   579,   436,   581,   583,   586,   289,   588,   436,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   590,
     591,   592,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,     6,  1881,
     605,   713,   697,  1084,     7,     8,     9,   593,   596,    10,
      11,    12,   598,    13,  1212,  1213,  1214,  1215,  1216,  1217,
    1218,  1219,  1220,  1396,  1396,    18,   600,   604,   436,   436,
     436,   607,   608,   610,  1356,  1806,   698,   436,   614,   616,
     618,   620,     6,   621,   627,   622,   624,   625,     7,     8,
       9,   357,   358,    10,    11,    12,   626,    13,   363,   629,
     641,   646,   652,   396,   734,   365,     6,   436,   653,    18,
     702,   712,     7,     8,     9,   711,   436,    10,    11,    12,
     714,    13,   725,   730,  1547,   747,  1144,   744,   758,     6,
     760,   762,   763,    18,   764,     7,     8,     9,   765,   768,
      10,    11,    12,   773,    13,   790,   791,   792,   793,   794,
     795,   397,   778,   796,   799,   171,    18,   407,     6,   173,
     173,   173,  -682,   173,     7,     8,     9,   807,   871,    10,
      11,    12,   809,    13,   810,   811,   812,   860,   861,   470,
     862,  1478,  1479,   475,   863,    18,  1483,     6,   866,   436,
     875,   690,   900,     7,     8,     9,   477,   903,    10,    11,
      12,   904,    13,   478,   479,   480,   481,   905,   482,  1253,
     907,   486,   487,   488,    18,   260,   261,   906,   796,  1260,
     910,     6,   928,  1514,   934,  1005,  1017,     7,     8,     9,
     996,  1933,    10,    11,    12,   997,    13,   998,   999,  1000,
    1001,  1530,  1531,  1002,  1533,  1534,   436,  1026,    18,  1047,
     995,  1540,  1048,    35,  1003,  1065,  1004,     7,     8,     9,
    1006,  1007,    10,    11,    12,  1679,    13,  1681,  1682,  1683,
    1008,  1009,  1010,  1543,  1018,  1019,  1686,  1020,    18,  1021,
       6,  1022,  1023,   552,   553,  1696,     7,     8,     9,   556,
    1024,    10,    11,    12,   696,    13,  1052,   963,  1027,   964,
     965,  1025,   966,  1028,   264,   265,  1603,    18,  1029,  1030,
    1033,  1031,   967,   573,  1058,  1060,  1061,  1062,  1032,  1034,
    1035,  1067,   436,  1063,  1070,  1071,  1613,  1072,  1614,   968,
     969,   970,  1073,  1074,  1076,  1078,  1083,  1090,  1079,   173,
     173,  1085,   872,  1094,     6,  1095,   971,   173,   643,   644,
       7,     8,     9,  1082,  1096,    10,    11,    12,  1097,    13,
    1103,  1098,  1110,  1112,  1113,  1114,  1541,  1115,  1122,  1152,
    1165,    18,   699,   700,  1168,   632,  1206,  1208,   558,  1209,
    1210,  1224,  1228,  1770,  1771,  1222,  1231,  1232,  1233,   635,
    1777,  1234,  1236,  1238,  1239,   703,   704,   173,  1240,   173,
    1242,  1243,  1245,  1246,  1247,  1250,   972,   651,  1251,    69,
    1252,  1256,   436,  1255,  1257,  1261,  1798,  1799,    69,  1263,
    1264,  1265,  1266,  1267,   708,   709,  1801,  1166,  1167,  1270,
    1272,  1275,  1805,  1276,  1277,  1278,  1279,  1281,  1283,  1284,
    1178,  1285,  1286,  1287,  1288,  1289,  1290,   741,   742,  1295,
    1291,   745,   173,   715,   716,   211,   212,  1292,  1293,   213,
     214,   215,   216,   217,   218,   219,  1296,  1297,  1298,   220,
      35,  1300,  1301,  1302,  1303,   221,  1305,  1748,   973,  1750,
    1306,  1309,  1308,  1310,    35,   974,  1312,   726,   727,  1313,
      35,  1235,  1631,  1237,  1315,  1316,  1317,  1318,  1320,    35,
    1244,  1846,  1321,  1847,  1322,    35,    35,  1323,  1324,  1325,
    1326,  1335,  1327,  1328,  1399,  1404,    69,    69,  1542,  1430,
    1329,  1330,  1331,    69,  1332,  1336,  1339,  1340,   806,   786,
     787,  1376,  1273,   788,   789,   790,   791,   792,   793,   794,
     795,  1378,  1377,   796,  1379,  1380,   731,   732,  1393,    69,
      69,  1381,  1382,  1383,    92,    93,     6,  1384,  1385,  1437,
    1386,  1387,   173,   868,   869,    94,    95,  1388,  1389,  1390,
     501,  1596,  1391,  1392,  1405,  1406,  1407,  1408,  1921,  1922,
    1923,  1924,  1420,  1424,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,  1426,
     643,   753,   206,   207,   208,   929,   209,   210,   211,   212,
    1427,   226,   213,   214,   215,   216,   217,   218,   219,    92,
      93,   162,   220,  1442,    69,  1438,    69,  1441,   221,  1429,
      94,    95,   559,  1443,  1453,  1454,  1455,  1451,  1456,  1457,
    1458,  1460,  1462,   164,   165,   166,   167,  1463,  1418,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   206,   207,   208,  1474,   209,   210,
     211,   212,  1475,  1476,   213,   214,   215,   216,   217,   218,
     219,  1485,  1487,  1489,   220,  1492,  1521,   436,  1528,  1529,
     221,  1494,  1500,  1536,  1537,  1509,  1515,  1516,  1519,  1544,
     173,  1552,  1554,  2025,  1632,  2027,  2028,   206,   207,   208,
    1553,   209,   210,   211,   212,  1546,  1548,   213,   214,   215,
     216,   217,   218,   219,  1549,  1550,  1557,   220,  1558,  1592,
    1586,  1598,  1593,   221,   436,  1599,  1601,  1602,    53,  1477,
    1595,  1604,    54,  1597,  1605,  1606,  1484,  1616,  1623,  1617,
    1630,  1618,  1633,  1622,  1636,  1646,  1624,  1495,  2067,  1649,
    1498,  1657,  1658,   173,  1637,  1501,  1121,  1659,  1660,   171,
    1662,    35,  1663,  1664,  1666,  1667,  1668,  1511,    35,  1677,
    1678,   171,  1676,  1684,  1688,  1692,   121,  1693,  1701,  1706,
    1520,   122,  1522,  1710,   123,  1711,  1712,  1713,  1714,  1718,
      55,  1715,  1707,   173,  1716,  1717,    56,  1719,  1183,  1728,
    1185,  1731,  1187,  1733,  1730,  1734,  1545,  1732,  1737,    57,
    1738,    58,  1739,  1740,  1742,   173,  1749,  1638,  1751,  1752,
    1753,  1764,  1767,    59,  1768,  1774,  1775,    60,  1776,  1778,
    1587,  1588,  1779,  1590,  1780,  1784,  1229,  1787,  1793,    61,
      35,  1794,    35,  1795,    35,    35,  1800,  1817,  1807,  1808,
    1600,   121,  1809,  1639,  1810,  1811,   122,  1819,  2049,   123,
      62,    92,    93,   162,   163,  1821,  1820,    66,   353,  1824,
    1822,  1823,    94,    95,  1826,  1829,    35,  1831,  1830,  1872,
    1832,  1859,  1879,  1840,  1841,   164,   165,   166,   167,   168,
    1860,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,  1858,  1861,  1862,    63,
    1883,    64,  1865,  1882,  1871,  1884,    92,    93,   654,   206,
     207,   208,  1889,   209,   210,   211,   212,    94,    95,   213,
     214,   215,   216,   217,   218,   219,  1892,  1903,  1905,   220,
    1906,  1907,  1910,  1914,  1915,   221,    96,    97,    98,    99,
     100,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,  1916,   679,   680,  1918,   206,
     207,   208,  1926,   209,   210,   211,   212,   584,  1934,   213,
     214,   215,   216,   217,   218,   219,     6,  1935,  1945,   220,
    1941,  1946,     7,     8,     9,   221,  1949,    10,    11,    12,
    1951,    13,  1956,  1957,  1959,  1960,  1961,  1962,  1965,  1970,
    1971,  1976,  1754,    18,  1977,  1978,  1980,  1981,  1756,  1982,
    1984,  1259,  1436,  1988,  1989,  1758,  1987,  1991,   681,  1992,
    1993,  1994,   206,   207,   208,   682,   209,   210,   211,   212,
    1995,  1766,   213,   214,   215,   216,   217,   218,   219,  1999,
    1997,  1998,   220,  2003,  2012,  2004,  2021,  2033,   221,  2038,
    2005,  2041,  1788,  2052,  2053,  2060,  2074,  2006,   206,   207,
     208,  2007,   209,   210,   211,   212,  1797,   169,   213,   214,
     215,   216,   217,   218,   219,  2014,  2023,  2043,   220,  2018,
    2022,  2029,  2075,   121,   221,  1480,  1481,  1482,   122,  2026,
    2036,   123,  2059,  1488,  2061,  1490,  1491,  2056,  1493,   170,
    2065,  1496,  1497,  2058,  2066,  2079,  1499,  2069,  2076,  1502,
    1503,  1504,  1505,  2078,  2081,  1506,  1507,  1508,  2085,  1510,
    2087,  2082,   642,  1512,  1513,   977,   801,  1539,  1517,  1518,
    1786,  1091,  1248,  1092,  1397,  1045,   171,   171,   171,  1526,
     171,   683,   623,  1685,  1225,  1532,     0,   684,   685,     0,
       0,     0,     0,   686,     0,     0,   687,     0,     0,   930,
     931,   688,   689,     0,   690,     0,     0,     0,     0,     0,
       0,   735,   736,   737,   738,     0,     0,     0,     0,     0,
    1126,     0,  1127,  1128,  1129,     0,     0,     0,   206,   207,
     208,  1640,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,  1890,     0,     0,   220,     0,
    1902,     0,  1904,     0,   221,     0,     0,     0,   284,  1911,
       0,  1130,  1131,  1132,  1133,  1134,  1135,  1136,     0,  1137,
    1138,     0,  1920,     0,     0,     0,     0,     0,     0,  1927,
       0,     0,    92,    93,   654,   780,   781,   782,   783,   784,
     785,   786,   787,    94,    95,   788,   789,   790,   791,   792,
     793,   794,   795,     0,     0,   796,     0,     0,     0,     0,
       0,  1948,    96,    97,    98,    99,   100,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,     0,   679,   680,     0,     0,  1642,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   171,     0,     0,
       0,  1697,  1698,     0,   171,  1700,     0,  1996,     0,     0,
       0,  1705,     0,  1708,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2008,     0,     0,     0,     0,
       0,  1729,     0,     0,     0,    92,    93,   162,     0,     0,
       0,     0,     0,     0,   681,     0,    94,    95,  1139,     0,
       0,   682,     0,     0,   171,  1744,   171,  1746,  1747,   164,
     165,   166,   167,     0,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
    1643,     0,     0,  1765,     0,     0,     0,  1769,     0,     0,
    1772,  1773,     0,     0,     0,     0,   206,   207,   208,   171,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,  1645,     0,     0,   220,     0,   209,   210,
     211,   212,   221,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,  1647,  1802,  1803,  1804,
     221,     0,     0,     0,     0,     0,     0,     0,  1812,  1813,
    1814,  1815,  1816,     0,    92,    93,     6,   683,     0,     0,
       0,     0,     0,   684,   685,    94,    95,     0,     0,   686,
       0,     0,   687,     0,     0,     0,     0,   688,   689,     0,
     690,     0,     0,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   171,
       0,   206,   207,   208,  1857,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,  1781,     0,
       0,     0,  1782,     0,  1878,     0,     0,     0,     0,     0,
       0,     0,     0,  1885,  1886,  1887,  1888,     0,     0,  1891,
    1126,  1893,  1127,  1128,  1129,     0,     0,     0,     0,  1908,
    1909,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,   122,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,   170,  1928,  1929,  1930,     0,  1931,     0,
       0,  1130,  1131,  1132,  1133,  1134,  1135,  1136,     0,  1137,
    1138,     0,     0,     0,     0,   206,   207,   208,     0,   209,
     210,   211,   212,  1947,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
    1958,   221,     0,     0,     0,     0,  1964,     0,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,   171,   220,  1985,
       0,   206,   207,   208,   221,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,     0,  2009,
    2010,  2011,     0,     0,     0,     0,   121,     0,     0,     0,
       0,   122,     0,     0,   123,     0,     0,     0,     0,   396,
       0,     0,   780,   781,   782,   783,   784,   785,   786,   787,
     171,     0,   788,   789,   790,   791,   792,   793,   794,   795,
       0,  2034,   796,     0,     0,     0,  1434,     0,  1142,     0,
    2042,     0,     0,  2045,   783,   784,   785,   786,   787,  1648,
       0,   788,   789,   790,   791,   792,   793,   794,   795,     0,
     171,   796,   814,     0,     0,     0,     0,  2063,     7,     8,
       9,     0,     0,    10,    11,   815,     0,    13,     0,     0,
       0,     0,   171,  2072,    92,    93,   401,   163,     0,    18,
      66,     0,     0,     0,  2080,    94,    95,     0,  2084,     0,
       0,     0,     0,  2088,     0,     0,  2090,     0,   164,   165,
     166,   167,   168,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    92,
      93,   162,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,   165,   166,   167,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,     0,
       0,     0,   816,     0,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,   833,     0,     0,   834,     0,     0,   835,
       0,     0,   836,     0,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
       0,     0,     0,   853,     0,     0,     0,     0,   854,     0,
       0,   855,     0,     0,     0,     0,   814,     0,     0,     0,
       0,     0,     7,     8,     9,     0,     0,    10,    11,   815,
       0,    13,     0,     0,   206,   207,   208,     0,   209,   210,
     211,   212,     0,    18,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,  1652,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,     0,     0,     0,  1653,     0,     0,   814,     0,   856,
       0,     0,     0,     7,     8,     9,   121,     0,    10,    11,
     815,   122,    13,     0,   123,     0,     0,     0,     0,   403,
       0,     0,   170,     0,    18,     0,     0,     0,   780,   781,
     782,   783,   784,   785,   786,   787,     0,  1873,   788,   789,
     790,   791,   792,   793,   794,   795,     0,     0,   796,     0,
       0,     0,     0,     0,  1874,     0,     0,     0,     0,  1077,
       0,   121,     0,     0,     0,     0,   122,     0,     0,   123,
       0,  1875,     0,     0,     0,     0,   816,   170,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,   833,     0,     0,
     834,     0,     0,   835,     0,     0,   836,     0,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   850,   851,   852,     0,     0,     0,   853,     0,     0,
       0,     0,   854,     0,     0,   855,     0,   816,     0,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,     0,     0,     0,   833,     0,
       0,   834,     0,     0,   835,     0,     0,   836,     0,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,     0,     0,     0,   853,     0,
       0,     0,     0,   854,   814,     0,   855,     0,     0,     0,
       7,     8,     9,  1741,     0,    10,    11,   815,     0,    13,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
       0,    18,   213,   214,   215,   216,   217,   218,   219,   206,
     207,   208,   220,   209,   210,   211,   212,     0,   221,   213,
     214,   215,   216,   217,   218,   219,  1876,     0,     0,   220,
       0,     0,     0,     0,   814,   221,     0,     0,     0,     0,
       7,     8,     9,     0,  1755,    10,    11,   815,     0,    13,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
       0,    18,   213,   214,   215,   216,   217,   218,   219,   206,
     207,   208,   220,   209,   210,   211,   212,     0,   221,   213,
     214,   215,   216,   217,   218,   219,   206,   207,   208,   220,
     209,   210,   211,   212,  1877,   221,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,  1990,   221,     0,   816,     0,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,   833,     0,     0,   834,     0,
       0,   835,     0,     0,   836,     0,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
     851,   852,     0,     0,     0,   853,     0,     0,     0,     0,
     854,     0,     0,   855,   816,     0,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,   833,     0,     0,   834,     0,
       0,   835,     0,     0,   836,     0,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
     851,   852,     0,     0,     0,   853,     0,     0,     0,     0,
     854,   814,     0,   855,     0,     0,     0,     7,     8,     9,
       0,  1757,    10,    11,   815,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,   389,     0,
       0,   220,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   814,     0,     0,     0,     0,     0,     7,     8,     9,
       0,  1759,    10,    11,   815,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,   206,   207,   208,   220,
     209,   210,   211,   212,     0,   221,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,   816,   221,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,     0,
       0,     0,   833,     0,     0,   834,     0,     0,   835,     0,
       0,   836,     0,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,     0,
       0,     0,   853,     0,     0,     0,     0,   854,     0,     0,
     855,   816,     0,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,     0,
       0,     0,   833,     0,     0,   834,     0,     0,   835,     0,
       0,   836,     0,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,     0,
       0,     0,   853,     0,     0,     0,     0,   854,   814,     0,
     855,     0,     0,     0,     7,     8,     9,     0,  1760,    10,
      11,   815,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,   206,   207,   208,    18,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,   205,
       0,     0,   220,     0,   390,     0,     0,     0,   221,     0,
       0,     0,     0,     0,     0,     0,   281,     0,   814,     0,
       0,     0,     0,     0,     7,     8,     9,     0,  1761,    10,
      11,   815,     0,    13,     0,     0,     0,    92,    93,   162,
       0,     0,     0,     0,     0,    18,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,   165,   166,   167,     0,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,     0,     0,     0,     0,     0,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,   833,
       0,     0,   834,     0,     0,   835,     0,     0,   836,     0,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   852,     0,     0,     0,   853,
       0,     0,     0,     0,   854,     0,     0,   855,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,   833,
       0,     0,   834,     0,     0,   835,     0,     0,   836,     0,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   852,     0,     0,     0,   853,
       0,     0,     0,     0,   854,   814,     0,   855,     0,     0,
       0,     7,     8,     9,     0,  1979,    10,    11,   815,     0,
      13,     0,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,    18,   213,   214,   215,   216,   217,   218,   219,
     206,   207,   208,   220,   209,   210,   211,   212,     0,   221,
     213,   214,   215,   216,   217,   218,   219,   366,     0,     0,
     220,     0,     0,     0,     0,   814,   221,     0,     0,     0,
       0,     7,     8,     9,     0,  1986,    10,    11,   815,   121,
      13,     0,     0,     0,   122,     0,     0,   123,    92,    93,
       6,   485,    18,   208,     0,   209,   210,   211,   212,    94,
      95,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,   391,   221,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   472,     0,   816,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,     0,     0,     0,   833,     0,     0,   834,
       0,     0,   835,     0,     0,   836,     0,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,     0,     0,     0,   853,     0,     0,     0,
       0,   854,     0,     0,   855,   816,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,     0,     0,     0,   833,     0,     0,   834,
       0,     0,   835,     0,     0,   836,     0,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,     0,     0,     0,   853,     0,     0,     0,
       0,   854,   814,     0,   855,     0,     0,     0,     7,     8,
       9,     0,  2035,    10,    11,   815,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,   746,
       0,   220,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   814,     0,     0,     0,     0,     0,     7,     8,
       9,     0,  2037,    10,    11,   815,     0,    13,     0,     0,
     121,     0,     0,     0,     0,   122,     0,     0,   123,    18,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,  1049,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,   816,   221,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,   833,     0,     0,   834,     0,     0,   835,
       0,     0,   836,     0,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
       0,     0,     0,   853,     0,     0,     0,     0,   854,     0,
       0,   855,   816,     0,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,   833,     0,     0,   834,     0,     0,   835,
       0,     0,   836,     0,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
       0,     0,     0,   853,     0,     0,     0,     0,   854,   814,
       0,   855,     0,     0,     0,     7,     8,     9,     0,  2039,
      10,    11,   815,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   207,   208,    18,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
      92,    93,   162,   220,     0,     0,     0,     0,     0,   221,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   165,   166,   167,     0,  2040,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,     0,     0,     0,     0,     0,
     206,   207,   208,     0,   209,   210,   211,   212,     0,  1088,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   816,
       0,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,     0,     0,     0,
     833,     0,     0,   834,     0,     0,   835,     0,     0,   836,
       0,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,     0,     0,     0,
     853,    92,    93,     6,     0,   854,     0,     0,   855,     0,
       0,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,     0,  1559,     0,     0,
       6,     0,     0,     0,     0,     0,     7,     8,     9,     0,
       0,    10,    11,    12,     0,    13,  2064,    14,    15,    16,
      17,   782,   783,   784,   785,   786,   787,    18,     0,   788,
     789,   790,   791,   792,   793,   794,   795,     0,     0,   796,
       0,     0,   121,     0,     0,     0,     0,   122,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,  1560,     0,
      19,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,  1561,     0,     0,    24,     0,     0,
     206,   207,   208,     0,   209,   210,   211,   212,     0,    25,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1562,     0,   221,     0,     0,     0,
      26,   379,     0,     0,     0,  1563,  1564,  1565,  1566,  1567,
    1568,  1569,  1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,
    1578,  1579,  1580,  1581,  1582,  1583,  1584,  1585,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,     0,     0,    27,
     386,    28,     0,   121,     0,     0,     0,     0,   122,     0,
       0,   123,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,   387,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,   388,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,   466,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,   467,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,   630,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,   631,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1341,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1349,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1358,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1594,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1619,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1620,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1621,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1628,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1634,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1641,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1661,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1827,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1828,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1836,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1842,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1843,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1867,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1868,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1869,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1919,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1940,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1942,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1972,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1973,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1974,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  2050,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  2077,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  2086,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  2089,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,   352,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,   489,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,   566,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,   567,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,   743,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,   867,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,   962,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  1818,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  1932,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    2000,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,  2002,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  2030,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  2031,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,  2032,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,  2054,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,  2057,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,  2083,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  2091,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,   222,   206,   207,   208,   221,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,   312,   206,
     207,   208,   221,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   369,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     370,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   371,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   372,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   373,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   374,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   375,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   376,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   377,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   378,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   380,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     381,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   382,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   383,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   384,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   385,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   474,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   505,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   561,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   562,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   563,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     564,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,   565,   206,   207,   208,   221,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,   636,   206,
     207,   208,   221,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   757,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     864,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   865,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1625,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1626,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1627,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1665,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  1825,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1839,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1937,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1938,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    1939,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  1944,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1954,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1955,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1975,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  2016,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  2070,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   780,   781,   782,   783,   784,   785,   786,   787,
       0,     0,   788,   789,   790,   791,   792,   793,   794,   795,
       0,     0,   796,     0,   908,   780,   781,   782,   783,   784,
     785,   786,   787,     0,     0,   788,   789,   790,   791,   792,
     793,   794,   795,     0,     0,   796
};

static const yytype_int16 yycheck[] =
{
       5,   509,     7,   503,   978,    85,   972,   400,     5,   147,
     148,   654,    17,  1221,   522,   946,   947,  1225,   984,     5,
       5,   900,     5,    28,   532,     5,   905,   906,   536,     5,
      85,   638,   540,    72,  1475,    40,   177,    26,   431,    21,
     241,     5,   180,     5,   338,    84,   275,    26,     5,     5,
     862,     5,     3,  1494,     5,     7,     5,    85,     3,  1500,
       5,     3,     5,     5,   876,   877,   878,   879,  1509,     5,
     271,    99,     7,     5,  1515,  1516,    78,     3,   890,     5,
     271,     5,    85,     5,   275,   263,    89,    90,   241,    11,
      12,    13,    72,     5,    16,    17,    18,    99,    20,     5,
     268,     5,   270,    26,   398,   399,   241,   595,    72,    91,
      32,   265,   406,   102,    21,     5,    26,   760,   271,   762,
       5,   275,    67,   102,    26,   264,    11,    12,    13,   270,
     265,    16,    17,    18,   273,    20,   948,   949,   276,   277,
      72,   748,   147,   148,     0,   150,   151,    32,    72,   154,
     155,   156,   157,   158,   159,   160,   262,   266,     0,   971,
      72,   143,   268,    67,   273,   150,   151,    89,    72,   154,
     155,   156,   157,   158,   159,   180,   181,    99,    68,   102,
      85,   574,    89,     7,    91,     7,    91,   265,   170,   171,
     331,   329,   102,   271,    99,   102,   684,   685,   686,   687,
     102,    81,    82,  1082,   110,   266,  1018,    89,   115,     3,
    1418,     5,   273,   263,   120,   137,   138,   139,   140,   141,
     142,   241,   227,     5,     6,   265,   133,     9,    10,   367,
     271,   113,   264,   272,   254,   120,   121,   122,   123,   119,
      26,   273,    89,   241,   272,   265,  1125,   640,   271,     5,
     239,   275,    99,   133,   101,    11,    12,    13,   338,   266,
      16,    17,    18,   271,    20,   264,   273,   256,   265,   272,
     272,   276,   277,   265,   273,   763,    32,   256,   275,   271,
     263,   271,   362,   338,   271,   268,   265,   263,   268,   275,
     272,   271,     6,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   271,
      66,   799,   263,   255,   271,   271,   102,   271,   263,   271,
     458,   263,   271,   274,   329,  1137,   271,   271,   271,   274,
     265,  1143,   274,   256,   266,   271,   268,   263,   595,   344,
     271,   346,   265,   348,   268,   271,   256,     7,   274,   264,
     272,    21,   146,   266,   256,   265,   268,   498,   273,   344,
     273,     7,   367,   348,   268,   272,     5,   272,    99,   266,
     101,   265,   595,     5,   874,  1254,   273,   271,   109,    11,
      12,    13,   271,   101,    16,    17,    18,   272,    20,   271,
     272,   133,   272,   111,   112,   113,   271,   263,   403,   265,
      32,  1213,  1214,  1215,    85,   410,   265,   271,    89,   271,
    1222,   275,   271,  1379,  1380,  1381,   275,  1383,    99,   424,
     271,    91,   265,   911,   275,   272,   220,   684,   685,   686,
     687,     5,     6,   438,     7,     9,    10,     7,   443,    71,
    1252,  1882,   271,   272,   449,    89,   451,   452,     7,  1261,
     455,  1892,   457,   458,     7,    99,   271,    89,   240,     7,
     275,   684,   685,   686,   687,   266,   136,    99,   100,     7,
     256,   115,   273,   143,   144,   119,   108,     7,   110,   265,
       7,  1689,   271,   272,     5,    99,   266,   266,     7,   494,
      11,    12,    13,   273,   273,    16,    17,    18,   503,    20,
     170,   115,     7,   173,   174,   266,   763,     7,   256,   257,
     258,    32,   273,     7,   262,     7,   272,     3,     4,     5,
     268,   198,  1334,   137,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     763,   272,   799,  1984,   273,   274,  1987,    33,    34,    35,
      36,    37,  1052,     7,   272,     7,  1997,  1998,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,     7,  1063,   799,   582,    99,  1391,
    1459,   195,  1461,     7,   271,   263,  1794,  1095,   275,  1077,
     595,   272,   597,  1559,  1560,  2036,   601,   582,   603,  1087,
     271,  1567,   272,   264,   266,   271,   611,   612,   272,   273,
     615,   273,   597,   266,   619,   136,   601,   266,   603,     7,
     273,     7,   143,   628,   273,   266,   611,   612,   272,   266,
     615,   266,   273,   638,   619,   266,   273,   642,   273,   266,
     272,   265,   273,   628,   273,   266,   273,   265,  1579,   272,
     273,  1617,   273,  1619,   911,  1467,     5,   642,   272,   272,
     273,   265,    11,    12,    13,   266,   240,    16,    17,    18,
     265,    20,   273,   271,   272,   249,   250,   271,   272,   684,
     685,   686,   687,    32,   265,   690,   271,   272,   911,   265,
      92,    93,    94,    95,    96,    97,   265,   143,     5,     6,
     146,     5,   254,   255,   256,   257,  1672,    11,    12,    13,
     272,   273,    16,    17,    18,   265,    20,   163,   164,   165,
      84,   273,    86,     5,   729,    89,   271,   272,    32,    11,
      12,    13,   272,   273,    16,    17,    18,   265,    20,   272,
     273,     5,   265,   748,   273,  1557,     5,    11,    12,    13,
      32,   272,    16,    17,    18,   265,    20,   265,   763,   272,
     273,   125,   126,   127,   128,   129,   130,   131,    32,   133,
     272,   273,   265,   778,   272,   273,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   265,   934,   799,   265,    99,   265,   101,   102,
     103,   104,   105,   106,   107,   265,    70,   265,   813,   814,
       7,  1785,  1786,     7,    99,   265,  1782,   272,   273,     7,
    1077,  1464,  1465,  1466,   265,     5,   272,   266,   813,   265,
    1087,    11,    12,    13,   272,   273,    16,    17,    18,     5,
      20,   241,     5,   271,     7,   983,   265,   985,  1241,   271,
     272,   265,    32,   265,  1077,   860,   861,   862,   143,    22,
      23,    24,   272,   273,  1087,   272,   273,   265,   873,   874,
     272,   876,   877,   878,   879,   241,    39,   272,   273,  1272,
     885,  1019,   272,   273,   265,   890,    84,  1280,    86,  1282,
     265,    89,   972,   265,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   265,   984,    83,   911,   265,   272,   272,
     273,    89,   197,   241,   199,   272,   273,   272,   273,   272,
     273,  1314,   271,   272,   102,   266,  1319,   125,   126,   127,
     128,   129,   130,   131,   939,   133,   273,   222,   272,   273,
    1428,   266,  1821,   948,   949,   266,   254,   255,   256,   257,
     258,  1439,     7,   958,   262,   266,   684,   685,   686,   687,
     268,     7,   967,   968,  1570,  1571,   971,   271,   272,   272,
     272,   273,   272,   273,  1940,   265,   981,   982,   983,     5,
     985,   986,   987,   272,   273,     5,   991,   272,   271,   271,
     272,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
      43,    44,  1007,  1008,  1009,  1010,   272,   273,   272,   272,
     273,   272,   273,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,     5,
    1035,   272,   273,   271,  1039,   763,   271,  2003,   201,     5,
    1852,     5,    85,    86,     5,   271,   271,  1052,   271,   241,
     266,     5,     5,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   271,
     271,   799,  1077,     5,   272,   271,     5,  2043,   121,   122,
     123,   271,  1087,     5,  1963,   143,   271,  1899,   146,     5,
       5,   271,   272,     7,   272,    11,    12,    13,     7,  2065,
      16,    17,    18,   529,    20,   163,   164,     7,   266,   167,
     168,   256,   257,   258,   259,     7,    32,   262,   161,   125,
     126,   127,   128,   129,   130,   131,     7,   133,     7,   241,
       8,     7,  1137,   271,     7,     7,   179,     7,  1143,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   265,
     265,   256,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,     5,  1822,
       5,   607,  1439,   911,    11,    12,    13,     7,     7,    16,
      17,    18,     7,    20,   206,   207,   208,   209,   210,   211,
     212,   213,   214,  1208,  1209,    32,     7,     7,  1213,  1214,
    1215,   241,     7,     7,   272,  1715,  1439,  1222,     7,   271,
       7,     7,     5,     7,   272,     7,     7,     7,    11,    12,
      13,   274,   275,    16,    17,    18,     7,    20,   281,   266,
      69,     7,     5,   268,   272,   288,     5,  1252,   256,    32,
       7,     7,    11,    12,    13,   271,  1261,    16,    17,    18,
       7,    20,     7,     7,  1405,     8,   272,   271,   266,     5,
     265,   265,   265,    32,   265,    11,    12,    13,   265,     5,
      16,    17,    18,     3,    20,   254,   255,   256,   257,   258,
     259,   334,     5,   262,   265,   338,    32,   340,     5,  1379,
    1380,  1381,   265,  1383,    11,    12,    13,     7,   266,    16,
      17,    18,   271,    20,   271,   271,   271,   265,   265,   362,
     265,  1326,  1327,   366,   265,    32,  1331,     5,   272,  1334,
     265,   271,   265,    11,    12,    13,   379,     5,    16,    17,
      18,     5,    20,   386,   387,   388,   389,   265,   391,  1077,
     249,   394,   395,   396,    32,   271,   272,   265,   262,  1087,
     272,     5,     3,  1368,   271,     7,   271,    11,    12,    13,
     265,  1879,    16,    17,    18,   265,    20,   265,   265,   265,
     265,  1386,  1387,   265,  1389,  1390,  1391,   271,    32,     6,
     816,     5,   241,  1398,   265,     5,   265,    11,    12,    13,
     265,   265,    16,    17,    18,  1546,    20,  1548,  1549,  1550,
     265,   265,   265,  1398,   265,   265,  1554,   265,    32,   265,
       5,   265,   265,   466,   467,  1563,    11,    12,    13,   472,
     265,    16,    17,    18,  1439,    20,   268,    84,   271,    86,
      87,   265,    89,   265,   271,   272,  1451,    32,   265,   265,
     271,   265,    99,   496,   880,   881,   882,   883,   265,   271,
     265,   887,  1467,   271,     5,   271,  1471,     5,  1473,   116,
     117,   118,     5,   266,   266,   265,   272,     5,   266,  1559,
    1560,   266,     5,     5,     5,     5,   133,  1567,   271,   272,
      11,    12,    13,   265,     5,    16,    17,    18,   271,    20,
       5,   271,     5,     5,     5,     5,   120,     5,     3,     5,
       7,    32,   271,   272,     7,   558,     5,   265,     8,   265,
     271,   273,   271,  1661,  1662,   265,     7,     7,     7,   572,
    1668,     7,     7,     7,     7,   271,   272,  1617,     7,  1619,
       7,     7,     7,     7,     7,     7,   193,   590,     7,  1554,
     273,   266,  1557,   271,   273,   265,  1694,  1695,  1563,     7,
       7,     7,     7,     7,   271,   272,  1707,   993,   994,   271,
       5,     7,  1713,     7,     7,     7,     7,     7,     7,     7,
    1006,     7,     7,     7,     7,     7,     7,   630,   631,     7,
       7,   634,  1672,   271,   272,   248,   249,     7,     7,   252,
     253,   254,   255,   256,   257,   258,     7,     7,     7,   262,
    1615,     5,     5,     5,   265,   268,     7,  1622,   265,  1624,
     265,     5,   265,     5,  1629,   272,     7,   271,   272,     7,
    1635,  1057,     7,  1059,     7,     7,     7,     7,     7,  1644,
    1066,  1779,     7,  1781,   266,  1650,  1651,   266,   266,   273,
     273,   266,   273,   273,     7,   271,  1661,  1662,   272,     7,
     273,   273,   273,  1668,   273,   273,   273,   266,   711,   248,
     249,   273,  1098,   252,   253,   254,   255,   256,   257,   258,
     259,   273,   266,   262,   273,   273,   271,   272,   266,  1694,
    1695,   273,   273,   273,     3,     4,     5,   272,   272,     3,
     273,   273,  1782,   746,   747,    14,    15,   273,   273,   273,
    1715,  1439,   273,   273,   271,   271,   271,   271,  1859,  1860,
    1861,  1862,   273,   272,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   273,
     271,   272,   242,   243,   244,   798,   246,   247,   248,   249,
     273,   273,   252,   253,   254,   255,   256,   257,   258,     3,
       4,     5,   262,   115,  1779,   266,  1781,     7,   268,   273,
      14,    15,   272,     7,   266,     7,     7,   265,     7,     3,
       7,     7,     7,    27,    28,    29,    30,     7,  1224,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   242,   243,   244,     7,   246,   247,
     248,   249,   271,     7,   252,   253,   254,   255,   256,   257,
     258,     7,     7,     7,   262,     7,     7,  1852,     7,     7,
     268,   271,   271,     5,     7,   271,   271,   271,   271,   215,
    1940,   266,   265,  2004,     7,  2006,  2007,   242,   243,   244,
       5,   246,   247,   248,   249,   271,   271,   252,   253,   254,
     255,   256,   257,   258,   271,   271,   133,   262,     7,   266,
     273,     5,   266,   268,  1899,     5,     5,     5,     3,  1325,
     266,     7,     7,   266,     7,   266,  1332,   266,   266,   273,
       7,   273,     7,   273,     7,     7,   273,  1343,  2059,     7,
    1346,   273,   266,  2003,     7,  1351,   969,   266,   273,   972,
     273,  1936,   273,   273,   266,   266,   273,  1363,  1943,     5,
     273,   984,   271,     7,     7,   271,   255,     5,     5,     5,
    1376,   260,  1378,   271,   263,   271,   271,   271,     3,   272,
      65,   268,   271,  2043,   266,   266,    71,   266,  1011,   266,
    1013,     7,  1015,   266,   272,     7,  1402,   272,     7,    84,
       7,    86,     7,     7,     7,  2065,     7,     7,     7,     7,
       7,     7,     7,    98,     7,     7,     7,   102,     7,     7,
    1426,  1427,   138,  1429,     7,     7,  1049,   271,   273,   114,
    2015,   266,  2017,     7,  2019,  2020,     6,   271,     7,     7,
    1446,   255,     7,     7,     7,     5,   260,   114,  2033,   263,
     135,     3,     4,     5,     6,   273,     7,     9,   272,   266,
     273,    19,    14,    15,   273,   273,  2051,   273,   266,     7,
     273,   271,     5,   266,   266,    27,    28,    29,    30,    31,
     271,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   273,   271,   271,   194,
       7,   196,   273,   271,   273,     7,     3,     4,     5,   242,
     243,   244,     7,   246,   247,   248,   249,    14,    15,   252,
     253,   254,   255,   256,   257,   258,   271,     7,     7,   262,
       7,     7,     7,     5,     5,   268,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     5,    63,    64,   265,   242,
     243,   244,     7,   246,   247,   248,   249,   271,   266,   252,
     253,   254,   255,   256,   257,   258,     5,   266,     5,   262,
     266,     5,    11,    12,    13,   268,     5,    16,    17,    18,
     266,    20,   272,     7,     7,     7,     7,     7,   272,     7,
     273,     7,  1628,    32,     7,     7,     7,     7,  1634,     7,
     271,     8,  1255,     7,     7,  1641,   271,     7,   125,     7,
       7,     7,   242,   243,   244,   132,   246,   247,   248,   249,
       7,  1657,   252,   253,   254,   255,   256,   257,   258,     7,
     271,   271,   262,   271,     7,   271,     7,    65,   268,     7,
     272,     7,  1678,     7,     7,     7,   135,   271,   242,   243,
     244,   271,   246,   247,   248,   249,  1692,   239,   252,   253,
     254,   255,   256,   257,   258,   273,   271,   273,   262,   266,
     266,   272,     7,   255,   268,  1328,  1329,  1330,   260,   271,
     271,   263,   271,  1336,   271,  1338,  1339,   272,  1341,   271,
     273,  1344,  1345,   272,   271,     5,  1349,   272,   272,  1352,
    1353,  1354,  1355,   272,   271,  1358,  1359,  1360,     7,  1362,
     272,  2079,   581,  1366,  1367,   810,   694,  1397,  1371,  1372,
    1676,   937,  1070,   938,  1209,   861,  1379,  1380,  1381,  1382,
    1383,   248,   546,  1553,  1045,  1388,    -1,   254,   255,    -1,
      -1,    -1,    -1,   260,    -1,    -1,   263,    -1,    -1,   266,
     267,   268,   269,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,   200,   201,   202,   203,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    -1,    -1,    -1,   242,   243,
     244,     7,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,  1831,    -1,    -1,   262,    -1,
    1836,    -1,  1838,    -1,   268,    -1,    -1,    -1,   272,  1845,
      -1,   125,   126,   127,   128,   129,   130,   131,    -1,   133,
     134,    -1,  1858,    -1,    -1,    -1,    -1,    -1,    -1,  1865,
      -1,    -1,     3,     4,     5,   242,   243,   244,   245,   246,
     247,   248,   249,    14,    15,   252,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,   262,    -1,    -1,    -1,    -1,
      -1,  1897,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    63,    64,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1559,  1560,    -1,    -1,
      -1,  1564,  1565,    -1,  1567,  1568,    -1,  1953,    -1,    -1,
      -1,  1574,    -1,  1576,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1971,    -1,    -1,    -1,    -1,
      -1,  1594,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    14,    15,   272,    -1,
      -1,   132,    -1,    -1,  1617,  1618,  1619,  1620,  1621,    27,
      28,    29,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       7,    -1,    -1,  1656,    -1,    -1,    -1,  1660,    -1,    -1,
    1663,  1664,    -1,    -1,    -1,    -1,   242,   243,   244,  1672,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,     7,    -1,    -1,   262,    -1,   246,   247,
     248,   249,   268,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,     7,  1710,  1711,  1712,
     268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1721,  1722,
    1723,  1724,  1725,    -1,     3,     4,     5,   248,    -1,    -1,
      -1,    -1,    -1,   254,   255,    14,    15,    -1,    -1,   260,
      -1,    -1,   263,    -1,    -1,    -1,    -1,   268,   269,    -1,
     271,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,  1782,
      -1,   242,   243,   244,  1787,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,   216,    -1,
      -1,    -1,   220,    -1,  1817,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1826,  1827,  1828,  1829,    -1,    -1,  1832,
      84,  1834,    86,    87,    88,    -1,    -1,    -1,    -1,  1842,
    1843,    -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,   260,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   271,  1867,  1868,  1869,    -1,  1871,    -1,
      -1,   125,   126,   127,   128,   129,   130,   131,    -1,   133,
     134,    -1,    -1,    -1,    -1,   242,   243,   244,    -1,   246,
     247,   248,   249,  1896,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,
    1913,   268,    -1,    -1,    -1,    -1,  1919,    -1,   242,   243,
     244,    -1,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,  1940,   262,  1942,
      -1,   242,   243,   244,   268,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,    -1,  1972,
    1973,  1974,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,   260,    -1,    -1,   263,    -1,    -1,    -1,    -1,   268,
      -1,    -1,   242,   243,   244,   245,   246,   247,   248,   249,
    2003,    -1,   252,   253,   254,   255,   256,   257,   258,   259,
      -1,  2014,   262,    -1,    -1,    -1,   266,    -1,   272,    -1,
    2023,    -1,    -1,  2026,   245,   246,   247,   248,   249,     7,
      -1,   252,   253,   254,   255,   256,   257,   258,   259,    -1,
    2043,   262,     5,    -1,    -1,    -1,    -1,  2050,    11,    12,
      13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,  2065,  2066,     3,     4,     5,     6,    -1,    32,
       9,    -1,    -1,    -1,  2077,    14,    15,    -1,  2081,    -1,
      -1,    -1,    -1,  2086,    -1,    -1,  2089,    -1,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,    -1,   166,    -1,    -1,   169,    -1,    -1,   172,
      -1,    -1,   175,    -1,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,   201,    -1,
      -1,   204,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,   242,   243,   244,    -1,   246,   247,
     248,   249,    -1,    32,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,     7,    -1,    -1,
     268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    -1,    -1,     7,    -1,    -1,     5,    -1,   272,
      -1,    -1,    -1,    11,    12,    13,   255,    -1,    16,    17,
      18,   260,    20,    -1,   263,    -1,    -1,    -1,    -1,   268,
      -1,    -1,   271,    -1,    32,    -1,    -1,    -1,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,     7,   252,   253,
     254,   255,   256,   257,   258,   259,    -1,    -1,   262,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,   273,
      -1,   255,    -1,    -1,    -1,    -1,   260,    -1,    -1,   263,
      -1,     7,    -1,    -1,    -1,    -1,   145,   271,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,    -1,   166,    -1,    -1,
     169,    -1,    -1,   172,    -1,    -1,   175,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,   201,    -1,    -1,   204,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,    -1,   166,    -1,
      -1,   169,    -1,    -1,   172,    -1,    -1,   175,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,   201,     5,    -1,   204,    -1,    -1,    -1,
      11,    12,    13,   272,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,   242,   243,   244,    -1,   246,   247,   248,   249,
      -1,    32,   252,   253,   254,   255,   256,   257,   258,   242,
     243,   244,   262,   246,   247,   248,   249,    -1,   268,   252,
     253,   254,   255,   256,   257,   258,     7,    -1,    -1,   262,
      -1,    -1,    -1,    -1,     5,   268,    -1,    -1,    -1,    -1,
      11,    12,    13,    -1,   272,    16,    17,    18,    -1,    20,
      -1,    -1,   242,   243,   244,    -1,   246,   247,   248,   249,
      -1,    32,   252,   253,   254,   255,   256,   257,   258,   242,
     243,   244,   262,   246,   247,   248,   249,    -1,   268,   252,
     253,   254,   255,   256,   257,   258,   242,   243,   244,   262,
     246,   247,   248,   249,     7,   268,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,     7,   268,    -1,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,    -1,   169,    -1,
      -1,   172,    -1,    -1,   175,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,
     201,    -1,    -1,   204,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,    -1,   169,    -1,
      -1,   172,    -1,    -1,   175,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,
     201,     5,    -1,   204,    -1,    -1,    -1,    11,    12,    13,
      -1,   272,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,   242,   243,   244,    -1,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,     8,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,   272,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
     243,   244,    -1,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,   242,   243,   244,   262,
     246,   247,   248,   249,    -1,   268,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,   145,   268,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,    -1,   166,    -1,    -1,   169,    -1,    -1,   172,    -1,
      -1,   175,    -1,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,    -1,    -1,
     204,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,    -1,   166,    -1,    -1,   169,    -1,    -1,   172,    -1,
      -1,   175,    -1,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,     5,    -1,
     204,    -1,    -1,    -1,    11,    12,    13,    -1,   272,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,   243,   244,    32,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,     8,
      -1,    -1,   262,    -1,   264,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,   272,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,    -1,   166,
      -1,    -1,   169,    -1,    -1,   172,    -1,    -1,   175,    -1,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,   201,    -1,    -1,   204,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,    -1,   166,
      -1,    -1,   169,    -1,    -1,   172,    -1,    -1,   175,    -1,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,   201,     5,    -1,   204,    -1,    -1,
      -1,    11,    12,    13,    -1,   272,    16,    17,    18,    -1,
      20,    -1,    -1,   242,   243,   244,    -1,   246,   247,   248,
     249,    -1,    32,   252,   253,   254,   255,   256,   257,   258,
     242,   243,   244,   262,   246,   247,   248,   249,    -1,   268,
     252,   253,   254,   255,   256,   257,   258,     8,    -1,    -1,
     262,    -1,    -1,    -1,    -1,     5,   268,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,   272,    16,    17,    18,   255,
      20,    -1,    -1,    -1,   260,    -1,    -1,   263,     3,     4,
       5,     6,    32,   244,    -1,   246,   247,   248,   249,    14,
      15,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,     8,   268,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     8,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,    -1,   166,    -1,    -1,   169,
      -1,    -1,   172,    -1,    -1,   175,    -1,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,    -1,   196,    -1,    -1,    -1,
      -1,   201,    -1,    -1,   204,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,    -1,   166,    -1,    -1,   169,
      -1,    -1,   172,    -1,    -1,   175,    -1,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,    -1,   196,    -1,    -1,    -1,
      -1,   201,     5,    -1,   204,    -1,    -1,    -1,    11,    12,
      13,    -1,   272,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,   242,   243,   244,    -1,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,     8,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    -1,   272,    16,    17,    18,    -1,    20,    -1,    -1,
     255,    -1,    -1,    -1,    -1,   260,    -1,    -1,   263,    32,
     242,   243,   244,    -1,   246,   247,   248,   249,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,    -1,   268,   242,   243,   244,
      -1,   246,   247,   248,   249,    -1,     8,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,    -1,   145,   268,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,    -1,   166,    -1,    -1,   169,    -1,    -1,   172,
      -1,    -1,   175,    -1,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,   201,    -1,
      -1,   204,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,    -1,   166,    -1,    -1,   169,    -1,    -1,   172,
      -1,    -1,   175,    -1,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,   201,     5,
      -1,   204,    -1,    -1,    -1,    11,    12,    13,    -1,   272,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   243,   244,    32,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
       3,     4,     5,   262,    -1,    -1,    -1,    -1,    -1,   268,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,   272,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
     242,   243,   244,    -1,   246,   247,   248,   249,    -1,    72,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,    -1,
     166,    -1,    -1,   169,    -1,    -1,   172,    -1,    -1,   175,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,    -1,    -1,
     196,     3,     4,     5,    -1,   201,    -1,    -1,   204,    -1,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    78,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    16,    17,    18,    -1,    20,   272,    22,    23,    24,
      25,   244,   245,   246,   247,   248,   249,    32,    -1,   252,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,   262,
      -1,    -1,   255,    -1,    -1,    -1,    -1,   260,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,   175,    -1,    -1,   102,    -1,    -1,
     242,   243,   244,    -1,   246,   247,   248,   249,    -1,   114,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   205,    -1,   268,    -1,    -1,    -1,
     135,   273,    -1,    -1,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,    -1,   242,
     243,   244,    -1,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,   194,
     273,   196,    -1,   255,    -1,    -1,    -1,    -1,   260,    -1,
      -1,   263,   242,   243,   244,    -1,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,   242,   243,   244,   268,   246,
     247,   248,   249,   273,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,
     244,   268,   246,   247,   248,   249,   273,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,   242,   243,   244,   268,   246,   247,   248,   249,   273,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,   242,   243,   244,   268,   246,   247,
     248,   249,   273,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,   244,
     268,   246,   247,   248,   249,   273,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
     242,   243,   244,   268,   246,   247,   248,   249,   273,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,   242,   243,   244,   268,   246,   247,   248,
     249,   273,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,   242,   243,   244,   268,
     246,   247,   248,   249,   273,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,   242,
     243,   244,   268,   246,   247,   248,   249,   273,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,   242,   243,   244,   268,   246,   247,   248,   249,
     273,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,   242,   243,   244,   268,   246,
     247,   248,   249,   273,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,
     244,   268,   246,   247,   248,   249,   273,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,   242,   243,   244,   268,   246,   247,   248,   249,   273,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,   242,   243,   244,   268,   246,   247,
     248,   249,   273,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,   244,
     268,   246,   247,   248,   249,   273,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
     242,   243,   244,   268,   246,   247,   248,   249,   273,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,   242,   243,   244,   268,   246,   247,   248,
     249,   273,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,   242,   243,   244,   268,
     246,   247,   248,   249,   273,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,   242,
     243,   244,   268,   246,   247,   248,   249,   273,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,   242,   243,   244,   268,   246,   247,   248,   249,
     273,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,   242,   243,   244,   268,   246,
     247,   248,   249,   273,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,
     244,   268,   246,   247,   248,   249,   273,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,   242,   243,   244,   268,   246,   247,   248,   249,   273,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,   242,   243,   244,   268,   246,   247,
     248,   249,   273,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,   244,
     268,   246,   247,   248,   249,   273,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
     242,   243,   244,   268,   246,   247,   248,   249,   273,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,   242,   243,   244,   268,   246,   247,   248,
     249,   273,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,   242,   243,   244,   268,
     246,   247,   248,   249,   273,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,   242,
     243,   244,   268,   246,   247,   248,   249,   273,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,   242,   243,   244,   268,   246,   247,   248,   249,
     273,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,   242,   243,   244,   268,   246,
     247,   248,   249,   273,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,
     244,   268,   246,   247,   248,   249,   273,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,   242,   243,   244,   268,   246,   247,   248,   249,   273,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,   242,   243,   244,   268,   246,   247,
     248,   249,   273,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,   242,   243,   244,
     268,   246,   247,   248,   249,   273,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,    -1,    -1,   268,   242,   243,   244,   272,   246,   247,
     248,   249,    -1,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,
     268,   242,   243,   244,   272,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,   242,   243,
     244,   272,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,    -1,    -1,    -1,   268,   242,   243,   244,   272,   246,
     247,   248,   249,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,
      -1,   268,   242,   243,   244,   272,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,   268,   242,
     243,   244,   272,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,    -1,    -1,   268,   242,   243,   244,   272,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,    -1,   268,   242,   243,   244,   272,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,   268,
     242,   243,   244,   272,   246,   247,   248,   249,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,    -1,   268,   242,   243,   244,
     272,   246,   247,   248,   249,    -1,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,    -1,    -1,   268,   242,   243,   244,   272,   246,   247,
     248,   249,    -1,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,
     268,   242,   243,   244,   272,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,   242,   243,
     244,   272,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,    -1,    -1,    -1,   268,   242,   243,   244,   272,   246,
     247,   248,   249,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,
      -1,   268,   242,   243,   244,   272,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,   268,   242,
     243,   244,   272,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,    -1,    -1,   268,   242,   243,   244,   272,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,    -1,   268,   242,   243,   244,   272,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,   264,   242,   243,   244,   268,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,   264,   242,
     243,   244,   268,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
     266,    -1,   268,   242,   243,   244,    -1,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,
     242,   243,   244,    -1,   246,   247,   248,   249,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,
      -1,   246,   247,   248,   249,    -1,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,   242,   243,   244,    -1,   246,   247,
     248,   249,    -1,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,
     268,   242,   243,   244,    -1,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,
     244,    -1,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,   246,
     247,   248,   249,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,   242,   243,   244,    -1,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,   242,
     243,   244,    -1,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
     266,    -1,   268,   242,   243,   244,    -1,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,
     242,   243,   244,    -1,   246,   247,   248,   249,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,
      -1,   246,   247,   248,   249,    -1,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,   242,   243,   244,    -1,   246,   247,
     248,   249,    -1,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,
     268,   242,   243,   244,    -1,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,
     244,    -1,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,   246,
     247,   248,   249,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,   242,   243,   244,    -1,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,   242,
     243,   244,    -1,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
     266,    -1,   268,   242,   243,   244,    -1,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,   264,   242,   243,   244,   268,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,   264,   242,
     243,   244,   268,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
     266,    -1,   268,   242,   243,   244,    -1,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,
     242,   243,   244,    -1,   246,   247,   248,   249,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,
      -1,   246,   247,   248,   249,    -1,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,   242,   243,   244,    -1,   246,   247,
     248,   249,    -1,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,
     268,   242,   243,   244,    -1,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,
     244,    -1,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,   246,
     247,   248,   249,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,   242,   243,   244,    -1,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,   242,
     243,   244,    -1,   246,   247,   248,   249,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,
     246,   247,   248,   249,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,
     266,    -1,   268,   242,   243,   244,    -1,   246,   247,   248,
     249,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,
     242,   243,   244,    -1,   246,   247,   248,   249,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,   244,
      -1,   246,   247,   248,   249,    -1,    -1,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,   242,   243,   244,    -1,   246,   247,
     248,   249,    -1,    -1,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,
     268,   242,   243,   244,    -1,   246,   247,   248,   249,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   266,    -1,   268,   242,   243,
     244,    -1,   246,   247,   248,   249,    -1,    -1,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,   262,    -1,
      -1,    -1,   266,    -1,   268,   242,   243,   244,    -1,   246,
     247,   248,   249,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,
      -1,   268,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,   259,
      -1,    -1,   262,    -1,   264,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,   259,    -1,    -1,   262
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   277,   278,     0,   279,   280,     5,    11,    12,    13,
      16,    17,    18,    20,    22,    23,    24,    25,    32,    65,
      71,    84,    86,    98,   102,   114,   135,   194,   196,   281,
     282,   440,   453,   454,   462,   463,   275,   263,   268,   463,
     263,     7,     5,   263,   263,     5,     7,    22,    23,    24,
      39,   201,     7,     3,     7,    65,    71,    84,    86,    98,
     102,   114,   135,   194,   196,     6,     9,    10,   240,   463,
     464,   465,   265,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   463,   275,   241,   271,     6,     7,     7,
     463,   133,     3,     4,    14,    15,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   255,   260,   263,   457,   458,   463,   466,   467,   457,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   265,   263,   455,
     283,   339,   324,   330,   346,   304,   369,   395,   425,   436,
     198,   271,     5,     6,    27,    28,    29,    30,    31,   239,
     271,   457,   459,   461,   465,   457,   264,   273,   264,   271,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   457,   457,   457,     8,   242,   243,   244,   246,
     247,   248,   249,   252,   253,   254,   255,   256,   257,   258,
     262,   268,   264,   464,   464,   266,   273,   300,     5,    66,
     272,   284,   285,   453,   463,   271,   272,   340,   453,   271,
     272,   271,   272,   271,   272,   347,   453,    70,   272,   305,
     453,   463,   271,   272,   370,   453,   271,   272,   396,   453,
     271,   272,   426,   453,   271,   272,   437,   453,   463,   457,
     271,     7,   265,   265,   265,   265,   265,   265,   457,   460,
     461,     8,     7,     7,   272,     7,   460,     7,   265,   457,
     464,   463,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   264,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   273,
     264,   273,     7,   463,   271,   301,   303,   265,   241,   254,
     265,   341,   325,   331,   348,   265,   265,   371,   397,   427,
     438,   441,   272,   272,   460,     5,     5,   457,   457,   464,
     464,   272,   273,   457,   264,   457,     8,   273,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   273,
     266,   266,   266,   266,   266,   266,   273,   273,   273,     8,
     264,     8,   464,   460,   241,   271,   268,   457,   241,   241,
     299,     5,    72,   268,   288,   292,   241,   457,    85,    89,
      99,   272,   342,    85,    99,   272,   326,    85,    91,    99,
     272,   332,    71,    89,    99,   100,   108,   110,   272,   349,
     453,   306,     5,   266,   288,   290,   463,    89,    99,   115,
     119,   272,   372,    99,   136,   143,   272,   398,   453,    99,
     115,   137,   195,   272,   428,    99,   143,   197,   199,   222,
     272,   439,   271,   272,   266,   273,   273,   273,   266,   266,
     457,   461,     8,     7,   266,   457,   464,   457,   457,   457,
     457,   457,   457,   266,   264,     6,   457,   457,   457,   272,
       5,   288,   288,   266,   300,     3,   263,   271,   274,   296,
     298,   463,     7,   265,   288,   266,     5,   271,     5,     5,
     463,   271,     5,   271,    26,   102,   256,   307,   308,     5,
     271,     5,     5,   463,   271,   271,   271,   266,   300,   241,
     266,     5,     5,   463,   271,   271,     5,   463,   271,   399,
       5,   463,   271,   463,   463,   463,   271,   463,   464,     5,
     442,     5,   457,   457,     7,     7,   457,     7,     8,   272,
     266,   266,   266,   266,   266,   264,   272,   272,     7,     7,
       7,   463,     8,   457,   297,   460,    67,   293,   296,     7,
     241,   271,   343,     7,   271,   301,     7,   327,     7,   333,
     265,   265,   256,     7,   311,   312,     7,   366,     7,   301,
       7,   350,   356,   363,     7,     5,   307,   241,     7,   301,
       7,   373,   379,   301,     7,   400,   271,   301,     7,   429,
       7,     7,     7,   442,     7,     7,     7,   272,   443,   266,
     273,   273,   457,   241,   271,   457,   264,   272,   300,   274,
     289,    69,   343,   271,   272,   453,     7,   271,   272,   271,
     272,   457,     5,   256,     5,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      64,   125,   132,   248,   254,   255,   260,   263,   268,   269,
     271,   313,   316,   394,   456,   458,   463,   466,   467,   271,
     272,   453,     7,   271,   272,   453,   271,   272,   271,   272,
     453,   271,     7,   307,     7,   271,   272,   453,   120,   121,
     122,   123,   272,   380,   453,     7,   271,   272,   453,   407,
       7,   271,   272,   453,   272,   200,   201,   202,   203,   444,
     453,   457,   457,   272,   271,   457,     8,     8,   255,   298,
     294,   300,   286,   272,   344,   328,   334,   266,   266,   394,
     265,   320,   265,   265,   265,   265,   317,   318,     5,   313,
     313,   313,   313,     3,     3,     5,   146,   220,     5,   463,
     242,   243,   244,   245,   246,   247,   248,   249,   252,   253,
     254,   255,   256,   257,   258,   259,   262,   268,   270,   265,
     321,   321,   367,   351,   357,   364,   457,     7,   374,   271,
     271,   271,   271,   401,     5,    18,   145,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   166,   169,   172,   175,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   196,   201,   204,   272,   408,   453,   430,
     265,   265,   265,   265,   266,   266,   272,   272,   457,   457,
     298,   266,     5,    68,   295,   265,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    83,    89,   102,   272,   345,
      72,    84,   272,   329,    85,    89,    90,   272,   335,   394,
     265,   394,   313,     5,     5,   265,   265,   249,   264,   463,
     272,   314,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,     3,   457,
     266,   267,   313,   322,   271,   323,   101,   111,   112,   113,
     272,   368,    99,   101,   102,   103,   104,   105,   106,   107,
     272,   352,    99,   101,   109,   272,   358,    89,    99,   101,
     272,   365,   272,    84,    86,    87,    89,    99,   116,   117,
     118,   133,   193,   265,   272,   375,   385,   385,   389,   381,
      89,    99,   137,   138,   139,   140,   141,   142,   272,   402,
     453,   265,   463,   265,   265,   307,   265,   265,   265,   265,
     265,   265,   265,   265,   265,     7,   265,   265,   265,   265,
     265,   265,   271,   265,   271,   265,   271,   271,   265,   265,
     265,   265,   265,   265,   265,   265,   271,   271,   265,   265,
     265,   265,   265,   271,   271,   265,   409,   410,    78,    99,
     272,   431,   446,   463,     6,   446,   290,     6,   241,     8,
     463,   296,   268,   290,   290,   290,   290,   265,   307,   265,
     307,   307,   307,   271,   463,     5,   265,   307,    67,   290,
       5,   271,     5,     5,   266,   311,   266,   273,   265,   266,
     311,   311,   265,   272,   313,   266,   266,   273,    72,   460,
       5,   292,   295,   463,     5,     5,     5,   271,   271,   309,
     309,   290,   290,     5,     5,   271,   361,     5,   271,   359,
       5,   463,     5,     5,     5,     5,     5,   110,   120,   463,
     463,   457,     3,   290,   459,   377,    84,    86,    87,    88,
     125,   126,   127,   128,   129,   130,   131,   133,   134,   272,
     386,   393,   272,   133,   272,   390,   393,    89,   113,   271,
     272,   382,     5,   463,   271,   403,   463,   464,   459,   464,
     271,   405,   463,   463,   463,     7,   307,   307,     7,   463,
     463,   463,   463,   463,   463,   463,   463,   463,   307,   463,
     463,   463,   463,   457,   414,   457,   416,   457,   418,   420,
     290,   464,   463,   463,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,     5,   463,   265,   265,
     271,   463,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   449,   265,   448,   273,   449,   445,   450,   271,   457,
     296,     7,     7,     7,     7,   307,     7,   307,     7,     7,
       7,   458,     7,     7,   307,     7,     7,     7,   323,   336,
       7,     7,   273,   313,   319,   271,   266,   273,   311,     8,
     313,   265,   272,     7,     7,     7,     7,     7,     7,   301,
     271,   353,     5,   307,   310,     7,     7,     7,     7,     7,
     362,     7,   360,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,   376,     7,     7,     7,     7,   311,
       5,     5,     5,   265,   290,     7,   265,   290,   265,     5,
       5,   383,     7,     7,   404,     7,     7,     7,     7,   406,
       7,     7,   266,   266,   266,   273,   273,   273,   273,   273,
     273,   273,   273,   266,   273,   266,   273,   266,   273,   273,
     266,   273,   143,   146,   163,   164,   165,   272,   415,   273,
     143,   146,   163,   164,   167,   168,   272,   417,   273,    21,
      91,   143,   170,   171,   272,   419,    21,    91,   136,   143,
     144,   170,   173,   174,   272,   421,   273,   266,   273,   273,
     273,   273,   273,   273,   272,   272,   273,   273,   273,   273,
     273,   273,   273,   266,   309,   411,   463,   411,   432,     7,
     290,   290,   271,   290,   271,   271,   271,   271,   271,   450,
     290,   254,   255,   256,   257,   273,   447,   239,   307,   450,
     273,   266,   273,   451,   272,   287,   273,   273,   300,   273,
       7,   271,   272,   290,   266,   311,   457,     3,   266,   315,
     290,     7,   115,     7,   300,   272,   273,   272,   300,   272,
     300,   265,   378,   266,     7,     7,     7,     3,     7,   387,
       7,   391,     7,     7,    81,    82,   119,   133,   272,   384,
     272,   300,   272,   300,     7,   271,     7,   307,   463,   463,
     457,   457,   457,   463,   307,     7,   290,     7,   457,     7,
     457,   457,     7,   457,   271,   307,   457,   457,   307,   457,
     271,   307,   457,   457,   457,   457,   457,   457,   457,   271,
     457,   307,   457,   457,   463,   271,   271,   457,   457,   271,
     307,     7,   307,   459,   459,   459,   457,   459,     7,     7,
     463,   463,   457,   463,   463,   290,     5,     7,   412,   412,
       5,   120,   272,   453,   215,   307,   271,   460,   271,   271,
     271,   266,   266,     5,   265,   450,   266,   133,     7,    78,
     139,   175,   205,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   273,   307,   307,   458,
     307,   337,   266,   266,   273,   266,   313,   266,     5,     5,
     307,     5,     5,   463,     7,     7,   266,   311,   311,   394,
     394,   394,   290,   463,   463,   407,   266,   273,   273,   273,
     273,   273,   273,   266,   273,   266,   266,   266,   273,   407,
       7,     7,     7,     7,   273,   407,     7,     7,     7,     7,
       7,   273,     7,     7,   407,     7,     7,     7,     7,     7,
     407,   407,     7,     7,   422,   266,   273,   273,   266,   266,
     273,   273,   273,   273,   273,   266,   266,   266,   273,   272,
     273,   266,   273,   413,   266,   271,   271,     5,   273,   460,
     272,   460,   460,   460,     7,   448,   464,   266,     7,   290,
     459,   459,   271,     5,   249,   250,   464,   457,   457,   459,
     457,     5,   452,   452,   452,   457,     5,   271,   457,   309,
     271,   271,   271,   271,     3,   268,   266,   266,   272,   266,
      92,    93,    94,    95,    96,    97,   272,   338,   266,   457,
     272,     7,   272,   266,     7,   388,   392,     7,     7,     7,
       7,   272,     7,   459,   457,   459,   457,   457,   463,     7,
     463,     7,     7,     7,   307,   272,   307,   272,   307,   272,
     272,   272,   271,   272,     7,   457,   307,     7,     7,   457,
     464,   464,   457,   457,     7,     7,     7,   464,     7,   138,
       7,   216,   220,   459,     7,   433,   433,   271,   307,   272,
     272,   272,   272,   273,   266,     7,   450,   307,   464,   464,
       6,   460,   457,   457,   457,   460,   296,     7,     7,     7,
       7,     5,   457,   457,   457,   457,   457,   271,   272,   114,
       7,   273,   273,    19,   266,   266,   273,   273,   273,   273,
     266,   273,   273,   266,   273,   423,   273,   266,   273,   266,
     266,   266,   273,   273,   272,   273,   464,   464,   459,    84,
      86,    89,   133,   272,   393,   434,   272,   457,   273,   271,
     271,   271,   271,   450,   266,   273,   272,   273,   273,   273,
     272,   273,     7,     7,     7,     7,     7,     7,   457,     5,
     311,   394,   271,     7,     7,   457,   457,   457,   457,     7,
     307,   457,   271,   457,    21,    89,    91,   102,   115,   133,
     272,   424,   307,     7,   307,     7,     7,     7,   457,   457,
       7,   307,   272,   273,     5,     5,     5,   290,   265,   273,
     307,   460,   460,   460,   460,   266,     7,   307,   457,   457,
     457,   457,   272,   301,   266,   266,   407,   266,   266,   266,
     273,   266,   273,   407,   266,     5,     5,   457,   307,     5,
     290,   266,   266,   273,   266,   266,   272,     7,   457,     7,
       7,     7,     7,   435,   457,   272,   272,   272,   272,   272,
       7,   273,   273,   273,   273,   266,     7,     7,     7,   272,
       7,     7,     7,   459,   271,   457,   272,   271,     7,     7,
       7,     7,     7,     7,     7,     7,   307,   271,   271,     7,
     272,   311,   272,   271,   271,   272,   271,   271,   307,   457,
     457,   457,     7,   354,   273,   407,   266,   407,   266,   407,
     407,     7,   266,   271,   459,   460,   271,   460,   460,   272,
     272,   272,   272,    65,   457,   272,   271,   272,     7,   272,
     272,     7,   457,   273,   272,   457,   272,   272,   291,   463,
     273,   407,     7,     7,   272,   459,   272,   272,   272,   271,
       7,   271,   302,   457,   272,   273,   271,   460,   355,   272,
     266,   459,   457,   272,   135,     7,   272,   273,   272,     5,
     457,   271,   302,   272,   457,     7,   273,   272,   457,   273,
     457,   272
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
#line 342 "GetDP.y"
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
#line 358 "GetDP.y"
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
#line 382 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; ;}
    break;

  case 19:
#line 406 "GetDP.y"
    {            
      strcpy(yyincludename, (yyvsp[(2) - (2)].c)); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 421 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 423 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 425 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 427 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 429 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 431 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 433 "GetDP.y"
    { Help((yyvsp[(2) - (3)].c)); ;}
    break;

  case 28:
#line 435 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 437 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 439 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 441 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 443 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 445 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 447 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 449 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 451 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 453 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 455 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 457 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 459 "GetDP.y"
    { Print_Object((yyvsp[(2) - (3)].i), &Problem_S); ;}
    break;

  case 43:
#line 494 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (4)].c), 0, 0) ; ;}
    break;

  case 44:
#line 497 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 2, (yyvsp[(2) - (5)].i)) ; ;}
    break;

  case 45:
#line 503 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 0, 0) ;
    ;}
    break;

  case 48:
#line 513 "GetDP.y"
    { Add_Group_2(&Group_S, (yyvsp[(1) - (5)].c), 1, 0, 0, 0) ; ;}
    break;

  case 50:
#line 521 "GetDP.y"
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
#line 531 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = (yyvsp[(10) - (10)].l) ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)(yyvsp[(3) - (10)].d) ; 
    ;}
    break;

  case 52:
#line 538 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = (yyvsp[(14) - (18)].l) ; 
      Add_Group(&Group_S, (yyvsp[(1) - (18)].c), 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)(yyvsp[(16) - (18)].d) ; 
    ;}
    break;

  case 53:
#line 548 "GetDP.y"
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
#line 557 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = (yyvsp[(5) - (6)].l) ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 55:
#line 565 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = (yyvsp[(2) - (2)].l) ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 56:
#line 576 "GetDP.y"
    {
      (yyval.i) = (yyvsp[(1) - (1)].i) ;
    ;}
    break;

  case 57:
#line 581 "GetDP.y"
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
#line 598 "GetDP.y"
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
#line 628 "GetDP.y"
    { (yyval.i) = REGION ; ;}
    break;

  case 60:
#line 631 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_Type, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 61:
#line 643 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l) ; ;}
    break;

  case 62:
#line 644 "GetDP.y"
    { (yyval.l) = NULL ; ;}
    break;

  case 63:
#line 651 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  (yyval.l) = NULL ; ;}
    break;

  case 64:
#line 654 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; (yyval.l) = (yyvsp[(3) - (3)].l) ; ;}
    break;

  case 65:
#line 657 "GetDP.y"
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
#line 675 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_SuppList, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 67:
#line 688 "GetDP.y"
    {
      (yyval.l) = List_Create(((List_Nbr((yyvsp[(1) - (1)].l)) > 0)? List_Nbr((yyvsp[(1) - (1)].l)) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(1) - (1)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(1) - (1)].l), i) ) ;
    ;}
    break;

  case 68:
#line 695 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 69:
#line 702 "GetDP.y"
    {
      (yyval.l) = List_Create( 5, 5, sizeof(int)) ;
    ;}
    break;

  case 70:
#line 707 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (3)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(3) - (3)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(3) - (3)].l), i) ) ;
    ;}
    break;

  case 71:
#line 714 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (4)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(4) - (4)].l)) ; i++)
	List_Suppress((yyval.l), (int *)List_Pointer((yyvsp[(4) - (4)].l), i), fcmp_int ) ;
    ;}
    break;

  case 72:
#line 725 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &((yyvsp[(1) - (1)].i))) ;
    ;}
    break;

  case 73:
#line 731 "GetDP.y"
    {
      i = (int)(yyvsp[(2) - (3)].d) ;
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
    ;}
    break;

  case 74:
#line 738 "GetDP.y"
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
#line 749 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(yyvsp[(1) - (3)].i) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?(j<=(yyvsp[(3) - (3)].d)):(j>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 76:
#line 758 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)(yyvsp[(2) - (5)].d) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?(j<=(yyvsp[(5) - (5)].d)):(j>=(yyvsp[(5) - (5)].d)) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 77:
#line 766 "GetDP.y"
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
#line 780 "GetDP.y"
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
#line 793 "GetDP.y"
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
#line 832 "GetDP.y"
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
#line 842 "GetDP.y"
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
#line 853 "GetDP.y"
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
#line 868 "GetDP.y"
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
#line 894 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(3) - (4)].d) ; ;}
    break;

  case 88:
#line 899 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 89:
#line 900 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 90:
#line 905 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 94:
#line 924 "GetDP.y"
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
#line 944 "GetDP.y"
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
#line 995 "GetDP.y"
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
#line 1005 "GetDP.y"
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
#line 1028 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = (yyvsp[(3) - (4)].d) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 101:
#line 1034 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (4)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", (yyvsp[(3) - (4)].c)) ;
      Free((yyvsp[(3) - (4)].c)) ;  (yyval.i) = i ;
    ;}
    break;

  case 102:
#line 1040 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 103:
#line 1043 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = (yyvsp[(2) - (2)].l) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 104:
#line 1048 "GetDP.y"
    { Expression_S.Type = UNDEFINED_EXP ; 
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;}
    break;

  case 105:
#line 1055 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1066 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &((yyvsp[(1) - (1)].i))) ; ;}
    break;

  case 108:
#line 1069 "GetDP.y"
    { List_Add(ListOfInt_L, &((yyvsp[(3) - (3)].i))) ; ;}
    break;

  case 109:
#line 1075 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1079 "GetDP.y"
    { (yyval.l) = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1091 "GetDP.y"
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
#line 1104 "GetDP.y"
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
#line 1118 "GetDP.y"
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
#line 1133 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1139 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1145 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1151 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1157 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1163 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1169 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1175 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1181 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1187 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1193 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1199 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1205 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1211 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1217 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1223 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1229 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1236 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1244 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1257 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1263 "GetDP.y"
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
#line 1337 "GetDP.y"
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
#line 1371 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (1)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (1)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1380 "GetDP.y"
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
#line 1392 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1394 "GetDP.y"
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
#line 1406 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1408 "GetDP.y"
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
#line 1420 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1422 "GetDP.y"
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
#line 1436 "GetDP.y"
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
#line 1448 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1454 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1460 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1462 "GetDP.y"
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
#line 1491 "GetDP.y"
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
#line 1517 "GetDP.y"
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
#line 1530 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1536 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1543 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[(2) - (2)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1549 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[(3) - (3)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1556 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[(2) - (2)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1563 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[(3) - (3)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1570 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1576 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 162:
#line 1585 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 163:
#line 1586 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 164:
#line 1587 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 165:
#line 1592 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 166:
#line 1593 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 167:
#line 1599 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 168:
#line 1602 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 169:
#line 1605 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 170:
#line 1620 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 171:
#line 1625 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 172:
#line 1632 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 174:
#line 1641 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 175:
#line 1646 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 176:
#line 1653 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 177:
#line 1656 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 178:
#line 1663 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 180:
#line 1673 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 181:
#line 1676 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 182:
#line 1679 "GetDP.y"
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
#line 1717 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 184:
#line 1723 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 185:
#line 1730 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 187:
#line 1743 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 188:
#line 1750 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 189:
#line 1753 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 190:
#line 1760 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 191:
#line 1763 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 192:
#line 1770 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 194:
#line 1782 "GetDP.y"
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
#line 1792 "GetDP.y"
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
#line 1802 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 197:
#line 1809 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 198:
#line 1812 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 199:
#line 1819 "GetDP.y"
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
#line 1835 "GetDP.y"
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
#line 1883 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 203:
#line 1886 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 204:
#line 1889 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 205:
#line 1892 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 206:
#line 1895 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 207:
#line 1906 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 209:
#line 1916 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 211:
#line 1926 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 213:
#line 1939 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 214:
#line 1946 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 215:
#line 1954 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 216:
#line 1963 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 217:
#line 1966 "GetDP.y"
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
#line 1984 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 219:
#line 1989 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 220:
#line 1994 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 221:
#line 2003 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 223:
#line 2017 "GetDP.y"
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
#line 2027 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 225:
#line 2032 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 226:
#line 2038 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 227:
#line 2043 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2051 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2059 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2068 "GetDP.y"
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
#line 2086 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2095 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2103 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2111 "GetDP.y"
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
#line 2121 "GetDP.y"
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
#line 2131 "GetDP.y"
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
#line 2141 "GetDP.y"
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
#line 2161 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 240:
#line 2172 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 242:
#line 2183 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 245:
#line 2197 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 246:
#line 2204 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 247:
#line 2212 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 248:
#line 2221 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 249:
#line 2224 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 250:
#line 2227 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 251:
#line 2230 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 252:
#line 2237 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 253:
#line 2243 "GetDP.y"
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
#line 2260 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 255:
#line 2269 "GetDP.y"
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
#line 2290 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 258:
#line 2293 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 259:
#line 2298 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 260:
#line 2303 "GetDP.y"
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
#line 2317 "GetDP.y"
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
#line 2337 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 263:
#line 2342 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 264:
#line 2347 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 265:
#line 2352 "GetDP.y"
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
#line 2386 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 268:
#line 2390 "GetDP.y"
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
#line 2400 "GetDP.y"
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
#line 2464 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 271:
#line 2470 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 272:
#line 2479 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 274:
#line 2490 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 275:
#line 2497 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 276:
#line 2500 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 277:
#line 2507 "GetDP.y"
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
#line 2523 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 279:
#line 2529 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 280:
#line 2532 "GetDP.y"
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
#line 2551 "GetDP.y"
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
#line 2563 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 283:
#line 2570 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 284:
#line 2575 "GetDP.y"
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
#line 2590 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 286:
#line 2596 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 287:
#line 2602 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 288:
#line 2611 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 290:
#line 2623 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 291:
#line 2630 "GetDP.y"
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
#line 2641 "GetDP.y"
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
#line 2655 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 294:
#line 2660 "GetDP.y"
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
#line 2697 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 296:
#line 2706 "GetDP.y"
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
#line 2722 "GetDP.y"
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
#line 2755 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 300:
#line 2758 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 301:
#line 2761 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 302:
#line 2776 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 304:
#line 2786 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 306:
#line 2797 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 308:
#line 2808 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 309:
#line 2815 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 310:
#line 2823 "GetDP.y"
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
#line 2835 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 313:
#line 2841 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 314:
#line 2846 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 316:
#line 2857 "GetDP.y"
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
#line 2880 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 319:
#line 2883 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 320:
#line 2887 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 321:
#line 2890 "GetDP.y"
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
#line 2900 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 323:
#line 2904 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 324:
#line 2912 "GetDP.y"
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
#line 2936 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 326:
#line 2941 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 327:
#line 2947 "GetDP.y"
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
#line 3258 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 329:
#line 3263 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 330:
#line 3272 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 331:
#line 3281 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 332:
#line 3290 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 334:
#line 3298 "GetDP.y"
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
#line 3338 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 336:
#line 3343 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 337:
#line 3348 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 338:
#line 3357 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 339:
#line 3360 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 340:
#line 3363 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 341:
#line 3366 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 342:
#line 3377 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 344:
#line 3388 "GetDP.y"
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
#line 3398 "GetDP.y"
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
#line 3408 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 347:
#line 3422 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 349:
#line 3434 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 350:
#line 3436 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 351:
#line 3438 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 352:
#line 3440 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 353:
#line 3448 "GetDP.y"
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
#line 3473 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 356:
#line 3481 "GetDP.y"
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
#line 3560 "GetDP.y"
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
#line 3614 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 359:
#line 3619 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 360:
#line 3628 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 361:
#line 3637 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 362:
#line 3642 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 363:
#line 3651 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 364:
#line 3662 "GetDP.y"
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
#line 3691 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 367:
#line 3696 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 368:
#line 3704 "GetDP.y"
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
#line 3759 "GetDP.y"
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
#line 3776 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 371:
#line 3777 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 372:
#line 3778 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 373:
#line 3779 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 374:
#line 3780 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 375:
#line 3781 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 376:
#line 3782 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 377:
#line 3783 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 378:
#line 3790 "GetDP.y"
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
#line 3811 "GetDP.y"
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
#line 3835 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 382:
#line 3845 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 384:
#line 3856 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 386:
#line 3868 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 387:
#line 3875 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 388:
#line 3883 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 389:
#line 3886 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 390:
#line 3888 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 392:
#line 3896 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 393:
#line 3901 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 394:
#line 3906 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 395:
#line 3915 "GetDP.y"
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
#line 3935 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 398:
#line 3938 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 399:
#line 3947 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 400:
#line 3950 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 401:
#line 3955 "GetDP.y"
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
#line 3966 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 403:
#line 3971 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 404:
#line 3976 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 406:
#line 3987 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 407:
#line 3996 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 408:
#line 4003 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 409:
#line 4006 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 410:
#line 4018 "GetDP.y"
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
#line 4028 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 412:
#line 4034 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 413:
#line 4037 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 414:
#line 4049 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 415:
#line 4057 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 416:
#line 4070 "GetDP.y"
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
#line 4092 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 418:
#line 4099 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 419:
#line 4105 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 420:
#line 4111 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 421:
#line 4117 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 422:
#line 4125 "GetDP.y"
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
#line 4147 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 424:
#line 4154 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 425:
#line 4160 "GetDP.y"
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
#line 4171 "GetDP.y"
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

  case 427:
#line 4183 "GetDP.y"
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
#line 4196 "GetDP.y"
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
#line 4211 "GetDP.y"
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
#line 4226 "GetDP.y"
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
#line 4241 "GetDP.y"
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
#line 4261 "GetDP.y"
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
#line 4282 "GetDP.y"
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
#line 4294 "GetDP.y"
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
#line 4314 "GetDP.y"
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

  case 436:
#line 4327 "GetDP.y"
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

  case 437:
#line 4344 "GetDP.y"
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

  case 438:
#line 4363 "GetDP.y"
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

  case 439:
#line 4384 "GetDP.y"
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

  case 440:
#line 4398 "GetDP.y"
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

  case 441:
#line 4412 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 442:
#line 4419 "GetDP.y"
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

  case 443:
#line 4431 "GetDP.y"
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

  case 444:
#line 4443 "GetDP.y"
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

  case 445:
#line 4455 "GetDP.y"
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

  case 446:
#line 4467 "GetDP.y"
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

  case 447:
#line 4479 "GetDP.y"
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

  case 448:
#line 4513 "GetDP.y"
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

  case 449:
#line 4526 "GetDP.y"
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

  case 450:
#line 4540 "GetDP.y"
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

  case 451:
#line 4553 "GetDP.y"
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

  case 452:
#line 4565 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 454:
#line 4574 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 456:
#line 4583 "GetDP.y"
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

  case 457:
#line 4594 "GetDP.y"
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

  case 458:
#line 4606 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 459:
#line 4616 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 460:
#line 4624 "GetDP.y"
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

  case 461:
#line 4637 "GetDP.y"
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

  case 462:
#line 4650 "GetDP.y"
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

  case 463:
#line 4664 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 464:
#line 4674 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 465:
#line 4684 "GetDP.y"
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

  case 466:
#line 4698 "GetDP.y"
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

  case 467:
#line 4712 "GetDP.y"
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

  case 468:
#line 4731 "GetDP.y"
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

  case 469:
#line 4749 "GetDP.y"
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

  case 470:
#line 4760 "GetDP.y"
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

  case 471:
#line 4775 "GetDP.y"
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

  case 472:
#line 4790 "GetDP.y"
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

  case 473:
#line 4805 "GetDP.y"
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

  case 474:
#line 4820 "GetDP.y"
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

  case 475:
#line 4835 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 476:
#line 4846 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 477:
#line 4851 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 478:
#line 4861 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 480:
#line 4871 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 481:
#line 4874 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 482:
#line 4884 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 483:
#line 4900 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 485:
#line 4916 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 486:
#line 4920 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 487:
#line 4924 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 488:
#line 4928 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 489:
#line 4933 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 490:
#line 4944 "GetDP.y"
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

  case 492:
#line 4961 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 493:
#line 4965 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4969 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 495:
#line 4973 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 496:
#line 4977 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 497:
#line 4982 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 498:
#line 4993 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 500:
#line 5008 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 501:
#line 5012 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 5016 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 503:
#line 5020 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 504:
#line 5024 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 505:
#line 5035 "GetDP.y"
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

  case 507:
#line 5053 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 508:
#line 5057 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 509:
#line 5061 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 510:
#line 5065 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 511:
#line 5070 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 512:
#line 5080 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 513:
#line 5086 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 514:
#line 5092 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 515:
#line 5102 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 516:
#line 5105 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 517:
#line 5110 "GetDP.y"
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

  case 519:
#line 5128 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 520:
#line 5138 "GetDP.y"
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

  case 521:
#line 5167 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 522:
#line 5170 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 523:
#line 5173 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 524:
#line 5181 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 525:
#line 5198 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 527:
#line 5210 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 529:
#line 5219 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 531:
#line 5232 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 532:
#line 5239 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 533:
#line 5247 "GetDP.y"
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

  case 534:
#line 5260 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 535:
#line 5265 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 536:
#line 5271 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 537:
#line 5274 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 538:
#line 5277 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 539:
#line 5283 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 541:
#line 5294 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 542:
#line 5297 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 543:
#line 5303 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 544:
#line 5308 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 545:
#line 5314 "GetDP.y"
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

  case 546:
#line 5326 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 547:
#line 5331 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 549:
#line 5345 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 550:
#line 5352 "GetDP.y"
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

  case 551:
#line 5380 "GetDP.y"
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

  case 552:
#line 5391 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 553:
#line 5396 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 554:
#line 5405 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 555:
#line 5422 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 557:
#line 5434 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 559:
#line 5441 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 561:
#line 5453 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 562:
#line 5460 "GetDP.y"
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

  case 563:
#line 5472 "GetDP.y"
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

  case 564:
#line 5483 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 565:
#line 5488 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 566:
#line 5494 "GetDP.y"
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

  case 567:
#line 5511 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 568:
#line 5521 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 569:
#line 5524 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 570:
#line 5528 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 571:
#line 5541 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 572:
#line 5546 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 573:
#line 5551 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 574:
#line 5560 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 575:
#line 5569 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 576:
#line 5578 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 577:
#line 5584 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 578:
#line 5589 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 579:
#line 5597 "GetDP.y"
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

  case 580:
#line 5609 "GetDP.y"
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

  case 581:
#line 5632 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 582:
#line 5633 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 583:
#line 5634 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 584:
#line 5635 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 585:
#line 5641 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 586:
#line 5643 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 587:
#line 5649 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 588:
#line 5655 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 589:
#line 5662 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 590:
#line 5671 "GetDP.y"
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

  case 591:
#line 5693 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 592:
#line 5701 "GetDP.y"
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

  case 593:
#line 5712 "GetDP.y"
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

  case 594:
#line 5726 "GetDP.y"
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

  case 595:
#line 5747 "GetDP.y"
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

  case 596:
#line 5774 "GetDP.y"
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

  case 597:
#line 5805 "GetDP.y"
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

  case 598:
#line 5825 "GetDP.y"
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

  case 600:
#line 5861 "GetDP.y"
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

  case 601:
#line 5875 "GetDP.y"
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

  case 602:
#line 5889 "GetDP.y"
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

  case 603:
#line 5903 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 604:
#line 5907 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 605:
#line 5911 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 606:
#line 5915 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 607:
#line 5919 "GetDP.y"
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

  case 608:
#line 5929 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 609:
#line 5934 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 610:
#line 5939 "GetDP.y"
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

  case 611:
#line 5959 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 612:
#line 5963 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 613:
#line 5970 "GetDP.y"
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

  case 614:
#line 5980 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 615:
#line 5989 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 616:
#line 5998 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 617:
#line 6005 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 618:
#line 6013 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 619:
#line 6017 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 620:
#line 6026 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 621:
#line 6030 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 622:
#line 6034 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 623:
#line 6042 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 624:
#line 6048 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 625:
#line 6052 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 626:
#line 6060 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 627:
#line 6067 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 628:
#line 6075 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 629:
#line 6082 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 630:
#line 6090 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 631:
#line 6097 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 632:
#line 6105 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 633:
#line 6109 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 634:
#line 6118 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 635:
#line 6124 "GetDP.y"
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

  case 636:
#line 6174 "GetDP.y"
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

  case 637:
#line 6189 "GetDP.y"
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

  case 638:
#line 6205 "GetDP.y"
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

  case 639:
#line 6225 "GetDP.y"
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

  case 640:
#line 6245 "GetDP.y"
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

  case 641:
#line 6283 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 642:
#line 6287 "GetDP.y"
    {
    ;}
    break;

  case 645:
#line 6303 "GetDP.y"
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

  case 646:
#line 6318 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 647:
#line 6324 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 648:
#line 6330 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6336 "GetDP.y"
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

  case 650:
#line 6352 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 651:
#line 6357 "GetDP.y"
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

  case 652:
#line 6373 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 653:
#line 6378 "GetDP.y"
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

  case 654:
#line 6390 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 655:
#line 6400 "GetDP.y"
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

  case 656:
#line 6414 "GetDP.y"
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

  case 658:
#line 6440 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 659:
#line 6446 "GetDP.y"
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

  case 660:
#line 6460 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 661:
#line 6466 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 662:
#line 6476 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 663:
#line 6477 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 664:
#line 6478 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 665:
#line 6479 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 666:
#line 6480 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 667:
#line 6481 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 668:
#line 6482 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 669:
#line 6483 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 670:
#line 6484 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 671:
#line 6485 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 672:
#line 6486 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 673:
#line 6487 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 674:
#line 6488 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 675:
#line 6489 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 676:
#line 6490 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 677:
#line 6491 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 678:
#line 6492 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 679:
#line 6493 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 680:
#line 6494 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 681:
#line 6495 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 682:
#line 6496 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 683:
#line 6500 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 684:
#line 6501 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 685:
#line 6502 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 686:
#line 6503 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 687:
#line 6504 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 688:
#line 6505 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 689:
#line 6506 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 690:
#line 6507 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 691:
#line 6508 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 692:
#line 6509 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 693:
#line 6510 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 694:
#line 6511 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 695:
#line 6512 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 696:
#line 6513 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 697:
#line 6514 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 698:
#line 6515 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 699:
#line 6516 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 700:
#line 6517 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 701:
#line 6518 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 702:
#line 6519 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 703:
#line 6520 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 704:
#line 6521 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 705:
#line 6522 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 706:
#line 6523 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6524 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 708:
#line 6525 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6526 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 710:
#line 6527 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6528 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 712:
#line 6529 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 713:
#line 6530 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 714:
#line 6531 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 715:
#line 6532 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 716:
#line 6533 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 717:
#line 6534 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 718:
#line 6535 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 719:
#line 6536 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 720:
#line 6537 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 721:
#line 6539 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 722:
#line 6541 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 723:
#line 6543 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 724:
#line 6545 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 725:
#line 6550 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 726:
#line 6551 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 727:
#line 6552 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 728:
#line 6553 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 729:
#line 6554 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 730:
#line 6555 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 731:
#line 6556 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 732:
#line 6558 "GetDP.y"
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

  case 733:
#line 6576 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 734:
#line 6579 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 735:
#line 6585 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 736:
#line 6588 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 737:
#line 6595 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 738:
#line 6601 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 739:
#line 6604 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 740:
#line 6607 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 741:
#line 6619 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 742:
#line 6625 "GetDP.y"
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

  case 743:
#line 6636 "GetDP.y"
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

  case 744:
#line 6652 "GetDP.y"
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

  case 745:
#line 6674 "GetDP.y"
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

  case 746:
#line 6689 "GetDP.y"
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

  case 747:
#line 6727 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 748:
#line 6735 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 749:
#line 6747 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 750:
#line 6755 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 751:
#line 6769 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 752:
#line 6772 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 753:
#line 6779 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 754:
#line 6782 "GetDP.y"
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

  case 755:
#line 6797 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 756:
#line 6802 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 757:
#line 6807 "GetDP.y"
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

  case 758:
#line 6826 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 759:
#line 6836 "GetDP.y"
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

  case 760:
#line 6849 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;

  case 761:
#line 6861 "GetDP.y"
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
#line 12254 "GetDP.tab.c"
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


#line 6873 "GetDP.y"



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


