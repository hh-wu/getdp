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
     tTimeLoopTheta = 415,
     tTime0 = 416,
     tTimeMax = 417,
     tTheta = 418,
     tTimeLoopNewmark = 419,
     tBeta = 420,
     tGamma = 421,
     tIterativeLoop = 422,
     tNbrMaxIteration = 423,
     tRelaxationFactor = 424,
     tIterativeTimeReduction = 425,
     tDivisionCoefficient = 426,
     tChangeOfState = 427,
     tChangeOfCoordinates = 428,
     tChangeOfCoordinates2 = 429,
     tSystemCommand = 430,
     tGenerateFMMGroups = 431,
     tGenerateOnly = 432,
     tGenerateOnlyJac = 433,
     tSolveJac_AdaptRelax = 434,
     tSaveSolutionExtendedMH = 435,
     tSaveSolutionMHtoTime = 436,
     tInit_MovingBand2D = 437,
     tMesh_MovingBand2D = 438,
     tGenerate_MH_Moving = 439,
     tGenerate_MH_Moving_Separate = 440,
     tAdd_MH_Moving = 441,
     tGenerateGroup = 442,
     tGenerateJacGroup = 443,
     tSaveMesh = 444,
     tDeformeMesh = 445,
     tDummyFrequency = 446,
     tPostProcessing = 447,
     tNameOfSystem = 448,
     tPostOperation = 449,
     tNameOfPostProcessing = 450,
     tUsingPost = 451,
     tAppend = 452,
     tPlot = 453,
     tPrint = 454,
     tPrintGroup = 455,
     tEcho = 456,
     tWrite = 457,
     tAdapt = 458,
     tOnGlobal = 459,
     tOnRegion = 460,
     tOnElementsOf = 461,
     tOnGrid = 462,
     tOnSection = 463,
     tOnPoint = 464,
     tOnLine = 465,
     tOnPlane = 466,
     tOnBox = 467,
     tWithArgument = 468,
     tFile = 469,
     tDepth = 470,
     tDimension = 471,
     tComma = 472,
     tTimeStep = 473,
     tHarmonicToTime = 474,
     tFormat = 475,
     tHeader = 476,
     tFooter = 477,
     tSkin = 478,
     tSmoothing = 479,
     tTarget = 480,
     tSort = 481,
     tIso = 482,
     tNoNewLine = 483,
     tDecomposeInSimplex = 484,
     tChangeOfValues = 485,
     tTimeLegend = 486,
     tFrequencyLegend = 487,
     tEigenvalueLegend = 488,
     tEvaluationPoints = 489,
     tStore = 490,
     tLastTimeStepOnly = 491,
     tStr = 492,
     tDate = 493,
     tDEF = 494,
     tOR = 495,
     tAND = 496,
     tAPPROXEQUAL = 497,
     tNOTEQUAL = 498,
     tEQUAL = 499,
     tGREATERGREATER = 500,
     tLESSLESS = 501,
     tGREATEROREQUAL = 502,
     tLESSOREQUAL = 503,
     tCROSSPRODUCT = 504,
     UNARYPREC = 505,
     tSHOW = 506
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
#define tTimeLoopTheta 415
#define tTime0 416
#define tTimeMax 417
#define tTheta 418
#define tTimeLoopNewmark 419
#define tBeta 420
#define tGamma 421
#define tIterativeLoop 422
#define tNbrMaxIteration 423
#define tRelaxationFactor 424
#define tIterativeTimeReduction 425
#define tDivisionCoefficient 426
#define tChangeOfState 427
#define tChangeOfCoordinates 428
#define tChangeOfCoordinates2 429
#define tSystemCommand 430
#define tGenerateFMMGroups 431
#define tGenerateOnly 432
#define tGenerateOnlyJac 433
#define tSolveJac_AdaptRelax 434
#define tSaveSolutionExtendedMH 435
#define tSaveSolutionMHtoTime 436
#define tInit_MovingBand2D 437
#define tMesh_MovingBand2D 438
#define tGenerate_MH_Moving 439
#define tGenerate_MH_Moving_Separate 440
#define tAdd_MH_Moving 441
#define tGenerateGroup 442
#define tGenerateJacGroup 443
#define tSaveMesh 444
#define tDeformeMesh 445
#define tDummyFrequency 446
#define tPostProcessing 447
#define tNameOfSystem 448
#define tPostOperation 449
#define tNameOfPostProcessing 450
#define tUsingPost 451
#define tAppend 452
#define tPlot 453
#define tPrint 454
#define tPrintGroup 455
#define tEcho 456
#define tWrite 457
#define tAdapt 458
#define tOnGlobal 459
#define tOnRegion 460
#define tOnElementsOf 461
#define tOnGrid 462
#define tOnSection 463
#define tOnPoint 464
#define tOnLine 465
#define tOnPlane 466
#define tOnBox 467
#define tWithArgument 468
#define tFile 469
#define tDepth 470
#define tDimension 471
#define tComma 472
#define tTimeStep 473
#define tHarmonicToTime 474
#define tFormat 475
#define tHeader 476
#define tFooter 477
#define tSkin 478
#define tSmoothing 479
#define tTarget 480
#define tSort 481
#define tIso 482
#define tNoNewLine 483
#define tDecomposeInSimplex 484
#define tChangeOfValues 485
#define tTimeLegend 486
#define tFrequencyLegend 487
#define tEigenvalueLegend 488
#define tEvaluationPoints 489
#define tStore 490
#define tLastTimeStepOnly 491
#define tStr 492
#define tDate 493
#define tDEF 494
#define tOR 495
#define tAND 496
#define tAPPROXEQUAL 497
#define tNOTEQUAL 498
#define tEQUAL 499
#define tGREATERGREATER 500
#define tLESSLESS 501
#define tGREATEROREQUAL 502
#define tLESSOREQUAL 503
#define tCROSSPRODUCT 504
#define UNARYPREC 505
#define tSHOW 506




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.122 2008-02-27 17:51:28 dular Exp $ */
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
#line 787 "GetDP.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 800 "GetDP.tab.c"

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
#define YYLAST   7704

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  274
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  758
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2076

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   506

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   258,     2,   266,   267,   256,     2,     2,
     261,   262,   254,   252,   271,   253,   265,   255,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     246,     2,   247,   240,   272,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   263,     2,   264,   260,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   269,     2,   270,   273,     2,     2,     2,
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
     235,   236,   237,   238,   239,   241,   242,   243,   244,   245,
     248,   249,   250,   251,   257,   259,   268
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
    1680,  1692,  1698,  1706,  1712,  1730,  1744,  1760,  1772,  1786,
    1787,  1795,  1796,  1804,  1812,  1824,  1830,  1836,  1846,  1856,
    1866,  1872,  1878,  1890,  1900,  1915,  1930,  1938,  1951,  1962,
    1970,  1978,  1986,  1988,  1990,  1992,  1993,  1996,  2000,  2004,
    2007,  2008,  2011,  2015,  2019,  2023,  2027,  2032,  2033,  2036,
    2040,  2044,  2048,  2052,  2056,  2061,  2062,  2065,  2069,  2073,
    2077,  2081,  2086,  2087,  2090,  2094,  2098,  2102,  2106,  2110,
    2115,  2120,  2125,  2126,  2131,  2132,  2135,  2139,  2143,  2147,
    2151,  2155,  2159,  2160,  2163,  2167,  2169,  2170,  2173,  2177,
    2182,  2186,  2190,  2195,  2196,  2201,  2204,  2205,  2208,  2212,
    2217,  2218,  2224,  2230,  2233,  2234,  2237,  2238,  2245,  2249,
    2253,  2257,  2261,  2262,  2265,  2269,  2271,  2272,  2275,  2279,
    2283,  2287,  2291,  2296,  2297,  2306,  2307,  2308,  2312,  2320,
    2328,  2337,  2349,  2356,  2357,  2368,  2370,  2374,  2381,  2383,
    2385,  2387,  2389,  2390,  2394,  2396,  2399,  2402,  2415,  2418,
    2434,  2439,  2452,  2470,  2493,  2506,  2507,  2510,  2514,  2519,
    2524,  2528,  2531,  2534,  2538,  2542,  2546,  2550,  2554,  2557,
    2561,  2565,  2569,  2573,  2577,  2581,  2585,  2591,  2594,  2597,
    2601,  2611,  2615,  2618,  2628,  2631,  2641,  2644,  2654,  2660,
    2664,  2667,  2668,  2671,  2678,  2687,  2696,  2707,  2709,  2714,
    2716,  2718,  2724,  2729,  2734,  2742,  2747,  2755,  2761,  2765,
    2769,  2777,  2783,  2792,  2795,  2796,  2800,  2807,  2813,  2819,
    2821,  2823,  2825,  2827,  2829,  2831,  2833,  2835,  2837,  2839,
    2841,  2843,  2845,  2847,  2849,  2851,  2853,  2855,  2857,  2859,
    2861,  2863,  2867,  2870,  2873,  2877,  2881,  2885,  2889,  2893,
    2897,  2901,  2905,  2909,  2913,  2917,  2921,  2925,  2929,  2934,
    2939,  2944,  2949,  2954,  2959,  2964,  2969,  2974,  2979,  2986,
    2991,  2996,  3001,  3006,  3011,  3016,  3023,  3030,  3037,  3043,
    3045,  3047,  3050,  3052,  3054,  3056,  3058,  3060,  3062,  3064,
    3066,  3067,  3069,  3071,  3075,  3077,  3079,  3083,  3087,  3091,
    3097,  3101,  3106,  3111,  3118,  3127,  3136,  3142,  3148,  3150,
    3152,  3154,  3156,  3158,  3163,  3170,  3172,  3179,  3186
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     275,     0,    -1,    -1,   276,   277,    -1,    -1,    -1,   277,
     278,   279,    -1,    65,   269,   281,   270,    -1,   102,   269,
     302,   270,    -1,    71,   269,   337,   270,    -1,    84,   269,
     322,   270,    -1,    86,   269,   328,   270,    -1,    98,   269,
     344,   270,    -1,   114,   269,   367,   270,    -1,   135,   269,
     393,   270,    -1,   192,   269,   423,   270,    -1,   194,   269,
     434,   270,    -1,   438,    -1,   451,    -1,    25,   462,    -1,
     280,    -1,    22,     7,    -1,    22,   199,     7,    -1,    22,
      24,     7,    -1,    22,    39,     7,    -1,    22,    23,     7,
      -1,    22,    22,     7,    -1,    22,     5,     7,    -1,    23,
       7,    -1,    24,     7,    -1,    24,    65,     7,    -1,    24,
     102,     7,    -1,    24,    71,     7,    -1,    24,    84,     7,
      -1,    24,    86,     7,    -1,    24,    98,     7,    -1,    24,
     114,     7,    -1,    24,   135,     7,    -1,    24,   192,     7,
      -1,    24,   194,     7,    -1,    24,     3,     7,    -1,    -1,
     281,   282,    -1,   461,   239,   286,     7,    -1,     5,   301,
     239,   286,     7,    -1,     5,   299,   239,   286,     7,    -1,
      66,   263,   297,   264,     7,    -1,   283,    -1,   461,   252,
     239,   286,     7,    -1,   451,    -1,    -1,    -1,   461,   263,
     455,   264,   239,    69,   284,   263,   266,   294,   285,   271,
     266,   294,   271,   455,   264,     7,    -1,    -1,   290,   263,
     291,   287,   292,   264,    -1,   266,   294,    -1,   286,    -1,
     461,    -1,   461,   300,    -1,    72,    -1,     5,    -1,   294,
      -1,    67,    -1,    -1,   298,   293,   294,    -1,   298,    68,
     461,    -1,     5,    -1,   296,    -1,   269,   295,   270,    -1,
      -1,   295,   298,   296,    -1,   295,   298,   253,   296,    -1,
       3,    -1,   261,   455,   262,    -1,   272,   458,   272,    -1,
       3,     8,   455,    -1,   261,   455,   262,     8,   455,    -1,
       3,     8,   455,     8,   455,    -1,   261,   455,   262,     8,
     455,     8,   455,    -1,   461,    -1,    -1,   297,   298,   461,
      -1,   297,   298,   461,   239,   269,   270,    -1,   297,   298,
     461,   269,   455,   270,    -1,   297,   298,   461,   269,   455,
     270,   239,   269,   270,    -1,    -1,   271,    -1,   269,   266,
     455,   270,    -1,    -1,   269,   270,    -1,   269,   455,   270,
      -1,    -1,   302,   303,    -1,    70,   263,   304,   264,     7,
      -1,   461,   263,   264,   239,   305,     7,    -1,   461,   263,
     288,   264,   239,   305,     7,    -1,   451,    -1,    -1,   304,
     298,     5,    -1,   304,   298,     5,   269,   455,   270,    -1,
      26,   263,   455,   264,    -1,   102,   263,     5,   264,    -1,
      -1,   306,   309,    -1,   254,   254,   254,    -1,    -1,   269,
     308,   270,    -1,   305,    -1,   308,   271,   305,    -1,    -1,
     310,   311,    -1,   314,    -1,    -1,    -1,   311,   240,   312,
     311,     8,   313,   311,    -1,   311,   254,   311,    -1,   311,
     257,   311,    -1,    61,   263,   311,   271,   311,   264,    -1,
     311,   255,   311,    -1,   311,   252,   311,    -1,   311,   253,
     311,    -1,   311,   256,   311,    -1,   311,   260,   311,    -1,
     311,   246,   311,    -1,   311,   247,   311,    -1,   311,   251,
     311,    -1,   311,   250,   311,    -1,   311,   245,   311,    -1,
     311,   244,   311,    -1,   311,   243,   311,    -1,   311,   242,
     311,    -1,   311,   241,   311,    -1,   253,   311,    -1,   252,
     311,    -1,   258,   311,    -1,   261,   311,   262,    -1,   456,
      -1,   454,   319,   321,    -1,     5,   392,    -1,   392,    -1,
     392,   319,    -1,    -1,   125,   315,   263,   309,   264,    -1,
      -1,   132,   316,   263,   309,   271,     3,   264,    -1,    -1,
      63,   263,     5,   263,   317,   309,   264,   264,   269,   455,
     270,    -1,    64,   263,     5,   264,   269,   455,   271,   455,
     270,    -1,    58,   263,   392,   264,    -1,    60,   263,   392,
     264,    -1,    -1,    59,   318,   263,   309,   271,   288,   264,
      -1,   246,     5,   247,   263,   309,   264,    -1,   267,     5,
      -1,   267,   218,    -1,   267,   146,    -1,   267,     3,    -1,
     314,   266,     3,    -1,   266,     3,    -1,   314,   268,   455,
      -1,   464,    -1,   465,    -1,   263,   265,   264,    -1,   263,
     264,    -1,   263,   320,   264,    -1,   311,    -1,   320,   271,
     311,    -1,    -1,   269,   458,   270,    -1,   269,    72,   263,
     288,   264,   270,    -1,    -1,   322,   269,   323,   270,    -1,
      -1,   323,   324,    -1,    99,     5,     7,    -1,    85,   269,
     325,   270,    -1,    -1,   325,   269,   326,   270,    -1,    -1,
     326,   327,    -1,    72,   288,     7,    -1,    72,    67,     7,
      -1,    84,     5,   321,     7,    -1,    -1,   328,   269,   329,
     270,    -1,    -1,   329,   330,    -1,    99,     5,     7,    -1,
      91,   305,     7,    -1,    85,   269,   331,   270,    -1,    -1,
     331,   269,   332,   270,    -1,    -1,   332,   333,    -1,    89,
       5,     7,    -1,    90,     5,     7,    -1,    85,   269,   334,
     270,    -1,    -1,   334,   269,   335,   270,    -1,    -1,   335,
     336,    -1,    92,     5,     7,    -1,    93,   455,     7,    -1,
      94,   455,     7,    -1,    95,   455,     7,    -1,    96,   455,
       7,    -1,    97,   455,     7,    -1,    -1,   337,   338,    -1,
     269,   339,   270,    -1,   451,    -1,    -1,   339,   340,    -1,
      99,   461,     7,    -1,    99,     5,   299,     7,    -1,    89,
       5,     7,    -1,    85,   269,   341,   270,    -1,    85,     5,
     269,   341,   270,    -1,    -1,   341,   269,   342,   270,    -1,
     341,   451,    -1,    -1,   342,   343,    -1,    89,     5,     7,
      -1,    72,   288,     7,    -1,    73,   288,     7,    -1,    79,
     305,     7,    -1,    78,   305,     7,    -1,    83,   461,     7,
      -1,    80,   269,   456,   298,   456,   270,     7,    -1,    74,
     288,     7,    -1,    75,   288,     7,    -1,   102,   305,     7,
      -1,    77,   305,     7,    -1,    76,   305,     7,    -1,   102,
     263,   305,   271,   305,   264,     7,    -1,    77,   263,   305,
     271,   305,   264,     7,    -1,    76,   263,   305,   271,   305,
     264,     7,    -1,    -1,   344,   345,    -1,   269,   346,   270,
      -1,   451,    -1,    -1,   346,   347,    -1,   346,   451,    -1,
      99,   461,     7,    -1,    99,     5,   299,     7,    -1,    89,
       5,     7,    -1,   100,   269,   348,   270,    -1,   108,   269,
     354,   270,    -1,   110,   269,   361,   270,    -1,    71,   269,
     364,   270,    -1,    -1,   348,   269,   349,   270,    -1,   348,
     451,    -1,    -1,   349,   350,    -1,    99,     5,     7,    -1,
     101,     5,     7,    -1,   101,     5,   299,     7,    -1,   102,
       5,   351,     7,    -1,   103,   269,     5,   298,     5,   270,
       7,    -1,   104,   307,     7,    -1,   105,   307,     7,    -1,
     106,   288,     7,    -1,   107,   288,     7,    -1,    -1,    -1,
      -1,   269,   115,     5,     7,   114,     5,   299,     7,   352,
      65,   289,     7,   353,   135,     5,   300,     7,   270,    -1,
      -1,   354,   269,   355,   270,    -1,    -1,   355,   356,    -1,
      99,     5,     7,    -1,   109,   357,     7,    -1,   101,   359,
       7,    -1,     5,    -1,   269,   358,   270,    -1,    -1,   358,
     298,     5,    -1,     5,    -1,   269,   360,   270,    -1,    -1,
     360,   298,     5,    -1,    -1,   361,   269,   362,   270,    -1,
     361,   451,    -1,    -1,   362,   363,    -1,    99,   461,     7,
      -1,    89,     5,     7,    -1,   101,     5,     7,    -1,    -1,
     364,   269,   365,   270,    -1,   364,   451,    -1,    -1,   365,
     366,    -1,   101,     5,     7,    -1,   111,   290,     7,    -1,
     112,   293,     7,    -1,   113,   461,     7,    -1,    -1,   367,
     368,    -1,   269,   369,   270,    -1,   451,    -1,    -1,   369,
     370,    -1,    99,   461,     7,    -1,    99,     5,   299,     7,
      -1,    89,     5,     7,    -1,   115,   269,   371,   270,    -1,
     119,   269,   377,   270,    -1,    -1,   371,   269,   372,   270,
      -1,   371,   451,    -1,    -1,   372,   373,    -1,    99,   461,
       7,    -1,    89,   110,     7,    -1,    89,   120,     7,    -1,
      89,     5,     7,    -1,   191,   457,     7,    -1,    -1,   116,
     461,   374,   376,     7,    -1,   117,   455,     7,    -1,    -1,
     263,   375,   309,   264,     7,    -1,   133,   288,     7,    -1,
      86,     5,     7,    -1,    87,     5,     7,    -1,    84,     5,
       7,    -1,   118,     3,     7,    -1,    -1,   263,   461,   264,
      -1,    -1,   377,   378,    -1,   377,   451,    -1,   120,   269,
     383,   270,    -1,   121,   269,   383,   270,    -1,   122,   269,
     387,   270,    -1,   123,   269,   379,   270,    -1,    -1,   379,
     380,    -1,    89,     5,     7,    -1,   113,     5,     7,    -1,
     269,   381,   270,    -1,    -1,   381,   382,    -1,    81,   392,
       7,    -1,    82,   392,     7,    -1,   119,   392,     7,    -1,
     133,   288,     7,    -1,    -1,   383,   384,    -1,    -1,    -1,
     391,   263,   385,   309,   386,   271,   309,   264,     7,    -1,
     133,   288,     7,    -1,    84,     5,     7,    -1,    86,     5,
       7,    -1,   134,     7,    -1,    87,     5,     7,    -1,    88,
     263,     3,   264,     7,    -1,    -1,   387,   388,    -1,   133,
     288,     7,    -1,    -1,    -1,   391,   263,   389,   309,   390,
     271,   392,   264,     7,    -1,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,
     269,     5,   461,   270,    -1,   269,   461,   270,    -1,    -1,
     393,   394,    -1,   269,   395,   270,    -1,   451,    -1,    -1,
     395,   396,    -1,    99,   461,     7,    -1,    99,     5,   299,
       7,    -1,   136,   269,   398,   270,    -1,    -1,   143,   397,
     269,   405,   270,    -1,   451,    -1,    -1,   398,   269,   399,
     270,    -1,   398,   451,    -1,    -1,   399,   400,    -1,    99,
     461,     7,    -1,    89,     5,     7,    -1,   137,   401,     7,
      -1,   138,   462,     7,    -1,   141,   403,     7,    -1,   142,
     461,     7,    -1,   139,   457,     7,    -1,   140,   462,     7,
      -1,   451,    -1,   461,    -1,   269,   402,   270,    -1,    -1,
     402,   298,   461,    -1,   461,    -1,   269,   404,   270,    -1,
      -1,   404,   298,   461,    -1,    -1,   405,   406,    -1,     5,
     461,     7,    -1,   145,   305,     7,    -1,   160,   269,   412,
     270,    -1,   164,   269,   414,   270,    -1,   167,   269,   416,
     270,    -1,   170,   269,   418,   270,    -1,     5,   263,   461,
     264,     7,    -1,   145,   263,   305,   264,     7,    -1,   156,
       7,    -1,    18,   263,   305,   264,   269,   405,   270,    -1,
      18,   263,   305,   264,   269,   405,   270,    19,   269,   405,
     270,    -1,   147,   263,   461,   271,   305,   264,     7,    -1,
     176,   263,   461,   271,   305,   271,   305,   271,   305,   271,
     305,   264,     7,    -1,   176,   263,   461,   271,   305,   271,
     305,   271,   305,   264,     7,    -1,   176,   263,   461,   271,
     305,   271,   305,   264,     7,    -1,   177,   263,   461,   271,
     457,   264,     7,    -1,   178,   263,   461,   271,   457,   264,
       7,    -1,   154,   263,   461,   271,   305,   264,     7,    -1,
     155,   263,   461,   271,   288,   271,   461,   264,     7,    -1,
     155,   263,   461,   264,     7,    -1,   148,   263,   461,   271,
     461,   271,   457,   264,     7,    -1,   149,   263,   461,   271,
     461,   271,   455,   264,     7,    -1,   150,   263,   461,   271,
     455,   271,   457,   271,   455,   264,     7,    -1,   151,   263,
     461,   271,   455,   271,   455,   271,   455,   264,     7,    -1,
     152,   263,   461,   271,   455,   271,   455,   271,   455,   264,
       7,    -1,   157,   263,   305,   264,     7,    -1,   158,   263,
     461,   271,   455,   264,     7,    -1,   159,   263,   461,   264,
       7,    -1,   153,   263,   461,   271,   461,   271,   461,   271,
     455,   271,   457,   271,   455,   271,   455,   264,     7,    -1,
     160,   263,   455,   271,   455,   271,   305,   271,   305,   264,
     269,   405,   270,    -1,   164,   263,   455,   271,   455,   271,
     305,   271,   455,   271,   455,   264,   269,   405,   270,    -1,
     167,   263,   455,   271,   455,   271,   305,   264,   269,   405,
     270,    -1,   167,   263,   455,   271,   455,   271,   305,   271,
     455,   264,   269,   405,   270,    -1,    -1,   199,   407,   263,
     409,   410,   264,     7,    -1,    -1,   202,   408,   263,   409,
     410,   264,     7,    -1,   173,   263,   288,   271,   305,   264,
       7,    -1,   173,   263,   288,   271,   305,   271,   455,   271,
     305,   264,     7,    -1,   194,   263,   461,   264,     7,    -1,
     175,   263,   462,   264,     7,    -1,   179,   263,   461,   271,
     457,   271,   455,   264,     7,    -1,   180,   263,   461,   271,
     455,   271,   462,   264,     7,    -1,   181,   263,   461,   271,
     457,   271,   462,   264,     7,    -1,   182,   269,   461,   270,
       7,    -1,   183,   269,   461,   270,     7,    -1,   189,   269,
     461,   271,   288,   271,   462,   271,   305,   270,     7,    -1,
     189,   269,   461,   271,   288,   271,   462,   270,     7,    -1,
     184,   263,   461,   271,   461,   271,   455,   271,   455,   264,
     269,   405,   270,     7,    -1,   185,   263,   461,   271,   461,
     271,   455,   271,   455,   264,   269,   405,   270,     7,    -1,
     186,   263,   461,   271,   455,   264,     7,    -1,   190,   269,
       5,   271,     5,   271,   138,   462,   271,   455,   270,     7,
      -1,   190,   269,     5,   271,     5,   271,   138,   462,   270,
       7,    -1,   190,   269,     5,   271,     5,   270,     7,    -1,
     187,   263,   461,   271,   461,   264,     7,    -1,   188,   263,
     461,   271,   461,   264,     7,    -1,   451,    -1,   307,    -1,
     461,    -1,    -1,   410,   411,    -1,   271,   214,   462,    -1,
     271,   218,   457,    -1,   271,   457,    -1,    -1,   412,   413,
      -1,   161,   455,     7,    -1,   162,   455,     7,    -1,   146,
     305,     7,    -1,   163,   305,     7,    -1,   143,   269,   405,
     270,    -1,    -1,   414,   415,    -1,   161,   455,     7,    -1,
     162,   455,     7,    -1,   146,   305,     7,    -1,   165,   455,
       7,    -1,   166,   455,     7,    -1,   143,   269,   405,   270,
      -1,    -1,   416,   417,    -1,   168,   455,     7,    -1,    91,
     455,     7,    -1,   169,   305,     7,    -1,    21,   455,     7,
      -1,   143,   269,   405,   270,    -1,    -1,   418,   419,    -1,
     168,   455,     7,    -1,   171,   455,     7,    -1,    91,   455,
       7,    -1,    21,   455,     7,    -1,   136,   461,     7,    -1,
     172,   269,   420,   270,    -1,   143,   269,   405,   270,    -1,
     144,   269,   405,   270,    -1,    -1,   420,   269,   421,   270,
      -1,    -1,   421,   422,    -1,    89,     5,     7,    -1,   115,
       5,     7,    -1,   133,   288,     7,    -1,    91,   455,     7,
      -1,   102,   305,     7,    -1,    21,     5,     7,    -1,    -1,
     423,   424,    -1,   269,   425,   270,    -1,   451,    -1,    -1,
     425,   426,    -1,    99,   461,     7,    -1,    99,     5,   299,
       7,    -1,   137,   461,     7,    -1,   193,   461,     7,    -1,
     115,   269,   427,   270,    -1,    -1,   427,   269,   428,   270,
      -1,   427,   451,    -1,    -1,   428,   429,    -1,    99,   461,
       7,    -1,    78,   269,   430,   270,    -1,    -1,   430,   120,
     269,   431,   270,    -1,   430,     5,   269,   431,   270,    -1,
     430,   451,    -1,    -1,   431,   432,    -1,    -1,   391,   263,
     433,   309,   264,     7,    -1,    89,     5,     7,    -1,   133,
     288,     7,    -1,    84,     5,     7,    -1,    86,     5,     7,
      -1,    -1,   434,   435,    -1,   269,   436,   270,    -1,   451,
      -1,    -1,   436,   437,    -1,    99,   461,     7,    -1,   195,
     461,     7,    -1,   220,     5,     7,    -1,   197,   462,     7,
      -1,   143,   269,   440,   270,    -1,    -1,   194,   461,   196,
     461,   439,   269,   440,   270,    -1,    -1,    -1,   440,   441,
     442,    -1,   198,   263,   444,   447,   448,   264,     7,    -1,
     199,   263,   444,   447,   448,   264,     7,    -1,   199,   263,
       6,   271,   305,   448,   264,     7,    -1,   199,   263,     6,
     271,   237,   263,   462,   264,   448,   264,     7,    -1,   201,
     263,     6,   448,   264,     7,    -1,    -1,   200,   263,   288,
     443,   271,   133,   288,   448,   264,     7,    -1,   451,    -1,
     461,   446,   271,    -1,   461,   446,   445,     5,   446,   271,
      -1,   254,    -1,   255,    -1,   252,    -1,   253,    -1,    -1,
     263,   288,   264,    -1,   204,    -1,   205,   288,    -1,   206,
     288,    -1,   208,   269,   269,   458,   270,   269,   458,   270,
     269,   458,   270,   270,    -1,   207,   288,    -1,   207,   269,
     305,   271,   305,   271,   305,   270,   269,   457,   271,   457,
     271,   457,   270,    -1,   209,   269,   458,   270,    -1,   210,
     269,   269,   458,   270,   269,   458,   270,   270,   269,   455,
     270,    -1,   211,   269,   269,   458,   270,   269,   458,   270,
     269,   458,   270,   270,   269,   455,   271,   455,   270,    -1,
     212,   269,   269,   458,   270,   269,   458,   270,   269,   458,
     270,   269,   458,   270,   270,   269,   455,   271,   455,   271,
     455,   270,    -1,   205,   288,   213,     5,   269,   455,   271,
     455,   270,   269,   455,   270,    -1,    -1,   448,   449,    -1,
     271,   214,   462,    -1,   271,   214,   247,   462,    -1,   271,
     214,   248,   462,    -1,   271,   215,   455,    -1,   271,   223,
      -1,   271,   224,    -1,   271,   219,   455,    -1,   271,   220,
       5,    -1,   271,   221,   450,    -1,   271,   222,   450,    -1,
     271,   220,   450,    -1,   271,   217,    -1,   271,   216,   455,
      -1,   271,   218,   457,    -1,   271,   203,     5,    -1,   271,
     226,     5,    -1,   271,   225,   455,    -1,   271,    78,   457,
      -1,   271,   227,   455,    -1,   271,   227,   269,   458,   270,
      -1,   271,   228,    -1,   271,   229,    -1,   271,   139,   457,
      -1,   271,   173,   269,   305,   271,   305,   271,   305,   270,
      -1,   271,   230,   307,    -1,   271,   231,    -1,   271,   231,
     269,   455,   271,   455,   271,   455,   270,    -1,   271,   232,
      -1,   271,   232,   269,   455,   271,   455,   271,   455,   270,
      -1,   271,   233,    -1,   271,   233,   269,   455,   271,   455,
     271,   455,   270,    -1,   271,   234,   269,   458,   270,    -1,
     271,   235,     3,    -1,   271,   236,    -1,    -1,   450,     6,
      -1,    16,   261,   455,     8,   455,   262,    -1,    16,   261,
     455,     8,   455,     8,   455,   262,    -1,    16,     5,   133,
     269,   455,     8,   455,   270,    -1,    16,     5,   133,   269,
     455,     8,   455,     8,   455,   270,    -1,    17,    -1,    18,
     261,   455,   262,    -1,    20,    -1,   452,    -1,    32,   263,
     453,   264,     7,    -1,   461,   239,   457,     7,    -1,   461,
     239,     6,     7,    -1,   461,   239,   237,   263,   462,   264,
       7,    -1,   461,   239,   463,     7,    -1,   461,   239,    31,
     263,   462,   264,     7,    -1,    11,   261,     6,   262,     7,
      -1,    11,   461,     7,    -1,    11,   266,     7,    -1,    11,
     261,     6,   271,   458,   262,     7,    -1,    12,   261,   461,
     262,     7,    -1,    12,   261,   461,   262,   263,   455,   264,
       7,    -1,    13,     7,    -1,    -1,   453,   298,   461,    -1,
     453,   298,   461,   269,   455,   270,    -1,   453,   298,   461,
     239,   455,    -1,   453,   298,   461,   239,     6,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,   461,
      -1,   456,    -1,   261,   455,   262,    -1,   253,   455,    -1,
     258,   455,    -1,   455,   253,   455,    -1,   455,   252,   455,
      -1,   455,   254,   455,    -1,   455,   255,   455,    -1,   455,
     256,   455,    -1,   455,   260,   455,    -1,   455,   246,   455,
      -1,   455,   247,   455,    -1,   455,   251,   455,    -1,   455,
     250,   455,    -1,   455,   245,   455,    -1,   455,   244,   455,
      -1,   455,   242,   455,    -1,   455,   241,   455,    -1,    38,
     263,   455,   264,    -1,    39,   263,   455,   264,    -1,    40,
     263,   455,   264,    -1,    41,   263,   455,   264,    -1,    42,
     263,   455,   264,    -1,    43,   263,   455,   264,    -1,    44,
     263,   455,   264,    -1,    45,   263,   455,   264,    -1,    46,
     263,   455,   264,    -1,    47,   263,   455,   264,    -1,    48,
     263,   455,   271,   455,   264,    -1,    49,   263,   455,   264,
      -1,    50,   263,   455,   264,    -1,    51,   263,   455,   264,
      -1,    52,   263,   455,   264,    -1,    53,   263,   455,   264,
      -1,    54,   263,   455,   264,    -1,    55,   263,   455,   271,
     455,   264,    -1,    56,   263,   455,   271,   455,   264,    -1,
      57,   263,   455,   271,   455,   264,    -1,   455,   240,   455,
       8,   455,    -1,   464,    -1,   465,    -1,   455,   266,    -1,
       4,    -1,     3,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,   461,    -1,    -1,   455,    -1,   459,
      -1,   269,   458,   270,    -1,   455,    -1,   459,    -1,   458,
     271,   455,    -1,   458,   271,   459,    -1,   455,     8,   455,
      -1,   455,     8,   455,     8,   455,    -1,     5,   269,   270,
      -1,     5,   269,   458,   270,    -1,    27,   263,     5,   264,
      -1,    28,   263,     5,   271,     5,   264,    -1,    29,   263,
     455,   271,   455,   271,   455,   264,    -1,    30,   263,   455,
     271,   455,   271,   455,   264,    -1,     5,   273,   269,   455,
     270,    -1,   460,   273,   269,   455,   270,    -1,     5,    -1,
     460,    -1,     6,    -1,   461,    -1,   463,    -1,    10,   261,
     462,   262,    -1,    10,   261,   462,   271,   458,   262,    -1,
     238,    -1,     9,   263,   462,   271,   462,   264,    -1,    14,
     263,   462,   271,   462,   264,    -1,    15,   263,   461,   264,
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
    4109,  4115,  4123,  4145,  4152,  4158,  4169,  4181,  4194,  4209,
    4224,  4239,  4259,  4280,  4292,  4312,  4325,  4342,  4361,  4382,
    4396,  4410,  4417,  4429,  4440,  4474,  4487,  4501,  4514,  4528,
    4527,  4537,  4536,  4545,  4556,  4568,  4578,  4586,  4599,  4612,
    4626,  4636,  4646,  4660,  4674,  4692,  4711,  4722,  4737,  4752,
    4767,  4782,  4797,  4808,  4813,  4824,  4829,  4833,  4836,  4846,
    4863,  4872,  4878,  4882,  4886,  4890,  4895,  4907,  4917,  4923,
    4927,  4931,  4935,  4939,  4944,  4956,  4965,  4970,  4974,  4978,
    4982,  4986,  4998,  5010,  5015,  5019,  5023,  5027,  5032,  5042,
    5048,  5054,  5065,  5067,  5073,  5085,  5090,  5100,  5129,  5132,
    5135,  5143,  5161,  5167,  5172,  5177,  5182,  5190,  5194,  5201,
    5209,  5222,  5227,  5234,  5236,  5239,  5246,  5251,  5256,  5259,
    5266,  5270,  5276,  5288,  5294,  5303,  5308,  5307,  5342,  5353,
    5358,  5367,  5385,  5391,  5396,  5399,  5404,  5411,  5415,  5422,
    5434,  5445,  5450,  5457,  5456,  5484,  5487,  5486,  5503,  5508,
    5513,  5522,  5531,  5541,  5540,  5551,  5559,  5571,  5595,  5596,
    5597,  5598,  5604,  5605,  5611,  5617,  5624,  5631,  5655,  5662,
    5674,  5687,  5707,  5733,  5766,  5788,  5819,  5823,  5837,  5851,
    5865,  5869,  5873,  5877,  5881,  5891,  5896,  5901,  5921,  5925,
    5932,  5942,  5951,  5960,  5967,  5975,  5979,  5988,  5992,  5996,
    6004,  6010,  6014,  6022,  6029,  6037,  6044,  6052,  6059,  6067,
    6071,  6081,  6086,  6136,  6151,  6167,  6187,  6207,  6245,  6249,
    6253,  6263,  6265,  6280,  6286,  6292,  6298,  6314,  6319,  6335,
    6340,  6352,  6362,  6376,  6399,  6402,  6408,  6422,  6428,  6439,
    6440,  6441,  6442,  6443,  6444,  6445,  6446,  6447,  6448,  6449,
    6450,  6451,  6452,  6453,  6454,  6455,  6456,  6457,  6458,  6459,
    6463,  6464,  6465,  6466,  6467,  6468,  6469,  6470,  6471,  6472,
    6473,  6474,  6475,  6476,  6477,  6478,  6479,  6480,  6481,  6482,
    6483,  6484,  6485,  6486,  6487,  6488,  6489,  6490,  6491,  6492,
    6493,  6494,  6495,  6496,  6497,  6498,  6499,  6500,  6502,  6504,
    6506,  6508,  6513,  6514,  6515,  6516,  6517,  6518,  6519,  6520,
    6539,  6541,  6547,  6550,  6557,  6563,  6566,  6569,  6581,  6587,
    6598,  6614,  6636,  6651,  6689,  6697,  6709,  6717,  6731,  6734,
    6741,  6744,  6759,  6764,  6769,  6788,  6798,  6811,  6823
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
  "tTimeLoopTheta", "tTime0", "tTimeMax", "tTheta", "tTimeLoopNewmark",
  "tBeta", "tGamma", "tIterativeLoop", "tNbrMaxIteration",
  "tRelaxationFactor", "tIterativeTimeReduction", "tDivisionCoefficient",
  "tChangeOfState", "tChangeOfCoordinates", "tChangeOfCoordinates2",
  "tSystemCommand", "tGenerateFMMGroups", "tGenerateOnly",
  "tGenerateOnlyJac", "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH",
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
      63,   495,   496,   497,   498,   499,    60,    62,   500,   501,
     502,   503,    43,    45,    42,    47,    37,   504,    33,   505,
      94,    40,    41,    91,    93,    46,    35,    36,   506,   123,
     125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   274,   276,   275,   277,   278,   277,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   281,   281,   282,   282,   282,   282,   282,   282,   282,
     284,   285,   283,   287,   286,   286,   288,   288,   289,   290,
     290,   291,   291,   292,   292,   292,   293,   294,   294,   295,
     295,   295,   296,   296,   296,   296,   296,   296,   296,   296,
     297,   297,   297,   297,   297,   298,   298,   299,   300,   300,
     301,   302,   302,   303,   303,   303,   303,   304,   304,   304,
     305,   305,   306,   305,   305,   307,   307,   308,   308,   310,
     309,   311,   312,   313,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   314,   314,   314,   314,   314,
     314,   315,   314,   316,   314,   317,   314,   314,   314,   314,
     318,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   319,   319,   319,   320,   320,   321,   321,   321,
     322,   322,   323,   323,   324,   324,   325,   325,   326,   326,
     327,   327,   327,   328,   328,   329,   329,   330,   330,   330,
     331,   331,   332,   332,   333,   333,   333,   334,   334,   335,
     335,   336,   336,   336,   336,   336,   336,   337,   337,   338,
     338,   339,   339,   340,   340,   340,   340,   340,   341,   341,
     341,   342,   342,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   344,   344,
     345,   345,   346,   346,   346,   347,   347,   347,   347,   347,
     347,   347,   348,   348,   348,   349,   349,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   351,   352,   353,   351,
     354,   354,   355,   355,   356,   356,   356,   357,   357,   358,
     358,   359,   359,   360,   360,   361,   361,   361,   362,   362,
     363,   363,   363,   364,   364,   364,   365,   365,   366,   366,
     366,   366,   367,   367,   368,   368,   369,   369,   370,   370,
     370,   370,   370,   371,   371,   371,   372,   372,   373,   373,
     373,   373,   373,   374,   373,   373,   375,   373,   373,   373,
     373,   373,   373,   376,   376,   377,   377,   377,   378,   378,
     378,   378,   379,   379,   380,   380,   380,   381,   381,   382,
     382,   382,   382,   383,   383,   385,   386,   384,   384,   384,
     384,   384,   384,   384,   387,   387,   388,   389,   390,   388,
     391,   391,   391,   391,   391,   391,   391,   391,   392,   392,
     393,   393,   394,   394,   395,   395,   396,   396,   396,   397,
     396,   396,   398,   398,   398,   399,   399,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   401,   401,   402,   402,
     403,   403,   404,   404,   405,   405,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   407,
     406,   408,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   409,   409,   410,   410,   411,   411,   411,
     412,   412,   413,   413,   413,   413,   413,   414,   414,   415,
     415,   415,   415,   415,   415,   416,   416,   417,   417,   417,
     417,   417,   418,   418,   419,   419,   419,   419,   419,   419,
     419,   419,   420,   420,   421,   421,   422,   422,   422,   422,
     422,   422,   423,   423,   424,   424,   425,   425,   426,   426,
     426,   426,   426,   427,   427,   427,   428,   428,   429,   429,
     430,   430,   430,   430,   431,   431,   433,   432,   432,   432,
     432,   432,   434,   434,   435,   435,   436,   436,   437,   437,
     437,   437,   437,   439,   438,   440,   441,   440,   442,   442,
     442,   442,   442,   443,   442,   442,   444,   444,   445,   445,
     445,   445,   446,   446,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   448,   448,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   450,   450,   451,   451,   451,   451,   451,   451,   451,
     451,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   453,   453,   453,   453,   453,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   456,   456,   456,   456,   456,   456,   456,   456,
     457,   457,   457,   457,   458,   458,   458,   458,   459,   459,
     459,   459,   459,   459,   459,   459,   460,   460,   461,   461,
     462,   462,   462,   462,   462,   462,   463,   464,   465
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
      11,     5,     7,     5,    17,    13,    15,    11,    13,     0,
       7,     0,     7,     7,    11,     5,     5,     9,     9,     9,
       5,     5,    11,     9,    14,    14,     7,    12,    10,     7,
       7,     7,     1,     1,     1,     0,     2,     3,     3,     2,
       0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
       4,     4,     0,     4,     0,     2,     3,     3,     3,     3,
       3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
       3,     3,     4,     0,     4,     2,     0,     2,     3,     4,
       0,     5,     5,     2,     0,     2,     0,     6,     3,     3,
       3,     3,     0,     2,     3,     1,     0,     2,     3,     3,
       3,     3,     4,     0,     8,     0,     0,     3,     7,     7,
       8,    11,     6,     0,    10,     1,     3,     6,     1,     1,
       1,     1,     0,     3,     1,     2,     2,    12,     2,    15,
       4,    12,    17,    22,    12,     0,     2,     3,     4,     4,
       3,     2,     2,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     5,     2,     2,     3,
       9,     3,     2,     9,     2,     9,     2,     9,     5,     3,
       2,     0,     2,     6,     8,     8,    10,     1,     4,     1,
       1,     5,     4,     4,     7,     4,     7,     5,     3,     3,
       7,     5,     8,     2,     0,     3,     6,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     4,     4,     4,     4,     6,     6,     6,     5,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     3,     1,     1,     3,     3,     3,     5,
       3,     4,     4,     6,     8,     8,     5,     5,     1,     1,
       1,     1,     1,     4,     6,     1,     6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   748,     0,     0,     0,
       0,   637,     0,   639,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   640,   749,     0,     0,     0,     0,     0,
       0,   653,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   750,     0,     0,   755,   751,
      19,   752,   654,    41,   207,   170,   183,   238,    91,   302,
     380,   522,   552,     0,     0,   730,     0,     0,   649,   648,
       0,     0,   723,   722,     0,     0,   724,   725,   726,   727,
     728,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   680,   729,   719,   720,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   748,     0,     0,     0,     0,     0,     0,     0,
       0,   731,     0,   732,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   682,   683,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   721,   638,     0,     0,     0,    86,     0,   748,     0,
       7,    42,    47,    49,     0,   211,     9,   208,   210,   172,
      10,   185,    11,   242,    12,   239,   241,     0,     8,    92,
      96,     0,   306,    13,   303,   305,   384,    14,   381,   383,
     526,    15,   523,   525,   556,    16,   553,   555,   563,     0,
       0,   643,     0,     0,     0,     0,     0,     0,   734,     0,
     735,     0,   642,   645,   746,   647,     0,   651,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   681,     0,     0,   697,   696,   695,   694,   690,
     691,   693,   692,   685,   684,   686,   687,   688,   689,     0,
     753,     0,   641,   655,     0,     0,     0,    80,   730,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   747,   740,     0,     0,     0,     0,     0,     0,
       0,   733,     0,   738,     0,     0,     0,     0,   758,   698,
     699,   700,   701,   702,   703,   704,   705,   706,   707,     0,
     709,   710,   711,   712,   713,   714,     0,     0,     0,     0,
     633,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   748,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   209,   212,     0,     0,   171,   173,     0,   102,     0,
     184,   186,     0,     0,     0,     0,     0,     0,   240,   243,
     244,    85,   748,     0,    56,     0,    57,     0,     0,     0,
       0,   304,   307,     0,     0,   389,   382,   385,   391,     0,
       0,     0,     0,   524,   527,     0,     0,     0,     0,     0,
     554,   557,   565,   741,   742,     0,     0,     0,     0,     0,
     736,   737,     0,   650,     0,     0,     0,     0,     0,     0,
       0,     0,   718,   756,   754,   658,   657,     0,     0,    90,
      60,     0,     0,     0,     0,    72,     0,    69,     0,    55,
      67,    79,    43,     0,     0,     0,     0,   218,     0,   748,
       0,   176,     0,   190,     0,     0,     0,     0,   109,     0,
     293,     0,   748,     0,   252,   270,   285,     0,     0,   102,
       0,     0,   748,     0,   313,   335,   748,     0,   392,     0,
     748,     0,   533,     0,     0,     0,   565,     0,     0,     0,
     566,     0,     0,     0,   646,   644,   739,   652,     0,   635,
     757,   708,   715,   716,   717,   634,   656,    87,    45,    44,
      46,    81,     0,     0,    85,     0,    62,    53,    61,    48,
       0,   218,     0,   215,     0,     0,   213,     0,   174,     0,
       0,     0,     0,   188,   103,     0,   187,     0,   247,     0,
     245,     0,     0,     0,    93,    98,     0,   102,   310,     0,
     308,     0,     0,     0,   386,     0,   414,     0,   528,     0,
     530,   531,   558,   566,   559,   561,   560,   564,     0,   743,
       0,     0,     0,     0,     0,    75,    73,    68,     0,    74,
      85,    50,     0,   221,   216,   220,   214,   178,   175,   192,
     189,     0,     0,   104,   748,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,     0,   150,     0,     0,     0,
       0,   141,   143,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   139,     0,   136,   729,   160,   161,   296,
     251,   295,   246,   255,   248,   254,   272,   249,   288,   250,
     287,     0,    94,     0,   309,   316,   311,   315,     0,     0,
       0,     0,   312,   336,   337,   387,   395,   388,   394,     0,
     529,   536,   532,   535,   562,     0,     0,     0,     0,   567,
     575,     0,     0,   636,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   217,     0,     0,     0,   100,   101,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     132,   134,     0,   158,   156,   153,   155,   154,   748,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   167,     0,     0,     0,     0,     0,    95,     0,   353,
     353,   364,   342,     0,   748,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   449,   451,   390,   415,   472,     0,     0,     0,
       0,     0,   744,   745,    82,    83,    77,    76,    71,    54,
      66,     0,     0,     0,     0,     0,     0,     0,   102,   102,
     102,   102,     0,     0,     0,   102,   219,   222,     0,     0,
     177,   179,     0,     0,     0,   191,   193,     0,   109,     0,
       0,     0,     0,   109,   109,     0,   135,     0,   379,     0,
     131,   130,   129,   128,   127,   123,   124,   126,   125,   119,
     120,   115,   118,   121,   116,   122,   157,   159,   163,     0,
     165,     0,     0,   137,     0,     0,     0,     0,   294,   297,
       0,     0,     0,     0,   105,   105,     0,     0,   253,   256,
       0,     0,     0,   271,   273,     0,     0,     0,   286,   289,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,   326,   314,   317,   370,   370,   370,     0,     0,     0,
       0,     0,   730,     0,     0,     0,   393,   396,   405,     0,
       0,   102,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   102,     0,     0,     0,   480,     0,
     487,     0,   495,   502,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   534,   537,     0,   582,
       0,     0,   573,   595,     0,     0,    65,    64,     0,     0,
       0,     0,     0,   102,     0,   102,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,   167,   197,     0,     0,
     148,     0,   149,     0,   145,     0,     0,     0,   109,   378,
       0,   162,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,   102,     0,     0,     0,     0,     0,
     281,   283,     0,   277,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   323,     0,     0,     0,
       0,   109,     0,     0,     0,     0,   371,   372,   373,   374,
     375,   376,   377,     0,     0,   338,   354,     0,   339,     0,
     340,   365,     0,     0,     0,   347,   341,   343,     0,     0,
     408,     0,   406,     0,     0,     0,   412,     0,   410,     0,
       0,   416,     0,     0,   417,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   105,   540,     0,   584,     0,     0,     0,
       0,     0,     0,     0,     0,   595,     0,     0,   102,   595,
       0,     0,     0,    78,    51,   224,   225,   230,   231,     0,
     234,     0,   233,   227,   226,    85,   228,   223,     0,   232,
     181,   180,     0,     0,   194,   195,     0,     0,   109,     0,
     142,     0,     0,   113,   166,     0,   168,   298,   299,   300,
     301,   257,   258,     0,     0,     0,    85,   107,     0,   262,
     263,   264,   265,   274,    85,   276,    85,   275,   291,   290,
     292,   331,   329,   330,   321,   319,   320,   318,   333,   325,
     332,   328,   322,     0,     0,     0,     0,     0,     0,   361,
     355,     0,   367,     0,     0,     0,   398,   397,    85,   399,
     400,   403,   404,    85,   401,   402,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,   102,   418,   481,
       0,     0,   102,     0,     0,     0,     0,   419,   488,     0,
       0,     0,     0,     0,   102,   420,   496,     0,     0,     0,
       0,     0,     0,     0,     0,   421,   503,   102,     0,   102,
     730,   730,   730,     0,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   473,   475,   474,   475,     0,
     538,   585,   586,   102,   588,     0,     0,     0,     0,     0,
       0,     0,   580,   581,   578,   579,   576,     0,     0,   595,
       0,     0,     0,     0,   596,    84,     0,   102,   102,     0,
     102,   182,   199,   196,     0,   117,     0,     0,     0,   152,
       0,     0,   259,     0,   260,     0,   106,   102,   282,     0,
     278,     0,     0,     0,     0,   359,   360,   362,     0,   358,
     109,   366,   109,   344,   345,     0,     0,     0,     0,   346,
     348,   407,     0,   411,     0,   422,   414,   423,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,   441,     0,
     443,     0,   414,     0,     0,     0,     0,     0,   414,     0,
       0,     0,     0,     0,     0,     0,     0,   414,     0,     0,
       0,     0,     0,   414,   414,     0,     0,   512,     0,   456,
       0,     0,     0,     0,     0,     0,   460,   461,     0,     0,
       0,     0,     0,     0,     0,   455,     0,     0,   748,     0,
     539,   543,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   582,     0,     0,     0,     0,   572,   730,   730,     0,
       0,     0,     0,     0,   608,   730,     0,   631,   631,   631,
     601,   602,     0,     0,     0,   617,   618,   105,   622,   624,
     626,     0,     0,   630,     0,     0,     0,     0,     0,     0,
     151,     0,     0,   144,   114,     0,     0,     0,   108,   284,
     280,     0,   324,   327,     0,   356,   368,     0,     0,     0,
       0,   409,   413,     0,     0,   730,     0,   730,     0,     0,
       0,     0,     0,     0,   102,     0,   484,   482,   483,   485,
     102,     0,   491,   489,   490,   492,   493,   102,   500,   498,
       0,   497,   499,   507,   506,   508,     0,     0,   504,   505,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,   476,
       0,   544,   544,     0,   102,     0,   590,     0,     0,     0,
     568,     0,     0,     0,   569,   595,   614,   619,   102,   611,
       0,     0,   597,   600,   609,   610,   603,   604,   607,   605,
     606,   613,   612,     0,   615,   621,     0,     0,     0,     0,
     629,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,   200,     0,     0,   169,     0,     0,   334,
     363,     0,     0,   349,   350,   351,   352,   425,   427,     0,
       0,     0,     0,     0,     0,   433,     0,   442,     0,   486,
       0,   494,     0,   501,   510,   511,   514,   509,   453,     0,
       0,   431,   432,     0,     0,     0,     0,     0,   466,   470,
     471,     0,   469,     0,   450,     0,   730,   479,   452,   370,
     370,     0,     0,     0,     0,     0,     0,   577,   595,   570,
       0,     0,   598,   599,   632,     0,     0,     0,     0,     0,
       0,   237,   236,   229,   235,     0,     0,     0,     0,     0,
       0,     0,   147,     0,   261,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
     102,     0,   102,     0,     0,     0,     0,     0,     0,   102,
       0,   477,   478,     0,     0,     0,     0,   542,     0,   545,
     541,     0,   102,     0,     0,     0,     0,     0,     0,   102,
     616,     0,     0,     0,   628,     0,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,   414,   436,   437,     0,
       0,     0,     0,   434,     0,     0,   414,     0,     0,     0,
       0,   102,     0,     0,   513,   515,     0,   430,     0,   457,
     458,   459,     0,     0,   463,     0,     0,     0,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,     0,     0,
     574,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,   468,     0,   550,   551,   548,   549,   109,     0,     0,
       0,     0,     0,     0,   571,   102,     0,     0,     0,     0,
     267,   357,   369,   426,   438,   439,   440,     0,   414,     0,
     447,   414,   521,   516,   519,   520,   517,   518,   454,   429,
       0,   414,   414,   462,     0,     0,     0,   730,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,     0,     0,   620,   623,   625,   627,     0,     0,   445,
     414,   448,   428,     0,     0,   547,     0,   730,     0,     0,
       0,     0,     0,    88,     0,     0,   464,   465,   594,     0,
     587,   591,     0,     0,   268,     0,    58,     0,   446,   730,
       0,     0,     0,    89,     0,     0,     0,     0,     0,   444,
     589,     0,     0,    88,     0,     0,     0,   592,     0,     0,
       0,   269,     0,     0,     0,   593
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   150,   231,   232,
     752,  1416,   434,   640,   435,  2032,   405,   577,   750,   872,
     499,   574,   500,   400,   227,   335,  2046,   336,   155,   249,
     431,   517,   518,  1385,  1268,   594,   595,   691,   909,  1430,
     692,   766,   767,  1248,   761,   800,   931,   933,   152,   342,
     416,   587,   755,   891,   153,   343,   421,   589,   756,   896,
    1243,  1579,  1713,   151,   237,   341,   412,   582,   754,   887,
     154,   245,   344,   429,   601,   803,   949,  1265,  1997,  2052,
     602,   804,   954,  1105,  1276,  1102,  1274,   603,   805,   959,
     597,   802,   939,   156,   254,   347,   442,   611,   808,   973,
    1288,  1121,  1443,   612,   723,   977,  1147,  1305,  1460,   974,
    1136,  1450,  1721,   976,  1141,  1452,  1722,  1137,   693,   157,
     258,   348,   447,   539,   615,   813,   987,  1151,  1308,  1157,
    1313,   729,   855,  1032,  1033,  1386,  1526,  1659,  1178,  1339,
    1180,  1348,  1182,  1356,  1183,  1366,  1640,  1819,  1885,   158,
     262,   349,   454,   619,   857,  1037,  1389,  1769,  1839,  1947,
     159,   266,   350,   461,    31,   351,   550,   628,   739,  1220,
    1038,  1407,  1217,  1215,  1221,  1414,  1688,   856,    33,   149,
     694,   278,   125,   172,   279,   280,    34,   126,    70,    71,
     127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1418
static const yytype_int16 yypact[] =
{
   -1418,    58, -1418, -1418,    78,  5061,  -179,    14,  -153,   114,
      16, -1418,  -138, -1418,   653,   149,  1770,   247,   -96,   -89,
      -6,    38,    41,    79,   125,   155,   160,   173,    56, -1418,
   -1418, -1418, -1418, -1418,   107,   209,   192,   310,   444,   456,
     461, -1418,   342,  4538,  4538,   479, -1418,   496,   499,   525,
     538,   540, -1418,   578, -1418,   588,   597,   601,   608,   613,
     621,   635,   648,   662,   683, -1418,   383,   273, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418,   477,   395,  2280,  4538,  -160, -1418, -1418,
     431,   426, -1418, -1418,   450,   452, -1418, -1418, -1418, -1418,
   -1418,   457,   463,   507,   530,   536,   548,   566,   582,   599,
     605,   614,   627,   629,   633,   638,   650,   652,   668,   675,
     677,  4538,  4538,  4538,  4010, -1418, -1418, -1418, -1418,  6217,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418,   247,   247,  -127,
      72,   526,   -76,   239,   550,   317,   636,   654,   716,   805,
     461,  4538,  -213,   806,   689,   699,   705,   709,   714,   724,
    4042,  4245,   844, -1418,   874,   703,   904,  4042,    19,  4538,
     247,   461,  4538,  4538,  4538,  4538,  4538,  4538,  4538,  4538,
    4538,  4538,  4538,  4538,  4538,  4538,  4538,  4538,  4538,  4538,
    4538,  4538,  -126,  -126,  6240,  4538,  4538,  4538,  4538,  4538,
    4538,  4538,  4538,  4538,  4538,  4538,  4538,  4538,  4538,  4538,
    4538, -1418, -1418,   651,    -4,   939, -1418,   461,   170,   739,
   -1418, -1418, -1418, -1418,   182, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418,   741, -1418, -1418,
   -1418,  -166, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,  5731,
    1052, -1418,   718,   994,  4538,  4538,   247,   247,  4245,   304,
   -1418,  4538, -1418, -1418, -1418, -1418,     2, -1418,  4538,  4588,
     758,   775,  6263,  6290,  6317,  6344,  6371,  6398,  6425,  6452,
    6479,  6506,  2717,  6533,  6560,  6587,  6614,  6641,  6668,  4262,
    4718,  4850, -1418,  3760,  4673,  7352,  7398,  4059,  4059,   793,
     793,   793,   793,   580,   580,  -126,  -126,  -126,  -126,   247,
   -1418,  4042, -1418,  -205,  2689,   802,   803, -1418,  2203,   812,
    4538,   280,   283,   341,   391, -1418,    88,   271,   214,   868,
     282,   789, -1418, -1418,   323,   780,   791,  4927,  4986,   796,
     799, -1418,  4042,  4701,  1057,  6695,  4538,   247, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,  4538,
   -1418, -1418, -1418, -1418, -1418, -1418,  4538,  4538,  4538,  4538,
   -1418,  4538,   801,     3,  4293,  4538,  4538,  5758,   111,   111,
    -103,  -144, -1418,    43,  1062,   807,   111,  6722,    62,  1067,
    1068, -1418, -1418,   808,  1071, -1418, -1418,   814,   113,  1079,
   -1418, -1418,   841,  1107,  1108,   846,   847,   848, -1418, -1418,
   -1418,   -47,  -194,   879, -1418,   855, -1418,  1118,  1119,   861,
     862, -1418, -1418,  1127,   870, -1418, -1418, -1418, -1418,  1135,
     873,   461,   461, -1418, -1418,   461,   875,   461,   247,  1138,
   -1418, -1418, -1418, -1418, -1418,  1140,  4538,  4538,  1142,  1143,
    4245, -1418,  4538, -1418,  1146,  1690,   884,  6749,  6776,  6803,
    6830,  6857,  7335, -1418, -1418, -1418,  7335,  5785,  5812, -1418,
   -1418,  1147,  1148,  1150,   461,  1151,  4538, -1418,  4042, -1418,
   -1418, -1418, -1418,    42,  1153,   919,   921, -1418,  1184,   287,
    1192, -1418,  1193, -1418,   942,   944,   954,  1202, -1418,  1203,
   -1418,  1208,   287,  1209, -1418, -1418, -1418,  1213,  1217,   113,
     984,  1219,   287,  1223, -1418, -1418,   287,  1224, -1418,   955,
     287,  1228, -1418,  1229,  1230,  1235, -1418,  1239,  1241,  1242,
     964,   987,  5018,  5041, -1418, -1418,  7335, -1418,  4538, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418,  -163,  4538,  6880,   365,   373, -1418, -1418, -1418, -1418,
    1183, -1418,   882, -1418,   988,  1246, -1418,   381, -1418,   393,
    4538,  1250,  1003, -1418, -1418,  1765, -1418,  1020, -1418,  1251,
   -1418,  1109,   414,  1201, -1418,   991,  1254,   113, -1418,  1256,
   -1418,  1316,   115,  1257, -1418,  1410, -1418,  1258, -1418,  1577,
   -1418, -1418, -1418,  1006, -1418, -1418, -1418, -1418,  1555, -1418,
    4538,  4538,  5839,  1008,  4538,  4753,  1270, -1418,    48, -1418,
     102, -1418,  1696, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418,  6903,  1018, -1418,   336, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418,  1024, -1418,  1031,  1033,  1034,
    1035, -1418, -1418,  1278,  1765,  1765,  1765,  1765,  1296,   218,
    1297,  7425,  -228,  1038,  1038, -1418,  1040, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418,  4538, -1418,  1299, -1418, -1418, -1418, -1418,  1039,  1042,
    1043,  1045, -1418, -1418, -1418, -1418, -1418, -1418, -1418,  2863,
   -1418, -1418, -1418, -1418, -1418,  1041,  1044,  1046,  1054, -1418,
   -1418,  6930,  6957, -1418,  1048,  5866,  4538,  4538,    47, -1418,
    1055,    28,  1061, -1418,  1371,    -9,   299, -1418, -1418, -1418,
    1056,  1063,  1056,  1765,  1325,  1326,  1072,  1074,  1094,  1082,
    1082,  1082,  7379, -1418, -1418, -1418, -1418, -1418,     8,  1073,
   -1418,  1765,  1765,  1765,  1765,  1765,  1765,  1765,  1765,  1765,
    1765,  1765,  1765,  1765,  1765,  1765,  1765,  1341,  4538,  2141,
   -1418,  1077,   359,   658,     6,   144,  5893, -1418,  2719, -1418,
   -1418, -1418, -1418,  1268,    54,   132,   137,  1086,  1087,  1088,
    1089,  1090,  1093,  1105,  1106,  1111,  1363,  1120,  1123,  1124,
     -49,   -22,    84,  1102,  1125,  1126,  1128,  1129,  1136,  1137,
    1139,  1149,  1113,  1134,  1156,  1157,  1166,  1168,  1169,  1144,
    1145,  1171, -1418, -1418, -1418, -1418, -1418,    -8,   461,   682,
     112,  1389, -1418, -1418, -1418,  1196,  7335,  4781, -1418, -1418,
   -1418,   461,    43,  1170,   112,   112,   112,   112,   138,   242,
     113,   113,  1172,   461,  1433,   325, -1418, -1418,    90,  1434,
   -1418, -1418,  1186,  1435,  1447, -1418, -1418,  1194, -1418,  1197,
    2172,  1199,  1200, -1418, -1418,  1204, -1418,  1195, -1418,  1765,
    7444,  3602,  1413,  1413,  1413,   604,   604,   604,   604,   512,
     512,  1082,  1082,  1082,  1082,  1082, -1418, -1418, -1418,  1211,
    7425,   135,  4730, -1418,  1458,    31,  1461,   461, -1418, -1418,
    1467,  1493,  1494,  1247,  1255,  1255,   112,   112, -1418, -1418,
    1522,    63,    67, -1418, -1418,  1526,   461,  1527, -1418, -1418,
   -1418,  1528,  1529,  1530,   300,   461,   461,  4538,  1536,   112,
    2448, -1418, -1418, -1418,  1141,  1951,  1392,   352,  1537,   461,
      69,   247,  2448,   247,    76,   461, -1418, -1418, -1418,   461,
    1534,   113,   113,  1538,   461,   461,   461,   461,   461,   461,
     461,   461,   461, -1418,   113,   461,   461,  4538, -1418,  4538,
   -1418,  4538, -1418, -1418,   112,   247,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
    1539,   461,  1280,  1284,  1279,   461, -1418, -1418,  1154,  1287,
    1281,  1154, -1418, -1418,  1282,  4538, -1418, -1418,    43,  1547,
    1548,  1549,  1550,   113,  1551,   113,  1554,  1557,  1558,  1159,
    1567,  1570,   113,  1571,  1573,  1574,  1077, -1418,  1584,  1585,
   -1418,  1313, -1418,  1765, -1418,  1327,  1335,  1329, -1418, -1418,
    4808, -1418, -1418,  1765,  1338,   460,  1595,  1596,  1597,  1599,
    1601,    10,  1346,  1612,   113,  1614,  1615,  1616,  1617,  1619,
   -1418, -1418,  1620, -1418, -1418,  1621,  1623,  1627,  1629,  1630,
    1631,  1632,  1633,  1637,  1639,  1641, -1418,  1727,  1643,  1644,
    1645, -1418,  1648,  1649,  1650,  1356, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418,   112,  1651, -1418, -1418,  1357, -1418,   112,
   -1418, -1418,  1393,  1666,  1667, -1418, -1418, -1418,  1670,  1671,
   -1418,  1678, -1418,  1681,  1685,  1686, -1418,  1687, -1418,  1688,
    1436, -1418,  1446,  1451, -1418,  1440,  1448,  1449,  1450,  1452,
    1455,  1456,  1459,   164,  1453,  1460,  1454,  5064,   669,  5087,
     579,  5110,   101,   603,  1462,  1465,  1464,  1474,  1476,  1477,
    1478,  1479,  1466,  1481,  1486,  1488,  1492,  1495,  1500,  1501,
    1503,  1468,    77,    77, -1418,  1715, -1418,   112,   112,    52,
    1483,  1496,  1506,  1507,  1509, -1418,   112,   464,   335, -1418,
    1510,   193,  1512,  7335, -1418, -1418, -1418, -1418, -1418,  1513,
   -1418,  1514, -1418, -1418, -1418,  1516, -1418, -1418,  1518, -1418,
   -1418, -1418,  1757,   468, -1418, -1418,   112,  4567, -1418,  4538,
   -1418,  1780,  1532, -1418,  7425,   112, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418,  1783,  1677,  1786,  1516, -1418,   485, -1418,
   -1418, -1418, -1418, -1418,   527, -1418,   532, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,  1531, -1418,
   -1418, -1418, -1418,  1533,  1823,  1825,  1826,  1831,  1829, -1418,
   -1418,  1830, -1418,  1832,  1833,   349, -1418, -1418,   556, -1418,
   -1418, -1418, -1418,   568, -1418, -1418,  1835,  1569,  1836,   113,
     461,   461,  4538,  4538,  4538,   461,   113,  1837,   112,  1842,
    4538,  1845,  4538,  1586,   113,  4538,  4538,   113, -1418, -1418,
    4538,  1588,   113,  4538,  4538,  4538,  4538, -1418, -1418,  4538,
    4538,  4538,  1589,  4538,   113, -1418, -1418,  4538,  4538,   461,
    1590,  1591,  4538,  4538,  1592, -1418, -1418,   113,  1855,   113,
    2448,  2448,  2448,  4538,  2448,  1856,  1857,   461,   461,  4538,
     461,   461,   112,  1860,  1859, -1418, -1418, -1418, -1418,  1227,
   -1418,  1656, -1418,   113, -1418,  1602,  4042,  1604,  1605,  1606,
     203,  1618, -1418, -1418, -1418, -1418, -1418,  1871,  1624, -1418,
     205,  1744,  1872,  4989, -1418, -1418,  1609,   113,   113,  1159,
     113, -1418, -1418, -1418,  1622, -1418,  1625,  5133,  1628, -1418,
    1765,  1634, -1418,  1876, -1418,  1883, -1418,   113, -1418,  1886,
   -1418,  1888,   461,  1887,  1889, -1418, -1418, -1418,  1635, -1418,
   -1418, -1418, -1418, -1418, -1418,  1056,  1056,  1056,   112, -1418,
   -1418, -1418,   461, -1418,   461, -1418, -1418, -1418,  1636,  1638,
    1640,  5156,  5179,  5202,  1642,  1646, -1418,  1647, -1418,  6984,
   -1418,  5225, -1418,  1894,  1863,  2117,  1895,  5248, -1418,  1897,
    2269,  2431,  2511,  2538,  5271,  2672,  2827, -1418,  2885,  1899,
    2913,  2949,  1900, -1418, -1418,  3018,  3254, -1418,   217, -1418,
    1652,  1653,  1655,  1657,  5294,  1662, -1418, -1418,  1668,  1676,
    7011,  1660,  1663,  1682,   571, -1418,   236,   240,   344,  1626,
   -1418, -1418,  1907,  1683,  4042,   577,  4042,  4042,  4042,  1909,
   -1418,  1287,   247,   264,  1913,   112, -1418,  2448,  2448,  1669,
    1916,   245,  4538,  4538, -1418,  2448,  4538,  1944, -1418, -1418,
   -1418, -1418,  4538,  1947,  1132, -1418, -1418,  1255,  1689,  1692,
    1694,  1706,  1911, -1418,  1691,  1695,  1712,  1714,  1721,   657,
   -1418,  1722,  4538, -1418,  7425,  1718,  1948,  1719, -1418, -1418,
   -1418,  1726, -1418, -1418,  1984, -1418, -1418,  1985,  1988,  1990,
    1993, -1418, -1418,  3222,  1994,  2448,  4538,  2448,  4538,  4538,
     461,  1995,   461,  1996,   113,  3278, -1418, -1418, -1418, -1418,
     113,  3470, -1418, -1418, -1418, -1418, -1418,   113, -1418, -1418,
    3526, -1418, -1418, -1418, -1418, -1418,  3718,  3774, -1418, -1418,
     606,  1997,  4538,   113,  1998,  2000,  4538,   247,   247,  4538,
    4538,  2001,  2002,  2003,   247,  2006,  1877,  2007,  2556, -1418,
    2009, -1418, -1418,  1750,   113,   609, -1418,   615,   618,   637,
   -1418,  1749,  1758,  2014, -1418, -1418, -1418, -1418,   113, -1418,
     247,   247, -1418,  7335,  7335, -1418,  7335, -1418,  2018,  2018,
    2018,  7335, -1418,  4042,  7335, -1418,  4538,  4538,  4538,  4042,
   -1418,    43,  2020,  2021,  2022,  2026,  2031,  4538,  4538,  4538,
    4538,  4538, -1418, -1418,  1756,  5920, -1418,  1926,  2036, -1418,
   -1418,  1773,  1774, -1418, -1418, -1418, -1418,  2027, -1418,  1784,
    7038,  1776,  5317,  5340,  1778, -1418,  1787, -1418,  1779, -1418,
    1782, -1418,   265, -1418, -1418, -1418, -1418, -1418, -1418,  5363,
     269, -1418, -1418,  7065,  1790,  1791,  5386,  5409, -1418, -1418,
   -1418,   639, -1418,   247, -1418,   247,  2448, -1418, -1418,  1613,
    2008,  4538,  1785,  1788,  1789,  1792,  1793, -1418, -1418, -1418,
     307,  1794, -1418, -1418, -1418,   647,  5432,  5455,  5478,   649,
    1795, -1418, -1418, -1418, -1418,  2053,  3309,  3326,  3343,  3511,
    3567,  4538, -1418,  2058, -1418, -1418,  1056,  1799,  2057,  2062,
    4538,  4538,  4538,  4538,  2064,   113,  4538,  1803,  4538,   127,
     113,  2066,   113,  2067,  2076,  2079,  4538,  4538,  2081,   113,
     655, -1418, -1418,  2084,  2085,  2086,   112, -1418,  1838, -1418,
   -1418,  5501,   113,  4042,  4042,  4042,  4042,   309,  2088,   113,
   -1418,  4538,  4538,  4538, -1418,  4538, -1418, -1418, -1418, -1418,
   -1418, -1418,  5947,  1827,  1834,  1847, -1418, -1418, -1418,  7092,
    7119,  7146,  5524, -1418,  1848,  5547, -1418,  7173,  2094,  2101,
    4538,   113,  2115,   112, -1418, -1418,  1858, -1418,   320, -1418,
   -1418, -1418,  7200,  7227, -1418,  1851,  2118,  4538,  2120,  2121,
    2123,  2124, -1418,  4538,  1862,   659,   664,   666,   695,  2133,
   -1418,  1878,  5570,  5593,  5616,  7254, -1418,  2135,  2136,  2140,
    3966,  2145,  2147,  2150,  2448,  1879,  4538,  4022,  1890,  2151,
    2153,  3584,  2154,  2155,  2156,  2157,  2158,   113,  1898,  1902,
    2159, -1418,  5974, -1418, -1418, -1418, -1418, -1418,  6001,  1903,
    1904,  1933,  1941,  1942, -1418,   113,  4538,  4538,  4538,  2161,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418,  1943, -1418,  7281,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
    1905, -1418, -1418, -1418,  2206,  1952,  1946,  2448,  4042,  1950,
    4042,  4042,  1953,  6028,  6055,  6082, -1418,  2160,  4538,  4214,
    1955,  4270,  2213,  4462,  4518, -1418,  2215,  4538,  1956,   700,
    4538,   711,   736, -1418, -1418, -1418, -1418,   461,  5639, -1418,
   -1418, -1418, -1418,  2219,  2221, -1418,  6109,  2448,  1959,  6136,
    1965,  1992,  2256,  1999,  4538,  4710, -1418, -1418, -1418,  2010,
   -1418, -1418,  2005,  4042, -1418,  2012, -1418,  7308, -1418,  2448,
    4538,   757,  2129, -1418,  2260,  2017,  5662,  2023,  2264, -1418,
   -1418,  4538,  2011,  1999,  6163,  4538,  2263, -1418,  5685,  2028,
    4538, -1418,  5708,  4538,  6190, -1418
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418,  -220, -1418,  -833, -1418,  1336, -1418, -1418,  1343,
    -500, -1418,  -607, -1418,  -392,  -508,   225, -1418, -1418, -1418,
   -1418,   733, -1418,  -929, -1418,  -893, -1418,  -497, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418,  1578, -1418,  1225, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418,  1709, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,  1482,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418,  -969,  -650, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1417, -1418, -1418, -1418,  1096,   908, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418, -1418,   641, -1418, -1418,
   -1418, -1418, -1418, -1418, -1418, -1418,  1751, -1418, -1418, -1418,
    1441, -1418,   760,  1264, -1197, -1418,  -524,    15, -1418, -1418,
   -1418,  1295,  -586,  -916,  -140,   -79, -1418,    -5,  -118,   -60,
    -269,   -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -680
static const yytype_int16 yytable[] =
{
      35,   585,    39,   578,   759,  1071,   173,  1142,   494,   695,
    1076,  1077,    69,     6,   599,  1095,  1096,  1262,  1400,     6,
      32,    42,  1410,    83,   609,   174,   287,  1042,   613,   223,
     224,   749,   617,   870,   394,    90,   490,   286,   797,   528,
     798,  1049,  1050,  1051,  1052,   495,   495,     6,     6,  1603,
     495,   495,     6,     6,  1120,  1065,   270,   432,     3,     6,
      36,     6,   290,   888,   395,  1615,  1154,   506,  1100,   -60,
    1034,  1621,  1103,    85,     6,   889,   633,   228,    -3,    36,
    1630,     6,     6,     7,     8,     9,  1636,  1637,    10,    11,
      12,  1035,    13,   432,    36,   432,   871,   346,   695,   695,
     695,   695,   176,   402,    18,   950,   634,   951,    40,   576,
     897,   177,   899,  1097,  1098,   952,   490,   432,   404,   -60,
       6,    41,  1350,    44,   402,   270,     7,     8,     9,    36,
     354,    10,    11,    12,   220,    13,  1119,   225,   229,   514,
     221,   868,    69,    69,   226,   234,    35,    18,  1878,    35,
     251,    35,    35,    35,    35,   268,    52,  1064,   359,   360,
     402,   493,   402,   514,   514,   233,   238,    72,   226,   246,
     250,   255,   259,   263,   267,    69,   291,   695,   491,   492,
      73,  1184,   638,   402,   402,  1252,   504,   769,   770,   771,
     772,   393,  1351,   239,   240,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   392,  1543,   695,  1007,   515,  1879,   527,  1880,     6,
    1008,   774,   333,   775,   226,     7,     8,     9,  1293,  1881,
      10,    11,    12,   955,    13,   718,   719,   720,   721,   515,
     515,  1009,  1882,   956,  1352,   957,    18,  1010,   751,   476,
       6,    65,     6,    65,    66,    67,    66,    67,   330,   173,
    1883,   890,  1036,    74,   364,   484,   900,   331,   514,  1353,
    1354,    69,    69,   362,   362,    37,   953,    43,   174,   584,
      38,    36,   288,   471,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
    1298,   748,   930,   496,   496,  1112,  1301,    75,   496,   496,
      76,   497,   497,   443,   498,   498,    87,   989,   403,   498,
     498,  1393,     6,   695,    69,    82,   697,    36,     7,     8,
       9,   507,  1101,    10,    11,    12,  1104,    13,  1150,    35,
     548,   436,   230,    35,   515,  1156,  1094,  1011,    77,    18,
     444,   514,   433,  1012,   403,  1426,   403,   445,   575,   430,
     437,   514,    69,   448,   776,   408,   -63,   516,   413,   409,
     438,  1355,  1047,   226,  1391,  1392,  1394,   403,   403,   410,
      84,   455,   414,  1401,   892,   722,   439,   247,   893,   894,
     440,   516,   516,    44,    78,   991,     6,  1884,   501,  1082,
     992,  1053,     7,     8,     9,   510,  1083,    10,    11,    12,
    1113,    13,  1080,  1424,   958,   697,   697,   697,   697,   523,
    1114,   338,  1431,    18,    79,   456,   417,   515,  1327,    80,
    1455,  1456,   418,   533,   339,  1328,   777,   515,   537,   334,
     419,  1143,    81,    36,   541,   340,   543,   544,    85,  1920,
     545,    88,   547,    69,  1511,  1512,  1513,  1412,  1515,  1927,
     934,    86,   422,    89,  1413,  1144,     6,  1539,  1457,  1544,
     935,   936,   937,  1235,  1413,    91,  1413,   457,  1780,   458,
     423,  1641,  1458,    68,   446,    68,   130,   695,  1642,   571,
     424,   425,  1680,  1681,   697,  1477,   516,   695,   501,   426,
    1657,   427,   459,   131,  1660,  1055,   132,  1658,   241,   242,
     698,  1658,   697,   697,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,  1673,  1817,
     697,     6,   133,  1821,   148,  1413,  1818,     7,     8,     9,
    1822,   441,    10,    11,    12,   134,    13,   135,  1224,  1523,
     411,  1999,   460,   415,  2001,     6,   584,  1595,    18,  1596,
      36,     7,     8,     9,  2003,  2004,    10,    11,    12,   895,
      13,  1848,  1408,  1909,   361,   362,  1247,    35,  1413,   516,
    1413,  1847,    18,  1263,  1936,   136,  1254,   248,  1062,   516,
     696,  1937,    35,   463,   362,   137,    35,   645,    35,   698,
     698,   698,   698,  2035,   138,   690,    35,    35,   139,    36,
      35,   420,   701,  1661,    35,   140,   705,    36,   710,  1459,
     141,  1145,  1146,    35,  1357,  1600,   717,   724,   142,   938,
     728,  1676,  1677,   501,   733,   637,   226,    35,  1695,  1685,
     697,     6,   143,   740,   362,   639,   147,     7,     8,     9,
     647,   648,    10,    11,    12,   144,    13,   645,    45,     6,
      46,   428,   649,   650,   161,     7,     8,     9,    18,   145,
      10,    11,    12,   160,    13,    47,    48,    49,   698,   696,
     696,   696,   696,   706,   707,   779,    18,     6,  1040,  1729,
     146,  1731,    50,   178,  1358,   179,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   698,  1675,   180,   698,   181,  1402,  1403,  1404,  1405,
     182,     6,  1341,   355,    35,  1342,   183,     7,     8,     9,
    1256,   362,    10,    11,    12,  1406,    13,  1422,  1423,  1359,
    1343,  1344,  1767,   501,  1345,  1346,  1360,  1361,    18,  1706,
    1707,  1708,  1709,  1710,  1711,  1436,  1437,   940,   696,   941,
     942,   943,   944,   945,   946,   947,   792,   793,   794,   795,
     184,  1362,   796,   907,  1363,  1364,   696,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,  1085,   185,   696,   235,   236,  1438,   226,   186,
    1838,  1838,  1440,   226,   697,  1597,  1598,  1599,    35,   990,
       6,   187,  1333,   271,   697,  1334,     7,     8,     9,   243,
     244,    10,    11,    12,   698,    13,  1461,   226,   988,   188,
    1335,  1336,  1337,  1577,   217,   218,   219,    18,  1463,   226,
     220,  1655,  1656,  1419,   695,   189,   221,  1666,   362,  1347,
    1832,   282,    51,  1039,  1039,   436,   790,   791,   792,   793,
     794,   795,   190,  1153,   796,  1155,  1046,   501,   191,   436,
     436,   436,   436,  1365,  1435,  1746,  1747,   192,  1060,  1773,
     362,   283,  1439,   436,  1441,  1774,   362,     6,  1775,   362,
     193,   173,   194,     7,     8,     9,   195,  1185,    10,    11,
      12,   196,    13,   173,   696,   252,   253,  1776,   362,  1828,
    1829,   285,  1864,   197,    18,   198,  1462,  1850,   362,  1854,
     362,  1464,   329,   256,   257,  1896,  1897,  1712,   948,  1950,
     362,   199,  1089,  1584,  1951,   362,  1952,   362,   200,  1338,
     201,   436,   436,   206,   207,   208,   332,   209,   210,   211,
     212,  1107,   272,   213,   214,   215,   216,   217,   218,   219,
    1115,  1116,   273,   220,   436,  1953,   362,   449,   274,   221,
    2028,   362,   275,   284,  1149,  1152,    69,   276,    69,  1158,
    1159,  2030,   362,   450,  1160,   260,   261,   277,   698,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,   698,   356,
    1175,  1176,   337,  1901,   345,   451,  2031,   362,  1967,   436,
      69,  1186,  1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,
    1195,  1196,  1197,  1198,  1199,     6,  1201,  2057,   362,   367,
    1205,     7,     8,     9,  1689,  1690,    10,    11,    12,   368,
      13,   398,   399,   501,   464,   215,   216,   217,   218,   219,
    1934,   406,    18,   220,  1985,    92,    93,   162,   462,   221,
     468,   452,   465,   469,   473,   483,    94,    95,   696,   502,
     503,  2008,   508,   509,   264,   265,   512,   511,   696,   164,
     165,   166,   167,   513,   519,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     520,  2039,   521,   522,     6,   524,   525,   526,   529,   530,
       7,     8,     9,   531,   532,    10,    11,    12,   436,    13,
     534,   535,   536,  2055,   436,    92,    93,     6,   453,   538,
     540,    18,   542,   549,   546,   551,    94,    95,   560,   554,
     555,   643,   644,   557,   568,   569,  1865,   570,   580,   572,
     579,   697,    92,    93,     6,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     581,   583,    96,    97,    98,    99,   100,  1387,  1387,   586,
     588,  1790,   436,   436,   436,   590,     6,   591,   592,   593,
     596,   436,     7,     8,     9,   598,   600,    10,    11,    12,
     604,    13,   605,   607,   616,  1122,   608,  1123,  1124,  1125,
     610,   614,  1528,    18,   627,   618,   620,   621,     7,     8,
       9,   436,   622,    10,    11,    12,   624,    13,   625,   626,
     436,   629,   641,   646,   396,   652,  1535,   653,   702,    18,
     711,   712,   606,   714,   725,   730,  1126,  1127,  1128,  1129,
    1130,  1131,  1132,     6,  1133,  1134,   734,   744,   747,     7,
       8,     9,   758,   768,    10,    11,    12,   760,    13,   699,
     700,   173,   173,   173,   762,   173,   763,   764,   765,   773,
      18,   799,   778,  -679,   858,   121,   807,   859,   809,   860,
     122,   810,   811,   123,   812,  1469,  1470,   861,   864,   869,
    1474,     6,   353,   436,   873,   690,   898,     7,     8,     9,
     901,   902,    10,    11,    12,   903,    13,   904,   124,   129,
     713,   905,   796,   908,   926,   698,   932,  1529,    18,   994,
     995,   996,   997,   998,  1502,  1917,   999,   978,  1206,  1207,
    1208,  1209,  1210,  1211,  1212,  1213,  1214,   979,  1000,  1001,
    1003,  1013,  1518,  1519,  1002,  1521,  1522,   436,   703,   704,
     171,   175,  1022,  1004,    35,   121,  1005,  1006,  1014,  1015,
     122,  1016,  1017,   123,  1665,  1043,  1667,  1668,  1669,  1018,
    1019,  1693,  1020,  1023,  1531,   980,   981,   982,   983,   984,
     985,  1135,  1021,  1029,  1030,     6,   202,   203,   204,  1024,
    1025,     7,     8,     9,  1672,   696,    10,    11,    12,  1026,
      13,  1027,  1028,  1682,  1031,  1044,  1048,  1591,  1061,  1066,
    1068,  1059,    18,   874,   875,   876,   877,   878,   879,   880,
     881,   882,  1069,   436,   883,  1067,   269,  1601,  1070,  1602,
     884,  1072,  1074,  1086,  1075,  1079,   870,  1078,   173,   173,
     708,   709,  1090,   885,   289,  1081,   173,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,  1530,  1091,  1092,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,  1093,  1126,  1127,  1128,
    1129,  1130,  1131,  1132,  1094,  1139,   173,  1099,   173,  1754,
    1755,  1106,  1108,  1109,  1110,  1111,  1761,    69,   986,  1118,
     436,  1161,  1148,  1202,  1200,  1164,    69,  1203,  1204,   993,
    1216,  1222,  1218,  1785,  1225,  1226,  1227,  1228,  1230,  1789,
       6,  1232,  1782,  1783,  1233,  1234,     7,     8,     9,   357,
     358,    10,    11,    12,  1236,    13,   363,  1237,  1239,   173,
    1240,  1241,     6,   365,  1246,   715,   716,    18,     7,     8,
       9,  1244,  1245,    10,    11,    12,  1249,    13,    35,  1250,
    1251,  1255,  1257,  1258,  1259,  1734,  1260,  1736,  1261,    18,
      35,  1054,  1056,  1057,  1058,  1264,    35,  1266,  1063,  1297,
    1300,  1269,  1270,  1271,  1272,    35,  1273,  1275,  1277,   397,
    1278,    35,    35,   171,  1279,   407,  1280,  1281,  1282,  1283,
    1284,   886,    69,    69,  1285,  1830,  1286,  1831,  1287,    69,
    1290,  1291,  1292,  1294,  1295,  1296,  1302,   470,  1299,   786,
     787,   475,  1140,   788,   789,   790,   791,   792,   793,   794,
     795,  1303,  1304,   796,   477,    69,    69,  1306,  1307,   726,
     727,   478,   479,   480,   481,  1309,   482,   173,  1310,   486,
     487,   488,  1311,  1312,  1314,  1315,   501,  1833,   558,  1834,
    1316,     6,  1835,  1905,  1906,  1907,  1908,     7,     8,     9,
    1317,  1319,    10,    11,    12,  1318,    13,  1329,  1331,  1320,
    1321,  1322,  1390,  1323,  1162,  1163,  1324,  1325,    18,  1368,
    1326,  1330,  1384,  1367,  1289,  1369,  1375,  1174,  1126,  1127,
    1128,  1129,  1130,  1131,  1132,  1370,  1836,  1371,  1372,  1373,
    1374,  1376,  1395,   735,   736,   737,   738,  1377,    69,  1378,
      69,   552,   553,  1379,  1421,  1396,  1380,   556,    92,    93,
     654,  1381,  1382,    53,  1383,  1397,  1398,    54,  1399,    94,
      95,  1411,  1415,  1428,  1417,  1418,  1229,   226,  1231,  1420,
    1432,   573,  1433,  1434,  1442,  1238,  1429,  1444,    96,    97,
      98,    99,   100,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,  1267,   679,   680,
    1445,   436,  1446,  1447,  1448,    55,  1449,  1451,  1466,  1453,
    1454,    56,  1465,  1467,  1476,   173,   731,   732,  2009,  1478,
    2011,  2012,  1480,   632,    57,  1482,    58,  1488,  1497,  1503,
    1504,  1507,  1509,  1516,  1517,  1524,  1525,   635,    59,  1532,
    1617,  1534,    60,  1536,  1537,  1538,  1541,  1545,   436,  1546,
    1574,  1586,  1540,  1837,    61,   651,  1580,  1542,  1587,  1581,
     681,  1589,  1583,  1590,  1592,  1662,  1593,   682,  1585,  1594,
    1604,  1616,  1619,  2051,  1622,    62,  1632,  1635,   173,  1605,
    1611,  1606,  1663,  1610,  1700,    35,  1670,  1644,  1612,  1645,
    1674,  1679,    35,  1643,  1652,   741,   742,  1653,  1646,   745,
     206,   207,   208,  1648,   209,   210,   211,   212,  1678,  1649,
     213,   214,   215,   216,   217,   218,   219,  1650,   173,  1687,
     220,  1409,  1692,  1654,  1664,  1717,   221,  1701,  1696,  1702,
     559,  1697,    63,  1698,    64,   643,   753,   206,   207,   208,
     173,   209,   210,   211,   212,  1699,  1703,   213,   214,   215,
     216,   217,   218,   219,  1704,  1705,  1714,   220,  1716,  1718,
    1719,  1720,  1723,   221,    35,  1724,    35,  1725,    35,    35,
    1726,  1728,  1735,  1737,  1748,  1751,   806,  1752,  1758,  1759,
    1760,   683,  2033,  1762,  1764,  1763,  1768,   684,   685,  1771,
    1777,  1779,  1778,   686,  1784,  1801,   687,  1791,  1792,  1793,
      35,   688,   689,  1794,   690,  1122,  1795,  1123,  1124,  1125,
    1803,   866,   867,  1804,  1805,  1806,  1807,  1810,  1808,  1813,
    1815,  1814,  1468,  1816,  1824,  1825,  1842,  1843,  1844,  1475,
    1856,  1845,  1846,  1863,  1867,  1849,  1855,  1483,  1866,  1868,
    1486,  1873,  1876,  1887,  1889,  1489,  1126,  1127,  1128,  1129,
    1130,  1131,  1132,  1890,  1133,  1134,  1891,  1499,  1894,  1898,
    1899,  1900,  1833,   927,  1834,  1910,   584,  1835,  1918,  1929,
    1508,  1902,  1510,   206,   207,   208,  1930,   209,   210,   211,
     212,  1919,  1925,   213,   214,   215,   216,   217,   218,   219,
    1933,  1940,  1935,   220,  1618,  1941,  1533,  1943,  1944,   221,
    1945,  1946,  1949,  1126,  1127,  1128,  1129,  1130,  1131,  1132,
    1954,  1836,  1960,  1961,    92,    93,   654,  1962,  1968,  1955,
    1575,  1576,  1964,  1578,  1965,    94,    95,  1966,  1972,  1971,
    1973,  1975,  1976,  1977,  1978,  1979,  1983,  1981,  1996,  2002,
    1588,  1982,  1987,  1988,    96,    97,    98,    99,   100,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,  1989,   679,   680,    92,    93,   401,   163,
    1990,  1991,    66,  2005,  1998,  2007,  2006,    94,    95,  2010,
    2022,  1138,  2025,  2013,  2020,  2017,  2036,  2027,  2037,  2040,
     164,   165,   166,   167,   168,  2042,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,  2043,  1117,  2044,  2058,   171,   681,  2059,  2045,  2063,
    2069,  1087,   801,   682,  2050,   402,  1623,   171,  1840,  1088,
    2065,  2049,  2053,    92,    93,   162,   163,  2060,  2066,    66,
     642,  1242,   975,  2062,    94,    95,  1527,   623,  2071,  1388,
    1041,  1671,  1177,  1770,  1179,  1219,  1181,   164,   165,   166,
     167,   168,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,     0,     0,
    1223,     0,     0,     0,     0,     0,     0,  1738,     0,     0,
       0,     0,     0,  1740,     0,     0,     0,   206,   207,   208,
    1742,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,  1750,   220,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   683,     0,     0,
       0,     0,     0,   684,   685,     0,     0,  1772,     0,   686,
       0,     0,   687,     0,     0,   928,   929,   688,   689,     0,
     690,  1781,   780,   781,   782,   783,   784,   785,   786,   787,
       0,     0,   788,   789,   790,   791,   792,   793,   794,   795,
       0,     0,   796,     0,     0,     0,     0,     0,  1624,     0,
     169,     0,     0,  1073,     0,     0,     0,     0,     0,     0,
       0,    92,    93,   162,     0,     0,   121,     0,     0,     0,
       0,   122,    94,    95,   123,     0,     0,     0,     0,   403,
       0,     0,   170,     0,     0,   164,   165,   166,   167,     0,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,     0,     0,     0,   206,
     207,   208,     0,   209,   210,   211,   212,   169,  1625,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   121,     0,   221,     0,     0,   122,     0,
       0,   123,     0,     0,  1427,  1626,     0,     0,  1874,   170,
       0,     0,     0,  1886,     0,  1888,     0,     0,     0,    92,
      93,   162,  1895,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,     0,  1904,     0,     0,     0,     0,
       0,     0,  1911,   164,   165,   166,   167,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,  1932,     0,     0,  1471,  1472,  1473,
       0,     0,     0,     0,     0,  1479,     0,  1481,     0,     0,
    1484,  1485,     0,     0,     0,  1487,     0,     0,  1490,  1491,
    1492,  1493,     0,     0,  1494,  1495,  1496,     0,  1498,     0,
       0,     0,  1500,  1501,     0,     0,     0,  1505,  1506,     0,
       0,     0,     0,     0,     0,   171,   171,   171,  1514,   171,
    1980,   206,   207,   208,  1520,   209,   210,   211,   212,  1628,
       0,   213,   214,   215,   216,   217,   218,   219,  1992,     0,
       0,   220,    92,    93,     6,     0,     0,   221,     0,     0,
       0,   121,     0,    94,    95,     0,   122,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,   170,     0,     0,
       0,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,     0,     0,     0,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
    1765,   220,     0,     0,  1766,     0,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,   961,   221,   962,   963,     0,   964,   121,
       0,     0,     0,     0,   122,     0,     0,   123,   965,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,     0,
       0,     0,     0,     0,  1629,   966,   967,   968,     0,     0,
       0,     0,   171,   171,     0,     0,     0,  1683,  1684,     0,
     171,  1686,   969,     0,     0,     0,     0,  1691,     0,  1694,
       0,     0,     0,     0,     0,     0,     0,     0,   814,     0,
       0,     0,     0,     0,     7,     8,     9,  1715,     0,    10,
      11,   815,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,  1631,     0,     0,    18,     0,     0,     0,     0,
     171,  1730,   171,  1732,  1733,     0,     0,     0,     0,     0,
     970,     0,   206,   207,   208,     0,   209,   210,   211,   212,
    1633,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,  1749,   221,     0,
       0,  1753,   121,     0,  1756,  1757,     0,   122,     0,     0,
     123,     0,     0,   171,     0,   396,  1634,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,   971,   221,     0,     0,     0,     0,   379,   972,
       0,  1786,  1787,  1788,     0,     0,     0,     0,     0,     0,
       0,     0,  1796,  1797,  1798,  1799,  1800,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,     0,  1638,     0,   831,     0,     0,
     832,     0,     0,   833,     0,     0,   834,     0,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,     0,     0,     0,   851,     0,     0,
       0,   171,   852,     0,     0,   853,  1841,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,     0,     0,  1862,     0,     0,     0,
       0,     0,     0,     0,     0,  1869,  1870,  1871,  1872,     0,
       0,  1875,     0,  1877,     0,     0,     0,     0,     0,     0,
       0,  1892,  1893,     0,     0,   206,   207,   208,     0,   209,
     210,   211,   212,   854,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,  1912,  1913,  1914,     0,
    1915,   221,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,  1931,     0,     0,     0,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     207,   208,  1942,   209,   210,   211,   212,     0,  1948,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   171,
       0,  1969,     0,     0,     0,     0,     0,   814,     0,     0,
       0,     0,     0,     7,     8,     9,     0,     0,    10,    11,
     815,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,  1993,  1994,  1995,    18,     0,     0,     0,   206,   207,
     208,  1639,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   171,   814,   221,     0,     0,     0,     0,     7,
       8,     9,     0,  2018,    10,    11,   815,     0,    13,     0,
       0,     0,  2026,     0,     0,  2029,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,  1857,     0,     0,     0,
       0,     0,   171,     0,     0,     0,     0,     0,     0,  2047,
       0,     0,     0,  1858,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,  2056,     0,     0,     0,     0,
    1859,     0,     0,     0,     0,     0,  2064,     0,     0,     0,
    2068,     0,     0,     0,     0,  2072,     0,   816,  2074,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,     0,     0,     0,   831,     0,     0,   832,
       0,     0,   833,     0,     0,   834,     0,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,     0,     0,     0,   851,     0,     0,     0,
       0,   852,     0,   816,   853,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,     0,
       0,     0,   831,     0,     0,   832,     0,     0,   833,     0,
       0,   834,     0,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,     0,
       0,     0,   851,     0,     0,   814,     0,   852,     0,     0,
     853,     7,     8,     9,     0,     0,    10,    11,   815,     0,
      13,     0,  1727,     0,   206,   207,   208,     0,   209,   210,
     211,   212,    18,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1860,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   814,     0,     0,     0,     0,     0,     7,     8,     9,
       0,     0,    10,    11,   815,     0,    13,     0,  1739,   206,
     207,   208,     0,   209,   210,   211,   212,     0,    18,   213,
     214,   215,   216,   217,   218,   219,   206,   207,   208,   220,
     209,   210,   211,   212,  1861,   221,   213,   214,   215,   216,
     217,   218,   219,   206,   207,   208,   220,   209,   210,   211,
     212,  1974,   221,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,     0,   816,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,     0,     0,     0,   831,     0,     0,   832,     0,     0,
     833,     0,     0,   834,     0,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,     0,     0,     0,   851,     0,     0,     0,     0,   852,
       0,   816,   853,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,     0,     0,     0,
     831,     0,     0,   832,     0,     0,   833,     0,     0,   834,
       0,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,     0,     0,     0,
     851,     0,     0,   814,     0,   852,     0,     0,   853,     7,
       8,     9,     0,     0,    10,    11,   815,     0,    13,     0,
    1741,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,   389,     0,
       0,   220,     0,     0,     0,     0,     0,   221,     0,   814,
       0,     0,     0,     0,     0,     7,     8,     9,     0,     0,
      10,    11,   815,     0,    13,     0,  1743,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,   206,   207,   208,   220,   209,   210,
     211,   212,     0,   221,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,   783,   784,   785,   786,   787,
     221,     0,   788,   789,   790,   791,   792,   793,   794,   795,
       0,     0,   796,   816,     0,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,     0,
       0,     0,   831,     0,     0,   832,     0,     0,   833,     0,
       0,   834,     0,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,     0,
       0,     0,   851,     0,     0,     0,     0,   852,     0,   816,
     853,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,     0,     0,     0,   831,     0,
       0,   832,     0,     0,   833,     0,     0,   834,     0,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,     0,     0,     0,   851,     0,
       0,   814,     0,   852,     0,     0,   853,     7,     8,     9,
       0,     0,    10,    11,   815,     0,    13,     0,  1744,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,   205,     0,
     220,     0,   390,     0,     0,     0,   221,   814,     0,     0,
       0,     0,     0,     7,     8,     9,     0,     0,    10,    11,
     815,     0,    13,     0,  1745,    92,    93,   162,     0,     0,
       0,     0,     0,     0,    18,     0,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   166,   167,     0,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   816,     0,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,     0,     0,     0,
     831,     0,     0,   832,     0,     0,   833,     0,     0,   834,
       0,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,     0,     0,     0,
     851,     0,     0,     0,     0,   852,     0,   816,   853,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,     0,     0,     0,   831,     0,     0,   832,
       0,     0,   833,     0,     0,   834,     0,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,     0,     0,     0,   851,     0,     0,   814,
       0,   852,     0,     0,   853,     7,     8,     9,     0,     0,
      10,    11,   815,     0,    13,     0,  1963,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
     206,   207,   208,   281,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,   814,   221,     0,     0,     0,
       0,     7,     8,     9,     0,     0,    10,    11,   815,     0,
      13,     0,  1970,     0,     0,   121,    92,    93,     6,   485,
     122,     0,    18,   123,     0,   211,   212,    94,    95,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,     0,     0,     0,     0,     0,     0,     0,     0,   816,
       0,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,     0,     0,     0,   831,     0,
       0,   832,     0,     0,   833,     0,     0,   834,     0,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,     0,     0,     0,   851,     0,
       0,     0,     0,   852,     0,   816,   853,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,     0,     0,     0,   831,     0,     0,   832,     0,     0,
     833,     0,     0,   834,     0,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,     0,     0,     0,   851,     0,     0,   814,     0,   852,
       0,     0,   853,     7,     8,     9,     0,     0,    10,    11,
     815,     0,    13,     0,  2019,   206,   207,   208,     0,   209,
     210,   211,   212,     0,    18,   213,   214,   215,   216,   217,
     218,   219,   206,   207,   208,   220,   209,   210,   211,   212,
       0,   221,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,   814,     0,     0,     0,     0,   221,     7,
       8,     9,     0,   386,    10,    11,   815,     0,    13,     0,
    2021,    92,    93,     6,     0,     0,   121,     0,     0,     0,
      18,   122,    94,    95,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   816,     0,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,     0,     0,     0,   831,     0,     0,   832,
       0,     0,   833,     0,     0,   834,     0,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,     0,     0,     0,   851,     0,     0,     0,
       0,   852,     0,   816,   853,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,     0,
       0,   391,   831,     0,     0,   832,     0,     0,   833,     0,
       0,   834,     0,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   472,
       0,     0,   851,     0,     0,   814,     0,   852,     0,     0,
     853,     7,     8,     9,     0,     0,    10,    11,   815,     0,
      13,     0,  2023,    92,    93,   162,     0,     0,     0,     0,
       0,     0,    18,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   746,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,  2024,  1045,
       0,   121,     0,     0,     0,     0,   122,     0,     0,   123,
       0,     0,  1084,     0,     0,     0,     0,   780,   781,   782,
     783,   784,   785,   786,   787,     0,  1253,   788,   789,   790,
     791,   792,   793,   794,   795,     0,     0,   796,   206,   207,
     208,  1425,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   816,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,     0,     0,     0,   831,     0,     0,   832,     0,     0,
     833,     0,     0,   834,     0,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,     0,     0,     0,   851,     0,     0,     0,     0,   852,
       0,     0,   853,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,   206,   207,
     208,   220,   209,   210,   211,   212,     0,   221,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
    2048,     0,     0,   121,   221,     0,     0,     0,   122,   387,
       0,   123,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   780,   781,
     782,   783,   784,   785,   786,   787,     0,     0,   788,   789,
     790,   791,   792,   793,   794,   795,     6,  1547,   796,     0,
       0,     0,     7,     8,     9,     0,     0,    10,    11,    12,
       0,    13,     0,    14,    15,    16,    17,     0,     0,     0,
     206,   207,   208,    18,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,     0,     0,
       0,   388,     0,     0,     0,     0,    19,     0,  1548,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,  1549,    24,     0,     0,     0,   206,   207,   208,
       0,   209,   210,   211,   212,    25,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,  1550,   221,     0,     0,    26,     0,   466,     0,
       0,     0,     0,  1551,  1552,  1553,  1554,  1555,  1556,  1557,
    1558,  1559,  1560,  1561,  1562,  1563,  1564,  1565,  1566,  1567,
    1568,  1569,  1570,  1571,  1572,  1573,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,    27,     0,    28,     0,   467,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,   630,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,   631,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1332,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1340,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1349,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1582,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1607,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1608,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1609,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1614,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1620,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1627,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1647,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1811,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1812,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1820,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1826,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1827,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1851,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1852,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1853,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1903,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1924,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1926,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1956,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1957,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1958,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    2034,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  2061,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  2070,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  2073,
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
       0,     0,   221,   206,   207,   208,   865,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,   960,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    1802,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,  1916,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  1984,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  1986,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,  2014,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,  2015,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,  2016,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,  2038,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  2041,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  2067,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    2075,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,   222,
     206,   207,   208,   221,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,   312,   206,   207,   208,   221,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   369,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   370,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   371,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   372,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   373,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   374,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   375,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   376,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   377,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     378,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   380,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   381,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   382,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,   383,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,   384,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   385,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,   474,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,   505,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,   561,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
     562,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   563,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   564,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,   565,
     206,   207,   208,   221,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,   636,   206,   207,   208,   221,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,   757,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   862,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,   863,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1613,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1651,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  1809,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1823,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1921,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1922,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    1923,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  1928,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1938,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1939,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1959,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  2000,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  2054,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,   208,   220,   209,   210,   211,   212,
       0,   221,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   780,
     781,   782,   783,   784,   785,   786,   787,     0,     0,   788,
     789,   790,   791,   792,   793,   794,   795,     0,     0,   796,
       0,   906,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   780,   781,   782,   783,   784,
     785,   786,   787,     0,     0,   788,   789,   790,   791,   792,
     793,   794,   795,     0,     0,   796,   782,   783,   784,   785,
     786,   787,     0,     0,   788,   789,   790,   791,   792,   793,
     794,   795,     0,     0,   796
};

static const yytype_int16 yycheck[] =
{
       5,   509,     7,   503,   654,   898,    85,   976,   400,   595,
     903,   904,    17,     5,   522,   944,   945,     7,  1215,     5,
       5,     5,  1219,    28,   532,    85,     7,   860,   536,   147,
     148,   638,   540,     5,   239,    40,     5,   177,   266,   431,
     268,   874,   875,   876,   877,     3,     3,     5,     5,  1466,
       3,     3,     5,     5,   970,   888,   269,     5,     0,     5,
     273,     5,   180,    72,   269,  1482,   982,     5,     5,   263,
      78,  1488,     5,   239,     5,    84,   239,     5,     0,   273,
    1497,     5,     5,    11,    12,    13,  1503,  1504,    16,    17,
      18,    99,    20,     5,   273,     5,    68,   263,   684,   685,
     686,   687,   262,    72,    32,    99,   269,   101,   261,    67,
     760,   271,   762,   946,   947,   109,     5,     5,   338,   263,
       5,     7,    21,   261,    72,   269,    11,    12,    13,   273,
     270,    16,    17,    18,   260,    20,   969,   264,    66,    26,
     266,   748,   147,   148,   271,   150,   151,    32,    21,   154,
     155,   156,   157,   158,   159,   160,     7,    67,   276,   277,
      72,   264,    72,    26,    26,   150,   151,   263,   271,   154,
     155,   156,   157,   158,   159,   180,   181,   763,   398,   399,
     269,  1014,   574,    72,    72,  1078,   406,   684,   685,   686,
     687,   331,    91,   269,   270,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   329,  1409,   799,   263,   102,    89,   264,    91,     5,
     269,     3,   227,     5,   271,    11,    12,    13,  1121,   102,
      16,    17,    18,    89,    20,   120,   121,   122,   123,   102,
     102,   263,   115,    99,   143,   101,    32,   269,   640,   367,
       5,     6,     5,     6,     9,    10,     9,    10,   262,   338,
     133,   270,   270,   269,   262,   262,   763,   271,    26,   168,
     169,   276,   277,   271,   271,   261,   270,   261,   338,   269,
     266,   273,   263,   362,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
    1133,   253,   799,   261,   261,     5,  1139,   269,   261,   261,
     269,   269,   269,    99,   272,   272,     6,   263,   266,   272,
     272,   269,     5,   909,   329,   269,   595,   273,    11,    12,
      13,   269,   269,    16,    17,    18,   269,    20,   269,   344,
     458,   346,   270,   348,   102,   269,   269,   263,   269,    32,
     136,    26,   264,   269,   266,  1248,   266,   143,   498,   344,
      89,    26,   367,   348,   146,    85,   264,   254,    85,    89,
      99,   270,   872,   271,  1207,  1208,  1209,   266,   266,    99,
     273,    99,    99,  1216,    85,   270,   115,    70,    89,    90,
     119,   254,   254,   261,   269,   263,     5,   270,   403,   264,
     263,   263,    11,    12,    13,   410,   271,    16,    17,    18,
     110,    20,   909,  1246,   270,   684,   685,   686,   687,   424,
     120,   239,  1255,    32,   269,   143,    85,   102,   264,   269,
      81,    82,    91,   438,   252,   271,   218,   102,   443,   269,
      99,    89,   269,   273,   449,   263,   451,   452,   239,  1866,
     455,     7,   457,   458,  1370,  1371,  1372,   264,  1374,  1876,
     101,   269,    71,     7,   271,   113,     5,   264,   119,   264,
     111,   112,   113,  1059,   271,   133,   271,   195,  1675,   197,
      89,   264,   133,   238,   270,   238,     7,  1073,   271,   494,
      99,   100,   247,   248,   763,  1328,   254,  1083,   503,   108,
     264,   110,   220,     7,   264,   263,     7,   271,   269,   270,
     595,   271,   781,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   791,   792,   793,   794,   795,   796,   264,   264,
     799,     5,     7,   264,   261,   271,   271,    11,    12,    13,
     271,   270,    16,    17,    18,     7,    20,     7,  1048,  1382,
     270,  1968,   270,   270,  1971,     5,   269,  1450,    32,  1452,
     273,    11,    12,    13,  1981,  1982,    16,    17,    18,   270,
      20,   264,   237,   264,   270,   271,  1073,   582,   271,   254,
     271,  1778,    32,  1091,   264,     7,  1083,   270,   263,   254,
     595,   271,   597,   270,   271,     7,   601,   582,   603,   684,
     685,   686,   687,  2020,     7,   269,   611,   612,     7,   273,
     615,   270,   597,   269,   619,     7,   601,   273,   603,   270,
       7,   269,   270,   628,    21,  1458,   611,   612,     7,   270,
     615,  1547,  1548,   638,   619,   270,   271,   642,  1567,  1555,
     909,     5,     7,   628,   271,   272,   263,    11,    12,    13,
     269,   270,    16,    17,    18,     7,    20,   642,     5,     5,
       7,   270,   269,   270,   269,    11,    12,    13,    32,     7,
      16,    17,    18,   196,    20,    22,    23,    24,   763,   684,
     685,   686,   687,   269,   270,   690,    32,     5,     6,  1605,
       7,  1607,    39,   262,    91,   269,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,  1545,   263,   799,   263,   252,   253,   254,   255,
     263,     5,   143,     5,   729,   146,   263,    11,    12,    13,
     270,   271,    16,    17,    18,   271,    20,   269,   270,   136,
     161,   162,  1658,   748,   165,   166,   143,   144,    32,    92,
      93,    94,    95,    96,    97,   270,   271,    99,   763,   101,
     102,   103,   104,   105,   106,   107,   254,   255,   256,   257,
     263,   168,   260,   778,   171,   172,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   932,   263,   799,   269,   270,   270,   271,   263,
    1769,  1770,   270,   271,  1073,  1455,  1456,  1457,   813,   814,
       5,   263,   143,     7,  1083,   146,    11,    12,    13,   269,
     270,    16,    17,    18,   909,    20,   270,   271,   813,   263,
     161,   162,   163,  1419,   254,   255,   256,    32,   270,   271,
     260,   270,   271,  1235,  1430,   263,   266,   270,   271,   270,
    1766,     7,   199,   858,   859,   860,   252,   253,   254,   255,
     256,   257,   263,   981,   260,   983,   871,   872,   263,   874,
     875,   876,   877,   270,  1266,   269,   270,   263,   883,   270,
     271,     7,  1274,   888,  1276,   270,   271,     5,   270,   271,
     263,   970,   263,    11,    12,    13,   263,  1015,    16,    17,
      18,   263,    20,   982,   909,   269,   270,   270,   271,   270,
     271,     7,  1805,   263,    32,   263,  1308,   270,   271,   270,
     271,  1313,   271,   269,   270,   270,   271,   270,   270,   270,
     271,   263,   937,  1430,   270,   271,   270,   271,   263,   270,
     263,   946,   947,   240,   241,   242,     7,   244,   245,   246,
     247,   956,   263,   250,   251,   252,   253,   254,   255,   256,
     965,   966,   263,   260,   969,   270,   271,    99,   263,   266,
     270,   271,   263,   270,   979,   980,   981,   263,   983,   984,
     985,   270,   271,   115,   989,   269,   270,   263,  1073,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1083,     5,
    1005,  1006,   263,  1836,   263,   137,   270,   271,  1924,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,     5,  1031,   270,   271,   271,
    1035,    11,    12,    13,  1558,  1559,    16,    17,    18,   264,
      20,   239,   239,  1048,   264,   252,   253,   254,   255,   256,
    1883,   239,    32,   260,  1947,     3,     4,     5,   269,   266,
     264,   193,   271,   264,     7,   264,    14,    15,  1073,     7,
     263,  1987,     5,     5,   269,   270,     5,   269,  1083,    27,
      28,    29,    30,   269,     5,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     269,  2027,     5,     5,     5,   269,   269,   269,   239,   264,
      11,    12,    13,     5,     5,    16,    17,    18,  1133,    20,
     269,   269,     5,  2049,  1139,     3,     4,     5,   270,   269,
       5,    32,   269,     5,   269,     5,    14,    15,   264,     7,
       7,   269,   270,     7,     7,     7,  1806,     7,   239,     8,
       7,  1430,     3,     4,     5,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     269,     7,    33,    34,    35,    36,    37,  1202,  1203,     7,
       7,  1701,  1207,  1208,  1209,   263,     5,   263,   254,     7,
       7,  1216,    11,    12,    13,     7,     7,    16,    17,    18,
       7,    20,     5,   239,   269,    84,     7,    86,    87,    88,
       7,     7,     5,    32,   270,     7,     7,     7,    11,    12,
      13,  1246,     7,    16,    17,    18,     7,    20,     7,     7,
    1255,   264,    69,     7,   266,     5,  1396,   254,     7,    32,
     269,     7,   529,     7,     7,     7,   125,   126,   127,   128,
     129,   130,   131,     5,   133,   134,   270,   269,     8,    11,
      12,    13,   264,     5,    16,    17,    18,   263,    20,   269,
     270,  1370,  1371,  1372,   263,  1374,   263,   263,   263,     3,
      32,   263,     5,   263,   263,   253,     7,   263,   269,   263,
     258,   269,   269,   261,   269,  1320,  1321,   263,   270,   264,
    1325,     5,   270,  1328,   263,   269,   263,    11,    12,    13,
       5,     5,    16,    17,    18,   263,    20,   263,    43,    44,
     607,   247,   260,   270,     3,  1430,   269,   120,    32,   263,
     263,   263,   263,   263,  1359,  1863,   263,    89,   204,   205,
     206,   207,   208,   209,   210,   211,   212,    99,   263,   263,
       7,   269,  1377,  1378,   263,  1380,  1381,  1382,   269,   270,
      85,    86,   269,   263,  1389,   253,   263,   263,   263,   263,
     258,   263,   263,   261,  1534,     6,  1536,  1537,  1538,   263,
     263,   269,   263,   269,  1389,   137,   138,   139,   140,   141,
     142,   270,   263,   269,   269,     5,   121,   122,   123,   263,
     263,    11,    12,    13,  1542,  1430,    16,    17,    18,   263,
      20,   263,   263,  1551,   263,   239,   266,  1442,     5,     5,
       5,   269,    32,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     5,  1458,    83,   269,   161,  1462,   264,  1464,
      89,   264,   263,     5,   264,   270,     5,   263,  1547,  1548,
     269,   270,     5,   102,   179,   264,  1555,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   270,     5,     5,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   269,   125,   126,   127,
     128,   129,   130,   131,   269,   133,  1605,     5,  1607,  1647,
    1648,     5,     5,     5,     5,     5,  1654,  1542,   270,     3,
    1545,     7,     5,   263,     5,     7,  1551,   263,   269,   816,
     263,   269,   271,  1693,     7,     7,     7,     7,     7,  1699,
       5,     7,  1680,  1681,     7,     7,    11,    12,    13,   274,
     275,    16,    17,    18,     7,    20,   281,     7,     7,  1658,
       7,     7,     5,   288,   271,   269,   270,    32,    11,    12,
      13,     7,     7,    16,    17,    18,   269,    20,  1603,   264,
     271,   263,     7,     7,     7,  1610,     7,  1612,     7,    32,
    1615,   878,   879,   880,   881,   269,  1621,     5,   885,   263,
     263,     7,     7,     7,     7,  1630,     7,     7,     7,   334,
       7,  1636,  1637,   338,     7,   340,     7,     7,     7,     7,
       7,   270,  1647,  1648,     7,  1763,     7,  1765,     7,  1654,
       7,     7,     7,     5,     5,     5,   263,   362,     7,   246,
     247,   366,   270,   250,   251,   252,   253,   254,   255,   256,
     257,     5,     5,   260,   379,  1680,  1681,     7,     7,   269,
     270,   386,   387,   388,   389,     7,   391,  1766,     7,   394,
     395,   396,     7,     7,     7,     7,  1701,    84,     8,    86,
     264,     5,    89,  1843,  1844,  1845,  1846,    11,    12,    13,
     264,   271,    16,    17,    18,   264,    20,   264,   264,   271,
     271,   271,     7,   271,   991,   992,   271,   271,    32,   264,
     271,   271,   264,   271,     7,   271,   270,  1004,   125,   126,
     127,   128,   129,   130,   131,   271,   133,   271,   271,   271,
     271,   270,   269,   198,   199,   200,   201,   271,  1763,   271,
    1765,   466,   467,   271,     7,   269,   271,   472,     3,     4,
       5,   271,   271,     3,   271,   269,   269,     7,   269,    14,
      15,   271,   270,     3,   271,   271,  1053,   271,  1055,   271,
       7,   496,   115,     7,   263,  1062,   264,   264,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,  1094,    63,    64,
       7,  1836,     7,     7,     3,    65,     7,     7,   269,     7,
       7,    71,     7,     7,     7,  1924,   269,   270,  1988,     7,
    1990,  1991,     7,   558,    84,   269,    86,   269,   269,   269,
     269,   269,     7,     7,     7,     5,     7,   572,    98,   213,
       7,   269,   102,   269,   269,   269,     5,   133,  1883,     7,
     271,     5,   264,   270,   114,   590,   264,   263,     5,   264,
     125,     5,   264,     5,     7,   269,     7,   132,   264,   264,
     264,     7,     7,  2043,     7,   135,     7,     7,  1987,   271,
     264,   271,     5,   271,     3,  1920,     7,   264,   271,   264,
       7,     5,  1927,   271,   264,   630,   631,   264,   271,   634,
     240,   241,   242,   271,   244,   245,   246,   247,   269,   271,
     250,   251,   252,   253,   254,   255,   256,   271,  2027,     5,
     260,  1218,     5,   271,   271,     7,   266,   266,   269,   264,
     270,   269,   192,   269,   194,   269,   270,   240,   241,   242,
    2049,   244,   245,   246,   247,   269,   264,   250,   251,   252,
     253,   254,   255,   256,   270,   264,   264,   260,   270,   270,
     264,     7,     7,   266,  1999,     7,  2001,     7,  2003,  2004,
       7,     7,     7,     7,     7,     7,   711,     7,     7,     7,
       7,   246,  2017,     7,     7,   138,     7,   252,   253,   269,
     271,     7,   264,   258,     6,   269,   261,     7,     7,     7,
    2035,   266,   267,     7,   269,    84,     5,    86,    87,    88,
     114,   746,   747,     7,   271,   271,    19,   271,   264,   271,
     271,   264,  1319,   271,   264,   264,   271,   269,   269,  1326,
       7,   269,   269,     5,     7,   271,   271,  1334,   269,     7,
    1337,     7,   269,     7,     7,  1342,   125,   126,   127,   128,
     129,   130,   131,     7,   133,   134,     7,  1354,     7,     5,
       5,     5,    84,   798,    86,     7,   269,    89,   264,     5,
    1367,   263,  1369,   240,   241,   242,     5,   244,   245,   246,
     247,   264,   264,   250,   251,   252,   253,   254,   255,   256,
       5,   270,   264,   260,     7,     7,  1393,     7,     7,   266,
       7,     7,   270,   125,   126,   127,   128,   129,   130,   131,
       7,   133,     7,     7,     3,     4,     5,     7,   269,   271,
    1417,  1418,     7,  1420,     7,    14,    15,     7,     7,   269,
       7,     7,     7,     7,     7,     7,     7,   269,     7,   264,
    1437,   269,   269,   269,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,   270,    63,    64,     3,     4,     5,     6,
     269,   269,     9,     7,   271,   269,   264,    14,    15,   269,
       7,   270,     7,   270,   269,    65,     7,   271,     7,   270,
      27,    28,    29,    30,    31,   270,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   269,   967,     7,   135,   970,   125,     7,   269,     5,
       7,   935,   694,   132,   269,    72,     7,   982,   270,   936,
     269,   271,   270,     3,     4,     5,     6,   270,  2063,     9,
     581,  1066,   810,   270,    14,    15,  1388,   546,   270,  1203,
     859,  1541,  1007,  1662,  1009,  1041,  1011,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
    1045,    -1,    -1,    -1,    -1,    -1,    -1,  1614,    -1,    -1,
      -1,    -1,    -1,  1620,    -1,    -1,    -1,   240,   241,   242,
    1627,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,  1643,   260,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,   246,    -1,    -1,
      -1,    -1,    -1,   252,   253,    -1,    -1,  1664,    -1,   258,
      -1,    -1,   261,    -1,    -1,   264,   265,   266,   267,    -1,
     269,  1678,   240,   241,   242,   243,   244,   245,   246,   247,
      -1,    -1,   250,   251,   252,   253,   254,   255,   256,   257,
      -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,     7,    -1,
     237,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,   253,    -1,    -1,    -1,
      -1,   258,    14,    15,   261,    -1,    -1,    -1,    -1,   266,
      -1,    -1,   269,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,   240,
     241,   242,    -1,   244,   245,   246,   247,   237,     7,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,   253,    -1,   266,    -1,    -1,   258,    -1,
      -1,   261,    -1,    -1,  1249,     7,    -1,    -1,  1815,   269,
      -1,    -1,    -1,  1820,    -1,  1822,    -1,    -1,    -1,     3,
       4,     5,  1829,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,  1842,    -1,    -1,    -1,    -1,
      -1,    -1,  1849,    27,    28,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,  1881,    -1,    -1,  1322,  1323,  1324,
      -1,    -1,    -1,    -1,    -1,  1330,    -1,  1332,    -1,    -1,
    1335,  1336,    -1,    -1,    -1,  1340,    -1,    -1,  1343,  1344,
    1345,  1346,    -1,    -1,  1349,  1350,  1351,    -1,  1353,    -1,
      -1,    -1,  1357,  1358,    -1,    -1,    -1,  1362,  1363,    -1,
      -1,    -1,    -1,    -1,    -1,  1370,  1371,  1372,  1373,  1374,
    1937,   240,   241,   242,  1379,   244,   245,   246,   247,     7,
      -1,   250,   251,   252,   253,   254,   255,   256,  1955,    -1,
      -1,   260,     3,     4,     5,    -1,    -1,   266,    -1,    -1,
      -1,   253,    -1,    14,    15,    -1,   258,    -1,    -1,   261,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
     214,   260,    -1,    -1,   218,    -1,    -1,   266,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    84,   266,    86,    87,    -1,    89,   253,
      -1,    -1,    -1,    -1,   258,    -1,    -1,   261,    99,    -1,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,   116,   117,   118,    -1,    -1,
      -1,    -1,  1547,  1548,    -1,    -1,    -1,  1552,  1553,    -1,
    1555,  1556,   133,    -1,    -1,    -1,    -1,  1562,    -1,  1564,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,  1582,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    32,    -1,    -1,    -1,    -1,
    1605,  1606,  1607,  1608,  1609,    -1,    -1,    -1,    -1,    -1,
     191,    -1,   240,   241,   242,    -1,   244,   245,   246,   247,
       7,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,    -1,  1642,   266,    -1,
      -1,  1646,   253,    -1,  1649,  1650,    -1,   258,    -1,    -1,
     261,    -1,    -1,  1658,    -1,   266,     7,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,   263,   266,    -1,    -1,    -1,    -1,   271,   270,
      -1,  1696,  1697,  1698,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1707,  1708,  1709,  1710,  1711,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    -1,     7,    -1,   164,    -1,    -1,
     167,    -1,    -1,   170,    -1,    -1,   173,    -1,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,   194,    -1,    -1,
      -1,  1766,   199,    -1,    -1,   202,  1771,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,  1801,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1810,  1811,  1812,  1813,    -1,
      -1,  1816,    -1,  1818,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1826,  1827,    -1,    -1,   240,   241,   242,    -1,   244,
     245,   246,   247,   270,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,  1851,  1852,  1853,    -1,
    1855,   266,    -1,   240,   241,   242,    -1,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,  1880,    -1,    -1,    -1,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,  1897,   244,   245,   246,   247,    -1,  1903,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,  1924,
      -1,  1926,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1956,  1957,  1958,    32,    -1,    -1,    -1,   240,   241,
     242,     7,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,  1987,     5,   266,    -1,    -1,    -1,    -1,    11,
      12,    13,    -1,  1998,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,  2007,    -1,    -1,  2010,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,  2027,    -1,    -1,    -1,    -1,    -1,    -1,  2034,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2049,  2050,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,  2061,    -1,    -1,    -1,
    2065,    -1,    -1,    -1,    -1,  2070,    -1,   145,  2073,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,   194,    -1,    -1,    -1,
      -1,   199,    -1,   145,   202,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,    -1,
      -1,    -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,   194,    -1,    -1,     5,    -1,   199,    -1,    -1,
     202,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,   270,    -1,   240,   241,   242,    -1,   244,   245,
     246,   247,    32,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,     7,    -1,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,   270,   240,
     241,   242,    -1,   244,   245,   246,   247,    -1,    32,   250,
     251,   252,   253,   254,   255,   256,   240,   241,   242,   260,
     244,   245,   246,   247,     7,   266,   250,   251,   252,   253,
     254,   255,   256,   240,   241,   242,   260,   244,   245,   246,
     247,     7,   266,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,
      -1,    -1,    -1,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,    -1,    -1,    -1,   164,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,   199,
      -1,   145,   202,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    -1,    -1,    -1,
     164,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
     194,    -1,    -1,     5,    -1,   199,    -1,    -1,   202,    11,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
     270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,     8,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   266,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,   270,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,   240,   241,   242,   260,   244,   245,
     246,   247,    -1,   266,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,   243,   244,   245,   246,   247,
     266,    -1,   250,   251,   252,   253,   254,   255,   256,   257,
      -1,    -1,   260,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,    -1,
      -1,    -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,   194,    -1,    -1,    -1,    -1,   199,    -1,   145,
     202,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,    -1,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    -1,    -1,    -1,   194,    -1,
      -1,     5,    -1,   199,    -1,    -1,   202,    11,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,   270,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
     240,   241,   242,    -1,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,     8,    -1,
     260,    -1,   262,    -1,    -1,    -1,   266,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,   270,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    -1,    -1,    -1,
     164,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
     194,    -1,    -1,    -1,    -1,   199,    -1,   145,   202,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,   194,    -1,    -1,     5,
      -1,   199,    -1,    -1,   202,    11,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,   270,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
     240,   241,   242,     8,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,    -1,     5,   266,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,   270,    -1,    -1,   253,     3,     4,     5,     6,
     258,    -1,    32,   261,    -1,   246,   247,    14,    15,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,   266,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,    -1,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    -1,    -1,    -1,   194,    -1,
      -1,    -1,    -1,   199,    -1,   145,   202,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,    -1,    -1,    -1,   164,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,   194,    -1,    -1,     5,    -1,   199,
      -1,    -1,   202,    11,    12,    13,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,   270,   240,   241,   242,    -1,   244,
     245,   246,   247,    -1,    32,   250,   251,   252,   253,   254,
     255,   256,   240,   241,   242,   260,   244,   245,   246,   247,
      -1,   266,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,     5,    -1,    -1,    -1,    -1,   266,    11,
      12,    13,    -1,   271,    16,    17,    18,    -1,    20,    -1,
     270,     3,     4,     5,    -1,    -1,   253,    -1,    -1,    -1,
      32,   258,    14,    15,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,   194,    -1,    -1,    -1,
      -1,   199,    -1,   145,   202,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,    -1,
      -1,     8,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     8,
      -1,    -1,   194,    -1,    -1,     5,    -1,   199,    -1,    -1,
     202,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,   270,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,   270,     8,
      -1,   253,    -1,    -1,    -1,    -1,   258,    -1,    -1,   261,
      -1,    -1,    72,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,    -1,     8,   250,   251,   252,
     253,   254,   255,   256,   257,    -1,    -1,   260,   240,   241,
     242,   264,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    -1,   266,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,    -1,    -1,    -1,   164,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,   199,
      -1,    -1,   202,   240,   241,   242,    -1,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,
      -1,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,   240,   241,
     242,   260,   244,   245,   246,   247,    -1,   266,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
     270,    -1,    -1,   253,   266,    -1,    -1,    -1,   258,   271,
      -1,   261,    -1,   240,   241,   242,    -1,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,
      -1,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   266,   240,   241,
     242,   243,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,   257,     5,    78,   260,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    -1,    -1,    -1,
     240,   241,   242,    32,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    65,    -1,   139,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   173,   102,    -1,    -1,    -1,   240,   241,   242,
      -1,   244,   245,   246,   247,   114,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,   203,   266,    -1,    -1,   135,    -1,   271,    -1,
      -1,    -1,    -1,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
      -1,    -1,   266,   192,    -1,   194,    -1,   271,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,   240,   241,   242,   266,   244,   245,   246,   247,   271,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,   240,   241,   242,   266,   244,   245,
     246,   247,   271,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,   240,   241,   242,
     266,   244,   245,   246,   247,   271,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
     240,   241,   242,   266,   244,   245,   246,   247,   271,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,   240,   241,   242,   266,   244,   245,   246,
     247,   271,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,   240,   241,   242,   266,
     244,   245,   246,   247,   271,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   240,
     241,   242,   266,   244,   245,   246,   247,   271,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,   240,   241,   242,   266,   244,   245,   246,   247,
     271,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,   240,   241,   242,   266,   244,
     245,   246,   247,   271,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,   240,   241,
     242,   266,   244,   245,   246,   247,   271,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,   240,   241,   242,   266,   244,   245,   246,   247,   271,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,   240,   241,   242,   266,   244,   245,
     246,   247,   271,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,   240,   241,   242,
     266,   244,   245,   246,   247,   271,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
     240,   241,   242,   266,   244,   245,   246,   247,   271,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,   240,   241,   242,   266,   244,   245,   246,
     247,   271,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,   240,   241,   242,   266,
     244,   245,   246,   247,   271,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   240,
     241,   242,   266,   244,   245,   246,   247,   271,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,   240,   241,   242,   266,   244,   245,   246,   247,
     271,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,   240,   241,   242,   266,   244,
     245,   246,   247,   271,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,   240,   241,
     242,   266,   244,   245,   246,   247,   271,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,   240,   241,   242,   266,   244,   245,   246,   247,   271,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,   240,   241,   242,   266,   244,   245,
     246,   247,   271,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,   240,   241,   242,
     266,   244,   245,   246,   247,   271,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
     240,   241,   242,   266,   244,   245,   246,   247,   271,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,   240,   241,   242,   266,   244,   245,   246,
     247,   271,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,   240,   241,   242,   266,
     244,   245,   246,   247,   271,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   240,
     241,   242,   266,   244,   245,   246,   247,   271,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,   240,   241,   242,   266,   244,   245,   246,   247,
     271,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,   240,   241,   242,   266,   244,
     245,   246,   247,   271,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,   240,   241,
     242,   266,   244,   245,   246,   247,   271,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,   240,   241,   242,   266,   244,   245,   246,   247,   271,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   266,   240,   241,
     242,   270,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    -1,   266,   240,   241,   242,   270,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
      -1,   266,   240,   241,   242,   270,   244,   245,   246,   247,
      -1,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,   240,
     241,   242,   270,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,   266,   240,   241,   242,   270,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
      -1,    -1,   266,   240,   241,   242,   270,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,
     240,   241,   242,   270,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,    -1,    -1,   266,   240,   241,   242,
     270,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,   266,   240,   241,   242,   270,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,
     266,   240,   241,   242,   270,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   266,   240,   241,
     242,   270,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    -1,   266,   240,   241,   242,   270,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
      -1,   266,   240,   241,   242,   270,   244,   245,   246,   247,
      -1,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,   240,
     241,   242,   270,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,   266,   240,   241,   242,   270,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
      -1,    -1,   266,   240,   241,   242,   270,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,
     240,   241,   242,   270,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,    -1,    -1,   266,   240,   241,   242,
     270,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,   262,
     240,   241,   242,   266,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,   262,   240,   241,   242,   266,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,
     240,   241,   242,    -1,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,   266,   240,   241,   242,    -1,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
     266,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,   266,   240,   241,   242,    -1,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,   266,   240,   241,   242,    -1,   244,   245,   246,   247,
      -1,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,
     241,   242,    -1,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,   266,   240,   241,   242,    -1,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,
     240,   241,   242,    -1,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,   266,   240,   241,   242,    -1,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
     266,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,   266,   240,   241,   242,    -1,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,   266,   240,   241,   242,    -1,   244,   245,   246,   247,
      -1,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,
     241,   242,    -1,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,   266,   240,   241,   242,    -1,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,
     240,   241,   242,    -1,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,   262,
     240,   241,   242,   266,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,   262,   240,   241,   242,   266,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,
     240,   241,   242,    -1,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,   266,   240,   241,   242,    -1,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
     266,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,   266,   240,   241,   242,    -1,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,   266,   240,   241,   242,    -1,   244,   245,   246,   247,
      -1,    -1,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,
     241,   242,    -1,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,   266,   240,   241,   242,    -1,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,   266,
     240,   241,   242,    -1,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,   266,   240,   241,   242,    -1,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
     266,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,   266,   240,   241,   242,    -1,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,   242,   260,   244,   245,   246,   247,
      -1,   266,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,   240,
     241,   242,   243,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,   257,    -1,    -1,   260,
      -1,   262,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    -1,   266,   240,   241,   242,   243,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,   257,    -1,    -1,   260,   242,   243,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,   257,    -1,    -1,   260
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   275,   276,     0,   277,   278,     5,    11,    12,    13,
      16,    17,    18,    20,    22,    23,    24,    25,    32,    65,
      71,    84,    86,    98,   102,   114,   135,   192,   194,   279,
     280,   438,   451,   452,   460,   461,   273,   261,   266,   461,
     261,     7,     5,   261,   261,     5,     7,    22,    23,    24,
      39,   199,     7,     3,     7,    65,    71,    84,    86,    98,
     102,   114,   135,   192,   194,     6,     9,    10,   238,   461,
     462,   463,   263,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   461,   273,   239,   269,     6,     7,     7,
     461,   133,     3,     4,    14,    15,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   253,   258,   261,   455,   456,   461,   464,   465,   455,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   263,   261,   453,
     281,   337,   322,   328,   344,   302,   367,   393,   423,   434,
     196,   269,     5,     6,    27,    28,    29,    30,    31,   237,
     269,   455,   457,   459,   463,   455,   262,   271,   262,   269,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   455,   455,   455,     8,   240,   241,   242,   244,
     245,   246,   247,   250,   251,   252,   253,   254,   255,   256,
     260,   266,   262,   462,   462,   264,   271,   298,     5,    66,
     270,   282,   283,   451,   461,   269,   270,   338,   451,   269,
     270,   269,   270,   269,   270,   345,   451,    70,   270,   303,
     451,   461,   269,   270,   368,   451,   269,   270,   394,   451,
     269,   270,   424,   451,   269,   270,   435,   451,   461,   455,
     269,     7,   263,   263,   263,   263,   263,   263,   455,   458,
     459,     8,     7,     7,   270,     7,   458,     7,   263,   455,
     462,   461,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   262,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   271,
     262,   271,     7,   461,   269,   299,   301,   263,   239,   252,
     263,   339,   323,   329,   346,   263,   263,   369,   395,   425,
     436,   439,   270,   270,   458,     5,     5,   455,   455,   462,
     462,   270,   271,   455,   262,   455,     8,   271,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   271,
     264,   264,   264,   264,   264,   264,   271,   271,   271,     8,
     262,     8,   462,   458,   239,   269,   266,   455,   239,   239,
     297,     5,    72,   266,   286,   290,   239,   455,    85,    89,
      99,   270,   340,    85,    99,   270,   324,    85,    91,    99,
     270,   330,    71,    89,    99,   100,   108,   110,   270,   347,
     451,   304,     5,   264,   286,   288,   461,    89,    99,   115,
     119,   270,   370,    99,   136,   143,   270,   396,   451,    99,
     115,   137,   193,   270,   426,    99,   143,   195,   197,   220,
     270,   437,   269,   270,   264,   271,   271,   271,   264,   264,
     455,   459,     8,     7,   264,   455,   462,   455,   455,   455,
     455,   455,   455,   264,   262,     6,   455,   455,   455,   270,
       5,   286,   286,   264,   298,     3,   261,   269,   272,   294,
     296,   461,     7,   263,   286,   264,     5,   269,     5,     5,
     461,   269,     5,   269,    26,   102,   254,   305,   306,     5,
     269,     5,     5,   461,   269,   269,   269,   264,   298,   239,
     264,     5,     5,   461,   269,   269,     5,   461,   269,   397,
       5,   461,   269,   461,   461,   461,   269,   461,   462,     5,
     440,     5,   455,   455,     7,     7,   455,     7,     8,   270,
     264,   264,   264,   264,   264,   262,   270,   270,     7,     7,
       7,   461,     8,   455,   295,   458,    67,   291,   294,     7,
     239,   269,   341,     7,   269,   299,     7,   325,     7,   331,
     263,   263,   254,     7,   309,   310,     7,   364,     7,   299,
       7,   348,   354,   361,     7,     5,   305,   239,     7,   299,
       7,   371,   377,   299,     7,   398,   269,   299,     7,   427,
       7,     7,     7,   440,     7,     7,     7,   270,   441,   264,
     271,   271,   455,   239,   269,   455,   262,   270,   298,   272,
     287,    69,   341,   269,   270,   451,     7,   269,   270,   269,
     270,   455,     5,   254,     5,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      64,   125,   132,   246,   252,   253,   258,   261,   266,   267,
     269,   311,   314,   392,   454,   456,   461,   464,   465,   269,
     270,   451,     7,   269,   270,   451,   269,   270,   269,   270,
     451,   269,     7,   305,     7,   269,   270,   451,   120,   121,
     122,   123,   270,   378,   451,     7,   269,   270,   451,   405,
       7,   269,   270,   451,   270,   198,   199,   200,   201,   442,
     451,   455,   455,   270,   269,   455,     8,     8,   253,   296,
     292,   298,   284,   270,   342,   326,   332,   264,   264,   392,
     263,   318,   263,   263,   263,   263,   315,   316,     5,   311,
     311,   311,   311,     3,     3,     5,   146,   218,     5,   461,
     240,   241,   242,   243,   244,   245,   246,   247,   250,   251,
     252,   253,   254,   255,   256,   257,   260,   266,   268,   263,
     319,   319,   365,   349,   355,   362,   455,     7,   372,   269,
     269,   269,   269,   399,     5,    18,   145,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   164,   167,   170,   173,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   194,   199,   202,   270,   406,   451,   428,   263,   263,
     263,   263,   264,   264,   270,   270,   455,   455,   296,   264,
       5,    68,   293,   263,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    83,    89,   102,   270,   343,    72,    84,
     270,   327,    85,    89,    90,   270,   333,   392,   263,   392,
     311,     5,     5,   263,   263,   247,   262,   461,   270,   312,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,     3,   455,   264,   265,
     311,   320,   269,   321,   101,   111,   112,   113,   270,   366,
      99,   101,   102,   103,   104,   105,   106,   107,   270,   350,
      99,   101,   109,   270,   356,    89,    99,   101,   270,   363,
     270,    84,    86,    87,    89,    99,   116,   117,   118,   133,
     191,   263,   270,   373,   383,   383,   387,   379,    89,    99,
     137,   138,   139,   140,   141,   142,   270,   400,   451,   263,
     461,   263,   263,   305,   263,   263,   263,   263,   263,   263,
     263,   263,   263,     7,   263,   263,   263,   263,   269,   263,
     269,   263,   269,   269,   263,   263,   263,   263,   263,   263,
     263,   263,   269,   269,   263,   263,   263,   263,   263,   269,
     269,   263,   407,   408,    78,    99,   270,   429,   444,   461,
       6,   444,   288,     6,   239,     8,   461,   294,   266,   288,
     288,   288,   288,   263,   305,   263,   305,   305,   305,   269,
     461,     5,   263,   305,    67,   288,     5,   269,     5,     5,
     264,   309,   264,   271,   263,   264,   309,   309,   263,   270,
     311,   264,   264,   271,    72,   458,     5,   290,   293,   461,
       5,     5,     5,   269,   269,   307,   307,   288,   288,     5,
       5,   269,   359,     5,   269,   357,     5,   461,     5,     5,
       5,     5,     5,   110,   120,   461,   461,   455,     3,   288,
     457,   375,    84,    86,    87,    88,   125,   126,   127,   128,
     129,   130,   131,   133,   134,   270,   384,   391,   270,   133,
     270,   388,   391,    89,   113,   269,   270,   380,     5,   461,
     269,   401,   461,   462,   457,   462,   269,   403,   461,   461,
     461,     7,   305,   305,     7,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   305,   461,   461,   455,   412,   455,
     414,   455,   416,   418,   288,   462,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
       5,   461,   263,   263,   269,   461,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   447,   263,   446,   271,   447,
     443,   448,   269,   455,   294,     7,     7,     7,     7,   305,
       7,   305,     7,     7,     7,   456,     7,     7,   305,     7,
       7,     7,   321,   334,     7,     7,   271,   311,   317,   269,
     264,   271,   309,     8,   311,   263,   270,     7,     7,     7,
       7,     7,     7,   299,   269,   351,     5,   305,   308,     7,
       7,     7,     7,     7,   360,     7,   358,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,   374,     7,
       7,     7,     7,   309,     5,     5,     5,   263,   288,     7,
     263,   288,   263,     5,     5,   381,     7,     7,   402,     7,
       7,     7,     7,   404,     7,     7,   264,   264,   264,   271,
     271,   271,   271,   271,   271,   271,   271,   264,   271,   264,
     271,   264,   271,   143,   146,   161,   162,   163,   270,   413,
     271,   143,   146,   161,   162,   165,   166,   270,   415,   271,
      21,    91,   143,   168,   169,   270,   417,    21,    91,   136,
     143,   144,   168,   171,   172,   270,   419,   271,   264,   271,
     271,   271,   271,   271,   271,   270,   270,   271,   271,   271,
     271,   271,   271,   271,   264,   307,   409,   461,   409,   430,
       7,   288,   288,   269,   288,   269,   269,   269,   269,   269,
     448,   288,   252,   253,   254,   255,   271,   445,   237,   305,
     448,   271,   264,   271,   449,   270,   285,   271,   271,   298,
     271,     7,   269,   270,   288,   264,   309,   455,     3,   264,
     313,   288,     7,   115,     7,   298,   270,   271,   270,   298,
     270,   298,   263,   376,   264,     7,     7,     7,     3,     7,
     385,     7,   389,     7,     7,    81,    82,   119,   133,   270,
     382,   270,   298,   270,   298,     7,   269,     7,   305,   461,
     461,   455,   455,   455,   461,   305,     7,   288,     7,   455,
       7,   455,   269,   305,   455,   455,   305,   455,   269,   305,
     455,   455,   455,   455,   455,   455,   455,   269,   455,   305,
     455,   455,   461,   269,   269,   455,   455,   269,   305,     7,
     305,   457,   457,   457,   455,   457,     7,     7,   461,   461,
     455,   461,   461,   288,     5,     7,   410,   410,     5,   120,
     270,   451,   213,   305,   269,   458,   269,   269,   269,   264,
     264,     5,   263,   448,   264,   133,     7,    78,   139,   173,
     203,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   271,   305,   305,   456,   305,   335,
     264,   264,   271,   264,   311,   264,     5,     5,   305,     5,
       5,   461,     7,     7,   264,   309,   309,   392,   392,   392,
     288,   461,   461,   405,   264,   271,   271,   271,   271,   271,
     271,   264,   271,   264,   271,   405,     7,     7,     7,     7,
     271,   405,     7,     7,     7,     7,     7,   271,     7,     7,
     405,     7,     7,     7,     7,     7,   405,   405,     7,     7,
     420,   264,   271,   271,   264,   264,   271,   271,   271,   271,
     271,   264,   264,   264,   271,   270,   271,   264,   271,   411,
     264,   269,   269,     5,   271,   458,   270,   458,   458,   458,
       7,   446,   462,   264,     7,   288,   457,   457,   269,     5,
     247,   248,   462,   455,   455,   457,   455,     5,   450,   450,
     450,   455,     5,   269,   455,   307,   269,   269,   269,   269,
       3,   266,   264,   264,   270,   264,    92,    93,    94,    95,
      96,    97,   270,   336,   264,   455,   270,     7,   270,   264,
       7,   386,   390,     7,     7,     7,     7,   270,     7,   457,
     455,   457,   455,   455,   461,     7,   461,     7,   305,   270,
     305,   270,   305,   270,   270,   270,   269,   270,     7,   455,
     305,     7,     7,   455,   462,   462,   455,   455,     7,     7,
       7,   462,     7,   138,     7,   214,   218,   457,     7,   431,
     431,   269,   305,   270,   270,   270,   270,   271,   264,     7,
     448,   305,   462,   462,     6,   458,   455,   455,   455,   458,
     294,     7,     7,     7,     7,     5,   455,   455,   455,   455,
     455,   269,   270,   114,     7,   271,   271,    19,   264,   264,
     271,   271,   271,   271,   264,   271,   271,   264,   271,   421,
     271,   264,   271,   264,   264,   264,   271,   271,   270,   271,
     462,   462,   457,    84,    86,    89,   133,   270,   391,   432,
     270,   455,   271,   269,   269,   269,   269,   448,   264,   271,
     270,   271,   271,   271,   270,   271,     7,     7,     7,     7,
       7,     7,   455,     5,   309,   392,   269,     7,     7,   455,
     455,   455,   455,     7,   305,   455,   269,   455,    21,    89,
      91,   102,   115,   133,   270,   422,   305,     7,   305,     7,
       7,     7,   455,   455,     7,   305,   270,   271,     5,     5,
       5,   288,   263,   271,   305,   458,   458,   458,   458,   264,
       7,   305,   455,   455,   455,   455,   270,   299,   264,   264,
     405,   264,   264,   264,   271,   264,   271,   405,   264,     5,
       5,   455,   305,     5,   288,   264,   264,   271,   264,   264,
     270,     7,   455,     7,     7,     7,     7,   433,   455,   270,
     270,   270,   270,   270,     7,   271,   271,   271,   271,   264,
       7,     7,     7,   270,     7,     7,     7,   457,   269,   455,
     270,   269,     7,     7,     7,     7,     7,     7,     7,     7,
     305,   269,   269,     7,   270,   309,   270,   269,   269,   270,
     269,   269,   305,   455,   455,   455,     7,   352,   271,   405,
     264,   405,   264,   405,   405,     7,   264,   269,   457,   458,
     269,   458,   458,   270,   270,   270,   270,    65,   455,   270,
     269,   270,     7,   270,   270,     7,   455,   271,   270,   455,
     270,   270,   289,   461,   271,   405,     7,     7,   270,   457,
     270,   270,   270,   269,     7,   269,   300,   455,   270,   271,
     269,   458,   353,   270,   264,   457,   455,   270,   135,     7,
     270,   271,   270,     5,   455,   269,   300,   270,   455,     7,
     271,   270,   455,   271,   455,   270
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
#line 4182 "GetDP.y"
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
#line 4195 "GetDP.y"
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
#line 4210 "GetDP.y"
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
#line 4225 "GetDP.y"
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
#line 4240 "GetDP.y"
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
#line 4260 "GetDP.y"
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
#line 4281 "GetDP.y"
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
#line 4293 "GetDP.y"
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
#line 4313 "GetDP.y"
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
#line 4326 "GetDP.y"
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
#line 4343 "GetDP.y"
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
#line 4362 "GetDP.y"
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
#line 4383 "GetDP.y"
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
#line 4397 "GetDP.y"
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
#line 4411 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 442:
#line 4418 "GetDP.y"
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
#line 4430 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ADDCORRECTION;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(3) - (5)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (5)].c)) ;
      Free((yyvsp[(3) - (5)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 444:
#line 4442 "GetDP.y"
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

  case 445:
#line 4476 "GetDP.y"
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

  case 446:
#line 4489 "GetDP.y"
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

  case 447:
#line 4503 "GetDP.y"
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

  case 448:
#line 4516 "GetDP.y"
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

  case 449:
#line 4528 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 451:
#line 4537 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 453:
#line 4546 "GetDP.y"
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

  case 454:
#line 4557 "GetDP.y"
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

  case 455:
#line 4569 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 456:
#line 4579 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 457:
#line 4587 "GetDP.y"
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

  case 458:
#line 4600 "GetDP.y"
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

  case 459:
#line 4613 "GetDP.y"
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

  case 460:
#line 4627 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 461:
#line 4637 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 462:
#line 4647 "GetDP.y"
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

  case 463:
#line 4661 "GetDP.y"
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

  case 464:
#line 4675 "GetDP.y"
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

  case 465:
#line 4694 "GetDP.y"
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

  case 466:
#line 4712 "GetDP.y"
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

  case 467:
#line 4723 "GetDP.y"
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

  case 468:
#line 4738 "GetDP.y"
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

  case 469:
#line 4753 "GetDP.y"
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

  case 470:
#line 4768 "GetDP.y"
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

  case 471:
#line 4783 "GetDP.y"
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

  case 472:
#line 4798 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 473:
#line 4809 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 474:
#line 4814 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 475:
#line 4824 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 477:
#line 4834 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 478:
#line 4837 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 479:
#line 4847 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 480:
#line 4863 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 482:
#line 4879 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 483:
#line 4883 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 484:
#line 4887 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 485:
#line 4891 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 486:
#line 4896 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 487:
#line 4907 "GetDP.y"
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

  case 489:
#line 4924 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 490:
#line 4928 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 491:
#line 4932 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 492:
#line 4936 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 493:
#line 4940 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4945 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 495:
#line 4956 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 497:
#line 4971 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 498:
#line 4975 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 499:
#line 4979 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 500:
#line 4983 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 501:
#line 4987 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 502:
#line 4998 "GetDP.y"
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

  case 504:
#line 5016 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 505:
#line 5020 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 506:
#line 5024 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 507:
#line 5028 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 508:
#line 5033 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 509:
#line 5043 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 510:
#line 5049 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 511:
#line 5055 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 512:
#line 5065 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 513:
#line 5068 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 514:
#line 5073 "GetDP.y"
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

  case 516:
#line 5091 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 517:
#line 5101 "GetDP.y"
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

  case 518:
#line 5130 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 519:
#line 5133 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 520:
#line 5136 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 521:
#line 5144 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 522:
#line 5161 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 524:
#line 5173 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 526:
#line 5182 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 528:
#line 5195 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 529:
#line 5202 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 530:
#line 5210 "GetDP.y"
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

  case 531:
#line 5223 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 532:
#line 5228 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 533:
#line 5234 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 534:
#line 5237 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 535:
#line 5240 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 536:
#line 5246 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 538:
#line 5257 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 539:
#line 5260 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 540:
#line 5266 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 541:
#line 5271 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 542:
#line 5277 "GetDP.y"
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

  case 543:
#line 5289 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 544:
#line 5294 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 546:
#line 5308 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 547:
#line 5315 "GetDP.y"
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

  case 548:
#line 5343 "GetDP.y"
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

  case 549:
#line 5354 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 550:
#line 5359 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 551:
#line 5368 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 552:
#line 5385 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 554:
#line 5397 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 556:
#line 5404 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 558:
#line 5416 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 559:
#line 5423 "GetDP.y"
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

  case 560:
#line 5435 "GetDP.y"
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

  case 561:
#line 5446 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 562:
#line 5451 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 563:
#line 5457 "GetDP.y"
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

  case 564:
#line 5474 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 565:
#line 5484 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 566:
#line 5487 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 567:
#line 5491 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 568:
#line 5504 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 569:
#line 5509 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 570:
#line 5514 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 571:
#line 5523 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 5532 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 573:
#line 5541 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 574:
#line 5547 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 575:
#line 5552 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 576:
#line 5560 "GetDP.y"
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

  case 577:
#line 5572 "GetDP.y"
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

  case 578:
#line 5595 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 579:
#line 5596 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 580:
#line 5597 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 581:
#line 5598 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 582:
#line 5604 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 583:
#line 5606 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 584:
#line 5612 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 585:
#line 5618 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 586:
#line 5625 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 587:
#line 5634 "GetDP.y"
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

  case 588:
#line 5656 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 589:
#line 5664 "GetDP.y"
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

  case 590:
#line 5675 "GetDP.y"
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

  case 591:
#line 5689 "GetDP.y"
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

  case 592:
#line 5710 "GetDP.y"
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

  case 593:
#line 5737 "GetDP.y"
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

  case 594:
#line 5768 "GetDP.y"
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

  case 595:
#line 5788 "GetDP.y"
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

  case 597:
#line 5824 "GetDP.y"
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

  case 598:
#line 5838 "GetDP.y"
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

  case 599:
#line 5852 "GetDP.y"
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

  case 600:
#line 5866 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 601:
#line 5870 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 602:
#line 5874 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 603:
#line 5878 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 604:
#line 5882 "GetDP.y"
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

  case 605:
#line 5892 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 606:
#line 5897 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 607:
#line 5902 "GetDP.y"
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

  case 608:
#line 5922 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 609:
#line 5926 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 610:
#line 5933 "GetDP.y"
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

  case 611:
#line 5943 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 612:
#line 5952 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 613:
#line 5961 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 614:
#line 5968 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 615:
#line 5976 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 616:
#line 5980 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 617:
#line 5989 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 618:
#line 5993 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 619:
#line 5997 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 620:
#line 6005 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 621:
#line 6011 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 622:
#line 6015 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 623:
#line 6023 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 624:
#line 6030 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 625:
#line 6038 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 626:
#line 6045 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 627:
#line 6053 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 628:
#line 6060 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 629:
#line 6068 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 630:
#line 6072 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 631:
#line 6081 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 632:
#line 6087 "GetDP.y"
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

  case 633:
#line 6137 "GetDP.y"
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

  case 634:
#line 6152 "GetDP.y"
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

  case 635:
#line 6168 "GetDP.y"
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

  case 636:
#line 6188 "GetDP.y"
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

  case 637:
#line 6208 "GetDP.y"
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

  case 638:
#line 6246 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 639:
#line 6250 "GetDP.y"
    {
    ;}
    break;

  case 642:
#line 6266 "GetDP.y"
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

  case 643:
#line 6281 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 644:
#line 6287 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 645:
#line 6293 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 646:
#line 6299 "GetDP.y"
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

  case 647:
#line 6315 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 648:
#line 6320 "GetDP.y"
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

  case 649:
#line 6336 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 650:
#line 6341 "GetDP.y"
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

  case 651:
#line 6353 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 652:
#line 6363 "GetDP.y"
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

  case 653:
#line 6377 "GetDP.y"
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

  case 655:
#line 6403 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 656:
#line 6409 "GetDP.y"
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

  case 657:
#line 6423 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 658:
#line 6429 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 659:
#line 6439 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 660:
#line 6440 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 661:
#line 6441 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 662:
#line 6442 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 663:
#line 6443 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 664:
#line 6444 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 665:
#line 6445 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 666:
#line 6446 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 667:
#line 6447 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 668:
#line 6448 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 669:
#line 6449 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 670:
#line 6450 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 671:
#line 6451 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 672:
#line 6452 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 673:
#line 6453 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 674:
#line 6454 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 675:
#line 6455 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 676:
#line 6456 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 677:
#line 6457 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 678:
#line 6458 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 679:
#line 6459 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 680:
#line 6463 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 681:
#line 6464 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 682:
#line 6465 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 683:
#line 6466 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 684:
#line 6467 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 685:
#line 6468 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 686:
#line 6469 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 687:
#line 6470 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 688:
#line 6471 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 689:
#line 6472 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 690:
#line 6473 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 691:
#line 6474 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 692:
#line 6475 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 693:
#line 6476 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 694:
#line 6477 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 695:
#line 6478 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 696:
#line 6479 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 697:
#line 6480 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 698:
#line 6481 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 699:
#line 6482 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 700:
#line 6483 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 701:
#line 6484 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 702:
#line 6485 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 703:
#line 6486 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 704:
#line 6487 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 705:
#line 6488 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 706:
#line 6489 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 707:
#line 6490 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 708:
#line 6491 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 709:
#line 6492 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 710:
#line 6493 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6494 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 712:
#line 6495 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 713:
#line 6496 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 714:
#line 6497 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 715:
#line 6498 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 716:
#line 6499 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 717:
#line 6500 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 718:
#line 6502 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 719:
#line 6504 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 720:
#line 6506 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 721:
#line 6508 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 722:
#line 6513 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 723:
#line 6514 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 724:
#line 6515 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 725:
#line 6516 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 726:
#line 6517 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 727:
#line 6518 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 728:
#line 6519 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 729:
#line 6521 "GetDP.y"
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

  case 730:
#line 6539 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 731:
#line 6542 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 732:
#line 6548 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 733:
#line 6551 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 734:
#line 6558 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 735:
#line 6564 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 736:
#line 6567 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 737:
#line 6570 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 738:
#line 6582 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 739:
#line 6588 "GetDP.y"
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

  case 740:
#line 6599 "GetDP.y"
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

  case 741:
#line 6615 "GetDP.y"
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

  case 742:
#line 6637 "GetDP.y"
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

  case 743:
#line 6652 "GetDP.y"
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

  case 744:
#line 6690 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 745:
#line 6698 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 746:
#line 6710 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 747:
#line 6718 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 748:
#line 6732 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 749:
#line 6735 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 750:
#line 6742 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 751:
#line 6745 "GetDP.y"
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

  case 752:
#line 6760 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 753:
#line 6765 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 754:
#line 6770 "GetDP.y"
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

  case 755:
#line 6789 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 756:
#line 6799 "GetDP.y"
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

  case 757:
#line 6812 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;

  case 758:
#line 6824 "GetDP.y"
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
#line 12189 "GetDP.tab.c"
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


#line 6836 "GetDP.y"



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


