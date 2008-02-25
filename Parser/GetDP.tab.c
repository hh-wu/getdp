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

/* $Id: GetDP.tab.c,v 1.121 2008-02-25 15:37:51 dular Exp $ */
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
#define YYLAST   7605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  272
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  756
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2064

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
    1586,  1596,  1604,  1612,  1620,  1630,  1636,  1646,  1656,  1668,
    1680,  1692,  1698,  1716,  1730,  1746,  1758,  1772,  1773,  1781,
    1782,  1790,  1798,  1810,  1816,  1822,  1832,  1842,  1852,  1858,
    1864,  1876,  1886,  1901,  1916,  1924,  1937,  1948,  1956,  1964,
    1972,  1974,  1976,  1978,  1979,  1982,  1986,  1990,  1993,  1994,
    1997,  2001,  2005,  2009,  2013,  2018,  2019,  2022,  2026,  2030,
    2034,  2038,  2042,  2047,  2048,  2051,  2055,  2059,  2063,  2067,
    2072,  2073,  2076,  2080,  2084,  2088,  2092,  2096,  2101,  2106,
    2111,  2112,  2117,  2118,  2121,  2125,  2129,  2133,  2137,  2141,
    2145,  2146,  2149,  2153,  2155,  2156,  2159,  2163,  2168,  2172,
    2176,  2181,  2182,  2187,  2190,  2191,  2194,  2198,  2203,  2204,
    2210,  2216,  2219,  2220,  2223,  2224,  2231,  2235,  2239,  2243,
    2247,  2248,  2251,  2255,  2257,  2258,  2261,  2265,  2269,  2273,
    2277,  2282,  2283,  2292,  2293,  2294,  2298,  2306,  2314,  2323,
    2335,  2342,  2343,  2354,  2356,  2360,  2367,  2369,  2371,  2373,
    2375,  2376,  2380,  2382,  2385,  2388,  2401,  2404,  2420,  2425,
    2438,  2456,  2479,  2492,  2493,  2496,  2500,  2505,  2510,  2514,
    2517,  2520,  2524,  2528,  2532,  2536,  2540,  2543,  2547,  2551,
    2555,  2559,  2563,  2567,  2571,  2577,  2580,  2583,  2587,  2597,
    2601,  2604,  2614,  2617,  2627,  2630,  2640,  2646,  2650,  2653,
    2654,  2657,  2664,  2673,  2682,  2693,  2695,  2700,  2702,  2704,
    2710,  2715,  2720,  2728,  2733,  2741,  2747,  2751,  2755,  2763,
    2769,  2778,  2781,  2782,  2786,  2793,  2799,  2805,  2807,  2809,
    2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,  2827,  2829,
    2831,  2833,  2835,  2837,  2839,  2841,  2843,  2845,  2847,  2849,
    2853,  2856,  2859,  2863,  2867,  2871,  2875,  2879,  2883,  2887,
    2891,  2895,  2899,  2903,  2907,  2911,  2915,  2920,  2925,  2930,
    2935,  2940,  2945,  2950,  2955,  2960,  2965,  2972,  2977,  2982,
    2987,  2992,  2997,  3002,  3009,  3016,  3023,  3029,  3031,  3033,
    3036,  3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,  3053,
    3055,  3057,  3061,  3063,  3065,  3069,  3073,  3077,  3083,  3087,
    3092,  3097,  3104,  3113,  3122,  3128,  3134,  3136,  3138,  3140,
    3142,  3144,  3149,  3156,  3158,  3165,  3172
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
     155,   261,   459,   262,     7,    -1,   148,   261,   459,   269,
     459,   269,   455,   262,     7,    -1,   149,   261,   459,   269,
     459,   269,   453,   262,     7,    -1,   150,   261,   459,   269,
     453,   269,   455,   269,   453,   262,     7,    -1,   151,   261,
     459,   269,   453,   269,   453,   269,   453,   262,     7,    -1,
     152,   261,   459,   269,   453,   269,   453,   269,   453,   262,
       7,    -1,   157,   261,   303,   262,     7,    -1,   153,   261,
     459,   269,   459,   269,   459,   269,   453,   269,   455,   269,
     453,   269,   453,   262,     7,    -1,   158,   261,   453,   269,
     453,   269,   303,   269,   303,   262,   267,   403,   268,    -1,
     162,   261,   453,   269,   453,   269,   303,   269,   453,   269,
     453,   262,   267,   403,   268,    -1,   165,   261,   453,   269,
     453,   269,   303,   262,   267,   403,   268,    -1,   165,   261,
     453,   269,   453,   269,   303,   269,   453,   262,   267,   403,
     268,    -1,    -1,   197,   405,   261,   407,   408,   262,     7,
      -1,    -1,   200,   406,   261,   407,   408,   262,     7,    -1,
     171,   261,   286,   269,   303,   262,     7,    -1,   171,   261,
     286,   269,   303,   269,   453,   269,   303,   262,     7,    -1,
     192,   261,   459,   262,     7,    -1,   173,   261,   460,   262,
       7,    -1,   177,   261,   459,   269,   455,   269,   453,   262,
       7,    -1,   178,   261,   459,   269,   453,   269,   460,   262,
       7,    -1,   179,   261,   459,   269,   455,   269,   460,   262,
       7,    -1,   180,   267,   459,   268,     7,    -1,   181,   267,
     459,   268,     7,    -1,   187,   267,   459,   269,   286,   269,
     460,   269,   303,   268,     7,    -1,   187,   267,   459,   269,
     286,   269,   460,   268,     7,    -1,   182,   261,   459,   269,
     459,   269,   453,   269,   453,   262,   267,   403,   268,     7,
      -1,   183,   261,   459,   269,   459,   269,   453,   269,   453,
     262,   267,   403,   268,     7,    -1,   184,   261,   459,   269,
     453,   262,     7,    -1,   188,   267,     5,   269,     5,   269,
     138,   460,   269,   453,   268,     7,    -1,   188,   267,     5,
     269,     5,   269,   138,   460,   268,     7,    -1,   188,   267,
       5,   269,     5,   268,     7,    -1,   185,   261,   459,   269,
     459,   262,     7,    -1,   186,   261,   459,   269,   459,   262,
       7,    -1,   449,    -1,   305,    -1,   459,    -1,    -1,   408,
     409,    -1,   269,   212,   460,    -1,   269,   216,   455,    -1,
     269,   455,    -1,    -1,   410,   411,    -1,   159,   453,     7,
      -1,   160,   453,     7,    -1,   146,   303,     7,    -1,   161,
     303,     7,    -1,   143,   267,   403,   268,    -1,    -1,   412,
     413,    -1,   159,   453,     7,    -1,   160,   453,     7,    -1,
     146,   303,     7,    -1,   163,   453,     7,    -1,   164,   453,
       7,    -1,   143,   267,   403,   268,    -1,    -1,   414,   415,
      -1,   166,   453,     7,    -1,    91,   453,     7,    -1,   167,
     303,     7,    -1,    21,   453,     7,    -1,   143,   267,   403,
     268,    -1,    -1,   416,   417,    -1,   166,   453,     7,    -1,
     169,   453,     7,    -1,    91,   453,     7,    -1,    21,   453,
       7,    -1,   136,   459,     7,    -1,   170,   267,   418,   268,
      -1,   143,   267,   403,   268,    -1,   144,   267,   403,   268,
      -1,    -1,   418,   267,   419,   268,    -1,    -1,   419,   420,
      -1,    89,     5,     7,    -1,   115,     5,     7,    -1,   133,
     286,     7,    -1,    91,   453,     7,    -1,   102,   303,     7,
      -1,    21,     5,     7,    -1,    -1,   421,   422,    -1,   267,
     423,   268,    -1,   449,    -1,    -1,   423,   424,    -1,    99,
     459,     7,    -1,    99,     5,   297,     7,    -1,   137,   459,
       7,    -1,   191,   459,     7,    -1,   115,   267,   425,   268,
      -1,    -1,   425,   267,   426,   268,    -1,   425,   449,    -1,
      -1,   426,   427,    -1,    99,   459,     7,    -1,    78,   267,
     428,   268,    -1,    -1,   428,   120,   267,   429,   268,    -1,
     428,     5,   267,   429,   268,    -1,   428,   449,    -1,    -1,
     429,   430,    -1,    -1,   389,   261,   431,   307,   262,     7,
      -1,    89,     5,     7,    -1,   133,   286,     7,    -1,    84,
       5,     7,    -1,    86,     5,     7,    -1,    -1,   432,   433,
      -1,   267,   434,   268,    -1,   449,    -1,    -1,   434,   435,
      -1,    99,   459,     7,    -1,   193,   459,     7,    -1,   218,
       5,     7,    -1,   195,   460,     7,    -1,   143,   267,   438,
     268,    -1,    -1,   192,   459,   194,   459,   437,   267,   438,
     268,    -1,    -1,    -1,   438,   439,   440,    -1,   196,   261,
     442,   445,   446,   262,     7,    -1,   197,   261,   442,   445,
     446,   262,     7,    -1,   197,   261,     6,   269,   303,   446,
     262,     7,    -1,   197,   261,     6,   269,   235,   261,   460,
     262,   446,   262,     7,    -1,   199,   261,     6,   446,   262,
       7,    -1,    -1,   198,   261,   286,   441,   269,   133,   286,
     446,   262,     7,    -1,   449,    -1,   459,   444,   269,    -1,
     459,   444,   443,     5,   444,   269,    -1,   252,    -1,   253,
      -1,   250,    -1,   251,    -1,    -1,   261,   286,   262,    -1,
     202,    -1,   203,   286,    -1,   204,   286,    -1,   206,   267,
     267,   456,   268,   267,   456,   268,   267,   456,   268,   268,
      -1,   205,   286,    -1,   205,   267,   303,   269,   303,   269,
     303,   268,   267,   455,   269,   455,   269,   455,   268,    -1,
     207,   267,   456,   268,    -1,   208,   267,   267,   456,   268,
     267,   456,   268,   268,   267,   453,   268,    -1,   209,   267,
     267,   456,   268,   267,   456,   268,   267,   456,   268,   268,
     267,   453,   269,   453,   268,    -1,   210,   267,   267,   456,
     268,   267,   456,   268,   267,   456,   268,   267,   456,   268,
     268,   267,   453,   269,   453,   269,   453,   268,    -1,   203,
     286,   211,     5,   267,   453,   269,   453,   268,   267,   453,
     268,    -1,    -1,   446,   447,    -1,   269,   212,   460,    -1,
     269,   212,   245,   460,    -1,   269,   212,   246,   460,    -1,
     269,   213,   453,    -1,   269,   221,    -1,   269,   222,    -1,
     269,   217,   453,    -1,   269,   218,     5,    -1,   269,   219,
     448,    -1,   269,   220,   448,    -1,   269,   218,   448,    -1,
     269,   215,    -1,   269,   214,   453,    -1,   269,   216,   455,
      -1,   269,   201,     5,    -1,   269,   224,     5,    -1,   269,
     223,   453,    -1,   269,    78,   455,    -1,   269,   225,   453,
      -1,   269,   225,   267,   456,   268,    -1,   269,   226,    -1,
     269,   227,    -1,   269,   139,   455,    -1,   269,   171,   267,
     303,   269,   303,   269,   303,   268,    -1,   269,   228,   305,
      -1,   269,   229,    -1,   269,   229,   267,   453,   269,   453,
     269,   453,   268,    -1,   269,   230,    -1,   269,   230,   267,
     453,   269,   453,   269,   453,   268,    -1,   269,   231,    -1,
     269,   231,   267,   453,   269,   453,   269,   453,   268,    -1,
     269,   232,   267,   456,   268,    -1,   269,   233,     3,    -1,
     269,   234,    -1,    -1,   448,     6,    -1,    16,   259,   453,
       8,   453,   260,    -1,    16,   259,   453,     8,   453,     8,
     453,   260,    -1,    16,     5,   133,   267,   453,     8,   453,
     268,    -1,    16,     5,   133,   267,   453,     8,   453,     8,
     453,   268,    -1,    17,    -1,    18,   259,   453,   260,    -1,
      20,    -1,   450,    -1,    32,   261,   451,   262,     7,    -1,
     459,   237,   455,     7,    -1,   459,   237,     6,     7,    -1,
     459,   237,   235,   261,   460,   262,     7,    -1,   459,   237,
     461,     7,    -1,   459,   237,    31,   261,   460,   262,     7,
      -1,    11,   259,     6,   260,     7,    -1,    11,   459,     7,
      -1,    11,   264,     7,    -1,    11,   259,     6,   269,   456,
     260,     7,    -1,    12,   259,   459,   260,     7,    -1,    12,
     259,   459,   260,   261,   453,   262,     7,    -1,    13,     7,
      -1,    -1,   451,   296,   459,    -1,   451,   296,   459,   267,
     453,   268,    -1,   451,   296,   459,   237,   453,    -1,   451,
     296,   459,   237,     6,    -1,    38,    -1,    39,    -1,    40,
      -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,
      -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,    55,
      -1,    56,    -1,    57,    -1,   459,    -1,   454,    -1,   259,
     453,   260,    -1,   251,   453,    -1,   256,   453,    -1,   453,
     251,   453,    -1,   453,   250,   453,    -1,   453,   252,   453,
      -1,   453,   253,   453,    -1,   453,   254,   453,    -1,   453,
     258,   453,    -1,   453,   244,   453,    -1,   453,   245,   453,
      -1,   453,   249,   453,    -1,   453,   248,   453,    -1,   453,
     243,   453,    -1,   453,   242,   453,    -1,   453,   240,   453,
      -1,   453,   239,   453,    -1,    38,   261,   453,   262,    -1,
      39,   261,   453,   262,    -1,    40,   261,   453,   262,    -1,
      41,   261,   453,   262,    -1,    42,   261,   453,   262,    -1,
      43,   261,   453,   262,    -1,    44,   261,   453,   262,    -1,
      45,   261,   453,   262,    -1,    46,   261,   453,   262,    -1,
      47,   261,   453,   262,    -1,    48,   261,   453,   269,   453,
     262,    -1,    49,   261,   453,   262,    -1,    50,   261,   453,
     262,    -1,    51,   261,   453,   262,    -1,    52,   261,   453,
     262,    -1,    53,   261,   453,   262,    -1,    54,   261,   453,
     262,    -1,    55,   261,   453,   269,   453,   262,    -1,    56,
     261,   453,   269,   453,   262,    -1,    57,   261,   453,   269,
     453,   262,    -1,   453,   238,   453,     8,   453,    -1,   462,
      -1,   463,    -1,   453,   264,    -1,     4,    -1,     3,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
     459,    -1,    -1,   453,    -1,   457,    -1,   267,   456,   268,
      -1,   453,    -1,   457,    -1,   456,   269,   453,    -1,   456,
     269,   457,    -1,   453,     8,   453,    -1,   453,     8,   453,
       8,   453,    -1,     5,   267,   268,    -1,     5,   267,   456,
     268,    -1,    27,   261,     5,   262,    -1,    28,   261,     5,
     269,     5,   262,    -1,    29,   261,   453,   269,   453,   269,
     453,   262,    -1,    30,   261,   453,   269,   453,   269,   453,
     262,    -1,     5,   271,   267,   453,   268,    -1,   458,   271,
     267,   453,   268,    -1,     5,    -1,   458,    -1,     6,    -1,
     459,    -1,   461,    -1,    10,   259,   460,   260,    -1,    10,
     259,   460,   269,   456,   260,    -1,   236,    -1,     9,   261,
     460,   269,   460,   262,    -1,    14,   261,   460,   269,   460,
     262,    -1,    15,   261,   459,   262,    -1
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
    4223,  4238,  4258,  4279,  4291,  4311,  4324,  4341,  4360,  4381,
    4395,  4409,  4416,  4450,  4463,  4477,  4490,  4504,  4503,  4513,
    4512,  4521,  4532,  4544,  4554,  4562,  4575,  4588,  4602,  4612,
    4622,  4636,  4650,  4668,  4687,  4698,  4713,  4728,  4743,  4758,
    4773,  4784,  4789,  4800,  4805,  4809,  4812,  4822,  4839,  4848,
    4854,  4858,  4862,  4866,  4871,  4883,  4893,  4899,  4903,  4907,
    4911,  4915,  4920,  4932,  4941,  4946,  4950,  4954,  4958,  4962,
    4974,  4986,  4991,  4995,  4999,  5003,  5008,  5018,  5024,  5030,
    5041,  5043,  5049,  5061,  5066,  5076,  5105,  5108,  5111,  5119,
    5137,  5143,  5148,  5153,  5158,  5166,  5170,  5177,  5185,  5198,
    5203,  5210,  5212,  5215,  5222,  5227,  5232,  5235,  5242,  5246,
    5252,  5264,  5270,  5279,  5284,  5283,  5318,  5329,  5334,  5343,
    5361,  5367,  5372,  5375,  5380,  5387,  5391,  5398,  5410,  5421,
    5426,  5433,  5432,  5460,  5463,  5462,  5479,  5484,  5489,  5498,
    5507,  5517,  5516,  5527,  5535,  5547,  5571,  5572,  5573,  5574,
    5580,  5581,  5587,  5593,  5600,  5607,  5631,  5638,  5650,  5663,
    5683,  5709,  5742,  5764,  5795,  5799,  5813,  5827,  5841,  5845,
    5849,  5853,  5857,  5867,  5872,  5877,  5897,  5901,  5908,  5918,
    5927,  5936,  5943,  5951,  5955,  5964,  5968,  5972,  5980,  5986,
    5990,  5998,  6005,  6013,  6020,  6028,  6035,  6043,  6047,  6057,
    6062,  6112,  6127,  6143,  6163,  6183,  6221,  6225,  6229,  6239,
    6241,  6256,  6262,  6268,  6274,  6290,  6295,  6311,  6316,  6328,
    6338,  6352,  6375,  6378,  6384,  6398,  6404,  6415,  6416,  6417,
    6418,  6419,  6420,  6421,  6422,  6423,  6424,  6425,  6426,  6427,
    6428,  6429,  6430,  6431,  6432,  6433,  6434,  6435,  6439,  6440,
    6441,  6442,  6443,  6444,  6445,  6446,  6447,  6448,  6449,  6450,
    6451,  6452,  6453,  6454,  6455,  6456,  6457,  6458,  6459,  6460,
    6461,  6462,  6463,  6464,  6465,  6466,  6467,  6468,  6469,  6470,
    6471,  6472,  6473,  6474,  6475,  6476,  6478,  6480,  6482,  6484,
    6489,  6490,  6491,  6492,  6493,  6494,  6495,  6496,  6515,  6517,
    6523,  6526,  6533,  6539,  6542,  6545,  6557,  6563,  6574,  6590,
    6612,  6627,  6665,  6673,  6685,  6693,  6707,  6710,  6717,  6720,
    6735,  6740,  6745,  6764,  6774,  6787,  6799
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
     404,   404,   404,   404,   404,   404,   404,   405,   404,   406,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   407,   407,   408,   408,   409,   409,   409,   410,   410,
     411,   411,   411,   411,   411,   412,   412,   413,   413,   413,
     413,   413,   413,   414,   414,   415,   415,   415,   415,   415,
     416,   416,   417,   417,   417,   417,   417,   417,   417,   417,
     418,   418,   419,   419,   420,   420,   420,   420,   420,   420,
     421,   421,   422,   422,   423,   423,   424,   424,   424,   424,
     424,   425,   425,   425,   426,   426,   427,   427,   428,   428,
     428,   428,   429,   429,   431,   430,   430,   430,   430,   430,
     432,   432,   433,   433,   434,   434,   435,   435,   435,   435,
     435,   437,   436,   438,   439,   438,   440,   440,   440,   440,
     440,   441,   440,   440,   442,   442,   443,   443,   443,   443,
     444,   444,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   446,   446,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   448,
     448,   449,   449,   449,   449,   449,   449,   449,   449,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   451,   451,   451,   451,   451,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   455,   455,
     455,   455,   456,   456,   456,   456,   457,   457,   457,   457,
     457,   457,   457,   457,   458,   458,   459,   459,   460,   460,
     460,   460,   460,   460,   461,   462,   463
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
      11,     5,    17,    13,    15,    11,    13,     0,     7,     0,
       7,     7,    11,     5,     5,     9,     9,     9,     5,     5,
      11,     9,    14,    14,     7,    12,    10,     7,     7,     7,
       1,     1,     1,     0,     2,     3,     3,     2,     0,     2,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     3,     4,     0,     2,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     3,     4,     4,     4,
       0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
       0,     2,     3,     1,     0,     2,     3,     4,     3,     3,
       4,     0,     4,     2,     0,     2,     3,     4,     0,     5,
       5,     2,     0,     2,     0,     6,     3,     3,     3,     3,
       0,     2,     3,     1,     0,     2,     3,     3,     3,     3,
       4,     0,     8,     0,     0,     3,     7,     7,     8,    11,
       6,     0,    10,     1,     3,     6,     1,     1,     1,     1,
       0,     3,     1,     2,     2,    12,     2,    15,     4,    12,
      17,    22,    12,     0,     2,     3,     4,     4,     3,     2,
       2,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     5,     2,     2,     3,     9,     3,
       2,     9,     2,     9,     2,     9,     5,     3,     2,     0,
       2,     6,     8,     8,    10,     1,     4,     1,     1,     5,
       4,     4,     7,     4,     7,     5,     3,     3,     7,     5,
       8,     2,     0,     3,     6,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     6,     6,     6,     5,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     3,     1,     1,     3,     3,     3,     5,     3,     4,
       4,     6,     8,     8,     5,     5,     1,     1,     1,     1,
       1,     4,     6,     1,     6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   746,     0,     0,     0,
       0,   635,     0,   637,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   638,   747,     0,     0,     0,     0,     0,
       0,   651,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   748,     0,     0,   753,   749,
      19,   750,   652,    41,   207,   170,   183,   238,    91,   302,
     380,   520,   550,     0,     0,   728,     0,     0,   647,   646,
       0,     0,   721,   720,     0,     0,   722,   723,   724,   725,
     726,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   678,   727,   717,   718,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   746,     0,     0,     0,     0,     0,     0,     0,
       0,   729,     0,   730,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   680,   681,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   719,   636,     0,     0,     0,    86,     0,   746,     0,
       7,    42,    47,    49,     0,   211,     9,   208,   210,   172,
      10,   185,    11,   242,    12,   239,   241,     0,     8,    92,
      96,     0,   306,    13,   303,   305,   384,    14,   381,   383,
     524,    15,   521,   523,   554,    16,   551,   553,   561,     0,
       0,   641,     0,     0,     0,     0,     0,     0,   732,     0,
     733,     0,   640,   643,   744,   645,     0,   649,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   679,     0,     0,   695,   694,   693,   692,   688,
     689,   691,   690,   683,   682,   684,   685,   686,   687,     0,
     751,     0,   639,   653,     0,     0,     0,    80,   728,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   745,   738,     0,     0,     0,     0,     0,     0,
       0,   731,     0,   736,     0,     0,     0,     0,   756,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,     0,
     707,   708,   709,   710,   711,   712,     0,     0,     0,     0,
     631,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   746,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   209,   212,     0,     0,   171,   173,     0,   102,     0,
     184,   186,     0,     0,     0,     0,     0,     0,   240,   243,
     244,    85,   746,     0,    56,     0,    57,     0,     0,     0,
       0,   304,   307,     0,     0,   389,   382,   385,   391,     0,
       0,     0,     0,   522,   525,     0,     0,     0,     0,     0,
     552,   555,   563,   739,   740,     0,     0,     0,     0,     0,
     734,   735,     0,   648,     0,     0,     0,     0,     0,     0,
       0,     0,   716,   754,   752,   656,   655,     0,     0,    90,
      60,     0,     0,     0,     0,    72,     0,    69,     0,    55,
      67,    79,    43,     0,     0,     0,     0,   218,     0,   746,
       0,   176,     0,   190,     0,     0,     0,     0,   109,     0,
     293,     0,   746,     0,   252,   270,   285,     0,     0,   102,
       0,     0,   746,     0,   313,   335,   746,     0,   392,     0,
     746,     0,   531,     0,     0,     0,   563,     0,     0,     0,
     564,     0,     0,     0,   644,   642,   737,   650,     0,   633,
     755,   706,   713,   714,   715,   632,   654,    87,    45,    44,
      46,    81,     0,     0,    85,     0,    62,    53,    61,    48,
       0,   218,     0,   215,     0,     0,   213,     0,   174,     0,
       0,     0,     0,   188,   103,     0,   187,     0,   247,     0,
     245,     0,     0,     0,    93,    98,     0,   102,   310,     0,
     308,     0,     0,     0,   386,     0,   414,     0,   526,     0,
     528,   529,   556,   564,   557,   559,   558,   562,     0,   741,
       0,     0,     0,     0,     0,    75,    73,    68,     0,    74,
      85,    50,     0,   221,   216,   220,   214,   178,   175,   192,
     189,     0,     0,   104,   746,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,     0,   150,     0,     0,     0,
       0,   141,   143,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   139,     0,   136,   727,   160,   161,   296,
     251,   295,   246,   255,   248,   254,   272,   249,   288,   250,
     287,     0,    94,     0,   309,   316,   311,   315,     0,     0,
       0,     0,   312,   336,   337,   387,   395,   388,   394,     0,
     527,   534,   530,   533,   560,     0,     0,     0,     0,   565,
     573,     0,     0,   634,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   217,     0,     0,     0,   100,   101,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     132,   134,     0,   158,   156,   153,   155,   154,   746,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   167,     0,     0,     0,     0,     0,    95,     0,   353,
     353,   364,   342,     0,   746,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   449,   390,   415,   470,     0,     0,     0,     0,     0,
     742,   743,    82,    83,    77,    76,    71,    54,    66,     0,
       0,     0,     0,     0,     0,     0,   102,   102,   102,   102,
       0,     0,     0,   102,   219,   222,     0,     0,   177,   179,
       0,     0,     0,   191,   193,     0,   109,     0,     0,     0,
       0,   109,   109,     0,   135,     0,   379,     0,   131,   130,
     129,   128,   127,   123,   124,   126,   125,   119,   120,   115,
     118,   121,   116,   122,   157,   159,   163,     0,   165,     0,
       0,   137,     0,     0,     0,     0,   294,   297,     0,     0,
       0,     0,   105,   105,     0,     0,   253,   256,     0,     0,
       0,   271,   273,     0,     0,     0,   286,   289,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   326,
     314,   317,   370,   370,   370,     0,     0,     0,     0,     0,
     728,     0,     0,     0,   393,   396,   405,     0,     0,   102,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   424,   102,     0,   478,     0,   485,     0,   493,   500,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   532,   535,     0,   580,     0,     0,   571,   593,
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
       0,     0,     0,     0,     0,     0,   105,   105,   538,     0,
     582,     0,     0,     0,     0,     0,     0,     0,     0,   593,
       0,     0,   102,   593,     0,     0,     0,    78,    51,   224,
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
     102,     0,     0,     0,     0,     0,   102,     0,     0,   102,
     418,   479,     0,     0,   102,     0,     0,     0,     0,   419,
     486,     0,     0,     0,     0,     0,   102,   420,   494,     0,
       0,     0,     0,     0,     0,     0,     0,   421,   501,   102,
       0,   102,   728,   728,   728,     0,   728,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   471,   473,   472,
     473,     0,   536,   583,   584,   102,   586,     0,     0,     0,
       0,     0,     0,     0,   578,   579,   576,   577,   574,     0,
       0,   593,     0,     0,     0,     0,   594,    84,     0,   102,
     102,     0,   102,   182,   199,   196,     0,   117,     0,     0,
       0,   152,     0,     0,   259,     0,   260,     0,   106,   102,
     282,     0,   278,     0,     0,     0,     0,   359,   360,   362,
       0,   358,   109,   366,   109,   344,   345,     0,     0,     0,
       0,   346,   348,   407,     0,   411,     0,   422,   414,   423,
       0,     0,     0,     0,     0,     0,     0,     0,   435,     0,
     441,     0,   414,     0,     0,     0,     0,     0,   414,     0,
       0,     0,     0,     0,     0,     0,     0,   414,     0,     0,
       0,     0,     0,   414,   414,     0,     0,   510,     0,   454,
       0,     0,     0,     0,     0,     0,   458,   459,     0,     0,
       0,     0,     0,     0,     0,   453,     0,     0,   746,     0,
     537,   541,     0,     0,     0,     0,     0,     0,     0,     0,
     581,   580,     0,     0,     0,     0,   570,   728,   728,     0,
       0,     0,     0,     0,   606,   728,     0,   629,   629,   629,
     599,   600,     0,     0,     0,   615,   616,   105,   620,   622,
     624,     0,     0,   628,     0,     0,     0,     0,     0,     0,
     151,     0,     0,   144,   114,     0,     0,     0,   108,   284,
     280,     0,   324,   327,     0,   356,   368,     0,     0,     0,
       0,   409,   413,     0,     0,   728,     0,   728,     0,     0,
       0,     0,     0,   102,     0,   482,   480,   481,   483,   102,
       0,   489,   487,   488,   490,   491,   102,   498,   496,     0,
     495,   497,   505,   504,   506,     0,     0,   502,   503,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   474,     0,
     542,   542,     0,   102,     0,   588,     0,     0,     0,   566,
       0,     0,     0,   567,   593,   612,   617,   102,   609,     0,
       0,   595,   598,   607,   608,   601,   602,   605,   603,   604,
     611,   610,     0,   613,   619,     0,     0,     0,     0,   627,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,   200,     0,     0,   169,     0,     0,   334,   363,
       0,     0,   349,   350,   351,   352,   425,   427,     0,     0,
       0,     0,     0,     0,   433,     0,     0,   484,     0,   492,
       0,   499,   508,   509,   512,   507,   451,     0,     0,   431,
     432,     0,     0,     0,     0,     0,   464,   468,   469,     0,
     467,     0,   448,     0,   728,   477,   450,   370,   370,     0,
       0,     0,     0,     0,     0,   575,   593,   568,     0,     0,
     596,   597,   630,     0,     0,     0,     0,     0,     0,   237,
     236,   229,   235,     0,     0,     0,     0,     0,     0,     0,
     147,     0,   261,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,   102,     0,
     102,     0,     0,     0,     0,     0,     0,   102,     0,   475,
     476,     0,     0,     0,     0,   540,     0,   543,   539,     0,
     102,     0,     0,     0,     0,     0,     0,   102,   614,     0,
       0,     0,   626,     0,   201,   202,   203,   204,   205,   206,
       0,     0,     0,     0,   414,   436,   437,     0,     0,     0,
       0,   434,     0,     0,   414,     0,     0,     0,     0,   102,
       0,     0,   511,   513,     0,   430,     0,   455,   456,   457,
       0,     0,   461,     0,     0,     0,     0,     0,     0,     0,
     544,     0,     0,     0,     0,     0,     0,     0,   572,     0,
       0,     0,     0,     0,   146,     0,     0,     0,     0,     0,
       0,     0,   728,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,   466,
       0,   548,   549,   546,   547,   109,     0,     0,     0,     0,
       0,     0,   569,   102,     0,     0,     0,     0,   267,   357,
     369,   426,   438,   439,   440,     0,   414,     0,   445,   414,
     519,   514,   517,   518,   515,   516,   452,   429,     0,   414,
     414,   460,     0,     0,     0,   728,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,   465,     0,     0,     0,     0,     0,     0,
       0,   618,   621,   623,   625,     0,     0,   443,   414,   446,
     428,     0,     0,   545,     0,   728,     0,     0,     0,     0,
       0,    88,     0,     0,   462,   463,   592,     0,   585,   589,
       0,     0,   268,     0,    58,     0,   444,   728,     0,     0,
       0,    89,     0,     0,     0,     0,     0,   442,   587,     0,
       0,    88,     0,     0,     0,   590,     0,     0,     0,   269,
       0,     0,     0,   591
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   150,   231,   232,
     752,  1408,   434,   640,   435,  2020,   405,   577,   750,   870,
     499,   574,   500,   400,   227,   335,  2034,   336,   155,   249,
     431,   517,   518,  1377,  1262,   594,   595,   691,   907,  1422,
     692,   766,   767,  1242,   761,   800,   929,   931,   152,   342,
     416,   587,   755,   889,   153,   343,   421,   589,   756,   894,
    1237,  1569,  1702,   151,   237,   341,   412,   582,   754,   885,
     154,   245,   344,   429,   601,   803,   947,  1259,  1985,  2040,
     602,   804,   952,  1101,  1270,  1098,  1268,   603,   805,   957,
     597,   802,   937,   156,   254,   347,   442,   611,   808,   971,
    1282,  1117,  1435,   612,   723,   975,  1143,  1299,  1452,   972,
    1132,  1442,  1710,   974,  1137,  1444,  1711,  1133,   693,   157,
     258,   348,   447,   539,   615,   813,   985,  1147,  1302,  1153,
    1307,   729,   853,  1028,  1029,  1378,  1516,  1648,  1172,  1331,
    1174,  1340,  1176,  1348,  1177,  1358,  1629,  1807,  1873,   158,
     262,   349,   454,   619,   855,  1033,  1381,  1757,  1827,  1935,
     159,   266,   350,   461,    31,   351,   550,   628,   739,  1214,
    1034,  1399,  1211,  1209,  1215,  1406,  1677,   854,    33,   149,
     694,   278,   125,   172,   279,   280,    34,   126,    70,    71,
     127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1435
static const yytype_int16 yypact[] =
{
   -1435,    56, -1435, -1435,   126,  4943,  -124,    44,  -102,   162,
      29, -1435,   -74, -1435,   832,   206,  4887,    81,   -58,    27,
      54,    66,    71,   102,   105,   129,   139,   148,     1, -1435,
   -1435, -1435, -1435, -1435,   172,    60,   181,   448,   462,   521,
     488, -1435,   405,  4866,  4866,   561, -1435,   565,   571,   573,
     575,   584, -1435,   596, -1435,   602,   606,   624,   629,   638,
     643,   648,   652,   665,   667, -1435,   302,   338, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435,   417,   351,  3114,  4866,  -138, -1435, -1435,
     365,   360, -1435, -1435,   382,   416, -1435, -1435, -1435, -1435,
   -1435,   422,   428,   432,   437,   447,   464,   466,   471,   483,
     485,   496,   502,   545,   551,   560,   577,   579,   588,   599,
     605,  4866,  4866,  4866,  3746, -1435, -1435, -1435, -1435,  1990,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435,    81,    81,  -165,
      52,   535,   -40,   204,   636,   679,   689,   718,   802,   830,
     488,  4866,   -84,   741,   621,   633,   645,   670,   674,   690,
    4728,  3795,   809, -1435,   893,  3196,   909,  4728,    67,  4866,
      81,   488,  4866,  4866,  4866,  4866,  4866,  4866,  4866,  4866,
    4866,  4866,  4866,  4866,  4866,  4866,  4866,  4866,  4866,  4866,
    4866,  4866,  -203,  -203,  6225,  4866,  4866,  4866,  4866,  4866,
    4866,  4866,  4866,  4866,  4866,  4866,  4866,  4866,  4866,  4866,
    4866, -1435, -1435,   681,     0,   945, -1435,   488,   150,   692,
   -1435, -1435, -1435, -1435,    85, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435,   693, -1435, -1435,
   -1435,  -179, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,  5739,
    2166, -1435,   950,   955,  4866,  4866,    81,    81,  3795,   249,
   -1435,  4866, -1435, -1435, -1435, -1435,    31, -1435,  4866,  4044,
     694,   699,  6248,  6275,  6302,  6329,  6356,  6383,  6410,  6437,
    6464,  6491,  3145,  6518,  6545,  6572,  6599,  6626,  6653,  4850,
    4934,  4957, -1435,  2544,  4093,  1669,  1777,  1641,  1641,   782,
     782,   782,   782,   317,   317,  -203,  -203,  -203,  -203,    81,
   -1435,  4728, -1435,  -159,  2992,   727,   728, -1435,  2550,   732,
    4866,   305,     7,   113,   494, -1435,    61,   401,   396,   393,
     533,   703, -1435, -1435,   281,   709,   710,  4980,  5003,   719,
     721, -1435,  4728,  4549,   973,  6680,  4866,    81, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,  4866,
   -1435, -1435, -1435, -1435, -1435, -1435,  4866,  4866,  4866,  4866,
   -1435,  4866,   722,   101,  4811,  4866,  4866,  5766,    62,    62,
    -142,   -41, -1435,    15,   994,   742,    62,  6707,    22,   997,
     999, -1435, -1435,   754,  1019, -1435, -1435,   758,    93,  1022,
   -1435, -1435,   761,  1025,  1026,   770,   774,   775, -1435, -1435,
   -1435,   -78,  -156,   806, -1435,   786, -1435,  1039,  1044,   785,
     787, -1435, -1435,  1048,   788, -1435, -1435, -1435, -1435,  1054,
     812,   488,   488, -1435, -1435,   488,   813,   488,    81,  1071,
   -1435, -1435, -1435, -1435, -1435,  1083,  4866,  4866,  1084,  1086,
    3795, -1435,  4866, -1435,  1087,  1475,   828,  6734,  6761,  6788,
    6815,  6842,  7293, -1435, -1435, -1435,  7293,  5793,  5820, -1435,
   -1435,  1088,  1089,  1092,   488,  1096,  4866, -1435,  4728, -1435,
   -1435, -1435, -1435,    14,  1106,   880,   849, -1435,  1111,   248,
    1112, -1435,  1113, -1435,   862,   865,   875,  1121, -1435,  1127,
   -1435,  1128,   248,  1132, -1435, -1435, -1435,  1134,  1137,    93,
     907,  1138,   248,  1141, -1435, -1435,   248,  1142, -1435,   883,
     248,  1144, -1435,  1146,  1147,  1148, -1435,  1149,  1150,  1151,
     892,   899,  5026,  5049, -1435, -1435,  7293, -1435,  4866, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435,  -154,  4866,  6865,   348,   316, -1435, -1435, -1435, -1435,
    1093, -1435,   879, -1435,   904,  1162, -1435,   354, -1435,   372,
    4866,  1168,   923, -1435, -1435,  2487, -1435,   916, -1435,  1169,
   -1435,  1045,   395,  1055, -1435,   910,  1174,    93, -1435,  1178,
   -1435,  1120,   189,  1180, -1435,  1154, -1435,  1186, -1435,  1315,
   -1435, -1435, -1435,   914, -1435, -1435, -1435, -1435,  1675, -1435,
    4866,  4866,  5847,   927,  4866,  4634,  1187, -1435,    45, -1435,
     -10, -1435,  1443, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435,  6888,   940, -1435,   262, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435,   942, -1435,   943,   946,   972,
     975, -1435, -1435,  1201,  2487,  2487,  2487,  2487,  1231,   159,
    1232,  4352,   171,   977,   977, -1435,   979, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435,  4866, -1435,  1234, -1435, -1435, -1435, -1435,   976,   978,
     980,   981, -1435, -1435, -1435, -1435, -1435, -1435, -1435,  2673,
   -1435, -1435, -1435, -1435, -1435,   985,   988,   989,   990, -1435,
   -1435,  6915,  6942, -1435,   974,  5874,  4866,  4866,    36, -1435,
     992,    80,   991, -1435,  1568,    30,   134, -1435, -1435, -1435,
    1013,   998,  1013,  2487,  1250,  1276,  1021,  1038,  1056,  1000,
    1000,  1000,  7345, -1435, -1435, -1435, -1435, -1435,    21,  1032,
   -1435,  2487,  2487,  2487,  2487,  2487,  2487,  2487,  2487,  2487,
    2487,  2487,  2487,  2487,  2487,  2487,  2487,  1302,  4866,  2222,
   -1435,  1040,    59,  1570,   256,    11,  5901, -1435,  4907, -1435,
   -1435, -1435, -1435,   245,     5,   136,    90,  1047,  1050,  1057,
    1058,  1060,  1063,  1064,  1068,  1069,  1308,  1073,  -100,     3,
      97,  1049,  1075,  1079,  1080,  1082,  1094,  1095,  1097,  1099,
    1077,  1081,  1100,  1101,  1102,  1109,  1110,  1090,  1105,  1114,
   -1435, -1435, -1435, -1435, -1435,    -1,   488,   661,    68,  1339,
   -1435, -1435, -1435,  1117,  7293,  4689, -1435, -1435, -1435,   488,
      15,  1085,    68,    68,    68,    68,   184,   188,    93,    93,
    1107,   488,  1345,   199, -1435, -1435,    96,  1368, -1435, -1435,
    1118,  1372,  1385, -1435, -1435,  1133, -1435,  1135,  4409,  1145,
    1140, -1435, -1435,  1152, -1435,  1126, -1435,  2487,  4323,  4579,
     857,   857,   857,   831,   831,   831,   831,   487,   487,  1000,
    1000,  1000,  1000,  1000, -1435, -1435, -1435,  1153,  4352,   104,
    4584, -1435,  1391,    84,  1398,   488, -1435, -1435,  1402,  1403,
    1404,  1143,  1157,  1157,    68,    68, -1435, -1435,  1406,    32,
      40, -1435, -1435,  1414,   488,  1415, -1435, -1435, -1435,  1420,
    1422,  1423,    98,   488,   488,  4866,  1427,    68,  3225, -1435,
   -1435, -1435,  2383,  2979,   639,   -14,  1428,   488,    46,    81,
    3225,    81,    47,   488, -1435, -1435, -1435,   488,  1425,    93,
      93,  1429,   488,   488,   488,   488,   488,   488,   488,   488,
     488, -1435,    93,  4866, -1435,  4866, -1435,  4866, -1435, -1435,
      68,    81,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,  1430,   488,  1176,  1177,
    1172,   488, -1435, -1435,  1352,  1182,  1181,  1352, -1435, -1435,
    1179,  4866, -1435, -1435,    15,  1434,  1440,  1445,  1446,    93,
    1451,    93,  1455,  1461,  1463,   963,  1464,  1469,    93,  1472,
    1473,  1474,  1040, -1435,  1477,  1479, -1435,  1213, -1435,  2487,
   -1435,  1223,  1233,  1227, -1435, -1435,  2760, -1435, -1435,  2487,
    1243,   418,  1498,  1499,  1501,  1502,  1503,    26,  1247,  1510,
      93,  1509,  1513,  1515,  1516,  1519, -1435, -1435,  1521, -1435,
   -1435,  1522,  1524,  1525,  1526,  1527,  1531,  1532,  1534,  1535,
    1536,  1539, -1435,  1249,  1541,  1542,  1557, -1435,  1512,  1560,
    1561,  1306, -1435, -1435, -1435, -1435, -1435, -1435, -1435,    68,
    1562, -1435, -1435,  1307, -1435,    68, -1435, -1435,  1309,  1567,
    1571, -1435, -1435, -1435,  1572,  1574, -1435,  1577, -1435,  1578,
    1579,  1582, -1435,  1583, -1435,  1584,  1313, -1435,  1316,  1330,
   -1435,  1324,  1325,  1327,  1329,  1331,  1332,  1333,  1334,   131,
    1342,  5072,   469,  5095,   755,  5118,    50,   298,  1337,  1346,
    1338,  1340,  1341,  1344,  1347,  1348,  1343,  1350,  1353,  1354,
    1355,  1356,  1357,  1358,  1359,  1367,    49,    49, -1435,  1608,
   -1435,    68,    68,    16,  1310,  1363,  1370,  1382,  1389, -1435,
      68,   576,    95, -1435,  1365,   141,  1351,  7293, -1435, -1435,
   -1435, -1435, -1435,  1390, -1435,  1392, -1435, -1435, -1435,  1393,
   -1435, -1435,  1394, -1435, -1435, -1435,  1632,   436, -1435, -1435,
      68,  7320, -1435,  4866, -1435,  1655,  1405, -1435,  4352,    68,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435,  1653,  1551,  1671,
    1393, -1435,   444, -1435, -1435, -1435, -1435, -1435,   484, -1435,
     486, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435,  1418, -1435, -1435, -1435, -1435,  1419,  1676,  1677,
    1682,  1679,  1683, -1435, -1435,  1693, -1435,  1698,  1699,   255,
   -1435, -1435,   491, -1435, -1435, -1435, -1435,   506, -1435, -1435,
    1709,  1465,  1715,    93,   488,   488,  4866,  4866,  4866,   488,
      93,  1723,    68,  1728,  4866,  1470,    93,  4866,  4866,    93,
   -1435, -1435,  4866,  1471,    93,  4866,  4866,  4866,  4866, -1435,
   -1435,  4866,  4866,  4866,  1478,  4866,    93, -1435, -1435,  4866,
    4866,   488,  1480,  1507,  4866,  4866,  1523, -1435, -1435,    93,
    1729,    93,  3225,  3225,  3225,  4866,  3225,  1733,  1734,   488,
     488,  4866,   488,   488,    68,  1737,  1758, -1435, -1435, -1435,
   -1435,   112, -1435,  1558, -1435,    93, -1435,  1528,  4728,  1529,
    1547,  1548,   149,  1482, -1435, -1435, -1435, -1435, -1435,  1763,
    1518, -1435,   170,  1637,  1781,  4926, -1435, -1435,  1552,    93,
      93,   963,    93, -1435, -1435, -1435,  1530, -1435,  1555,  5141,
    1564, -1435,  2487,  1565, -1435,  1788, -1435,  1789, -1435,    93,
   -1435,  1815, -1435,  1817,   488,  1816,  1821, -1435, -1435, -1435,
    1569, -1435, -1435, -1435, -1435, -1435, -1435,  1013,  1013,  1013,
      68, -1435, -1435, -1435,   488, -1435,   488, -1435, -1435, -1435,
    1575,  1563,  1576,  5164,  5187,  5210,  1580,  1585, -1435,  1581,
   -1435,  5233, -1435,  1822,  1533,  1714,  1823,  5256, -1435,  1826,
    1759,  1811,  1850,  1897,  5279,  1934,  2050, -1435,  2122,  1827,
    2404,  2656,  1832, -1435, -1435,  2685,  2722, -1435,   194, -1435,
    1586,  1591,  1592,  1589,  5302,  1590, -1435, -1435,  1593,  1594,
    6969,  1598,  1599,  1595,   524, -1435,   196,   197,   274,  1573,
   -1435, -1435,  1841,  1596,  4728,   536,  4728,  4728,  4728,  1860,
   -1435,  1182,    81,   232,  1862,    68, -1435,  3225,  3225,  1603,
    1872,   343,  4866,  4866, -1435,  3225,  4866,  1873, -1435, -1435,
   -1435, -1435,  4866,  1874,  1175, -1435, -1435,  1157,  1613,  1615,
    1617,  1620,  1885, -1435,  1633,  1636,  1638,  1634,  1639,   465,
   -1435,  1644,  4866, -1435,  4352,  1640,  1909,  1657, -1435, -1435,
   -1435,  1664, -1435, -1435,  1921, -1435, -1435,  1922,  1923,  1928,
    1929, -1435, -1435,  3346,  1930,  3225,  4866,  3225,  4866,  4866,
     488,  1931,   488,    93,  3400, -1435, -1435, -1435, -1435,    93,
    3454, -1435, -1435, -1435, -1435, -1435,    93, -1435, -1435,  3644,
   -1435, -1435, -1435, -1435, -1435,  3698,  3752, -1435, -1435,   543,
    1932,  4866,    93,  1933,  1935,  4866,    81,    81,  4866,  4866,
    1936,  1937,  1938,    81,  1939,  1809,  1941,  3170, -1435,  1942,
   -1435, -1435,  1694,    93,   556, -1435,   562,   564,   590, -1435,
    1681,  1707,  1953, -1435, -1435, -1435, -1435,    93, -1435,    81,
      81, -1435,  7293,  7293, -1435,  7293, -1435,  1964,  1964,  1964,
    7293, -1435,  4728,  7293, -1435,  4866,  4866,  4866,  4728, -1435,
      15,  1966,  1967,  1968,  1969,  1974,  4866,  4866,  4866,  4866,
    4866, -1435, -1435,  1704,  5928, -1435,  1866,  1976, -1435, -1435,
    1712,  1716, -1435, -1435, -1435, -1435,  1970, -1435,  1726,  6996,
    1721,  5325,  5348,  1722, -1435,  1730,  1724, -1435,  1725, -1435,
     234, -1435, -1435, -1435, -1435, -1435, -1435,  5371,   235, -1435,
   -1435,  7023,  1743,  1744,  5394,  5417, -1435, -1435, -1435,   604,
   -1435,    81, -1435,    81,  3225, -1435, -1435,   589,  1253,  4866,
    1727,  1747,  1748,  1749,  1757, -1435, -1435, -1435,   240,  1764,
   -1435, -1435, -1435,   609,  5440,  5463,  5486,   611,  1765, -1435,
   -1435, -1435, -1435,  1988,  2938,  3045,  3062,  3079,  3435,  4866,
   -1435,  2027, -1435, -1435,  1013,  1769,  2031,  2032,  4866,  4866,
    4866,  4866,  2033,    93,  4866,  1775,  4866,   555,    93,  2037,
      93,  2038,  2041,  2045,  4866,  4866,  2059,    93,   618, -1435,
   -1435,  2062,  2063,  2065,    68, -1435,  1810, -1435, -1435,  5509,
      93,  4728,  4728,  4728,  4728,   265,  2066,    93, -1435,  4866,
    4866,  4866, -1435,  4866, -1435, -1435, -1435, -1435, -1435, -1435,
    5955,  1805,  1812,  1814, -1435, -1435, -1435,  7050,  7077,  7104,
    5532, -1435,  1818,  5555, -1435,  7131,  2072,  2073,  4866,    93,
    2074,    68, -1435, -1435,  1820, -1435,   275, -1435, -1435, -1435,
    7158,  7185, -1435,  1819,  2077,  4866,  2084,  2090,  2098,  2099,
   -1435,  4866,  1839,   620,   641,   644,   655,  2102, -1435,  1842,
    5578,  5601,  5624,  7212, -1435,  2103,  2105,  2106,  3942,  2108,
    2109,  2110,  3225,  1851,  4866,  3996,  1853,  2114,  2115,  3498,
    2116,  2117,  2119,  2120,  2121,    93,  1863,  1865,  2126, -1435,
    5982, -1435, -1435, -1435, -1435, -1435,  6009,  1867,  1876,  1884,
    1877,  1886, -1435,    93,  4866,  4866,  4866,  2149, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435,  1888, -1435,  7239, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,  1896, -1435,
   -1435, -1435,  2152,  1898,  1895,  3225,  4728,  1899,  4728,  4728,
    1900,  6036,  6063,  6090, -1435,  2100,  4866,  4050,  1924,  4240,
    2156,  4294,  4348, -1435,  2157,  4866,  1955,   657,  4866,   669,
     673, -1435, -1435, -1435, -1435,   488,  5647, -1435, -1435, -1435,
   -1435,  2160,  2183, -1435,  6117,  3225,  1963,  6144,  1977,  1979,
    2190,  1980,  4866,  4538, -1435, -1435, -1435,  1982, -1435, -1435,
    1985,  4728, -1435,  1981, -1435,  7266, -1435,  3225,  4866,   675,
    2118, -1435,  2277,  2019,  5670,  2023,  2291, -1435, -1435,  4866,
    2030,  1980,  6171,  4866,  2298, -1435,  5693,  2039,  4866, -1435,
    5716,  4866,  6198, -1435
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435,    -7, -1435,  -779, -1435,  1373, -1435, -1435,  1375,
    -502, -1435,  -558, -1435,  -385,  -500,   259, -1435, -1435, -1435,
   -1435,   522, -1435,  -938, -1435,  -888, -1435,  1017, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435,  1618, -1435,  1251, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435,  1735, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,  1505,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435,  -958,  -651, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1434, -1435, -1435, -1435,  1122,   931, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435, -1435,   666, -1435, -1435,
   -1435, -1435, -1435, -1435, -1435, -1435,  1772, -1435, -1435, -1435,
    1466, -1435,   789,  1285, -1202, -1435,  -603,    23, -1435, -1435,
   -1435,  1078,  -308,  -937,  -135,   -60, -1435,    -5,  -118,    -9,
    -548,   968
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -678
static const yytype_int16 yytable[] =
{
      35,   578,    39,   759,  1091,  1092,     6,  1392,  1067,   585,
       6,  1402,    69,  1072,  1073,   494,  1138,   495,   495,     6,
       6,   432,   599,    83,  1593,   173,     6,   506,    32,   223,
     224,  1116,   609,  1256,    42,    90,   613,  1096,  1604,   495,
     617,     6,   286,  1150,  1610,  1099,   528,   697,   495,     6,
       6,     6,     6,  1619,     6,   220,     3,   228,    85,  1625,
    1626,   221,   290,     7,     8,     9,   432,   490,    10,    11,
      12,  1342,    13,   432,   287,  1139,   174,  1030,   394,  1038,
     749,   576,   346,   633,    18,   868,     6,    65,   402,   490,
      66,    67,   413,  1045,  1046,  1047,  1048,   225,  1031,  1140,
     953,   432,   886,  1108,   226,   -60,   414,  1061,   395,   895,
     954,   897,   955,   634,   887,    36,   514,  1518,   229,   514,
     493,   514,   176,     7,     8,     9,    -3,   226,    10,    11,
      12,   177,    13,   402,   402,   354,   697,   697,   697,   697,
     402,  1343,    69,    69,    18,   234,    35,    36,   869,    35,
     251,    35,    35,    35,    35,   268,   402,    40,   359,   360,
     932,  1003,   774,  1060,   775,  1093,  1094,  1004,   402,    41,
     933,   934,   935,   233,   238,    69,   291,   246,   250,   255,
     259,   263,   267,   270,   527,    44,  1246,    36,  1115,   638,
     866,   226,   515,  1344,     6,   515,   393,   515,   417,  1533,
       7,     8,     9,    72,   418,    10,    11,    12,  1109,    13,
     514,   392,   419,    52,   514,   697,  1345,  1346,  1110,   890,
     -60,    18,   333,   891,   892,   514,   270,   239,   240,  1287,
      36,  1178,  1519,   697,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   476,
       6,   697,   -63,  1141,  1142,   751,     7,     8,     9,   226,
     330,    10,    11,    12,  1005,    13,   987,  1032,    82,   331,
    1006,    69,    69,   496,   496,   415,    36,    18,   173,   956,
     403,   497,   497,  1385,   498,   498,   515,   695,    43,   507,
     515,   364,    36,   584,    73,   496,   748,    85,   888,  1097,
     362,   515,   471,    37,   496,   776,   498,  1100,    38,   718,
     719,   720,   721,  1146,  1152,   498,  1090,    68,  1347,  1349,
     230,    74,   338,   433,    69,   403,   403,   936,   288,   174,
    1400,   404,   403,    75,   976,   339,  1447,  1448,    76,    35,
     548,   436,   516,    35,   977,   516,   340,   516,     6,    65,
    1292,   990,    66,    67,  1418,   948,  1295,   949,  1007,   697,
     403,   484,    69,   575,  1008,   950,  1078,   430,  1043,    77,
     362,   448,    78,  1079,  1449,   777,   695,   695,   695,   695,
    1520,   420,   978,   979,   980,   981,   982,   983,  1450,  1350,
     408,   491,   492,  1321,   409,    44,    79,   989,   501,   504,
    1322,     6,   893,  1404,   410,   510,    80,     7,     8,     9,
    1405,  1529,    10,    11,    12,    81,    13,   334,  1405,   523,
    1908,    36,  1383,  1384,  1386,  1501,  1502,  1503,    18,  1505,
    1915,  1393,  1534,   533,  1351,   797,   516,   798,   537,  1405,
     516,  1352,  1353,    84,   541,  1049,   543,   544,    86,  1051,
     545,   516,   547,    69,    87,   695,  1630,   722,  1646,  1649,
    1058,  1416,  1768,  1631,  1354,  1647,  1647,  1355,  1356,    88,
    1423,   241,   242,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   571,
     437,   695,   449,     6,  1662,   443,  1805,  1809,   501,     6,
     438,  1405,  1836,  1806,  1810,     7,     8,     9,   450,  1405,
      10,    11,    12,   984,    13,   584,   439,   361,   362,    36,
     440,   697,  1987,  1451,   951,  1989,    18,  1897,    89,   690,
     451,   697,   444,    36,  1405,  1991,  1992,  1924,    91,   445,
       6,  1650,  1218,  1469,  1925,    36,     7,     8,     9,   463,
     362,    10,    11,    12,  1585,    13,  1586,  1695,  1696,  1697,
    1698,  1699,  1700,   147,  1835,   422,  1357,    18,   130,   217,
     218,   219,   131,   411,  2023,   220,  1866,    35,   132,    68,
     133,   221,   134,   423,   452,   362,   639,  1257,  1669,  1670,
     696,   135,    35,   424,   425,  1513,    35,   148,    35,   695,
    1665,  1666,   426,   136,   427,   645,    35,    35,  1674,   137,
      35,   160,  1325,   138,    35,  1326,   637,   226,   161,  1684,
     701,   647,   648,    35,   705,   178,   710,   179,  1327,  1328,
    1329,   139,   455,   501,   717,   724,   140,    35,   728,   649,
     650,     6,   733,   180,  1867,   141,  1868,     7,     8,     9,
     142,   740,    10,    11,    12,   143,    13,  1869,  1718,   144,
    1720,   453,   706,   707,   446,   645,     6,  1036,    18,   441,
    1870,  1590,   145,  1821,   146,  1822,   456,   181,  1823,   696,
     696,   696,   696,   182,     6,   779,  1250,   362,  1871,   183,
       7,     8,     9,   184,     6,    10,    11,    12,   185,    13,
       7,     8,     9,  1414,  1415,    10,    11,    12,   186,    13,
    1755,    18,  1428,  1429,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,    18,  1824,     6,    35,   187,   457,   188,   458,     7,
       8,     9,   189,  1701,    10,    11,    12,  1330,    13,   792,
     793,   794,   795,   501,   190,   796,   191,  1229,   271,   247,
      18,   459,  1430,   226,  1432,   226,  1664,   192,   696,  1453,
     226,   695,   428,   193,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,   695,  1135,   905,  1455,   226,   696,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,  1644,  1645,   696,  1081,  1587,  1588,  1589,  1826,
    1826,   460,   235,   236,  1655,   362,   194,     6,    35,   988,
    1734,  1735,   195,     7,     8,     9,   282,  1820,    10,    11,
      12,   196,    13,  1872,  1761,   362,  1394,  1395,  1396,  1397,
    1762,   362,  1763,   362,    18,     6,   986,    45,   197,    46,
     198,     7,     8,     9,  1411,  1398,    10,    11,    12,   199,
      13,  1035,  1035,   436,    47,    48,    49,  1825,  1764,   362,
     200,  1149,    18,  1151,  1042,   501,   201,   436,   436,   436,
     436,    50,  1816,  1817,   697,  1427,  1056,  1838,   362,  1842,
     362,   436,   272,  1431,     6,  1433,  1884,  1885,  1938,   362,
       7,     8,     9,  1179,   273,    10,    11,    12,  1333,    13,
     283,  1334,   696,   243,   244,  1852,   274,  1136,   173,  1939,
     362,    18,  1940,   362,  1335,  1336,   285,  1454,  1337,  1338,
     173,     6,  1456,  1941,   362,  2016,   362,     7,     8,     9,
    1085,   275,    10,    11,    12,   276,    13,  2018,   362,   436,
     436,  2019,   362,  2045,   362,  1678,  1679,   248,    18,  1103,
     329,   277,   332,   337,   345,   355,   252,   253,  1111,  1112,
     356,   368,   436,   367,   398,   399,    92,    93,     6,   406,
     462,   464,  1145,  1148,    69,  1955,    69,  1154,  1155,   465,
     473,   468,  1156,   469,   483,   256,   257,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,    96,    97,    98,    99,
     100,   502,   508,   503,   509,   436,    69,  1180,  1181,  1182,
    1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,  1191,  1192,
    1193,   511,  1195,  1339,   512,   513,  1199,   519,   520,    51,
     521,   522,   215,   216,   217,   218,   219,   524,  1996,   501,
     220,   525,   526,   529,   531,  1889,   221,  1973,   530,   532,
       6,   606,   534,   536,   535,   538,     7,     8,     9,   540,
       6,    10,    11,    12,   696,    13,     7,     8,     9,   260,
     261,    10,    11,    12,   696,    13,   549,    18,  2027,   542,
     546,   790,   791,   792,   793,   794,   795,    18,   551,   796,
     560,   554,  1922,   555,   557,   568,   569,   264,   265,   570,
    2043,   786,   787,  1567,   572,   788,   789,   790,   791,   792,
     793,   794,   795,   579,   695,   796,   581,   580,   583,   586,
     588,   124,   129,   590,   436,     6,   591,   592,   593,   713,
     436,     7,     8,     9,   596,   598,    10,    11,    12,   600,
      13,   604,   605,  1853,   607,   608,   643,   644,   610,   614,
     616,   618,    18,   620,   621,   622,   624,   625,   626,     6,
     627,   629,   641,   171,   175,     7,     8,     9,   396,   646,
      10,    11,    12,   652,    13,   653,   702,   711,    92,    93,
       6,   712,   734,   699,   700,   714,    18,   725,  1778,    94,
      95,  1379,  1379,   730,   744,   747,   436,   436,   436,   202,
     203,   204,   758,   760,   762,   436,   768,   763,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   764,   773,   436,   765,   778,   799,   269,
    -677,   807,   862,   809,   436,   810,   856,   811,   812,   857,
     858,   859,   871,  1525,   867,   899,  1283,   289,   796,   896,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     690,   900,   901,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   902,
     906,   903,   173,   173,   173,   924,   173,   930,   992,  1461,
    1462,   993,   703,   704,  1466,  1001,  1009,   436,   994,   995,
       6,   996,   708,   709,   997,   998,     7,     8,     9,   999,
    1000,    10,    11,    12,  1002,    13,  1010,  1821,   991,  1822,
    1011,  1012,  1823,  1013,  1018,  1039,  1492,    18,  1019,  1044,
    1057,  1905,   357,   358,  1040,  1014,  1015,  1025,  1016,   363,
    1017,  1020,  1021,  1022,  1508,  1509,   365,  1511,  1512,   436,
    1023,  1024,  1026,  1062,  1055,  1027,    35,  1064,  1122,  1123,
    1124,  1125,  1126,  1127,  1128,  1063,  1824,   715,   716,  1654,
    1065,  1656,  1657,  1658,  1075,  1066,  1082,  1068,  1050,  1052,
    1053,  1054,  1071,   868,  1521,  1059,  1070,  1086,  1087,  1088,
    1089,  1095,   397,  1074,  1661,  1077,   171,   696,   407,  1102,
    1104,   726,   727,  1671,  1090,  1105,   121,  1106,  1107,  1581,
    1114,   122,  1157,  1144,   123,  1194,  1160,  1196,  1197,  1198,
     470,  1219,  1682,  1210,   475,   436,  1216,  1220,     6,  1591,
    1212,  1592,  1221,  1222,     7,     8,     9,   477,  1224,    10,
      11,    12,  1226,    13,   478,   479,   480,   481,  1227,   482,
    1228,  1230,   486,   487,   488,    18,  1231,   173,   173,  1233,
    1234,  1235,  1240,   558,  1238,   173,  1239,   206,   207,   208,
    1243,   209,   210,   211,   212,  1244,  1245,   213,   214,   215,
     216,   217,   218,   219,  1249,  1251,  1252,   220,  1253,  1254,
    1255,  1158,  1159,   221,  1258,  1260,  1263,  1288,  1742,  1743,
    1264,  1828,  1265,  1266,  1170,  1749,  1267,    69,  1269,  1271,
     436,  1272,  1273,  1274,  1275,   173,    69,   173,  1276,  1277,
    1606,  1278,  1279,  1280,   552,   553,  1281,  1773,  1284,  1285,
     556,  1770,  1771,  1777,  1200,  1201,  1202,  1203,  1204,  1205,
    1206,  1207,  1208,   698,  1286,  1289,  1290,  1291,  1294,  1293,
    1296,  1223,  1297,  1225,   573,  1310,  1298,  1387,  1311,  1300,
    1232,  1301,   731,   732,  1303,  1304,  1305,   173,    35,  1306,
    1308,  1309,  1312,  1313,  1314,  1723,  1315,  1725,  1316,    35,
    1317,  1318,  1319,  1320,  1323,    35,  1359,  1361,  1360,  1362,
    1363,  1367,  1261,  1364,    35,  1382,  1365,  1366,  1368,  1407,
      35,    35,  1369,  1370,  1371,  1372,  1373,  1374,  1375,  1376,
    1388,    69,    69,  1818,  1403,  1819,   632,  1389,    69,  1413,
     872,   873,   874,   875,   876,   877,   878,   879,   880,  1390,
     635,   881,   698,   698,   698,   698,  1391,   882,  1420,  1409,
    1424,  1410,   226,  1412,    69,    69,  1425,  1421,   651,   938,
     883,   939,   940,   941,   942,   943,   944,   945,  1426,  1434,
       6,  1436,  1440,  1437,  1438,   501,     7,     8,     9,  1439,
    1441,    10,    11,    12,   173,    13,  1893,  1894,  1895,  1896,
    1443,   769,   770,   771,   772,  1445,  1446,    18,   741,   742,
     643,   753,   745,   206,   207,   208,  1457,   209,   210,   211,
     212,  1607,  1459,   213,   214,   215,   216,   217,   218,   219,
    1468,   698,  1458,   220,  1401,  1470,  1499,  1472,  1478,   221,
    1506,  1507,  1514,   559,  1530,  1487,    69,  1493,    69,   698,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   698,  1515,  1612,   698,  1531,  1522,
    1535,   206,   207,   208,  1494,   209,   210,   211,   212,  1532,
     898,   213,   214,   215,   216,   217,   218,   219,  1536,   806,
    1497,   220,  1570,  1576,  1577,  1524,  1526,   221,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,  1527,  1528,   928,  1571,  1613,   436,
    1579,  1564,  1580,  1582,   864,   865,  1573,  1575,  1583,  1605,
    1608,  1584,  1595,  1611,  1621,  1460,   884,  1594,   946,  1624,
    1651,  1997,  1467,  1999,  2000,  1596,  1652,  1601,  1473,  1600,
    1602,  1476,   173,  1633,  1634,  1632,  1479,  1614,  1635,  1637,
    1641,  1642,  1638,  1639,  1643,  1653,   436,  1659,  1489,  1663,
    1667,   735,   736,   737,   738,   698,   925,  1668,  1676,  1681,
    1685,  1498,  1686,  1500,  1687,   211,   212,  1688,  1689,   213,
     214,   215,   216,   217,   218,   219,  2039,  1690,  1691,   220,
    1692,  1694,  1693,    35,  1615,   221,  1703,  1523,  1705,   208,
      35,   209,   210,   211,   212,   173,  1706,   213,   214,   215,
     216,   217,   218,   219,  1076,  1707,  1708,   220,  1709,  1712,
    1713,  1565,  1566,   221,  1568,  1714,  1715,  1717,  1724,  1736,
    1739,  1617,  1740,  1746,  1747,  1748,  1750,  1751,  1752,  1756,
    1765,  1578,   206,   207,   208,   173,   209,   210,   211,   212,
    1767,  1759,   213,   214,   215,   216,   217,   218,   219,  1766,
    1772,  1789,   220,  1779,  1780,  1781,  1782,   173,   221,  1783,
    1791,  1793,    35,  1792,    35,  1794,    35,    35,  1796,  1795,
    1798,  1801,  1802,  1803,  1804,  1844,  1830,   206,   207,   208,
    2021,   209,   210,   211,   212,  1812,  1813,   213,   214,   215,
     216,   217,   218,   219,  1831,  1832,  1833,   220,    35,   209,
     210,   211,   212,   221,  1834,   213,   214,   215,   216,   217,
     218,   219,  1851,  1837,  1843,   220,  1854,   698,  1855,  1856,
    1861,   221,  1864,  1113,  1875,  1877,   171,   698,  1878,   206,
     207,   208,  1879,   209,   210,   211,   212,  1618,   171,   213,
     214,   215,   216,   217,   218,   219,  1882,  1886,  1887,   220,
    1888,  1890,   584,  1898,  1906,   221,  1907,  1917,  1918,  1921,
    1913,  1171,  1923,  1173,  1929,  1175,  1241,  1928,   206,   207,
     208,  1931,   209,   210,   211,   212,  1248,  1932,   213,   214,
     215,   216,   217,   218,   219,  1933,  1934,  1937,   220,  1942,
    1948,  1943,  1949,  1950,   221,  1952,  1953,  1954,  1956,  1217,
    1959,  1960,  1961,  1963,  1964,  1726,  1965,  1966,  1967,  1620,
    1969,  1728,  1970,  1971,  1975,   206,   207,   208,  1730,   209,
     210,   211,   212,  1976,  1978,   213,   214,   215,   216,   217,
     218,   219,  1977,  1979,  1738,   220,  1984,  1986,  1990,  1993,
    1994,   221,  1995,  2010,  2013,  2005,  1998,  2024,  2001,    92,
      93,   162,   206,   207,   208,  1760,   209,   210,   211,   212,
      94,    95,   213,   214,   215,   216,   217,   218,   219,  1769,
    2025,  2008,   220,   164,   165,   166,   167,  2032,   221,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,  2015,    92,    93,   654,   206,   207,
     208,  2028,   209,   210,   211,   212,    94,    95,   213,   214,
     215,   216,   217,   218,   219,  2030,  2031,  2033,   220,  2041,
     222,  2037,  2038,  2046,   221,    96,    97,    98,    99,   100,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,  2047,   679,   680,  2048,   206,   207,
     208,  2050,   209,   210,   211,   212,  2051,  2053,   213,   214,
     215,   216,   217,   218,   219,  2057,  1083,  2059,   220,  1084,
    2054,  1517,   801,  1236,   221,   973,   642,  1758,   623,  1380,
    1660,  1419,  1213,  1037,     0,  1862,     0,     0,     0,     0,
    1874,     0,  1876,     0,     0,     0,     0,     0,     0,  1883,
       0,     0,     0,     0,     0,     0,     0,   681,     0,     0,
       0,     0,  1892,     0,   682,     0,     0,     0,     0,  1899,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,     0,     0,
     698,  1920,     0,     0,  1463,  1464,  1465,     0,     0,     0,
       0,     0,  1471,     0,     0,  1474,  1475,     0,     0,     0,
    1477,  1622,     0,  1480,  1481,  1482,  1483,   121,     0,  1484,
    1485,  1486,   122,  1488,     0,   123,     0,  1490,  1491,     0,
       0,     0,  1495,  1496,   353,     0,     0,     0,     0,  1574,
     171,   171,   171,  1504,   171,     0,     0,  1968,     0,  1510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1980,   683,  1118,     0,  1119,
    1120,  1121,   684,   685,     0,     0,     0,     0,   686,     0,
       0,   687,     0,     0,   926,   927,   688,   689,     0,   690,
      92,    93,   654,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,     0,     0,     0,  1122,  1123,
    1124,  1125,  1126,  1127,  1128,     0,  1129,  1130,     0,     0,
      96,    97,    98,    99,   100,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,     0,
     679,   680,   389,    92,    93,   401,   163,     0,     0,    66,
       0,     0,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   168,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,     0,     0,
       0,     0,   681,     0,     0,   171,   171,     0,     0,   682,
    1672,  1673,   402,   171,  1675,     0,     0,     0,     0,     0,
    1680,     0,  1683,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
    1704,  1131,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,  1623,     0,     0,     0,     0,   221,     0,
       0,     0,     0,   171,  1719,   171,  1721,  1722,   814,     0,
       0,     0,     0,     0,     7,     8,     9,     0,     0,    10,
      11,   815,  1627,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,  1737,
       0,     0,     0,  1741,     0,     0,  1744,  1745,     0,     0,
       0,     0,     0,     0,     0,   171,     0,     0,     0,  1628,
       0,   683,     0,     0,     0,     0,     0,   684,   685,     0,
       0,     0,     0,   686,     0,     0,   687,     0,     0,     0,
       0,   688,   689,     0,   690,     0,     0,     0,     0,     0,
       0,     0,     0,  1774,  1775,  1776,     0,     0,  1247,     0,
       0,     0,     0,     0,  1784,  1785,  1786,  1787,  1788,     0,
       0,     0,   206,   207,   208,   169,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,   121,   220,     0,   390,     0,   122,     0,   221,   123,
       0,     0,     0,     0,   403,     0,     0,   170,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   171,     0,     0,   829,     0,  1829,   830,     0,
       0,   831,     0,     0,   832,     0,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,     0,     0,     0,   849,     0,  1850,     0,     0,
     850,     0,     0,   851,     0,     0,  1857,  1858,  1859,  1860,
       0,     0,  1863,     0,  1865,     0,     0,     0,     0,     0,
       0,     0,  1880,  1881,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,  1900,  1901,  1902,
     221,  1903,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,   852,     0,   220,     0,  1845,  1919,     0,     0,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,   207,   208,  1930,   209,   210,   211,   212,     0,  1936,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,     0,     0,
     171,     0,  1957,     0,     0,    92,    93,     6,   780,   781,
     782,   783,   784,   785,   786,   787,    94,    95,   788,   789,
     790,   791,   792,   793,   794,   795,     0,     0,   796,     0,
       0,     0,  1981,  1982,  1983,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
       0,     0,  1846,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1118,  2006,  1119,  1120,  1121,     0,  1847,
       0,     0,     0,  2014,     0,     0,  2017,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1848,     0,     0,     0,
       0,     0,     0,   171,     0,     0,     0,     0,     0,     0,
    2035,     0,     0,     0,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,     0,  1129,  1130,     0,   171,  2044,    92,    93,   162,
     163,     0,     0,    66,     0,     0,     0,  2052,    94,    95,
       0,  2056,     0,     0,     0,     0,  2060,     0,     0,  2062,
       0,   164,   165,   166,   167,   168,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,     0,    92,    93,   162,   206,   207,   208,     0,
     209,   210,   211,   212,    94,    95,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,   164,   165,   166,
     167,     0,   221,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    92,    93,
     162,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,   121,     0,     0,     0,  1134,   122,     0,
       0,   123,   164,   165,   166,   167,   396,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
     206,   207,   208,   220,   209,   210,   211,   212,     0,   221,
     213,   214,   215,   216,   217,   218,   219,   206,   207,   208,
     220,   209,   210,   211,   212,     0,   221,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,     0,   169,
       0,   814,     0,     0,     0,     0,     0,     7,     8,     9,
       0,     0,    10,    11,   815,   121,    13,     0,     0,     0,
     122,     0,     0,   123,     0,     0,     0,     0,    18,     0,
       0,   170,  1753,   206,   207,   208,  1754,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,   814,     0,     0,     0,   221,
       0,     7,     8,     9,   379,     0,    10,    11,   815,     0,
      13,   121,     0,     0,     0,     0,   122,     0,     0,   123,
       0,     0,    18,     0,   206,   207,   208,   170,   209,   210,
     211,   212,  1849,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,   814,
     221,     0,     0,     0,   284,     7,     8,     9,     0,     0,
      10,    11,   815,     0,    13,     0,   121,     0,     0,     0,
       0,   122,     0,     0,   123,     0,    18,     0,     0,     0,
       0,   816,   170,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,  1962,     0,     0,   829,     0,
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
     826,   827,   828,     0,  1716,     0,   829,     0,     0,   830,
       0,     0,   831,     0,     0,   832,     0,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,     0,     0,     0,   849,     0,     0,   814,
       0,   850,     0,     0,   851,     7,     8,     9,     0,     0,
      10,    11,   815,     0,    13,     0,     0,     0,  1727,     0,
       0,     0,     0,   206,   207,   208,    18,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   814,     0,     0,     0,     0,     0,     7,
       8,     9,     0,     0,    10,    11,   815,     0,    13,     0,
       0,     0,  1729,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,   205,     0,   220,   814,     0,     0,
       0,     0,   221,     7,     8,     9,     0,     0,    10,    11,
     815,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,   816,
       0,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   281,     0,     0,   829,     0,     0,   830,
       0,     0,   831,     0,     0,   832,     0,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,     0,     0,     0,   849,     0,     0,     0,
       0,   850,     0,   816,   851,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,     0,     0,     0,
     829,     0,     0,   830,     0,     0,   831,     0,     0,   832,
       0,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,     0,     0,     0,
     849,     0,     0,     0,     0,   850,     0,   816,   851,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,     0,  1731,     0,   829,     0,     0,   830,     0,     0,
     831,     0,     0,   832,     0,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,     0,     0,     0,   849,     0,     0,   814,     0,   850,
       0,     0,   851,     7,     8,     9,     0,     0,    10,    11,
     815,     0,    13,     0,     0,     0,  1732,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,   814,     0,     0,   220,     0,     0,     7,     8,     9,
     221,     0,    10,    11,   815,     0,    13,     0,     0,     0,
    1733,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,   366,   220,     0,   814,     0,     0,     0,   221,
       0,     7,     8,     9,     0,     0,    10,    11,   815,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,   816,     0,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   391,     0,     0,   829,     0,     0,   830,     0,     0,
     831,     0,     0,   832,     0,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,     0,     0,     0,   849,     0,     0,     0,     0,   850,
       0,   816,   851,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,     0,     0,     0,   829,     0,
       0,   830,     0,     0,   831,     0,     0,   832,     0,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,     0,     0,     0,   849,     0,
       0,     0,     0,   850,     0,   816,   851,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,     0,
    1951,     0,   829,     0,     0,   830,     0,     0,   831,     0,
       0,   832,     0,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,     0,
       0,     0,   849,     0,     0,   814,     0,   850,     0,     0,
     851,     7,     8,     9,     0,     0,    10,    11,   815,     0,
      13,     0,     0,     0,  1958,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,   814,
       0,     0,   220,     0,     0,     7,     8,     9,   221,     0,
      10,    11,   815,     0,    13,     0,     0,     0,  2007,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,   814,     0,     0,     0,   221,     0,     7,
       8,     9,     0,     0,    10,    11,   815,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,   816,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,     0,
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
     822,   823,   824,   825,   826,   827,   828,     0,  2009,     0,
     829,     0,     0,   830,     0,     0,   831,     0,     0,   832,
       0,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,     0,     0,     0,
     849,     0,     0,   814,     0,   850,     0,     0,   851,     7,
       8,     9,     0,     0,    10,    11,   815,   472,    13,     0,
       0,     0,  2011,   782,   783,   784,   785,   786,   787,     0,
      18,   788,   789,   790,   791,   792,   793,   794,   795,     0,
       0,   796,     0,     0,     0,     0,     0,    92,    93,   162,
     780,   781,   782,   783,   784,   785,   786,   787,    94,    95,
     788,   789,   790,   791,   792,   793,   794,   795,     0,     0,
     796,   164,   165,   166,   167,     0,  2012,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   746,     0,     0,     0,     0,   780,   781,   782,
     783,   784,   785,   786,   787,     0,  1080,   788,   789,   790,
     791,   792,   793,   794,   795,     0,     0,   796,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1069,     0,
       0,     0,     0,   816,     0,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,  1041,     0,     0,
     829,     0,     0,   830,     0,     0,   831,     0,     0,   832,
       0,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,     0,     0,     0,
     849,    92,    93,   162,     0,   850,     0,     0,   851,     0,
       0,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,     0,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,     0,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,  2036,   220,     0,     0,
       0,     0,     0,   221,    92,    93,     6,   485,     0,     0,
     783,   784,   785,   786,   787,    94,    95,   788,   789,   790,
     791,   792,   793,   794,   795,   121,     0,   796,     0,     0,
     122,     0,     0,   123,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    92,
      93,     6,   206,   207,   208,     0,   209,   210,   211,   212,
      94,    95,   213,   214,   215,   216,   217,   218,   219,     0,
      53,     0,   220,     0,    54,     0,     0,     0,   221,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,     0,     0,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     6,     0,
       0,     0,    55,   221,     7,     8,     9,     0,    56,    10,
      11,    12,     0,    13,     0,    14,    15,    16,    17,     0,
       0,    57,     0,    58,     0,    18,     0,     0,     0,   121,
       0,     0,     0,     0,   122,    59,     0,   123,     0,    60,
       0,   959,     0,   960,   961,     0,   962,     0,     0,     0,
       0,    61,     0,     0,  1537,     0,   963,     0,    19,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,    62,   964,   965,   966,     0,    21,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     967,    23,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,   121,     0,     0,  1538,     0,   122,     0,     0,
     123,     0,     0,     0,     0,     0,     0,    63,    26,    64,
       0,     0,     0,     0,     0,     0,     0,     0,   206,   207,
     208,     0,   209,   210,   211,   212,   968,  1539,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,     0,     0,   121,     0,   386,
       0,     0,   122,     0,     0,   123,     0,  1540,     0,     0,
       0,     0,     0,    27,     0,    28,     0,     0,  1541,  1542,
    1543,  1544,  1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,
    1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,
    1563,     0,     0,     0,     0,     0,     0,     0,   969,     0,
       0,     0,   206,   207,   208,   970,   209,   210,   211,   212,
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
     212,  1324,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1332,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1341,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1572,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1597,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1598,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1599,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1603,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1609,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1616,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1636,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1799,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1800,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1808,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1814,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  1815,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  1839,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  1840,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  1841,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
     206,   207,   208,   221,   209,   210,   211,   212,  1891,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,   206,   207,   208,   221,   209,   210,   211,
     212,  1912,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,   206,   207,   208,   221,
     209,   210,   211,   212,  1914,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,   206,
     207,   208,   221,   209,   210,   211,   212,  1944,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,   206,   207,   208,   221,   209,   210,   211,   212,
    1945,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,   206,   207,   208,   221,   209,
     210,   211,   212,  1946,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,   206,   207,
     208,   221,   209,   210,   211,   212,  2022,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,   206,   207,   208,   221,   209,   210,   211,   212,  2049,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,   206,   207,   208,   221,   209,   210,
     211,   212,  2058,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,   206,   207,   208,
     221,   209,   210,   211,   212,  2061,     0,   213,   214,   215,
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
     207,   208,   863,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,   958,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  1790,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
     206,   207,   208,  1904,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,   206,   207,   208,
    1972,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,   206,   207,   208,  1974,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
     221,   206,   207,   208,  2002,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   206,   207,
     208,  2003,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,   206,   207,   208,  2004,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,   206,   207,   208,  2026,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,   206,
     207,   208,  2029,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,   206,   207,   208,  2055,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,   206,   207,   208,  2063,   209,   210,   211,
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
       0,     0,     0,   220,     0,     0,     0,   860,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,   861,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1640,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  1797,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,  1811,     0,   221,   206,   207,
     208,     0,   209,   210,   211,   212,     0,     0,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,   220,     0,
       0,     0,  1909,     0,   221,   206,   207,   208,     0,   209,
     210,   211,   212,     0,     0,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,   220,     0,     0,     0,  1910,
       0,   221,   206,   207,   208,     0,   209,   210,   211,   212,
       0,     0,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,   220,     0,     0,     0,  1911,     0,   221,   206,
     207,   208,     0,   209,   210,   211,   212,     0,     0,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,   220,
       0,     0,     0,  1916,     0,   221,   206,   207,   208,     0,
     209,   210,   211,   212,     0,     0,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,   220,     0,     0,     0,
    1926,     0,   221,   206,   207,   208,     0,   209,   210,   211,
     212,     0,     0,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,   220,     0,     0,     0,  1927,     0,   221,
     206,   207,   208,     0,   209,   210,   211,   212,     0,     0,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
     220,     0,     0,     0,  1947,     0,   221,   206,   207,   208,
       0,   209,   210,   211,   212,     0,     0,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,   220,     0,     0,
       0,  1988,     0,   221,   206,   207,   208,     0,   209,   210,
     211,   212,     0,     0,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,   220,     0,     0,     0,  2042,     0,
     221,   206,   207,   208,     0,   209,   210,   211,   212,     0,
       0,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,   780,   781,
     782,   783,   784,   785,   786,   787,     0,     0,   788,   789,
     790,   791,   792,   793,   794,   795,     0,     0,   796,     0,
       0,     0,  1417,   780,   781,   782,   783,   784,   785,   786,
     787,     0,     0,   788,   789,   790,   791,   792,   793,   794,
     795,     0,     0,   796,     0,   904
};

static const yytype_int16 yycheck[] =
{
       5,   503,     7,   654,   942,   943,     5,  1209,   896,   509,
       5,  1213,    17,   901,   902,   400,   974,     3,     3,     5,
       5,     5,   522,    28,  1458,    85,     5,     5,     5,   147,
     148,   968,   532,     7,     5,    40,   536,     5,  1472,     3,
     540,     5,   177,   980,  1478,     5,   431,   595,     3,     5,
       5,     5,     5,  1487,     5,   258,     0,     5,   237,  1493,
    1494,   264,   180,    11,    12,    13,     5,     5,    16,    17,
      18,    21,    20,     5,     7,    89,    85,    78,   237,   858,
     638,    67,   261,   237,    32,     5,     5,     6,    72,     5,
       9,    10,    85,   872,   873,   874,   875,   262,    99,   113,
      89,     5,    72,     5,   269,   261,    99,   886,   267,   760,
      99,   762,   101,   267,    84,   271,    26,     5,    66,    26,
     262,    26,   260,    11,    12,    13,     0,   269,    16,    17,
      18,   269,    20,    72,    72,   270,   684,   685,   686,   687,
      72,    91,   147,   148,    32,   150,   151,   271,    68,   154,
     155,   156,   157,   158,   159,   160,    72,   259,   276,   277,
     101,   261,     3,    67,     5,   944,   945,   267,    72,     7,
     111,   112,   113,   150,   151,   180,   181,   154,   155,   156,
     157,   158,   159,   267,   262,   259,  1074,   271,   967,   574,
     748,   269,   102,   143,     5,   102,   331,   102,    85,  1401,
      11,    12,    13,   261,    91,    16,    17,    18,   110,    20,
      26,   329,    99,     7,    26,   763,   166,   167,   120,    85,
     261,    32,   227,    89,    90,    26,   267,   267,   268,  1117,
     271,  1010,   120,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   367,
       5,   799,   262,   267,   268,   640,    11,    12,    13,   269,
     260,    16,    17,    18,   261,    20,   261,   268,   267,   269,
     267,   276,   277,   259,   259,   268,   271,    32,   338,   268,
     264,   267,   267,   267,   270,   270,   102,   595,   259,   267,
     102,   260,   271,   267,   267,   259,   251,   237,   268,   267,
     269,   102,   362,   259,   259,   146,   270,   267,   264,   120,
     121,   122,   123,   267,   267,   270,   267,   236,   268,    21,
     268,   267,   237,   262,   329,   264,   264,   268,   261,   338,
     235,   338,   264,   267,    89,   250,    81,    82,   267,   344,
     458,   346,   252,   348,    99,   252,   261,   252,     5,     6,
    1129,   261,     9,    10,  1242,    99,  1135,   101,   261,   907,
     264,   260,   367,   498,   267,   109,   262,   344,   870,   267,
     269,   348,   267,   269,   119,   216,   684,   685,   686,   687,
     268,   268,   137,   138,   139,   140,   141,   142,   133,    91,
      85,   398,   399,   262,    89,   259,   267,   261,   403,   406,
     269,     5,   268,   262,    99,   410,   267,    11,    12,    13,
     269,   262,    16,    17,    18,   267,    20,   267,   269,   424,
    1854,   271,  1201,  1202,  1203,  1362,  1363,  1364,    32,  1366,
    1864,  1210,   262,   438,   136,   264,   252,   266,   443,   269,
     252,   143,   144,   271,   449,   261,   451,   452,   267,   261,
     455,   252,   457,   458,     6,   763,   262,   268,   262,   262,
     261,  1240,  1664,   269,   166,   269,   269,   169,   170,     7,
    1249,   267,   268,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   494,
      89,   799,    99,     5,   262,    99,   262,   262,   503,     5,
      99,   269,   262,   269,   269,    11,    12,    13,   115,   269,
      16,    17,    18,   268,    20,   267,   115,   268,   269,   271,
     119,  1069,  1956,   268,   268,  1959,    32,   262,     7,   267,
     137,  1079,   136,   271,   269,  1969,  1970,   262,   133,   143,
       5,   267,  1044,  1322,   269,   271,    11,    12,    13,   268,
     269,    16,    17,    18,  1442,    20,  1444,    92,    93,    94,
      95,    96,    97,   261,  1766,    71,   268,    32,     7,   252,
     253,   254,     7,   268,  2008,   258,    21,   582,     7,   236,
       7,   264,     7,    89,   191,   269,   270,  1087,   245,   246,
     595,     7,   597,    99,   100,  1374,   601,   259,   603,   907,
    1537,  1538,   108,     7,   110,   582,   611,   612,  1545,     7,
     615,   194,   143,     7,   619,   146,   268,   269,   267,  1557,
     597,   267,   268,   628,   601,   260,   603,   267,   159,   160,
     161,     7,    99,   638,   611,   612,     7,   642,   615,   267,
     268,     5,   619,   261,    89,     7,    91,    11,    12,    13,
       7,   628,    16,    17,    18,     7,    20,   102,  1595,     7,
    1597,   268,   267,   268,   268,   642,     5,     6,    32,   268,
     115,  1450,     7,    84,     7,    86,   143,   261,    89,   684,
     685,   686,   687,   261,     5,   690,   268,   269,   133,   261,
      11,    12,    13,   261,     5,    16,    17,    18,   261,    20,
      11,    12,    13,   267,   268,    16,    17,    18,   261,    20,
    1647,    32,   268,   269,   125,   126,   127,   128,   129,   130,
     131,    32,   133,     5,   729,   261,   193,   261,   195,    11,
      12,    13,   261,   268,    16,    17,    18,   268,    20,   252,
     253,   254,   255,   748,   261,   258,   261,  1055,     7,    70,
      32,   218,   268,   269,   268,   269,  1535,   261,   763,   268,
     269,  1069,   268,   261,   125,   126,   127,   128,   129,   130,
     131,  1079,   133,   778,   268,   269,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   268,   269,   799,   930,  1447,  1448,  1449,  1757,
    1758,   268,   267,   268,   268,   269,   261,     5,   813,   814,
     267,   268,   261,    11,    12,    13,     7,  1754,    16,    17,
      18,   261,    20,   268,   268,   269,   250,   251,   252,   253,
     268,   269,   268,   269,    32,     5,   813,     5,   261,     7,
     261,    11,    12,    13,  1229,   269,    16,    17,    18,   261,
      20,   856,   857,   858,    22,    23,    24,   268,   268,   269,
     261,   979,    32,   981,   869,   870,   261,   872,   873,   874,
     875,    39,   268,   269,  1422,  1260,   881,   268,   269,   268,
     269,   886,   261,  1268,     5,  1270,   268,   269,   268,   269,
      11,    12,    13,  1011,   261,    16,    17,    18,   143,    20,
       7,   146,   907,   267,   268,  1793,   261,   268,   968,   268,
     269,    32,   268,   269,   159,   160,     7,  1302,   163,   164,
     980,     5,  1307,   268,   269,   268,   269,    11,    12,    13,
     935,   261,    16,    17,    18,   261,    20,   268,   269,   944,
     945,   268,   269,   268,   269,  1548,  1549,   268,    32,   954,
     269,   261,     7,   261,   261,     5,   267,   268,   963,   964,
       5,   262,   967,   269,   237,   237,     3,     4,     5,   237,
     267,   262,   977,   978,   979,  1912,   981,   982,   983,   269,
       7,   262,   987,   262,   262,   267,   268,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,    33,    34,    35,    36,
      37,     7,     5,   261,     5,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,   267,  1027,   268,     5,   267,  1031,     5,   267,   197,
       5,     5,   250,   251,   252,   253,   254,   267,  1975,  1044,
     258,   267,   267,   237,     5,  1824,   264,  1935,   262,     5,
       5,   529,   267,     5,   267,   267,    11,    12,    13,     5,
       5,    16,    17,    18,  1069,    20,    11,    12,    13,   267,
     268,    16,    17,    18,  1079,    20,     5,    32,  2015,   267,
     267,   250,   251,   252,   253,   254,   255,    32,     5,   258,
     262,     7,  1871,     7,     7,     7,     7,   267,   268,     7,
    2037,   244,   245,  1411,     8,   248,   249,   250,   251,   252,
     253,   254,   255,     7,  1422,   258,   267,   237,     7,     7,
       7,    43,    44,   261,  1129,     5,   261,   252,     7,   607,
    1135,    11,    12,    13,     7,     7,    16,    17,    18,     7,
      20,     7,     5,  1794,   237,     7,   267,   268,     7,     7,
     267,     7,    32,     7,     7,     7,     7,     7,     7,     5,
     268,   262,    69,    85,    86,    11,    12,    13,   264,     7,
      16,    17,    18,     5,    20,   252,     7,   267,     3,     4,
       5,     7,   268,   267,   268,     7,    32,     7,  1690,    14,
      15,  1196,  1197,     7,   267,     8,  1201,  1202,  1203,   121,
     122,   123,   262,   261,   261,  1210,     5,   261,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   261,     3,  1240,   261,     5,   261,   161,
     261,     7,   268,   267,  1249,   267,   261,   267,   267,   261,
     261,   261,   261,  1388,   262,     5,     7,   179,   258,   261,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     267,     5,   261,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   261,
     268,   245,  1362,  1363,  1364,     3,  1366,   267,   261,  1314,
    1315,   261,   267,   268,  1319,     7,   267,  1322,   261,   261,
       5,   261,   267,   268,   261,   261,    11,    12,    13,   261,
     261,    16,    17,    18,   261,    20,   261,    84,   816,    86,
     261,   261,    89,   261,   267,     6,  1351,    32,   267,   264,
       5,  1851,   274,   275,   237,   261,   261,   267,   261,   281,
     261,   261,   261,   261,  1369,  1370,   288,  1372,  1373,  1374,
     261,   261,   267,     5,   267,   261,  1381,     5,   125,   126,
     127,   128,   129,   130,   131,   267,   133,   267,   268,  1524,
       5,  1526,  1527,  1528,   268,   262,     5,   262,   876,   877,
     878,   879,   262,     5,  1381,   883,   261,     5,     5,     5,
     267,     5,   334,   261,  1532,   262,   338,  1422,   340,     5,
       5,   267,   268,  1541,   267,     5,   251,     5,     5,  1434,
       3,   256,     7,     5,   259,     5,     7,   261,   261,   267,
     362,     7,   267,   261,   366,  1450,   267,     7,     5,  1454,
     269,  1456,     7,     7,    11,    12,    13,   379,     7,    16,
      17,    18,     7,    20,   386,   387,   388,   389,     7,   391,
       7,     7,   394,   395,   396,    32,     7,  1537,  1538,     7,
       7,     7,   269,     8,     7,  1545,     7,   238,   239,   240,
     267,   242,   243,   244,   245,   262,   269,   248,   249,   250,
     251,   252,   253,   254,   261,     7,     7,   258,     7,     7,
       7,   989,   990,   264,   267,     5,     7,     5,  1636,  1637,
       7,   268,     7,     7,  1002,  1643,     7,  1532,     7,     7,
    1535,     7,     7,     7,     7,  1595,  1541,  1597,     7,     7,
       7,     7,     7,     7,   466,   467,     7,  1682,     7,     7,
     472,  1669,  1670,  1688,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   595,     7,     5,     5,   261,   261,     7,
     261,  1049,     5,  1051,   496,   262,     5,   267,   262,     7,
    1058,     7,   267,   268,     7,     7,     7,  1647,  1593,     7,
       7,     7,   262,   269,   269,  1600,   269,  1602,   269,  1604,
     269,   269,   269,   269,   262,  1610,   269,   269,   262,   269,
     269,   268,  1090,   269,  1619,     7,   269,   269,   268,   268,
    1625,  1626,   269,   269,   269,   269,   269,   269,   269,   262,
     267,  1636,  1637,  1751,   269,  1753,   558,   267,  1643,     7,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   267,
     572,    83,   684,   685,   686,   687,   267,    89,     3,   269,
       7,   269,   269,   269,  1669,  1670,   115,   262,   590,    99,
     102,   101,   102,   103,   104,   105,   106,   107,     7,   261,
       5,   262,     3,     7,     7,  1690,    11,    12,    13,     7,
       7,    16,    17,    18,  1754,    20,  1831,  1832,  1833,  1834,
       7,   684,   685,   686,   687,     7,     7,    32,   630,   631,
     267,   268,   634,   238,   239,   240,     7,   242,   243,   244,
     245,     7,     7,   248,   249,   250,   251,   252,   253,   254,
       7,   763,   267,   258,  1212,     7,     7,   267,   267,   264,
       7,     7,     5,   268,   262,   267,  1751,   267,  1753,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,     7,     7,   799,     5,   211,
     133,   238,   239,   240,   267,   242,   243,   244,   245,   261,
     763,   248,   249,   250,   251,   252,   253,   254,     7,   711,
     267,   258,   262,     5,     5,   267,   267,   264,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   267,   267,   799,   262,     7,  1824,
       5,   269,     5,     7,   746,   747,   262,   262,     7,     7,
       7,   262,   269,     7,     7,  1313,   268,   262,   268,     7,
     267,  1976,  1320,  1978,  1979,   269,     5,   262,  1326,   269,
     269,  1329,  1912,   262,   262,   269,  1334,     7,   269,   269,
     262,   262,   269,   269,   269,   269,  1871,     7,  1346,     7,
     267,   196,   197,   198,   199,   907,   798,     5,     5,     5,
     267,  1359,   267,  1361,   267,   244,   245,   267,     3,   248,
     249,   250,   251,   252,   253,   254,  2031,   264,   262,   258,
     262,   262,   268,  1908,     7,   264,   262,  1385,   268,   240,
    1915,   242,   243,   244,   245,  1975,     7,   248,   249,   250,
     251,   252,   253,   254,   907,   268,   262,   258,     7,     7,
       7,  1409,  1410,   264,  1412,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   138,     7,     7,
     269,  1429,   238,   239,   240,  2015,   242,   243,   244,   245,
       7,   267,   248,   249,   250,   251,   252,   253,   254,   262,
       6,   267,   258,     7,     7,     7,     7,  2037,   264,     5,
     114,   269,  1987,     7,  1989,   269,  1991,  1992,   262,    19,
     269,   269,   262,   269,   269,     7,   269,   238,   239,   240,
    2005,   242,   243,   244,   245,   262,   262,   248,   249,   250,
     251,   252,   253,   254,   267,   267,   267,   258,  2023,   242,
     243,   244,   245,   264,   267,   248,   249,   250,   251,   252,
     253,   254,     5,   269,   269,   258,   267,  1069,     7,     7,
       7,   264,   267,   965,     7,     7,   968,  1079,     7,   238,
     239,   240,     7,   242,   243,   244,   245,     7,   980,   248,
     249,   250,   251,   252,   253,   254,     7,     5,     5,   258,
       5,   261,   267,     7,   262,   264,   262,     5,     5,     5,
     262,  1003,   262,  1005,     7,  1007,  1069,   268,   238,   239,
     240,     7,   242,   243,   244,   245,  1079,     7,   248,   249,
     250,   251,   252,   253,   254,     7,     7,   268,   258,     7,
       7,   269,     7,     7,   264,     7,     7,     7,   267,  1041,
     267,     7,     7,     7,     7,  1603,     7,     7,     7,     7,
     267,  1609,   267,     7,   267,   238,   239,   240,  1616,   242,
     243,   244,   245,   267,   267,   248,   249,   250,   251,   252,
     253,   254,   268,   267,  1632,   258,     7,   269,   262,     7,
     262,   264,   267,     7,     7,    65,   267,     7,   268,     3,
       4,     5,   238,   239,   240,  1653,   242,   243,   244,   245,
      14,    15,   248,   249,   250,   251,   252,   253,   254,  1667,
       7,   267,   258,    27,    28,    29,    30,     7,   264,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   269,     3,     4,     5,   238,   239,
     240,   268,   242,   243,   244,   245,    14,    15,   248,   249,
     250,   251,   252,   253,   254,   268,   267,   267,   258,   268,
     260,   269,   267,   135,   264,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     7,    63,    64,   268,   238,   239,
     240,   268,   242,   243,   244,   245,     5,   267,   248,   249,
     250,   251,   252,   253,   254,     7,   933,   268,   258,   934,
    2051,  1380,   694,  1062,   264,   810,   581,  1651,   546,  1197,
    1531,  1243,  1037,   857,    -1,  1803,    -1,    -1,    -1,    -1,
    1808,    -1,  1810,    -1,    -1,    -1,    -1,    -1,    -1,  1817,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,  1830,    -1,   132,    -1,    -1,    -1,    -1,  1837,
     238,   239,   240,    -1,   242,   243,   244,   245,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,
    1422,  1869,    -1,    -1,  1316,  1317,  1318,    -1,    -1,    -1,
      -1,    -1,  1324,    -1,    -1,  1327,  1328,    -1,    -1,    -1,
    1332,     7,    -1,  1335,  1336,  1337,  1338,   251,    -1,  1341,
    1342,  1343,   256,  1345,    -1,   259,    -1,  1349,  1350,    -1,
      -1,    -1,  1354,  1355,   268,    -1,    -1,    -1,    -1,  1422,
    1362,  1363,  1364,  1365,  1366,    -1,    -1,  1925,    -1,  1371,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1943,   244,    84,    -1,    86,
      87,    88,   250,   251,    -1,    -1,    -1,    -1,   256,    -1,
      -1,   259,    -1,    -1,   262,   263,   264,   265,    -1,   267,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,   128,   129,   130,   131,    -1,   133,   134,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,     8,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,   125,    -1,    -1,  1537,  1538,    -1,    -1,   132,
    1542,  1543,    72,  1545,  1546,    -1,    -1,    -1,    -1,    -1,
    1552,    -1,  1554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,    -1,   242,   243,   244,   245,
    1572,   268,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,   258,     7,    -1,    -1,    -1,    -1,   264,    -1,
      -1,    -1,    -1,  1595,  1596,  1597,  1598,  1599,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    18,     7,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,  1631,
      -1,    -1,    -1,  1635,    -1,    -1,  1638,  1639,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1647,    -1,    -1,    -1,     7,
      -1,   244,    -1,    -1,    -1,    -1,    -1,   250,   251,    -1,
      -1,    -1,    -1,   256,    -1,    -1,   259,    -1,    -1,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1685,  1686,  1687,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    -1,  1696,  1697,  1698,  1699,  1700,    -1,
      -1,    -1,   238,   239,   240,   235,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,   251,   258,    -1,   260,    -1,   256,    -1,   264,   259,
      -1,    -1,    -1,    -1,   264,    -1,    -1,   267,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,  1754,    -1,    -1,   162,    -1,  1759,   165,    -1,
      -1,   168,    -1,    -1,   171,    -1,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    -1,    -1,   192,    -1,  1789,    -1,    -1,
     197,    -1,    -1,   200,    -1,    -1,  1798,  1799,  1800,  1801,
      -1,    -1,  1804,    -1,  1806,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1814,  1815,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,  1839,  1840,  1841,
     264,  1843,    -1,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,   268,    -1,   258,    -1,     7,  1868,    -1,    -1,   264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,  1885,   242,   243,   244,   245,    -1,  1891,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,
    1912,    -1,  1914,    -1,    -1,     3,     4,     5,   238,   239,
     240,   241,   242,   243,   244,   245,    14,    15,   248,   249,
     250,   251,   252,   253,   254,   255,    -1,    -1,   258,    -1,
      -1,    -1,  1944,  1945,  1946,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,     7,  1975,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,  1986,    86,    87,    88,    -1,     7,
      -1,    -1,    -1,  1995,    -1,    -1,  1998,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,  2015,    -1,    -1,    -1,    -1,    -1,    -1,
    2022,    -1,    -1,    -1,   125,   126,   127,   128,   129,   130,
     131,    -1,   133,   134,    -1,  2037,  2038,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    -1,  2049,    14,    15,
      -1,  2053,    -1,    -1,    -1,    -1,  2058,    -1,    -1,  2061,
      -1,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,     3,     4,     5,   238,   239,   240,    -1,
     242,   243,   244,   245,    14,    15,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    27,    28,    29,
      30,    -1,   264,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    -1,    -1,   251,    -1,    -1,    -1,   268,   256,    -1,
      -1,   259,    27,    28,    29,    30,   264,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
     238,   239,   240,   258,   242,   243,   244,   245,    -1,   264,
     248,   249,   250,   251,   252,   253,   254,   238,   239,   240,
     258,   242,   243,   244,   245,    -1,   264,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,   235,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    16,    17,    18,   251,    20,    -1,    -1,    -1,
     256,    -1,    -1,   259,    -1,    -1,    -1,    -1,    32,    -1,
      -1,   267,   212,   238,   239,   240,   216,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,     5,    -1,    -1,    -1,   264,
      -1,    11,    12,    13,   269,    -1,    16,    17,    18,    -1,
      20,   251,    -1,    -1,    -1,    -1,   256,    -1,    -1,   259,
      -1,    -1,    32,    -1,   238,   239,   240,   267,   242,   243,
     244,   245,     7,    -1,   248,   249,   250,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,     5,
     264,    -1,    -1,    -1,   268,    11,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,   251,    -1,    -1,    -1,
      -1,   256,    -1,    -1,   259,    -1,    32,    -1,    -1,    -1,
      -1,   145,   267,   147,   148,   149,   150,   151,   152,   153,
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
     186,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,     5,
      -1,   197,    -1,    -1,   200,    11,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,   238,   239,   240,    32,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,   264,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,    -1,
     242,   243,   244,   245,    -1,    -1,   248,   249,   250,   251,
     252,   253,   254,    -1,     8,    -1,   258,     5,    -1,    -1,
      -1,    -1,   264,    11,    12,    13,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     8,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,   171,    -1,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,    -1,
      -1,   197,    -1,   145,   200,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,   171,
      -1,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
     192,    -1,    -1,    -1,    -1,   197,    -1,   145,   200,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,   268,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,   171,    -1,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,   192,    -1,    -1,     5,    -1,   197,
      -1,    -1,   200,    11,    12,    13,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,   239,   240,    -1,   242,   243,
     244,   245,    -1,    -1,   248,   249,   250,   251,   252,   253,
     254,     5,    -1,    -1,   258,    -1,    -1,    11,    12,    13,
     264,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
     268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,   238,   239,   240,    -1,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,     8,   258,    -1,     5,    -1,    -1,    -1,   264,
      -1,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     8,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,   171,    -1,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,   197,
      -1,   145,   200,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,   171,    -1,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,   197,    -1,   145,   200,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
     268,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,   171,    -1,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
      -1,    -1,   192,    -1,    -1,     5,    -1,   197,    -1,    -1,
     200,    11,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,    -1,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,     5,
      -1,    -1,   258,    -1,    -1,    11,    12,    13,   264,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,   238,   239,   240,    -1,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,     5,    -1,    -1,    -1,   264,    -1,    11,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
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
      12,    13,    -1,    -1,    16,    17,    18,     8,    20,    -1,
      -1,    -1,   268,   240,   241,   242,   243,   244,   245,    -1,
      32,   248,   249,   250,   251,   252,   253,   254,   255,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
     238,   239,   240,   241,   242,   243,   244,   245,    14,    15,
     248,   249,   250,   251,   252,   253,   254,   255,    -1,    -1,
     258,    27,    28,    29,    30,    -1,   268,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     8,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,    72,   248,   249,   250,
     251,   252,   253,   254,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,
      -1,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     8,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,   171,
      -1,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
     192,     3,     4,     5,    -1,   197,    -1,    -1,   200,    -1,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,   238,   239,   240,
      -1,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,   268,   258,    -1,    -1,
      -1,    -1,    -1,   264,     3,     4,     5,     6,    -1,    -1,
     241,   242,   243,   244,   245,    14,    15,   248,   249,   250,
     251,   252,   253,   254,   255,   251,    -1,   258,    -1,    -1,
     256,    -1,    -1,   259,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     3,
       4,     5,   238,   239,   240,    -1,   242,   243,   244,   245,
      14,    15,   248,   249,   250,   251,   252,   253,   254,    -1,
       3,    -1,   258,    -1,     7,    -1,    -1,    -1,   264,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,   238,   239,   240,
      -1,   242,   243,   244,   245,    -1,    -1,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,   258,     5,    -1,
      -1,    -1,    65,   264,    11,    12,    13,    -1,    71,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    -1,
      -1,    84,    -1,    86,    -1,    32,    -1,    -1,    -1,   251,
      -1,    -1,    -1,    -1,   256,    98,    -1,   259,    -1,   102,
      -1,    84,    -1,    86,    87,    -1,    89,    -1,    -1,    -1,
      -1,   114,    -1,    -1,    78,    -1,    99,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   116,   117,   118,    -1,    84,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
      -1,    -1,   251,    -1,    -1,   139,    -1,   256,    -1,    -1,
     259,    -1,    -1,    -1,    -1,    -1,    -1,   190,   135,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,    -1,   242,   243,   244,   245,   189,   171,   248,   249,
     250,   251,   252,   253,   254,    -1,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,   264,    -1,    -1,   251,    -1,   269,
      -1,    -1,   256,    -1,    -1,   259,    -1,   201,    -1,    -1,
      -1,    -1,    -1,   190,    -1,   192,    -1,    -1,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,   238,   239,   240,   268,   242,   243,   244,   245,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,    -1,
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
      -1,    -1,    -1,   258,    -1,   260,   238,   239,   240,   264,
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
     258,    -1,   260,   238,   239,   240,   264,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
      -1,    -1,    -1,   258,    -1,   260,   238,   239,   240,   264,
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
     254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,
     264,   238,   239,   240,    -1,   242,   243,   244,   245,    -1,
      -1,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,   264,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,    -1,   248,   249,
     250,   251,   252,   253,   254,   255,    -1,    -1,   258,    -1,
      -1,    -1,   262,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
     255,    -1,    -1,   258,    -1,   260
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
     269,   262,   269,   262,   269,   143,   146,   159,   160,   161,
     268,   411,   269,   143,   146,   159,   160,   163,   164,   268,
     413,   269,    21,    91,   143,   166,   167,   268,   415,    21,
      91,   136,   143,   144,   166,   169,   170,   268,   417,   269,
     262,   269,   269,   269,   269,   269,   269,   268,   268,   269,
     269,   269,   269,   269,   269,   269,   262,   305,   407,   459,
     407,   428,     7,   286,   286,   267,   286,   267,   267,   267,
     267,   267,   446,   286,   250,   251,   252,   253,   269,   443,
     235,   303,   446,   269,   262,   269,   447,   268,   283,   269,
     269,   296,   269,     7,   267,   268,   286,   262,   307,   453,
       3,   262,   311,   286,     7,   115,     7,   296,   268,   269,
     268,   296,   268,   296,   261,   374,   262,     7,     7,     7,
       3,     7,   383,     7,   387,     7,     7,    81,    82,   119,
     133,   268,   380,   268,   296,   268,   296,     7,   267,     7,
     303,   459,   459,   453,   453,   453,   459,   303,     7,   286,
       7,   453,   267,   303,   453,   453,   303,   453,   267,   303,
     453,   453,   453,   453,   453,   453,   453,   267,   453,   303,
     453,   453,   459,   267,   267,   453,   453,   267,   303,     7,
     303,   455,   455,   455,   453,   455,     7,     7,   459,   459,
     453,   459,   459,   286,     5,     7,   408,   408,     5,   120,
     268,   449,   211,   303,   267,   456,   267,   267,   267,   262,
     262,     5,   261,   446,   262,   133,     7,    78,   139,   171,
     201,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   269,   303,   303,   454,   303,   333,
     262,   262,   269,   262,   309,   262,     5,     5,   303,     5,
       5,   459,     7,     7,   262,   307,   307,   390,   390,   390,
     286,   459,   459,   403,   262,   269,   269,   269,   269,   269,
     269,   262,   269,   269,   403,     7,     7,     7,     7,   269,
     403,     7,     7,     7,     7,     7,   269,     7,     7,   403,
       7,     7,     7,     7,     7,   403,   403,     7,     7,   418,
     262,   269,   269,   262,   262,   269,   269,   269,   269,   269,
     262,   262,   262,   269,   268,   269,   262,   269,   409,   262,
     267,   267,     5,   269,   456,   268,   456,   456,   456,     7,
     444,   460,   262,     7,   286,   455,   455,   267,     5,   245,
     246,   460,   453,   453,   455,   453,     5,   448,   448,   448,
     453,     5,   267,   453,   305,   267,   267,   267,   267,     3,
     264,   262,   262,   268,   262,    92,    93,    94,    95,    96,
      97,   268,   334,   262,   453,   268,     7,   268,   262,     7,
     384,   388,     7,     7,     7,     7,   268,     7,   455,   453,
     455,   453,   453,   459,     7,   459,   303,   268,   303,   268,
     303,   268,   268,   268,   267,   268,     7,   453,   303,     7,
       7,   453,   460,   460,   453,   453,     7,     7,     7,   460,
       7,   138,     7,   212,   216,   455,     7,   429,   429,   267,
     303,   268,   268,   268,   268,   269,   262,     7,   446,   303,
     460,   460,     6,   456,   453,   453,   453,   456,   292,     7,
       7,     7,     7,     5,   453,   453,   453,   453,   453,   267,
     268,   114,     7,   269,   269,    19,   262,   262,   269,   269,
     269,   269,   262,   269,   269,   262,   269,   419,   269,   262,
     269,   262,   262,   262,   269,   269,   268,   269,   460,   460,
     455,    84,    86,    89,   133,   268,   389,   430,   268,   453,
     269,   267,   267,   267,   267,   446,   262,   269,   268,   269,
     269,   269,   268,   269,     7,     7,     7,     7,     7,     7,
     453,     5,   307,   390,   267,     7,     7,   453,   453,   453,
     453,     7,   303,   453,   267,   453,    21,    89,    91,   102,
     115,   133,   268,   420,   303,     7,   303,     7,     7,     7,
     453,   453,     7,   303,   268,   269,     5,     5,     5,   286,
     261,   269,   303,   456,   456,   456,   456,   262,     7,   303,
     453,   453,   453,   453,   268,   297,   262,   262,   403,   262,
     262,   262,   269,   262,   269,   403,   262,     5,     5,   453,
     303,     5,   286,   262,   262,   269,   262,   262,   268,     7,
     453,     7,     7,     7,     7,   431,   453,   268,   268,   268,
     268,   268,     7,   269,   269,   269,   269,   262,     7,     7,
       7,   268,     7,     7,     7,   455,   267,   453,   268,   267,
       7,     7,     7,     7,     7,     7,     7,     7,   303,   267,
     267,     7,   268,   307,   268,   267,   267,   268,   267,   267,
     303,   453,   453,   453,     7,   350,   269,   403,   262,   403,
     262,   403,   403,     7,   262,   267,   455,   456,   267,   456,
     456,   268,   268,   268,   268,    65,   453,   268,   267,   268,
       7,   268,   268,     7,   453,   269,   268,   453,   268,   268,
     287,   459,   269,   403,     7,     7,   268,   455,   268,   268,
     268,   267,     7,   267,   298,   453,   268,   269,   267,   456,
     351,   268,   262,   455,   453,   268,   135,     7,   268,   269,
     268,     5,   453,   267,   298,   268,   453,     7,   269,   268,
     453,   269,   453,   268
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
#line 4325 "GetDP.y"
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
#line 4342 "GetDP.y"
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
#line 4361 "GetDP.y"
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
#line 4382 "GetDP.y"
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
#line 4396 "GetDP.y"
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
#line 4410 "GetDP.y"
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

  case 443:
#line 4452 "GetDP.y"
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

  case 444:
#line 4465 "GetDP.y"
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

  case 445:
#line 4479 "GetDP.y"
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

  case 446:
#line 4492 "GetDP.y"
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

  case 447:
#line 4504 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 449:
#line 4513 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 451:
#line 4522 "GetDP.y"
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

  case 452:
#line 4533 "GetDP.y"
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

  case 453:
#line 4545 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 454:
#line 4555 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 455:
#line 4563 "GetDP.y"
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

  case 456:
#line 4576 "GetDP.y"
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

  case 457:
#line 4589 "GetDP.y"
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

  case 458:
#line 4603 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 459:
#line 4613 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 460:
#line 4623 "GetDP.y"
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

  case 461:
#line 4637 "GetDP.y"
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

  case 462:
#line 4651 "GetDP.y"
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

  case 463:
#line 4670 "GetDP.y"
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

  case 464:
#line 4688 "GetDP.y"
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

  case 465:
#line 4699 "GetDP.y"
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

  case 466:
#line 4714 "GetDP.y"
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

  case 467:
#line 4729 "GetDP.y"
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

  case 468:
#line 4744 "GetDP.y"
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

  case 469:
#line 4759 "GetDP.y"
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

  case 470:
#line 4774 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 471:
#line 4785 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 472:
#line 4790 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 473:
#line 4800 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 475:
#line 4810 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 476:
#line 4813 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 477:
#line 4823 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 478:
#line 4839 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 480:
#line 4855 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 481:
#line 4859 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 482:
#line 4863 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 483:
#line 4867 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 484:
#line 4872 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 485:
#line 4883 "GetDP.y"
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

  case 487:
#line 4900 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 488:
#line 4904 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 489:
#line 4908 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 490:
#line 4912 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 491:
#line 4916 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 492:
#line 4921 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 493:
#line 4932 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 495:
#line 4947 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 496:
#line 4951 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 497:
#line 4955 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 498:
#line 4959 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 499:
#line 4963 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 500:
#line 4974 "GetDP.y"
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

  case 502:
#line 4992 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 503:
#line 4996 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 504:
#line 5000 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 505:
#line 5004 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 506:
#line 5009 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 507:
#line 5019 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 508:
#line 5025 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 509:
#line 5031 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 510:
#line 5041 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 511:
#line 5044 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 512:
#line 5049 "GetDP.y"
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

  case 514:
#line 5067 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 515:
#line 5077 "GetDP.y"
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

  case 516:
#line 5106 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 517:
#line 5109 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 518:
#line 5112 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 519:
#line 5120 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 520:
#line 5137 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 522:
#line 5149 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 524:
#line 5158 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 526:
#line 5171 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 527:
#line 5178 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 528:
#line 5186 "GetDP.y"
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

  case 529:
#line 5199 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 530:
#line 5204 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 531:
#line 5210 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 532:
#line 5213 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 533:
#line 5216 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 534:
#line 5222 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 536:
#line 5233 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 537:
#line 5236 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 538:
#line 5242 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 539:
#line 5247 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 540:
#line 5253 "GetDP.y"
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

  case 541:
#line 5265 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 542:
#line 5270 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 544:
#line 5284 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 545:
#line 5291 "GetDP.y"
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

  case 546:
#line 5319 "GetDP.y"
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

  case 547:
#line 5330 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 548:
#line 5335 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 549:
#line 5344 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 550:
#line 5361 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 552:
#line 5373 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 554:
#line 5380 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 556:
#line 5392 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 557:
#line 5399 "GetDP.y"
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

  case 558:
#line 5411 "GetDP.y"
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

  case 559:
#line 5422 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 560:
#line 5427 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 561:
#line 5433 "GetDP.y"
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

  case 562:
#line 5450 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 563:
#line 5460 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 564:
#line 5463 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 565:
#line 5467 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 566:
#line 5480 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 567:
#line 5485 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 568:
#line 5490 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 569:
#line 5499 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 570:
#line 5508 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 571:
#line 5517 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 5523 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 573:
#line 5528 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 574:
#line 5536 "GetDP.y"
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

  case 575:
#line 5548 "GetDP.y"
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

  case 576:
#line 5571 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 577:
#line 5572 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 578:
#line 5573 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 579:
#line 5574 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 580:
#line 5580 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 581:
#line 5582 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 582:
#line 5588 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 583:
#line 5594 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 584:
#line 5601 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 585:
#line 5610 "GetDP.y"
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

  case 586:
#line 5632 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 587:
#line 5640 "GetDP.y"
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

  case 588:
#line 5651 "GetDP.y"
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

  case 589:
#line 5665 "GetDP.y"
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

  case 590:
#line 5686 "GetDP.y"
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

  case 591:
#line 5713 "GetDP.y"
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

  case 592:
#line 5744 "GetDP.y"
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

  case 593:
#line 5764 "GetDP.y"
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

  case 595:
#line 5800 "GetDP.y"
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

  case 596:
#line 5814 "GetDP.y"
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

  case 597:
#line 5828 "GetDP.y"
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

  case 598:
#line 5842 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 599:
#line 5846 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 600:
#line 5850 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 601:
#line 5854 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 602:
#line 5858 "GetDP.y"
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

  case 603:
#line 5868 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 604:
#line 5873 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 605:
#line 5878 "GetDP.y"
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

  case 606:
#line 5898 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 607:
#line 5902 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 608:
#line 5909 "GetDP.y"
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

  case 609:
#line 5919 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 610:
#line 5928 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 611:
#line 5937 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 612:
#line 5944 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 613:
#line 5952 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 614:
#line 5956 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 615:
#line 5965 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 616:
#line 5969 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 617:
#line 5973 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 618:
#line 5981 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 619:
#line 5987 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 620:
#line 5991 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 621:
#line 5999 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 622:
#line 6006 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 623:
#line 6014 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 624:
#line 6021 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 625:
#line 6029 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 626:
#line 6036 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 627:
#line 6044 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 628:
#line 6048 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 629:
#line 6057 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 630:
#line 6063 "GetDP.y"
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

  case 631:
#line 6113 "GetDP.y"
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

  case 632:
#line 6128 "GetDP.y"
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

  case 633:
#line 6144 "GetDP.y"
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

  case 634:
#line 6164 "GetDP.y"
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

  case 635:
#line 6184 "GetDP.y"
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

  case 636:
#line 6222 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 637:
#line 6226 "GetDP.y"
    {
    ;}
    break;

  case 640:
#line 6242 "GetDP.y"
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

  case 641:
#line 6257 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 642:
#line 6263 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 643:
#line 6269 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 644:
#line 6275 "GetDP.y"
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

  case 645:
#line 6291 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 646:
#line 6296 "GetDP.y"
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

  case 647:
#line 6312 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 648:
#line 6317 "GetDP.y"
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

  case 649:
#line 6329 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6339 "GetDP.y"
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

  case 651:
#line 6353 "GetDP.y"
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

  case 653:
#line 6379 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 654:
#line 6385 "GetDP.y"
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

  case 655:
#line 6399 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 656:
#line 6405 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 657:
#line 6415 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 658:
#line 6416 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 659:
#line 6417 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 660:
#line 6418 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 661:
#line 6419 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 662:
#line 6420 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 663:
#line 6421 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 664:
#line 6422 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 665:
#line 6423 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 666:
#line 6424 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 667:
#line 6425 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 668:
#line 6426 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 669:
#line 6427 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 670:
#line 6428 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 671:
#line 6429 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 672:
#line 6430 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 673:
#line 6431 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 674:
#line 6432 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 675:
#line 6433 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 676:
#line 6434 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 677:
#line 6435 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 678:
#line 6439 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 679:
#line 6440 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 680:
#line 6441 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 681:
#line 6442 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 682:
#line 6443 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 683:
#line 6444 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 684:
#line 6445 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 685:
#line 6446 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 686:
#line 6447 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 687:
#line 6448 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 688:
#line 6449 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 689:
#line 6450 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 690:
#line 6451 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 691:
#line 6452 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 692:
#line 6453 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 693:
#line 6454 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 694:
#line 6455 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 695:
#line 6456 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 696:
#line 6457 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 697:
#line 6458 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 698:
#line 6459 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 699:
#line 6460 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 700:
#line 6461 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 701:
#line 6462 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 702:
#line 6463 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 703:
#line 6464 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 704:
#line 6465 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 705:
#line 6466 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 706:
#line 6467 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 707:
#line 6468 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 708:
#line 6469 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6470 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 710:
#line 6471 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6472 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 712:
#line 6473 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 713:
#line 6474 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 714:
#line 6475 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 715:
#line 6476 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 716:
#line 6478 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 717:
#line 6480 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 718:
#line 6482 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 719:
#line 6484 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 720:
#line 6489 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 721:
#line 6490 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 722:
#line 6491 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 723:
#line 6492 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 724:
#line 6493 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 725:
#line 6494 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 726:
#line 6495 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 727:
#line 6497 "GetDP.y"
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

  case 728:
#line 6515 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 729:
#line 6518 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 730:
#line 6524 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 731:
#line 6527 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 732:
#line 6534 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 733:
#line 6540 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 734:
#line 6543 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 735:
#line 6546 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 736:
#line 6558 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 737:
#line 6564 "GetDP.y"
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

  case 738:
#line 6575 "GetDP.y"
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

  case 739:
#line 6591 "GetDP.y"
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

  case 740:
#line 6613 "GetDP.y"
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

  case 741:
#line 6628 "GetDP.y"
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

  case 742:
#line 6666 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 743:
#line 6674 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 744:
#line 6686 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 745:
#line 6694 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 746:
#line 6708 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 747:
#line 6711 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 748:
#line 6718 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 749:
#line 6721 "GetDP.y"
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

  case 750:
#line 6736 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 751:
#line 6741 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 752:
#line 6746 "GetDP.y"
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

  case 753:
#line 6765 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 754:
#line 6775 "GetDP.y"
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

  case 755:
#line 6788 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;

  case 756:
#line 6800 "GetDP.y"
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
#line 12132 "GetDP.tab.c"
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


#line 6812 "GetDP.y"



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


