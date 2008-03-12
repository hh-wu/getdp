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

/* $Id: GetDP.tab.c,v 1.124 2008-03-12 16:09:20 dular Exp $ */
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
#define YYLAST   7625

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  274
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  759
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2080

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
    1680,  1692,  1698,  1706,  1712,  1720,  1738,  1752,  1768,  1780,
    1794,  1795,  1803,  1804,  1812,  1820,  1832,  1838,  1844,  1854,
    1864,  1874,  1880,  1886,  1898,  1908,  1923,  1938,  1946,  1959,
    1970,  1978,  1986,  1994,  1996,  1998,  2000,  2001,  2004,  2008,
    2012,  2015,  2016,  2019,  2023,  2027,  2031,  2035,  2040,  2041,
    2044,  2048,  2052,  2056,  2060,  2064,  2069,  2070,  2073,  2077,
    2081,  2085,  2089,  2094,  2095,  2098,  2102,  2106,  2110,  2114,
    2118,  2123,  2128,  2133,  2134,  2139,  2140,  2143,  2147,  2151,
    2155,  2159,  2163,  2167,  2168,  2171,  2175,  2177,  2178,  2181,
    2185,  2190,  2194,  2198,  2203,  2204,  2209,  2212,  2213,  2216,
    2220,  2225,  2226,  2232,  2238,  2241,  2242,  2245,  2246,  2253,
    2257,  2261,  2265,  2269,  2270,  2273,  2277,  2279,  2280,  2283,
    2287,  2291,  2295,  2299,  2304,  2305,  2314,  2315,  2316,  2320,
    2328,  2336,  2345,  2357,  2364,  2365,  2376,  2378,  2382,  2389,
    2391,  2393,  2395,  2397,  2398,  2402,  2404,  2407,  2410,  2423,
    2426,  2442,  2447,  2460,  2478,  2501,  2514,  2515,  2518,  2522,
    2527,  2532,  2536,  2539,  2542,  2546,  2550,  2554,  2558,  2562,
    2565,  2569,  2573,  2577,  2581,  2585,  2589,  2593,  2599,  2602,
    2605,  2609,  2619,  2623,  2626,  2636,  2639,  2649,  2652,  2662,
    2668,  2672,  2675,  2676,  2679,  2686,  2695,  2704,  2715,  2717,
    2722,  2724,  2726,  2732,  2737,  2742,  2750,  2755,  2763,  2769,
    2773,  2777,  2785,  2791,  2800,  2803,  2804,  2808,  2815,  2821,
    2827,  2829,  2831,  2833,  2835,  2837,  2839,  2841,  2843,  2845,
    2847,  2849,  2851,  2853,  2855,  2857,  2859,  2861,  2863,  2865,
    2867,  2869,  2871,  2875,  2878,  2881,  2885,  2889,  2893,  2897,
    2901,  2905,  2909,  2913,  2917,  2921,  2925,  2929,  2933,  2937,
    2942,  2947,  2952,  2957,  2962,  2967,  2972,  2977,  2982,  2987,
    2994,  2999,  3004,  3009,  3014,  3019,  3024,  3031,  3038,  3045,
    3051,  3053,  3055,  3058,  3060,  3062,  3064,  3066,  3068,  3070,
    3072,  3074,  3075,  3077,  3079,  3083,  3085,  3087,  3091,  3095,
    3099,  3105,  3109,  3114,  3119,  3126,  3135,  3144,  3150,  3156,
    3158,  3160,  3162,  3164,  3166,  3171,  3178,  3180,  3187,  3194
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
       7,    -1,   159,   263,   461,   271,   455,   264,     7,    -1,
     153,   263,   461,   271,   461,   271,   461,   271,   455,   271,
     457,   271,   455,   271,   455,   264,     7,    -1,   160,   263,
     455,   271,   455,   271,   305,   271,   305,   264,   269,   405,
     270,    -1,   164,   263,   455,   271,   455,   271,   305,   271,
     455,   271,   455,   264,   269,   405,   270,    -1,   167,   263,
     455,   271,   455,   271,   305,   264,   269,   405,   270,    -1,
     167,   263,   455,   271,   455,   271,   305,   271,   455,   264,
     269,   405,   270,    -1,    -1,   199,   407,   263,   409,   410,
     264,     7,    -1,    -1,   202,   408,   263,   409,   410,   264,
       7,    -1,   173,   263,   288,   271,   305,   264,     7,    -1,
     173,   263,   288,   271,   305,   271,   455,   271,   305,   264,
       7,    -1,   194,   263,   461,   264,     7,    -1,   175,   263,
     462,   264,     7,    -1,   179,   263,   461,   271,   457,   271,
     455,   264,     7,    -1,   180,   263,   461,   271,   455,   271,
     462,   264,     7,    -1,   181,   263,   461,   271,   457,   271,
     462,   264,     7,    -1,   182,   269,   461,   270,     7,    -1,
     183,   269,   461,   270,     7,    -1,   189,   269,   461,   271,
     288,   271,   462,   271,   305,   270,     7,    -1,   189,   269,
     461,   271,   288,   271,   462,   270,     7,    -1,   184,   263,
     461,   271,   461,   271,   455,   271,   455,   264,   269,   405,
     270,     7,    -1,   185,   263,   461,   271,   461,   271,   455,
     271,   455,   264,   269,   405,   270,     7,    -1,   186,   263,
     461,   271,   455,   264,     7,    -1,   190,   269,     5,   271,
       5,   271,   138,   462,   271,   455,   270,     7,    -1,   190,
     269,     5,   271,     5,   271,   138,   462,   270,     7,    -1,
     190,   269,     5,   271,     5,   270,     7,    -1,   187,   263,
     461,   271,   461,   264,     7,    -1,   188,   263,   461,   271,
     461,   264,     7,    -1,   451,    -1,   307,    -1,   461,    -1,
      -1,   410,   411,    -1,   271,   214,   462,    -1,   271,   218,
     457,    -1,   271,   457,    -1,    -1,   412,   413,    -1,   161,
     455,     7,    -1,   162,   455,     7,    -1,   146,   305,     7,
      -1,   163,   305,     7,    -1,   143,   269,   405,   270,    -1,
      -1,   414,   415,    -1,   161,   455,     7,    -1,   162,   455,
       7,    -1,   146,   305,     7,    -1,   165,   455,     7,    -1,
     166,   455,     7,    -1,   143,   269,   405,   270,    -1,    -1,
     416,   417,    -1,   168,   455,     7,    -1,    91,   455,     7,
      -1,   169,   305,     7,    -1,    21,   455,     7,    -1,   143,
     269,   405,   270,    -1,    -1,   418,   419,    -1,   168,   455,
       7,    -1,   171,   455,     7,    -1,    91,   455,     7,    -1,
      21,   455,     7,    -1,   136,   461,     7,    -1,   172,   269,
     420,   270,    -1,   143,   269,   405,   270,    -1,   144,   269,
     405,   270,    -1,    -1,   420,   269,   421,   270,    -1,    -1,
     421,   422,    -1,    89,     5,     7,    -1,   115,     5,     7,
      -1,   133,   288,     7,    -1,    91,   455,     7,    -1,   102,
     305,     7,    -1,    21,     5,     7,    -1,    -1,   423,   424,
      -1,   269,   425,   270,    -1,   451,    -1,    -1,   425,   426,
      -1,    99,   461,     7,    -1,    99,     5,   299,     7,    -1,
     137,   461,     7,    -1,   193,   461,     7,    -1,   115,   269,
     427,   270,    -1,    -1,   427,   269,   428,   270,    -1,   427,
     451,    -1,    -1,   428,   429,    -1,    99,   461,     7,    -1,
      78,   269,   430,   270,    -1,    -1,   430,   120,   269,   431,
     270,    -1,   430,     5,   269,   431,   270,    -1,   430,   451,
      -1,    -1,   431,   432,    -1,    -1,   391,   263,   433,   309,
     264,     7,    -1,    89,     5,     7,    -1,   133,   288,     7,
      -1,    84,     5,     7,    -1,    86,     5,     7,    -1,    -1,
     434,   435,    -1,   269,   436,   270,    -1,   451,    -1,    -1,
     436,   437,    -1,    99,   461,     7,    -1,   195,   461,     7,
      -1,   220,     5,     7,    -1,   197,   462,     7,    -1,   143,
     269,   440,   270,    -1,    -1,   194,   461,   196,   461,   439,
     269,   440,   270,    -1,    -1,    -1,   440,   441,   442,    -1,
     198,   263,   444,   447,   448,   264,     7,    -1,   199,   263,
     444,   447,   448,   264,     7,    -1,   199,   263,     6,   271,
     305,   448,   264,     7,    -1,   199,   263,     6,   271,   237,
     263,   462,   264,   448,   264,     7,    -1,   201,   263,     6,
     448,   264,     7,    -1,    -1,   200,   263,   288,   443,   271,
     133,   288,   448,   264,     7,    -1,   451,    -1,   461,   446,
     271,    -1,   461,   446,   445,     5,   446,   271,    -1,   254,
      -1,   255,    -1,   252,    -1,   253,    -1,    -1,   263,   288,
     264,    -1,   204,    -1,   205,   288,    -1,   206,   288,    -1,
     208,   269,   269,   458,   270,   269,   458,   270,   269,   458,
     270,   270,    -1,   207,   288,    -1,   207,   269,   305,   271,
     305,   271,   305,   270,   269,   457,   271,   457,   271,   457,
     270,    -1,   209,   269,   458,   270,    -1,   210,   269,   269,
     458,   270,   269,   458,   270,   270,   269,   455,   270,    -1,
     211,   269,   269,   458,   270,   269,   458,   270,   269,   458,
     270,   270,   269,   455,   271,   455,   270,    -1,   212,   269,
     269,   458,   270,   269,   458,   270,   269,   458,   270,   269,
     458,   270,   270,   269,   455,   271,   455,   271,   455,   270,
      -1,   205,   288,   213,     5,   269,   455,   271,   455,   270,
     269,   455,   270,    -1,    -1,   448,   449,    -1,   271,   214,
     462,    -1,   271,   214,   247,   462,    -1,   271,   214,   248,
     462,    -1,   271,   215,   455,    -1,   271,   223,    -1,   271,
     224,    -1,   271,   219,   455,    -1,   271,   220,     5,    -1,
     271,   221,   450,    -1,   271,   222,   450,    -1,   271,   220,
     450,    -1,   271,   217,    -1,   271,   216,   455,    -1,   271,
     218,   457,    -1,   271,   203,     5,    -1,   271,   226,     5,
      -1,   271,   225,   455,    -1,   271,    78,   457,    -1,   271,
     227,   455,    -1,   271,   227,   269,   458,   270,    -1,   271,
     228,    -1,   271,   229,    -1,   271,   139,   457,    -1,   271,
     173,   269,   305,   271,   305,   271,   305,   270,    -1,   271,
     230,   307,    -1,   271,   231,    -1,   271,   231,   269,   455,
     271,   455,   271,   455,   270,    -1,   271,   232,    -1,   271,
     232,   269,   455,   271,   455,   271,   455,   270,    -1,   271,
     233,    -1,   271,   233,   269,   455,   271,   455,   271,   455,
     270,    -1,   271,   234,   269,   458,   270,    -1,   271,   235,
       3,    -1,   271,   236,    -1,    -1,   450,     6,    -1,    16,
     261,   455,     8,   455,   262,    -1,    16,   261,   455,     8,
     455,     8,   455,   262,    -1,    16,     5,   133,   269,   455,
       8,   455,   270,    -1,    16,     5,   133,   269,   455,     8,
     455,     8,   455,   270,    -1,    17,    -1,    18,   261,   455,
     262,    -1,    20,    -1,   452,    -1,    32,   263,   453,   264,
       7,    -1,   461,   239,   457,     7,    -1,   461,   239,     6,
       7,    -1,   461,   239,   237,   263,   462,   264,     7,    -1,
     461,   239,   463,     7,    -1,   461,   239,    31,   263,   462,
     264,     7,    -1,    11,   261,     6,   262,     7,    -1,    11,
     461,     7,    -1,    11,   266,     7,    -1,    11,   261,     6,
     271,   458,   262,     7,    -1,    12,   261,   461,   262,     7,
      -1,    12,   261,   461,   262,   263,   455,   264,     7,    -1,
      13,     7,    -1,    -1,   453,   298,   461,    -1,   453,   298,
     461,   269,   455,   270,    -1,   453,   298,   461,   239,   455,
      -1,   453,   298,   461,   239,     6,    -1,    38,    -1,    39,
      -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,   461,    -1,   456,
      -1,   261,   455,   262,    -1,   253,   455,    -1,   258,   455,
      -1,   455,   253,   455,    -1,   455,   252,   455,    -1,   455,
     254,   455,    -1,   455,   255,   455,    -1,   455,   256,   455,
      -1,   455,   260,   455,    -1,   455,   246,   455,    -1,   455,
     247,   455,    -1,   455,   251,   455,    -1,   455,   250,   455,
      -1,   455,   245,   455,    -1,   455,   244,   455,    -1,   455,
     242,   455,    -1,   455,   241,   455,    -1,    38,   263,   455,
     264,    -1,    39,   263,   455,   264,    -1,    40,   263,   455,
     264,    -1,    41,   263,   455,   264,    -1,    42,   263,   455,
     264,    -1,    43,   263,   455,   264,    -1,    44,   263,   455,
     264,    -1,    45,   263,   455,   264,    -1,    46,   263,   455,
     264,    -1,    47,   263,   455,   264,    -1,    48,   263,   455,
     271,   455,   264,    -1,    49,   263,   455,   264,    -1,    50,
     263,   455,   264,    -1,    51,   263,   455,   264,    -1,    52,
     263,   455,   264,    -1,    53,   263,   455,   264,    -1,    54,
     263,   455,   264,    -1,    55,   263,   455,   271,   455,   264,
      -1,    56,   263,   455,   271,   455,   264,    -1,    57,   263,
     455,   271,   455,   264,    -1,   455,   240,   455,     8,   455,
      -1,   464,    -1,   465,    -1,   455,   266,    -1,     4,    -1,
       3,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      37,    -1,   461,    -1,    -1,   455,    -1,   459,    -1,   269,
     458,   270,    -1,   455,    -1,   459,    -1,   458,   271,   455,
      -1,   458,   271,   459,    -1,   455,     8,   455,    -1,   455,
       8,   455,     8,   455,    -1,     5,   269,   270,    -1,     5,
     269,   458,   270,    -1,    27,   263,     5,   264,    -1,    28,
     263,     5,   271,     5,   264,    -1,    29,   263,   455,   271,
     455,   271,   455,   264,    -1,    30,   263,   455,   271,   455,
     271,   455,   264,    -1,     5,   273,   269,   455,   270,    -1,
     460,   273,   269,   455,   270,    -1,     5,    -1,   460,    -1,
       6,    -1,   461,    -1,   463,    -1,    10,   261,   462,   262,
      -1,    10,   261,   462,   271,   458,   262,    -1,   238,    -1,
       9,   263,   462,   271,   462,   264,    -1,    14,   263,   462,
     271,   462,   264,    -1,    15,   263,   461,   264,    -1
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
    4396,  4410,  4417,  4429,  4441,  4453,  4487,  4500,  4514,  4527,
    4541,  4540,  4550,  4549,  4558,  4569,  4581,  4591,  4599,  4612,
    4625,  4639,  4649,  4659,  4673,  4687,  4705,  4724,  4735,  4750,
    4765,  4780,  4795,  4810,  4821,  4826,  4837,  4842,  4846,  4849,
    4859,  4876,  4885,  4891,  4895,  4899,  4903,  4908,  4920,  4930,
    4936,  4940,  4944,  4948,  4952,  4957,  4969,  4978,  4983,  4987,
    4991,  4995,  4999,  5011,  5023,  5028,  5032,  5036,  5040,  5045,
    5055,  5061,  5067,  5078,  5080,  5086,  5098,  5103,  5113,  5142,
    5145,  5148,  5156,  5174,  5180,  5185,  5190,  5195,  5203,  5207,
    5214,  5222,  5235,  5240,  5247,  5249,  5252,  5259,  5264,  5269,
    5272,  5279,  5283,  5289,  5301,  5307,  5316,  5321,  5320,  5355,
    5366,  5371,  5380,  5398,  5404,  5409,  5412,  5417,  5424,  5428,
    5435,  5447,  5458,  5463,  5470,  5469,  5497,  5500,  5499,  5516,
    5521,  5526,  5535,  5544,  5554,  5553,  5564,  5572,  5584,  5608,
    5609,  5610,  5611,  5617,  5618,  5624,  5630,  5637,  5644,  5668,
    5675,  5687,  5700,  5720,  5746,  5779,  5801,  5832,  5836,  5850,
    5864,  5878,  5882,  5886,  5890,  5894,  5904,  5909,  5914,  5934,
    5938,  5945,  5955,  5964,  5973,  5980,  5988,  5992,  6001,  6005,
    6009,  6017,  6023,  6027,  6035,  6042,  6050,  6057,  6065,  6072,
    6080,  6084,  6094,  6099,  6149,  6164,  6180,  6200,  6220,  6258,
    6262,  6266,  6276,  6278,  6293,  6299,  6305,  6311,  6327,  6332,
    6348,  6353,  6365,  6375,  6389,  6412,  6415,  6421,  6435,  6441,
    6452,  6453,  6454,  6455,  6456,  6457,  6458,  6459,  6460,  6461,
    6462,  6463,  6464,  6465,  6466,  6467,  6468,  6469,  6470,  6471,
    6472,  6476,  6477,  6478,  6479,  6480,  6481,  6482,  6483,  6484,
    6485,  6486,  6487,  6488,  6489,  6490,  6491,  6492,  6493,  6494,
    6495,  6496,  6497,  6498,  6499,  6500,  6501,  6502,  6503,  6504,
    6505,  6506,  6507,  6508,  6509,  6510,  6511,  6512,  6513,  6515,
    6517,  6519,  6521,  6526,  6527,  6528,  6529,  6530,  6531,  6532,
    6533,  6552,  6554,  6560,  6563,  6570,  6576,  6579,  6582,  6594,
    6600,  6611,  6627,  6649,  6664,  6702,  6710,  6722,  6730,  6744,
    6747,  6754,  6757,  6772,  6777,  6782,  6801,  6811,  6824,  6836
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
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     407,   406,   408,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   409,   409,   410,   410,   411,   411,
     411,   412,   412,   413,   413,   413,   413,   413,   414,   414,
     415,   415,   415,   415,   415,   415,   416,   416,   417,   417,
     417,   417,   417,   418,   418,   419,   419,   419,   419,   419,
     419,   419,   419,   420,   420,   421,   421,   422,   422,   422,
     422,   422,   422,   423,   423,   424,   424,   425,   425,   426,
     426,   426,   426,   426,   427,   427,   427,   428,   428,   429,
     429,   430,   430,   430,   430,   431,   431,   433,   432,   432,
     432,   432,   432,   434,   434,   435,   435,   436,   436,   437,
     437,   437,   437,   437,   439,   438,   440,   441,   440,   442,
     442,   442,   442,   442,   443,   442,   442,   444,   444,   445,
     445,   445,   445,   446,   446,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   448,   448,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   450,   450,   451,   451,   451,   451,   451,   451,
     451,   451,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   453,   453,   453,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   456,   456,   456,   456,   456,   456,
     456,   457,   457,   457,   457,   458,   458,   458,   458,   459,
     459,   459,   459,   459,   459,   459,   459,   460,   460,   461,
     461,   462,   462,   462,   462,   462,   462,   463,   464,   465
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
      11,     5,     7,     5,     7,    17,    13,    15,    11,    13,
       0,     7,     0,     7,     7,    11,     5,     5,     9,     9,
       9,     5,     5,    11,     9,    14,    14,     7,    12,    10,
       7,     7,     7,     1,     1,     1,     0,     2,     3,     3,
       2,     0,     2,     3,     3,     3,     3,     4,     0,     2,
       3,     3,     3,     3,     3,     4,     0,     2,     3,     3,
       3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
       4,     4,     4,     0,     4,     0,     2,     3,     3,     3,
       3,     3,     3,     0,     2,     3,     1,     0,     2,     3,
       4,     3,     3,     4,     0,     4,     2,     0,     2,     3,
       4,     0,     5,     5,     2,     0,     2,     0,     6,     3,
       3,     3,     3,     0,     2,     3,     1,     0,     2,     3,
       3,     3,     3,     4,     0,     8,     0,     0,     3,     7,
       7,     8,    11,     6,     0,    10,     1,     3,     6,     1,
       1,     1,     1,     0,     3,     1,     2,     2,    12,     2,
      15,     4,    12,    17,    22,    12,     0,     2,     3,     4,
       4,     3,     2,     2,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     5,     2,     2,
       3,     9,     3,     2,     9,     2,     9,     2,     9,     5,
       3,     2,     0,     2,     6,     8,     8,    10,     1,     4,
       1,     1,     5,     4,     4,     7,     4,     7,     5,     3,
       3,     7,     5,     8,     2,     0,     3,     6,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
       4,     4,     4,     4,     4,     4,     6,     6,     6,     5,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     3,     1,     1,     3,     3,     3,
       5,     3,     4,     4,     6,     8,     8,     5,     5,     1,
       1,     1,     1,     1,     4,     6,     1,     6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   749,     0,     0,     0,
       0,   638,     0,   640,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   641,   750,     0,     0,     0,     0,     0,
       0,   654,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   751,     0,     0,   756,   752,
      19,   753,   655,    41,   207,   170,   183,   238,    91,   302,
     380,   523,   553,     0,     0,   731,     0,     0,   650,   649,
       0,     0,   724,   723,     0,     0,   725,   726,   727,   728,
     729,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   681,   730,   720,   721,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,     0,     0,     0,     0,     0,     0,     0,
       0,   732,     0,   733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   683,   684,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   722,   639,     0,     0,     0,    86,     0,   749,     0,
       7,    42,    47,    49,     0,   211,     9,   208,   210,   172,
      10,   185,    11,   242,    12,   239,   241,     0,     8,    92,
      96,     0,   306,    13,   303,   305,   384,    14,   381,   383,
     527,    15,   524,   526,   557,    16,   554,   556,   564,     0,
       0,   644,     0,     0,     0,     0,     0,     0,   735,     0,
     736,     0,   643,   646,   747,   648,     0,   652,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   682,     0,     0,   698,   697,   696,   695,   691,
     692,   694,   693,   686,   685,   687,   688,   689,   690,     0,
     754,     0,   642,   656,     0,     0,     0,    80,   731,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   748,   741,     0,     0,     0,     0,     0,     0,
       0,   734,     0,   739,     0,     0,     0,     0,   759,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
     710,   711,   712,   713,   714,   715,     0,     0,     0,     0,
     634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   749,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   209,   212,     0,     0,   171,   173,     0,   102,     0,
     184,   186,     0,     0,     0,     0,     0,     0,   240,   243,
     244,    85,   749,     0,    56,     0,    57,     0,     0,     0,
       0,   304,   307,     0,     0,   389,   382,   385,   391,     0,
       0,     0,     0,   525,   528,     0,     0,     0,     0,     0,
     555,   558,   566,   742,   743,     0,     0,     0,     0,     0,
     737,   738,     0,   651,     0,     0,     0,     0,     0,     0,
       0,     0,   719,   757,   755,   659,   658,     0,     0,    90,
      60,     0,     0,     0,     0,    72,     0,    69,     0,    55,
      67,    79,    43,     0,     0,     0,     0,   218,     0,   749,
       0,   176,     0,   190,     0,     0,     0,     0,   109,     0,
     293,     0,   749,     0,   252,   270,   285,     0,     0,   102,
       0,     0,   749,     0,   313,   335,   749,     0,   392,     0,
     749,     0,   534,     0,     0,     0,   566,     0,     0,     0,
     567,     0,     0,     0,   647,   645,   740,   653,     0,   636,
     758,   709,   716,   717,   718,   635,   657,    87,    45,    44,
      46,    81,     0,     0,    85,     0,    62,    53,    61,    48,
       0,   218,     0,   215,     0,     0,   213,     0,   174,     0,
       0,     0,     0,   188,   103,     0,   187,     0,   247,     0,
     245,     0,     0,     0,    93,    98,     0,   102,   310,     0,
     308,     0,     0,     0,   386,     0,   414,     0,   529,     0,
     531,   532,   559,   567,   560,   562,   561,   565,     0,   744,
       0,     0,     0,     0,     0,    75,    73,    68,     0,    74,
      85,    50,     0,   221,   216,   220,   214,   178,   175,   192,
     189,     0,     0,   104,   749,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,     0,   150,     0,     0,     0,
       0,   141,   143,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   139,     0,   136,   730,   160,   161,   296,
     251,   295,   246,   255,   248,   254,   272,   249,   288,   250,
     287,     0,    94,     0,   309,   316,   311,   315,     0,     0,
       0,     0,   312,   336,   337,   387,   395,   388,   394,     0,
     530,   537,   533,   536,   563,     0,     0,     0,     0,   568,
     576,     0,     0,   637,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   217,     0,     0,     0,   100,   101,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     132,   134,     0,   158,   156,   153,   155,   154,   749,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   167,     0,     0,     0,     0,     0,    95,     0,   353,
     353,   364,   342,     0,   749,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   450,   452,   390,   415,   473,     0,     0,     0,
       0,     0,   745,   746,    82,    83,    77,    76,    71,    54,
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
     731,   326,   314,   317,   370,   370,   370,     0,     0,     0,
       0,     0,   731,     0,     0,     0,   393,   396,   405,     0,
       0,   102,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   102,     0,     0,     0,   481,     0,
     488,     0,   496,   503,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   535,   538,     0,   583,
       0,     0,   574,   596,     0,     0,    65,    64,     0,     0,
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
       0,     0,   105,   105,   541,     0,   585,     0,     0,     0,
       0,     0,     0,     0,     0,   596,     0,     0,   102,   596,
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
       0,     0,     0,     0,     0,   102,     0,     0,   102,   418,
     482,     0,     0,   102,     0,     0,     0,     0,   419,   489,
       0,     0,     0,     0,     0,   102,   420,   497,     0,     0,
       0,     0,     0,     0,     0,     0,   421,   504,   102,     0,
     102,   731,   731,   731,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   474,   476,   475,   476,
       0,   539,   586,   587,   102,   589,     0,     0,     0,     0,
       0,     0,     0,   581,   582,   579,   580,   577,     0,     0,
     596,     0,     0,     0,     0,   597,    84,     0,   102,   102,
       0,   102,   182,   199,   196,     0,   117,     0,     0,     0,
     152,     0,     0,   259,     0,   260,     0,   106,   102,   282,
       0,   278,     0,     0,     0,     0,   359,   360,   362,     0,
     358,   109,   366,   109,   344,   345,     0,     0,     0,     0,
     346,   348,   407,     0,   411,     0,   422,   414,   423,     0,
       0,     0,     0,     0,     0,     0,     0,   435,     0,   441,
       0,   443,     0,     0,   414,     0,     0,     0,     0,     0,
     414,     0,     0,     0,     0,     0,     0,     0,     0,   414,
       0,     0,     0,     0,     0,   414,   414,     0,     0,   513,
       0,   457,     0,     0,     0,     0,     0,     0,   461,   462,
       0,     0,     0,     0,     0,     0,     0,   456,     0,     0,
     749,     0,   540,   544,     0,     0,     0,     0,     0,     0,
       0,     0,   584,   583,     0,     0,     0,     0,   573,   731,
     731,     0,     0,     0,     0,     0,   609,   731,     0,   632,
     632,   632,   602,   603,     0,     0,     0,   618,   619,   105,
     623,   625,   627,     0,     0,   631,     0,     0,     0,     0,
       0,     0,   151,     0,     0,   144,   114,     0,     0,     0,
     108,   284,   280,     0,   324,   327,     0,   356,   368,     0,
       0,     0,     0,   409,   413,     0,     0,   731,     0,   731,
       0,     0,     0,     0,     0,     0,     0,   102,     0,   485,
     483,   484,   486,   102,     0,   492,   490,   491,   493,   494,
     102,   501,   499,     0,   498,   500,   508,   507,   509,     0,
       0,   505,   506,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   731,   477,     0,   545,   545,     0,   102,     0,   591,
       0,     0,     0,   569,     0,     0,     0,   570,   596,   615,
     620,   102,   612,     0,     0,   598,   601,   610,   611,   604,
     605,   608,   606,   607,   614,   613,     0,   616,   622,     0,
       0,     0,     0,   630,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   200,     0,     0,   169,
       0,     0,   334,   363,     0,     0,   349,   350,   351,   352,
     425,   427,     0,     0,     0,     0,     0,     0,   433,     0,
     442,   444,     0,   487,     0,   495,     0,   502,   511,   512,
     515,   510,   454,     0,     0,   431,   432,     0,     0,     0,
       0,     0,   467,   471,   472,     0,   470,     0,   451,     0,
     731,   480,   453,   370,   370,     0,     0,     0,     0,     0,
       0,   578,   596,   571,     0,     0,   599,   600,   633,     0,
       0,     0,     0,     0,     0,   237,   236,   229,   235,     0,
       0,     0,     0,     0,     0,     0,   147,     0,   261,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,   102,     0,   102,     0,     0,     0,
       0,     0,     0,   102,     0,   478,   479,     0,     0,     0,
       0,   543,     0,   546,   542,     0,   102,     0,     0,     0,
       0,     0,     0,   102,   617,     0,     0,     0,   629,     0,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
     414,   436,   437,     0,     0,     0,     0,   434,     0,     0,
     414,     0,     0,     0,     0,   102,     0,     0,   514,   516,
       0,   430,     0,   458,   459,   460,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,   547,     0,     0,     0,
       0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
     146,     0,     0,     0,     0,     0,     0,     0,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,   469,     0,   551,   552,   549,
     550,   109,     0,     0,     0,     0,     0,     0,   572,   102,
       0,     0,     0,     0,   267,   357,   369,   426,   438,   439,
     440,     0,   414,     0,   448,   414,   522,   517,   520,   521,
     518,   519,   455,   429,     0,   414,   414,   463,     0,     0,
       0,   731,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,   468,
       0,     0,     0,     0,     0,     0,     0,   621,   624,   626,
     628,     0,     0,   446,   414,   449,   428,     0,     0,   548,
       0,   731,     0,     0,     0,     0,     0,    88,     0,     0,
     465,   466,   595,     0,   588,   592,     0,     0,   268,     0,
      58,     0,   447,   731,     0,     0,     0,    89,     0,     0,
       0,     0,     0,   445,   590,     0,     0,    88,     0,     0,
       0,   593,     0,     0,     0,   269,     0,     0,     0,   594
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   150,   231,   232,
     752,  1417,   434,   640,   435,  2036,   405,   577,   750,   872,
     499,   574,   500,   400,   227,   335,  2050,   336,   155,   249,
     431,   517,   518,  1386,  1268,   594,   595,   691,   909,  1431,
     692,   766,   767,  1248,   761,   800,   931,   933,   152,   342,
     416,   587,   755,   891,   153,   343,   421,   589,   756,   896,
    1243,  1581,  1716,   151,   237,   341,   412,   582,   754,   887,
     154,   245,   344,   429,   601,   803,   949,  1265,  2001,  2056,
     602,   804,   954,  1105,  1276,  1102,  1274,   603,   805,   959,
     597,   802,   939,   156,   254,   347,   442,   611,   808,   973,
    1288,  1121,  1444,   612,   723,   977,  1147,  1305,  1461,   974,
    1136,  1451,  1724,   976,  1141,  1453,  1725,  1137,   693,   157,
     258,   348,   447,   539,   615,   813,   987,  1151,  1308,  1157,
    1313,   729,   855,  1032,  1033,  1387,  1528,  1662,  1178,  1340,
    1180,  1349,  1182,  1357,  1183,  1367,  1643,  1823,  1889,   158,
     262,   349,   454,   619,   857,  1037,  1390,  1773,  1843,  1951,
     159,   266,   350,   461,    31,   351,   550,   628,   739,  1220,
    1038,  1408,  1217,  1215,  1221,  1415,  1691,   856,    33,   149,
     694,   278,   125,   172,   279,   280,    34,   126,    70,    71,
     127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1444
static const yytype_int16 yypact[] =
{
   -1444,    37, -1444, -1444,    45,  4931,  -208,    69,  -185,    84,
      70, -1444,  -182, -1444,   649,   157,  4832,   161,   -72,  -151,
     -90,    19,    51,    76,   110,   123,   125,   147,     5, -1444,
   -1444, -1444, -1444, -1444,   -14,   201,   180,   454,   471,   474,
     531, -1444,   400,  4499,  4499,   543, -1444,   547,   549,   551,
     553,   573, -1444,   597, -1444,   640,   646,   654,   658,   663,
     667,   676,   705,   711,   728, -1444,   281,   314, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444,   392,   388,  2651,  4499,   -60, -1444, -1444,
     461,   470, -1444, -1444,   484,   491, -1444, -1444, -1444, -1444,
   -1444,   501,   509,   511,   532,   555,   560,   571,   599,   601,
     605,   619,   627,   634,   653,   655,   659,   664,   670,   683,
     684,  4499,  4499,  4499,  1650, -1444, -1444, -1444, -1444,  1773,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444,   161,   161,  -221,
     365,   233,   -30,   236,   496,    90,   535,   716,   897,  1024,
     531,  4499,  -104,   755,   686,   687,   689,   690,   696,   699,
    4003,  3964,   803, -1444,   807,  4753,   842,  4003,    71,  4499,
     161,   531,  4499,  4499,  4499,  4499,  4499,  4499,  4499,  4499,
    4499,  4499,  4499,  4499,  4499,  4499,  4499,  4499,  4499,  4499,
    4499,  4499,  -161,  -161,  6131,  4499,  4499,  4499,  4499,  4499,
    4499,  4499,  4499,  4499,  4499,  4499,  4499,  4499,  4499,  4499,
    4499, -1444, -1444,   632,   -10,   905, -1444,   531,   -50,   700,
   -1444, -1444, -1444, -1444,   -22, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444,   702, -1444, -1444,
   -1444,  -125, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,  5645,
    1447, -1444,   961,   962,  4499,  4499,   161,   161,  3964,   252,
   -1444,  4499, -1444, -1444, -1444, -1444,    65, -1444,  4499,  4217,
     697,   718,  6154,  6181,  6208,  6235,  6262,  6289,  6316,  6343,
    6370,  6397,  1370,  6424,  6451,  6478,  6505,  6532,  6559,  4796,
    4828,  4851, -1444,  2163,  4521,  4654,  3559,  2184,  2184,   717,
     717,   717,   717,   645,   645,  -161,  -161,  -161,  -161,   161,
   -1444,  4003, -1444,  -153,  3260,   742,   760, -1444,  2195,   786,
    4499,   -45,   -27,   171,   116, -1444,    28,   405,   216,   526,
     416,   758, -1444, -1444,   299,   723,   757,  4886,  4909,   767,
     768, -1444,  4003,  4549,  1031,  6586,  4499,   161, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,  4499,
   -1444, -1444, -1444, -1444, -1444, -1444,  4499,  4499,  4499,  4499,
   -1444,  4499,   775,    85,  4254,  4499,  4499,  5672,    89,    89,
    -145,   -59, -1444,    56,  1038,   783,    89,  6613,    14,  1045,
    1046, -1444, -1444,   798,  1047, -1444, -1444,   800,   118,  1065,
   -1444, -1444,   802,  1067,  1068,   806,   808,   810, -1444, -1444,
   -1444,  -134,  -176,   837, -1444,   817, -1444,  1082,  1083,   823,
     824, -1444, -1444,  1092,   830, -1444, -1444, -1444, -1444,  1095,
     844,   531,   531, -1444, -1444,   531,   845,   531,   161,  1110,
   -1444, -1444, -1444, -1444, -1444,  1111,  4499,  4499,  1112,  1118,
    3964, -1444,  4499, -1444,  1119,   575,   853,  6640,  6667,  6694,
    6721,  6748,  7253, -1444, -1444, -1444,  7253,  5699,  5726, -1444,
   -1444,  1120,  1122,  1123,   531,  1124,  4499, -1444,  4003, -1444,
   -1444, -1444, -1444,    15,  1126,   902,   875, -1444,  1177,   111,
    1185, -1444,  1187, -1444,   932,   933,   946,  1194, -1444,  1199,
   -1444,  1200,   111,  1201, -1444, -1444, -1444,  1202,  1205,   118,
     973,  1206,   111,  1207, -1444, -1444,   111,  1209, -1444,   964,
     111,  1227, -1444,  1229,  1232,  1233, -1444,  1236,  1240,  1242,
     972,   981,  4932,  4955, -1444, -1444,  7253, -1444,  4499, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444,  -146,  4499,  6771,   323,   355, -1444, -1444, -1444, -1444,
    1179, -1444,  1042, -1444,   989,  1249, -1444,   375, -1444,   447,
    4499,  1255,  1009, -1444, -1444,  2007, -1444,  1078, -1444,  1257,
   -1444,  1241,   456,  1263, -1444,   996,  1259,   118, -1444,  1260,
   -1444,  1321,    72,  1262, -1444,  1395, -1444,  1264, -1444,  1538,
   -1444, -1444, -1444,  1000, -1444, -1444, -1444, -1444,   739, -1444,
    4499,  4499,  5753,  1003,  4499,  4576,  1269, -1444,    61, -1444,
      80, -1444,  1563, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444,  6794,  1018, -1444,   262, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444,  1021, -1444,  1022,  1023,  1027,
    1033, -1444, -1444,  1287,  2007,  2007,  2007,  2007,  1295,   203,
    1297,  7328,    -8,  1037,  1037, -1444,  1041, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444,  4499, -1444,  1299, -1444, -1444, -1444, -1444,  1039,  1040,
    1044,  1048, -1444, -1444, -1444, -1444, -1444, -1444, -1444,  2928,
   -1444, -1444, -1444, -1444, -1444,  1051,  1056,  1058,  1072, -1444,
   -1444,  6821,  6848, -1444,  1061,  5780,  4499,  4499,    68, -1444,
    1043,   106,  1073, -1444,  1029,   -33,    83, -1444, -1444, -1444,
    1059,  1080,  1059,  2007,  1305,  1339,  1093,  1097,  1115,  1121,
    1121,  1121,  7305, -1444, -1444, -1444, -1444, -1444,     6,  1100,
   -1444,  2007,  2007,  2007,  2007,  2007,  2007,  2007,  2007,  2007,
    2007,  2007,  2007,  2007,  2007,  2007,  2007,  1369,  4499,  1688,
   -1444,  1106,   764,   588,   333,   325,  5807, -1444,  1564, -1444,
   -1444, -1444, -1444,   479,    17,    87,    10,  1116,  1117,  1127,
    1128,  1146,  1147,  1151,  1153,  1155,  1375,  1156,  1157,  1158,
    -138,   182,   214,  1154,  1159,  1162,  1165,  1168,  1169,  1171,
    1173,  1174,  1180,  1184,  1192,  1193,  1204,  1208,  1215,  1188,
    1195,  1216, -1444, -1444, -1444, -1444, -1444,   119,   531,   725,
     108,  1378, -1444, -1444, -1444,  1148,  7253,  4606, -1444, -1444,
   -1444,   531,    56,  1182,   108,   108,   108,   108,   133,   328,
     118,   118,  1203,   531,  1381,   380, -1444, -1444,    91,  1458,
   -1444, -1444,  1237,  1463,  1464, -1444, -1444,  1243, -1444,  1248,
    2225,  1250,  1251, -1444, -1444,  1253, -1444,  1244, -1444,  2007,
    7347,  7365,  1142,  1142,  1142,   883,   883,   883,   883,   748,
     748,  1121,  1121,  1121,  1121,  1121, -1444, -1444, -1444,  1254,
    7328,   124,  4671, -1444,  1465,    75,  1500,   531, -1444, -1444,
    1512,  1515,  1517,  1258,  1265,  1265,   108,   108, -1444, -1444,
    1519,    20,    24, -1444, -1444,  1521,   531,  1523, -1444, -1444,
   -1444,  1524,  1531,  1533,    93,   531,   531,  4499,  1542,   108,
    3015, -1444, -1444, -1444,  1834,  1851,  1060,   248,  1535,   531,
      43,   161,  3015,   161,    47,   531, -1444, -1444, -1444,   531,
    1534,   118,   118,  1539,   531,   531,   531,   531,   531,   531,
     531,   531,   531, -1444,   118,   531,   531,  4499, -1444,  4499,
   -1444,  4499, -1444, -1444,   108,   161,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
    1547,   531,  1284,  1294,  1290,   531, -1444, -1444,  1235,  1302,
    1289,  1235, -1444, -1444,  1293,  4499, -1444, -1444,    56,  1559,
    1562,  1565,  1566,   118,  1571,   118,  1575,  1577,  1578,   921,
    1579,  1580,   118,  1581,  1582,  1589,  1106, -1444,  1591,  1592,
   -1444,  1300, -1444,  2007, -1444,  1332,  1338,  1333, -1444, -1444,
    4633, -1444, -1444,  2007,  1340,   467,  1598,  1599,  1601,  1611,
    1620,    42,  1360,  1626,   118,  1625,  1630,  1631,  1632,  1635,
   -1444, -1444,  1636, -1444, -1444,  1637,  1652,  1662,  1663,  1669,
    1670,  1676,  1677,  1678,  1681,  1682, -1444,  1537,  1683,  1687,
    1689, -1444,  1628,  1657,  1690,  1435, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444,   108,  1694, -1444, -1444,  1441, -1444,   108,
   -1444, -1444,  1443,  1702,  1706, -1444, -1444, -1444,  1709,  1711,
   -1444,  1712, -1444,  1713,  1743,  1746, -1444,  1747, -1444,  1749,
    1493, -1444,  1494,  1495, -1444,  1489,  1492,  1498,  1499,  1501,
    1502,  1503,  1505,   139,  1507,  1514,   149,  4978,   505,  5001,
     120,  5024,    99,   394,  1525,  1522,  1527,  1528,  1529,  1530,
    1540,  1541,  1496,  1532,  1543,  1544,  1545,  1546,  1548,  1550,
    1551,  1554,    50,    50, -1444,  1758, -1444,   108,   108,    52,
    1526,  1536,  1555,  1556,  1557, -1444,   108,   811,   320, -1444,
    1552,   154,  1558,  7253, -1444, -1444, -1444, -1444, -1444,  1569,
   -1444,  1570, -1444, -1444, -1444,  1572, -1444, -1444,  1583, -1444,
   -1444, -1444,  1787,   472, -1444, -1444,   108,  7280, -1444,  4499,
   -1444,  1807,  1573, -1444,  7328,   108, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444,  1823,  1721,  1835,  1572, -1444,   475, -1444,
   -1444, -1444, -1444, -1444,   490, -1444,   497, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,  1593, -1444,
   -1444, -1444, -1444,  1588,  1848,  1854,  1855,  1860,  1857, -1444,
   -1444,  1858, -1444,  1859,  1861,   406, -1444, -1444,   499, -1444,
   -1444, -1444, -1444,   522, -1444, -1444,  1862,  1602,  1865,   118,
     531,   531,  4499,  4499,  4499,   531,   118,  1869,   108,  1874,
    4499,  1891,  4499,  4499,  1639,   118,  4499,  4499,   118, -1444,
   -1444,  4499,  1640,   118,  4499,  4499,  4499,  4499, -1444, -1444,
    4499,  4499,  4499,  1642,  4499,   118, -1444, -1444,  4499,  4499,
     531,  1644,  1646,  4499,  4499,  1648, -1444, -1444,   118,  1916,
     118,  3015,  3015,  3015,  4499,  3015,  1917,  1920,   531,   531,
    4499,   531,   531,   108,  1853,  1921, -1444, -1444, -1444, -1444,
    1655, -1444,  1716, -1444,   118, -1444,  1667,  4003,  1673,  1675,
    1679,   229,  1668, -1444, -1444, -1444, -1444, -1444,  1926,  1693,
   -1444,   255,  1817,  1944,  4755, -1444, -1444,  1695,   118,   118,
     921,   118, -1444, -1444, -1444,  1707, -1444,  1719,  5047,  1722,
   -1444,  2007,  1723, -1444,  1953, -1444,  1968, -1444,   118, -1444,
    1970, -1444,  1983,   531,  1982,  1984, -1444, -1444, -1444,  1728,
   -1444, -1444, -1444, -1444, -1444, -1444,  1059,  1059,  1059,   108,
   -1444, -1444, -1444,   531, -1444,   531, -1444, -1444, -1444,  1729,
    1724,  1725,  5070,  5093,  5116,  1726,  1735, -1444,  1730, -1444,
    6875, -1444,  6902,  5139, -1444,  1997,  1633,  1832,  1998,  5162,
   -1444,  1999,  1907,  1936,  2248,  2309,  5185,  2393,  2561, -1444,
    2584,  2000,  2621,  2966,  2002, -1444, -1444,  2983,  3224, -1444,
     263, -1444,  1759,  1767,  1768,  1765,  5208,  1766, -1444, -1444,
    1798,  1804,  6929,  1774,  1816,  1810,   528, -1444,   300,   315,
     272,  1820, -1444, -1444,  2085,  1822,  4003,   530,  4003,  4003,
    4003,  2084, -1444,  1302,   161,   341,  2087,   108, -1444,  3015,
    3015,  1827,  2092,   402,  4499,  4499, -1444,  3015,  4499,  2094,
   -1444, -1444, -1444, -1444,  4499,  2095,  2706, -1444, -1444,  1265,
    1836,  1837,  1838,  1839,  2098, -1444,  1843,  1846,  1849,  1833,
    1852,   362, -1444,  1856,  4499, -1444,  7328,  1842,  2108,  1847,
   -1444, -1444, -1444,  1863, -1444, -1444,  2111, -1444, -1444,  2115,
    2116,  2117,  2118, -1444, -1444,  2991,  2119,  3015,  4499,  3015,
    4499,  4499,   531,  2121,   531,  2122,  2123,   118,  3183, -1444,
   -1444, -1444, -1444,   118,  3239, -1444, -1444, -1444, -1444, -1444,
     118, -1444, -1444,  3431, -1444, -1444, -1444, -1444, -1444,  3487,
    3679, -1444, -1444,   537,  2126,  4499,   118,  2127,  2128,  4499,
     161,   161,  4499,  4499,  2129,  2130,  2131,   161,  2133,  2003,
    2135,  2325, -1444,  2136, -1444, -1444,  1876,   118,   562, -1444,
     568,   572,   576, -1444,  1879,  1892,  2148, -1444, -1444, -1444,
   -1444,   118, -1444,   161,   161, -1444,  7253,  7253, -1444,  7253,
   -1444,  2158,  2158,  2158,  7253, -1444,  4003,  7253, -1444,  4499,
    4499,  4499,  4003, -1444,    56,  2159,  2161,  2162,  2165,  2160,
    4499,  4499,  4499,  4499,  4499, -1444, -1444,  1905,  5834, -1444,
    2061,  2172, -1444, -1444,  1913,  1914, -1444, -1444, -1444, -1444,
    2174, -1444,  1939,  6956,  1934,  5231,  5254,  1935, -1444,  1943,
   -1444, -1444,  1937, -1444,  1940, -1444,   344, -1444, -1444, -1444,
   -1444, -1444, -1444,  5277,   358, -1444, -1444,  6983,  1949,  1951,
    5300,  5323, -1444, -1444, -1444,   581, -1444,   161, -1444,   161,
    3015, -1444, -1444,  1238,  1720,  4499,  1945,  1948,  1950,  1952,
    1958, -1444, -1444, -1444,   413,  1947, -1444, -1444, -1444,   586,
    5346,  5369,  5392,   589,  1985, -1444, -1444, -1444, -1444,  2213,
    3283,  3311,  3475,  3524,  3541,  4499, -1444,  2249, -1444, -1444,
    1059,  1988,  2251,  2254,  4499,  4499,  4499,  4499,  2255,   118,
    4499,  1994,  4499,   302,   118,  2257,   118,  2259,  2262,  2263,
    4499,  4499,  2264,   118,   603, -1444, -1444,  2267,  2270,  2272,
     108, -1444,  2015, -1444, -1444,  5415,   118,  4003,  4003,  4003,
    4003,   449,  2273,   118, -1444,  4499,  4499,  4499, -1444,  4499,
   -1444, -1444, -1444, -1444, -1444, -1444,  5861,  2010,  2017,  2018,
   -1444, -1444, -1444,  7010,  7037,  7064,  5438, -1444,  2019,  5461,
   -1444,  7091,  2279,  2283,  4499,   118,  2284,   108, -1444, -1444,
    2026, -1444,   451, -1444, -1444, -1444,  7118,  7145, -1444,  2021,
    2285,  4499,  2287,  2290,  2291,  2294, -1444,  4499,  2032,   609,
     614,   617,   622,  2296, -1444,  2034,  5484,  5507,  5530,  7172,
   -1444,  2299,  2304,  2305,  3735,  2311,  2312,  2313,  3015,  2054,
    4499,  3927,  2055,  2318,  2324,  3711,  2326,  2334,  2335,  2337,
    2338,   118,  2063,  2077,  2340, -1444,  5888, -1444, -1444, -1444,
   -1444, -1444,  5915,  2079,  2080,  2081,  2088,  2114, -1444,   118,
    4499,  4499,  4499,  2343, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444,  2113, -1444,  7199, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444,  2124, -1444, -1444, -1444,  2349,  2125,
    2132,  3015,  4003,  2142,  4003,  4003,  2120,  5942,  5969,  5996,
   -1444,  2320,  4499,  3983,  2143,  4175,  2379,  4231,  4423, -1444,
    2380,  4499,  2149,   636,  4499,   650,   660, -1444, -1444, -1444,
   -1444,   531,  5553, -1444, -1444, -1444, -1444,  2384,  2385, -1444,
    6023,  3015,  2151,  6050,  2154,  2157,  2387,  2164,  4499,  4479,
   -1444, -1444, -1444,  2156, -1444, -1444,  2173,  4003, -1444,  2171,
   -1444,  7226, -1444,  3015,  4499,   665,  2260, -1444,  2389,  2175,
    5576,  2176,  2392, -1444, -1444,  4499,  2178,  2164,  6077,  4499,
    2391, -1444,  5599,  2179,  4499, -1444,  5622,  4499,  6104, -1444
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444,    30, -1444,  -807, -1444,  1467, -1444, -1444,  1516,
    -499, -1444,  -607, -1444,  -385,  -506,   361, -1444, -1444, -1444,
   -1444,   776, -1444,  -938, -1444,  -890, -1444,   436, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444,  1757, -1444,  1388, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444,  1877, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,  1645,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444,  -971,  -645, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1443, -1444, -1444, -1444,  1256,  1071, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444, -1444,   797, -1444, -1444,
   -1444, -1444, -1444, -1444, -1444, -1444,  1927, -1444, -1444, -1444,
    1604, -1444,   931,  1442, -1198, -1444,  -617,    27, -1444, -1444,
   -1444,   963,  -486,  -713,  -135,   -84, -1444,    -5,  -120,   -47,
    -320,   -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -681
static const yytype_int16 yytable[] =
{
      35,   173,    39,   585,   578,  1142,  1095,  1096,  1071,   759,
       6,     6,    69,  1076,  1077,   494,   599,  1401,   495,   506,
       6,  1411,     6,    83,  1605,  1100,   609,   223,   224,  1103,
     613,   749,    32,   432,   617,    90,   514,     3,   174,   888,
     408,  1618,   286,   225,   409,    -3,   528,  1624,     6,  1262,
     226,   889,     6,  1042,   410,     6,  1633,   432,   413,   495,
     290,     6,  1639,  1640,   495,    36,     6,  1049,  1050,  1051,
    1052,   495,   414,     6,     6,    42,    40,     6,   287,    44,
     490,  1065,   576,     7,     8,     9,   394,   -60,    10,    11,
      12,    41,    13,   633,   490,     6,   432,    36,  1112,   220,
     402,     7,     8,     9,    18,   221,    10,    11,    12,   695,
      13,   870,   515,   432,    85,   897,   395,   899,    73,   493,
    1351,     6,    18,   634,   402,  1007,   226,     7,     8,     9,
     527,  1008,    10,    11,    12,   354,    13,   226,   346,  1097,
    1098,   868,    69,    69,   514,   234,    35,   402,    18,    35,
     251,    35,    35,    35,    35,   268,   359,   360,  1064,   514,
     247,   402,  1119,   402,    52,   270,     6,    65,   892,    36,
      66,    67,   893,   894,   871,    69,   291,   233,   238,    74,
     402,   246,   250,   255,   259,   263,   267,   422,  1252,   638,
    1352,    72,   718,   719,   720,   721,   393,  1034,   695,   695,
     695,   695,   176,  1113,   -60,   423,   774,  1184,   775,   392,
     270,   177,  1545,  1114,    36,   424,   425,   338,  1035,   334,
     515,     6,   333,    36,   426,   411,   427,     7,     8,     9,
     339,  1293,    10,    11,    12,   515,    13,   890,     6,   239,
     240,   340,  1353,   415,     7,     8,     9,   476,    18,    10,
      11,    12,   330,    13,   173,   751,   417,  1120,   797,    84,
     798,   331,   418,  1342,   516,    18,  1343,  1354,  1355,  1154,
     419,    69,    69,   992,    82,   697,   496,   695,   471,    36,
     989,  1344,  1345,   507,   497,  1346,  1347,   498,    75,  1101,
      36,   174,   433,  1104,   403,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   584,  1150,   695,   748,   443,  1156,   496,   403,  1094,
      76,  1394,   496,  1882,    69,   497,  1298,   364,   498,   496,
      37,    43,  1301,   498,   288,    38,   362,  1143,   548,    35,
     498,   436,   722,    35,   -63,    77,   514,   484,    44,   776,
     991,   226,   444,   895,   514,   403,   362,   403,  1427,   445,
     248,  1144,    69,   575,   697,   697,   697,   697,   404,  1356,
     228,   430,   516,  1047,   403,   448,     7,     8,     9,    78,
     584,    10,    11,    12,    36,    13,   428,   516,  1082,  1036,
    1348,  1883,    79,  1884,    80,  1083,  1053,    18,   501,    68,
    1392,  1393,  1395,  1327,  1885,   510,   514,     6,    65,  1402,
    1328,    66,    67,  1331,   955,  1358,    81,  1886,  1413,   523,
    1332,   777,   515,   695,   956,  1414,   957,  1924,   491,   492,
     515,   229,   950,   533,   951,  1887,   504,  1931,   537,  1425,
      85,   420,   952,   697,   541,  1009,   543,   544,  1432,    86,
     545,  1010,   547,    69,  1709,  1710,  1711,  1712,  1713,  1714,
      87,   697,   697,   697,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,  1011,    88,   697,
    1784,    89,   515,  1012,     6,  1359,   446,  1456,  1457,   571,
       7,     8,     9,  1541,   437,    10,    11,    12,   501,    13,
    1414,     6,   235,   236,   438,   241,   242,     7,     8,     9,
     698,    18,    10,    11,    12,   455,    13,  1145,  1146,  1546,
     439,  1478,   361,   362,   440,  1458,  1414,  1644,    18,  2003,
    1360,   690,  2005,    91,  1645,    36,     6,  1361,  1362,  1459,
       6,  1664,  2007,  2008,   147,    36,     7,     8,     9,  1224,
     130,    10,    11,    12,   131,    13,   132,  1409,   133,   456,
     134,  1597,  1363,  1598,  1660,  1364,  1365,    18,   978,   463,
     362,  1661,  1888,  1235,   516,   148,  1525,    35,   979,  1663,
     135,  2039,   516,   558,  1851,  1263,  1661,   695,   160,   697,
     696,  1055,    35,   637,   226,   958,    35,   695,    35,   698,
     698,   698,   698,   953,   136,  1676,    35,    35,  1821,   645,
      35,   457,  1414,   458,    35,  1822,   980,   981,   982,   983,
     984,   985,  1825,    35,   701,   449,   362,   639,   705,  1826,
     710,  1698,  1715,   501,   516,   230,   459,    35,   717,   724,
      68,   450,   728,  1062,   647,   648,   733,   137,  1334,  1683,
    1684,  1335,  1602,   138,    45,   740,    46,   161,  1513,  1514,
    1515,   139,  1517,   451,  1366,   140,  1336,  1337,  1338,   645,
     141,    47,    48,    49,   142,   441,  1460,  1852,   698,   696,
     696,   696,   696,   143,  1414,   779,   460,   940,    50,   941,
     942,   943,   944,   945,   946,   947,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   698,   144,  1913,   698,  1940,   649,   650,   145,   452,
    1414,     6,  1941,   178,    35,   706,   707,     7,     8,     9,
       6,  1040,    10,    11,    12,   146,    13,  1256,   362,   179,
    1678,  1423,  1424,   501,     6,  1437,  1438,   180,    18,   986,
       7,     8,     9,   697,   181,    10,    11,    12,   696,    13,
    1439,   226,   271,   697,   182,   243,   244,  1441,   226,  1462,
     226,    18,   183,   907,   184,  1339,   696,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,  1464,   226,   696,   185,   453,  1085,  1658,  1659,
    1669,   362,  1842,  1842,   252,   253,  1750,  1751,    35,   990,
     282,  1599,  1600,  1601,   283,   206,   207,   208,   186,   209,
     210,   211,   212,   187,   698,   213,   214,   215,   216,   217,
     218,   219,  1777,   362,   188,   220,  1679,  1680,  1778,   362,
     988,   221,  1779,   362,  1688,   559,  1780,   362,    51,   285,
    1420,  1832,  1833,  1039,  1039,   436,  1854,   362,   948,  1858,
     362,  1153,   189,  1155,   190,   934,  1046,   501,   191,   436,
     436,   436,   436,  1900,  1901,   935,   936,   937,  1060,  1954,
     362,  1436,   192,   436,  1955,   362,   173,  1956,   362,  1440,
     193,  1442,  1957,   362,  1732,  1185,  1734,   194,   173,   217,
     218,   219,     6,   329,   696,   220,  2032,   362,     7,     8,
       9,   221,   332,    10,    11,    12,   195,    13,   196,  1868,
    2034,   362,   197,  1463,    92,    93,     6,   198,  1465,    18,
    2035,   362,  1089,   199,  1579,  2061,   362,   735,   736,   737,
     738,   436,   436,  1692,  1693,   695,   200,   201,  1771,   272,
     273,  1107,   274,   275,    96,    97,    98,    99,   100,   276,
    1115,  1116,   277,   337,   436,   345,   355,   356,   367,   215,
     216,   217,   218,   219,  1149,  1152,    69,   220,    69,  1158,
    1159,   398,   368,   221,  1160,   256,   257,   464,   698,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,   698,   399,
    1175,  1176,   792,   793,   794,   795,   124,   129,   796,   436,
      69,  1186,  1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,
    1195,  1196,  1197,  1198,  1199,   406,  1201,   462,   465,     6,
    1205,   468,   469,  1905,   938,     7,     8,     9,   473,   483,
      10,    11,    12,   501,    13,   502,   503,     6,   171,   175,
     508,   509,   512,     7,     8,     9,    18,  1836,    10,    11,
      12,  1989,    13,  1403,  1404,  1405,  1406,   511,   696,   513,
     519,   520,   521,   522,    18,   524,   529,   525,   696,   526,
    1938,   530,  1407,     6,   202,   203,   204,   531,   532,     7,
       8,     9,   534,   535,    10,    11,    12,   536,    13,   538,
     540,   874,   875,   876,   877,   878,   879,   880,   881,   882,
      18,   697,   883,   542,   546,   549,   551,   560,   884,   554,
     769,   770,   771,   772,   269,   555,   557,   568,   436,   569,
     570,   885,   572,   579,   436,   790,   791,   792,   793,   794,
     795,   580,   289,   796,   581,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,  1869,   260,   261,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   583,  1126,  1127,  1128,  1129,  1130,
    1131,  1132,   586,  1139,   588,   590,   591,  1388,  1388,   900,
     592,   593,   436,   436,   436,  1794,   596,   598,   600,   604,
     605,   436,   607,   608,   610,  1971,   614,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   616,   618,   930,   620,   357,   358,   621,
     622,   436,   627,   624,   363,   629,     6,   625,   641,   626,
     436,   365,     7,     8,     9,   396,   646,    10,    11,    12,
     652,    13,  1537,   653,   702,   711,   712,   714,     6,   725,
     734,   730,   744,    18,     7,     8,     9,   747,  2012,    10,
      11,    12,   758,    13,   760,   762,   763,   173,   173,   173,
     764,   173,   768,   264,   265,    18,   765,   397,   773,   886,
     799,   171,   778,   407,  -680,   606,   807,   869,   809,   810,
     901,   643,   644,   811,   858,  1470,  1471,   812,  2043,   859,
    1475,   860,  1837,   436,  1838,   470,     6,  1839,   690,   475,
    1140,   864,     7,     8,     9,   861,   873,    10,    11,    12,
    2059,    13,   477,   898,   902,  1080,   698,   699,   700,   478,
     479,   480,   481,    18,   482,  1504,   903,   486,   487,   488,
     904,  1921,   905,  1126,  1127,  1128,  1129,  1130,  1131,  1132,
     908,  1840,   926,  1520,  1521,   932,  1523,  1524,   436,   994,
     995,   796,  1003,   713,  1043,    35,  1061,  1044,   786,   787,
     996,   997,   788,   789,   790,   791,   792,   793,   794,   795,
       6,  1668,   796,  1670,  1671,  1672,     7,     8,     9,   998,
     999,    10,    11,    12,  1000,    13,  1001,  1533,  1002,  1004,
    1005,  1006,  1014,  1013,  1675,  1015,   696,    18,  1016,   552,
     553,  1017,  1018,  1685,  1019,   556,  1020,  1021,  1593,  1206,
    1207,  1208,  1209,  1210,  1211,  1212,  1213,  1214,  1048,  1022,
      92,    93,   162,  1023,   436,  1024,  1025,  1029,  1603,   573,
    1604,    94,    95,  1066,  1030,   173,   173,  1026,  1068,  1069,
    1086,  1027,  1059,   173,   164,   165,   166,   167,  1028,  1031,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   870,  1067,  1070,  1841,  1247,
     703,   704,  1072,  1074,  1079,  1075,  1078,  1090,  1081,  1254,
    1091,   632,  1092,   173,  1099,   173,  1106,  1093,  1108,  1109,
    1758,  1759,   708,   709,  1094,   635,  1110,  1765,  1111,    69,
    1148,  1161,   436,     6,  1289,  1118,  1164,  1202,    69,     7,
       8,     9,  1200,   651,    10,    11,    12,  1203,    13,  1204,
    1218,  1789,  1222,  1786,  1787,  1216,  1225,  1793,     6,  1226,
      18,  1246,  1227,  1228,     7,     8,     9,   173,  1230,    10,
      11,    12,  1232,    13,  1233,  1234,  1236,  1237,  1239,  1240,
     715,   716,   993,   741,   742,    18,  1241,   745,  1244,  1245,
      35,  1249,  1250,  1255,  1251,  1257,  1258,  1737,  1259,  1739,
     206,   207,   208,    35,   209,   210,   211,   212,  1260,    35,
     213,   214,   215,   216,   217,   218,   219,  1261,    35,  1264,
     220,  1266,  1269,  1294,    35,    35,   221,  1270,  1271,  1272,
    1620,   379,  1273,  1275,  1277,    69,    69,  1834,   961,  1835,
     962,   963,    69,   964,  1054,  1056,  1057,  1058,   205,  1278,
    1530,  1063,  1295,   965,   726,   727,     7,     8,     9,  1279,
    1280,    10,    11,    12,   806,    13,  1281,  1282,    69,    69,
     966,   967,   968,  1283,  1284,  1285,   173,    18,  1286,  1287,
    1290,    92,    93,   654,  1291,  1296,  1292,   969,  1297,   501,
     121,  1299,    94,    95,  1300,   122,  1302,  1303,   123,   866,
     867,  1304,  1909,  1910,  1911,  1912,  1306,   353,  1307,  1309,
    1310,    96,    97,    98,    99,   100,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
    1311,   679,   680,  1312,  1314,   970,  1315,  1316,  1317,  1318,
    1319,   927,    69,  1320,    69,  1391,  1376,  1162,  1163,  1321,
    1322,  1329,  1323,  1324,  1325,  1531,  1326,   206,   207,   208,
    1174,   209,   210,   211,   212,  1330,  1369,   213,   214,   215,
     216,   217,   218,   219,  1422,  1396,  1368,   220,  1370,  1371,
    1372,  1373,  1377,   221,  1837,  1397,  1838,   731,   732,  1839,
    1429,  1374,  1375,   681,  1378,  1379,  1380,  1381,  1385,  1382,
     682,  1383,  1384,  1412,  1398,  1399,  1400,   971,  1416,  1229,
    1433,  1231,   643,   753,   972,   436,  1434,  1430,  1238,  1621,
    1418,  1419,  1435,   226,   173,  1126,  1127,  1128,  1129,  1130,
    1131,  1132,  1445,  1840,  1421,  1446,  1443,  2013,  1526,  2015,
    2016,  1447,  1448,  1449,  1450,  1452,  1454,  1586,  1455,  1466,
    1267,  1467,  1468,   206,   207,   208,  1477,   209,   210,   211,
     212,  1479,   436,   213,   214,   215,   216,   217,   218,   219,
     206,   207,   208,   220,   209,   210,   211,   212,  1481,   221,
     213,   214,   215,   216,   217,   218,   219,   173,  1484,  1490,
     220,  1499,  2055,  1505,  1626,  1506,   221,  1509,  1122,    35,
    1123,  1124,  1125,  1511,  1518,  1532,    35,  1519,  1527,  1534,
    1117,  1543,  1542,   171,   683,  1122,  1536,  1123,  1124,  1125,
     684,   685,  1538,  1627,  1539,   171,   686,   173,  1540,   687,
    1547,  1548,   928,   929,   688,   689,  1544,   690,  1588,  1126,
    1127,  1128,  1129,  1130,  1131,  1132,  1576,  1133,  1134,   173,
    1177,  1582,  1179,  1589,  1181,  1591,  1126,  1127,  1128,  1129,
    1130,  1131,  1132,  1583,  1133,  1134,  1585,  1587,  1592,  1594,
    1844,  1595,  1596,  1606,  1410,  1607,  1608,  1612,    35,  1613,
      35,  1614,    35,    35,  1619,  1622,  1625,  1635,  1223,  1638,
      92,    93,   654,   206,   207,   208,  2037,   209,   210,   211,
     212,    94,    95,   213,   214,   215,   216,   217,   218,   219,
    1646,  1647,  1648,   220,    35,   222,  1649,  1651,  1655,   221,
      96,    97,    98,    99,   100,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,  1652,
     679,   680,   206,   207,   208,  1653,   209,   210,   211,   212,
    1656,  1657,   213,   214,   215,   216,   217,   218,   219,  1665,
    1666,  1673,   220,  1667,  1677,  1469,  1681,  1682,   221,  1690,
    1695,  1703,  1476,  1707,  1135,  1699,  1700,  1701,  1702,  1704,
    1705,  1485,  1719,  1706,  1488,  1720,  1708,  1721,  1723,  1491,
    1717,  1138,  1726,  1727,  1728,  1729,  1731,  1722,  1738,  1740,
    1741,  1501,   681,  1752,  1755,  1756,  1762,  1763,  1764,   682,
    1766,  1767,  1768,  1772,  1510,  1775,  1512,   206,   207,   208,
    1781,   209,   210,   211,   212,  1783,  1782,   213,   214,   215,
     216,   217,   218,   219,  1788,  1799,  1795,   220,  1796,  1797,
    1535,   389,  1798,   221,  1805,  1807,   206,   207,   208,  1808,
     209,   210,   211,   212,  1809,  1810,   213,   214,   215,   216,
     217,   218,   219,  1811,  1577,  1578,   220,  1580,    92,    93,
     401,   163,   221,  1812,    66,  1814,  1817,  1818,  1819,    94,
      95,  1820,  1428,  1828,  1590,  1829,  1846,  1847,  1853,  1848,
    1860,  1849,   164,   165,   166,   167,   168,  1850,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   683,  1867,  1628,  1859,  1870,  1871,   684,
     685,  1872,  1877,  1880,  1891,   686,  1893,   402,   687,  1894,
    1895,  1898,  1902,   688,   689,  1903,   690,  1904,  1906,   584,
    1914,  1922,  1923,  1929,  1933,  1472,  1473,  1474,  1934,  1937,
    1939,  1944,  1945,  1480,  1947,  1482,  1483,  1948,  1949,  1486,
    1487,  1950,  1953,  1958,  1489,  1959,  1964,  1492,  1493,  1494,
    1495,  1965,  1966,  1496,  1497,  1498,  1629,  1500,  1968,  1969,
    1970,  1502,  1503,  1972,  1975,  1976,  1507,  1508,    92,    93,
     162,  1977,  1985,  1979,   171,   171,   171,  1516,   171,    94,
      95,  1980,  1981,  1522,  1982,  1983,  1986,  1987,  1991,  1992,
    2000,  1993,   164,   165,   166,   167,  2009,  1994,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,  1995,  2002,  2021,  2026,  2029,  2006,  2010,
    2017,  2040,  2041,  1742,  2048,  2062,  2063,  2067,  2073,  1744,
    1631,  2011,  1087,   206,   207,   208,  1746,   209,   210,   211,
     212,  2014,  2024,   213,   214,   215,   216,   217,   218,   219,
    2031,  2044,  1754,   220,  2046,   390,  2047,  2053,  2070,   221,
     211,   212,   169,  2049,   213,   214,   215,   216,   217,   218,
     219,  2057,  2054,  1776,   220,  2064,  2066,  2069,   121,  2075,
     221,   801,  1088,   122,  1242,   975,   123,  1785,   642,  1389,
    1529,   403,  1774,  1041,   170,   780,   781,   782,   783,   784,
     785,   786,   787,   623,  1674,   788,   789,   790,   791,   792,
     793,   794,   795,  1219,     0,   796,     0,     0,   206,   207,
     208,     0,   209,   210,   211,   212,  1073,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   171,   171,   221,     0,     0,  1686,  1687,     0,
     171,  1689,     0,     0,     0,     0,     0,  1694,     0,  1697,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1769,
       0,     0,     0,  1770,     0,     0,     0,  1718,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,  1632,   220,
     171,  1733,   171,  1735,  1736,   221,     0,     0,   121,     0,
       0,     0,     0,   122,     0,     0,   123,     0,     0,     0,
       0,  1634,     0,     0,   170,  1878,     0,     0,     0,     0,
    1890,     0,  1892,     0,     0,     0,     0,     0,  1753,  1899,
       0,     0,  1757,     0,     0,  1760,  1761,     0,     0,     0,
       0,     0,  1908,     0,   171,     0,     0,     0,  1636,  1915,
       0,     0,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,    92,    93,   162,   163,     0,   221,
      66,  1936,  1790,  1791,  1792,    94,    95,     0,     0,     0,
       0,     0,     0,  1800,  1801,  1802,  1803,  1804,   164,   165,
     166,   167,   168,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    92,
      93,     6,     0,     0,     0,     0,     0,  1984,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,  1996,     0,     0,  1845,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,     0,     0,     0,  1866,     0,
       0,     0,     0,     0,     0,     0,     0,  1873,  1874,  1875,
    1876,     0,     0,  1879,     0,  1881,     0,     0,     0,     0,
       0,     0,     0,  1896,  1897,     0,     0,     0,     0,     0,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,  1916,  1917,
    1918,   220,  1919,     0,   206,   207,   208,   221,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,  1935,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,   208,  1946,   209,   210,   211,   212,     0,
    1952,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   169,     0,
       0,   171,     0,  1973,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,   122,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     0,
     170,     0,     0,  1997,  1998,  1999,     0,     0,     0,     0,
       0,     0,     0,   814,     0,     0,     0,     0,     0,     7,
       8,     9,     0,     0,    10,    11,   815,     0,    13,     0,
       0,     0,     0,     0,   171,     0,     0,     0,     0,   121,
      18,     0,     0,     0,   122,  2022,     0,   123,     0,     0,
       0,     0,     0,  1637,  2030,  1696,     0,  2033,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1641,     0,     0,     0,   171,     0,   814,     0,     0,     0,
       0,  2051,     7,     8,     9,     0,     0,    10,    11,   815,
       0,    13,     0,     0,     0,     0,   171,  2060,    92,    93,
     162,     0,     0,    18,     0,     0,     0,     0,  2068,    94,
      95,     0,  2072,     0,     0,     0,     0,  2076,     0,     0,
    2078,     0,   164,   165,   166,   167,     0,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   816,     0,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,     0,
       0,     0,   831,     0,     0,   832,     0,     0,   833,     0,
       0,   834,     0,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,     0,
       0,     0,   851,     0,     0,     0,     0,   852,     0,     0,
     853,     0,     0,     0,     0,     0,   816,     0,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,     0,     0,     0,   831,     0,     0,   832,     0,
       0,   833,     0,     0,   834,     0,   835,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   850,     0,     0,     0,   851,     0,     0,   814,     0,
     852,     0,     0,   853,     7,     8,     9,     0,   854,    10,
      11,   815,     0,    13,     0,     0,   206,   207,   208,     0,
     209,   210,   211,   212,     0,    18,   213,   214,   215,   216,
     217,   218,   219,   206,   207,   208,   220,   209,   210,   211,
     212,  1642,   221,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,   814,     0,     0,     0,     0,   221,
       7,     8,     9,     0,     0,    10,    11,   815,     0,    13,
       0,  1730,     0,    92,    93,     6,     0,     0,   121,     0,
       0,    18,     0,   122,    94,    95,   123,     0,     0,     0,
       0,     0,     0,     0,   170,     0,     0,     0,     0,     0,
    1861,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,  1862,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,     0,     0,     0,   831,     0,     0,
     832,     0,     0,   833,     0,     0,   834,     0,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,     0,     0,     0,   851,     0,     0,
       0,     0,   852,     0,   816,   853,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
       0,     0,     0,   831,     0,     0,   832,     0,     0,   833,
       0,     0,   834,     0,   835,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
       0,     0,     0,   851,     0,     0,   814,     0,   852,     0,
       0,   853,     7,     8,     9,     0,     0,    10,    11,   815,
       0,    13,     0,  1743,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,  1863,     0,   220,     0,     0,     0,     0,     0,
     221,     0,   814,     0,     0,     0,     0,     0,     7,     8,
       9,     0,     0,    10,    11,   815,     0,    13,     0,  1745,
       0,     0,     0,   121,     0,     0,     0,     0,   122,    18,
       0,   123,     0,   206,   207,   208,   396,   209,   210,   211,
     212,  1864,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,  1865,   221,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,   816,   221,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,     0,     0,     0,   831,     0,     0,   832,     0,
       0,   833,     0,     0,   834,     0,   835,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   850,     0,     0,     0,   851,     0,     0,     0,     0,
     852,     0,   816,   853,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,     0,     0,
       0,   831,     0,     0,   832,     0,     0,   833,     0,     0,
     834,     0,   835,   836,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,     0,     0,
       0,   851,     0,     0,   814,     0,   852,     0,     0,   853,
       7,     8,     9,     0,     0,    10,    11,   815,     0,    13,
       0,  1747,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,   206,   207,   208,  1978,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
     814,   221,     0,     0,     0,     0,     7,     8,     9,     0,
       0,    10,    11,   815,     0,    13,     0,  1748,     0,     0,
       0,     0,     0,     0,   206,   207,   208,    18,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,   206,   207,   208,   220,   209,   210,   211,   212,     0,
     221,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,   209,   210,   211,   212,   221,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,   816,   221,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
       0,     0,     0,   831,     0,     0,   832,     0,     0,   833,
       0,     0,   834,     0,   835,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
       0,     0,     0,   851,     0,     0,     0,     0,   852,     0,
     816,   853,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,     0,     0,     0,   831,
       0,     0,   832,     0,     0,   833,     0,     0,   834,     0,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,     0,     0,     0,   851,
       0,     0,   814,     0,   852,     0,     0,   853,     7,     8,
       9,     0,     0,    10,    11,   815,     0,    13,     0,  1749,
       0,   206,   207,   208,     0,   209,   210,   211,   212,    18,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,   281,     0,     0,     0,     0,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   814,     0,
       0,     0,     0,     0,     7,     8,     9,     0,     0,    10,
      11,   815,     0,    13,     0,  1967,    92,    93,   162,     0,
       0,     0,     0,     0,     0,    18,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,   165,   166,   167,     0,     0,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   816,     0,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,     0,     0,
       0,   831,     0,     0,   832,     0,     0,   833,     0,     0,
     834,     0,   835,   836,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,     0,     0,
       0,   851,     0,     0,     0,     0,   852,     0,   816,   853,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,     0,     0,     0,   831,     0,     0,
     832,     0,     0,   833,     0,     0,   834,     0,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,     0,     0,     0,   851,     0,     0,
     814,     0,   852,     0,     0,   853,     7,     8,     9,     0,
       0,    10,    11,   815,     0,    13,     0,  1974,     0,     0,
       0,     0,     0,     0,   206,   207,   208,    18,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,   366,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,   814,     0,     0,     0,
       0,     0,     7,     8,     9,     0,     0,    10,    11,   815,
       0,    13,     0,  2023,     0,     0,   121,    92,    93,     6,
     485,   122,     0,    18,   123,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,     0,     0,     0,     0,     0,     0,     0,     0,
     816,     0,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,     0,     0,     0,   831,
       0,     0,   832,     0,     0,   833,     0,     0,   834,     0,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,     0,     0,     0,   851,
       0,     0,     0,     0,   852,     0,   816,   853,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,     0,     0,     0,   831,     0,     0,   832,     0,
       0,   833,     0,     0,   834,     0,   835,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   850,     0,     0,     0,   851,     0,     0,   814,     0,
     852,     0,     0,   853,     7,     8,     9,     0,     0,    10,
      11,   815,     0,    13,     0,  2025,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   814,     0,     0,     0,     0,     0,
       7,     8,     9,     0,     0,    10,    11,   815,     0,    13,
       0,  2027,    92,    93,     6,     0,     0,   121,     0,     0,
       0,    18,   122,    94,    95,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   391,
       0,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   746,     0,     0,   831,     0,     0,
     832,     0,     0,   833,     0,     0,   834,     0,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,  1045,     0,     0,   851,     0,     0,
       0,     0,   852,     0,   816,   853,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
       0,  1253,     0,   831,     0,     0,   832,     0,     0,   833,
       0,     0,   834,     0,   835,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
       0,     0,     0,   851,    92,    93,   162,     0,   852,     0,
       0,   853,     0,     0,     0,    94,    95,     0,     0,     0,
       0,     0,     0,  2028,     0,     0,     0,     0,   164,   165,
     166,   167,     0,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1084,     0,     0,     0,     0,     0,  2052,
       0,     0,   121,     0,     0,     0,     0,   122,     0,     0,
     123,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,     0,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,  1549,     0,    53,   220,     0,     0,    54,
       0,     0,   221,     0,     0,     0,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   780,   781,   782,   783,   784,   785,   786,
     787,     0,     0,   788,   789,   790,   791,   792,   793,   794,
     795,     0,     0,   796,  1550,     0,   208,    55,   209,   210,
     211,   212,     0,    56,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,    57,     0,    58,     0,
     221,     0,     0,     0,   121,     0,     0,     0,  1551,   122,
      59,     0,   123,     0,    60,     0,     6,     0,     0,     0,
       0,     0,     7,     8,     9,     0,    61,    10,    11,    12,
       0,    13,     0,    14,    15,    16,    17,     0,  1552,     0,
       0,     0,     0,    18,     0,     0,     0,    62,     0,  1553,
    1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,  1563,
    1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,  1573,
    1574,  1575,     0,   206,   207,   208,    19,   209,   210,   211,
     212,     0,    20,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,    21,     0,    22,     0,   221,
       0,     0,     0,   284,    63,     0,    64,     0,     0,    23,
       0,     0,     0,    24,     0,     0,   206,   207,   208,     0,
     209,   210,   211,   212,     0,    25,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,     0,     0,     0,    26,   386,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,   387,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   388,    27,     0,    28,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
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
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1333,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1341,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1350,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1584,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1609,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1610,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1611,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1617,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1623,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1630,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1650,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1815,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1816,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1824,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1830,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1831,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1855,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1856,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1857,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1907,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1928,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1930,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1960,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1961,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1962,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  2038,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  2065,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    2074,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  2077,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,   352,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,   489,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,   566,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,   567,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,   743,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
     865,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,   960,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  1806,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  1920,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,  1988,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,  1990,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,  2018,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,  2019,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  2020,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  2042,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    2045,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,  2071,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  2079,   209,   210,   211,   212,     0,
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
       0,   220,     0,     0,     0,   862,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,   863,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1615,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1616,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1654,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    1813,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  1827,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1925,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1926,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1927,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1932,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  1942,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1943,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1963,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  2004,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    2058,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     780,   781,   782,   783,   784,   785,   786,   787,     0,     0,
     788,   789,   790,   791,   792,   793,   794,   795,     0,     0,
     796,     0,     0,     0,  1426,   780,   781,   782,   783,   784,
     785,   786,   787,     0,     0,   788,   789,   790,   791,   792,
     793,   794,   795,     0,     0,   796,     0,   906,   780,   781,
     782,   783,   784,   785,   786,   787,     0,     0,   788,   789,
     790,   791,   792,   793,   794,   795,     0,     0,   796,   782,
     783,   784,   785,   786,   787,     0,     0,   788,   789,   790,
     791,   792,   793,   794,   795,     0,     0,   796,   783,   784,
     785,   786,   787,     0,     0,   788,   789,   790,   791,   792,
     793,   794,   795,     0,     0,   796
};

static const yytype_int16 yycheck[] =
{
       5,    85,     7,   509,   503,   976,   944,   945,   898,   654,
       5,     5,    17,   903,   904,   400,   522,  1215,     3,     5,
       5,  1219,     5,    28,  1467,     5,   532,   147,   148,     5,
     536,   638,     5,     5,   540,    40,    26,     0,    85,    72,
      85,  1484,   177,   264,    89,     0,   431,  1490,     5,     7,
     271,    84,     5,   860,    99,     5,  1499,     5,    85,     3,
     180,     5,  1505,  1506,     3,   273,     5,   874,   875,   876,
     877,     3,    99,     5,     5,     5,   261,     5,     7,   261,
       5,   888,    67,    11,    12,    13,   239,   263,    16,    17,
      18,     7,    20,   239,     5,     5,     5,   273,     5,   260,
      72,    11,    12,    13,    32,   266,    16,    17,    18,   595,
      20,     5,   102,     5,   239,   760,   269,   762,   269,   264,
      21,     5,    32,   269,    72,   263,   271,    11,    12,    13,
     264,   269,    16,    17,    18,   270,    20,   271,   263,   946,
     947,   748,   147,   148,    26,   150,   151,    72,    32,   154,
     155,   156,   157,   158,   159,   160,   276,   277,    67,    26,
      70,    72,   969,    72,     7,   269,     5,     6,    85,   273,
       9,    10,    89,    90,    68,   180,   181,   150,   151,   269,
      72,   154,   155,   156,   157,   158,   159,    71,  1078,   574,
      91,   263,   120,   121,   122,   123,   331,    78,   684,   685,
     686,   687,   262,   110,   263,    89,     3,  1014,     5,   329,
     269,   271,  1410,   120,   273,    99,   100,   239,    99,   269,
     102,     5,   227,   273,   108,   270,   110,    11,    12,    13,
     252,  1121,    16,    17,    18,   102,    20,   270,     5,   269,
     270,   263,   143,   270,    11,    12,    13,   367,    32,    16,
      17,    18,   262,    20,   338,   640,    85,   970,   266,   273,
     268,   271,    91,   143,   254,    32,   146,   168,   169,   982,
      99,   276,   277,   263,   269,   595,   261,   763,   362,   273,
     263,   161,   162,   269,   269,   165,   166,   272,   269,   269,
     273,   338,   264,   269,   266,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   269,   269,   799,   253,    99,   269,   261,   266,   269,
     269,   269,   261,    21,   329,   269,  1133,   262,   272,   261,
     261,   261,  1139,   272,   263,   266,   271,    89,   458,   344,
     272,   346,   270,   348,   264,   269,    26,   262,   261,   146,
     263,   271,   136,   270,    26,   266,   271,   266,  1248,   143,
     270,   113,   367,   498,   684,   685,   686,   687,   338,   270,
       5,   344,   254,   872,   266,   348,    11,    12,    13,   269,
     269,    16,    17,    18,   273,    20,   270,   254,   264,   270,
     270,    89,   269,    91,   269,   271,   263,    32,   403,   238,
    1207,  1208,  1209,   264,   102,   410,    26,     5,     6,  1216,
     271,     9,    10,   264,    89,    21,   269,   115,   264,   424,
     271,   218,   102,   909,    99,   271,   101,  1870,   398,   399,
     102,    66,    99,   438,   101,   133,   406,  1880,   443,  1246,
     239,   270,   109,   763,   449,   263,   451,   452,  1255,   269,
     455,   269,   457,   458,    92,    93,    94,    95,    96,    97,
       6,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   263,     7,   799,
    1678,     7,   102,   269,     5,    91,   270,    81,    82,   494,
      11,    12,    13,   264,    89,    16,    17,    18,   503,    20,
     271,     5,   269,   270,    99,   269,   270,    11,    12,    13,
     595,    32,    16,    17,    18,    99,    20,   269,   270,   264,
     115,  1328,   270,   271,   119,   119,   271,   264,    32,  1972,
     136,   269,  1975,   133,   271,   273,     5,   143,   144,   133,
       5,   269,  1985,  1986,   263,   273,    11,    12,    13,  1048,
       7,    16,    17,    18,     7,    20,     7,   237,     7,   143,
       7,  1451,   168,  1453,   264,   171,   172,    32,    89,   270,
     271,   271,   270,  1059,   254,   261,  1383,   582,    99,   264,
       7,  2024,   254,     8,  1782,  1091,   271,  1073,   196,   909,
     595,   263,   597,   270,   271,   270,   601,  1083,   603,   684,
     685,   686,   687,   270,     7,   264,   611,   612,   264,   582,
     615,   195,   271,   197,   619,   271,   137,   138,   139,   140,
     141,   142,   264,   628,   597,    99,   271,   272,   601,   271,
     603,  1569,   270,   638,   254,   270,   220,   642,   611,   612,
     238,   115,   615,   263,   269,   270,   619,     7,   143,   247,
     248,   146,  1459,     7,     5,   628,     7,   269,  1371,  1372,
    1373,     7,  1375,   137,   270,     7,   161,   162,   163,   642,
       7,    22,    23,    24,     7,   270,   270,   264,   763,   684,
     685,   686,   687,     7,   271,   690,   270,    99,    39,   101,
     102,   103,   104,   105,   106,   107,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,     7,   264,   799,   264,   269,   270,     7,   193,
     271,     5,   271,   262,   729,   269,   270,    11,    12,    13,
       5,     6,    16,    17,    18,     7,    20,   270,   271,   269,
    1547,   269,   270,   748,     5,   270,   271,   263,    32,   270,
      11,    12,    13,  1073,   263,    16,    17,    18,   763,    20,
     270,   271,     7,  1083,   263,   269,   270,   270,   271,   270,
     271,    32,   263,   778,   263,   270,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   270,   271,   799,   263,   270,   932,   270,   271,
     270,   271,  1773,  1774,   269,   270,   269,   270,   813,   814,
       7,  1456,  1457,  1458,     7,   240,   241,   242,   263,   244,
     245,   246,   247,   263,   909,   250,   251,   252,   253,   254,
     255,   256,   270,   271,   263,   260,  1549,  1550,   270,   271,
     813,   266,   270,   271,  1557,   270,   270,   271,   199,     7,
    1235,   270,   271,   858,   859,   860,   270,   271,   270,   270,
     271,   981,   263,   983,   263,   101,   871,   872,   263,   874,
     875,   876,   877,   270,   271,   111,   112,   113,   883,   270,
     271,  1266,   263,   888,   270,   271,   970,   270,   271,  1274,
     263,  1276,   270,   271,  1607,  1015,  1609,   263,   982,   254,
     255,   256,     5,   271,   909,   260,   270,   271,    11,    12,
      13,   266,     7,    16,    17,    18,   263,    20,   263,  1809,
     270,   271,   263,  1308,     3,     4,     5,   263,  1313,    32,
     270,   271,   937,   263,  1420,   270,   271,   198,   199,   200,
     201,   946,   947,  1560,  1561,  1431,   263,   263,  1661,   263,
     263,   956,   263,   263,    33,    34,    35,    36,    37,   263,
     965,   966,   263,   263,   969,   263,     5,     5,   271,   252,
     253,   254,   255,   256,   979,   980,   981,   260,   983,   984,
     985,   239,   264,   266,   989,   269,   270,   264,  1073,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1083,   239,
    1005,  1006,   254,   255,   256,   257,    43,    44,   260,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,   239,  1031,   269,   271,     5,
    1035,   264,   264,  1840,   270,    11,    12,    13,     7,   264,
      16,    17,    18,  1048,    20,     7,   263,     5,    85,    86,
       5,     5,     5,    11,    12,    13,    32,  1770,    16,    17,
      18,  1951,    20,   252,   253,   254,   255,   269,  1073,   269,
       5,   269,     5,     5,    32,   269,   239,   269,  1083,   269,
    1887,   264,   271,     5,   121,   122,   123,     5,     5,    11,
      12,    13,   269,   269,    16,    17,    18,     5,    20,   269,
       5,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      32,  1431,    83,   269,   269,     5,     5,   264,    89,     7,
     684,   685,   686,   687,   161,     7,     7,     7,  1133,     7,
       7,   102,     8,     7,  1139,   252,   253,   254,   255,   256,
     257,   239,   179,   260,   269,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,  1810,   269,   270,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,     7,   125,   126,   127,   128,   129,
     130,   131,     7,   133,     7,   263,   263,  1202,  1203,   763,
     254,     7,  1207,  1208,  1209,  1704,     7,     7,     7,     7,
       5,  1216,   239,     7,     7,  1928,     7,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   269,     7,   799,     7,   274,   275,     7,
       7,  1246,   270,     7,   281,   264,     5,     7,    69,     7,
    1255,   288,    11,    12,    13,   266,     7,    16,    17,    18,
       5,    20,  1397,   254,     7,   269,     7,     7,     5,     7,
     270,     7,   269,    32,    11,    12,    13,     8,  1991,    16,
      17,    18,   264,    20,   263,   263,   263,  1371,  1372,  1373,
     263,  1375,     5,   269,   270,    32,   263,   334,     3,   270,
     263,   338,     5,   340,   263,   529,     7,   264,   269,   269,
       5,   269,   270,   269,   263,  1320,  1321,   269,  2031,   263,
    1325,   263,    84,  1328,    86,   362,     5,    89,   269,   366,
     270,   270,    11,    12,    13,   263,   263,    16,    17,    18,
    2053,    20,   379,   263,     5,   909,  1431,   269,   270,   386,
     387,   388,   389,    32,   391,  1360,   263,   394,   395,   396,
     263,  1867,   247,   125,   126,   127,   128,   129,   130,   131,
     270,   133,     3,  1378,  1379,   269,  1381,  1382,  1383,   263,
     263,   260,     7,   607,     6,  1390,     5,   239,   246,   247,
     263,   263,   250,   251,   252,   253,   254,   255,   256,   257,
       5,  1536,   260,  1538,  1539,  1540,    11,    12,    13,   263,
     263,    16,    17,    18,   263,    20,   263,  1390,   263,   263,
     263,   263,   263,   269,  1544,   263,  1431,    32,   263,   466,
     467,   263,   263,  1553,   263,   472,   263,   263,  1443,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   266,   269,
       3,     4,     5,   269,  1459,   263,   263,   269,  1463,   496,
    1465,    14,    15,     5,   269,  1549,  1550,   263,     5,     5,
       5,   263,   269,  1557,    27,    28,    29,    30,   263,   263,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,     5,   269,   264,   270,  1073,
     269,   270,   264,   263,   270,   264,   263,     5,   264,  1083,
       5,   558,     5,  1607,     5,  1609,     5,   269,     5,     5,
    1650,  1651,   269,   270,   269,   572,     5,  1657,     5,  1544,
       5,     7,  1547,     5,     7,     3,     7,   263,  1553,    11,
      12,    13,     5,   590,    16,    17,    18,   263,    20,   269,
     271,  1696,   269,  1683,  1684,   263,     7,  1702,     5,     7,
      32,   271,     7,     7,    11,    12,    13,  1661,     7,    16,
      17,    18,     7,    20,     7,     7,     7,     7,     7,     7,
     269,   270,   816,   630,   631,    32,     7,   634,     7,     7,
    1605,   269,   264,   263,   271,     7,     7,  1612,     7,  1614,
     240,   241,   242,  1618,   244,   245,   246,   247,     7,  1624,
     250,   251,   252,   253,   254,   255,   256,     7,  1633,   269,
     260,     5,     7,     5,  1639,  1640,   266,     7,     7,     7,
       7,   271,     7,     7,     7,  1650,  1651,  1767,    84,  1769,
      86,    87,  1657,    89,   878,   879,   880,   881,     8,     7,
       5,   885,     5,    99,   269,   270,    11,    12,    13,     7,
       7,    16,    17,    18,   711,    20,     7,     7,  1683,  1684,
     116,   117,   118,     7,     7,     7,  1770,    32,     7,     7,
       7,     3,     4,     5,     7,     5,     7,   133,   263,  1704,
     253,     7,    14,    15,   263,   258,   263,     5,   261,   746,
     747,     5,  1847,  1848,  1849,  1850,     7,   270,     7,     7,
       7,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       7,    63,    64,     7,     7,   191,     7,   264,   264,   264,
     271,   798,  1767,   271,  1769,     7,   270,   991,   992,   271,
     271,   264,   271,   271,   271,   120,   271,   240,   241,   242,
    1004,   244,   245,   246,   247,   271,   264,   250,   251,   252,
     253,   254,   255,   256,     7,   269,   271,   260,   271,   271,
     271,   271,   270,   266,    84,   269,    86,   269,   270,    89,
       3,   271,   271,   125,   271,   271,   271,   271,   264,   271,
     132,   271,   271,   271,   269,   269,   269,   263,   270,  1053,
       7,  1055,   269,   270,   270,  1840,   115,   264,  1062,     7,
     271,   271,     7,   271,  1928,   125,   126,   127,   128,   129,
     130,   131,   264,   133,   271,     7,   263,  1992,     5,  1994,
    1995,     7,     7,     3,     7,     7,     7,  1431,     7,     7,
    1094,   269,     7,   240,   241,   242,     7,   244,   245,   246,
     247,     7,  1887,   250,   251,   252,   253,   254,   255,   256,
     240,   241,   242,   260,   244,   245,   246,   247,     7,   266,
     250,   251,   252,   253,   254,   255,   256,  1991,   269,   269,
     260,   269,  2047,   269,     7,   269,   266,   269,    84,  1924,
      86,    87,    88,     7,     7,   270,  1931,     7,     7,   213,
     967,     5,   264,   970,   246,    84,   269,    86,    87,    88,
     252,   253,   269,     7,   269,   982,   258,  2031,   269,   261,
     133,     7,   264,   265,   266,   267,   263,   269,     5,   125,
     126,   127,   128,   129,   130,   131,   271,   133,   134,  2053,
    1007,   264,  1009,     5,  1011,     5,   125,   126,   127,   128,
     129,   130,   131,   264,   133,   134,   264,   264,     5,     7,
     270,     7,   264,   264,  1218,   271,   271,   271,  2003,   264,
    2005,   271,  2007,  2008,     7,     7,     7,     7,  1045,     7,
       3,     4,     5,   240,   241,   242,  2021,   244,   245,   246,
     247,    14,    15,   250,   251,   252,   253,   254,   255,   256,
     271,   264,   264,   260,  2039,   262,   271,   271,   264,   266,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   271,
      63,    64,   240,   241,   242,   271,   244,   245,   246,   247,
     264,   271,   250,   251,   252,   253,   254,   255,   256,   269,
       5,     7,   260,   271,     7,  1319,   269,     5,   266,     5,
       5,     3,  1326,   270,   270,   269,   269,   269,   269,   266,
     264,  1335,   270,   264,  1338,     7,   264,   270,     7,  1343,
     264,   270,     7,     7,     7,     7,     7,   264,     7,     7,
       7,  1355,   125,     7,     7,     7,     7,     7,     7,   132,
       7,   138,     7,     7,  1368,   269,  1370,   240,   241,   242,
     271,   244,   245,   246,   247,     7,   264,   250,   251,   252,
     253,   254,   255,   256,     6,     5,     7,   260,     7,     7,
    1394,     8,     7,   266,   269,   114,   240,   241,   242,     7,
     244,   245,   246,   247,   271,   271,   250,   251,   252,   253,
     254,   255,   256,    19,  1418,  1419,   260,  1421,     3,     4,
       5,     6,   266,   264,     9,   271,   271,   264,   271,    14,
      15,   271,  1249,   264,  1438,   264,   271,   269,   271,   269,
       7,   269,    27,    28,    29,    30,    31,   269,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   246,     5,     7,   271,   269,     7,   252,
     253,     7,     7,   269,     7,   258,     7,    72,   261,     7,
       7,     7,     5,   266,   267,     5,   269,     5,   263,   269,
       7,   264,   264,   264,     5,  1322,  1323,  1324,     5,     5,
     264,   270,     7,  1330,     7,  1332,  1333,     7,     7,  1336,
    1337,     7,   270,     7,  1341,   271,     7,  1344,  1345,  1346,
    1347,     7,     7,  1350,  1351,  1352,     7,  1354,     7,     7,
       7,  1358,  1359,   269,   269,     7,  1363,  1364,     3,     4,
       5,     7,   269,     7,  1371,  1372,  1373,  1374,  1375,    14,
      15,     7,     7,  1380,     7,     7,   269,     7,   269,   269,
       7,   270,    27,    28,    29,    30,     7,   269,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   269,   271,    65,     7,     7,   264,   264,
     270,     7,     7,  1617,     7,   135,     7,     5,     7,  1623,
       7,   269,   935,   240,   241,   242,  1630,   244,   245,   246,
     247,   269,   269,   250,   251,   252,   253,   254,   255,   256,
     271,   270,  1646,   260,   270,   262,   269,   271,  2067,   266,
     246,   247,   237,   269,   250,   251,   252,   253,   254,   255,
     256,   270,   269,  1667,   260,   270,   270,   269,   253,   270,
     266,   694,   936,   258,  1066,   810,   261,  1681,   581,  1203,
    1389,   266,  1665,   859,   269,   240,   241,   242,   243,   244,
     245,   246,   247,   546,  1543,   250,   251,   252,   253,   254,
     255,   256,   257,  1041,    -1,   260,    -1,    -1,   240,   241,
     242,    -1,   244,   245,   246,   247,   271,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,  1549,  1550,   266,    -1,    -1,  1554,  1555,    -1,
    1557,  1558,    -1,    -1,    -1,    -1,    -1,  1564,    -1,  1566,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    -1,    -1,   218,    -1,    -1,    -1,  1584,    -1,   240,
     241,   242,    -1,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,     7,   260,
    1607,  1608,  1609,  1610,  1611,   266,    -1,    -1,   253,    -1,
      -1,    -1,    -1,   258,    -1,    -1,   261,    -1,    -1,    -1,
      -1,     7,    -1,    -1,   269,  1819,    -1,    -1,    -1,    -1,
    1824,    -1,  1826,    -1,    -1,    -1,    -1,    -1,  1645,  1833,
      -1,    -1,  1649,    -1,    -1,  1652,  1653,    -1,    -1,    -1,
      -1,    -1,  1846,    -1,  1661,    -1,    -1,    -1,     7,  1853,
      -1,    -1,    -1,   240,   241,   242,    -1,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,     3,     4,     5,     6,    -1,   266,
       9,  1885,  1699,  1700,  1701,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,  1710,  1711,  1712,  1713,  1714,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,  1941,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1770,    -1,  1959,    -1,    -1,  1775,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,  1805,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1814,  1815,  1816,
    1817,    -1,    -1,  1820,    -1,  1822,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1830,  1831,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,  1855,  1856,
    1857,   260,  1859,    -1,   240,   241,   242,   266,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,  1884,    -1,    -1,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,  1901,   244,   245,   246,   247,    -1,
    1907,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   266,   237,    -1,
      -1,  1928,    -1,  1930,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,   258,
      -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    -1,    -1,  1960,  1961,  1962,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,  1991,    -1,    -1,    -1,    -1,   253,
      32,    -1,    -1,    -1,   258,  2002,    -1,   261,    -1,    -1,
      -1,    -1,    -1,     7,  2011,   269,    -1,  2014,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,  2031,    -1,     5,    -1,    -1,    -1,
      -1,  2038,    11,    12,    13,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,  2053,  2054,     3,     4,
       5,    -1,    -1,    32,    -1,    -1,    -1,    -1,  2065,    14,
      15,    -1,  2069,    -1,    -1,    -1,    -1,  2074,    -1,    -1,
    2077,    -1,    27,    28,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,    -1,
      -1,    -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,   194,    -1,    -1,    -1,    -1,   199,    -1,    -1,
     202,    -1,    -1,    -1,    -1,    -1,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,    -1,    -1,    -1,   164,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,   173,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,   194,    -1,    -1,     5,    -1,
     199,    -1,    -1,   202,    11,    12,    13,    -1,   270,    16,
      17,    18,    -1,    20,    -1,    -1,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    32,   250,   251,   252,   253,
     254,   255,   256,   240,   241,   242,   260,   244,   245,   246,
     247,     7,   266,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,     5,    -1,    -1,    -1,    -1,   266,
      11,    12,    13,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,   270,    -1,     3,     4,     5,    -1,    -1,   253,    -1,
      -1,    32,    -1,   258,    14,    15,   261,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,
     167,    -1,    -1,   170,    -1,    -1,   173,    -1,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,   194,    -1,    -1,
      -1,    -1,   199,    -1,   145,   202,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
      -1,    -1,    -1,   164,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,   173,    -1,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,   194,    -1,    -1,     5,    -1,   199,    -1,
      -1,   202,    11,    12,    13,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,   270,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,   240,   241,   242,    -1,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,     7,    -1,   260,    -1,    -1,    -1,    -1,    -1,
     266,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,   270,
      -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,   258,    32,
      -1,   261,    -1,   240,   241,   242,   266,   244,   245,   246,
     247,     7,    -1,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,     7,   266,
      -1,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,   145,   266,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,    -1,    -1,    -1,   164,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,   173,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,
     199,    -1,   145,   202,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,    -1,    -1,
      -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,
     173,    -1,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,   194,    -1,    -1,     5,    -1,   199,    -1,    -1,   202,
      11,    12,    13,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,   270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,   240,   241,   242,     7,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
       5,   266,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,   270,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,    32,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,   240,   241,   242,   260,   244,   245,   246,   247,    -1,
     266,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,   244,   245,   246,   247,   266,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,    -1,   145,   266,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
      -1,    -1,    -1,   164,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,   173,    -1,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,   199,    -1,
     145,   202,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,    -1,    -1,    -1,   164,
      -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
      -1,    -1,     5,    -1,   199,    -1,    -1,   202,    11,    12,
      13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,   270,
      -1,   240,   241,   242,    -1,   244,   245,   246,   247,    32,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,     8,    -1,    -1,    -1,    -1,   266,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,   270,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,    -1,    -1,
      -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,
     173,    -1,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,   194,    -1,    -1,    -1,    -1,   199,    -1,   145,   202,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    -1,    -1,    -1,   164,    -1,    -1,
     167,    -1,    -1,   170,    -1,    -1,   173,    -1,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,   194,    -1,    -1,
       5,    -1,   199,    -1,    -1,   202,    11,    12,    13,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,   270,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,    32,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,     8,    -1,    -1,    -1,    -1,
     266,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,   270,    -1,    -1,   253,     3,     4,     5,
       6,   258,    -1,    32,   261,    -1,    -1,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,    -1,    -1,    -1,   164,
      -1,    -1,   167,    -1,    -1,   170,    -1,    -1,   173,    -1,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
      -1,    -1,    -1,    -1,   199,    -1,   145,   202,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,    -1,    -1,    -1,   164,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,   173,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,   194,    -1,    -1,     5,    -1,
     199,    -1,    -1,   202,    11,    12,    13,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,   270,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,   240,   241,   242,
      -1,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,   266,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,   270,     3,     4,     5,    -1,    -1,   253,    -1,    -1,
      -1,    32,   258,    14,    15,   261,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     8,    -1,    -1,   164,    -1,    -1,
     167,    -1,    -1,   170,    -1,    -1,   173,    -1,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     8,    -1,    -1,   194,    -1,    -1,
      -1,    -1,   199,    -1,   145,   202,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
      -1,     8,    -1,   164,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,   173,    -1,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,   194,     3,     4,     5,    -1,   199,    -1,
      -1,   202,    -1,    -1,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,   253,    -1,    -1,    -1,    -1,   258,    -1,    -1,
     261,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   266,    -1,   240,
     241,   242,    -1,   244,   245,   246,   247,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,   266,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    78,    -1,     3,   260,    -1,    -1,     7,
      -1,    -1,   266,    -1,    -1,    -1,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
      -1,    -1,   266,   240,   241,   242,   243,   244,   245,   246,
     247,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
     257,    -1,    -1,   260,   139,    -1,   242,    65,   244,   245,
     246,   247,    -1,    71,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    84,    -1,    86,    -1,
     266,    -1,    -1,    -1,   253,    -1,    -1,    -1,   173,   258,
      98,    -1,   261,    -1,   102,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    -1,   114,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    -1,   203,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,   135,    -1,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,    -1,   240,   241,   242,    65,   244,   245,   246,
     247,    -1,    71,   250,   251,   252,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    84,    -1,    86,    -1,   266,
      -1,    -1,    -1,   270,   192,    -1,   194,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,   114,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,   135,   271,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,   240,   241,   242,   266,   244,   245,   246,   247,   271,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,
      -1,    -1,   271,   192,    -1,   194,   240,   241,   242,    -1,
     244,   245,   246,   247,    -1,    -1,   250,   251,   252,   253,
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
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,   266,   240,   241,   242,   270,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,
     266,   240,   241,   242,   270,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,   262,   240,   241,   242,   266,   244,   245,
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
     253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,   266,   240,   241,   242,    -1,   244,   245,
     246,   247,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
     266,   240,   241,   242,    -1,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,   266,   240,   241,
     242,    -1,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
     262,   240,   241,   242,   266,   244,   245,   246,   247,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,   262,   240,   241,   242,   266,   244,   245,
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
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,   266,
     240,   241,   242,   243,   244,   245,   246,   247,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,   240,   241,   242,   243,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,   257,    -1,    -1,   260,    -1,   262,   240,   241,
     242,   243,   244,   245,   246,   247,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,   257,    -1,    -1,   260,   242,
     243,   244,   245,   246,   247,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,   257,    -1,    -1,   260,   243,   244,
     245,   246,   247,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,   257,    -1,    -1,   260
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
     271,   264,   271,   271,   143,   146,   161,   162,   163,   270,
     413,   271,   143,   146,   161,   162,   165,   166,   270,   415,
     271,    21,    91,   143,   168,   169,   270,   417,    21,    91,
     136,   143,   144,   168,   171,   172,   270,   419,   271,   264,
     271,   271,   271,   271,   271,   271,   270,   270,   271,   271,
     271,   271,   271,   271,   271,   264,   307,   409,   461,   409,
     430,     7,   288,   288,   269,   288,   269,   269,   269,   269,
     269,   448,   288,   252,   253,   254,   255,   271,   445,   237,
     305,   448,   271,   264,   271,   449,   270,   285,   271,   271,
     298,   271,     7,   269,   270,   288,   264,   309,   455,     3,
     264,   313,   288,     7,   115,     7,   298,   270,   271,   270,
     298,   270,   298,   263,   376,   264,     7,     7,     7,     3,
       7,   385,     7,   389,     7,     7,    81,    82,   119,   133,
     270,   382,   270,   298,   270,   298,     7,   269,     7,   305,
     461,   461,   455,   455,   455,   461,   305,     7,   288,     7,
     455,     7,   455,   455,   269,   305,   455,   455,   305,   455,
     269,   305,   455,   455,   455,   455,   455,   455,   455,   269,
     455,   305,   455,   455,   461,   269,   269,   455,   455,   269,
     305,     7,   305,   457,   457,   457,   455,   457,     7,     7,
     461,   461,   455,   461,   461,   288,     5,     7,   410,   410,
       5,   120,   270,   451,   213,   305,   269,   458,   269,   269,
     269,   264,   264,     5,   263,   448,   264,   133,     7,    78,
     139,   173,   203,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   271,   305,   305,   456,
     305,   335,   264,   264,   271,   264,   311,   264,     5,     5,
     305,     5,     5,   461,     7,     7,   264,   309,   309,   392,
     392,   392,   288,   461,   461,   405,   264,   271,   271,   271,
     271,   271,   271,   264,   271,   264,   264,   271,   405,     7,
       7,     7,     7,   271,   405,     7,     7,     7,     7,     7,
     271,     7,     7,   405,     7,     7,     7,     7,     7,   405,
     405,     7,     7,   420,   264,   271,   271,   264,   264,   271,
     271,   271,   271,   271,   264,   264,   264,   271,   270,   271,
     264,   271,   411,   264,   269,   269,     5,   271,   458,   270,
     458,   458,   458,     7,   446,   462,   264,     7,   288,   457,
     457,   269,     5,   247,   248,   462,   455,   455,   457,   455,
       5,   450,   450,   450,   455,     5,   269,   455,   307,   269,
     269,   269,   269,     3,   266,   264,   264,   270,   264,    92,
      93,    94,    95,    96,    97,   270,   336,   264,   455,   270,
       7,   270,   264,     7,   386,   390,     7,     7,     7,     7,
     270,     7,   457,   455,   457,   455,   455,   461,     7,   461,
       7,     7,   305,   270,   305,   270,   305,   270,   270,   270,
     269,   270,     7,   455,   305,     7,     7,   455,   462,   462,
     455,   455,     7,     7,     7,   462,     7,   138,     7,   214,
     218,   457,     7,   431,   431,   269,   305,   270,   270,   270,
     270,   271,   264,     7,   448,   305,   462,   462,     6,   458,
     455,   455,   455,   458,   294,     7,     7,     7,     7,     5,
     455,   455,   455,   455,   455,   269,   270,   114,     7,   271,
     271,    19,   264,   264,   271,   271,   271,   271,   264,   271,
     271,   264,   271,   421,   271,   264,   271,   264,   264,   264,
     271,   271,   270,   271,   462,   462,   457,    84,    86,    89,
     133,   270,   391,   432,   270,   455,   271,   269,   269,   269,
     269,   448,   264,   271,   270,   271,   271,   271,   270,   271,
       7,     7,     7,     7,     7,     7,   455,     5,   309,   392,
     269,     7,     7,   455,   455,   455,   455,     7,   305,   455,
     269,   455,    21,    89,    91,   102,   115,   133,   270,   422,
     305,     7,   305,     7,     7,     7,   455,   455,     7,   305,
     270,   271,     5,     5,     5,   288,   263,   271,   305,   458,
     458,   458,   458,   264,     7,   305,   455,   455,   455,   455,
     270,   299,   264,   264,   405,   264,   264,   264,   271,   264,
     271,   405,   264,     5,     5,   455,   305,     5,   288,   264,
     264,   271,   264,   264,   270,     7,   455,     7,     7,     7,
       7,   433,   455,   270,   270,   270,   270,   270,     7,   271,
     271,   271,   271,   264,     7,     7,     7,   270,     7,     7,
       7,   457,   269,   455,   270,   269,     7,     7,     7,     7,
       7,     7,     7,     7,   305,   269,   269,     7,   270,   309,
     270,   269,   269,   270,   269,   269,   305,   455,   455,   455,
       7,   352,   271,   405,   264,   405,   264,   405,   405,     7,
     264,   269,   457,   458,   269,   458,   458,   270,   270,   270,
     270,    65,   455,   270,   269,   270,     7,   270,   270,     7,
     455,   271,   270,   455,   270,   270,   289,   461,   271,   405,
       7,     7,   270,   457,   270,   270,   270,   269,     7,   269,
     300,   455,   270,   271,   269,   458,   353,   270,   264,   457,
     455,   270,   135,     7,   270,   271,   270,     5,   455,   269,
     300,   270,   455,     7,   271,   270,   455,   271,   455,   270
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
      Operation_P->Case.AddCorrection.Alpha = 1. ;
    ;}
    break;

  case 444:
#line 4442 "GetDP.y"
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

  case 446:
#line 4489 "GetDP.y"
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

  case 447:
#line 4502 "GetDP.y"
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

  case 448:
#line 4516 "GetDP.y"
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

  case 449:
#line 4529 "GetDP.y"
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

  case 450:
#line 4541 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 452:
#line 4550 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 454:
#line 4559 "GetDP.y"
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

  case 455:
#line 4570 "GetDP.y"
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

  case 456:
#line 4582 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 457:
#line 4592 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 458:
#line 4600 "GetDP.y"
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

  case 459:
#line 4613 "GetDP.y"
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

  case 460:
#line 4626 "GetDP.y"
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

  case 461:
#line 4640 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 462:
#line 4650 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 463:
#line 4660 "GetDP.y"
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

  case 464:
#line 4674 "GetDP.y"
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

  case 465:
#line 4688 "GetDP.y"
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

  case 466:
#line 4707 "GetDP.y"
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

  case 467:
#line 4725 "GetDP.y"
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

  case 468:
#line 4736 "GetDP.y"
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

  case 469:
#line 4751 "GetDP.y"
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

  case 470:
#line 4766 "GetDP.y"
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

  case 471:
#line 4781 "GetDP.y"
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

  case 472:
#line 4796 "GetDP.y"
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

  case 473:
#line 4811 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 474:
#line 4822 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 475:
#line 4827 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 476:
#line 4837 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 478:
#line 4847 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 479:
#line 4850 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 480:
#line 4860 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 481:
#line 4876 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 483:
#line 4892 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 484:
#line 4896 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 485:
#line 4900 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 486:
#line 4904 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 487:
#line 4909 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 488:
#line 4920 "GetDP.y"
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

  case 490:
#line 4937 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 491:
#line 4941 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 492:
#line 4945 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 493:
#line 4949 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4953 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 495:
#line 4958 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 496:
#line 4969 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 498:
#line 4984 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 499:
#line 4988 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 500:
#line 4992 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 501:
#line 4996 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 5000 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 503:
#line 5011 "GetDP.y"
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

  case 505:
#line 5029 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 506:
#line 5033 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 507:
#line 5037 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 508:
#line 5041 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 509:
#line 5046 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 510:
#line 5056 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 511:
#line 5062 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 512:
#line 5068 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 513:
#line 5078 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 514:
#line 5081 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 515:
#line 5086 "GetDP.y"
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

  case 517:
#line 5104 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 518:
#line 5114 "GetDP.y"
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

  case 519:
#line 5143 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 520:
#line 5146 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 521:
#line 5149 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 522:
#line 5157 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 523:
#line 5174 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 525:
#line 5186 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 527:
#line 5195 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 529:
#line 5208 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 530:
#line 5215 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 531:
#line 5223 "GetDP.y"
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

  case 532:
#line 5236 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 533:
#line 5241 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 534:
#line 5247 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 535:
#line 5250 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 536:
#line 5253 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 537:
#line 5259 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 539:
#line 5270 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 540:
#line 5273 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 541:
#line 5279 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 542:
#line 5284 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 543:
#line 5290 "GetDP.y"
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

  case 544:
#line 5302 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 545:
#line 5307 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 547:
#line 5321 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 548:
#line 5328 "GetDP.y"
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

  case 549:
#line 5356 "GetDP.y"
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

  case 550:
#line 5367 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 551:
#line 5372 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 552:
#line 5381 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 553:
#line 5398 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 555:
#line 5410 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 557:
#line 5417 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 559:
#line 5429 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 560:
#line 5436 "GetDP.y"
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

  case 561:
#line 5448 "GetDP.y"
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

  case 562:
#line 5459 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 563:
#line 5464 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 564:
#line 5470 "GetDP.y"
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

  case 565:
#line 5487 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 566:
#line 5497 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 567:
#line 5500 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 568:
#line 5504 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 569:
#line 5517 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 570:
#line 5522 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 571:
#line 5527 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 5536 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 573:
#line 5545 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 574:
#line 5554 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 575:
#line 5560 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 576:
#line 5565 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 577:
#line 5573 "GetDP.y"
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

  case 578:
#line 5585 "GetDP.y"
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

  case 579:
#line 5608 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 580:
#line 5609 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 581:
#line 5610 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 582:
#line 5611 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 583:
#line 5617 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 584:
#line 5619 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 585:
#line 5625 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 586:
#line 5631 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 587:
#line 5638 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 588:
#line 5647 "GetDP.y"
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

  case 589:
#line 5669 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 590:
#line 5677 "GetDP.y"
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

  case 591:
#line 5688 "GetDP.y"
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

  case 592:
#line 5702 "GetDP.y"
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

  case 593:
#line 5723 "GetDP.y"
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

  case 594:
#line 5750 "GetDP.y"
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

  case 595:
#line 5781 "GetDP.y"
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

  case 596:
#line 5801 "GetDP.y"
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

  case 598:
#line 5837 "GetDP.y"
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

  case 599:
#line 5851 "GetDP.y"
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

  case 600:
#line 5865 "GetDP.y"
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

  case 601:
#line 5879 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 602:
#line 5883 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 603:
#line 5887 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 604:
#line 5891 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 605:
#line 5895 "GetDP.y"
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

  case 606:
#line 5905 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 607:
#line 5910 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 608:
#line 5915 "GetDP.y"
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

  case 609:
#line 5935 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 610:
#line 5939 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 611:
#line 5946 "GetDP.y"
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

  case 612:
#line 5956 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 613:
#line 5965 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 614:
#line 5974 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 615:
#line 5981 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 616:
#line 5989 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 617:
#line 5993 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 618:
#line 6002 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 619:
#line 6006 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 620:
#line 6010 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 621:
#line 6018 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 622:
#line 6024 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 623:
#line 6028 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 624:
#line 6036 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 625:
#line 6043 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 626:
#line 6051 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 627:
#line 6058 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 628:
#line 6066 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 629:
#line 6073 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 630:
#line 6081 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 631:
#line 6085 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 632:
#line 6094 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 633:
#line 6100 "GetDP.y"
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

  case 634:
#line 6150 "GetDP.y"
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

  case 635:
#line 6165 "GetDP.y"
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

  case 636:
#line 6181 "GetDP.y"
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

  case 637:
#line 6201 "GetDP.y"
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

  case 638:
#line 6221 "GetDP.y"
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

  case 639:
#line 6259 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 640:
#line 6263 "GetDP.y"
    {
    ;}
    break;

  case 643:
#line 6279 "GetDP.y"
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

  case 644:
#line 6294 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 645:
#line 6300 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 646:
#line 6306 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 647:
#line 6312 "GetDP.y"
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

  case 648:
#line 6328 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 649:
#line 6333 "GetDP.y"
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

  case 650:
#line 6349 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 651:
#line 6354 "GetDP.y"
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

  case 652:
#line 6366 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 653:
#line 6376 "GetDP.y"
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

  case 654:
#line 6390 "GetDP.y"
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

  case 656:
#line 6416 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 657:
#line 6422 "GetDP.y"
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

  case 658:
#line 6436 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 659:
#line 6442 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 660:
#line 6452 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 661:
#line 6453 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 662:
#line 6454 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 663:
#line 6455 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 664:
#line 6456 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 665:
#line 6457 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 666:
#line 6458 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 667:
#line 6459 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 668:
#line 6460 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 669:
#line 6461 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 670:
#line 6462 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 671:
#line 6463 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 672:
#line 6464 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 673:
#line 6465 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 674:
#line 6466 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 675:
#line 6467 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 676:
#line 6468 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 677:
#line 6469 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 678:
#line 6470 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 679:
#line 6471 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 680:
#line 6472 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 681:
#line 6476 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 682:
#line 6477 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 683:
#line 6478 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 684:
#line 6479 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 685:
#line 6480 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 686:
#line 6481 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 687:
#line 6482 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 688:
#line 6483 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 689:
#line 6484 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 690:
#line 6485 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 691:
#line 6486 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 692:
#line 6487 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 693:
#line 6488 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 694:
#line 6489 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 695:
#line 6490 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 696:
#line 6491 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 697:
#line 6492 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 698:
#line 6493 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 699:
#line 6494 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 700:
#line 6495 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 701:
#line 6496 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 702:
#line 6497 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 703:
#line 6498 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 704:
#line 6499 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 705:
#line 6500 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 706:
#line 6501 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6502 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 708:
#line 6503 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6504 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 710:
#line 6505 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6506 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 712:
#line 6507 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 713:
#line 6508 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 714:
#line 6509 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 715:
#line 6510 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 716:
#line 6511 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 717:
#line 6512 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 718:
#line 6513 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 719:
#line 6515 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 720:
#line 6517 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 721:
#line 6519 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 722:
#line 6521 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 723:
#line 6526 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 724:
#line 6527 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 725:
#line 6528 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 726:
#line 6529 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 727:
#line 6530 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 728:
#line 6531 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 729:
#line 6532 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 730:
#line 6534 "GetDP.y"
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

  case 731:
#line 6552 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 732:
#line 6555 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 733:
#line 6561 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 734:
#line 6564 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 735:
#line 6571 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 736:
#line 6577 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 737:
#line 6580 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 738:
#line 6583 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 739:
#line 6595 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 740:
#line 6601 "GetDP.y"
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

  case 741:
#line 6612 "GetDP.y"
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

  case 742:
#line 6628 "GetDP.y"
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

  case 743:
#line 6650 "GetDP.y"
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

  case 744:
#line 6665 "GetDP.y"
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

  case 745:
#line 6703 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 746:
#line 6711 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 747:
#line 6723 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 748:
#line 6731 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 749:
#line 6745 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 750:
#line 6748 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 751:
#line 6755 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 752:
#line 6758 "GetDP.y"
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

  case 753:
#line 6773 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 754:
#line 6778 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 755:
#line 6783 "GetDP.y"
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

  case 756:
#line 6802 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 757:
#line 6812 "GetDP.y"
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

  case 758:
#line 6825 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;

  case 759:
#line 6837 "GetDP.y"
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
#line 12188 "GetDP.tab.c"
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


#line 6849 "GetDP.y"



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


