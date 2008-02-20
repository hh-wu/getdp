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
     tFor = 270,
     tEndFor = 271,
     tIf = 272,
     tElse = 273,
     tEndIf = 274,
     tFlag = 275,
     tHelp = 276,
     tCpu = 277,
     tCheck = 278,
     tInclude = 279,
     tConstant = 280,
     tList = 281,
     tListAlt = 282,
     tLinSpace = 283,
     tLogSpace = 284,
     tListFromFile = 285,
     tDefineConstant = 286,
     tPi = 287,
     t0D = 288,
     t1D = 289,
     t2D = 290,
     t3D = 291,
     tExp = 292,
     tLog = 293,
     tLog10 = 294,
     tSqrt = 295,
     tSin = 296,
     tAsin = 297,
     tCos = 298,
     tAcos = 299,
     tTan = 300,
     tAtan = 301,
     tAtan2 = 302,
     tSinh = 303,
     tCosh = 304,
     tTanh = 305,
     tFabs = 306,
     tFloor = 307,
     tCeil = 308,
     tFmod = 309,
     tModulo = 310,
     tHypot = 311,
     tSolidAngle = 312,
     tTrace = 313,
     tOrder = 314,
     tCrossProduct = 315,
     tDofValue = 316,
     tMHTransform = 317,
     tMHJacNL = 318,
     tGroup = 319,
     tDefineGroup = 320,
     tAll = 321,
     tInSupport = 322,
     tMovingBand2D = 323,
     tDefineFunction = 324,
     tConstraint = 325,
     tRegion = 326,
     tSubRegion = 327,
     tRegionRef = 328,
     tSubRegionRef = 329,
     tFilter = 330,
     tCoefficient = 331,
     tValue = 332,
     tTimeFunction = 333,
     tBranch = 334,
     tNode = 335,
     tLoop = 336,
     tNameOfResolution = 337,
     tJacobian = 338,
     tCase = 339,
     tIntegration = 340,
     tFMMIntegration = 341,
     tMatrix = 342,
     tType = 343,
     tSubType = 344,
     tCriterion = 345,
     tGeoElement = 346,
     tNumberOfPoints = 347,
     tMaxNumberOfPoints = 348,
     tNumberOfDivisions = 349,
     tMaxNumberOfDivisions = 350,
     tStoppingCriterion = 351,
     tFunctionSpace = 352,
     tName = 353,
     tBasisFunction = 354,
     tNameOfCoef = 355,
     tFunction = 356,
     tdFunction = 357,
     tSubFunction = 358,
     tSubdFunction = 359,
     tSupport = 360,
     tEntity = 361,
     tSubSpace = 362,
     tNameOfBasisFunction = 363,
     tGlobalQuantity = 364,
     tEntityType = 365,
     tEntitySubType = 366,
     tNameOfConstraint = 367,
     tFormulation = 368,
     tQuantity = 369,
     tNameOfSpace = 370,
     tIndexOfSystem = 371,
     tSymmetry = 372,
     tEquation = 373,
     tGalerkin = 374,
     tdeRham = 375,
     tGlobalTerm = 376,
     tGlobalEquation = 377,
     tDiscreteGeometry = 378,
     tDt = 379,
     tDtDof = 380,
     tDtDt = 381,
     tDtDtDof = 382,
     tJacNL = 383,
     tNeverDt = 384,
     tDtNL = 385,
     tAtAnteriorTimeStep = 386,
     tIn = 387,
     tFull_Matrix = 388,
     tResolution = 389,
     tDefineSystem = 390,
     tNameOfFormulation = 391,
     tNameOfMesh = 392,
     tFrequency = 393,
     tSolver = 394,
     tOriginSystem = 395,
     tDestinationSystem = 396,
     tOperation = 397,
     tOperationEnd = 398,
     tSetTime = 399,
     tDTime = 400,
     tSetFrequency = 401,
     tFourierTransform = 402,
     tFourierTransformJ = 403,
     tLanczos = 404,
     tEigenSolve = 405,
     tEigenSolveJac = 406,
     tPerturbation = 407,
     tUpdate = 408,
     tUpdateConstraint = 409,
     tBreak = 410,
     tEvaluate = 411,
     tTimeLoopTheta = 412,
     tTime0 = 413,
     tTimeMax = 414,
     tTheta = 415,
     tTimeLoopNewmark = 416,
     tBeta = 417,
     tGamma = 418,
     tIterativeLoop = 419,
     tNbrMaxIteration = 420,
     tRelaxationFactor = 421,
     tIterativeTimeReduction = 422,
     tDivisionCoefficient = 423,
     tChangeOfState = 424,
     tChangeOfCoordinates = 425,
     tChangeOfCoordinates2 = 426,
     tSystemCommand = 427,
     tGenerateFMMGroups = 428,
     tGenerateOnly = 429,
     tGenerateOnlyJac = 430,
     tSolveJac_AdaptRelax = 431,
     tSaveSolutionExtendedMH = 432,
     tSaveSolutionMHtoTime = 433,
     tInit_MovingBand2D = 434,
     tMesh_MovingBand2D = 435,
     tGenerate_MH_Moving = 436,
     tGenerate_MH_Moving_Separate = 437,
     tAdd_MH_Moving = 438,
     tGenerateGroup = 439,
     tGenerateJacGroup = 440,
     tSaveMesh = 441,
     tDeformeMesh = 442,
     tDummyFrequency = 443,
     tPostProcessing = 444,
     tNameOfSystem = 445,
     tPostOperation = 446,
     tNameOfPostProcessing = 447,
     tUsingPost = 448,
     tAppend = 449,
     tPlot = 450,
     tPrint = 451,
     tPrintGroup = 452,
     tEcho = 453,
     tWrite = 454,
     tAdapt = 455,
     tOnGlobal = 456,
     tOnRegion = 457,
     tOnElementsOf = 458,
     tOnGrid = 459,
     tOnSection = 460,
     tOnPoint = 461,
     tOnLine = 462,
     tOnPlane = 463,
     tOnBox = 464,
     tWithArgument = 465,
     tFile = 466,
     tDepth = 467,
     tDimension = 468,
     tComma = 469,
     tTimeStep = 470,
     tHarmonicToTime = 471,
     tFormat = 472,
     tHeader = 473,
     tFooter = 474,
     tSkin = 475,
     tSmoothing = 476,
     tTarget = 477,
     tSort = 478,
     tIso = 479,
     tNoNewLine = 480,
     tDecomposeInSimplex = 481,
     tChangeOfValues = 482,
     tTimeLegend = 483,
     tFrequencyLegend = 484,
     tEigenvalueLegend = 485,
     tEvaluationPoints = 486,
     tStore = 487,
     tLastTimeStepOnly = 488,
     tStr = 489,
     tDate = 490,
     tDEF = 491,
     tOR = 492,
     tAND = 493,
     tAPPROXEQUAL = 494,
     tNOTEQUAL = 495,
     tEQUAL = 496,
     tGREATERGREATER = 497,
     tLESSLESS = 498,
     tGREATEROREQUAL = 499,
     tLESSOREQUAL = 500,
     tCROSSPRODUCT = 501,
     UNARYPREC = 502,
     tSHOW = 503
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
#define tFor 270
#define tEndFor 271
#define tIf 272
#define tElse 273
#define tEndIf 274
#define tFlag 275
#define tHelp 276
#define tCpu 277
#define tCheck 278
#define tInclude 279
#define tConstant 280
#define tList 281
#define tListAlt 282
#define tLinSpace 283
#define tLogSpace 284
#define tListFromFile 285
#define tDefineConstant 286
#define tPi 287
#define t0D 288
#define t1D 289
#define t2D 290
#define t3D 291
#define tExp 292
#define tLog 293
#define tLog10 294
#define tSqrt 295
#define tSin 296
#define tAsin 297
#define tCos 298
#define tAcos 299
#define tTan 300
#define tAtan 301
#define tAtan2 302
#define tSinh 303
#define tCosh 304
#define tTanh 305
#define tFabs 306
#define tFloor 307
#define tCeil 308
#define tFmod 309
#define tModulo 310
#define tHypot 311
#define tSolidAngle 312
#define tTrace 313
#define tOrder 314
#define tCrossProduct 315
#define tDofValue 316
#define tMHTransform 317
#define tMHJacNL 318
#define tGroup 319
#define tDefineGroup 320
#define tAll 321
#define tInSupport 322
#define tMovingBand2D 323
#define tDefineFunction 324
#define tConstraint 325
#define tRegion 326
#define tSubRegion 327
#define tRegionRef 328
#define tSubRegionRef 329
#define tFilter 330
#define tCoefficient 331
#define tValue 332
#define tTimeFunction 333
#define tBranch 334
#define tNode 335
#define tLoop 336
#define tNameOfResolution 337
#define tJacobian 338
#define tCase 339
#define tIntegration 340
#define tFMMIntegration 341
#define tMatrix 342
#define tType 343
#define tSubType 344
#define tCriterion 345
#define tGeoElement 346
#define tNumberOfPoints 347
#define tMaxNumberOfPoints 348
#define tNumberOfDivisions 349
#define tMaxNumberOfDivisions 350
#define tStoppingCriterion 351
#define tFunctionSpace 352
#define tName 353
#define tBasisFunction 354
#define tNameOfCoef 355
#define tFunction 356
#define tdFunction 357
#define tSubFunction 358
#define tSubdFunction 359
#define tSupport 360
#define tEntity 361
#define tSubSpace 362
#define tNameOfBasisFunction 363
#define tGlobalQuantity 364
#define tEntityType 365
#define tEntitySubType 366
#define tNameOfConstraint 367
#define tFormulation 368
#define tQuantity 369
#define tNameOfSpace 370
#define tIndexOfSystem 371
#define tSymmetry 372
#define tEquation 373
#define tGalerkin 374
#define tdeRham 375
#define tGlobalTerm 376
#define tGlobalEquation 377
#define tDiscreteGeometry 378
#define tDt 379
#define tDtDof 380
#define tDtDt 381
#define tDtDtDof 382
#define tJacNL 383
#define tNeverDt 384
#define tDtNL 385
#define tAtAnteriorTimeStep 386
#define tIn 387
#define tFull_Matrix 388
#define tResolution 389
#define tDefineSystem 390
#define tNameOfFormulation 391
#define tNameOfMesh 392
#define tFrequency 393
#define tSolver 394
#define tOriginSystem 395
#define tDestinationSystem 396
#define tOperation 397
#define tOperationEnd 398
#define tSetTime 399
#define tDTime 400
#define tSetFrequency 401
#define tFourierTransform 402
#define tFourierTransformJ 403
#define tLanczos 404
#define tEigenSolve 405
#define tEigenSolveJac 406
#define tPerturbation 407
#define tUpdate 408
#define tUpdateConstraint 409
#define tBreak 410
#define tEvaluate 411
#define tTimeLoopTheta 412
#define tTime0 413
#define tTimeMax 414
#define tTheta 415
#define tTimeLoopNewmark 416
#define tBeta 417
#define tGamma 418
#define tIterativeLoop 419
#define tNbrMaxIteration 420
#define tRelaxationFactor 421
#define tIterativeTimeReduction 422
#define tDivisionCoefficient 423
#define tChangeOfState 424
#define tChangeOfCoordinates 425
#define tChangeOfCoordinates2 426
#define tSystemCommand 427
#define tGenerateFMMGroups 428
#define tGenerateOnly 429
#define tGenerateOnlyJac 430
#define tSolveJac_AdaptRelax 431
#define tSaveSolutionExtendedMH 432
#define tSaveSolutionMHtoTime 433
#define tInit_MovingBand2D 434
#define tMesh_MovingBand2D 435
#define tGenerate_MH_Moving 436
#define tGenerate_MH_Moving_Separate 437
#define tAdd_MH_Moving 438
#define tGenerateGroup 439
#define tGenerateJacGroup 440
#define tSaveMesh 441
#define tDeformeMesh 442
#define tDummyFrequency 443
#define tPostProcessing 444
#define tNameOfSystem 445
#define tPostOperation 446
#define tNameOfPostProcessing 447
#define tUsingPost 448
#define tAppend 449
#define tPlot 450
#define tPrint 451
#define tPrintGroup 452
#define tEcho 453
#define tWrite 454
#define tAdapt 455
#define tOnGlobal 456
#define tOnRegion 457
#define tOnElementsOf 458
#define tOnGrid 459
#define tOnSection 460
#define tOnPoint 461
#define tOnLine 462
#define tOnPlane 463
#define tOnBox 464
#define tWithArgument 465
#define tFile 466
#define tDepth 467
#define tDimension 468
#define tComma 469
#define tTimeStep 470
#define tHarmonicToTime 471
#define tFormat 472
#define tHeader 473
#define tFooter 474
#define tSkin 475
#define tSmoothing 476
#define tTarget 477
#define tSort 478
#define tIso 479
#define tNoNewLine 480
#define tDecomposeInSimplex 481
#define tChangeOfValues 482
#define tTimeLegend 483
#define tFrequencyLegend 484
#define tEigenvalueLegend 485
#define tEvaluationPoints 486
#define tStore 487
#define tLastTimeStepOnly 488
#define tStr 489
#define tDate 490
#define tDEF 491
#define tOR 492
#define tAND 493
#define tAPPROXEQUAL 494
#define tNOTEQUAL 495
#define tEQUAL 496
#define tGREATERGREATER 497
#define tLESSLESS 498
#define tGREATEROREQUAL 499
#define tLESSOREQUAL 500
#define tCROSSPRODUCT 501
#define UNARYPREC 502
#define tSHOW 503




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.119 2008-02-20 08:59:04 dular Exp $ */
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
#line 781 "GetDP.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 794 "GetDP.tab.c"

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
#define YYLAST   7634

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  271
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  752
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2056

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   503

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   255,     2,   263,   264,   253,     2,     2,
     258,   259,   251,   249,   268,   250,   262,   252,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     243,     2,   244,   237,   269,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   260,     2,   261,   257,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   266,     2,   267,   270,     2,     2,     2,
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
     235,   236,   238,   239,   240,   241,   242,   245,   246,   247,
     248,   254,   256,   265
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
     611,   613,   617,   620,   624,   626,   630,   631,   635,   642,
     643,   648,   649,   652,   656,   661,   662,   667,   668,   671,
     675,   679,   684,   685,   690,   691,   694,   698,   702,   707,
     708,   713,   714,   717,   721,   725,   730,   731,   736,   737,
     740,   744,   748,   752,   756,   760,   764,   765,   768,   772,
     774,   775,   778,   782,   787,   791,   796,   802,   803,   808,
     811,   812,   815,   819,   823,   827,   831,   835,   839,   847,
     851,   855,   859,   863,   867,   875,   883,   891,   892,   895,
     899,   901,   902,   905,   908,   912,   917,   921,   926,   931,
     936,   941,   942,   947,   950,   951,   954,   958,   962,   967,
     972,   980,   984,   988,   992,   996,   997,   998,   999,  1018,
    1019,  1024,  1025,  1028,  1032,  1036,  1040,  1042,  1046,  1047,
    1051,  1053,  1057,  1058,  1062,  1063,  1068,  1071,  1072,  1075,
    1079,  1083,  1087,  1088,  1093,  1096,  1097,  1100,  1104,  1108,
    1112,  1116,  1117,  1120,  1124,  1126,  1127,  1130,  1134,  1139,
    1143,  1148,  1153,  1154,  1159,  1162,  1163,  1166,  1170,  1174,
    1178,  1182,  1186,  1187,  1193,  1197,  1198,  1204,  1208,  1212,
    1216,  1220,  1224,  1225,  1229,  1230,  1233,  1236,  1241,  1246,
    1251,  1256,  1257,  1260,  1264,  1268,  1272,  1273,  1276,  1280,
    1284,  1288,  1292,  1293,  1296,  1297,  1298,  1308,  1312,  1316,
    1320,  1323,  1327,  1333,  1334,  1337,  1341,  1342,  1343,  1353,
    1354,  1356,  1358,  1360,  1362,  1364,  1366,  1368,  1373,  1377,
    1378,  1381,  1385,  1387,  1388,  1391,  1395,  1400,  1405,  1406,
    1412,  1414,  1415,  1420,  1423,  1424,  1427,  1431,  1435,  1439,
    1443,  1447,  1451,  1455,  1459,  1461,  1463,  1467,  1468,  1472,
    1474,  1478,  1479,  1483,  1484,  1487,  1491,  1495,  1500,  1505,
    1510,  1515,  1521,  1527,  1530,  1538,  1550,  1558,  1572,  1584,
    1594,  1602,  1610,  1618,  1628,  1638,  1648,  1660,  1672,  1684,
    1690,  1708,  1722,  1738,  1750,  1764,  1765,  1773,  1774,  1782,
    1790,  1802,  1808,  1814,  1824,  1834,  1844,  1850,  1856,  1868,
    1878,  1893,  1908,  1916,  1929,  1940,  1948,  1956,  1964,  1966,
    1968,  1970,  1971,  1974,  1978,  1982,  1985,  1986,  1989,  1993,
    1997,  2001,  2005,  2010,  2011,  2014,  2018,  2022,  2026,  2030,
    2034,  2039,  2040,  2043,  2047,  2051,  2055,  2059,  2064,  2065,
    2068,  2072,  2076,  2080,  2084,  2088,  2093,  2098,  2103,  2104,
    2109,  2110,  2113,  2117,  2121,  2125,  2129,  2133,  2137,  2138,
    2141,  2145,  2147,  2148,  2151,  2155,  2160,  2164,  2168,  2173,
    2174,  2179,  2182,  2183,  2186,  2190,  2195,  2196,  2202,  2208,
    2211,  2212,  2215,  2216,  2223,  2227,  2231,  2235,  2239,  2240,
    2243,  2247,  2249,  2250,  2253,  2257,  2261,  2265,  2269,  2274,
    2275,  2284,  2285,  2286,  2290,  2298,  2306,  2315,  2327,  2334,
    2335,  2346,  2348,  2352,  2359,  2361,  2363,  2365,  2367,  2368,
    2372,  2374,  2377,  2380,  2393,  2396,  2412,  2417,  2430,  2448,
    2471,  2484,  2485,  2488,  2492,  2497,  2502,  2506,  2509,  2512,
    2516,  2520,  2524,  2528,  2532,  2535,  2539,  2543,  2547,  2551,
    2555,  2559,  2563,  2569,  2572,  2575,  2579,  2589,  2593,  2596,
    2606,  2609,  2619,  2622,  2632,  2638,  2642,  2645,  2646,  2649,
    2656,  2665,  2674,  2685,  2687,  2692,  2694,  2696,  2702,  2707,
    2712,  2720,  2725,  2733,  2739,  2743,  2747,  2755,  2761,  2770,
    2773,  2774,  2778,  2785,  2791,  2797,  2799,  2801,  2803,  2805,
    2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,
    2827,  2829,  2831,  2833,  2835,  2837,  2839,  2841,  2845,  2848,
    2851,  2855,  2859,  2863,  2867,  2871,  2875,  2879,  2883,  2887,
    2891,  2895,  2899,  2903,  2907,  2912,  2917,  2922,  2927,  2932,
    2937,  2942,  2947,  2952,  2957,  2964,  2969,  2974,  2979,  2984,
    2989,  2994,  3001,  3008,  3015,  3021,  3023,  3026,  3028,  3030,
    3032,  3034,  3036,  3038,  3040,  3042,  3043,  3045,  3047,  3051,
    3053,  3055,  3059,  3063,  3067,  3073,  3077,  3082,  3087,  3094,
    3103,  3112,  3118,  3124,  3126,  3128,  3130,  3132,  3134,  3139,
    3146,  3148,  3155
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     272,     0,    -1,    -1,   273,   274,    -1,    -1,    -1,   274,
     275,   276,    -1,    64,   266,   278,   267,    -1,   101,   266,
     299,   267,    -1,    70,   266,   334,   267,    -1,    83,   266,
     319,   267,    -1,    85,   266,   325,   267,    -1,    97,   266,
     341,   267,    -1,   113,   266,   364,   267,    -1,   134,   266,
     390,   267,    -1,   189,   266,   420,   267,    -1,   191,   266,
     431,   267,    -1,   435,    -1,   448,    -1,    24,   459,    -1,
     277,    -1,    21,     7,    -1,    21,   196,     7,    -1,    21,
      23,     7,    -1,    21,    38,     7,    -1,    21,    22,     7,
      -1,    21,    21,     7,    -1,    21,     5,     7,    -1,    22,
       7,    -1,    23,     7,    -1,    23,    64,     7,    -1,    23,
     101,     7,    -1,    23,    70,     7,    -1,    23,    83,     7,
      -1,    23,    85,     7,    -1,    23,    97,     7,    -1,    23,
     113,     7,    -1,    23,   134,     7,    -1,    23,   189,     7,
      -1,    23,   191,     7,    -1,    23,     3,     7,    -1,    -1,
     278,   279,    -1,   458,   236,   283,     7,    -1,     5,   298,
     236,   283,     7,    -1,     5,   296,   236,   283,     7,    -1,
      65,   260,   294,   261,     7,    -1,   280,    -1,   458,   249,
     236,   283,     7,    -1,   448,    -1,    -1,    -1,   458,   260,
     452,   261,   236,    68,   281,   260,   263,   291,   282,   268,
     263,   291,   268,   452,   261,     7,    -1,    -1,   287,   260,
     288,   284,   289,   261,    -1,   263,   291,    -1,   283,    -1,
     458,    -1,   458,   297,    -1,    71,    -1,     5,    -1,   291,
      -1,    66,    -1,    -1,   295,   290,   291,    -1,   295,    67,
     458,    -1,     5,    -1,   293,    -1,   266,   292,   267,    -1,
      -1,   292,   295,   293,    -1,   292,   295,   250,   293,    -1,
       3,    -1,   258,   452,   259,    -1,   269,   455,   269,    -1,
       3,     8,   452,    -1,   258,   452,   259,     8,   452,    -1,
       3,     8,   452,     8,   452,    -1,   258,   452,   259,     8,
     452,     8,   452,    -1,   458,    -1,    -1,   294,   295,   458,
      -1,   294,   295,   458,   236,   266,   267,    -1,   294,   295,
     458,   266,   452,   267,    -1,   294,   295,   458,   266,   452,
     267,   236,   266,   267,    -1,    -1,   268,    -1,   266,   263,
     452,   267,    -1,    -1,   266,   267,    -1,   266,   452,   267,
      -1,    -1,   299,   300,    -1,    69,   260,   301,   261,     7,
      -1,   458,   260,   261,   236,   302,     7,    -1,   458,   260,
     285,   261,   236,   302,     7,    -1,   448,    -1,    -1,   301,
     295,     5,    -1,   301,   295,     5,   266,   452,   267,    -1,
      25,   260,   452,   261,    -1,   101,   260,     5,   261,    -1,
      -1,   303,   306,    -1,   251,   251,   251,    -1,    -1,   266,
     305,   267,    -1,   302,    -1,   305,   268,   302,    -1,    -1,
     307,   308,    -1,   311,    -1,    -1,    -1,   308,   237,   309,
     308,     8,   310,   308,    -1,   308,   251,   308,    -1,   308,
     254,   308,    -1,    60,   260,   308,   268,   308,   261,    -1,
     308,   252,   308,    -1,   308,   249,   308,    -1,   308,   250,
     308,    -1,   308,   253,   308,    -1,   308,   257,   308,    -1,
     308,   243,   308,    -1,   308,   244,   308,    -1,   308,   248,
     308,    -1,   308,   247,   308,    -1,   308,   242,   308,    -1,
     308,   241,   308,    -1,   308,   240,   308,    -1,   308,   239,
     308,    -1,   308,   238,   308,    -1,   250,   308,    -1,   249,
     308,    -1,   255,   308,    -1,   258,   308,   259,    -1,   453,
      -1,   451,   316,   318,    -1,     5,   389,    -1,   389,    -1,
     389,   316,    -1,    -1,   124,   312,   260,   306,   261,    -1,
      -1,   131,   313,   260,   306,   268,     3,   261,    -1,    -1,
      62,   260,     5,   260,   314,   306,   261,   261,   266,   452,
     267,    -1,    63,   260,     5,   261,   266,   452,   268,   452,
     267,    -1,    57,   260,   389,   261,    -1,    59,   260,   389,
     261,    -1,    -1,    58,   315,   260,   306,   268,   285,   261,
      -1,   243,     5,   244,   260,   306,   261,    -1,   264,     5,
      -1,   264,   215,    -1,   264,   145,    -1,   264,     3,    -1,
     311,   263,     3,    -1,   263,     3,    -1,   311,   265,   452,
      -1,   461,    -1,   260,   262,   261,    -1,   260,   261,    -1,
     260,   317,   261,    -1,   308,    -1,   317,   268,   308,    -1,
      -1,   266,   455,   267,    -1,   266,    71,   260,   285,   261,
     267,    -1,    -1,   319,   266,   320,   267,    -1,    -1,   320,
     321,    -1,    98,     5,     7,    -1,    84,   266,   322,   267,
      -1,    -1,   322,   266,   323,   267,    -1,    -1,   323,   324,
      -1,    71,   285,     7,    -1,    71,    66,     7,    -1,    83,
       5,   318,     7,    -1,    -1,   325,   266,   326,   267,    -1,
      -1,   326,   327,    -1,    98,     5,     7,    -1,    90,   302,
       7,    -1,    84,   266,   328,   267,    -1,    -1,   328,   266,
     329,   267,    -1,    -1,   329,   330,    -1,    88,     5,     7,
      -1,    89,     5,     7,    -1,    84,   266,   331,   267,    -1,
      -1,   331,   266,   332,   267,    -1,    -1,   332,   333,    -1,
      91,     5,     7,    -1,    92,   452,     7,    -1,    93,   452,
       7,    -1,    94,   452,     7,    -1,    95,   452,     7,    -1,
      96,   452,     7,    -1,    -1,   334,   335,    -1,   266,   336,
     267,    -1,   448,    -1,    -1,   336,   337,    -1,    98,   458,
       7,    -1,    98,     5,   296,     7,    -1,    88,     5,     7,
      -1,    84,   266,   338,   267,    -1,    84,     5,   266,   338,
     267,    -1,    -1,   338,   266,   339,   267,    -1,   338,   448,
      -1,    -1,   339,   340,    -1,    88,     5,     7,    -1,    71,
     285,     7,    -1,    72,   285,     7,    -1,    78,   302,     7,
      -1,    77,   302,     7,    -1,    82,   458,     7,    -1,    79,
     266,   453,   295,   453,   267,     7,    -1,    73,   285,     7,
      -1,    74,   285,     7,    -1,   101,   302,     7,    -1,    76,
     302,     7,    -1,    75,   302,     7,    -1,   101,   260,   302,
     268,   302,   261,     7,    -1,    76,   260,   302,   268,   302,
     261,     7,    -1,    75,   260,   302,   268,   302,   261,     7,
      -1,    -1,   341,   342,    -1,   266,   343,   267,    -1,   448,
      -1,    -1,   343,   344,    -1,   343,   448,    -1,    98,   458,
       7,    -1,    98,     5,   296,     7,    -1,    88,     5,     7,
      -1,    99,   266,   345,   267,    -1,   107,   266,   351,   267,
      -1,   109,   266,   358,   267,    -1,    70,   266,   361,   267,
      -1,    -1,   345,   266,   346,   267,    -1,   345,   448,    -1,
      -1,   346,   347,    -1,    98,     5,     7,    -1,   100,     5,
       7,    -1,   100,     5,   296,     7,    -1,   101,     5,   348,
       7,    -1,   102,   266,     5,   295,     5,   267,     7,    -1,
     103,   304,     7,    -1,   104,   304,     7,    -1,   105,   285,
       7,    -1,   106,   285,     7,    -1,    -1,    -1,    -1,   266,
     114,     5,     7,   113,     5,   296,     7,   349,    64,   286,
       7,   350,   134,     5,   297,     7,   267,    -1,    -1,   351,
     266,   352,   267,    -1,    -1,   352,   353,    -1,    98,     5,
       7,    -1,   108,   354,     7,    -1,   100,   356,     7,    -1,
       5,    -1,   266,   355,   267,    -1,    -1,   355,   295,     5,
      -1,     5,    -1,   266,   357,   267,    -1,    -1,   357,   295,
       5,    -1,    -1,   358,   266,   359,   267,    -1,   358,   448,
      -1,    -1,   359,   360,    -1,    98,   458,     7,    -1,    88,
       5,     7,    -1,   100,     5,     7,    -1,    -1,   361,   266,
     362,   267,    -1,   361,   448,    -1,    -1,   362,   363,    -1,
     100,     5,     7,    -1,   110,   287,     7,    -1,   111,   290,
       7,    -1,   112,   458,     7,    -1,    -1,   364,   365,    -1,
     266,   366,   267,    -1,   448,    -1,    -1,   366,   367,    -1,
      98,   458,     7,    -1,    98,     5,   296,     7,    -1,    88,
       5,     7,    -1,   114,   266,   368,   267,    -1,   118,   266,
     374,   267,    -1,    -1,   368,   266,   369,   267,    -1,   368,
     448,    -1,    -1,   369,   370,    -1,    98,   458,     7,    -1,
      88,   109,     7,    -1,    88,   119,     7,    -1,    88,     5,
       7,    -1,   188,   454,     7,    -1,    -1,   115,   458,   371,
     373,     7,    -1,   116,   452,     7,    -1,    -1,   260,   372,
     306,   261,     7,    -1,   132,   285,     7,    -1,    85,     5,
       7,    -1,    86,     5,     7,    -1,    83,     5,     7,    -1,
     117,     3,     7,    -1,    -1,   260,   458,   261,    -1,    -1,
     374,   375,    -1,   374,   448,    -1,   119,   266,   380,   267,
      -1,   120,   266,   380,   267,    -1,   121,   266,   384,   267,
      -1,   122,   266,   376,   267,    -1,    -1,   376,   377,    -1,
      88,     5,     7,    -1,   112,     5,     7,    -1,   266,   378,
     267,    -1,    -1,   378,   379,    -1,    80,   389,     7,    -1,
      81,   389,     7,    -1,   118,   389,     7,    -1,   132,   285,
       7,    -1,    -1,   380,   381,    -1,    -1,    -1,   388,   260,
     382,   306,   383,   268,   306,   261,     7,    -1,   132,   285,
       7,    -1,    83,     5,     7,    -1,    85,     5,     7,    -1,
     133,     7,    -1,    86,     5,     7,    -1,    87,   260,     3,
     261,     7,    -1,    -1,   384,   385,    -1,   132,   285,     7,
      -1,    -1,    -1,   388,   260,   386,   306,   387,   268,   389,
     261,     7,    -1,    -1,   124,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   266,     5,
     458,   267,    -1,   266,   458,   267,    -1,    -1,   390,   391,
      -1,   266,   392,   267,    -1,   448,    -1,    -1,   392,   393,
      -1,    98,   458,     7,    -1,    98,     5,   296,     7,    -1,
     135,   266,   395,   267,    -1,    -1,   142,   394,   266,   402,
     267,    -1,   448,    -1,    -1,   395,   266,   396,   267,    -1,
     395,   448,    -1,    -1,   396,   397,    -1,    98,   458,     7,
      -1,    88,     5,     7,    -1,   136,   398,     7,    -1,   137,
     459,     7,    -1,   140,   400,     7,    -1,   141,   458,     7,
      -1,   138,   454,     7,    -1,   139,   459,     7,    -1,   448,
      -1,   458,    -1,   266,   399,   267,    -1,    -1,   399,   295,
     458,    -1,   458,    -1,   266,   401,   267,    -1,    -1,   401,
     295,   458,    -1,    -1,   402,   403,    -1,     5,   458,     7,
      -1,   144,   302,     7,    -1,   157,   266,   409,   267,    -1,
     161,   266,   411,   267,    -1,   164,   266,   413,   267,    -1,
     167,   266,   415,   267,    -1,     5,   260,   458,   261,     7,
      -1,   144,   260,   302,   261,     7,    -1,   155,     7,    -1,
      17,   260,   302,   261,   266,   402,   267,    -1,    17,   260,
     302,   261,   266,   402,   267,    18,   266,   402,   267,    -1,
     146,   260,   458,   268,   302,   261,     7,    -1,   173,   260,
     458,   268,   302,   268,   302,   268,   302,   268,   302,   261,
       7,    -1,   173,   260,   458,   268,   302,   268,   302,   268,
     302,   261,     7,    -1,   173,   260,   458,   268,   302,   268,
     302,   261,     7,    -1,   174,   260,   458,   268,   454,   261,
       7,    -1,   175,   260,   458,   268,   454,   261,     7,    -1,
     153,   260,   458,   268,   302,   261,     7,    -1,   154,   260,
     458,   268,   285,   268,   458,   261,     7,    -1,   147,   260,
     458,   268,   458,   268,   454,   261,     7,    -1,   148,   260,
     458,   268,   458,   268,   452,   261,     7,    -1,   149,   260,
     458,   268,   452,   268,   454,   268,   452,   261,     7,    -1,
     150,   260,   458,   268,   452,   268,   452,   268,   452,   261,
       7,    -1,   151,   260,   458,   268,   452,   268,   452,   268,
     452,   261,     7,    -1,   156,   260,   302,   261,     7,    -1,
     152,   260,   458,   268,   458,   268,   458,   268,   452,   268,
     454,   268,   452,   268,   452,   261,     7,    -1,   157,   260,
     452,   268,   452,   268,   302,   268,   302,   261,   266,   402,
     267,    -1,   161,   260,   452,   268,   452,   268,   302,   268,
     452,   268,   452,   261,   266,   402,   267,    -1,   164,   260,
     452,   268,   452,   268,   302,   261,   266,   402,   267,    -1,
     164,   260,   452,   268,   452,   268,   302,   268,   452,   261,
     266,   402,   267,    -1,    -1,   196,   404,   260,   406,   407,
     261,     7,    -1,    -1,   199,   405,   260,   406,   407,   261,
       7,    -1,   170,   260,   285,   268,   302,   261,     7,    -1,
     170,   260,   285,   268,   302,   268,   452,   268,   302,   261,
       7,    -1,   191,   260,   458,   261,     7,    -1,   172,   260,
     459,   261,     7,    -1,   176,   260,   458,   268,   454,   268,
     452,   261,     7,    -1,   177,   260,   458,   268,   452,   268,
     459,   261,     7,    -1,   178,   260,   458,   268,   454,   268,
     459,   261,     7,    -1,   179,   266,   458,   267,     7,    -1,
     180,   266,   458,   267,     7,    -1,   186,   266,   458,   268,
     285,   268,   459,   268,   302,   267,     7,    -1,   186,   266,
     458,   268,   285,   268,   459,   267,     7,    -1,   181,   260,
     458,   268,   458,   268,   452,   268,   452,   261,   266,   402,
     267,     7,    -1,   182,   260,   458,   268,   458,   268,   452,
     268,   452,   261,   266,   402,   267,     7,    -1,   183,   260,
     458,   268,   452,   261,     7,    -1,   187,   266,     5,   268,
       5,   268,   137,   459,   268,   452,   267,     7,    -1,   187,
     266,     5,   268,     5,   268,   137,   459,   267,     7,    -1,
     187,   266,     5,   268,     5,   267,     7,    -1,   184,   260,
     458,   268,   458,   261,     7,    -1,   185,   260,   458,   268,
     458,   261,     7,    -1,   448,    -1,   304,    -1,   458,    -1,
      -1,   407,   408,    -1,   268,   211,   459,    -1,   268,   215,
     454,    -1,   268,   454,    -1,    -1,   409,   410,    -1,   158,
     452,     7,    -1,   159,   452,     7,    -1,   145,   302,     7,
      -1,   160,   302,     7,    -1,   142,   266,   402,   267,    -1,
      -1,   411,   412,    -1,   158,   452,     7,    -1,   159,   452,
       7,    -1,   145,   302,     7,    -1,   162,   452,     7,    -1,
     163,   452,     7,    -1,   142,   266,   402,   267,    -1,    -1,
     413,   414,    -1,   165,   452,     7,    -1,    90,   452,     7,
      -1,   166,   302,     7,    -1,    20,   452,     7,    -1,   142,
     266,   402,   267,    -1,    -1,   415,   416,    -1,   165,   452,
       7,    -1,   168,   452,     7,    -1,    90,   452,     7,    -1,
      20,   452,     7,    -1,   135,   458,     7,    -1,   169,   266,
     417,   267,    -1,   142,   266,   402,   267,    -1,   143,   266,
     402,   267,    -1,    -1,   417,   266,   418,   267,    -1,    -1,
     418,   419,    -1,    88,     5,     7,    -1,   114,     5,     7,
      -1,   132,   285,     7,    -1,    90,   452,     7,    -1,   101,
     302,     7,    -1,    20,     5,     7,    -1,    -1,   420,   421,
      -1,   266,   422,   267,    -1,   448,    -1,    -1,   422,   423,
      -1,    98,   458,     7,    -1,    98,     5,   296,     7,    -1,
     136,   458,     7,    -1,   190,   458,     7,    -1,   114,   266,
     424,   267,    -1,    -1,   424,   266,   425,   267,    -1,   424,
     448,    -1,    -1,   425,   426,    -1,    98,   458,     7,    -1,
      77,   266,   427,   267,    -1,    -1,   427,   119,   266,   428,
     267,    -1,   427,     5,   266,   428,   267,    -1,   427,   448,
      -1,    -1,   428,   429,    -1,    -1,   388,   260,   430,   306,
     261,     7,    -1,    88,     5,     7,    -1,   132,   285,     7,
      -1,    83,     5,     7,    -1,    85,     5,     7,    -1,    -1,
     431,   432,    -1,   266,   433,   267,    -1,   448,    -1,    -1,
     433,   434,    -1,    98,   458,     7,    -1,   192,   458,     7,
      -1,   217,     5,     7,    -1,   194,   459,     7,    -1,   142,
     266,   437,   267,    -1,    -1,   191,   458,   193,   458,   436,
     266,   437,   267,    -1,    -1,    -1,   437,   438,   439,    -1,
     195,   260,   441,   444,   445,   261,     7,    -1,   196,   260,
     441,   444,   445,   261,     7,    -1,   196,   260,     6,   268,
     302,   445,   261,     7,    -1,   196,   260,     6,   268,   234,
     260,   459,   261,   445,   261,     7,    -1,   198,   260,     6,
     445,   261,     7,    -1,    -1,   197,   260,   285,   440,   268,
     132,   285,   445,   261,     7,    -1,   448,    -1,   458,   443,
     268,    -1,   458,   443,   442,     5,   443,   268,    -1,   251,
      -1,   252,    -1,   249,    -1,   250,    -1,    -1,   260,   285,
     261,    -1,   201,    -1,   202,   285,    -1,   203,   285,    -1,
     205,   266,   266,   455,   267,   266,   455,   267,   266,   455,
     267,   267,    -1,   204,   285,    -1,   204,   266,   302,   268,
     302,   268,   302,   267,   266,   454,   268,   454,   268,   454,
     267,    -1,   206,   266,   455,   267,    -1,   207,   266,   266,
     455,   267,   266,   455,   267,   267,   266,   452,   267,    -1,
     208,   266,   266,   455,   267,   266,   455,   267,   266,   455,
     267,   267,   266,   452,   268,   452,   267,    -1,   209,   266,
     266,   455,   267,   266,   455,   267,   266,   455,   267,   266,
     455,   267,   267,   266,   452,   268,   452,   268,   452,   267,
      -1,   202,   285,   210,     5,   266,   452,   268,   452,   267,
     266,   452,   267,    -1,    -1,   445,   446,    -1,   268,   211,
     459,    -1,   268,   211,   244,   459,    -1,   268,   211,   245,
     459,    -1,   268,   212,   452,    -1,   268,   220,    -1,   268,
     221,    -1,   268,   216,   452,    -1,   268,   217,     5,    -1,
     268,   218,   447,    -1,   268,   219,   447,    -1,   268,   217,
     447,    -1,   268,   214,    -1,   268,   213,   452,    -1,   268,
     215,   454,    -1,   268,   200,     5,    -1,   268,   223,     5,
      -1,   268,   222,   452,    -1,   268,    77,   454,    -1,   268,
     224,   452,    -1,   268,   224,   266,   455,   267,    -1,   268,
     225,    -1,   268,   226,    -1,   268,   138,   454,    -1,   268,
     170,   266,   302,   268,   302,   268,   302,   267,    -1,   268,
     227,   304,    -1,   268,   228,    -1,   268,   228,   266,   452,
     268,   452,   268,   452,   267,    -1,   268,   229,    -1,   268,
     229,   266,   452,   268,   452,   268,   452,   267,    -1,   268,
     230,    -1,   268,   230,   266,   452,   268,   452,   268,   452,
     267,    -1,   268,   231,   266,   455,   267,    -1,   268,   232,
       3,    -1,   268,   233,    -1,    -1,   447,     6,    -1,    15,
     258,   452,     8,   452,   259,    -1,    15,   258,   452,     8,
     452,     8,   452,   259,    -1,    15,     5,   132,   266,   452,
       8,   452,   267,    -1,    15,     5,   132,   266,   452,     8,
     452,     8,   452,   267,    -1,    16,    -1,    17,   258,   452,
     259,    -1,    19,    -1,   449,    -1,    31,   260,   450,   261,
       7,    -1,   458,   236,   454,     7,    -1,   458,   236,     6,
       7,    -1,   458,   236,   234,   260,   459,   261,     7,    -1,
     458,   236,   460,     7,    -1,   458,   236,    30,   260,   459,
     261,     7,    -1,    11,   258,     6,   259,     7,    -1,    11,
     458,     7,    -1,    11,   263,     7,    -1,    11,   258,     6,
     268,   455,   259,     7,    -1,    12,   258,   458,   259,     7,
      -1,    12,   258,   458,   259,   260,   452,   261,     7,    -1,
      13,     7,    -1,    -1,   450,   295,   458,    -1,   450,   295,
     458,   266,   452,   267,    -1,   450,   295,   458,   236,   452,
      -1,   450,   295,   458,   236,     6,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,   458,    -1,   453,
      -1,   258,   452,   259,    -1,   250,   452,    -1,   255,   452,
      -1,   452,   250,   452,    -1,   452,   249,   452,    -1,   452,
     251,   452,    -1,   452,   252,   452,    -1,   452,   253,   452,
      -1,   452,   257,   452,    -1,   452,   243,   452,    -1,   452,
     244,   452,    -1,   452,   248,   452,    -1,   452,   247,   452,
      -1,   452,   242,   452,    -1,   452,   241,   452,    -1,   452,
     239,   452,    -1,   452,   238,   452,    -1,    37,   260,   452,
     261,    -1,    38,   260,   452,   261,    -1,    39,   260,   452,
     261,    -1,    40,   260,   452,   261,    -1,    41,   260,   452,
     261,    -1,    42,   260,   452,   261,    -1,    43,   260,   452,
     261,    -1,    44,   260,   452,   261,    -1,    45,   260,   452,
     261,    -1,    46,   260,   452,   261,    -1,    47,   260,   452,
     268,   452,   261,    -1,    48,   260,   452,   261,    -1,    49,
     260,   452,   261,    -1,    50,   260,   452,   261,    -1,    51,
     260,   452,   261,    -1,    52,   260,   452,   261,    -1,    53,
     260,   452,   261,    -1,    54,   260,   452,   268,   452,   261,
      -1,    55,   260,   452,   268,   452,   261,    -1,    56,   260,
     452,   268,   452,   261,    -1,   452,   237,   452,     8,   452,
      -1,   461,    -1,   452,   263,    -1,     4,    -1,     3,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
     458,    -1,    -1,   452,    -1,   456,    -1,   266,   455,   267,
      -1,   452,    -1,   456,    -1,   455,   268,   452,    -1,   455,
     268,   456,    -1,   452,     8,   452,    -1,   452,     8,   452,
       8,   452,    -1,     5,   266,   267,    -1,     5,   266,   455,
     267,    -1,    26,   260,     5,   261,    -1,    27,   260,     5,
     268,     5,   261,    -1,    28,   260,   452,   268,   452,   268,
     452,   261,    -1,    29,   260,   452,   268,   452,   268,   452,
     261,    -1,     5,   270,   266,   452,   267,    -1,   457,   270,
     266,   452,   267,    -1,     5,    -1,   457,    -1,     6,    -1,
     458,    -1,   460,    -1,    10,   258,   459,   259,    -1,    10,
     258,   459,   268,   455,   259,    -1,   235,    -1,     9,   260,
     459,   268,   459,   261,    -1,    14,   260,   459,   268,   459,
     261,    -1
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
    1568,  1578,  1579,  1580,  1585,  1586,  1592,  1594,  1597,  1613,
    1617,  1625,  1627,  1633,  1638,  1646,  1648,  1656,  1659,  1665,
    1668,  1671,  1710,  1715,  1723,  1729,  1735,  1742,  1745,  1753,
    1755,  1763,  1768,  1774,  1784,  1794,  1802,  1804,  1812,  1821,
    1827,  1875,  1878,  1881,  1884,  1887,  1899,  1903,  1908,  1913,
    1919,  1925,  1931,  1938,  1946,  1955,  1958,  1977,  1981,  1986,
    1996,  2003,  2009,  2019,  2024,  2030,  2035,  2043,  2051,  2060,
    2078,  2087,  2095,  2103,  2113,  2123,  2133,  2154,  2159,  2164,
    2169,  2176,  2181,  2183,  2189,  2196,  2204,  2213,  2216,  2219,
    2222,  2230,  2235,  2252,  2262,  2276,  2282,  2285,  2290,  2295,
    2309,  2329,  2334,  2339,  2344,  2373,  2379,  2383,  2377,  2457,
    2462,  2472,  2476,  2482,  2489,  2492,  2499,  2515,  2522,  2524,
    2543,  2555,  2563,  2567,  2583,  2588,  2594,  2604,  2609,  2615,
    2622,  2633,  2648,  2652,  2689,  2699,  2708,  2714,  2747,  2750,
    2753,  2769,  2773,  2778,  2783,  2790,  2794,  2800,  2807,  2815,
    2825,  2827,  2834,  2838,  2843,  2850,  2866,  2872,  2875,  2879,
    2882,  2892,  2897,  2896,  2928,  2934,  2933,  3250,  3255,  3264,
    3273,  3282,  3287,  3290,  3331,  3335,  3340,  3349,  3352,  3355,
    3358,  3370,  3375,  3380,  3390,  3400,  3415,  3421,  3426,  3428,
    3430,  3432,  3441,  3459,  3466,  3474,  3465,  3606,  3611,  3620,
    3629,  3634,  3643,  3655,  3669,  3683,  3689,  3697,  3688,  3769,
    3770,  3771,  3772,  3773,  3774,  3775,  3776,  3782,  3803,  3828,
    3832,  3837,  3842,  3849,  3854,  3860,  3867,  3875,  3879,  3878,
    3883,  3889,  3893,  3898,  3908,  3921,  3927,  3930,  3939,  3942,
    3947,  3958,  3963,  3968,  3973,  3979,  3988,  3996,  3998,  4010,
    4020,  4027,  4029,  4042,  4049,  4062,  4084,  4091,  4097,  4103,
    4109,  4117,  4139,  4146,  4152,  4163,  4174,  4187,  4202,  4217,
    4232,  4252,  4273,  4285,  4305,  4322,  4341,  4362,  4376,  4390,
    4397,  4431,  4444,  4458,  4471,  4485,  4484,  4494,  4493,  4502,
    4513,  4525,  4535,  4543,  4556,  4569,  4583,  4593,  4603,  4617,
    4631,  4649,  4668,  4679,  4694,  4709,  4724,  4739,  4754,  4765,
    4770,  4781,  4786,  4790,  4793,  4803,  4820,  4829,  4835,  4839,
    4843,  4847,  4852,  4864,  4874,  4880,  4884,  4888,  4892,  4896,
    4901,  4913,  4922,  4927,  4931,  4935,  4939,  4943,  4955,  4967,
    4972,  4976,  4980,  4984,  4989,  4999,  5005,  5011,  5022,  5024,
    5030,  5042,  5047,  5057,  5086,  5089,  5092,  5100,  5118,  5124,
    5129,  5134,  5139,  5147,  5151,  5158,  5166,  5179,  5184,  5191,
    5193,  5196,  5203,  5208,  5213,  5216,  5223,  5227,  5233,  5245,
    5251,  5260,  5265,  5264,  5299,  5310,  5315,  5324,  5342,  5348,
    5353,  5356,  5361,  5368,  5372,  5379,  5391,  5402,  5407,  5414,
    5413,  5441,  5444,  5443,  5460,  5465,  5470,  5479,  5488,  5498,
    5497,  5508,  5516,  5528,  5552,  5553,  5554,  5555,  5561,  5562,
    5568,  5574,  5581,  5588,  5612,  5619,  5631,  5644,  5664,  5690,
    5723,  5745,  5776,  5780,  5794,  5808,  5822,  5826,  5830,  5834,
    5838,  5848,  5853,  5858,  5878,  5882,  5889,  5899,  5908,  5917,
    5924,  5932,  5936,  5945,  5949,  5953,  5961,  5967,  5971,  5979,
    5986,  5994,  6001,  6009,  6016,  6024,  6028,  6038,  6043,  6093,
    6108,  6124,  6144,  6164,  6202,  6206,  6210,  6220,  6222,  6237,
    6243,  6249,  6255,  6271,  6276,  6292,  6297,  6309,  6319,  6333,
    6356,  6359,  6365,  6379,  6385,  6396,  6397,  6398,  6399,  6400,
    6401,  6402,  6403,  6404,  6405,  6406,  6407,  6408,  6409,  6410,
    6411,  6412,  6413,  6414,  6415,  6416,  6420,  6421,  6422,  6423,
    6424,  6425,  6426,  6427,  6428,  6429,  6430,  6431,  6432,  6433,
    6434,  6435,  6436,  6437,  6438,  6439,  6440,  6441,  6442,  6443,
    6444,  6445,  6446,  6447,  6448,  6449,  6450,  6451,  6452,  6453,
    6454,  6455,  6456,  6457,  6459,  6461,  6463,  6468,  6469,  6470,
    6471,  6472,  6473,  6474,  6475,  6494,  6496,  6502,  6505,  6512,
    6518,  6521,  6524,  6536,  6542,  6553,  6569,  6591,  6606,  6644,
    6652,  6664,  6672,  6686,  6689,  6696,  6699,  6714,  6719,  6724,
    6743,  6753,  6766
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT", "tFLOAT", "tSTRING", "tBIGSTR",
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead",
  "tPrintConstants", "tStrCmp", "tFor", "tEndFor", "tIf", "tElse",
  "tEndIf", "tFlag", "tHelp", "tCpu", "tCheck", "tInclude", "tConstant",
  "tList", "tListAlt", "tLinSpace", "tLogSpace", "tListFromFile",
  "tDefineConstant", "tPi", "t0D", "t1D", "t2D", "t3D", "tExp", "tLog",
  "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos", "tTan", "tAtan",
  "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", "tCeil", "tFmod",
  "tModulo", "tHypot", "tSolidAngle", "tTrace", "tOrder", "tCrossProduct",
  "tDofValue", "tMHTransform", "tMHJacNL", "tGroup", "tDefineGroup",
  "tAll", "tInSupport", "tMovingBand2D", "tDefineFunction", "tConstraint",
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
  "String__Index", "CharExpr", "StrCat", "StrCmp", 0
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
     485,   486,   487,   488,   489,   490,   491,    63,   492,   493,
     494,   495,   496,    60,    62,   497,   498,   499,   500,    43,
      45,    42,    47,    37,   501,    33,   502,    94,    40,    41,
      91,    93,    46,    35,    36,   503,   123,   125,    44,    64,
     126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   271,   273,   272,   274,   275,   274,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   278,   278,   279,   279,   279,   279,   279,   279,   279,
     281,   282,   280,   284,   283,   283,   285,   285,   286,   287,
     287,   288,   288,   289,   289,   289,   290,   291,   291,   292,
     292,   292,   293,   293,   293,   293,   293,   293,   293,   293,
     294,   294,   294,   294,   294,   295,   295,   296,   297,   297,
     298,   299,   299,   300,   300,   300,   300,   301,   301,   301,
     302,   302,   303,   302,   302,   304,   304,   305,   305,   307,
     306,   308,   309,   310,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   311,   311,   311,   311,   311,
     311,   312,   311,   313,   311,   314,   311,   311,   311,   311,
     315,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   316,   316,   316,   317,   317,   318,   318,   318,   319,
     319,   320,   320,   321,   321,   322,   322,   323,   323,   324,
     324,   324,   325,   325,   326,   326,   327,   327,   327,   328,
     328,   329,   329,   330,   330,   330,   331,   331,   332,   332,
     333,   333,   333,   333,   333,   333,   334,   334,   335,   335,
     336,   336,   337,   337,   337,   337,   337,   338,   338,   338,
     339,   339,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   341,   341,   342,
     342,   343,   343,   343,   344,   344,   344,   344,   344,   344,
     344,   345,   345,   345,   346,   346,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   348,   349,   350,   348,   351,
     351,   352,   352,   353,   353,   353,   354,   354,   355,   355,
     356,   356,   357,   357,   358,   358,   358,   359,   359,   360,
     360,   360,   361,   361,   361,   362,   362,   363,   363,   363,
     363,   364,   364,   365,   365,   366,   366,   367,   367,   367,
     367,   367,   368,   368,   368,   369,   369,   370,   370,   370,
     370,   370,   371,   370,   370,   372,   370,   370,   370,   370,
     370,   370,   373,   373,   374,   374,   374,   375,   375,   375,
     375,   376,   376,   377,   377,   377,   378,   378,   379,   379,
     379,   379,   380,   380,   382,   383,   381,   381,   381,   381,
     381,   381,   381,   384,   384,   385,   386,   387,   385,   388,
     388,   388,   388,   388,   388,   388,   388,   389,   389,   390,
     390,   391,   391,   392,   392,   393,   393,   393,   394,   393,
     393,   395,   395,   395,   396,   396,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   398,   398,   399,   399,   400,
     400,   401,   401,   402,   402,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   404,   403,   405,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   406,
     406,   407,   407,   408,   408,   408,   409,   409,   410,   410,
     410,   410,   410,   411,   411,   412,   412,   412,   412,   412,
     412,   413,   413,   414,   414,   414,   414,   414,   415,   415,
     416,   416,   416,   416,   416,   416,   416,   416,   417,   417,
     418,   418,   419,   419,   419,   419,   419,   419,   420,   420,
     421,   421,   422,   422,   423,   423,   423,   423,   423,   424,
     424,   424,   425,   425,   426,   426,   427,   427,   427,   427,
     428,   428,   430,   429,   429,   429,   429,   429,   431,   431,
     432,   432,   433,   433,   434,   434,   434,   434,   434,   436,
     435,   437,   438,   437,   439,   439,   439,   439,   439,   440,
     439,   439,   441,   441,   442,   442,   442,   442,   443,   443,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   445,   445,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   447,   447,   448,
     448,   448,   448,   448,   448,   448,   448,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     450,   450,   450,   450,   450,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   453,   453,   453,
     453,   453,   453,   453,   453,   454,   454,   454,   454,   455,
     455,   455,   455,   456,   456,   456,   456,   456,   456,   456,
     456,   457,   457,   458,   458,   459,   459,   459,   459,   459,
     459,   460,   461
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
       1,     3,     2,     3,     1,     3,     0,     3,     6,     0,
       4,     0,     2,     3,     4,     0,     4,     0,     2,     3,
       3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
       4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
       3,     3,     3,     3,     3,     3,     0,     2,     3,     1,
       0,     2,     3,     4,     3,     4,     5,     0,     4,     2,
       0,     2,     3,     3,     3,     3,     3,     3,     7,     3,
       3,     3,     3,     3,     7,     7,     7,     0,     2,     3,
       1,     0,     2,     2,     3,     4,     3,     4,     4,     4,
       4,     0,     4,     2,     0,     2,     3,     3,     4,     4,
       7,     3,     3,     3,     3,     0,     0,     0,    18,     0,
       4,     0,     2,     3,     3,     3,     1,     3,     0,     3,
       1,     3,     0,     3,     0,     4,     2,     0,     2,     3,
       3,     3,     0,     4,     2,     0,     2,     3,     3,     3,
       3,     0,     2,     3,     1,     0,     2,     3,     4,     3,
       4,     4,     0,     4,     2,     0,     2,     3,     3,     3,
       3,     3,     0,     5,     3,     0,     5,     3,     3,     3,
       3,     3,     0,     3,     0,     2,     2,     4,     4,     4,
       4,     0,     2,     3,     3,     3,     0,     2,     3,     3,
       3,     3,     0,     2,     0,     0,     9,     3,     3,     3,
       2,     3,     5,     0,     2,     3,     0,     0,     9,     0,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     0,
       2,     3,     1,     0,     2,     3,     4,     4,     0,     5,
       1,     0,     4,     2,     0,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     0,     3,     1,
       3,     0,     3,     0,     2,     3,     3,     4,     4,     4,
       4,     5,     5,     2,     7,    11,     7,    13,    11,     9,
       7,     7,     7,     9,     9,     9,    11,    11,    11,     5,
      17,    13,    15,    11,    13,     0,     7,     0,     7,     7,
      11,     5,     5,     9,     9,     9,     5,     5,    11,     9,
      14,    14,     7,    12,    10,     7,     7,     7,     1,     1,
       1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
       3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
       4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
       3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
       0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
       3,     1,     0,     2,     3,     4,     3,     3,     4,     0,
       4,     2,     0,     2,     3,     4,     0,     5,     5,     2,
       0,     2,     0,     6,     3,     3,     3,     3,     0,     2,
       3,     1,     0,     2,     3,     3,     3,     3,     4,     0,
       8,     0,     0,     3,     7,     7,     8,    11,     6,     0,
      10,     1,     3,     6,     1,     1,     1,     1,     0,     3,
       1,     2,     2,    12,     2,    15,     4,    12,    17,    22,
      12,     0,     2,     3,     4,     4,     3,     2,     2,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     5,     2,     2,     3,     9,     3,     2,     9,
       2,     9,     2,     9,     5,     3,     2,     0,     2,     6,
       8,     8,    10,     1,     4,     1,     1,     5,     4,     4,
       7,     4,     7,     5,     3,     3,     7,     5,     8,     2,
       0,     3,     6,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
       4,     6,     6,     6,     5,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       1,     3,     3,     3,     5,     3,     4,     4,     6,     8,
       8,     5,     5,     1,     1,     1,     1,     1,     4,     6,
       1,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   743,     0,     0,     0,
       0,   633,     0,   635,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   636,   744,     0,     0,     0,     0,     0,
       0,   649,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   745,     0,     0,   750,   746,
      19,   747,   650,    41,   206,   169,   182,   237,    91,   301,
     379,   518,   548,     0,     0,   725,     0,     0,   645,   644,
       0,     0,   718,   717,     0,   719,   720,   721,   722,   723,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   676,   724,   715,     0,    27,    26,
      25,    23,    24,    22,    40,    30,    32,    33,    34,    35,
      31,    36,    37,    38,    39,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     743,     0,     0,     0,     0,     0,     0,     0,     0,   726,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   716,   634,
       0,     0,     0,    86,     0,   743,     0,     7,    42,    47,
      49,     0,   210,     9,   207,   209,   171,    10,   184,    11,
     241,    12,   238,   240,     0,     8,    92,    96,     0,   305,
      13,   302,   304,   383,    14,   380,   382,   522,    15,   519,
     521,   552,    16,   549,   551,   559,     0,     0,   639,     0,
       0,     0,     0,     0,     0,   729,     0,   730,     0,   638,
     641,   741,   643,     0,   647,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,     0,
       0,   693,   692,   691,   690,   686,   687,   689,   688,   681,
     680,   682,   683,   684,   685,     0,   748,     0,   637,   651,
       0,     0,     0,    80,   725,     0,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,   742,   735,
       0,     0,     0,     0,     0,     0,     0,   728,     0,   733,
       0,     0,     0,     0,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,     0,   705,   706,   707,   708,   709,
     710,     0,     0,     0,     0,   629,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,   743,    59,     0,     0,
       0,     0,     0,     0,     0,     0,   208,   211,     0,     0,
     170,   172,     0,   102,     0,   183,   185,     0,     0,     0,
       0,     0,     0,   239,   242,   243,    85,   743,     0,    56,
       0,    57,     0,     0,     0,     0,   303,   306,     0,     0,
     388,   381,   384,   390,     0,     0,     0,     0,   520,   523,
       0,     0,     0,     0,     0,   550,   553,   561,   736,   737,
       0,     0,     0,     0,     0,   731,   732,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,   714,   751,   749,
     654,   653,     0,     0,    90,    60,     0,     0,     0,     0,
      72,     0,    69,     0,    55,    67,    79,    43,     0,     0,
       0,     0,   217,     0,   743,     0,   175,     0,   189,     0,
       0,     0,     0,   109,     0,   292,     0,   743,     0,   251,
     269,   284,     0,     0,   102,     0,     0,   743,     0,   312,
     334,   743,     0,   391,     0,   743,     0,   529,     0,     0,
       0,   561,     0,     0,     0,   562,     0,     0,     0,   642,
     640,   734,   648,     0,   631,   752,   704,   711,   712,   713,
     630,   652,    87,    45,    44,    46,    81,     0,     0,    85,
       0,    62,    53,    61,    48,     0,   217,     0,   214,     0,
       0,   212,     0,   173,     0,     0,     0,     0,   187,   103,
       0,   186,     0,   246,     0,   244,     0,     0,     0,    93,
      98,     0,   102,   309,     0,   307,     0,     0,     0,   385,
       0,   413,     0,   524,     0,   526,   527,   554,   562,   555,
     557,   556,   560,     0,   738,     0,     0,     0,     0,     0,
      75,    73,    68,     0,    74,    85,    50,     0,   220,   215,
     219,   213,   177,   174,   191,   188,     0,     0,   104,   743,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
       0,   150,     0,     0,     0,     0,   141,   143,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   139,     0,
     136,   724,   160,   295,   250,   294,   245,   254,   247,   253,
     271,   248,   287,   249,   286,     0,    94,     0,   308,   315,
     310,   314,     0,     0,     0,     0,   311,   335,   336,   386,
     394,   387,   393,     0,   525,   532,   528,   531,   558,     0,
       0,     0,     0,   563,   571,     0,     0,   632,     0,     0,
       0,     0,     0,    70,     0,     0,     0,   216,     0,     0,
       0,   100,   101,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   132,   134,     0,   158,   156,   153,
     155,   154,   743,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   140,   166,     0,     0,     0,     0,
       0,    95,     0,   352,   352,   363,   341,     0,   743,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,   447,   389,   414,   468,     0,
       0,     0,     0,     0,   739,   740,    82,    83,    77,    76,
      71,    54,    66,     0,     0,     0,     0,     0,     0,     0,
     102,   102,   102,   102,     0,     0,     0,   102,   218,   221,
       0,     0,   176,   178,     0,     0,     0,   190,   192,     0,
     109,     0,     0,     0,     0,   109,   109,     0,   135,     0,
     378,     0,   131,   130,   129,   128,   127,   123,   124,   126,
     125,   119,   120,   115,   118,   121,   116,   122,   157,   159,
     162,     0,   164,     0,     0,   137,     0,     0,     0,     0,
     293,   296,     0,     0,     0,     0,   105,   105,     0,     0,
     252,   255,     0,     0,     0,   270,   272,     0,     0,     0,
     285,   288,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   725,   325,   313,   316,   369,   369,   369,     0,
       0,     0,     0,     0,   725,     0,     0,     0,   392,   395,
     404,     0,     0,   102,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   423,   102,     0,   476,     0,
     483,     0,   491,   498,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   530,   533,     0,   578,
       0,     0,   569,   591,     0,     0,    65,    64,     0,     0,
       0,     0,     0,   102,     0,   102,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,   166,   196,     0,     0,
     148,     0,   149,     0,   145,     0,     0,     0,   109,   377,
       0,   161,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   265,     0,   102,     0,     0,     0,     0,     0,
     280,   282,     0,   276,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   322,     0,     0,     0,
       0,   109,     0,     0,     0,     0,   370,   371,   372,   373,
     374,   375,   376,     0,     0,   337,   353,     0,   338,     0,
     339,   364,     0,     0,     0,   346,   340,   342,     0,     0,
     407,     0,   405,     0,     0,     0,   411,     0,   409,     0,
       0,   415,     0,     0,   416,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   105,   536,     0,   580,     0,     0,     0,     0,     0,
       0,     0,     0,   591,     0,     0,   102,   591,     0,     0,
       0,    78,    51,   223,   224,   229,   230,     0,   233,     0,
     232,   226,   225,    85,   227,   222,     0,   231,   180,   179,
       0,     0,   193,   194,     0,     0,   109,     0,   142,     0,
       0,   113,   165,     0,   167,   297,   298,   299,   300,   256,
     257,     0,     0,     0,    85,   107,     0,   261,   262,   263,
     264,   273,    85,   275,    85,   274,   290,   289,   291,   330,
     328,   329,   320,   318,   319,   317,   332,   324,   331,   327,
     321,     0,     0,     0,     0,     0,     0,   360,   354,     0,
     366,     0,     0,     0,   397,   396,    85,   398,   399,   402,
     403,    85,   400,   401,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,   102,
       0,     0,   102,   417,   477,     0,     0,   102,     0,     0,
       0,     0,   418,   484,     0,     0,     0,     0,     0,   102,
     419,   492,     0,     0,     0,     0,     0,     0,     0,     0,
     420,   499,   102,     0,   102,   725,   725,   725,     0,   725,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     469,   471,   470,   471,     0,   534,   581,   582,   102,   584,
       0,     0,     0,     0,     0,     0,     0,   576,   577,   574,
     575,   572,     0,     0,   591,     0,     0,     0,     0,   592,
      84,     0,   102,   102,     0,   102,   181,   198,   195,     0,
     117,     0,     0,     0,   152,     0,     0,   258,     0,   259,
       0,   106,   102,   281,     0,   277,     0,     0,     0,     0,
     358,   359,   361,     0,   357,   109,   365,   109,   343,   344,
       0,     0,     0,     0,   345,   347,   406,     0,   410,     0,
     421,   413,   422,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   439,     0,   413,     0,     0,     0,     0,     0,
     413,     0,     0,     0,     0,     0,     0,     0,     0,   413,
       0,     0,     0,     0,     0,   413,   413,     0,     0,   508,
       0,   452,     0,     0,     0,     0,     0,     0,   456,   457,
       0,     0,     0,     0,     0,     0,     0,   451,     0,     0,
     743,     0,   535,   539,     0,     0,     0,     0,     0,     0,
       0,     0,   579,   578,     0,     0,     0,     0,   568,   725,
     725,     0,     0,     0,     0,     0,   604,   725,     0,   627,
     627,   627,   597,   598,     0,     0,     0,   613,   614,   105,
     618,   620,   622,     0,     0,   626,     0,     0,     0,     0,
       0,     0,   151,     0,     0,   144,   114,     0,     0,     0,
     108,   283,   279,     0,   323,   326,     0,   355,   367,     0,
       0,     0,     0,   408,   412,     0,     0,   725,     0,   725,
       0,     0,     0,     0,     0,   102,     0,   480,   478,   479,
     481,   102,     0,   487,   485,   486,   488,   489,   102,   496,
     494,     0,   493,   495,   503,   502,   504,     0,     0,   500,
     501,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   725,
     472,     0,   540,   540,     0,   102,     0,   586,     0,     0,
       0,   564,     0,     0,     0,   565,   591,   610,   615,   102,
     607,     0,     0,   593,   596,   605,   606,   599,   600,   603,
     601,   602,   609,   608,     0,   611,   617,     0,     0,     0,
       0,   625,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   199,     0,     0,   168,     0,     0,
     333,   362,     0,     0,   348,   349,   350,   351,   424,   426,
       0,     0,     0,     0,     0,     0,   432,     0,     0,   482,
       0,   490,     0,   497,   506,   507,   510,   505,   449,     0,
       0,   430,   431,     0,     0,     0,     0,     0,   462,   466,
     467,     0,   465,     0,   446,     0,   725,   475,   448,   369,
     369,     0,     0,     0,     0,     0,     0,   573,   591,   566,
       0,     0,   594,   595,   628,     0,     0,     0,     0,     0,
       0,   236,   235,   228,   234,     0,     0,     0,     0,     0,
       0,     0,   147,     0,   260,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
     102,     0,   102,     0,     0,     0,     0,     0,     0,   102,
       0,   473,   474,     0,     0,     0,     0,   538,     0,   541,
     537,     0,   102,     0,     0,     0,     0,     0,     0,   102,
     612,     0,     0,     0,   624,     0,   200,   201,   202,   203,
     204,   205,     0,     0,     0,     0,   413,   434,   435,     0,
       0,     0,     0,   433,     0,     0,   413,     0,     0,     0,
       0,   102,     0,     0,   509,   511,     0,   429,     0,   453,
     454,   455,     0,     0,   459,     0,     0,     0,     0,     0,
       0,     0,   542,     0,     0,     0,     0,     0,     0,     0,
     570,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,   464,     0,   546,   547,   544,   545,   109,     0,     0,
       0,     0,     0,     0,   567,   102,     0,     0,     0,     0,
     266,   356,   368,   425,   436,   437,   438,     0,   413,     0,
     443,   413,   517,   512,   515,   516,   513,   514,   450,   428,
       0,   413,   413,   458,     0,     0,     0,   725,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,   463,     0,     0,     0,     0,
       0,     0,     0,   616,   619,   621,   623,     0,     0,   441,
     413,   444,   427,     0,     0,   543,     0,   725,     0,     0,
       0,     0,     0,    88,     0,     0,   460,   461,   590,     0,
     583,   587,     0,     0,   267,     0,    58,     0,   442,   725,
       0,     0,     0,    89,     0,     0,     0,     0,     0,   440,
     585,     0,     0,    88,     0,     0,     0,   588,     0,     0,
       0,   268,     0,     0,     0,   589
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   148,   228,   229,
     746,  1401,   429,   635,   430,  2012,   400,   572,   744,   864,
     494,   569,   495,   395,   224,   331,  2026,   332,   153,   246,
     426,   512,   513,  1370,  1256,   589,   590,   686,   901,  1415,
     687,   760,   761,  1236,   755,   794,   923,   925,   150,   338,
     411,   582,   749,   883,   151,   339,   416,   584,   750,   888,
    1231,  1561,  1694,   149,   234,   337,   407,   577,   748,   879,
     152,   242,   340,   424,   596,   797,   941,  1253,  1977,  2032,
     597,   798,   946,  1095,  1264,  1092,  1262,   598,   799,   951,
     592,   796,   931,   154,   251,   343,   437,   606,   802,   965,
    1276,  1111,  1428,   607,   717,   969,  1137,  1293,  1445,   966,
    1126,  1435,  1702,   968,  1131,  1437,  1703,  1127,   688,   155,
     255,   344,   442,   534,   610,   807,   979,  1141,  1296,  1147,
    1301,   723,   847,  1022,  1023,  1371,  1508,  1640,  1166,  1324,
    1168,  1333,  1170,  1341,  1171,  1351,  1621,  1799,  1865,   156,
     259,   345,   449,   614,   849,  1027,  1374,  1749,  1819,  1927,
     157,   263,   346,   456,    31,   347,   545,   623,   733,  1208,
    1028,  1392,  1205,  1203,  1209,  1399,  1669,   848,    33,   147,
     689,   275,   124,   170,   276,   277,    34,   125,    70,    71,
     126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1413
static const yytype_int16 yypact[] =
{
   -1413,    77, -1413, -1413,   100,  5107,  -144,    86,  -119,   127,
      56, -1413,  -104, -1413,   559,   150,   803,   202,   -61,   -62,
     -51,   -10,     1,    85,    95,    97,   153,   169,    16, -1413,
   -1413, -1413, -1413, -1413,     6,   107,   186,   401,   405,   453,
     457, -1413,   336,  4752,  4752,   490, -1413,   492,   500,   503,
     505,   587, -1413,   589, -1413,   591,   596,   601,   616,   639,
     658,   672,   676,   684,   689, -1413,   311,   454, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,   507,   450,  2256,  4752,  -122, -1413, -1413,
     467,   464, -1413, -1413,   476, -1413, -1413, -1413, -1413, -1413,
     484,   491,   496,   506,   545,   549,   553,   574,   582,   584,
     588,   592,   600,   606,   608,   611,   619,   621,   624,   651,
    4752,  4752,  4752,  4612, -1413, -1413, -1413,  6288, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413,   202,   202,   -22,   205,   367,
     -33,   108,   475,   642,   673,   682,   712,   838,   457,  4752,
    -148,   849,   653,   657,   662,   663,   665,   667,  4644,  4666,
     911, -1413,   925,  5775,   928,  4644,    58,  4752,   202,  4752,
    4752,  4752,  4752,  4752,  4752,  4752,  4752,  4752,  4752,  4752,
    4752,  4752,  4752,  4752,  4752,  4752,  4752,  4752,  4752,   -87,
     -87,  6311,  4752,  4752,  4752,  4752,  4752,  4752,  4752,  4752,
    4752,  4752,  4752,  4752,  4752,  4752,  4752,  4752, -1413, -1413,
     668,  -103,   931, -1413,   457,   -18,   685, -1413, -1413, -1413,
   -1413,  -124, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413,   686, -1413, -1413, -1413,  -191, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,  5802,  1168, -1413,   937,
     939,  4752,  4752,   202,   202,  4666,   109, -1413,  4752, -1413,
   -1413, -1413, -1413,  -100, -1413,  4752,  4720,   679,  4635,  6334,
    6361,  6388,  6415,  6442,  6469,  6496,  6523,  6550,  4225,  6577,
    6604,  6631,  6658,  6685,  6712,  4335,  4683,  4737, -1413,  4572,
    4774,  1455,  2901,  1633,  1633,   251,   251,   251,   251,   289,
     289,   -87,   -87,   -87,   -87,   202, -1413,  4644, -1413,  -188,
    2666,   714,   715, -1413,  2149,   718,  4752,   -13,   151,    74,
     317, -1413,    84,   397,    71,   440,   693,   691, -1413, -1413,
     142,   694,   690,  4974,  5034,   698,   700, -1413,  4644,  4804,
     955,  6739,  4752,   202, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413,  4752, -1413, -1413, -1413, -1413, -1413,
   -1413,  4752,  4752,  4752,  4752, -1413,  4752,   702,   -65,  4698,
    4752,  4752,  5829,    89,    89,    10,  -159, -1413,    50,   957,
     705,    89,  6766,    20,   964,   969, -1413, -1413,   709,   972,
   -1413, -1413,   724,   113,   975, -1413, -1413,   725,   988,   990,
     730,   731,   732, -1413, -1413, -1413,    94,  -206,   779, -1413,
     756, -1413,  1014,  1016,   761,   762, -1413, -1413,  1017,   763,
   -1413, -1413, -1413, -1413,  1034,   774,   457,   457, -1413, -1413,
     457,   775,   457,   202,  1037, -1413, -1413, -1413, -1413, -1413,
    1038,  4752,  4752,  1039,  1042,  4666, -1413,  4752, -1413,  1049,
    1472,   783,  6793,  6820,  6847,  6874,  6901,  2531, -1413, -1413,
   -1413,  2531,  5856,  5883, -1413, -1413,  1055,  1059,  1062,   457,
    1047,  4752, -1413,  4644, -1413, -1413, -1413, -1413,    14,  1065,
     837,   810, -1413,  1070,    55,  1073, -1413,  1075, -1413,   823,
     824,   834,  1083, -1413,  1087, -1413,  1089,    55,  1090, -1413,
   -1413, -1413,  1091,  1097,   113,   870,  1101,    55,  1103, -1413,
   -1413,    55,  1104, -1413,   843,    55,  1105, -1413,  1108,  1109,
    1110, -1413,  1112,  1113,  1114,   847,   861,  5062,  5085, -1413,
   -1413,  2531, -1413,  4752, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,  -168,  4752,  6924,   182,
     196, -1413, -1413, -1413, -1413,  1068, -1413,  1019, -1413,   879,
    1136, -1413,   266, -1413,   281,  4752,  1139,   894, -1413, -1413,
    2008, -1413,  1048, -1413,  1140, -1413,  1076,   303,  1122, -1413,
     880,  1142,   113, -1413,  1145, -1413,  1146,   246,  1147, -1413,
    1240, -1413,  1148, -1413,  1276, -1413, -1413, -1413,   893, -1413,
   -1413, -1413, -1413,  2233, -1413,  4752,  4752,  5910,   898,  4752,
    4831,  1158, -1413,    57, -1413,   120, -1413,  1317, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,  6947,   906, -1413,   124,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
     908, -1413,   909,   910,   914,   915, -1413, -1413,  1171,  2008,
    2008,  2008,  2008,  1175,    35,  1176,  7377,  -193,   920,   920,
   -1413,   923, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413,  4752, -1413,  1177, -1413, -1413,
   -1413, -1413,   921,   927,   932,   959, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,  2834, -1413, -1413, -1413, -1413, -1413,   929,
     966,   967,   968, -1413, -1413,  6974,  7001, -1413,   963,  5937,
    4752,  4752,    54, -1413,   979,    46,   981, -1413,  1741,   -40,
     141, -1413, -1413, -1413,   976,   983,   976,  2008,  1239,  1241,
     989,   994,  1004,   993,   993,   993,  4521, -1413, -1413, -1413,
   -1413, -1413,     4,   995, -1413,  2008,  2008,  2008,  2008,  2008,
    2008,  2008,  2008,  2008,  2008,  2008,  2008,  2008,  2008,  2008,
    2008,  1257,  4752,  1740, -1413,   997,    79,   659,   242,   355,
    5964, -1413,  2307, -1413, -1413, -1413, -1413,   104,    15,  -155,
     146,  1001,  1007,  1013,  1015,  1022,  1023,  1030,  1036,  1040,
    1267,  1041,   213,   277,   285,  1028,  1045,  1046,  1051,  1052,
    1053,  1056,  1057,  1058,  1031,  1032,  1060,  1061,  1066,  1067,
    1077,  1033,  1043,  1078, -1413, -1413, -1413, -1413, -1413,   -35,
     457,   569,    90,  1273, -1413, -1413, -1413,  1099,  2531,  4858,
   -1413, -1413, -1413,   457,    50,  1081,    90,    90,    90,    90,
     180,   302,   113,   113,  1098,   457,  1297,   335, -1413, -1413,
      61,  1314, -1413, -1413,  1111,  1320,  1336, -1413, -1413,  1086,
   -1413,  1106,  4902,  1115,  1117, -1413, -1413,  1116, -1413,  1120,
   -1413,  2008,  1509,  3266,  1102,  1102,  1102,   640,   640,   640,
     640,   481,   481,   993,   993,   993,   993,   993, -1413, -1413,
   -1413,  1118,  7377,   128,  4590, -1413,  1358,    28,  1363,   457,
   -1413, -1413,  1365,  1366,  1368,  1124,  1129,  1129,    90,    90,
   -1413, -1413,  1375,    22,    24, -1413, -1413,  1376,   457,  1378,
   -1413, -1413, -1413,  1391,  1392,  1394,   119,   457,   457,  4752,
    1401,    90,  2498, -1413, -1413, -1413,  1554,  1901,  1107,   344,
    1400,   457,    44,   202,  2498,   202,    45,   457, -1413, -1413,
   -1413,   457,  1399,   113,   113,  1402,   457,   457,   457,   457,
     457,   457,   457,   457,   457, -1413,   113,  4752, -1413,  4752,
   -1413,  4752, -1413, -1413,    90,   202,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
    1403,   457,  1151,  1154,  1141,   457, -1413, -1413,  1648,  1155,
    1149,  1648, -1413, -1413,  1150,  4752, -1413, -1413,    50,  1412,
    1413,  1414,  1417,   113,  1420,   113,  1421,  1422,  1423,  1096,
    1424,  1425,   113,  1426,  1429,  1430,   997, -1413,  1433,  1434,
   -1413,  1178, -1413,  2008, -1413,  1179,  1182,  1180, -1413, -1413,
    3097, -1413, -1413,  2008,  1187,   370,  1442,  1445,  1446,  1447,
    1449,    23,  1213,  1476,   113,  1491,  1492,  1493,  1494,  1495,
   -1413, -1413,  1496, -1413, -1413,  1502,  1504,  1505,  1506,  1507,
    1508,  1511,  1514,  1516,  1517,  1518, -1413,  1710,  1519,  1520,
    1524, -1413,  1527,  1528,  1529,  1256, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413,    90,  1530, -1413, -1413,  1275, -1413,    90,
   -1413, -1413,  1278,  1534,  1536, -1413, -1413, -1413,  1537,  1538,
   -1413,  1540, -1413,  1541,  1542,  1543, -1413,  1546, -1413,  1547,
    1294, -1413,  1295,  1296, -1413,  1291,  1293,  1299,  1300,  1301,
    1302,  1303,  1304,  1306,  1315,  5108,   770,  5131,   912,  5154,
     393,   883,  1307,  1316,  1310,  1311,  1313,  1318,  1322,  1324,
    1321,  1326,  1327,  1328,  1330,  1331,  1332,  1333,  1334,  1342,
      51,    51, -1413,  1575, -1413,    90,    90,    21,  1319,  1338,
    1341,  1343,  1345, -1413,    90,   363,   212, -1413,  1340,   143,
    1348,  2531, -1413, -1413, -1413, -1413, -1413,  1349, -1413,  1350,
   -1413, -1413, -1413,  1351, -1413, -1413,  1352, -1413, -1413, -1413,
    1587,   374, -1413, -1413,    90,  7352, -1413,  4752, -1413,  1618,
    1361, -1413,  7377,    90, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413,  1619,  1513,  1621,  1351, -1413,   377, -1413, -1413, -1413,
   -1413, -1413,   383, -1413,   395, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,  1369, -1413, -1413, -1413,
   -1413,  1364,  1624,  1625,  1626,  1631,  1628, -1413, -1413,  1629,
   -1413,  1636,  1638,   349, -1413, -1413,   400, -1413, -1413, -1413,
   -1413,   402, -1413, -1413,  1640,  1382,  1642,   113,   457,   457,
    4752,  4752,  4752,   457,   113,    90,  1643,  4752,  1385,   113,
    4752,  4752,   113, -1413, -1413,  4752,  1386,   113,  4752,  4752,
    4752,  4752, -1413, -1413,  4752,  4752,  4752,  1387,  4752,   113,
   -1413, -1413,  4752,  4752,   457,  1389,  1393,  4752,  4752,  1406,
   -1413, -1413,   113,  1651,   113,  2498,  2498,  2498,  4752,  2498,
    1653,  1658,   457,   457,  4752,   457,   457,    90,  1663,  1666,
   -1413, -1413, -1413, -1413,  1253, -1413,  1464, -1413,   113, -1413,
    1409,  4644,  1410,  1419,  1427,   193,  1439, -1413, -1413, -1413,
   -1413, -1413,  1683,  1435, -1413,   209,  1569,  1719,  5036, -1413,
   -1413,  1460,   113,   113,  1096,   113, -1413, -1413, -1413,  1469,
   -1413,  1470,  5177,  1471, -1413,  2008,  1473, -1413,  1728, -1413,
    1731, -1413,   113, -1413,  1732, -1413,  1750,   457,  1739,  1757,
   -1413, -1413, -1413,  1544, -1413, -1413, -1413, -1413, -1413, -1413,
     976,   976,   976,    90, -1413, -1413, -1413,   457, -1413,   457,
   -1413, -1413, -1413,  1545,  1497,  1499,  5200,  5223,  5246,  1500,
    1548,  1501, -1413,  5269, -1413,  1763,  1837,  1854,  1794,  5292,
   -1413,  1797,  1974,  2410,  2486,  2548,  5315,  2636,  2689, -1413,
    2884,  1800,  3248,  3308,  1801, -1413, -1413,  3555,  3614, -1413,
     221, -1413,  1556,  1549,  1561,  1558,  5338,  1559, -1413, -1413,
    1562,  1563,  7028,  1571,  1577,  1573,   404, -1413,   295,   299,
     129,  1579, -1413, -1413,  1834,  1578,  4644,   414,  4644,  4644,
    4644,  1852, -1413,  1155,   202,   300,  1855,    90, -1413,  2498,
    2498,  1597,  1861,   157,  4752,  4752, -1413,  2498,  4752,  1862,
   -1413, -1413, -1413, -1413,  4752,  1863,  2321, -1413, -1413,  1129,
    1603,  1604,  1606,  1608,  1875, -1413,  1616,  1630,  1632,  1620,
    1637,   654, -1413,  1639,  4752, -1413,  7377,  1627,  1885,  1634,
   -1413, -1413, -1413,  1646, -1413, -1413,  1890, -1413, -1413,  1896,
    1897,  1903,  1904, -1413, -1413,  3024,  1905,  2498,  4752,  2498,
    4752,  4752,   457,  1906,   457,   113,  3214, -1413, -1413, -1413,
   -1413,   113,  3273, -1413, -1413, -1413, -1413, -1413,   113, -1413,
   -1413,  3463, -1413, -1413, -1413, -1413, -1413,  3517,  3571, -1413,
   -1413,   436,  1907,  4752,   113,  1908,  1909,  4752,   202,   202,
    4752,  4752,  1910,  1911,  1912,   202,  1913,  1771,  1914,  2431,
   -1413,  1915, -1413, -1413,  1659,   113,   442, -1413,   447,   472,
     486, -1413,  1661,  1669,  1920, -1413, -1413, -1413, -1413,   113,
   -1413,   202,   202, -1413,  2531,  2531, -1413,  2531, -1413,  1925,
    1925,  1925,  2531, -1413,  4644,  2531, -1413,  4752,  4752,  4752,
    4644, -1413,    50,  1926,  1927,  1928,  1929,  1932,  4752,  4752,
    4752,  4752,  4752, -1413, -1413,  1672,  5991, -1413,  1819,  1933,
   -1413, -1413,  1671,  1673, -1413, -1413, -1413, -1413,  1924, -1413,
    1684,  7055,  1676,  5361,  5384,  1678, -1413,  1694,  1688, -1413,
    1696, -1413,   322, -1413, -1413, -1413, -1413, -1413, -1413,  5407,
     331, -1413, -1413,  7082,  1704,  1705,  5430,  5453, -1413, -1413,
   -1413,   501, -1413,   202, -1413,   202,  2498, -1413, -1413,  2965,
    3171,  4752,  1700,  1703,  1706,  1709,  1711, -1413, -1413, -1413,
     339,  1702, -1413, -1413, -1413,   525,  5476,  5499,  5522,   531,
    1712, -1413, -1413, -1413, -1413,  1964,  3852,  3911,  4149,  4166,
    4208,  4752, -1413,  1977, -1413, -1413,   976,  1725,  1986,  1987,
    4752,  4752,  4752,  4752,  1989,   113,  4752,  1733,  4752,   337,
     113,  1990,   113,  1993,  1998,  2000,  4752,  4752,  2002,   113,
     533, -1413, -1413,  2009,  2010,  2011,    90, -1413,  1758, -1413,
   -1413,  5545,   113,  4644,  4644,  4644,  4644,   356,  2012,   113,
   -1413,  4752,  4752,  4752, -1413,  4752, -1413, -1413, -1413, -1413,
   -1413, -1413,  6018,  1751,  1762,  1774, -1413, -1413, -1413,  7109,
    7136,  7163,  5568, -1413,  1775,  5591, -1413,  7190,  2019,  2027,
    4752,   113,  2032,    90, -1413, -1413,  1777, -1413,   358, -1413,
   -1413, -1413,  7217,  7244, -1413,  1772,  2062,  4752,  2066,  2070,
    2075,  2076, -1413,  4752,  1832,   540,   544,   564,   570,  2101,
   -1413,  1841,  5614,  5637,  5660,  7271, -1413,  2103,  2105,  2106,
    3760,  2107,  2108,  2111,  2498,  1853,  4752,  3814,  1857,  2113,
    2114,  4318,  2117,  2118,  2119,  2120,  2121,   113,  1864,  1865,
    2126, -1413,  6045, -1413, -1413, -1413, -1413, -1413,  6072,  1868,
    1869,  1870,  1872,  1874, -1413,   113,  4752,  4752,  4752,  2129,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,  1873, -1413,  7298,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
    1881, -1413, -1413, -1413,  2136,  1883,  1880,  2498,  4644,  1882,
    4644,  4644,  1884,  6099,  6126,  6153, -1413,  2083,  4752,  3868,
    1891,  4057,  2142,  4111,  4165, -1413,  2143,  4752,  1888,   572,
    4752,   610,   631, -1413, -1413, -1413, -1413,   457,  5683, -1413,
   -1413, -1413, -1413,  2152,  2153, -1413,  6180,  2498,  1894,  6207,
    1895,  1898,  2158,  1940,  4752,  4354, -1413, -1413, -1413,  1899,
   -1413, -1413,  1941,  4644, -1413,  1902, -1413,  7325, -1413,  2498,
    4752,   634,  2036, -1413,  2164,  1942,  5706,  1943,  2167, -1413,
   -1413,  4752,  1948,  1940,  6234,  4752,  2166, -1413,  5729,  1952,
    4752, -1413,  5752,  4752,  6261, -1413
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413,  -297, -1413,  -738, -1413,  1247, -1413, -1413,  1305,
    -494, -1413,  -597, -1413,  -382,  -503,   165, -1413, -1413, -1413,
   -1413,   521, -1413,  -929, -1413,  -880, -1413,    40, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413,  1539, -1413,  1173, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,  1654, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,  1428,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,  -963,  -646, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1412, -1413, -1413, -1413,  1044,   863, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413, -1413,   597, -1413, -1413,
   -1413, -1413, -1413, -1413, -1413, -1413,  1693, -1413, -1413, -1413,
    1390, -1413,   720,  1216, -1185, -1413,  -633,    29, -1413, -1413,
   -1413,  1280,  -484,  -881,  -134,   -79, -1413,    -5,   -99,   -74,
    -259
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -676
static const yytype_int16 yytable[] =
{
      35,   580,    39,   753,   573,  1132,   171,  1085,  1086,     6,
    1061,   172,    69,   489,   594,  1066,  1067,   490,  1385,     6,
       6,     6,  1395,    83,   604,   501,   427,  1090,   608,  1093,
    1250,   880,   612,   485,    32,    90,   743,   399,   768,  1585,
     769,   283,  1024,   881,   523,    85,   220,   221,   389,     6,
       6,   862,  1596,   490,   -60,     6,     6,   490,  1602,     6,
     490,    42,     6,  1025,    36,   284,   427,  1611,   628,   342,
     791,   403,   792,  1617,  1618,   404,     6,     3,   390,   287,
     571,  1110,     7,     8,     9,   405,    10,    11,    12,   427,
      13,     6,   397,  1144,   485,   427,   486,   487,   629,   397,
      -3,   -60,    18,    44,   499,   983,   690,   267,   889,     6,
     891,    36,   334,   863,  1032,     7,     8,     9,   267,    10,
      11,    12,    36,    13,  1102,   335,    36,  1054,  1039,  1040,
    1041,  1042,   397,   350,    41,    18,   336,   174,   509,    40,
      69,    69,  1055,   231,    35,   860,   175,    35,   248,    35,
      35,    35,    35,   265,    44,   397,   326,    52,   412,   360,
     397,   397,     6,    65,   413,   327,    66,    67,   358,   438,
     217,   509,   414,    69,   355,   356,   218,   230,   235,   926,
     770,   243,   247,   252,   256,   260,   264,   633,  1240,   927,
     928,   929,   970,   388,   479,   690,   690,   690,   690,    72,
    1087,  1088,   971,   358,    73,   509,   439,     6,    65,  1525,
     225,    66,    67,   440,   510,    74,     7,     8,     9,   329,
      10,    11,    12,  1109,    13,   884,   387,   882,  1103,   885,
     886,  1281,  1026,   236,   237,   408,    18,   509,  1104,   222,
     972,   973,   974,   975,   976,   977,   223,   510,   330,   409,
     771,     6,    36,   745,   406,   171,    75,     7,     8,     9,
     172,    10,    11,    12,   471,    13,  1172,    76,    69,    69,
     226,   488,   491,   690,    36,   981,    84,    18,   223,   466,
     492,   510,    82,   493,   398,    36,   502,  1378,  1091,   579,
    1094,   690,   690,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   690,   690,   690,   690,   690,   742,   491,   690,
    1140,  1146,   491,   510,    43,   491,   492,  1084,   285,   493,
      69,   579,     6,   493,   398,    36,   493,   509,     7,     8,
       9,   692,    10,    11,    12,    35,    13,   431,   441,    35,
     942,   415,   943,    85,    37,   428,   930,   398,    18,    38,
     944,    77,   398,   398,   543,   522,  1411,  1858,    69,   570,
     509,    78,   223,    79,   511,   712,   713,   714,   715,   425,
    1037,   978,     6,   443,   238,   239,   357,   358,     7,     8,
       9,   -63,    10,    11,    12,  1286,    13,   417,   223,  1072,
     685,  1289,    68,   496,    36,  1642,  1073,   511,    18,    36,
     505,  1661,  1662,   510,  1397,   418,   984,    87,   887,   458,
     358,  1398,    88,  1335,   518,   419,   420,   690,   410,    80,
     692,   692,   692,   692,   421,  1859,   422,  1860,   528,  1440,
    1441,   511,  1133,   532,  1900,    81,   510,    68,  1861,   536,
    1043,   538,   539,   947,  1907,   540,  1393,   542,    69,   632,
     223,  1862,    86,   948,  1521,   949,  1134,  1376,  1377,  1379,
      89,  1398,     6,   511,   358,   634,  1386,  1442,    91,  1863,
    1526,  1760,   227,   997,  1493,  1494,  1495,  1398,  1497,   998,
       6,  1443,  1622,  1336,   566,   432,     7,     8,     9,  1623,
      10,    11,    12,   496,    13,   433,  1409,   128,   692,   129,
     212,   213,   214,   215,   216,  1416,    18,   130,   217,   945,
     131,   434,   132,   716,   218,   435,   692,   692,   692,   692,
     692,   692,   692,   692,   692,   692,   692,   692,   692,   692,
     692,   692,   642,   643,   692,  1337,  1979,   999,   444,  1981,
     214,   215,   216,  1000,  1212,  1001,   217,   644,   645,  1983,
    1984,  1002,   218,   511,   445,  1577,  1638,  1578,  1338,  1339,
    1641,  1654,  1045,  1639,    45,  1223,    46,  1639,  1398,   700,
     701,   145,    35,  1827,     6,  1030,   446,  1461,  1251,   690,
      47,    48,    49,  1797,   423,   691,   511,    35,  2015,   690,
    1798,    35,  1801,    35,   133,  1052,   134,    50,   135,  1802,
    1828,    35,    35,   136,  1864,    35,   640,  1398,   137,    35,
    1135,  1136,  1387,  1388,  1389,  1390,  1444,  1889,    35,  1916,
    1676,   695,   950,   138,  1398,   699,  1917,   704,   496,  1505,
     447,  1391,    35,   232,   233,   711,   718,  1244,   358,   722,
    1407,  1408,   692,   727,  1421,  1422,   139,     6,  1657,  1658,
    1423,   223,   734,     7,     8,     9,  1666,    10,    11,    12,
    1340,    13,  1425,   223,   436,   140,   640,  1446,   223,  1448,
     223,  1636,  1637,    18,   691,   691,   691,   691,     6,   141,
     773,  1647,   358,   142,     7,     8,     9,     6,    10,    11,
      12,   143,    13,     7,     8,     9,   144,    10,    11,    12,
     158,    13,  1726,  1727,    18,  1582,  1710,   448,  1712,  1753,
     358,   244,   146,    18,  1754,   358,   159,     6,    35,   763,
     764,   765,   766,     7,     8,     9,   176,    10,    11,    12,
     177,    13,   786,   787,   788,   789,   178,   496,   790,  1755,
     358,   240,   241,    18,   179,  1687,  1688,  1689,  1690,  1691,
    1692,   180,   691,  1756,   358,    51,   181,   932,  1747,   933,
     934,   935,   936,   937,   938,   939,   182,   899,  1808,  1809,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,  1818,  1818,   691,  1656,
    1075,   450,  1830,   358,  1579,  1580,  1581,   892,  1834,   358,
    1876,  1877,    35,   982,   692,   183,    53,  1930,   358,   184,
      54,  1931,   358,   185,   692,   902,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,  1932,   358,   922,   186,   451,   980,  1933,   358,  2008,
     358,  1404,   187,     6,   188,  1029,  1029,   431,   189,     7,
       8,     9,   190,    10,    11,    12,   268,    13,  1036,   496,
     191,   431,   431,   431,   431,  1812,   192,    55,   193,    18,
    1050,   194,  1420,    56,  1143,   431,  1145,  2010,   358,   195,
    1424,   196,  1426,   171,   197,   452,    57,   453,    58,   784,
     785,   786,   787,   788,   789,   171,   691,   790,  2011,   358,
      59,  2037,   358,  1342,    60,  1844,  1173,  1670,  1671,   245,
     454,   198,  1318,   269,  1447,  1319,    61,   270,   279,  1449,
    1559,  1693,   271,   272,  1079,   273,   940,   274,  1320,  1321,
    1322,   690,   280,   431,   431,   282,   325,    62,   328,   249,
     250,  1070,   351,  1097,   352,   333,   341,   363,   253,   254,
     393,   394,  1105,  1106,   401,   459,   431,   457,   460,   463,
     455,   464,   468,   478,   497,   498,  1139,  1142,    69,   503,
      69,  1148,  1149,  1343,   504,   506,  1150,   507,   257,   258,
     514,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
     508,   515,    63,   516,    64,   517,   519,   520,   521,   431,
      69,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,
    1183,  1184,  1185,  1186,  1187,   524,  1189,   525,  1344,   526,
    1193,   527,   531,  1947,     6,  1345,  1346,   529,   530,   533,
       7,     8,     9,   496,    10,    11,    12,  1323,    13,   535,
     537,   541,   544,   546,   555,   601,   549,  1965,  1347,   550,
      18,  1348,  1349,     6,  1326,   567,   552,  1327,   691,     7,
       8,     9,   563,    10,    11,    12,   564,    13,   691,   565,
    1328,  1329,   574,   575,  1330,  1331,   576,   578,  1881,    18,
     581,     6,   583,   585,   586,   587,  1988,     7,     8,     9,
     588,    10,    11,    12,   591,    13,   593,   595,   599,    92,
      93,     6,   600,  1235,   261,   262,   602,    18,   603,   611,
     605,   609,   613,  1242,   622,   615,   616,   617,   431,   619,
     620,   621,   624,   707,   431,  1914,  2019,     6,    95,    96,
      97,    98,    99,     7,     8,     9,   636,    10,    11,    12,
    1845,    13,   391,   641,   647,   648,   705,   696,  2035,   706,
    1350,     6,   708,    18,   719,   724,   692,     7,     8,     9,
     728,    10,    11,    12,   738,    13,   741,   752,   754,   756,
     757,    92,    93,   160,   758,   759,   762,    18,   767,  1332,
     793,   772,    94,  -675,   801,  1372,  1372,   803,  1770,   850,
     431,   431,   431,   804,   162,   163,   164,   165,   805,   431,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   806,   851,   852,   853,   431,
     856,  1116,  1117,  1118,  1119,  1120,  1121,  1122,   431,  1129,
     861,   865,   685,   890,   893,     6,   894,  1517,   897,   895,
     790,     7,     8,     9,   896,    10,    11,    12,  1510,    13,
     918,   986,   900,   924,     7,     8,     9,   987,    10,    11,
      12,    18,    13,   988,   995,   989,   171,   171,   171,  1033,
     171,     6,   990,   991,    18,   638,   639,     7,     8,     9,
     992,    10,    11,    12,  1003,    13,   993,  1012,  1013,  1019,
     994,   996,  1051,  1454,  1455,  1004,  1005,    18,  1459,  1020,
     431,  1006,  1007,  1008,   693,   694,  1009,  1010,  1011,  1056,
    1014,  1015,     6,   123,   127,  1058,  1016,  1017,     7,     8,
       9,   985,    10,    11,    12,  1034,    13,  1018,  1021,  1484,
    1897,  1059,   697,   698,  1038,   780,   781,  1060,    18,   782,
     783,   784,   785,   786,   787,   788,   789,  1500,  1501,   790,
    1503,  1504,   431,  1076,  1049,   169,   173,  1062,   862,    35,
    1080,  1081,  1511,  1082,  1130,  1064,  1068,  1057,  1065,  1071,
    1089,  1096,  1646,  1098,  1648,  1649,  1650,  1069,   702,   703,
    1083,  1044,  1046,  1047,  1048,  1084,  1099,  1100,  1053,  1101,
     199,   200,   201,  1513,  1108,  1138,  1151,  1192,  1188,  1154,
     691,  1190,   709,   710,  1191,  1204,  1210,  1206,   120,  1213,
    1214,  1215,  1573,   121,  1216,  1653,   122,  1218,  1220,  1221,
    1222,  1224,  1225,  1227,  1663,   349,  1228,  1229,   431,   266,
    1232,  1233,  1583,  1238,  1584,  1237,  1234,  1243,  1239,  1245,
     171,   171,  1246,  1247,  1248,  1566,  1249,   286,   171,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,  1252,
     553,  1254,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,  1257,  1258,
    1259,  1260,  1261,  1263,  1152,  1153,   720,   721,   171,  1265,
     171,  1266,  1267,  1268,  1269,  1270,  1285,  1164,  1271,    69,
    1512,  1272,   431,  1273,  1274,  1275,  1278,  1279,    69,  1734,
    1735,  1280,  1282,  1283,  1284,  1288,  1741,  1287,  1290,  1291,
    1765,  1292,   725,   726,  1294,  1295,  1769,  1297,  1298,  1299,
    1300,   353,   354,  1302,  1303,  1304,  1305,  1306,   359,  1307,
     171,  1308,  1762,  1763,  1217,   361,  1219,  1309,  1310,  1311,
    1312,  1313,  1314,  1226,  1315,  1352,  1316,  1353,  1354,  1355,
      35,  1356,  1375,   638,   747,  1380,  1357,  1715,  1360,  1717,
    1358,    35,  1359,  1361,  1406,  1362,  1363,    35,  1364,  1365,
    1366,  1367,  1368,  1369,  1381,  1255,    35,  1382,  1396,  1383,
     392,  1384,    35,    35,   169,  1400,   402,  1402,  1403,   223,
    1405,  1413,  1414,    69,    69,  1429,  1417,  1418,  1419,  1427,
      69,  1430,  1431,  1432,  1433,  1434,  1436,  1112,   465,  1113,
    1114,  1115,   470,  1438,  1810,  1439,  1811,  1450,  1451,  1452,
    1462,  1464,  1470,  1479,   472,  1485,    69,    69,  1491,  1486,
    1498,   473,   474,   475,   476,  1499,   477,   171,  1506,   481,
     482,   483,  1489,  1507,  1514,  1516,  1518,   496,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1519,  1123,  1124,  1523,  1885,
    1886,  1887,  1888,  1520,   205,  1524,   206,   207,   208,   209,
    1522,  1527,   210,   211,   212,   213,   214,   215,   216,   203,
     204,   205,   217,   206,   207,   208,   209,  1277,   218,   210,
     211,   212,   213,   214,   215,   216,  1528,  1394,  1556,   217,
    1562,  1563,  1565,  1568,  1567,   218,  1569,  1571,    69,   554,
      69,   547,   548,    92,    93,   649,  1574,   551,   776,   777,
     778,   779,   780,   781,    94,  1572,   782,   783,   784,   785,
     786,   787,   788,   789,  1575,  1587,   790,  1588,  1592,  1594,
    1597,   568,    95,    96,    97,    98,    99,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     673,  1600,   674,   675,  1603,  1576,  1586,  1613,  1616,  1593,
    1625,   431,   866,   867,   868,   869,   870,   871,   872,   873,
     874,  1125,  1626,   875,  1624,   171,  1627,  1629,  1453,   876,
    1630,  1631,  1633,   627,  1989,  1460,  1991,  1992,  1634,  1644,
    1465,  1635,   877,  1468,  1598,  1643,  1645,   630,  1471,  1194,
    1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,   431,  1651,
    1481,  1599,  1655,  1659,   676,   646,  1660,  1668,  1673,  1677,
    1678,   677,  1679,  1490,  1680,  1492,   208,   209,  1681,  1682,
     210,   211,   212,   213,   214,   215,   216,  1685,   171,  2031,
     217,  1683,  1698,  1684,  1697,    35,   218,  1701,  1686,  1515,
    1695,  1699,    35,  1704,  1705,   735,   736,  1700,  1743,   739,
    1706,  1707,  1709,  1716,  1728,  1731,  1732,  1738,  1739,  1740,
    1742,  1744,  1748,  1557,  1558,  1751,  1560,  1759,   171,  1757,
    1758,  1764,  1783,  1771,  1772,  1773,  1774,  1775,  1781,  1785,
    1784,  1786,  1787,  1570,  1790,  1788,  1793,   203,   204,   205,
     171,   206,   207,   208,   209,  1794,  1795,   210,   211,   212,
     213,   214,   215,   216,  1796,  1804,  1805,   217,  1822,  1823,
    1829,  1836,  1824,   218,    35,  1825,    35,  1826,    35,    35,
    1835,  1604,  1843,   678,  1112,   800,  1113,  1114,  1115,   679,
     680,  1846,  2013,  1847,  1848,   681,  1853,  1867,   682,  1856,
    1869,   920,   921,   683,   684,  1870,   685,  1871,   878,  1874,
      35,    92,    93,   649,  1878,  1879,  1880,   579,  1882,  1890,
     858,   859,    94,  1898,  1909,  1116,  1117,  1118,  1119,  1120,
    1121,  1122,  1910,  1123,  1124,  1899,  1905,  1913,  1915,  1920,
      95,    96,    97,    98,    99,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,  1921,
     674,   675,   919,  1923,   203,   204,   205,  1924,   206,   207,
     208,   209,  1925,  1926,   210,   211,   212,   213,   214,   215,
     216,   203,   204,   205,   217,   206,   207,   208,   209,  1929,
     218,   210,   211,   212,   213,   214,   215,   216,  1934,  1935,
    1940,   217,  1941,  1942,  1944,  1945,  1718,   218,  1946,  1948,
    1952,  1953,  1720,  1951,  1955,  1956,  1957,  1958,  1959,  1722,
    1961,  1962,   676,  1963,  1967,  1968,  1976,  1969,  1970,   677,
    1971,  1978,  1982,  1985,  1986,  1730,  1987,  1997,  1990,  2002,
    2005,  1993,    92,    93,   396,   161,  2007,  2000,    66,  2016,
    2017,  2020,  2022,    94,  2023,  2024,  1752,  2029,  1128,  2033,
    2038,  2039,  2043,  2049,  1077,   162,   163,   164,   165,   166,
    1761,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,  2025,  2030,  2046,  2040,
    2042,   203,   204,   205,  2045,   206,   207,   208,   209,  2051,
     397,   210,   211,   212,   213,   214,   215,   216,   795,  1230,
     637,   217,   967,  1078,   618,  1373,  1509,   218,     6,  1107,
    1750,  1031,   169,  1652,     7,     8,     9,  1207,    10,    11,
      12,   678,    13,     0,   169,     0,     0,   679,   680,    92,
      93,   160,   161,   681,    18,    66,   682,     0,     0,     0,
      94,   683,   684,     0,   685,     0,     0,  1165,     0,  1167,
       0,  1169,   162,   163,   164,   165,   166,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,  1211,  1854,     0,     0,     0,
       0,  1866,     0,  1868,    92,    93,     6,     0,     0,     0,
    1875,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,     0,  1884,     0,     0,     0,     0,     0,     0,
    1891,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,  1912,   167,     0,     0,     0,     0,     0,     0,
     953,     0,   954,   955,     0,   956,     0,     0,     0,   120,
       0,     0,     0,     0,   121,   957,     0,   122,     0,     0,
       0,     0,   398,     0,     0,   168,     0,  1605,     0,     0,
       0,     0,   958,   959,   960,     0,     0,     0,   729,   730,
     731,   732,     0,     0,    92,    93,   160,     0,  1960,   961,
       0,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1972,   162,   163,   164,
     165,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
     167,     0,     0,  1606,     0,   962,     0,     0,     0,     0,
       0,    92,    93,   160,     0,     0,   120,     0,     0,     0,
       0,   121,    94,     0,   122,     0,     0,  1412,     0,     0,
       0,     0,   168,     0,   162,   163,   164,   165,     0,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,  1607,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   963,     0,     0,
       0,   120,     0,     0,   964,     0,   121,     0,     0,   122,
       0,     0,     0,     0,     0,     0,     0,  1674,     0,     0,
    1456,  1457,  1458,     0,     0,     0,     0,  1463,     0,     0,
    1466,  1467,     0,     0,     0,  1469,     0,     0,  1472,  1473,
    1474,  1475,     0,     0,  1476,  1477,  1478,     0,  1480,     0,
       0,     0,  1482,  1483,     0,     0,     0,  1487,  1488,     0,
       0,     0,     0,     0,     0,   169,   169,   169,  1496,   169,
       0,     0,  1745,  1609,  1502,     0,  1746,   203,   204,   205,
       0,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,    92,
      93,     6,     0,   218,     0,     0,     0,     0,     0,     0,
      94,   120,     0,     0,     0,     0,   121,     0,     0,   122,
       0,     0,     0,     0,     0,     0,  1610,   168,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   203,   204,   205,     0,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,     0,     0,   120,   218,
       0,     0,     0,   121,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,   168,     0,     0,     0,   203,   204,
     205,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   203,   204,   205,   217,   206,
     207,   208,   209,     0,   218,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,     0,   169,
     169,   218,     0,     0,  1664,  1665,     0,   169,  1667,     0,
       0,     0,     0,     0,  1672,     0,  1675,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   808,
       0,     0,     0,     0,  1696,     7,     8,     9,     0,    10,
      11,   809,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,   169,  1711,   169,
    1713,  1714,     0,   203,   204,   205,     0,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
       0,  1612,     0,   217,     0,     0,     0,     0,     0,   218,
       0,     0,     0,  1729,     0,     0,     0,  1733,     0,     0,
    1736,  1737,     0,     0,     0,     0,   120,     0,     0,   169,
       0,   121,     0,     0,   122,     0,   203,   204,   205,   391,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,     0,
       0,     0,   218,     0,     0,     0,     0,  1766,  1767,  1768,
       0,     0,     0,     0,     0,     0,     0,     0,  1776,  1777,
    1778,  1779,  1780,     0,     0,     0,     0,     0,   810,     0,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,     0,     0,     0,   823,     0,     0,   824,     0,
       0,   825,     0,     0,   826,     0,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,     0,     0,     0,   843,   169,     0,     0,   808,
     844,  1821,     0,   845,     0,     7,     8,     9,     0,    10,
      11,   809,     0,    13,     0,     0,     0,     0,  1813,     0,
    1814,     0,     0,  1815,     0,    18,     0,     0,     0,     0,
       0,  1842,     0,     0,     0,     0,     0,     0,     0,     0,
    1849,  1850,  1851,  1852,     0,     0,  1855,     0,  1857,     0,
       0,     0,     0,     0,     0,     0,  1872,  1873,     0,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,     0,  1816,     0,     0,
       0,   846,     0,     0,     0,  1241,     0,     0,     0,     0,
       0,  1892,  1893,  1894,     0,  1895,     0,     0,     0,     0,
       0,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
    1911,   217,   206,   207,   208,   209,     0,   218,   210,   211,
     212,   213,   214,   215,   216,     0,     0,  1922,   217,     0,
       0,     0,     0,  1928,   218,     0,     0,     0,   810,     0,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,     0,     0,   169,   823,  1949,     0,   824,     0,
       0,   825,     0,     0,   826,     0,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,     0,     0,     0,   843,  1973,  1974,  1975,   808,
     844,     0,     0,   845,     0,     7,     8,     9,     0,    10,
      11,   809,  1817,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,   169,     0,     0,
       0,     0,     0,     0,  1813,  1614,  1814,     0,  1998,  1815,
       0,     0,     0,     0,     0,     0,     0,  2006,     0,     0,
    2009,     0,     0,     0,     0,     0,     0,     0,   808,     0,
       0,     0,     0,     0,     7,     8,     9,   169,    10,    11,
     809,  1708,    13,     0,  2027,  1116,  1117,  1118,  1119,  1120,
    1121,  1122,     0,  1816,    18,     0,     0,     0,     0,   169,
    2036,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
       0,  2044,     0,     0,     0,  2048,     0,     0,     0,     0,
    2052,     0,     0,  2054,   774,   775,   776,   777,   778,   779,
     780,   781,     0,     0,   782,   783,   784,   785,   786,   787,
     788,   789,     0,     0,   790,     0,     0,     0,   810,     0,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,     0,     0,     0,   823,     0,     0,   824,     0,
       0,   825,     0,     0,   826,     0,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,     0,     0,     0,   843,     0,     0,     0,     0,
     844,     0,     0,   845,     0,     0,     0,   810,     0,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,     0,     0,     0,   823,     0,     0,   824,  1820,     0,
     825,     0,     0,   826,     0,   827,   828,   829,   830,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,     0,     0,     0,   843,     0,     0,     0,   808,   844,
       0,     0,   845,     0,     7,     8,     9,     0,    10,    11,
     809,  1719,    13,     0,     0,   203,   204,   205,     0,   206,
     207,   208,   209,     0,    18,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,   777,   778,   779,   780,
     781,   218,     0,   782,   783,   784,   785,   786,   787,   788,
     789,     0,   808,   790,     0,     0,     0,     0,     7,     8,
       9,     0,    10,    11,   809,     0,    13,     0,     0,     0,
    1721,     0,     0,     0,     0,   203,   204,   205,    18,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,  1619,     0,     0,   217,     0,     0,     0,     0,
       0,   218,     0,     0,     0,     0,   808,     0,     0,     0,
       0,     0,     7,     8,     9,     0,    10,    11,   809,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,   810,     0,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,  1620,     0,     0,   823,     0,     0,   824,     0,     0,
     825,     0,     0,   826,     0,   827,   828,   829,   830,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,     0,     0,     0,   843,     0,     0,     0,     0,   844,
       0,   810,   845,   811,   812,   813,   814,   815,   816,   817,
     818,   819,   820,   821,   822,     0,     0,     0,   823,     0,
       0,   824,     0,     0,   825,     0,     0,   826,     0,   827,
     828,   829,   830,   831,   832,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   842,     0,     0,     0,   843,     0,
       0,     0,     0,   844,     0,   810,   845,   811,   812,   813,
     814,   815,   816,   817,   818,   819,   820,   821,   822,     0,
    1723,     0,   823,     0,     0,   824,     0,     0,   825,     0,
       0,   826,     0,   827,   828,   829,   830,   831,   832,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,     0,
       0,     0,   843,     0,     0,   808,     0,   844,     0,     0,
     845,     7,     8,     9,     0,    10,    11,   809,     0,    13,
       0,     0,     0,     0,  1724,     0,     0,     0,     0,     0,
       0,    18,   203,   204,   205,     0,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,     0,     0,   218,   808,
       0,     0,     0,     0,     0,     7,     8,     9,     0,    10,
      11,   809,     0,    13,     0,     0,     0,     0,  1725,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,   203,   204,   205,     0,   206,   207,   208,   209,  1837,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,   808,     0,     0,     0,   218,     0,     7,
       8,     9,     0,    10,    11,   809,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,   810,     0,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,  1838,     0,
       0,   823,     0,     0,   824,     0,     0,   825,     0,     0,
     826,     0,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,     0,     0,
       0,   843,     0,     0,     0,     0,   844,     0,   810,   845,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,     0,     0,     0,   823,     0,     0,   824,     0,
       0,   825,     0,     0,   826,     0,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,     0,     0,     0,   843,     0,     0,     0,     0,
     844,     0,   810,   845,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,     0,  1943,     0,   823,
       0,     0,   824,     0,     0,   825,     0,     0,   826,     0,
     827,   828,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   842,     0,     0,     0,   843,
       0,     0,   808,     0,   844,     0,     0,   845,     7,     8,
       9,     0,    10,    11,   809,     0,    13,     0,     0,     0,
       0,  1950,     0,     0,     0,     0,     0,     0,    18,   203,
     204,   205,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,     0,     0,     0,   218,   808,     0,     0,     0,
       0,     0,     7,     8,     9,     0,    10,    11,   809,     0,
      13,     0,     0,     0,     0,  1999,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,   203,   204,
     205,     0,   206,   207,   208,   209,  1839,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
     808,     0,     0,  1840,   218,     0,     7,     8,     9,     0,
      10,    11,   809,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,   810,     0,   811,   812,   813,   814,   815,   816,   817,
     818,   819,   820,   821,   822,  1841,     0,     0,   823,     0,
       0,   824,     0,     0,   825,     0,     0,   826,     0,   827,
     828,   829,   830,   831,   832,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   842,     0,     0,     0,   843,     0,
       0,     0,     0,   844,     0,   810,   845,   811,   812,   813,
     814,   815,   816,   817,   818,   819,   820,   821,   822,     0,
       0,     0,   823,     0,     0,   824,     0,     0,   825,     0,
       0,   826,     0,   827,   828,   829,   830,   831,   832,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,     0,
       0,     0,   843,     0,     0,     0,     0,   844,     0,   810,
     845,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,     0,  2001,  1954,   823,     0,     0,   824,
       0,     0,   825,     0,     0,   826,     0,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,     0,     0,     0,   843,     0,     0,   808,
       0,   844,     0,     0,   845,     7,     8,     9,     0,    10,
      11,   809,     0,    13,     0,     0,     0,     0,  2003,     0,
       0,     0,     0,     0,     0,    18,   203,   204,   205,     0,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   203,   204,   205,   217,   206,   207,   208,
     209,     0,   218,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,     0,     0,     0,   218,
       0,     0,  2004,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   204,   205,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   203,   204,   205,   217,   206,   207,   208,   209,
       0,   218,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,     0,     0,   218,     0,
       0,     0,     0,   374,     0,     0,     0,     0,   810,     0,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,     0,     0,     0,   823,     0,     0,   824,     0,
       0,   825,     0,     0,   826,     0,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,     0,     0,     0,   843,     0,     0,     0,     0,
     844,     0,     0,   845,     0,   203,   204,   205,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   203,   204,   205,   217,   206,   207,   208,   209,
     384,   218,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,    92,    93,   160,     0,     0,   218,     0,
       0,     0,     0,   381,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   162,   163,   164,   165,
     202,  2028,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,    92,    93,   160,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,  1074,     0,     0,     0,     0,     0,     0,     0,     0,
     162,   163,   164,   165,   278,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    92,    93,     6,   480,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   362,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,    92,    93,     6,   774,   775,
     776,   777,   778,   779,   780,   781,    94,     0,   782,   783,
     784,   785,   786,   787,   788,   789,     0,     0,   790,     0,
     898,     0,   386,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   203,
     204,   205,   467,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,   385,     0,     0,     0,   218,     0,     0,     0,   740,
     120,     0,     0,     0,     0,   121,     0,     0,   122,   203,
     204,   205,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,  1035,     0,     0,   217,
       0,     0,   203,   204,   205,   218,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,   120,     0,   364,     0,   218,   121,
       0,     0,   122,   203,   204,   205,     0,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
     203,   204,   205,   217,   206,   207,   208,   209,     0,   218,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,     0,     0,     0,   218,     0,   120,     0,
       0,   382,     0,   121,     0,     0,   122,   203,   204,   205,
       0,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   203,   204,   205,   217,   206,   207,
     208,   209,     0,   218,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,     0,     0,     0,
     218,     0,   120,     0,     0,   383,     0,   121,     0,     0,
     122,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,     0,     0,   218,     0,     0,
       0,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,     0,     0,   218,   203,   204,
     205,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,     0,     0,     0,   218,   203,   204,   205,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,     6,  1529,     0,   217,     0,     0,     7,     8,
       9,   218,    10,    11,    12,     0,    13,     0,    14,    15,
      16,    17,     0,     0,     0,     0,     0,     0,    18,   774,
     775,   776,   777,   778,   779,   780,   781,     0,     0,   782,
     783,   784,   785,   786,   787,   788,   789,     0,     0,   790,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1063,    19,     0,     0,  1530,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,  1531,     0,    24,     0,
       0,   203,   204,   205,     0,   206,   207,   208,   209,     0,
      25,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,     0,  1532,   218,     0,     0,
       0,    26,   461,     0,     0,     0,     0,  1533,  1534,  1535,
    1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,  1545,
    1546,  1547,  1548,  1549,  1550,  1551,  1552,  1553,  1554,  1555,
       0,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,     0,    27,   218,    28,   203,
     204,   205,   462,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,   203,   204,   205,   218,   206,   207,   208,   209,
     625,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,   203,   204,   205,   218,   206,
     207,   208,   209,   626,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,   203,   204,
     205,   218,   206,   207,   208,   209,  1317,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,   203,   204,   205,   218,   206,   207,   208,   209,  1325,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,   203,   204,   205,   218,   206,   207,
     208,   209,  1334,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,   203,   204,   205,
     218,   206,   207,   208,   209,  1564,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
     203,   204,   205,   218,   206,   207,   208,   209,  1589,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,   203,   204,   205,   218,   206,   207,   208,
     209,  1590,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,   203,   204,   205,   218,
     206,   207,   208,   209,  1591,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,   203,
     204,   205,   218,   206,   207,   208,   209,  1595,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,   203,   204,   205,   218,   206,   207,   208,   209,
    1601,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,   203,   204,   205,   218,   206,
     207,   208,   209,  1608,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,   203,   204,
     205,   218,   206,   207,   208,   209,  1628,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,   203,   204,   205,   218,   206,   207,   208,   209,  1791,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,   203,   204,   205,   218,   206,   207,
     208,   209,  1792,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,   203,   204,   205,
     218,   206,   207,   208,   209,  1800,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
     203,   204,   205,   218,   206,   207,   208,   209,  1806,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,   203,   204,   205,   218,   206,   207,   208,
     209,  1807,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,   203,   204,   205,   218,
     206,   207,   208,   209,  1831,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,   203,
     204,   205,   218,   206,   207,   208,   209,  1832,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,   203,   204,   205,   218,   206,   207,   208,   209,
    1833,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,   203,   204,   205,   218,   206,
     207,   208,   209,  1883,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,   203,   204,
     205,   218,   206,   207,   208,   209,  1904,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,   203,   204,   205,   218,   206,   207,   208,   209,  1906,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,   203,   204,   205,   218,   206,   207,
     208,   209,  1936,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,   203,   204,   205,
     218,   206,   207,   208,   209,  1937,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
     203,   204,   205,   218,   206,   207,   208,   209,  1938,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,   203,   204,   205,   218,   206,   207,   208,
     209,  2014,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,   203,   204,   205,   218,
     206,   207,   208,   209,  2041,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,   203,
     204,   205,   218,   206,   207,   208,   209,  2050,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,   203,   204,   205,   218,   206,   207,   208,   209,
    2053,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,     0,     0,   218,   203,
     204,   205,   281,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,     0,     0,     0,   218,   203,   204,   205,   348,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,     0,
       0,     0,   218,   203,   204,   205,   484,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,     0,     0,     0,   218,
     203,   204,   205,   561,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,     0,     0,     0,   218,   203,   204,   205,
     562,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
       0,     0,     0,   218,   203,   204,   205,   737,   206,   207,
     208,   209,     0,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,     0,     0,     0,
     218,   203,   204,   205,   857,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,     0,     0,   218,   203,   204,
     205,   952,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,     0,     0,     0,   218,   203,   204,   205,  1782,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,     0,     0,
       0,   218,   203,   204,   205,  1896,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,     0,     0,   218,   203,
     204,   205,  1964,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,     0,     0,     0,   218,   203,   204,   205,  1966,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,     0,
       0,     0,   218,   203,   204,   205,  1994,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,     0,     0,     0,   218,
     203,   204,   205,  1995,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,     0,     0,     0,   218,   203,   204,   205,
    1996,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
       0,     0,     0,   218,   203,   204,   205,  2018,   206,   207,
     208,   209,     0,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,     0,     0,     0,
     218,   203,   204,   205,  2021,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,     0,     0,   218,   203,   204,
     205,  2047,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,     0,     0,     0,   218,   203,   204,   205,  2055,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,   219,   203,   204,
     205,   218,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
     308,   203,   204,   205,   218,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,   365,     0,   218,   203,   204,
     205,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,     0,   366,     0,   218,   203,   204,   205,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,     0,   367,
       0,   218,   203,   204,   205,     0,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,   368,     0,   218,   203,
     204,   205,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,     0,   369,     0,   218,   203,   204,   205,     0,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,     0,
     370,     0,   218,   203,   204,   205,     0,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,     0,   371,     0,   218,
     203,   204,   205,     0,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,     0,   372,     0,   218,   203,   204,   205,
       0,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
       0,   373,     0,   218,   203,   204,   205,     0,   206,   207,
     208,   209,     0,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,     0,   375,     0,
     218,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,   376,     0,   218,   203,   204,
     205,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,     0,   377,     0,   218,   203,   204,   205,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,     0,   378,
       0,   218,   203,   204,   205,     0,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,   379,     0,   218,   203,
     204,   205,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,     0,   380,     0,   218,   203,   204,   205,     0,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,     0,
     469,     0,   218,   203,   204,   205,     0,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,     0,   500,     0,   218,
     203,   204,   205,     0,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,     0,   556,     0,   218,   203,   204,   205,
       0,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
       0,   557,     0,   218,   203,   204,   205,     0,   206,   207,
     208,   209,     0,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,     0,   558,     0,
     218,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,   559,     0,   218,   203,   204,
     205,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
     560,   203,   204,   205,   218,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,   631,   203,   204,   205,   218,   206,   207,
     208,   209,     0,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,     0,   751,     0,
     218,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,   854,     0,   218,   203,   204,
     205,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,     0,   855,     0,   218,   203,   204,   205,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,     0,  1632,
       0,   218,   203,   204,   205,     0,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,  1789,     0,   218,   203,
     204,   205,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   217,
       0,     0,     0,  1803,     0,   218,   203,   204,   205,     0,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   217,     0,     0,     0,
    1901,     0,   218,   203,   204,   205,     0,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   217,     0,     0,     0,  1902,     0,   218,
     203,   204,   205,     0,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
     217,     0,     0,     0,  1903,     0,   218,   203,   204,   205,
       0,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,   217,     0,     0,
       0,  1908,     0,   218,   203,   204,   205,     0,   206,   207,
     208,   209,     0,     0,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   217,     0,     0,     0,  1918,     0,
     218,   203,   204,   205,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,   217,     0,     0,     0,  1919,     0,   218,   203,   204,
     205,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,   217,     0,
       0,     0,  1939,     0,   218,   203,   204,   205,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,   217,     0,     0,     0,  1980,
       0,   218,   203,   204,   205,     0,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,   217,     0,     0,     0,  2034,     0,   218,   774,
     775,   776,   777,   778,   779,   780,   781,     0,     0,   782,
     783,   784,   785,   786,   787,   788,   789,     0,     0,   790,
       0,     0,     0,  1410,   774,   775,   776,   777,   778,   779,
     780,   781,     0,     0,   782,   783,   784,   785,   786,   787,
     788,   789,     0,     0,   790
};

static const yytype_int16 yycheck[] =
{
       5,   504,     7,   649,   498,   968,    85,   936,   937,     5,
     890,    85,    17,   395,   517,   895,   896,     3,  1203,     5,
       5,     5,  1207,    28,   527,     5,     5,     5,   531,     5,
       7,    71,   535,     5,     5,    40,   633,   334,     3,  1451,
       5,   175,    77,    83,   426,   236,   145,   146,   236,     5,
       5,     5,  1464,     3,   260,     5,     5,     3,  1470,     5,
       3,     5,     5,    98,   270,     7,     5,  1479,   236,   260,
     263,    84,   265,  1485,  1486,    88,     5,     0,   266,   178,
      66,   962,    11,    12,    13,    98,    15,    16,    17,     5,
      19,     5,    71,   974,     5,     5,   393,   394,   266,    71,
       0,   260,    31,   258,   401,   260,   590,   266,   754,     5,
     756,   270,   236,    67,   852,    11,    12,    13,   266,    15,
      16,    17,   270,    19,     5,   249,   270,    66,   866,   867,
     868,   869,    71,   267,     7,    31,   260,   259,    25,   258,
     145,   146,   880,   148,   149,   742,   268,   152,   153,   154,
     155,   156,   157,   158,   258,    71,   259,     7,    84,   259,
      71,    71,     5,     6,    90,   268,     9,    10,   268,    98,
     257,    25,    98,   178,   273,   274,   263,   148,   149,   100,
     145,   152,   153,   154,   155,   156,   157,   569,  1068,   110,
     111,   112,    88,   327,   259,   679,   680,   681,   682,   260,
     938,   939,    98,   268,   266,    25,   135,     5,     6,  1394,
       5,     9,    10,   142,   101,   266,    11,    12,    13,   224,
      15,    16,    17,   961,    19,    84,   325,   267,   109,    88,
      89,  1111,   267,   266,   267,    84,    31,    25,   119,   261,
     136,   137,   138,   139,   140,   141,   268,   101,   266,    98,
     215,     5,   270,   635,   267,   334,   266,    11,    12,    13,
     334,    15,    16,    17,   363,    19,  1004,   266,   273,   274,
      65,   261,   258,   757,   270,   260,   270,    31,   268,   358,
     266,   101,   266,   269,   263,   270,   266,   266,   266,   266,
     266,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   250,   258,   793,
     266,   266,   258,   101,   258,   258,   266,   266,   260,   269,
     325,   266,     5,   269,   263,   270,   269,    25,    11,    12,
      13,   590,    15,    16,    17,   340,    19,   342,   267,   344,
      98,   267,   100,   236,   258,   261,   267,   263,    31,   263,
     108,   266,   263,   263,   453,   261,  1236,    20,   363,   493,
      25,   266,   268,   266,   251,   119,   120,   121,   122,   340,
     864,   267,     5,   344,   266,   267,   267,   268,    11,    12,
      13,   261,    15,    16,    17,  1123,    19,    70,   268,   261,
     266,  1129,   235,   398,   270,   266,   268,   251,    31,   270,
     405,   244,   245,   101,   261,    88,   260,     6,   267,   267,
     268,   268,     7,    20,   419,    98,    99,   901,   267,   266,
     679,   680,   681,   682,   107,    88,   109,    90,   433,    80,
      81,   251,    88,   438,  1846,   266,   101,   235,   101,   444,
     260,   446,   447,    88,  1856,   450,   234,   452,   453,   267,
     268,   114,   266,    98,   261,   100,   112,  1195,  1196,  1197,
       7,   268,     5,   251,   268,   269,  1204,   118,   132,   132,
     261,  1656,   267,   260,  1355,  1356,  1357,   268,  1359,   266,
       5,   132,   261,    90,   489,    88,    11,    12,    13,   268,
      15,    16,    17,   498,    19,    98,  1234,     7,   757,     7,
     249,   250,   251,   252,   253,  1243,    31,     7,   257,   267,
       7,   114,     7,   267,   263,   118,   775,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   266,   267,   793,   142,  1948,   260,    98,  1951,
     251,   252,   253,   266,  1038,   260,   257,   266,   267,  1961,
    1962,   266,   263,   251,   114,  1435,   261,  1437,   165,   166,
     261,   261,   260,   268,     5,  1049,     7,   268,   268,   266,
     267,   260,   577,  1758,     5,     6,   136,  1315,  1081,  1063,
      21,    22,    23,   261,   267,   590,   251,   592,  2000,  1073,
     268,   596,   261,   598,     7,   260,     7,    38,     7,   268,
     261,   606,   607,     7,   267,   610,   577,   268,     7,   614,
     266,   267,   249,   250,   251,   252,   267,   261,   623,   261,
    1549,   592,   267,     7,   268,   596,   268,   598,   633,  1367,
     190,   268,   637,   266,   267,   606,   607,   267,   268,   610,
     266,   267,   901,   614,   267,   268,     7,     5,  1529,  1530,
     267,   268,   623,    11,    12,    13,  1537,    15,    16,    17,
     267,    19,   267,   268,   267,     7,   637,   267,   268,   267,
     268,   267,   268,    31,   679,   680,   681,   682,     5,     7,
     685,   267,   268,     7,    11,    12,    13,     5,    15,    16,
      17,     7,    19,    11,    12,    13,     7,    15,    16,    17,
     193,    19,   266,   267,    31,  1443,  1587,   267,  1589,   267,
     268,    69,   258,    31,   267,   268,   266,     5,   723,   679,
     680,   681,   682,    11,    12,    13,   259,    15,    16,    17,
     266,    19,   251,   252,   253,   254,   260,   742,   257,   267,
     268,   266,   267,    31,   260,    91,    92,    93,    94,    95,
      96,   260,   757,   267,   268,   196,   260,    98,  1639,   100,
     101,   102,   103,   104,   105,   106,   260,   772,   267,   268,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,  1749,  1750,   793,  1527,
     924,    98,   267,   268,  1440,  1441,  1442,   757,   267,   268,
     267,   268,   807,   808,  1063,   260,     3,   267,   268,   260,
       7,   267,   268,   260,  1073,   775,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   267,   268,   793,   260,   142,   807,   267,   268,   267,
     268,  1223,   260,     5,   260,   850,   851,   852,   260,    11,
      12,    13,   260,    15,    16,    17,     7,    19,   863,   864,
     260,   866,   867,   868,   869,  1746,   260,    64,   260,    31,
     875,   260,  1254,    70,   973,   880,   975,   267,   268,   260,
    1262,   260,  1264,   962,   260,   192,    83,   194,    85,   249,
     250,   251,   252,   253,   254,   974,   901,   257,   267,   268,
      97,   267,   268,    20,   101,  1785,  1005,  1540,  1541,   267,
     217,   260,   142,   260,  1296,   145,   113,   260,     7,  1301,
    1404,   267,   260,   260,   929,   260,   267,   260,   158,   159,
     160,  1415,     7,   938,   939,     7,   268,   134,     7,   266,
     267,   901,     5,   948,     5,   260,   260,   268,   266,   267,
     236,   236,   957,   958,   236,   261,   961,   266,   268,   261,
     267,   261,     7,   261,     7,   260,   971,   972,   973,     5,
     975,   976,   977,    90,     5,   266,   981,     5,   266,   267,
       5,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     266,   266,   189,     5,   191,     5,   266,   266,   266,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,   236,  1021,   261,   135,     5,
    1025,     5,     5,  1904,     5,   142,   143,   266,   266,   266,
      11,    12,    13,  1038,    15,    16,    17,   267,    19,     5,
     266,   266,     5,     5,   261,   524,     7,  1927,   165,     7,
      31,   168,   169,     5,   142,     8,     7,   145,  1063,    11,
      12,    13,     7,    15,    16,    17,     7,    19,  1073,     7,
     158,   159,     7,   236,   162,   163,   266,     7,  1816,    31,
       7,     5,     7,   260,   260,   251,  1967,    11,    12,    13,
       7,    15,    16,    17,     7,    19,     7,     7,     7,     3,
       4,     5,     5,  1063,   266,   267,   236,    31,     7,   266,
       7,     7,     7,  1073,   267,     7,     7,     7,  1123,     7,
       7,     7,   261,   602,  1129,  1863,  2007,     5,    32,    33,
      34,    35,    36,    11,    12,    13,    68,    15,    16,    17,
    1786,    19,   263,     7,     5,   251,   266,     7,  2029,     7,
     267,     5,     7,    31,     7,     7,  1415,    11,    12,    13,
     267,    15,    16,    17,   266,    19,     8,   261,   260,   260,
     260,     3,     4,     5,   260,   260,     5,    31,     3,   267,
     260,     5,    14,   260,     7,  1190,  1191,   266,  1682,   260,
    1195,  1196,  1197,   266,    26,    27,    28,    29,   266,  1204,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   266,   260,   260,   260,  1234,
     267,   124,   125,   126,   127,   128,   129,   130,  1243,   132,
     261,   260,   266,   260,     5,     5,     5,  1381,   244,   260,
     257,    11,    12,    13,   260,    15,    16,    17,     5,    19,
       3,   260,   267,   266,    11,    12,    13,   260,    15,    16,
      17,    31,    19,   260,     7,   260,  1355,  1356,  1357,     6,
    1359,     5,   260,   260,    31,   266,   267,    11,    12,    13,
     260,    15,    16,    17,   266,    19,   260,   266,   266,   266,
     260,   260,     5,  1308,  1309,   260,   260,    31,  1313,   266,
    1315,   260,   260,   260,   266,   267,   260,   260,   260,     5,
     260,   260,     5,    43,    44,     5,   260,   260,    11,    12,
      13,   810,    15,    16,    17,   236,    19,   260,   260,  1344,
    1843,     5,   266,   267,   263,   243,   244,   261,    31,   247,
     248,   249,   250,   251,   252,   253,   254,  1362,  1363,   257,
    1365,  1366,  1367,     5,   266,    85,    86,   261,     5,  1374,
       5,     5,   119,     5,   267,   260,   260,   266,   261,   261,
       5,     5,  1516,     5,  1518,  1519,  1520,   267,   266,   267,
     266,   870,   871,   872,   873,   266,     5,     5,   877,     5,
     120,   121,   122,  1374,     3,     5,     7,   266,     5,     7,
    1415,   260,   266,   267,   260,   260,   266,   268,   250,     7,
       7,     7,  1427,   255,     7,  1524,   258,     7,     7,     7,
       7,     7,     7,     7,  1533,   267,     7,     7,  1443,   159,
       7,     7,  1447,   261,  1449,   266,   268,   260,   268,     7,
    1529,  1530,     7,     7,     7,  1415,     7,   177,  1537,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   266,
       8,     5,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,     7,     7,
       7,     7,     7,     7,   983,   984,   266,   267,  1587,     7,
    1589,     7,     7,     7,     7,     7,   260,   996,     7,  1524,
     267,     7,  1527,     7,     7,     7,     7,     7,  1533,  1628,
    1629,     7,     5,     5,     5,   260,  1635,     7,   260,     5,
    1674,     5,   266,   267,     7,     7,  1680,     7,     7,     7,
       7,   271,   272,     7,     7,   261,   261,   261,   278,   268,
    1639,   268,  1661,  1662,  1043,   285,  1045,   268,   268,   268,
     268,   268,   268,  1052,   268,   268,   261,   261,   268,   268,
    1585,   268,     7,   266,   267,   266,   268,  1592,   267,  1594,
     268,  1596,   268,   267,     7,   268,   268,  1602,   268,   268,
     268,   268,   268,   261,   266,  1084,  1611,   266,   268,   266,
     330,   266,  1617,  1618,   334,   267,   336,   268,   268,   268,
     268,     3,   261,  1628,  1629,   261,     7,   114,     7,   260,
    1635,     7,     7,     7,     3,     7,     7,    83,   358,    85,
      86,    87,   362,     7,  1743,     7,  1745,     7,   266,     7,
       7,   266,   266,   266,   374,   266,  1661,  1662,     7,   266,
       7,   381,   382,   383,   384,     7,   386,  1746,     5,   389,
     390,   391,   266,     7,   210,   266,   266,  1682,   124,   125,
     126,   127,   128,   129,   130,   266,   132,   133,     5,  1823,
    1824,  1825,  1826,   266,   239,   260,   241,   242,   243,   244,
     261,   132,   247,   248,   249,   250,   251,   252,   253,   237,
     238,   239,   257,   241,   242,   243,   244,     7,   263,   247,
     248,   249,   250,   251,   252,   253,     7,  1206,   268,   257,
     261,   261,   261,     5,   261,   263,     5,     5,  1743,   267,
    1745,   461,   462,     3,     4,     5,     7,   467,   239,   240,
     241,   242,   243,   244,    14,     5,   247,   248,   249,   250,
     251,   252,   253,   254,     7,   268,   257,   268,   268,   268,
       7,   491,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     7,    62,    63,     7,   261,   261,     7,     7,   261,
     261,  1816,    71,    72,    73,    74,    75,    76,    77,    78,
      79,   267,   261,    82,   268,  1904,   268,   268,  1307,    88,
     268,   268,   261,   553,  1968,  1314,  1970,  1971,   261,     5,
    1319,   268,   101,  1322,     7,   266,   268,   567,  1327,   201,
     202,   203,   204,   205,   206,   207,   208,   209,  1863,     7,
    1339,     7,     7,   266,   124,   585,     5,     5,     5,   266,
     266,   131,   266,  1352,   266,  1354,   243,   244,     3,   263,
     247,   248,   249,   250,   251,   252,   253,   267,  1967,  2023,
     257,   261,     7,   261,   267,  1900,   263,     7,   261,  1378,
     261,   267,  1907,     7,     7,   625,   626,   261,   137,   629,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,  1402,  1403,   266,  1405,     7,  2007,   268,
     261,     6,   113,     7,     7,     7,     7,     5,   266,   268,
       7,   268,    18,  1422,   268,   261,   268,   237,   238,   239,
    2029,   241,   242,   243,   244,   261,   268,   247,   248,   249,
     250,   251,   252,   253,   268,   261,   261,   257,   268,   266,
     268,     7,   266,   263,  1979,   266,  1981,   266,  1983,  1984,
     268,     7,     5,   243,    83,   705,    85,    86,    87,   249,
     250,   266,  1997,     7,     7,   255,     7,     7,   258,   266,
       7,   261,   262,   263,   264,     7,   266,     7,   267,     7,
    2015,     3,     4,     5,     5,     5,     5,   266,   260,     7,
     740,   741,    14,   261,     5,   124,   125,   126,   127,   128,
     129,   130,     5,   132,   133,   261,   261,     5,   261,   267,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     7,
      62,    63,   792,     7,   237,   238,   239,     7,   241,   242,
     243,   244,     7,     7,   247,   248,   249,   250,   251,   252,
     253,   237,   238,   239,   257,   241,   242,   243,   244,   267,
     263,   247,   248,   249,   250,   251,   252,   253,     7,   268,
       7,   257,     7,     7,     7,     7,  1595,   263,     7,   266,
       7,     7,  1601,   266,     7,     7,     7,     7,     7,  1608,
     266,   266,   124,     7,   266,   266,     7,   267,   266,   131,
     266,   268,   261,     7,   261,  1624,   266,    64,   266,     7,
       7,   267,     3,     4,     5,     6,   268,   266,     9,     7,
       7,   267,   267,    14,   266,     7,  1645,   268,   267,   267,
     134,     7,     5,     7,   927,    26,    27,    28,    29,    30,
    1659,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   266,   266,  2043,   267,
     267,   237,   238,   239,   266,   241,   242,   243,   244,   267,
      71,   247,   248,   249,   250,   251,   252,   253,   689,  1056,
     576,   257,   804,   928,   541,  1191,  1373,   263,     5,   959,
    1643,   851,   962,  1523,    11,    12,    13,  1031,    15,    16,
      17,   243,    19,    -1,   974,    -1,    -1,   249,   250,     3,
       4,     5,     6,   255,    31,     9,   258,    -1,    -1,    -1,
      14,   263,   264,    -1,   266,    -1,    -1,   997,    -1,   999,
      -1,  1001,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,  1035,  1795,    -1,    -1,    -1,
      -1,  1800,    -1,  1802,     3,     4,     5,    -1,    -1,    -1,
    1809,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1822,    -1,    -1,    -1,    -1,    -1,    -1,
    1829,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,  1861,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,   250,
      -1,    -1,    -1,    -1,   255,    98,    -1,   258,    -1,    -1,
      -1,    -1,   263,    -1,    -1,   266,    -1,     7,    -1,    -1,
      -1,    -1,   115,   116,   117,    -1,    -1,    -1,   195,   196,
     197,   198,    -1,    -1,     3,     4,     5,    -1,  1917,   132,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1935,    26,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
     234,    -1,    -1,     7,    -1,   188,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,   250,    -1,    -1,    -1,
      -1,   255,    14,    -1,   258,    -1,    -1,  1237,    -1,    -1,
      -1,    -1,   266,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,
      -1,   250,    -1,    -1,   267,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,
    1310,  1311,  1312,    -1,    -1,    -1,    -1,  1317,    -1,    -1,
    1320,  1321,    -1,    -1,    -1,  1325,    -1,    -1,  1328,  1329,
    1330,  1331,    -1,    -1,  1334,  1335,  1336,    -1,  1338,    -1,
      -1,    -1,  1342,  1343,    -1,    -1,    -1,  1347,  1348,    -1,
      -1,    -1,    -1,    -1,    -1,  1355,  1356,  1357,  1358,  1359,
      -1,    -1,   211,     7,  1364,    -1,   215,   237,   238,   239,
      -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,     3,
       4,     5,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
      14,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,    -1,     7,   266,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   237,   238,   239,    -1,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,   250,   263,
      -1,    -1,    -1,   255,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,   237,   238,
     239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,   237,   238,   239,   257,   241,
     242,   243,   244,    -1,   263,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,  1529,
    1530,   263,    -1,    -1,  1534,  1535,    -1,  1537,  1538,    -1,
      -1,    -1,    -1,    -1,  1544,    -1,  1546,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,  1564,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,  1587,  1588,  1589,
    1590,  1591,    -1,   237,   238,   239,    -1,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,     7,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,
      -1,    -1,    -1,  1623,    -1,    -1,    -1,  1627,    -1,    -1,
    1630,  1631,    -1,    -1,    -1,    -1,   250,    -1,    -1,  1639,
      -1,   255,    -1,    -1,   258,    -1,   237,   238,   239,   263,
     241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,  1677,  1678,  1679,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1688,  1689,
    1690,  1691,  1692,    -1,    -1,    -1,    -1,    -1,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,    -1,   161,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,   170,    -1,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,    -1,    -1,   191,  1746,    -1,    -1,     5,
     196,  1751,    -1,   199,    -1,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    88,    -1,    31,    -1,    -1,    -1,    -1,
      -1,  1781,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1790,  1791,  1792,  1793,    -1,    -1,  1796,    -1,  1798,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1806,  1807,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,   132,    -1,    -1,
      -1,   267,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,  1831,  1832,  1833,    -1,  1835,    -1,    -1,    -1,    -1,
      -1,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
    1860,   257,   241,   242,   243,   244,    -1,   263,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,  1877,   257,    -1,
      -1,    -1,    -1,  1883,   263,    -1,    -1,    -1,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,  1904,   161,  1906,    -1,   164,    -1,
      -1,   167,    -1,    -1,   170,    -1,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,    -1,    -1,   191,  1936,  1937,  1938,     5,
     196,    -1,    -1,   199,    -1,    11,    12,    13,    -1,    15,
      16,    17,   267,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,  1967,    -1,    -1,
      -1,    -1,    -1,    -1,    83,     7,    85,    -1,  1978,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1987,    -1,    -1,
    1990,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,  2007,    15,    16,
      17,   267,    19,    -1,  2014,   124,   125,   126,   127,   128,
     129,   130,    -1,   132,    31,    -1,    -1,    -1,    -1,  2029,
    2030,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,  2041,    -1,    -1,    -1,  2045,    -1,    -1,    -1,    -1,
    2050,    -1,    -1,  2053,   237,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,   257,    -1,    -1,    -1,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,    -1,   161,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,   170,    -1,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
     196,    -1,    -1,   199,    -1,    -1,    -1,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,    -1,    -1,   161,    -1,    -1,   164,   267,    -1,
     167,    -1,    -1,   170,    -1,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,    -1,    -1,    -1,   191,    -1,    -1,    -1,     5,   196,
      -1,    -1,   199,    -1,    11,    12,    13,    -1,    15,    16,
      17,   267,    19,    -1,    -1,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    31,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,   240,   241,   242,   243,
     244,   263,    -1,   247,   248,   249,   250,   251,   252,   253,
     254,    -1,     5,   257,    -1,    -1,    -1,    -1,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
     267,    -1,    -1,    -1,    -1,   237,   238,   239,    31,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,     7,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     7,    -1,    -1,   161,    -1,    -1,   164,    -1,    -1,
     167,    -1,    -1,   170,    -1,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,   196,
      -1,   144,   199,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,    -1,   161,    -1,
      -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,    -1,    -1,   191,    -1,
      -1,    -1,    -1,   196,    -1,   144,   199,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
     267,    -1,   161,    -1,    -1,   164,    -1,    -1,   167,    -1,
      -1,   170,    -1,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
      -1,    -1,   191,    -1,    -1,     5,    -1,   196,    -1,    -1,
     199,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    31,   237,   238,   239,    -1,   241,   242,   243,   244,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,   237,   238,   239,    -1,   241,   242,   243,   244,     7,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,     5,    -1,    -1,    -1,   263,    -1,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     7,    -1,
      -1,   161,    -1,    -1,   164,    -1,    -1,   167,    -1,    -1,
     170,    -1,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,    -1,
      -1,   191,    -1,    -1,    -1,    -1,   196,    -1,   144,   199,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,    -1,   161,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,   170,    -1,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
     196,    -1,   144,   199,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,    -1,   267,    -1,   161,
      -1,    -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,    -1,    -1,   191,
      -1,    -1,     5,    -1,   196,    -1,    -1,   199,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    31,   237,
     238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,   263,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,   237,   238,
     239,    -1,   241,   242,   243,   244,     7,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
       5,    -1,    -1,     7,   263,    -1,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,     7,    -1,    -1,   161,    -1,
      -1,   164,    -1,    -1,   167,    -1,    -1,   170,    -1,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,    -1,    -1,   191,    -1,
      -1,    -1,    -1,   196,    -1,   144,   199,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
      -1,    -1,   161,    -1,    -1,   164,    -1,    -1,   167,    -1,
      -1,   170,    -1,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
      -1,    -1,   191,    -1,    -1,    -1,    -1,   196,    -1,   144,
     199,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   267,     7,   161,    -1,    -1,   164,
      -1,    -1,   167,    -1,    -1,   170,    -1,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,    -1,    -1,   191,    -1,    -1,     5,
      -1,   196,    -1,    -1,   199,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    31,   237,   238,   239,    -1,
     241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,   237,   238,   239,   257,   241,   242,   243,
     244,    -1,   263,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,   237,   238,   239,   257,   241,   242,   243,   244,
      -1,   263,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,    -1,   161,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,   170,    -1,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
     196,    -1,    -1,   199,    -1,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,   237,   238,   239,   257,   241,   242,   243,   244,
       8,   263,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,     3,     4,     5,    -1,    -1,   263,    -1,
      -1,    -1,    -1,   268,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
       8,   267,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,     8,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     3,     4,     5,   237,   238,
     239,   240,   241,   242,   243,   244,    14,    -1,   247,   248,
     249,   250,   251,   252,   253,   254,    -1,    -1,   257,    -1,
     259,    -1,     8,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   237,
     238,   239,     8,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,   259,    -1,    -1,    -1,   263,    -1,    -1,    -1,     8,
     250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,   237,
     238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,     8,    -1,    -1,   257,
      -1,    -1,   237,   238,   239,   263,   241,   242,   243,   244,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,   250,    -1,   261,    -1,   263,   255,
      -1,    -1,   258,   237,   238,   239,    -1,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
     237,   238,   239,   257,   241,   242,   243,   244,    -1,   263,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,    -1,   250,    -1,
      -1,   268,    -1,   255,    -1,    -1,   258,   237,   238,   239,
      -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
     250,   251,   252,   253,   237,   238,   239,   257,   241,   242,
     243,   244,    -1,   263,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,    -1,   250,    -1,    -1,   268,    -1,   255,    -1,    -1,
     258,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   237,   238,
     239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,     5,    77,    -1,   257,    -1,    -1,    11,    12,
      13,   263,    15,    16,    17,    -1,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,   237,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     268,    64,    -1,    -1,   138,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,   170,    -1,   101,    -1,
      -1,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
     113,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,   200,   263,    -1,    -1,
      -1,   134,   268,    -1,    -1,    -1,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,   189,   263,   191,   237,
     238,   239,   268,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,   237,   238,   239,   263,   241,   242,   243,   244,
     268,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,   237,   238,   239,   263,   241,
     242,   243,   244,   268,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,   237,   238,
     239,   263,   241,   242,   243,   244,   268,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,   237,   238,   239,   263,   241,   242,   243,   244,   268,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,   237,   238,   239,   263,   241,   242,
     243,   244,   268,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,   237,   238,   239,
     263,   241,   242,   243,   244,   268,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
     237,   238,   239,   263,   241,   242,   243,   244,   268,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,   237,   238,   239,   263,   241,   242,   243,
     244,   268,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,   237,   238,   239,   263,
     241,   242,   243,   244,   268,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,   237,
     238,   239,   263,   241,   242,   243,   244,   268,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,   237,   238,   239,   263,   241,   242,   243,   244,
     268,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,   237,   238,   239,   263,   241,
     242,   243,   244,   268,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,   237,   238,
     239,   263,   241,   242,   243,   244,   268,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,   237,   238,   239,   263,   241,   242,   243,   244,   268,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,   237,   238,   239,   263,   241,   242,
     243,   244,   268,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,   237,   238,   239,
     263,   241,   242,   243,   244,   268,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
     237,   238,   239,   263,   241,   242,   243,   244,   268,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,   237,   238,   239,   263,   241,   242,   243,
     244,   268,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,   237,   238,   239,   263,
     241,   242,   243,   244,   268,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,   237,
     238,   239,   263,   241,   242,   243,   244,   268,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,   237,   238,   239,   263,   241,   242,   243,   244,
     268,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,   237,   238,   239,   263,   241,
     242,   243,   244,   268,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,   237,   238,
     239,   263,   241,   242,   243,   244,   268,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,   237,   238,   239,   263,   241,   242,   243,   244,   268,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,   237,   238,   239,   263,   241,   242,
     243,   244,   268,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,   237,   238,   239,
     263,   241,   242,   243,   244,   268,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
     237,   238,   239,   263,   241,   242,   243,   244,   268,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,   237,   238,   239,   263,   241,   242,   243,
     244,   268,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,   237,   238,   239,   263,
     241,   242,   243,   244,   268,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,   237,
     238,   239,   263,   241,   242,   243,   244,   268,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,   237,   238,   239,   263,   241,   242,   243,   244,
     268,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   237,
     238,   239,   267,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,   263,   237,   238,   239,   267,
     241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,   237,   238,   239,   267,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,
     237,   238,   239,   267,   241,   242,   243,   244,    -1,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,   237,   238,   239,
     267,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,   263,   237,   238,   239,   267,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,   237,   238,   239,   267,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   237,   238,
     239,   267,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,   237,   238,   239,   267,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,   263,   237,   238,   239,   267,   241,   242,   243,   244,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   237,
     238,   239,   267,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,   263,   237,   238,   239,   267,
     241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,   237,   238,   239,   267,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,
     237,   238,   239,   267,   241,   242,   243,   244,    -1,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,   237,   238,   239,
     267,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,   263,   237,   238,   239,   267,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,   237,   238,   239,   267,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   237,   238,
     239,   267,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,   237,   238,   239,   267,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,   259,   237,   238,
     239,   263,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
     259,   237,   238,   239,   263,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,
     239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,    -1,   261,    -1,   263,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,   263,   237,   238,   239,    -1,   241,   242,   243,   244,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,
     238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,   263,   237,   238,   239,    -1,
     241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,
     261,    -1,   263,   237,   238,   239,    -1,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,
     237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,   239,
      -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,   263,   237,   238,   239,    -1,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
     263,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,
     239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,    -1,   261,    -1,   263,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,   263,   237,   238,   239,    -1,   241,   242,   243,   244,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,
     238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,   263,   237,   238,   239,    -1,
     241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,
     261,    -1,   263,   237,   238,   239,    -1,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,
     237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,   239,
      -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,   263,   237,   238,   239,    -1,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
     263,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,
     239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
     259,   237,   238,   239,   263,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,   259,   237,   238,   239,   263,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
     263,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,
     239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,    -1,   261,    -1,   263,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,   263,   237,   238,   239,    -1,   241,   242,   243,   244,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,
     238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,   263,   237,   238,   239,    -1,
     241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,
     261,    -1,   263,   237,   238,   239,    -1,   241,   242,   243,
     244,    -1,    -1,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,
     237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,   239,
      -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,   263,   237,   238,   239,    -1,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
     263,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
      -1,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,   238,
     239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,    -1,   257,    -1,
      -1,    -1,   261,    -1,   263,   237,   238,   239,    -1,   241,
     242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,   263,   237,   238,   239,    -1,   241,   242,   243,   244,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,   263,   237,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,   237,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,   254,    -1,    -1,   257
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   272,   273,     0,   274,   275,     5,    11,    12,    13,
      15,    16,    17,    19,    21,    22,    23,    24,    31,    64,
      70,    83,    85,    97,   101,   113,   134,   189,   191,   276,
     277,   435,   448,   449,   457,   458,   270,   258,   263,   458,
     258,     7,     5,   258,   258,     5,     7,    21,    22,    23,
      38,   196,     7,     3,     7,    64,    70,    83,    85,    97,
     101,   113,   134,   189,   191,     6,     9,    10,   235,   458,
     459,   460,   260,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   458,   270,   236,   266,     6,     7,     7,
     458,   132,     3,     4,    14,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     250,   255,   258,   452,   453,   458,   461,   452,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   260,   258,   450,   278,   334,
     319,   325,   341,   299,   364,   390,   420,   431,   193,   266,
       5,     6,    26,    27,    28,    29,    30,   234,   266,   452,
     454,   456,   460,   452,   259,   268,   259,   266,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   452,
     452,   452,     8,   237,   238,   239,   241,   242,   243,   244,
     247,   248,   249,   250,   251,   252,   253,   257,   263,   259,
     459,   459,   261,   268,   295,     5,    65,   267,   279,   280,
     448,   458,   266,   267,   335,   448,   266,   267,   266,   267,
     266,   267,   342,   448,    69,   267,   300,   448,   458,   266,
     267,   365,   448,   266,   267,   391,   448,   266,   267,   421,
     448,   266,   267,   432,   448,   458,   452,   266,     7,   260,
     260,   260,   260,   260,   260,   452,   455,   456,     8,     7,
       7,   267,     7,   455,     7,   260,   452,   459,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   259,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   268,   259,   268,     7,   458,
     266,   296,   298,   260,   236,   249,   260,   336,   320,   326,
     343,   260,   260,   366,   392,   422,   433,   436,   267,   267,
     455,     5,     5,   452,   452,   459,   459,   267,   268,   452,
     259,   452,     8,   268,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   268,   261,   261,   261,   261,   261,
     261,   268,   268,   268,     8,   259,     8,   459,   455,   236,
     266,   263,   452,   236,   236,   294,     5,    71,   263,   283,
     287,   236,   452,    84,    88,    98,   267,   337,    84,    98,
     267,   321,    84,    90,    98,   267,   327,    70,    88,    98,
      99,   107,   109,   267,   344,   448,   301,     5,   261,   283,
     285,   458,    88,    98,   114,   118,   267,   367,    98,   135,
     142,   267,   393,   448,    98,   114,   136,   190,   267,   423,
      98,   142,   192,   194,   217,   267,   434,   266,   267,   261,
     268,   268,   268,   261,   261,   452,   456,     8,     7,   261,
     452,   459,   452,   452,   452,   452,   452,   452,   261,   259,
       6,   452,   452,   452,   267,     5,   283,   283,   261,   295,
       3,   258,   266,   269,   291,   293,   458,     7,   260,   283,
     261,     5,   266,     5,     5,   458,   266,     5,   266,    25,
     101,   251,   302,   303,     5,   266,     5,     5,   458,   266,
     266,   266,   261,   295,   236,   261,     5,     5,   458,   266,
     266,     5,   458,   266,   394,     5,   458,   266,   458,   458,
     458,   266,   458,   459,     5,   437,     5,   452,   452,     7,
       7,   452,     7,     8,   267,   261,   261,   261,   261,   261,
     259,   267,   267,     7,     7,     7,   458,     8,   452,   292,
     455,    66,   288,   291,     7,   236,   266,   338,     7,   266,
     296,     7,   322,     7,   328,   260,   260,   251,     7,   306,
     307,     7,   361,     7,   296,     7,   345,   351,   358,     7,
       5,   302,   236,     7,   296,     7,   368,   374,   296,     7,
     395,   266,   296,     7,   424,     7,     7,     7,   437,     7,
       7,     7,   267,   438,   261,   268,   268,   452,   236,   266,
     452,   259,   267,   295,   269,   284,    68,   338,   266,   267,
     448,     7,   266,   267,   266,   267,   452,     5,   251,     5,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    62,    63,   124,   131,   243,   249,
     250,   255,   258,   263,   264,   266,   308,   311,   389,   451,
     453,   458,   461,   266,   267,   448,     7,   266,   267,   448,
     266,   267,   266,   267,   448,   266,     7,   302,     7,   266,
     267,   448,   119,   120,   121,   122,   267,   375,   448,     7,
     266,   267,   448,   402,     7,   266,   267,   448,   267,   195,
     196,   197,   198,   439,   448,   452,   452,   267,   266,   452,
       8,     8,   250,   293,   289,   295,   281,   267,   339,   323,
     329,   261,   261,   389,   260,   315,   260,   260,   260,   260,
     312,   313,     5,   308,   308,   308,   308,     3,     3,     5,
     145,   215,     5,   458,   237,   238,   239,   240,   241,   242,
     243,   244,   247,   248,   249,   250,   251,   252,   253,   254,
     257,   263,   265,   260,   316,   316,   362,   346,   352,   359,
     452,     7,   369,   266,   266,   266,   266,   396,     5,    17,
     144,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   161,   164,   167,   170,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   191,   196,   199,   267,   403,   448,   425,
     260,   260,   260,   260,   261,   261,   267,   267,   452,   452,
     293,   261,     5,    67,   290,   260,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    82,    88,   101,   267,   340,
      71,    83,   267,   324,    84,    88,    89,   267,   330,   389,
     260,   389,   308,     5,     5,   260,   260,   244,   259,   458,
     267,   309,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,     3,   452,
     261,   262,   308,   317,   266,   318,   100,   110,   111,   112,
     267,   363,    98,   100,   101,   102,   103,   104,   105,   106,
     267,   347,    98,   100,   108,   267,   353,    88,    98,   100,
     267,   360,   267,    83,    85,    86,    88,    98,   115,   116,
     117,   132,   188,   260,   267,   370,   380,   380,   384,   376,
      88,    98,   136,   137,   138,   139,   140,   141,   267,   397,
     448,   260,   458,   260,   260,   302,   260,   260,   260,   260,
     260,   260,   260,   260,   260,     7,   260,   260,   266,   260,
     266,   260,   266,   266,   260,   260,   260,   260,   260,   260,
     260,   260,   266,   266,   260,   260,   260,   260,   260,   266,
     266,   260,   404,   405,    77,    98,   267,   426,   441,   458,
       6,   441,   285,     6,   236,     8,   458,   291,   263,   285,
     285,   285,   285,   260,   302,   260,   302,   302,   302,   266,
     458,     5,   260,   302,    66,   285,     5,   266,     5,     5,
     261,   306,   261,   268,   260,   261,   306,   306,   260,   267,
     308,   261,   261,   268,    71,   455,     5,   287,   290,   458,
       5,     5,     5,   266,   266,   304,   304,   285,   285,     5,
       5,   266,   356,     5,   266,   354,     5,   458,     5,     5,
       5,     5,     5,   109,   119,   458,   458,   452,     3,   285,
     454,   372,    83,    85,    86,    87,   124,   125,   126,   127,
     128,   129,   130,   132,   133,   267,   381,   388,   267,   132,
     267,   385,   388,    88,   112,   266,   267,   377,     5,   458,
     266,   398,   458,   459,   454,   459,   266,   400,   458,   458,
     458,     7,   302,   302,     7,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   302,   452,   409,   452,   411,   452,
     413,   415,   285,   459,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,     5,   458,
     260,   260,   266,   458,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   444,   260,   443,   268,   444,   440,   445,
     266,   452,   291,     7,     7,     7,     7,   302,     7,   302,
       7,     7,     7,   453,     7,     7,   302,     7,     7,     7,
     318,   331,     7,     7,   268,   308,   314,   266,   261,   268,
     306,     8,   308,   260,   267,     7,     7,     7,     7,     7,
       7,   296,   266,   348,     5,   302,   305,     7,     7,     7,
       7,     7,   357,     7,   355,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,   371,     7,     7,     7,
       7,   306,     5,     5,     5,   260,   285,     7,   260,   285,
     260,     5,     5,   378,     7,     7,   399,     7,     7,     7,
       7,   401,     7,     7,   261,   261,   261,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   261,   268,   142,   145,
     158,   159,   160,   267,   410,   268,   142,   145,   158,   159,
     162,   163,   267,   412,   268,    20,    90,   142,   165,   166,
     267,   414,    20,    90,   135,   142,   143,   165,   168,   169,
     267,   416,   268,   261,   268,   268,   268,   268,   268,   268,
     267,   267,   268,   268,   268,   268,   268,   268,   268,   261,
     304,   406,   458,   406,   427,     7,   285,   285,   266,   285,
     266,   266,   266,   266,   266,   445,   285,   249,   250,   251,
     252,   268,   442,   234,   302,   445,   268,   261,   268,   446,
     267,   282,   268,   268,   295,   268,     7,   266,   267,   285,
     261,   306,   452,     3,   261,   310,   285,     7,   114,     7,
     295,   267,   268,   267,   295,   267,   295,   260,   373,   261,
       7,     7,     7,     3,     7,   382,     7,   386,     7,     7,
      80,    81,   118,   132,   267,   379,   267,   295,   267,   295,
       7,   266,     7,   302,   458,   458,   452,   452,   452,   458,
     302,   285,     7,   452,   266,   302,   452,   452,   302,   452,
     266,   302,   452,   452,   452,   452,   452,   452,   452,   266,
     452,   302,   452,   452,   458,   266,   266,   452,   452,   266,
     302,     7,   302,   454,   454,   454,   452,   454,     7,     7,
     458,   458,   452,   458,   458,   285,     5,     7,   407,   407,
       5,   119,   267,   448,   210,   302,   266,   455,   266,   266,
     266,   261,   261,     5,   260,   445,   261,   132,     7,    77,
     138,   170,   200,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   268,   302,   302,   453,
     302,   332,   261,   261,   268,   261,   308,   261,     5,     5,
     302,     5,     5,   458,     7,     7,   261,   306,   306,   389,
     389,   389,   285,   458,   458,   402,   261,   268,   268,   268,
     268,   268,   268,   261,   268,   268,   402,     7,     7,     7,
       7,   268,   402,     7,     7,     7,     7,     7,   268,     7,
       7,   402,     7,     7,     7,     7,     7,   402,   402,     7,
       7,   417,   261,   268,   268,   261,   261,   268,   268,   268,
     268,   268,   261,   261,   261,   268,   267,   268,   261,   268,
     408,   261,   266,   266,     5,   268,   455,   267,   455,   455,
     455,     7,   443,   459,   261,     7,   285,   454,   454,   266,
       5,   244,   245,   459,   452,   452,   454,   452,     5,   447,
     447,   447,   452,     5,   266,   452,   304,   266,   266,   266,
     266,     3,   263,   261,   261,   267,   261,    91,    92,    93,
      94,    95,    96,   267,   333,   261,   452,   267,     7,   267,
     261,     7,   383,   387,     7,     7,     7,     7,   267,     7,
     454,   452,   454,   452,   452,   458,     7,   458,   302,   267,
     302,   267,   302,   267,   267,   267,   266,   267,     7,   452,
     302,     7,     7,   452,   459,   459,   452,   452,     7,     7,
       7,   459,     7,   137,     7,   211,   215,   454,     7,   428,
     428,   266,   302,   267,   267,   267,   267,   268,   261,     7,
     445,   302,   459,   459,     6,   455,   452,   452,   452,   455,
     291,     7,     7,     7,     7,     5,   452,   452,   452,   452,
     452,   266,   267,   113,     7,   268,   268,    18,   261,   261,
     268,   268,   268,   268,   261,   268,   268,   261,   268,   418,
     268,   261,   268,   261,   261,   261,   268,   268,   267,   268,
     459,   459,   454,    83,    85,    88,   132,   267,   388,   429,
     267,   452,   268,   266,   266,   266,   266,   445,   261,   268,
     267,   268,   268,   268,   267,   268,     7,     7,     7,     7,
       7,     7,   452,     5,   306,   389,   266,     7,     7,   452,
     452,   452,   452,     7,   302,   452,   266,   452,    20,    88,
      90,   101,   114,   132,   267,   419,   302,     7,   302,     7,
       7,     7,   452,   452,     7,   302,   267,   268,     5,     5,
       5,   285,   260,   268,   302,   455,   455,   455,   455,   261,
       7,   302,   452,   452,   452,   452,   267,   296,   261,   261,
     402,   261,   261,   261,   268,   261,   268,   402,   261,     5,
       5,   452,   302,     5,   285,   261,   261,   268,   261,   261,
     267,     7,   452,     7,     7,     7,     7,   430,   452,   267,
     267,   267,   267,   267,     7,   268,   268,   268,   268,   261,
       7,     7,     7,   267,     7,     7,     7,   454,   266,   452,
     267,   266,     7,     7,     7,     7,     7,     7,     7,     7,
     302,   266,   266,     7,   267,   306,   267,   266,   266,   267,
     266,   266,   302,   452,   452,   452,     7,   349,   268,   402,
     261,   402,   261,   402,   402,     7,   261,   266,   454,   455,
     266,   455,   455,   267,   267,   267,   267,    64,   452,   267,
     266,   267,     7,   267,   267,     7,   452,   268,   267,   452,
     267,   267,   286,   458,   268,   402,     7,     7,   267,   454,
     267,   267,   267,   266,     7,   266,   297,   452,   267,   268,
     266,   455,   350,   267,   261,   454,   452,   267,   134,     7,
     267,   268,   267,     5,   452,   266,   297,   267,   452,     7,
     268,   267,   452,   268,   452,   267
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
#line 1578 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 162:
#line 1579 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 163:
#line 1580 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 164:
#line 1585 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 165:
#line 1586 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 166:
#line 1592 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 167:
#line 1595 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 168:
#line 1598 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 169:
#line 1613 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 170:
#line 1618 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 171:
#line 1625 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 173:
#line 1634 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 174:
#line 1639 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 175:
#line 1646 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 176:
#line 1649 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 177:
#line 1656 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 179:
#line 1666 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 180:
#line 1669 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 181:
#line 1672 "GetDP.y"
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

  case 182:
#line 1710 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 183:
#line 1716 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 184:
#line 1723 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 186:
#line 1736 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 187:
#line 1743 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 188:
#line 1746 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 189:
#line 1753 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 190:
#line 1756 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 191:
#line 1763 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 193:
#line 1775 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 194:
#line 1785 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 195:
#line 1795 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 196:
#line 1802 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 197:
#line 1805 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 198:
#line 1812 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 200:
#line 1828 "GetDP.y"
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

  case 201:
#line 1876 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 202:
#line 1879 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 203:
#line 1882 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 204:
#line 1885 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 205:
#line 1888 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 206:
#line 1899 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 208:
#line 1909 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 210:
#line 1919 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 212:
#line 1932 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 213:
#line 1939 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 214:
#line 1947 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 215:
#line 1956 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 216:
#line 1959 "GetDP.y"
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

  case 217:
#line 1977 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 218:
#line 1982 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 219:
#line 1987 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 220:
#line 1996 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 222:
#line 2010 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 223:
#line 2020 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 224:
#line 2025 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 225:
#line 2031 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 226:
#line 2036 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 227:
#line 2044 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2052 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2061 "GetDP.y"
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

  case 230:
#line 2079 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2088 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2096 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2104 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(2) - (3)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2114 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2124 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2134 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2154 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 239:
#line 2165 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 241:
#line 2176 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 244:
#line 2190 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 245:
#line 2197 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 246:
#line 2205 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 247:
#line 2214 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 248:
#line 2217 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 249:
#line 2220 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 250:
#line 2223 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 251:
#line 2230 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 252:
#line 2236 "GetDP.y"
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

  case 253:
#line 2253 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 254:
#line 2262 "GetDP.y"
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

  case 256:
#line 2283 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 257:
#line 2286 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 258:
#line 2291 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 259:
#line 2296 "GetDP.y"
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

  case 260:
#line 2310 "GetDP.y"
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

  case 261:
#line 2330 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 262:
#line 2335 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 263:
#line 2340 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 264:
#line 2345 "GetDP.y"
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

  case 266:
#line 2379 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 267:
#line 2383 "GetDP.y"
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

  case 268:
#line 2393 "GetDP.y"
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

  case 269:
#line 2457 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 270:
#line 2463 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 271:
#line 2472 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 273:
#line 2483 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 274:
#line 2490 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 275:
#line 2493 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 276:
#line 2500 "GetDP.y"
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

  case 277:
#line 2516 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 278:
#line 2522 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 279:
#line 2525 "GetDP.y"
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

  case 280:
#line 2544 "GetDP.y"
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

  case 281:
#line 2556 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 282:
#line 2563 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 283:
#line 2568 "GetDP.y"
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

  case 284:
#line 2583 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 285:
#line 2589 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 286:
#line 2595 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 287:
#line 2604 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 289:
#line 2616 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 290:
#line 2623 "GetDP.y"
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

  case 291:
#line 2634 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[(2) - (3)].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", (yyvsp[(2) - (3)].c)) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 292:
#line 2648 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 293:
#line 2653 "GetDP.y"
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

  case 294:
#line 2690 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 295:
#line 2699 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 297:
#line 2715 "GetDP.y"
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

  case 298:
#line 2748 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 299:
#line 2751 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 300:
#line 2754 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 301:
#line 2769 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 303:
#line 2779 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 305:
#line 2790 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 307:
#line 2801 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 308:
#line 2808 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 309:
#line 2816 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 311:
#line 2828 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 312:
#line 2834 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 313:
#line 2839 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 315:
#line 2850 "GetDP.y"
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

  case 317:
#line 2873 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 318:
#line 2876 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 319:
#line 2880 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 320:
#line 2883 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 321:
#line 2893 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 322:
#line 2897 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 323:
#line 2905 "GetDP.y"
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

  case 324:
#line 2929 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 325:
#line 2934 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 326:
#line 2940 "GetDP.y"
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

  case 327:
#line 3251 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 328:
#line 3256 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 329:
#line 3265 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 330:
#line 3274 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 331:
#line 3283 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 333:
#line 3291 "GetDP.y"
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

  case 334:
#line 3331 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 335:
#line 3336 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 336:
#line 3341 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 337:
#line 3350 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 338:
#line 3353 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 339:
#line 3356 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 340:
#line 3359 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 341:
#line 3370 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 343:
#line 3381 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 344:
#line 3391 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 345:
#line 3401 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 346:
#line 3415 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 348:
#line 3427 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 349:
#line 3429 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 350:
#line 3431 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 351:
#line 3433 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 352:
#line 3441 "GetDP.y"
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

  case 354:
#line 3466 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 355:
#line 3474 "GetDP.y"
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

  case 356:
#line 3553 "GetDP.y"
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

  case 357:
#line 3607 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 358:
#line 3612 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 359:
#line 3621 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 360:
#line 3630 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 361:
#line 3635 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 362:
#line 3644 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 363:
#line 3655 "GetDP.y"
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

  case 365:
#line 3684 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 366:
#line 3689 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 367:
#line 3697 "GetDP.y"
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

  case 368:
#line 3752 "GetDP.y"
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

  case 369:
#line 3769 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 370:
#line 3770 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 371:
#line 3771 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 372:
#line 3772 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 373:
#line 3773 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 374:
#line 3774 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 375:
#line 3775 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 376:
#line 3776 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 377:
#line 3783 "GetDP.y"
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

  case 378:
#line 3804 "GetDP.y"
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

  case 379:
#line 3828 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 381:
#line 3838 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 383:
#line 3849 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 385:
#line 3861 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 386:
#line 3868 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 387:
#line 3876 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 388:
#line 3879 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 389:
#line 3881 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 391:
#line 3889 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 392:
#line 3894 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 393:
#line 3899 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 394:
#line 3908 "GetDP.y"
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

  case 396:
#line 3928 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 397:
#line 3931 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 398:
#line 3940 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 399:
#line 3943 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 400:
#line 3948 "GetDP.y"
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

  case 401:
#line 3959 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 402:
#line 3964 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 403:
#line 3969 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 405:
#line 3980 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 406:
#line 3989 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 407:
#line 3996 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 408:
#line 3999 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 409:
#line 4011 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(1) - (1)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 410:
#line 4021 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 411:
#line 4027 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 412:
#line 4030 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 413:
#line 4042 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 414:
#line 4050 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 415:
#line 4063 "GetDP.y"
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

  case 416:
#line 4085 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 417:
#line 4092 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 418:
#line 4098 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 419:
#line 4104 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 420:
#line 4110 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 421:
#line 4118 "GetDP.y"
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

  case 422:
#line 4140 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 423:
#line 4147 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 424:
#line 4153 "GetDP.y"
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

  case 425:
#line 4164 "GetDP.y"
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

  case 426:
#line 4175 "GetDP.y"
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

  case 427:
#line 4188 "GetDP.y"
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

  case 428:
#line 4203 "GetDP.y"
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

  case 429:
#line 4218 "GetDP.y"
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

  case 430:
#line 4233 "GetDP.y"
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

  case 431:
#line 4253 "GetDP.y"
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

  case 432:
#line 4274 "GetDP.y"
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

  case 433:
#line 4286 "GetDP.y"
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

  case 434:
#line 4306 "GetDP.y"
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

  case 435:
#line 4323 "GetDP.y"
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

  case 436:
#line 4342 "GetDP.y"
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

  case 437:
#line 4363 "GetDP.y"
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

  case 438:
#line 4377 "GetDP.y"
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

  case 439:
#line 4391 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 440:
#line 4399 "GetDP.y"
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

  case 441:
#line 4433 "GetDP.y"
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

  case 442:
#line 4446 "GetDP.y"
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

  case 443:
#line 4460 "GetDP.y"
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

  case 444:
#line 4473 "GetDP.y"
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

  case 445:
#line 4485 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 447:
#line 4494 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 449:
#line 4503 "GetDP.y"
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

  case 450:
#line 4514 "GetDP.y"
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

  case 451:
#line 4526 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 452:
#line 4536 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 453:
#line 4544 "GetDP.y"
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

  case 454:
#line 4557 "GetDP.y"
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

  case 455:
#line 4570 "GetDP.y"
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

  case 456:
#line 4584 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 457:
#line 4594 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 458:
#line 4604 "GetDP.y"
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

  case 459:
#line 4618 "GetDP.y"
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

  case 460:
#line 4632 "GetDP.y"
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

  case 461:
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
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = (yyvsp[(7) - (14)].d) ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)(yyvsp[(9) - (14)].d) ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = (yyvsp[(12) - (14)].l) ;
    ;}
    break;

  case 462:
#line 4669 "GetDP.y"
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

  case 463:
#line 4680 "GetDP.y"
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

  case 464:
#line 4695 "GetDP.y"
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

  case 465:
#line 4710 "GetDP.y"
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

  case 466:
#line 4725 "GetDP.y"
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

  case 467:
#line 4740 "GetDP.y"
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

  case 468:
#line 4755 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 469:
#line 4766 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 470:
#line 4771 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 471:
#line 4781 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 473:
#line 4791 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 474:
#line 4794 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 475:
#line 4804 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 476:
#line 4820 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 478:
#line 4836 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 479:
#line 4840 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 480:
#line 4844 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 481:
#line 4848 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 482:
#line 4853 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 483:
#line 4864 "GetDP.y"
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

  case 485:
#line 4881 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 486:
#line 4885 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 487:
#line 4889 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 488:
#line 4893 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 489:
#line 4897 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 490:
#line 4902 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 491:
#line 4913 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 493:
#line 4928 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4932 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 495:
#line 4936 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 496:
#line 4940 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 497:
#line 4944 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 498:
#line 4955 "GetDP.y"
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

  case 500:
#line 4973 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 501:
#line 4977 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 4981 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 503:
#line 4985 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 504:
#line 4990 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 505:
#line 5000 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 506:
#line 5006 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 507:
#line 5012 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 508:
#line 5022 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 509:
#line 5025 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 510:
#line 5030 "GetDP.y"
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

  case 512:
#line 5048 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 513:
#line 5058 "GetDP.y"
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

  case 514:
#line 5087 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 515:
#line 5090 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 516:
#line 5093 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 517:
#line 5101 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 518:
#line 5118 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 520:
#line 5130 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 522:
#line 5139 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 524:
#line 5152 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 525:
#line 5159 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 526:
#line 5167 "GetDP.y"
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

  case 527:
#line 5180 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 528:
#line 5185 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 529:
#line 5191 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 530:
#line 5194 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 531:
#line 5197 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 532:
#line 5203 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 534:
#line 5214 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 535:
#line 5217 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 536:
#line 5223 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 537:
#line 5228 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 538:
#line 5234 "GetDP.y"
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

  case 539:
#line 5246 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 540:
#line 5251 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 542:
#line 5265 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 543:
#line 5272 "GetDP.y"
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

  case 544:
#line 5300 "GetDP.y"
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

  case 545:
#line 5311 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 546:
#line 5316 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 547:
#line 5325 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 548:
#line 5342 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 550:
#line 5354 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 552:
#line 5361 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 554:
#line 5373 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 555:
#line 5380 "GetDP.y"
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

  case 556:
#line 5392 "GetDP.y"
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

  case 557:
#line 5403 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 558:
#line 5408 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 559:
#line 5414 "GetDP.y"
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

  case 560:
#line 5431 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 561:
#line 5441 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 562:
#line 5444 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 563:
#line 5448 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 564:
#line 5461 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 565:
#line 5466 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 566:
#line 5471 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 567:
#line 5480 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 568:
#line 5489 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 569:
#line 5498 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 570:
#line 5504 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 571:
#line 5509 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 572:
#line 5517 "GetDP.y"
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

  case 573:
#line 5529 "GetDP.y"
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

  case 574:
#line 5552 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 575:
#line 5553 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 576:
#line 5554 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 577:
#line 5555 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 578:
#line 5561 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 579:
#line 5563 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 580:
#line 5569 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 581:
#line 5575 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 582:
#line 5582 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 583:
#line 5591 "GetDP.y"
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

  case 584:
#line 5613 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 585:
#line 5621 "GetDP.y"
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

  case 586:
#line 5632 "GetDP.y"
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

  case 587:
#line 5646 "GetDP.y"
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

  case 588:
#line 5667 "GetDP.y"
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

  case 589:
#line 5694 "GetDP.y"
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

  case 590:
#line 5725 "GetDP.y"
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

  case 591:
#line 5745 "GetDP.y"
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

  case 593:
#line 5781 "GetDP.y"
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

  case 594:
#line 5795 "GetDP.y"
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

  case 595:
#line 5809 "GetDP.y"
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

  case 596:
#line 5823 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 597:
#line 5827 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 598:
#line 5831 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 599:
#line 5835 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 600:
#line 5839 "GetDP.y"
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

  case 601:
#line 5849 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 602:
#line 5854 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 603:
#line 5859 "GetDP.y"
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

  case 604:
#line 5879 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 605:
#line 5883 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 606:
#line 5890 "GetDP.y"
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

  case 607:
#line 5900 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 608:
#line 5909 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 609:
#line 5918 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 610:
#line 5925 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 611:
#line 5933 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 612:
#line 5937 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 613:
#line 5946 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 614:
#line 5950 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 615:
#line 5954 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 616:
#line 5962 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 617:
#line 5968 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 618:
#line 5972 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 619:
#line 5980 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 620:
#line 5987 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 621:
#line 5995 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 622:
#line 6002 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 623:
#line 6010 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 624:
#line 6017 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 625:
#line 6025 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 626:
#line 6029 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 627:
#line 6038 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 628:
#line 6044 "GetDP.y"
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

  case 629:
#line 6094 "GetDP.y"
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

  case 630:
#line 6109 "GetDP.y"
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

  case 631:
#line 6125 "GetDP.y"
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

  case 632:
#line 6145 "GetDP.y"
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

  case 633:
#line 6165 "GetDP.y"
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

  case 634:
#line 6203 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 635:
#line 6207 "GetDP.y"
    {
    ;}
    break;

  case 638:
#line 6223 "GetDP.y"
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

  case 639:
#line 6238 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 640:
#line 6244 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 641:
#line 6250 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 642:
#line 6256 "GetDP.y"
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

  case 643:
#line 6272 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 644:
#line 6277 "GetDP.y"
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

  case 645:
#line 6293 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 646:
#line 6298 "GetDP.y"
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

  case 647:
#line 6310 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 648:
#line 6320 "GetDP.y"
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

  case 649:
#line 6334 "GetDP.y"
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

  case 651:
#line 6360 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 652:
#line 6366 "GetDP.y"
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

  case 653:
#line 6380 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 654:
#line 6386 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 655:
#line 6396 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 656:
#line 6397 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 657:
#line 6398 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 658:
#line 6399 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 659:
#line 6400 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 660:
#line 6401 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 661:
#line 6402 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 662:
#line 6403 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 663:
#line 6404 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 664:
#line 6405 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 665:
#line 6406 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 666:
#line 6407 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 667:
#line 6408 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 668:
#line 6409 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 669:
#line 6410 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 670:
#line 6411 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 671:
#line 6412 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 672:
#line 6413 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 673:
#line 6414 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 674:
#line 6415 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 675:
#line 6416 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 676:
#line 6420 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 677:
#line 6421 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 678:
#line 6422 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 679:
#line 6423 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 680:
#line 6424 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 681:
#line 6425 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 682:
#line 6426 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 683:
#line 6427 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 684:
#line 6428 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 685:
#line 6429 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 686:
#line 6430 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 687:
#line 6431 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 688:
#line 6432 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 689:
#line 6433 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 690:
#line 6434 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 691:
#line 6435 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 692:
#line 6436 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 693:
#line 6437 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 694:
#line 6438 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 695:
#line 6439 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 696:
#line 6440 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 697:
#line 6441 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 698:
#line 6442 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 699:
#line 6443 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 700:
#line 6444 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 701:
#line 6445 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 702:
#line 6446 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 703:
#line 6447 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 704:
#line 6448 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 705:
#line 6449 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 706:
#line 6450 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6451 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 708:
#line 6452 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6453 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 710:
#line 6454 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6455 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 712:
#line 6456 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 713:
#line 6457 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 714:
#line 6459 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 715:
#line 6461 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 716:
#line 6463 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 717:
#line 6468 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 718:
#line 6469 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 719:
#line 6470 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 720:
#line 6471 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 721:
#line 6472 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 722:
#line 6473 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 723:
#line 6474 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 724:
#line 6476 "GetDP.y"
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

  case 725:
#line 6494 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 726:
#line 6497 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 727:
#line 6503 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 728:
#line 6506 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 729:
#line 6513 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 730:
#line 6519 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 731:
#line 6522 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 732:
#line 6525 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 733:
#line 6537 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 734:
#line 6543 "GetDP.y"
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

  case 735:
#line 6554 "GetDP.y"
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

  case 736:
#line 6570 "GetDP.y"
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

  case 737:
#line 6592 "GetDP.y"
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

  case 738:
#line 6607 "GetDP.y"
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

  case 739:
#line 6645 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 740:
#line 6653 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 741:
#line 6665 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 742:
#line 6673 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 743:
#line 6687 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 744:
#line 6690 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 745:
#line 6697 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 746:
#line 6700 "GetDP.y"
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

  case 747:
#line 6715 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 748:
#line 6720 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 749:
#line 6725 "GetDP.y"
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

  case 750:
#line 6744 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 751:
#line 6754 "GetDP.y"
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

  case 752:
#line 6767 "GetDP.y"
    {
      if ((yyvsp[(3) - (6)].c) != NULL && (yyvsp[(5) - (6)].c) != NULL) {
	(yyval.i) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.i) = 1 ;
      }
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12091 "GetDP.tab.c"
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


#line 6778 "GetDP.y"



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


