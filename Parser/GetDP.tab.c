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
     tFor = 269,
     tEndFor = 270,
     tIf = 271,
     tElse = 272,
     tEndIf = 273,
     tFlag = 274,
     tHelp = 275,
     tCpu = 276,
     tCheck = 277,
     tInclude = 278,
     tConstant = 279,
     tList = 280,
     tListAlt = 281,
     tLinSpace = 282,
     tLogSpace = 283,
     tListFromFile = 284,
     tDefineConstant = 285,
     tPi = 286,
     t0D = 287,
     t1D = 288,
     t2D = 289,
     t3D = 290,
     tExp = 291,
     tLog = 292,
     tLog10 = 293,
     tSqrt = 294,
     tSin = 295,
     tAsin = 296,
     tCos = 297,
     tAcos = 298,
     tTan = 299,
     tAtan = 300,
     tAtan2 = 301,
     tSinh = 302,
     tCosh = 303,
     tTanh = 304,
     tFabs = 305,
     tFloor = 306,
     tCeil = 307,
     tFmod = 308,
     tModulo = 309,
     tHypot = 310,
     tSolidAngle = 311,
     tTrace = 312,
     tOrder = 313,
     tCrossProduct = 314,
     tDofValue = 315,
     tMHTransform = 316,
     tMHJacNL = 317,
     tGroup = 318,
     tDefineGroup = 319,
     tAll = 320,
     tInSupport = 321,
     tMovingBand2D = 322,
     tDefineFunction = 323,
     tConstraint = 324,
     tRegion = 325,
     tSubRegion = 326,
     tRegionRef = 327,
     tSubRegionRef = 328,
     tFilter = 329,
     tCoefficient = 330,
     tValue = 331,
     tTimeFunction = 332,
     tBranch = 333,
     tNode = 334,
     tLoop = 335,
     tNameOfResolution = 336,
     tJacobian = 337,
     tCase = 338,
     tIntegration = 339,
     tFMMIntegration = 340,
     tMatrix = 341,
     tType = 342,
     tSubType = 343,
     tCriterion = 344,
     tGeoElement = 345,
     tNumberOfPoints = 346,
     tMaxNumberOfPoints = 347,
     tNumberOfDivisions = 348,
     tMaxNumberOfDivisions = 349,
     tStoppingCriterion = 350,
     tFunctionSpace = 351,
     tName = 352,
     tBasisFunction = 353,
     tNameOfCoef = 354,
     tFunction = 355,
     tdFunction = 356,
     tSubFunction = 357,
     tSubdFunction = 358,
     tSupport = 359,
     tEntity = 360,
     tSubSpace = 361,
     tNameOfBasisFunction = 362,
     tGlobalQuantity = 363,
     tEntityType = 364,
     tEntitySubType = 365,
     tNameOfConstraint = 366,
     tFormulation = 367,
     tQuantity = 368,
     tNameOfSpace = 369,
     tIndexOfSystem = 370,
     tSymmetry = 371,
     tEquation = 372,
     tGalerkin = 373,
     tdeRham = 374,
     tGlobalTerm = 375,
     tGlobalEquation = 376,
     tDiscreteGeometry = 377,
     tDt = 378,
     tDtDof = 379,
     tDtDt = 380,
     tDtDtDof = 381,
     tJacNL = 382,
     tNeverDt = 383,
     tDtNL = 384,
     tAtAnteriorTimeStep = 385,
     tIn = 386,
     tFull_Matrix = 387,
     tResolution = 388,
     tDefineSystem = 389,
     tNameOfFormulation = 390,
     tNameOfMesh = 391,
     tFrequency = 392,
     tSolver = 393,
     tOriginSystem = 394,
     tDestinationSystem = 395,
     tOperation = 396,
     tOperationEnd = 397,
     tSetTime = 398,
     tDTime = 399,
     tSetFrequency = 400,
     tFourierTransform = 401,
     tFourierTransformJ = 402,
     tLanczos = 403,
     tEigenSolve = 404,
     tEigenSolveJac = 405,
     tPerturbation = 406,
     tUpdate = 407,
     tUpdateConstraint = 408,
     tBreak = 409,
     tEvaluate = 410,
     tTimeLoopTheta = 411,
     tTime0 = 412,
     tTimeMax = 413,
     tTheta = 414,
     tTimeLoopNewmark = 415,
     tBeta = 416,
     tGamma = 417,
     tIterativeLoop = 418,
     tNbrMaxIteration = 419,
     tRelaxationFactor = 420,
     tIterativeTimeReduction = 421,
     tDivisionCoefficient = 422,
     tChangeOfState = 423,
     tChangeOfCoordinates = 424,
     tChangeOfCoordinates2 = 425,
     tSystemCommand = 426,
     tGenerateFMMGroups = 427,
     tGenerateOnly = 428,
     tGenerateOnlyJac = 429,
     tSolveJac_AdaptRelax = 430,
     tSaveSolutionExtendedMH = 431,
     tSaveSolutionMHtoTime = 432,
     tInit_MovingBand2D = 433,
     tMesh_MovingBand2D = 434,
     tGenerate_MH_Moving = 435,
     tGenerate_MH_Moving_Separate = 436,
     tAdd_MH_Moving = 437,
     tGenerateGroup = 438,
     tGenerateJacGroup = 439,
     tSaveMesh = 440,
     tDeformeMesh = 441,
     tDummyFrequency = 442,
     tPostProcessing = 443,
     tNameOfSystem = 444,
     tPostOperation = 445,
     tNameOfPostProcessing = 446,
     tUsingPost = 447,
     tAppend = 448,
     tPlot = 449,
     tPrint = 450,
     tPrintGroup = 451,
     tEcho = 452,
     tWrite = 453,
     tAdapt = 454,
     tOnGlobal = 455,
     tOnRegion = 456,
     tOnElementsOf = 457,
     tOnGrid = 458,
     tOnSection = 459,
     tOnPoint = 460,
     tOnLine = 461,
     tOnPlane = 462,
     tOnBox = 463,
     tWithArgument = 464,
     tFile = 465,
     tDepth = 466,
     tDimension = 467,
     tComma = 468,
     tTimeStep = 469,
     tHarmonicToTime = 470,
     tFormat = 471,
     tHeader = 472,
     tFooter = 473,
     tSkin = 474,
     tSmoothing = 475,
     tTarget = 476,
     tSort = 477,
     tIso = 478,
     tNoNewLine = 479,
     tDecomposeInSimplex = 480,
     tChangeOfValues = 481,
     tTimeLegend = 482,
     tFrequencyLegend = 483,
     tEigenvalueLegend = 484,
     tEvaluationPoints = 485,
     tStore = 486,
     tLastTimeStepOnly = 487,
     tStr = 488,
     tDate = 489,
     tDEF = 490,
     tOR = 491,
     tAND = 492,
     tAPPROXEQUAL = 493,
     tNOTEQUAL = 494,
     tEQUAL = 495,
     tGREATERGREATER = 496,
     tLESSLESS = 497,
     tGREATEROREQUAL = 498,
     tLESSOREQUAL = 499,
     tCROSSPRODUCT = 500,
     UNARYPREC = 501,
     tSHOW = 502
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
#define tFor 269
#define tEndFor 270
#define tIf 271
#define tElse 272
#define tEndIf 273
#define tFlag 274
#define tHelp 275
#define tCpu 276
#define tCheck 277
#define tInclude 278
#define tConstant 279
#define tList 280
#define tListAlt 281
#define tLinSpace 282
#define tLogSpace 283
#define tListFromFile 284
#define tDefineConstant 285
#define tPi 286
#define t0D 287
#define t1D 288
#define t2D 289
#define t3D 290
#define tExp 291
#define tLog 292
#define tLog10 293
#define tSqrt 294
#define tSin 295
#define tAsin 296
#define tCos 297
#define tAcos 298
#define tTan 299
#define tAtan 300
#define tAtan2 301
#define tSinh 302
#define tCosh 303
#define tTanh 304
#define tFabs 305
#define tFloor 306
#define tCeil 307
#define tFmod 308
#define tModulo 309
#define tHypot 310
#define tSolidAngle 311
#define tTrace 312
#define tOrder 313
#define tCrossProduct 314
#define tDofValue 315
#define tMHTransform 316
#define tMHJacNL 317
#define tGroup 318
#define tDefineGroup 319
#define tAll 320
#define tInSupport 321
#define tMovingBand2D 322
#define tDefineFunction 323
#define tConstraint 324
#define tRegion 325
#define tSubRegion 326
#define tRegionRef 327
#define tSubRegionRef 328
#define tFilter 329
#define tCoefficient 330
#define tValue 331
#define tTimeFunction 332
#define tBranch 333
#define tNode 334
#define tLoop 335
#define tNameOfResolution 336
#define tJacobian 337
#define tCase 338
#define tIntegration 339
#define tFMMIntegration 340
#define tMatrix 341
#define tType 342
#define tSubType 343
#define tCriterion 344
#define tGeoElement 345
#define tNumberOfPoints 346
#define tMaxNumberOfPoints 347
#define tNumberOfDivisions 348
#define tMaxNumberOfDivisions 349
#define tStoppingCriterion 350
#define tFunctionSpace 351
#define tName 352
#define tBasisFunction 353
#define tNameOfCoef 354
#define tFunction 355
#define tdFunction 356
#define tSubFunction 357
#define tSubdFunction 358
#define tSupport 359
#define tEntity 360
#define tSubSpace 361
#define tNameOfBasisFunction 362
#define tGlobalQuantity 363
#define tEntityType 364
#define tEntitySubType 365
#define tNameOfConstraint 366
#define tFormulation 367
#define tQuantity 368
#define tNameOfSpace 369
#define tIndexOfSystem 370
#define tSymmetry 371
#define tEquation 372
#define tGalerkin 373
#define tdeRham 374
#define tGlobalTerm 375
#define tGlobalEquation 376
#define tDiscreteGeometry 377
#define tDt 378
#define tDtDof 379
#define tDtDt 380
#define tDtDtDof 381
#define tJacNL 382
#define tNeverDt 383
#define tDtNL 384
#define tAtAnteriorTimeStep 385
#define tIn 386
#define tFull_Matrix 387
#define tResolution 388
#define tDefineSystem 389
#define tNameOfFormulation 390
#define tNameOfMesh 391
#define tFrequency 392
#define tSolver 393
#define tOriginSystem 394
#define tDestinationSystem 395
#define tOperation 396
#define tOperationEnd 397
#define tSetTime 398
#define tDTime 399
#define tSetFrequency 400
#define tFourierTransform 401
#define tFourierTransformJ 402
#define tLanczos 403
#define tEigenSolve 404
#define tEigenSolveJac 405
#define tPerturbation 406
#define tUpdate 407
#define tUpdateConstraint 408
#define tBreak 409
#define tEvaluate 410
#define tTimeLoopTheta 411
#define tTime0 412
#define tTimeMax 413
#define tTheta 414
#define tTimeLoopNewmark 415
#define tBeta 416
#define tGamma 417
#define tIterativeLoop 418
#define tNbrMaxIteration 419
#define tRelaxationFactor 420
#define tIterativeTimeReduction 421
#define tDivisionCoefficient 422
#define tChangeOfState 423
#define tChangeOfCoordinates 424
#define tChangeOfCoordinates2 425
#define tSystemCommand 426
#define tGenerateFMMGroups 427
#define tGenerateOnly 428
#define tGenerateOnlyJac 429
#define tSolveJac_AdaptRelax 430
#define tSaveSolutionExtendedMH 431
#define tSaveSolutionMHtoTime 432
#define tInit_MovingBand2D 433
#define tMesh_MovingBand2D 434
#define tGenerate_MH_Moving 435
#define tGenerate_MH_Moving_Separate 436
#define tAdd_MH_Moving 437
#define tGenerateGroup 438
#define tGenerateJacGroup 439
#define tSaveMesh 440
#define tDeformeMesh 441
#define tDummyFrequency 442
#define tPostProcessing 443
#define tNameOfSystem 444
#define tPostOperation 445
#define tNameOfPostProcessing 446
#define tUsingPost 447
#define tAppend 448
#define tPlot 449
#define tPrint 450
#define tPrintGroup 451
#define tEcho 452
#define tWrite 453
#define tAdapt 454
#define tOnGlobal 455
#define tOnRegion 456
#define tOnElementsOf 457
#define tOnGrid 458
#define tOnSection 459
#define tOnPoint 460
#define tOnLine 461
#define tOnPlane 462
#define tOnBox 463
#define tWithArgument 464
#define tFile 465
#define tDepth 466
#define tDimension 467
#define tComma 468
#define tTimeStep 469
#define tHarmonicToTime 470
#define tFormat 471
#define tHeader 472
#define tFooter 473
#define tSkin 474
#define tSmoothing 475
#define tTarget 476
#define tSort 477
#define tIso 478
#define tNoNewLine 479
#define tDecomposeInSimplex 480
#define tChangeOfValues 481
#define tTimeLegend 482
#define tFrequencyLegend 483
#define tEigenvalueLegend 484
#define tEvaluationPoints 485
#define tStore 486
#define tLastTimeStepOnly 487
#define tStr 488
#define tDate 489
#define tDEF 490
#define tOR 491
#define tAND 492
#define tAPPROXEQUAL 493
#define tNOTEQUAL 494
#define tEQUAL 495
#define tGREATERGREATER 496
#define tLESSLESS 497
#define tGREATEROREQUAL 498
#define tLESSOREQUAL 499
#define tCROSSPRODUCT 500
#define UNARYPREC 501
#define tSHOW 502




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.117 2008-02-18 15:33:05 dular Exp $ */
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
#line 779 "GetDP.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 792 "GetDP.tab.c"

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
#define YYLAST   7527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  270
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  190
/* YYNRULES -- Number of rules.  */
#define YYNRULES  747
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2042

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   502

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   254,     2,   262,   263,   252,     2,     2,
     257,   258,   250,   248,   267,   249,   261,   251,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     242,     2,   243,   236,   268,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   259,     2,   260,   256,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   265,     2,   266,   269,     2,     2,     2,
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
     235,   237,   238,   239,   240,   241,   244,   245,   246,   247,
     253,   255,   264
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
     296,   297,   301,   308,   309,   311,   316,   317,   320,   324,
     325,   328,   334,   341,   349,   351,   352,   356,   363,   368,
     373,   374,   377,   381,   382,   386,   388,   392,   393,   396,
     398,   399,   400,   408,   412,   416,   423,   427,   431,   435,
     439,   443,   447,   451,   455,   459,   463,   467,   471,   475,
     479,   482,   485,   488,   492,   494,   498,   501,   503,   506,
     507,   513,   514,   522,   523,   535,   545,   550,   555,   556,
     564,   571,   574,   577,   580,   583,   587,   590,   594,   598,
     601,   605,   607,   611,   612,   616,   623,   624,   629,   630,
     633,   637,   642,   643,   648,   649,   652,   656,   660,   665,
     666,   671,   672,   675,   679,   683,   688,   689,   694,   695,
     698,   702,   706,   711,   712,   717,   718,   721,   725,   729,
     733,   737,   741,   745,   746,   749,   753,   755,   756,   759,
     763,   768,   772,   777,   783,   784,   789,   792,   793,   796,
     800,   804,   808,   812,   816,   820,   828,   832,   836,   840,
     844,   848,   856,   864,   872,   873,   876,   880,   882,   883,
     886,   889,   893,   898,   902,   907,   912,   917,   922,   923,
     928,   931,   932,   935,   939,   943,   948,   953,   961,   965,
     969,   973,   977,   978,   979,   980,   999,  1000,  1005,  1006,
    1009,  1013,  1017,  1021,  1023,  1027,  1028,  1032,  1034,  1038,
    1039,  1043,  1044,  1049,  1052,  1053,  1056,  1060,  1064,  1068,
    1069,  1074,  1077,  1078,  1081,  1085,  1089,  1093,  1097,  1098,
    1101,  1105,  1107,  1108,  1111,  1115,  1120,  1124,  1129,  1134,
    1135,  1140,  1143,  1144,  1147,  1151,  1155,  1159,  1163,  1167,
    1168,  1174,  1178,  1179,  1185,  1189,  1193,  1197,  1201,  1205,
    1206,  1210,  1211,  1214,  1217,  1222,  1227,  1232,  1237,  1238,
    1241,  1245,  1249,  1253,  1254,  1257,  1261,  1265,  1269,  1273,
    1274,  1277,  1278,  1279,  1289,  1293,  1297,  1301,  1304,  1308,
    1314,  1315,  1318,  1322,  1323,  1324,  1334,  1335,  1337,  1339,
    1341,  1343,  1345,  1347,  1349,  1354,  1358,  1359,  1362,  1366,
    1368,  1369,  1372,  1376,  1381,  1386,  1387,  1393,  1395,  1396,
    1401,  1404,  1405,  1408,  1412,  1416,  1420,  1424,  1428,  1432,
    1436,  1440,  1442,  1444,  1448,  1449,  1453,  1455,  1459,  1460,
    1464,  1465,  1468,  1472,  1476,  1481,  1486,  1491,  1496,  1502,
    1508,  1511,  1519,  1531,  1539,  1553,  1565,  1575,  1583,  1591,
    1599,  1609,  1619,  1629,  1641,  1653,  1665,  1671,  1689,  1703,
    1719,  1731,  1745,  1746,  1754,  1755,  1763,  1771,  1783,  1789,
    1795,  1805,  1815,  1825,  1831,  1837,  1849,  1859,  1874,  1889,
    1897,  1910,  1921,  1929,  1937,  1945,  1947,  1949,  1951,  1952,
    1955,  1959,  1963,  1966,  1967,  1970,  1974,  1978,  1982,  1986,
    1991,  1992,  1995,  1999,  2003,  2007,  2011,  2015,  2020,  2021,
    2024,  2028,  2032,  2036,  2040,  2045,  2046,  2049,  2053,  2057,
    2061,  2065,  2069,  2074,  2079,  2084,  2085,  2090,  2091,  2094,
    2098,  2102,  2106,  2110,  2114,  2118,  2119,  2122,  2126,  2128,
    2129,  2132,  2136,  2141,  2145,  2149,  2154,  2155,  2160,  2163,
    2164,  2167,  2171,  2176,  2177,  2183,  2189,  2192,  2193,  2196,
    2197,  2204,  2208,  2212,  2216,  2220,  2221,  2224,  2228,  2230,
    2231,  2234,  2238,  2242,  2246,  2250,  2255,  2256,  2265,  2266,
    2267,  2271,  2279,  2287,  2296,  2308,  2315,  2316,  2327,  2329,
    2333,  2340,  2342,  2344,  2346,  2348,  2349,  2353,  2355,  2358,
    2361,  2374,  2377,  2393,  2398,  2411,  2429,  2452,  2465,  2466,
    2469,  2473,  2478,  2483,  2487,  2490,  2493,  2497,  2501,  2505,
    2509,  2513,  2516,  2520,  2524,  2528,  2532,  2536,  2540,  2544,
    2550,  2553,  2556,  2560,  2570,  2574,  2577,  2587,  2590,  2600,
    2603,  2613,  2619,  2623,  2626,  2627,  2630,  2637,  2646,  2655,
    2666,  2668,  2673,  2675,  2677,  2683,  2688,  2693,  2701,  2706,
    2714,  2720,  2724,  2728,  2736,  2742,  2751,  2754,  2755,  2759,
    2766,  2772,  2778,  2780,  2782,  2784,  2786,  2788,  2790,  2792,
    2794,  2796,  2798,  2800,  2802,  2804,  2806,  2808,  2810,  2812,
    2814,  2816,  2818,  2820,  2822,  2826,  2829,  2832,  2836,  2840,
    2844,  2848,  2852,  2856,  2860,  2864,  2868,  2872,  2876,  2880,
    2884,  2888,  2893,  2898,  2903,  2908,  2913,  2918,  2923,  2928,
    2933,  2938,  2945,  2950,  2955,  2960,  2965,  2970,  2975,  2982,
    2989,  2996,  3002,  3005,  3007,  3009,  3011,  3013,  3015,  3017,
    3019,  3021,  3022,  3024,  3026,  3030,  3032,  3034,  3038,  3042,
    3046,  3052,  3056,  3061,  3066,  3073,  3082,  3091,  3097,  3103,
    3105,  3107,  3109,  3111,  3113,  3118,  3125,  3127
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     271,     0,    -1,    -1,   272,   273,    -1,    -1,    -1,   273,
     274,   275,    -1,    63,   265,   277,   266,    -1,   100,   265,
     298,   266,    -1,    69,   265,   333,   266,    -1,    82,   265,
     318,   266,    -1,    84,   265,   324,   266,    -1,    96,   265,
     340,   266,    -1,   112,   265,   363,   266,    -1,   133,   265,
     389,   266,    -1,   188,   265,   419,   266,    -1,   190,   265,
     430,   266,    -1,   434,    -1,   447,    -1,    23,   458,    -1,
     276,    -1,    20,     7,    -1,    20,   195,     7,    -1,    20,
      22,     7,    -1,    20,    37,     7,    -1,    20,    21,     7,
      -1,    20,    20,     7,    -1,    20,     5,     7,    -1,    21,
       7,    -1,    22,     7,    -1,    22,    63,     7,    -1,    22,
     100,     7,    -1,    22,    69,     7,    -1,    22,    82,     7,
      -1,    22,    84,     7,    -1,    22,    96,     7,    -1,    22,
     112,     7,    -1,    22,   133,     7,    -1,    22,   188,     7,
      -1,    22,   190,     7,    -1,    22,     3,     7,    -1,    -1,
     277,   278,    -1,   457,   235,   282,     7,    -1,     5,   297,
     235,   282,     7,    -1,     5,   295,   235,   282,     7,    -1,
      64,   259,   293,   260,     7,    -1,   279,    -1,   457,   248,
     235,   282,     7,    -1,   447,    -1,    -1,    -1,   457,   259,
     451,   260,   235,    67,   280,   259,   262,   290,   281,   267,
     262,   290,   267,   451,   260,     7,    -1,    -1,   286,   259,
     287,   283,   288,   260,    -1,   262,   290,    -1,   282,    -1,
     457,    -1,   457,   296,    -1,    70,    -1,     5,    -1,   290,
      -1,    65,    -1,    -1,   294,   289,   290,    -1,   294,    66,
     457,    -1,     5,    -1,   292,    -1,   265,   291,   266,    -1,
      -1,   291,   294,   292,    -1,   291,   294,   249,   292,    -1,
       3,    -1,   257,   451,   258,    -1,   268,   454,   268,    -1,
       3,     8,   451,    -1,   257,   451,   258,     8,   451,    -1,
       3,     8,   451,     8,   451,    -1,   257,   451,   258,     8,
     451,     8,   451,    -1,   457,    -1,    -1,   293,   294,     5,
      -1,   293,   294,     5,   265,   451,   266,    -1,    -1,   267,
      -1,   265,   262,   451,   266,    -1,    -1,   265,   266,    -1,
     265,   451,   266,    -1,    -1,   298,   299,    -1,    68,   259,
     300,   260,     7,    -1,   457,   259,   260,   235,   301,     7,
      -1,   457,   259,   284,   260,   235,   301,     7,    -1,   447,
      -1,    -1,   300,   294,     5,    -1,   300,   294,     5,   265,
     451,   266,    -1,    24,   259,   451,   260,    -1,   100,   259,
       5,   260,    -1,    -1,   302,   305,    -1,   250,   250,   250,
      -1,    -1,   265,   304,   266,    -1,   301,    -1,   304,   267,
     301,    -1,    -1,   306,   307,    -1,   310,    -1,    -1,    -1,
     307,   236,   308,   307,     8,   309,   307,    -1,   307,   250,
     307,    -1,   307,   253,   307,    -1,    59,   259,   307,   267,
     307,   260,    -1,   307,   251,   307,    -1,   307,   248,   307,
      -1,   307,   249,   307,    -1,   307,   252,   307,    -1,   307,
     256,   307,    -1,   307,   242,   307,    -1,   307,   243,   307,
      -1,   307,   247,   307,    -1,   307,   246,   307,    -1,   307,
     241,   307,    -1,   307,   240,   307,    -1,   307,   239,   307,
      -1,   307,   238,   307,    -1,   307,   237,   307,    -1,   249,
     307,    -1,   248,   307,    -1,   254,   307,    -1,   257,   307,
     258,    -1,   452,    -1,   450,   315,   317,    -1,     5,   388,
      -1,   388,    -1,   388,   315,    -1,    -1,   123,   311,   259,
     305,   260,    -1,    -1,   130,   312,   259,   305,   267,     3,
     260,    -1,    -1,    61,   259,     5,   259,   313,   305,   260,
     260,   265,   451,   266,    -1,    62,   259,     5,   260,   265,
     451,   267,   451,   266,    -1,    56,   259,   388,   260,    -1,
      58,   259,   388,   260,    -1,    -1,    57,   314,   259,   305,
     267,   284,   260,    -1,   242,     5,   243,   259,   305,   260,
      -1,   263,     5,    -1,   263,   214,    -1,   263,   144,    -1,
     263,     3,    -1,   310,   262,     3,    -1,   262,     3,    -1,
     310,   264,   451,    -1,   259,   261,   260,    -1,   259,   260,
      -1,   259,   316,   260,    -1,   307,    -1,   316,   267,   307,
      -1,    -1,   265,   454,   266,    -1,   265,    70,   259,   284,
     260,   266,    -1,    -1,   318,   265,   319,   266,    -1,    -1,
     319,   320,    -1,    97,     5,     7,    -1,    83,   265,   321,
     266,    -1,    -1,   321,   265,   322,   266,    -1,    -1,   322,
     323,    -1,    70,   284,     7,    -1,    70,    65,     7,    -1,
      82,     5,   317,     7,    -1,    -1,   324,   265,   325,   266,
      -1,    -1,   325,   326,    -1,    97,     5,     7,    -1,    89,
     301,     7,    -1,    83,   265,   327,   266,    -1,    -1,   327,
     265,   328,   266,    -1,    -1,   328,   329,    -1,    87,     5,
       7,    -1,    88,     5,     7,    -1,    83,   265,   330,   266,
      -1,    -1,   330,   265,   331,   266,    -1,    -1,   331,   332,
      -1,    90,     5,     7,    -1,    91,   451,     7,    -1,    92,
     451,     7,    -1,    93,   451,     7,    -1,    94,   451,     7,
      -1,    95,   451,     7,    -1,    -1,   333,   334,    -1,   265,
     335,   266,    -1,   447,    -1,    -1,   335,   336,    -1,    97,
     457,     7,    -1,    97,     5,   295,     7,    -1,    87,     5,
       7,    -1,    83,   265,   337,   266,    -1,    83,     5,   265,
     337,   266,    -1,    -1,   337,   265,   338,   266,    -1,   337,
     447,    -1,    -1,   338,   339,    -1,    87,     5,     7,    -1,
      70,   284,     7,    -1,    71,   284,     7,    -1,    77,   301,
       7,    -1,    76,   301,     7,    -1,    81,   457,     7,    -1,
      78,   265,   452,   294,   452,   266,     7,    -1,    72,   284,
       7,    -1,    73,   284,     7,    -1,   100,   301,     7,    -1,
      75,   301,     7,    -1,    74,   301,     7,    -1,   100,   259,
     301,   267,   301,   260,     7,    -1,    75,   259,   301,   267,
     301,   260,     7,    -1,    74,   259,   301,   267,   301,   260,
       7,    -1,    -1,   340,   341,    -1,   265,   342,   266,    -1,
     447,    -1,    -1,   342,   343,    -1,   342,   447,    -1,    97,
     457,     7,    -1,    97,     5,   295,     7,    -1,    87,     5,
       7,    -1,    98,   265,   344,   266,    -1,   106,   265,   350,
     266,    -1,   108,   265,   357,   266,    -1,    69,   265,   360,
     266,    -1,    -1,   344,   265,   345,   266,    -1,   344,   447,
      -1,    -1,   345,   346,    -1,    97,     5,     7,    -1,    99,
       5,     7,    -1,    99,     5,   295,     7,    -1,   100,     5,
     347,     7,    -1,   101,   265,     5,   294,     5,   266,     7,
      -1,   102,   303,     7,    -1,   103,   303,     7,    -1,   104,
     284,     7,    -1,   105,   284,     7,    -1,    -1,    -1,    -1,
     265,   113,     5,     7,   112,     5,   295,     7,   348,    63,
     285,     7,   349,   133,     5,   296,     7,   266,    -1,    -1,
     350,   265,   351,   266,    -1,    -1,   351,   352,    -1,    97,
       5,     7,    -1,   107,   353,     7,    -1,    99,   355,     7,
      -1,     5,    -1,   265,   354,   266,    -1,    -1,   354,   294,
       5,    -1,     5,    -1,   265,   356,   266,    -1,    -1,   356,
     294,     5,    -1,    -1,   357,   265,   358,   266,    -1,   357,
     447,    -1,    -1,   358,   359,    -1,    97,   457,     7,    -1,
      87,     5,     7,    -1,    99,     5,     7,    -1,    -1,   360,
     265,   361,   266,    -1,   360,   447,    -1,    -1,   361,   362,
      -1,    99,     5,     7,    -1,   109,   286,     7,    -1,   110,
     289,     7,    -1,   111,   457,     7,    -1,    -1,   363,   364,
      -1,   265,   365,   266,    -1,   447,    -1,    -1,   365,   366,
      -1,    97,   457,     7,    -1,    97,     5,   295,     7,    -1,
      87,     5,     7,    -1,   113,   265,   367,   266,    -1,   117,
     265,   373,   266,    -1,    -1,   367,   265,   368,   266,    -1,
     367,   447,    -1,    -1,   368,   369,    -1,    97,   457,     7,
      -1,    87,   108,     7,    -1,    87,   118,     7,    -1,    87,
       5,     7,    -1,   187,   453,     7,    -1,    -1,   114,   457,
     370,   372,     7,    -1,   115,   451,     7,    -1,    -1,   259,
     371,   305,   260,     7,    -1,   131,   284,     7,    -1,    84,
       5,     7,    -1,    85,     5,     7,    -1,    82,     5,     7,
      -1,   116,     3,     7,    -1,    -1,   259,   457,   260,    -1,
      -1,   373,   374,    -1,   373,   447,    -1,   118,   265,   379,
     266,    -1,   119,   265,   379,   266,    -1,   120,   265,   383,
     266,    -1,   121,   265,   375,   266,    -1,    -1,   375,   376,
      -1,    87,     5,     7,    -1,   111,     5,     7,    -1,   265,
     377,   266,    -1,    -1,   377,   378,    -1,    79,   388,     7,
      -1,    80,   388,     7,    -1,   117,   388,     7,    -1,   131,
     284,     7,    -1,    -1,   379,   380,    -1,    -1,    -1,   387,
     259,   381,   305,   382,   267,   305,   260,     7,    -1,   131,
     284,     7,    -1,    82,     5,     7,    -1,    84,     5,     7,
      -1,   132,     7,    -1,    85,     5,     7,    -1,    86,   259,
       3,   260,     7,    -1,    -1,   383,   384,    -1,   131,   284,
       7,    -1,    -1,    -1,   387,   259,   385,   305,   386,   267,
     388,   260,     7,    -1,    -1,   123,    -1,   124,    -1,   125,
      -1,   126,    -1,   127,    -1,   128,    -1,   129,    -1,   265,
       5,   457,   266,    -1,   265,   457,   266,    -1,    -1,   389,
     390,    -1,   265,   391,   266,    -1,   447,    -1,    -1,   391,
     392,    -1,    97,   457,     7,    -1,    97,     5,   295,     7,
      -1,   134,   265,   394,   266,    -1,    -1,   141,   393,   265,
     401,   266,    -1,   447,    -1,    -1,   394,   265,   395,   266,
      -1,   394,   447,    -1,    -1,   395,   396,    -1,    97,   457,
       7,    -1,    87,     5,     7,    -1,   135,   397,     7,    -1,
     136,   458,     7,    -1,   139,   399,     7,    -1,   140,   457,
       7,    -1,   137,   453,     7,    -1,   138,   458,     7,    -1,
     447,    -1,   457,    -1,   265,   398,   266,    -1,    -1,   398,
     294,   457,    -1,   457,    -1,   265,   400,   266,    -1,    -1,
     400,   294,   457,    -1,    -1,   401,   402,    -1,     5,   457,
       7,    -1,   143,   301,     7,    -1,   156,   265,   408,   266,
      -1,   160,   265,   410,   266,    -1,   163,   265,   412,   266,
      -1,   166,   265,   414,   266,    -1,     5,   259,   457,   260,
       7,    -1,   143,   259,   301,   260,     7,    -1,   154,     7,
      -1,    16,   259,   301,   260,   265,   401,   266,    -1,    16,
     259,   301,   260,   265,   401,   266,    17,   265,   401,   266,
      -1,   145,   259,   457,   267,   301,   260,     7,    -1,   172,
     259,   457,   267,   301,   267,   301,   267,   301,   267,   301,
     260,     7,    -1,   172,   259,   457,   267,   301,   267,   301,
     267,   301,   260,     7,    -1,   172,   259,   457,   267,   301,
     267,   301,   260,     7,    -1,   173,   259,   457,   267,   453,
     260,     7,    -1,   174,   259,   457,   267,   453,   260,     7,
      -1,   152,   259,   457,   267,   301,   260,     7,    -1,   153,
     259,   457,   267,   284,   267,   457,   260,     7,    -1,   146,
     259,   457,   267,   457,   267,   453,   260,     7,    -1,   147,
     259,   457,   267,   457,   267,   451,   260,     7,    -1,   148,
     259,   457,   267,   451,   267,   453,   267,   451,   260,     7,
      -1,   149,   259,   457,   267,   451,   267,   451,   267,   451,
     260,     7,    -1,   150,   259,   457,   267,   451,   267,   451,
     267,   451,   260,     7,    -1,   155,   259,   301,   260,     7,
      -1,   151,   259,   457,   267,   457,   267,   457,   267,   451,
     267,   453,   267,   451,   267,   451,   260,     7,    -1,   156,
     259,   451,   267,   451,   267,   301,   267,   301,   260,   265,
     401,   266,    -1,   160,   259,   451,   267,   451,   267,   301,
     267,   451,   267,   451,   260,   265,   401,   266,    -1,   163,
     259,   451,   267,   451,   267,   301,   260,   265,   401,   266,
      -1,   163,   259,   451,   267,   451,   267,   301,   267,   451,
     260,   265,   401,   266,    -1,    -1,   195,   403,   259,   405,
     406,   260,     7,    -1,    -1,   198,   404,   259,   405,   406,
     260,     7,    -1,   169,   259,   284,   267,   301,   260,     7,
      -1,   169,   259,   284,   267,   301,   267,   451,   267,   301,
     260,     7,    -1,   190,   259,   457,   260,     7,    -1,   171,
     259,   458,   260,     7,    -1,   175,   259,   457,   267,   453,
     267,   451,   260,     7,    -1,   176,   259,   457,   267,   451,
     267,   458,   260,     7,    -1,   177,   259,   457,   267,   453,
     267,   458,   260,     7,    -1,   178,   265,   457,   266,     7,
      -1,   179,   265,   457,   266,     7,    -1,   185,   265,   457,
     267,   284,   267,   458,   267,   301,   266,     7,    -1,   185,
     265,   457,   267,   284,   267,   458,   266,     7,    -1,   180,
     259,   457,   267,   457,   267,   451,   267,   451,   260,   265,
     401,   266,     7,    -1,   181,   259,   457,   267,   457,   267,
     451,   267,   451,   260,   265,   401,   266,     7,    -1,   182,
     259,   457,   267,   451,   260,     7,    -1,   186,   265,     5,
     267,     5,   267,   136,   458,   267,   451,   266,     7,    -1,
     186,   265,     5,   267,     5,   267,   136,   458,   266,     7,
      -1,   186,   265,     5,   267,     5,   266,     7,    -1,   183,
     259,   457,   267,   457,   260,     7,    -1,   184,   259,   457,
     267,   457,   260,     7,    -1,   447,    -1,   303,    -1,   457,
      -1,    -1,   406,   407,    -1,   267,   210,   458,    -1,   267,
     214,   453,    -1,   267,   453,    -1,    -1,   408,   409,    -1,
     157,   451,     7,    -1,   158,   451,     7,    -1,   144,   301,
       7,    -1,   159,   301,     7,    -1,   141,   265,   401,   266,
      -1,    -1,   410,   411,    -1,   157,   451,     7,    -1,   158,
     451,     7,    -1,   144,   301,     7,    -1,   161,   451,     7,
      -1,   162,   451,     7,    -1,   141,   265,   401,   266,    -1,
      -1,   412,   413,    -1,   164,   451,     7,    -1,    89,   451,
       7,    -1,   165,   301,     7,    -1,    19,   451,     7,    -1,
     141,   265,   401,   266,    -1,    -1,   414,   415,    -1,   164,
     451,     7,    -1,   167,   451,     7,    -1,    89,   451,     7,
      -1,    19,   451,     7,    -1,   134,   457,     7,    -1,   168,
     265,   416,   266,    -1,   141,   265,   401,   266,    -1,   142,
     265,   401,   266,    -1,    -1,   416,   265,   417,   266,    -1,
      -1,   417,   418,    -1,    87,     5,     7,    -1,   113,     5,
       7,    -1,   131,   284,     7,    -1,    89,   451,     7,    -1,
     100,   301,     7,    -1,    19,     5,     7,    -1,    -1,   419,
     420,    -1,   265,   421,   266,    -1,   447,    -1,    -1,   421,
     422,    -1,    97,   457,     7,    -1,    97,     5,   295,     7,
      -1,   135,   457,     7,    -1,   189,   457,     7,    -1,   113,
     265,   423,   266,    -1,    -1,   423,   265,   424,   266,    -1,
     423,   447,    -1,    -1,   424,   425,    -1,    97,   457,     7,
      -1,    76,   265,   426,   266,    -1,    -1,   426,   118,   265,
     427,   266,    -1,   426,     5,   265,   427,   266,    -1,   426,
     447,    -1,    -1,   427,   428,    -1,    -1,   387,   259,   429,
     305,   260,     7,    -1,    87,     5,     7,    -1,   131,   284,
       7,    -1,    82,     5,     7,    -1,    84,     5,     7,    -1,
      -1,   430,   431,    -1,   265,   432,   266,    -1,   447,    -1,
      -1,   432,   433,    -1,    97,   457,     7,    -1,   191,   457,
       7,    -1,   216,     5,     7,    -1,   193,   458,     7,    -1,
     141,   265,   436,   266,    -1,    -1,   190,   457,   192,   457,
     435,   265,   436,   266,    -1,    -1,    -1,   436,   437,   438,
      -1,   194,   259,   440,   443,   444,   260,     7,    -1,   195,
     259,   440,   443,   444,   260,     7,    -1,   195,   259,     6,
     267,   301,   444,   260,     7,    -1,   195,   259,     6,   267,
     233,   259,   458,   260,   444,   260,     7,    -1,   197,   259,
       6,   444,   260,     7,    -1,    -1,   196,   259,   284,   439,
     267,   131,   284,   444,   260,     7,    -1,   447,    -1,   457,
     442,   267,    -1,   457,   442,   441,     5,   442,   267,    -1,
     250,    -1,   251,    -1,   248,    -1,   249,    -1,    -1,   259,
     284,   260,    -1,   200,    -1,   201,   284,    -1,   202,   284,
      -1,   204,   265,   265,   454,   266,   265,   454,   266,   265,
     454,   266,   266,    -1,   203,   284,    -1,   203,   265,   301,
     267,   301,   267,   301,   266,   265,   453,   267,   453,   267,
     453,   266,    -1,   205,   265,   454,   266,    -1,   206,   265,
     265,   454,   266,   265,   454,   266,   266,   265,   451,   266,
      -1,   207,   265,   265,   454,   266,   265,   454,   266,   265,
     454,   266,   266,   265,   451,   267,   451,   266,    -1,   208,
     265,   265,   454,   266,   265,   454,   266,   265,   454,   266,
     265,   454,   266,   266,   265,   451,   267,   451,   267,   451,
     266,    -1,   201,   284,   209,     5,   265,   451,   267,   451,
     266,   265,   451,   266,    -1,    -1,   444,   445,    -1,   267,
     210,   458,    -1,   267,   210,   243,   458,    -1,   267,   210,
     244,   458,    -1,   267,   211,   451,    -1,   267,   219,    -1,
     267,   220,    -1,   267,   215,   451,    -1,   267,   216,     5,
      -1,   267,   217,   446,    -1,   267,   218,   446,    -1,   267,
     216,   446,    -1,   267,   213,    -1,   267,   212,   451,    -1,
     267,   214,   453,    -1,   267,   199,     5,    -1,   267,   222,
       5,    -1,   267,   221,   451,    -1,   267,    76,   453,    -1,
     267,   223,   451,    -1,   267,   223,   265,   454,   266,    -1,
     267,   224,    -1,   267,   225,    -1,   267,   137,   453,    -1,
     267,   169,   265,   301,   267,   301,   267,   301,   266,    -1,
     267,   226,   303,    -1,   267,   227,    -1,   267,   227,   265,
     451,   267,   451,   267,   451,   266,    -1,   267,   228,    -1,
     267,   228,   265,   451,   267,   451,   267,   451,   266,    -1,
     267,   229,    -1,   267,   229,   265,   451,   267,   451,   267,
     451,   266,    -1,   267,   230,   265,   454,   266,    -1,   267,
     231,     3,    -1,   267,   232,    -1,    -1,   446,     6,    -1,
      14,   257,   451,     8,   451,   258,    -1,    14,   257,   451,
       8,   451,     8,   451,   258,    -1,    14,     5,   131,   265,
     451,     8,   451,   266,    -1,    14,     5,   131,   265,   451,
       8,   451,     8,   451,   266,    -1,    15,    -1,    16,   257,
     451,   258,    -1,    18,    -1,   448,    -1,    30,   259,   449,
     260,     7,    -1,   457,   235,   453,     7,    -1,   457,   235,
       6,     7,    -1,   457,   235,   233,   259,   458,   260,     7,
      -1,   457,   235,   459,     7,    -1,   457,   235,    29,   259,
     458,   260,     7,    -1,    11,   257,     6,   258,     7,    -1,
      11,   457,     7,    -1,    11,   262,     7,    -1,    11,   257,
       6,   267,   454,   258,     7,    -1,    12,   257,   457,   258,
       7,    -1,    12,   257,   457,   258,   259,   451,   260,     7,
      -1,    13,     7,    -1,    -1,   449,   294,   457,    -1,   449,
     294,   457,   265,   451,   266,    -1,   449,   294,   457,   235,
     451,    -1,   449,   294,   457,   235,     6,    -1,    36,    -1,
      37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,
      42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,   457,    -1,
     452,    -1,   257,   451,   258,    -1,   249,   451,    -1,   254,
     451,    -1,   451,   249,   451,    -1,   451,   248,   451,    -1,
     451,   250,   451,    -1,   451,   251,   451,    -1,   451,   252,
     451,    -1,   451,   256,   451,    -1,   451,   242,   451,    -1,
     451,   243,   451,    -1,   451,   247,   451,    -1,   451,   246,
     451,    -1,   451,   241,   451,    -1,   451,   240,   451,    -1,
     451,   238,   451,    -1,   451,   237,   451,    -1,    36,   259,
     451,   260,    -1,    37,   259,   451,   260,    -1,    38,   259,
     451,   260,    -1,    39,   259,   451,   260,    -1,    40,   259,
     451,   260,    -1,    41,   259,   451,   260,    -1,    42,   259,
     451,   260,    -1,    43,   259,   451,   260,    -1,    44,   259,
     451,   260,    -1,    45,   259,   451,   260,    -1,    46,   259,
     451,   267,   451,   260,    -1,    47,   259,   451,   260,    -1,
      48,   259,   451,   260,    -1,    49,   259,   451,   260,    -1,
      50,   259,   451,   260,    -1,    51,   259,   451,   260,    -1,
      52,   259,   451,   260,    -1,    53,   259,   451,   267,   451,
     260,    -1,    54,   259,   451,   267,   451,   260,    -1,    55,
     259,   451,   267,   451,   260,    -1,   451,   236,   451,     8,
     451,    -1,   451,   262,    -1,     4,    -1,     3,    -1,    31,
      -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,   457,
      -1,    -1,   451,    -1,   455,    -1,   265,   454,   266,    -1,
     451,    -1,   455,    -1,   454,   267,   451,    -1,   454,   267,
     455,    -1,   451,     8,   451,    -1,   451,     8,   451,     8,
     451,    -1,     5,   265,   266,    -1,     5,   265,   454,   266,
      -1,    25,   259,     5,   260,    -1,    26,   259,     5,   267,
       5,   260,    -1,    27,   259,   451,   267,   451,   267,   451,
     260,    -1,    28,   259,   451,   267,   451,   267,   451,   260,
      -1,     5,   269,   265,   451,   266,    -1,   456,   269,   265,
     451,   266,    -1,     5,    -1,   456,    -1,     6,    -1,   457,
      -1,   459,    -1,    10,   257,   458,   258,    -1,    10,   257,
     458,   267,   454,   258,    -1,   234,    -1,     9,   259,   458,
     267,   458,   260,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   340,   340,   340,   376,   380,   379,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   398,   400,   403,
     408,   418,   420,   422,   424,   426,   428,   430,   432,   434,
     436,   438,   440,   442,   444,   446,   448,   450,   452,   454,
     456,   482,   485,   491,   494,   500,   506,   508,   510,   513,
     519,   529,   518,   546,   545,   562,   573,   578,   595,   625,
     628,   641,   642,   649,   651,   654,   672,   685,   692,   700,
     704,   711,   722,   728,   735,   746,   755,   763,   777,   790,
     825,   829,   839,   856,   856,   861,   867,   868,   873,   881,
     884,   889,   891,   911,   955,   959,   962,   972,   995,  1001,
    1008,  1008,  1015,  1023,  1027,  1033,  1036,  1043,  1043,  1056,
    1059,  1072,  1058,  1100,  1106,  1112,  1118,  1124,  1130,  1136,
    1142,  1148,  1154,  1160,  1166,  1172,  1178,  1184,  1190,  1196,
    1203,  1209,  1211,  1222,  1224,  1230,  1304,  1338,  1347,  1360,
    1359,  1374,  1373,  1388,  1387,  1403,  1415,  1421,  1428,  1427,
    1458,  1484,  1497,  1503,  1510,  1516,  1523,  1530,  1542,  1543,
    1544,  1549,  1550,  1556,  1558,  1561,  1577,  1581,  1589,  1591,
    1597,  1602,  1610,  1612,  1620,  1623,  1629,  1632,  1635,  1674,
    1679,  1687,  1693,  1699,  1706,  1709,  1717,  1719,  1727,  1732,
    1738,  1748,  1758,  1766,  1768,  1776,  1785,  1791,  1839,  1842,
    1845,  1848,  1851,  1863,  1867,  1872,  1877,  1883,  1889,  1895,
    1902,  1910,  1919,  1922,  1941,  1945,  1950,  1960,  1967,  1973,
    1983,  1988,  1994,  1999,  2007,  2015,  2024,  2042,  2051,  2059,
    2067,  2077,  2087,  2097,  2118,  2123,  2128,  2133,  2140,  2145,
    2147,  2153,  2160,  2168,  2177,  2180,  2183,  2186,  2194,  2199,
    2216,  2226,  2240,  2246,  2249,  2254,  2259,  2273,  2293,  2298,
    2303,  2308,  2337,  2343,  2347,  2341,  2421,  2426,  2436,  2440,
    2446,  2453,  2456,  2463,  2479,  2486,  2488,  2507,  2519,  2527,
    2531,  2547,  2552,  2558,  2568,  2573,  2579,  2586,  2597,  2612,
    2616,  2653,  2663,  2672,  2678,  2711,  2714,  2717,  2733,  2737,
    2742,  2747,  2754,  2758,  2764,  2771,  2779,  2789,  2791,  2798,
    2802,  2807,  2814,  2830,  2836,  2839,  2843,  2846,  2856,  2861,
    2860,  2892,  2898,  2897,  3214,  3219,  3228,  3237,  3246,  3251,
    3254,  3295,  3299,  3304,  3313,  3316,  3319,  3322,  3334,  3339,
    3344,  3354,  3364,  3379,  3385,  3390,  3392,  3394,  3396,  3405,
    3423,  3430,  3438,  3429,  3570,  3575,  3584,  3593,  3598,  3607,
    3619,  3633,  3647,  3653,  3661,  3652,  3733,  3734,  3735,  3736,
    3737,  3738,  3739,  3740,  3746,  3767,  3792,  3796,  3801,  3806,
    3813,  3818,  3824,  3831,  3839,  3843,  3842,  3847,  3853,  3857,
    3862,  3872,  3885,  3891,  3894,  3903,  3906,  3911,  3922,  3927,
    3932,  3937,  3943,  3952,  3960,  3962,  3974,  3984,  3991,  3993,
    4006,  4013,  4026,  4048,  4055,  4061,  4067,  4073,  4081,  4103,
    4110,  4116,  4127,  4138,  4151,  4166,  4181,  4196,  4216,  4237,
    4249,  4269,  4286,  4305,  4326,  4340,  4354,  4361,  4395,  4408,
    4422,  4435,  4449,  4448,  4458,  4457,  4466,  4477,  4489,  4499,
    4507,  4520,  4533,  4547,  4557,  4567,  4581,  4595,  4613,  4632,
    4643,  4658,  4673,  4688,  4703,  4718,  4729,  4734,  4745,  4750,
    4754,  4757,  4767,  4784,  4793,  4799,  4803,  4807,  4811,  4816,
    4828,  4838,  4844,  4848,  4852,  4856,  4860,  4865,  4877,  4886,
    4891,  4895,  4899,  4903,  4907,  4919,  4931,  4936,  4940,  4944,
    4948,  4953,  4963,  4969,  4975,  4986,  4988,  4994,  5006,  5011,
    5021,  5050,  5053,  5056,  5064,  5082,  5088,  5093,  5098,  5103,
    5111,  5115,  5122,  5130,  5143,  5148,  5155,  5157,  5160,  5167,
    5172,  5177,  5180,  5187,  5191,  5197,  5209,  5215,  5224,  5229,
    5228,  5263,  5274,  5279,  5288,  5306,  5312,  5317,  5320,  5325,
    5332,  5336,  5343,  5355,  5366,  5371,  5378,  5377,  5405,  5408,
    5407,  5424,  5429,  5434,  5443,  5452,  5462,  5461,  5472,  5480,
    5492,  5516,  5517,  5518,  5519,  5525,  5526,  5532,  5538,  5545,
    5552,  5576,  5583,  5595,  5608,  5628,  5654,  5687,  5709,  5740,
    5744,  5758,  5772,  5786,  5790,  5794,  5798,  5802,  5812,  5817,
    5822,  5842,  5846,  5853,  5863,  5872,  5881,  5888,  5896,  5900,
    5909,  5913,  5917,  5925,  5931,  5935,  5943,  5950,  5958,  5965,
    5973,  5980,  5988,  5992,  6002,  6007,  6057,  6072,  6088,  6108,
    6128,  6166,  6170,  6174,  6184,  6186,  6201,  6207,  6213,  6219,
    6235,  6240,  6256,  6261,  6273,  6283,  6297,  6320,  6323,  6329,
    6343,  6349,  6360,  6361,  6362,  6363,  6364,  6365,  6366,  6367,
    6368,  6369,  6370,  6371,  6372,  6373,  6374,  6375,  6376,  6377,
    6378,  6379,  6380,  6384,  6385,  6386,  6387,  6388,  6389,  6390,
    6391,  6392,  6393,  6394,  6395,  6396,  6397,  6398,  6399,  6400,
    6401,  6402,  6403,  6404,  6405,  6406,  6407,  6408,  6409,  6410,
    6411,  6412,  6413,  6414,  6415,  6416,  6417,  6418,  6419,  6420,
    6421,  6423,  6425,  6430,  6431,  6432,  6433,  6434,  6435,  6436,
    6437,  6456,  6458,  6464,  6467,  6474,  6480,  6483,  6486,  6498,
    6504,  6515,  6531,  6553,  6568,  6606,  6614,  6626,  6634,  6648,
    6651,  6658,  6661,  6676,  6681,  6686,  6705,  6715
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT", "tFLOAT", "tSTRING", "tBIGSTR",
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead",
  "tPrintConstants", "tFor", "tEndFor", "tIf", "tElse", "tEndIf", "tFlag",
  "tHelp", "tCpu", "tCheck", "tInclude", "tConstant", "tList", "tListAlt",
  "tLinSpace", "tLogSpace", "tListFromFile", "tDefineConstant", "tPi",
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
  "String__Index", "CharExpr", "StrCat", 0
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
     485,   486,   487,   488,   489,   490,    63,   491,   492,   493,
     494,   495,    60,    62,   496,   497,   498,   499,    43,    45,
      42,    47,    37,   500,    33,   501,    94,    40,    41,    91,
      93,    46,    35,    36,   502,   123,   125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   270,   272,   271,   273,   274,   273,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   277,   277,   278,   278,   278,   278,   278,   278,   278,
     280,   281,   279,   283,   282,   282,   284,   284,   285,   286,
     286,   287,   287,   288,   288,   288,   289,   290,   290,   291,
     291,   291,   292,   292,   292,   292,   292,   292,   292,   292,
     293,   293,   293,   294,   294,   295,   296,   296,   297,   298,
     298,   299,   299,   299,   299,   300,   300,   300,   301,   301,
     302,   301,   301,   303,   303,   304,   304,   306,   305,   307,
     308,   309,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   310,   310,   310,   310,   310,   310,   311,
     310,   312,   310,   313,   310,   310,   310,   310,   314,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   315,   315,
     315,   316,   316,   317,   317,   317,   318,   318,   319,   319,
     320,   320,   321,   321,   322,   322,   323,   323,   323,   324,
     324,   325,   325,   326,   326,   326,   327,   327,   328,   328,
     329,   329,   329,   330,   330,   331,   331,   332,   332,   332,
     332,   332,   332,   333,   333,   334,   334,   335,   335,   336,
     336,   336,   336,   336,   337,   337,   337,   338,   338,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   340,   340,   341,   341,   342,   342,
     342,   343,   343,   343,   343,   343,   343,   343,   344,   344,
     344,   345,   345,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   347,   348,   349,   347,   350,   350,   351,   351,
     352,   352,   352,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   357,   357,   358,   358,   359,   359,   359,   360,
     360,   360,   361,   361,   362,   362,   362,   362,   363,   363,
     364,   364,   365,   365,   366,   366,   366,   366,   366,   367,
     367,   367,   368,   368,   369,   369,   369,   369,   369,   370,
     369,   369,   371,   369,   369,   369,   369,   369,   369,   372,
     372,   373,   373,   373,   374,   374,   374,   374,   375,   375,
     376,   376,   376,   377,   377,   378,   378,   378,   378,   379,
     379,   381,   382,   380,   380,   380,   380,   380,   380,   380,
     383,   383,   384,   385,   386,   384,   387,   387,   387,   387,
     387,   387,   387,   387,   388,   388,   389,   389,   390,   390,
     391,   391,   392,   392,   392,   393,   392,   392,   394,   394,
     394,   395,   395,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   397,   397,   398,   398,   399,   399,   400,   400,
     401,   401,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   403,   402,   404,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   405,   405,   406,   406,
     407,   407,   407,   408,   408,   409,   409,   409,   409,   409,
     410,   410,   411,   411,   411,   411,   411,   411,   412,   412,
     413,   413,   413,   413,   413,   414,   414,   415,   415,   415,
     415,   415,   415,   415,   415,   416,   416,   417,   417,   418,
     418,   418,   418,   418,   418,   419,   419,   420,   420,   421,
     421,   422,   422,   422,   422,   422,   423,   423,   423,   424,
     424,   425,   425,   426,   426,   426,   426,   427,   427,   429,
     428,   428,   428,   428,   428,   430,   430,   431,   431,   432,
     432,   433,   433,   433,   433,   433,   435,   434,   436,   437,
     436,   438,   438,   438,   438,   438,   439,   438,   438,   440,
     440,   441,   441,   441,   441,   442,   442,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   444,   444,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   446,   446,   447,   447,   447,   447,
     447,   447,   447,   447,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   449,   449,   449,
     449,   449,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   452,   452,   452,   452,   452,   452,   452,
     452,   453,   453,   453,   453,   454,   454,   454,   454,   455,
     455,   455,   455,   455,   455,   455,   455,   456,   456,   457,
     457,   458,   458,   458,   458,   458,   458,   459
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
       0,     3,     6,     0,     1,     4,     0,     2,     3,     0,
       2,     5,     6,     7,     1,     0,     3,     6,     4,     4,
       0,     2,     3,     0,     3,     1,     3,     0,     2,     1,
       0,     0,     7,     3,     3,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     3,     1,     3,     2,     1,     2,     0,
       5,     0,     7,     0,    11,     9,     4,     4,     0,     7,
       6,     2,     2,     2,     2,     3,     2,     3,     3,     2,
       3,     1,     3,     0,     3,     6,     0,     4,     0,     2,
       3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
       4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
       3,     3,     4,     0,     4,     0,     2,     3,     3,     3,
       3,     3,     3,     0,     2,     3,     1,     0,     2,     3,
       4,     3,     4,     5,     0,     4,     2,     0,     2,     3,
       3,     3,     3,     3,     3,     7,     3,     3,     3,     3,
       3,     7,     7,     7,     0,     2,     3,     1,     0,     2,
       2,     3,     4,     3,     4,     4,     4,     4,     0,     4,
       2,     0,     2,     3,     3,     4,     4,     7,     3,     3,
       3,     3,     0,     0,     0,    18,     0,     4,     0,     2,
       3,     3,     3,     1,     3,     0,     3,     1,     3,     0,
       3,     0,     4,     2,     0,     2,     3,     3,     3,     0,
       4,     2,     0,     2,     3,     3,     3,     3,     0,     2,
       3,     1,     0,     2,     3,     4,     3,     4,     4,     0,
       4,     2,     0,     2,     3,     3,     3,     3,     3,     0,
       5,     3,     0,     5,     3,     3,     3,     3,     3,     0,
       3,     0,     2,     2,     4,     4,     4,     4,     0,     2,
       3,     3,     3,     0,     2,     3,     3,     3,     3,     0,
       2,     0,     0,     9,     3,     3,     3,     2,     3,     5,
       0,     2,     3,     0,     0,     9,     0,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     0,     2,     3,     1,
       0,     2,     3,     4,     4,     0,     5,     1,     0,     4,
       2,     0,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     0,     3,     1,     3,     0,     3,
       0,     2,     3,     3,     4,     4,     4,     4,     5,     5,
       2,     7,    11,     7,    13,    11,     9,     7,     7,     7,
       9,     9,     9,    11,    11,    11,     5,    17,    13,    15,
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
       6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     3,     1,     1,     3,     3,     3,
       5,     3,     4,     4,     6,     8,     8,     5,     5,     1,
       1,     1,     1,     1,     4,     6,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   739,     0,     0,     0,
       0,   630,     0,   632,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   633,   740,     0,     0,     0,     0,     0,
       0,   646,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   741,     0,     0,   746,   742,
      19,   743,   647,    41,   203,   166,   179,   234,    89,   298,
     376,   515,   545,     0,     0,   721,     0,     0,   642,   641,
       0,     0,   714,   713,   715,   716,   717,   718,   719,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   673,   720,     0,    27,    26,    25,    23,
      24,    22,    40,    30,    32,    33,    34,    35,    31,    36,
      37,    38,    39,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   739,     0,
       0,     0,     0,     0,     0,     0,     0,   722,     0,   723,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   712,   631,     0,     0,     0,
      84,     0,   739,     0,     7,    42,    47,    49,     0,   207,
       9,   204,   206,   168,    10,   181,    11,   238,    12,   235,
     237,     0,     8,    90,    94,     0,   302,    13,   299,   301,
     380,    14,   377,   379,   519,    15,   516,   518,   549,    16,
     546,   548,   556,     0,     0,   636,     0,     0,     0,     0,
       0,     0,   725,     0,   726,     0,   635,   638,   737,   640,
       0,   644,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   674,     0,     0,   690,   689,   688,
     687,   683,   684,   686,   685,   678,   677,   679,   680,   681,
     682,     0,   744,     0,   634,   648,     0,     0,     0,    80,
     721,     0,     0,     0,     0,     0,     0,    95,     0,     0,
       0,     0,     0,     0,   738,   731,     0,     0,     0,     0,
       0,     0,     0,   724,     0,   729,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,     0,
     702,   703,   704,   705,   706,   707,     0,     0,     0,     0,
     626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,   739,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   205,   208,     0,     0,   167,   169,     0,   100,     0,
     180,   182,     0,     0,     0,     0,     0,     0,   236,   239,
     240,    83,   739,     0,    56,     0,    57,     0,     0,     0,
       0,   300,   303,     0,     0,   385,   378,   381,   387,     0,
       0,     0,     0,   517,   520,     0,     0,     0,     0,     0,
     547,   550,   558,   732,   733,     0,     0,     0,     0,     0,
     727,   728,     0,   643,     0,     0,     0,     0,     0,     0,
       0,   711,   747,   745,   651,   650,     0,     0,    88,    60,
       0,     0,     0,     0,    72,     0,    69,     0,    55,    67,
      79,    43,     0,     0,     0,     0,   214,     0,   739,     0,
     172,     0,   186,     0,     0,     0,     0,   107,     0,   289,
       0,   739,     0,   248,   266,   281,     0,     0,   100,     0,
       0,   739,     0,   309,   331,   739,     0,   388,     0,   739,
       0,   526,     0,     0,     0,   558,     0,     0,     0,   559,
       0,     0,     0,   639,   637,   730,   645,     0,   628,   701,
     708,   709,   710,   627,   649,    85,    45,    44,    46,    81,
       0,     0,    83,     0,    62,    53,    61,    48,     0,   214,
       0,   211,     0,     0,   209,     0,   170,     0,     0,     0,
       0,   184,   101,     0,   183,     0,   243,     0,   241,     0,
       0,     0,    91,    96,     0,   100,   306,     0,   304,     0,
       0,     0,   382,     0,   410,     0,   521,     0,   523,   524,
     551,   559,   552,   554,   553,   557,     0,   734,     0,     0,
       0,     0,    75,    73,    68,     0,    74,    83,    50,     0,
     217,   212,   216,   210,   174,   171,   188,   185,     0,     0,
     102,   739,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,     0,   148,     0,     0,     0,     0,   139,   141,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
     137,     0,   134,   720,   292,   247,   291,   242,   251,   244,
     250,   268,   245,   284,   246,   283,     0,    92,     0,   305,
     312,   307,   311,     0,     0,     0,     0,   308,   332,   333,
     383,   391,   384,   390,     0,   522,   529,   525,   528,   555,
       0,     0,     0,     0,   560,   568,     0,     0,   629,     0,
       0,     0,     0,    70,     0,     0,     0,   213,     0,     0,
       0,    98,    99,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,   130,   132,     0,   156,   154,   151,
     153,   152,   739,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   163,     0,     0,     0,     0,
       0,    93,     0,   349,   349,   360,   338,     0,   739,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,   444,   386,   411,   465,     0,
       0,     0,     0,     0,   735,   736,    82,    77,    76,    71,
      54,    66,     0,     0,     0,     0,     0,     0,     0,   100,
     100,   100,   100,     0,     0,     0,   100,   215,   218,     0,
       0,   173,   175,     0,     0,     0,   187,   189,     0,   107,
       0,     0,     0,     0,   107,   107,     0,   133,     0,   375,
       0,   129,   128,   127,   126,   125,   121,   122,   124,   123,
     117,   118,   113,   116,   119,   114,   120,   155,   157,   159,
       0,   161,     0,     0,   135,     0,     0,     0,     0,   290,
     293,     0,     0,     0,     0,   103,   103,     0,     0,   249,
     252,     0,     0,     0,   267,   269,     0,     0,     0,   282,
     285,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   721,   322,   310,   313,   366,   366,   366,     0,     0,
       0,     0,     0,   721,     0,     0,     0,   389,   392,   401,
       0,     0,   100,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   420,   100,     0,   473,     0,   480,
       0,   488,   495,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   527,   530,     0,   575,     0,
       0,   566,   588,     0,    65,    64,     0,     0,     0,     0,
       0,   100,     0,   100,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,   163,   193,     0,     0,   146,     0,
     147,     0,   143,     0,     0,     0,   107,   374,     0,   158,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     262,     0,   100,     0,     0,     0,     0,     0,   277,   279,
       0,   273,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   367,   368,   369,   370,   371,   372,
     373,     0,     0,   334,   350,     0,   335,     0,   336,   361,
       0,     0,     0,   343,   337,   339,     0,     0,   404,     0,
     402,     0,     0,     0,   408,     0,   406,     0,     0,   412,
       0,     0,   413,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   103,
     533,     0,   577,     0,     0,     0,     0,     0,     0,     0,
       0,   588,     0,     0,   100,   588,     0,     0,    78,    51,
     220,   221,   226,   227,     0,   230,     0,   229,   223,   222,
      83,   224,   219,     0,   228,   177,   176,     0,     0,   190,
     191,     0,     0,   107,     0,   140,     0,     0,   111,   162,
       0,   164,   294,   295,   296,   297,   253,   254,     0,     0,
       0,    83,   105,     0,   258,   259,   260,   261,   270,    83,
     272,    83,   271,   287,   286,   288,   327,   325,   326,   317,
     315,   316,   314,   329,   321,   328,   324,   318,     0,     0,
       0,     0,     0,     0,   357,   351,     0,   363,     0,     0,
       0,   394,   393,    83,   395,   396,   399,   400,    83,   397,
     398,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,   100,     0,     0,   100,
     414,   474,     0,     0,   100,     0,     0,     0,     0,   415,
     481,     0,     0,     0,     0,     0,   100,   416,   489,     0,
       0,     0,     0,     0,     0,     0,     0,   417,   496,   100,
       0,   100,   721,   721,   721,     0,   721,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   466,   468,   467,
     468,     0,   531,   578,   579,   100,   581,     0,     0,     0,
       0,     0,     0,     0,   573,   574,   571,   572,   569,     0,
       0,   588,     0,     0,     0,     0,   589,     0,   100,   100,
       0,   100,   178,   195,   192,     0,   115,     0,     0,     0,
     150,     0,     0,   255,     0,   256,     0,   104,   100,   278,
       0,   274,     0,     0,     0,     0,   355,   356,   358,     0,
     354,   107,   362,   107,   340,   341,     0,     0,     0,     0,
     342,   344,   403,     0,   407,     0,   418,   410,   419,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   436,     0,
     410,     0,     0,     0,     0,     0,   410,     0,     0,     0,
       0,     0,     0,     0,     0,   410,     0,     0,     0,     0,
       0,   410,   410,     0,     0,   505,     0,   449,     0,     0,
       0,     0,     0,     0,   453,   454,     0,     0,     0,     0,
       0,     0,     0,   448,     0,     0,   739,     0,   532,   536,
       0,     0,     0,     0,     0,     0,     0,     0,   576,   575,
       0,     0,     0,     0,   565,   721,   721,     0,     0,     0,
       0,     0,   601,   721,     0,   624,   624,   624,   594,   595,
       0,     0,     0,   610,   611,   103,   615,   617,   619,     0,
       0,   623,     0,     0,     0,     0,     0,     0,   149,     0,
       0,   142,   112,     0,     0,     0,   106,   280,   276,     0,
     320,   323,     0,   352,   364,     0,     0,     0,     0,   405,
     409,     0,     0,   721,     0,   721,     0,     0,     0,     0,
       0,   100,     0,   477,   475,   476,   478,   100,     0,   484,
     482,   483,   485,   486,   100,   493,   491,     0,   490,   492,
     500,   499,   501,     0,     0,   497,   498,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   721,   469,     0,   537,   537,
       0,   100,     0,   583,     0,     0,     0,   561,     0,     0,
       0,   562,   588,   607,   612,   100,   604,     0,     0,   590,
     593,   602,   603,   596,   597,   600,   598,   599,   606,   605,
       0,   608,   614,     0,     0,     0,     0,   622,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   194,
     196,     0,     0,   165,     0,     0,   330,   359,     0,     0,
     345,   346,   347,   348,   421,   423,     0,     0,     0,     0,
       0,     0,   429,     0,     0,   479,     0,   487,     0,   494,
     503,   504,   507,   502,   446,     0,     0,   427,   428,     0,
       0,     0,     0,     0,   459,   463,   464,     0,   462,     0,
     443,     0,   721,   472,   445,   366,   366,     0,     0,     0,
       0,     0,     0,   570,   588,   563,     0,     0,   591,   592,
     625,     0,     0,     0,     0,     0,     0,   233,   232,   225,
     231,     0,     0,     0,     0,     0,     0,     0,   145,     0,
     257,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,   100,     0,   100,     0,
       0,     0,     0,     0,     0,   100,     0,   470,   471,     0,
       0,     0,     0,   535,     0,   538,   534,     0,   100,     0,
       0,     0,     0,     0,     0,   100,   609,     0,     0,     0,
     621,     0,   197,   198,   199,   200,   201,   202,     0,     0,
       0,     0,   410,   431,   432,     0,     0,     0,     0,   430,
       0,     0,   410,     0,     0,     0,     0,   100,     0,     0,
     506,   508,     0,   426,     0,   450,   451,   452,     0,     0,
     456,     0,     0,     0,     0,     0,     0,     0,   539,     0,
       0,     0,     0,     0,     0,     0,   567,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,     0,     0,     0,
     721,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,   461,     0,   543,
     544,   541,   542,   107,     0,     0,     0,     0,     0,     0,
     564,   100,     0,     0,     0,     0,   263,   353,   365,   422,
     433,   434,   435,     0,   410,     0,   440,   410,   514,   509,
     512,   513,   510,   511,   447,   425,     0,   410,   410,   455,
       0,     0,     0,   721,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,   460,     0,     0,     0,     0,     0,     0,     0,   613,
     616,   618,   620,     0,     0,   438,   410,   441,   424,     0,
       0,   540,     0,   721,     0,     0,     0,     0,     0,    86,
       0,     0,   457,   458,   587,     0,   580,   584,     0,     0,
     264,     0,    58,     0,   439,   721,     0,     0,     0,    87,
       0,     0,     0,     0,     0,   437,   582,     0,     0,    86,
       0,     0,     0,   585,     0,     0,     0,   265,     0,     0,
       0,   586
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   146,   225,   226,
     736,  1387,   424,   627,   425,  1998,   395,   565,   734,   853,
     488,   562,   489,   390,   221,   327,  2012,   328,   151,   243,
     421,   506,   507,  1357,  1243,   582,   583,   678,   890,  1401,
     679,   750,   751,  1223,   745,   784,   912,   914,   148,   334,
     406,   575,   739,   872,   149,   335,   411,   577,   740,   877,
    1218,  1547,  1680,   147,   231,   333,   402,   570,   738,   868,
     150,   239,   336,   419,   589,   787,   930,  1240,  1963,  2018,
     590,   788,   935,  1083,  1251,  1080,  1249,   591,   789,   940,
     585,   786,   920,   152,   248,   339,   432,   599,   792,   954,
    1263,  1099,  1414,   600,   708,   958,  1125,  1280,  1431,   955,
    1114,  1421,  1688,   957,  1119,  1423,  1689,  1115,   680,   153,
     252,   340,   437,   528,   603,   797,   968,  1129,  1283,  1135,
    1288,   714,   837,  1011,  1012,  1358,  1494,  1626,  1154,  1311,
    1156,  1320,  1158,  1328,  1159,  1338,  1607,  1785,  1851,   154,
     256,   341,   444,   607,   839,  1016,  1361,  1735,  1805,  1913,
     155,   260,   342,   451,    31,   343,   539,   616,   724,  1196,
    1017,  1379,  1193,  1191,  1197,  1386,  1655,   838,    33,   145,
     681,   272,   123,   168,   273,   274,    34,   124,    70,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1411
static const yytype_int16 yypact[] =
{
   -1411,   120, -1411, -1411,   191,  4905,  -216,    92,  -132,   224,
      17, -1411,   -32, -1411,   616,   238,  4812,   125,    -2,    64,
      81,   105,   124,   140,   150,   174,   176,   184,    39, -1411,
   -1411, -1411, -1411, -1411,    73,    38,   186,   461,   466,   468,
     481, -1411,   403,  4587,  4587,   537, -1411,   539,   557,   561,
     564,   576, -1411,   584, -1411,   586,   600,   609,   623,   633,
     645,   688,   699,   718,   723, -1411,   290,   279, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411,   479,   463,  2388,  4587,  -130, -1411, -1411,
     483,   491, -1411, -1411, -1411, -1411, -1411, -1411, -1411,   490,
     500,   527,   540,   566,   569,   575,   579,   590,   601,   611,
     625,   642,   648,   651,   659,   662,   689,   690,   691,  4587,
    4587,  4587,  3938, -1411, -1411,  3955, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411,   125,   125,  -236,    99,   646,   -23,    -6,
     678,   789,   721,   828,  1001,  1021,   481,  4587,  -174,   813,
     692,   693,   694,   695,   703,   704,  4227,  4441,   838, -1411,
     861,  4409,   892,  4227,    21,  4587,  4587,  4587,  4587,  4587,
    4587,  4587,  4587,  4587,  4587,  4587,  4587,  4587,  4587,  4587,
    4587,  4587,  4587,  4587,  4587,  4587,  -169,  -169,  4773,  4587,
    4587,  4587,  4587,  4587,  4587,  4587,  4587,  4587,  4587,  4587,
    4587,  4587,  4587,  4587,  4587, -1411, -1411,   700,  -115,   930,
   -1411,   481,   -56,   707, -1411, -1411, -1411, -1411,   223, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411,   709, -1411, -1411, -1411,  -119, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411,  5665,   465, -1411,   942,   953,  4587,  4587,
     125,   125,  4441,     5, -1411,  4587, -1411, -1411, -1411, -1411,
     100, -1411,  4587,  4496,  6151,  6178,  6205,  6232,  6259,  6286,
    6313,  6340,  6367,  6394,  4700,  6421,  6448,  6475,  6502,  6529,
    6556,  4827,  4860,  4883, -1411,  2382,  4523,  2547,  1032,  2248,
    2248,   565,   565,   565,   565,   664,   664,  -169,  -169,  -169,
    -169,   125, -1411,  4227, -1411,  -141,  3188,   734,   744, -1411,
    2147,   745,  4587,   167,    77,     9,   366, -1411,    16,   277,
     222,   796,   472,   719, -1411, -1411,   106,   747,   716,  4906,
    4929,   750,   751, -1411,  4227,  4552,   997,  6583,  4587, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,  4587,
   -1411, -1411, -1411, -1411, -1411, -1411,  4587,  4587,  4587,  4587,
   -1411,  4587,   760,   108,  4474,  4587,  4587,  5692,    74,    74,
     -37,    88, -1411,    44,  1011,   763,    74,  6610,    46,  1020,
    1023, -1411, -1411,   765,  1033, -1411, -1411,   775,   112,  1036,
   -1411, -1411,   778,  1039,  1040,   782,   783,   784, -1411, -1411,
   -1411,   137,  -203,   815, -1411,   792, -1411,  1049,  1058,   799,
     800, -1411, -1411,  1061,   803, -1411, -1411, -1411, -1411,  1064,
     805,   481,   481, -1411, -1411,   481,   807,   481,   125,  1068,
   -1411, -1411, -1411, -1411, -1411,  1069,  4587,  4587,  1078,  1081,
    4441, -1411,  4587, -1411,  1083,   640,  6637,  6664,  6691,  6718,
    6745,  7196, -1411, -1411, -1411,  7196,  5719,  5746, -1411, -1411,
    1084,  1085,  1097,  1070,  1099,  4587, -1411,  4227, -1411, -1411,
   -1411, -1411,    40,  1101,   874,   845, -1411,  1104,   216,  1127,
   -1411,  1129, -1411,   901,   903,   913,  1157, -1411,  1164, -1411,
    1168,   216,  1169, -1411, -1411, -1411,  1170,  1176,   112,   947,
    1179,   216,  1181, -1411, -1411,   216,  1182, -1411,   925,   216,
    1184, -1411,  1185,  1195,  1196, -1411,  1198,  1201,  1202,   945,
     952,  4952,  4975, -1411, -1411,  7196, -1411,  4587, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,   949,
    4587,  6768,   163,   193, -1411, -1411, -1411, -1411,  1148, -1411,
    1066, -1411,   955,  1211, -1411,   218, -1411,   229,  4587,  1214,
     971, -1411, -1411,  1966, -1411,  1154, -1411,  1215, -1411,  1221,
     322,  1288, -1411,   959,  1220,   112, -1411,  1222, -1411,  1324,
      60,  1223, -1411,  1372, -1411,  1231, -1411,  1488, -1411, -1411,
   -1411,   962, -1411, -1411, -1411, -1411,  1617, -1411,  4587,  4587,
    5773,  4587,  4609,  1242, -1411,    49, -1411,   154, -1411,  1519,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,  6791,   992,
   -1411,   257, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411,   994, -1411,   995,   996,   998,  1002, -1411, -1411,
    1251,  1966,  1966,  1966,  1966,  1260,   248,  1264,  7271,  -106,
    1006,  1006, -1411,  1012, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411,  4587, -1411,  1270, -1411,
   -1411, -1411, -1411,  1024,  1043,  1044,  1045, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411,  2669, -1411, -1411, -1411, -1411, -1411,
    1026,  1046,  1052,  1053, -1411, -1411,  6818,  6845, -1411,  5800,
    4587,  4587,    45, -1411,  1038,    55,  1054, -1411,  1123,    94,
     127, -1411, -1411, -1411,  1055,  1062,  1055,  1966,  1320,  1322,
    1071,  1074,  1098,  1072,  1072,  1072,  7248, -1411, -1411, -1411,
   -1411, -1411,    34,  1077, -1411,  1966,  1966,  1966,  1966,  1966,
    1966,  1966,  1966,  1966,  1966,  1966,  1966,  1966,  1966,  1966,
    1966,  1343,  4587,  1650, -1411,  1086,   367,   680,   -40,   304,
    5827, -1411,  2392, -1411, -1411, -1411, -1411,   542,    10,  -100,
     148,  1091,  1093,  1096,  1100,  1102,  1103,  1105,  1107,  1111,
    1350,  1112,    -4,    -3,   166,  1095,  1114,  1115,  1116,  1119,
    1120,  1121,  1132,  1133,  1117,  1128,  1138,  1139,  1140,  1142,
    1144,  1141,  1145,  1146, -1411, -1411, -1411, -1411, -1411,   -34,
     481,   629,   114,  1352, -1411, -1411, -1411,  7196,  4636, -1411,
   -1411, -1411,   481,    44,  1147,   114,   114,   114,   114,   149,
     200,   112,   112,  1149,   481,  1358,   283, -1411, -1411,    53,
    1399, -1411, -1411,  1150,  1402,  1406, -1411, -1411,  1152, -1411,
    1153,  4468,  1162,  1165, -1411, -1411,  1163, -1411,  1160, -1411,
    1966,  3007,  3779,  2674,  2674,  2674,   905,   905,   905,   905,
     502,   502,  1072,  1072,  1072,  1072,  1072, -1411, -1411, -1411,
    1167,  7271,   185,  4419, -1411,  1424,    33,  1428,   481, -1411,
   -1411,  1429,  1430,  1431,  1172,  1173,  1173,   114,   114, -1411,
   -1411,  1435,    63,    65, -1411, -1411,  1436,   481,  1437, -1411,
   -1411, -1411,  1438,  1464,  1465,   121,   481,   481,  4587,  1468,
     114,  2953, -1411, -1411, -1411,  1809,  1861,   974,   274,  1467,
     481,    72,   125,  2953,   125,    75,   481, -1411, -1411, -1411,
     481,  1466,   112,   112,  1471,   481,   481,   481,   481,   481,
     481,   481,   481,   481, -1411,   112,  4587, -1411,  4587, -1411,
    4587, -1411, -1411,   114,   125,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,  1469,
     481,  1216,  1225,  1217,   481, -1411, -1411,  1041,  1229,  1212,
    1041, -1411, -1411,  4587, -1411, -1411,    44,  1473,  1474,  1483,
    1485,   112,  1487,   112,  1489,  1490,  1504,   670,  1505,  1506,
     112,  1508,  1510,  1512,  1086, -1411,  1513,  1514, -1411,  1228,
   -1411,  1966, -1411,  1257,  1265,  1259, -1411, -1411,  1499, -1411,
   -1411,  1966,  1269,   388,  1529,  1531,  1532,  1533,  1535,    12,
    1278,  1539,   112,  1538,  1540,  1541,  1543,  1544, -1411, -1411,
    1545, -1411, -1411,  1548,  1553,  1554,  1555,  1556,  1557,  1558,
    1560,  1561,  1562,  1563, -1411,  1520,  1564,  1565,  1567, -1411,
    1571,  1573,  1574,  1287, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411,   114,  1575, -1411, -1411,  1321, -1411,   114, -1411, -1411,
    1325,  1576,  1580, -1411, -1411, -1411,  1579,  1581, -1411,  1587,
   -1411,  1588,  1589,  1590, -1411,  1593, -1411,  1594,  1327, -1411,
    1342,  1344, -1411,  1336,  1338,  1340,  1341,  1345,  1346,  1347,
    1348,  1354,  1351,  4998,   404,  5021,   484,  5044,   103,   919,
    1356,  1365,  1359,  1360,  1369,  1373,  1374,  1377,  1379,  1380,
    1382,  1383,  1384,  1385,  1389,  1390,  1391,  1400,    76,    76,
   -1411,  1632, -1411,   114,   114,    83,  1394,  1396,  1401,  1411,
    1412, -1411,   114,   462,     8, -1411,  1397,   187,  7196, -1411,
   -1411, -1411, -1411, -1411,  1398, -1411,  1404, -1411, -1411, -1411,
    1443, -1411, -1411,  1446, -1411, -1411, -1411,  1672,   419, -1411,
   -1411,   114,  7223, -1411,  4587, -1411,  1677,  1454, -1411,  7271,
     114, -1411, -1411, -1411, -1411, -1411, -1411, -1411,  1708,  1603,
    1710,  1443, -1411,   420, -1411, -1411, -1411, -1411, -1411,   431,
   -1411,   449, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411,  1459, -1411, -1411, -1411, -1411,  1461,  1712,
    1715,  1716,  1722,  1720, -1411, -1411,  1721, -1411,  1725,  1726,
     307, -1411, -1411,   451, -1411, -1411, -1411, -1411,   454, -1411,
   -1411,  1727,  1479,  1752,   112,   481,   481,  4587,  4587,  4587,
     481,   112,   114,  1757,  4587,  1500,   112,  4587,  4587,   112,
   -1411, -1411,  4587,  1509,   112,  4587,  4587,  4587,  4587, -1411,
   -1411,  4587,  4587,  4587,  1516,  4587,   112, -1411, -1411,  4587,
    4587,   481,  1518,  1521,  4587,  4587,  1522, -1411, -1411,   112,
    1768,   112,  2953,  2953,  2953,  4587,  2953,  1770,  1771,   481,
     481,  4587,   481,   481,   114,  1724,  1772, -1411, -1411, -1411,
   -1411,   309, -1411,  1583, -1411,   112, -1411,  1523,  4227,  1525,
    1528,  1530,   261,  1534, -1411, -1411, -1411, -1411, -1411,  1791,
    1542, -1411,   263,  1668,  1795,  4829, -1411,  1536,   112,   112,
     670,   112, -1411, -1411, -1411,  1547, -1411,  1549,  5067,  1550,
   -1411,  1966,  1566, -1411,  1799, -1411,  1800, -1411,   112, -1411,
    1803, -1411,  1810,   481,  1811,  1814, -1411, -1411, -1411,  1568,
   -1411, -1411, -1411, -1411, -1411, -1411,  1055,  1055,  1055,   114,
   -1411, -1411, -1411,   481, -1411,   481, -1411, -1411, -1411,  1569,
    1585,  1586,  5090,  5113,  5136,  1591,  1572,  1592, -1411,  5159,
   -1411,  1815,  1599,  1793,  1816,  5182, -1411,  1817,  1864,  2123,
    2334,  2496,  5205,  2524,  2657, -1411,  2908,  1818,  2925,  3176,
    1820, -1411, -1411,  3237,  3254, -1411,   265, -1411,  1595,  1578,
    1596,  1597,  5228,  1598, -1411, -1411,  1600,  1601,  6872,  1606,
    1610,  1607,   457, -1411,   299,   332,   266,  1551, -1411, -1411,
    1826,  1608,  4227,   529,  4227,  4227,  4227,  1827, -1411,  1229,
     125,   336,  1836,   114, -1411,  2953,  2953,  1611,  1828,   212,
    4587,  4587, -1411,  2953,  4587,  1849, -1411, -1411, -1411, -1411,
    4587,  1852,  1413, -1411, -1411,  1173,  1612,  1613,  1614,  1615,
    1857, -1411,  1620,  1623,  1624,  1619,  1627,   653, -1411,  1630,
    4587, -1411,  7271,  1631,  1856,  1634, -1411, -1411, -1411,  1636,
   -1411, -1411,  1866, -1411, -1411,  1895,  1896,  1898,  1899, -1411,
   -1411,  2866,  1901,  2953,  4587,  2953,  4587,  4587,   481,  1907,
     481,   112,  2929, -1411, -1411, -1411, -1411,   112,  3123, -1411,
   -1411, -1411, -1411, -1411,   112, -1411, -1411,  3185, -1411, -1411,
   -1411, -1411, -1411,  3379,  3441, -1411, -1411,   532,  1909,  4587,
     112,  1910,  1911,  4587,   125,   125,  4587,  4587,  1912,  1913,
    1914,   125,  1915,  1787,  1918,  2271, -1411,  1920, -1411, -1411,
    1664,   112,   543, -1411,   556,   588,   596, -1411,  1663,  1679,
    1935, -1411, -1411, -1411, -1411,   112, -1411,   125,   125, -1411,
    7196,  7196, -1411,  7196, -1411,  1938,  1938,  1938,  7196, -1411,
    4227,  7196, -1411,  4587,  4587,  4587,  4227, -1411,    44,  1941,
    1942,  1943,  1944,  1948,  4587,  4587,  4587,  4587,  4587, -1411,
   -1411,  1689,  5854, -1411,  1843,  1949, -1411, -1411,  1690,  1691,
   -1411, -1411, -1411, -1411,  1946, -1411,  1699,  6899,  1700,  5251,
    5274,  1701, -1411,  1706,  1705, -1411,  1707, -1411,   341, -1411,
   -1411, -1411, -1411, -1411, -1411,  5297,   345, -1411, -1411,  6926,
    1713,  1717,  5320,  5343, -1411, -1411, -1411,   599, -1411,   125,
   -1411,   125,  2953, -1411, -1411,  2011,  2206,  4587,  1709,  1714,
    1718,  1729,  1730, -1411, -1411, -1411,   359,  1759, -1411, -1411,
   -1411,   606,  5366,  5389,  5412,   608,  1765, -1411, -1411, -1411,
   -1411,  1968,  3426,  3500,  3676,  3693,  3738,  4587, -1411,  1975,
   -1411, -1411,  1055,  1773,  1974,  1984,  4587,  4587,  4587,  4587,
    2030,   112,  4587,  1781,  4587,   313,   112,  2040,   112,  2041,
    2043,  2044,  4587,  4587,  2046,   112,   628, -1411, -1411,  1977,
    2049,  2051,   114, -1411,  1798, -1411, -1411,  5435,   112,  4227,
    4227,  4227,  4227,   383,  2053,   112, -1411,  4587,  4587,  4587,
   -1411,  4587, -1411, -1411, -1411, -1411, -1411, -1411,  5881,  1796,
    1802,  1805, -1411, -1411, -1411,  6953,  6980,  7007,  5458, -1411,
    1806,  5481, -1411,  7034,  2058,  2063,  4587,   112,  2064,   114,
   -1411, -1411,  1813, -1411,   440, -1411, -1411, -1411,  7061,  7088,
   -1411,  1792,  2067,  4587,  2069,  2070,  2071,  2072, -1411,  4587,
    1804,   631,   638,   658,   661,  2073, -1411,  1819,  5504,  5527,
    5550,  7115, -1411,  2074,  2075,  2076,  3635,  2078,  2080,  2081,
    2953,  1825,  4587,  3697,  1829,  2084,  2085,  3761,  2096,  2101,
    2102,  2110,  2111,   112,  1854,  1859,  2114, -1411,  5908, -1411,
   -1411, -1411, -1411, -1411,  5935,  1860,  1863,  1865,  1867,  1868,
   -1411,   112,  4587,  4587,  4587,  2115, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411,  1862, -1411,  7142, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411,  1881, -1411, -1411, -1411,
    2136,  1884,  1880,  2953,  4227,  1883,  4227,  4227,  1888,  5962,
    5989,  6016, -1411,  2008,  4587,  3891,  1890,  3953,  2150,  4147,
    4209, -1411,  2151,  4587,  1892,   663,  4587,   667,   669, -1411,
   -1411, -1411, -1411,   481,  5573, -1411, -1411, -1411, -1411,  2153,
    2154, -1411,  6043,  2953,  1897,  6070,  1902,  1900,  2157,  1904,
    4587,  4403, -1411, -1411, -1411,  1903, -1411, -1411,  1906,  4227,
   -1411,  1937, -1411,  7169, -1411,  2953,  4587,   673,  2034, -1411,
    2170,  1939,  5596,  1940,  2199, -1411, -1411,  4587,  1945,  1904,
    6097,  4587,  2200, -1411,  5619,  1947,  4587, -1411,  5642,  4587,
    6124, -1411
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411,   221, -1411,  -773, -1411,  1293, -1411, -1411,  1294,
    -485, -1411,  -561, -1411,  -380,  -495,   183, -1411, -1411, -1411,
   -1411,   758, -1411,  -908, -1411,  -871, -1411,  -484, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411,  1537, -1411,  1175, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411,  1647, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,  1427,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411,  -948,  -637, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1410, -1411, -1411, -1411,  1047,   862, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411, -1411,   595, -1411, -1411,
   -1411, -1411, -1411, -1411, -1411, -1411,  1692, -1411, -1411, -1411,
    1392, -1411,   725,  1205, -1162, -1411,  -695,    15, -1411, -1411,
   -1411,   938,  -572,  -926,  -137,   -84, -1411,    -5,  -138,     4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -673
static const yytype_int16 yytable[] =
{
      35,   169,    39,   573,   743,   217,   218,   566,  1049,  1120,
     483,   682,    69,  1054,  1055,     6,   587,  1073,  1074,  1237,
      32,   422,    42,    83,   219,  1098,   597,  1571,   281,  1372,
     601,   220,   503,  1382,   605,    90,   280,  1132,   479,     6,
    1582,   517,  1013,   484,     6,     6,  1588,   484,   484,     6,
       6,   495,   484,    36,     6,  1597,   -60,   931,   422,   932,
     851,  1603,  1604,  1014,   733,     6,    36,   933,  1078,  1021,
    1081,     7,     8,     9,    10,    11,    12,     6,    13,   479,
       6,     6,  1027,  1028,  1029,  1030,   392,   214,   422,   170,
      18,   264,   407,   215,   384,    36,  1043,     6,   408,   682,
     682,   682,   682,   392,   222,   564,   409,   878,   504,   880,
       7,     8,     9,    10,    11,    12,    85,    13,  1042,   422,
       3,   852,  1322,   392,   385,    40,  1090,   346,   172,    18,
       6,    65,   351,   352,    66,    67,   503,   173,    69,    69,
     338,   228,    35,   322,   392,    35,   245,    35,    35,    35,
      35,   262,   323,   392,  1075,  1076,   781,    44,   782,   972,
     403,   227,   232,   223,   869,   240,   244,   249,   253,   257,
     261,   849,   503,   503,   404,   682,   870,  1097,   703,   704,
     705,   706,   625,   382,   392,  1227,   383,   753,   754,   755,
     756,    -3,  1323,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   326,
     873,   682,   504,    36,   874,   875,   325,     6,    65,  1511,
    1160,    66,    67,   482,   503,    44,   934,     6,  1268,  1091,
     220,    41,  1015,     7,     8,     9,    10,    11,    12,  1092,
      13,  1380,   233,   234,  1324,    52,   169,   735,   504,   504,
     398,   758,    18,   759,   399,   986,   988,    72,   505,   235,
     236,   987,   989,   881,   400,    69,    69,  1325,  1326,   970,
     461,   353,   354,    85,    43,   410,   423,   572,   393,    36,
     282,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   485,   732,   911,
     504,   485,   485,    36,    82,   486,   485,   503,   487,   486,
     537,   496,   487,   487,  1496,   393,    69,   487,   682,   433,
       7,     8,     9,    10,    11,    12,   707,    13,  1079,    73,
    1082,    35,  1844,   426,   170,    35,   393,  1128,  1273,    18,
    1134,  1072,    84,   405,  1276,   393,    74,   -60,  1365,    37,
     563,   420,  1397,   264,    38,   438,   434,    36,   356,    68,
     871,  1121,   505,   435,   427,   224,   473,   354,  1025,  1327,
      75,     6,   453,   354,   428,   354,   393,     7,     8,     9,
      10,    11,    12,   504,    13,  1122,  1426,  1427,   490,    76,
     429,   936,   760,   876,   430,   499,    18,   516,   505,   505,
    1845,   937,  1846,   938,   220,    77,  1058,   973,  1031,   512,
    1363,  1364,  1366,  1847,   -63,    78,  1479,  1480,  1481,  1373,
    1483,   220,  1886,   522,  1428,   990,  1848,  1497,   526,   624,
     220,   991,  1893,   401,   530,   412,   532,   533,  1429,    79,
     534,    80,   536,    69,  1849,  1060,    68,  1384,  1395,    81,
     505,    86,  1061,   413,  1385,  1647,  1648,  1402,   330,  1033,
     354,   626,   761,   414,   415,  1210,   915,    87,    92,    93,
     158,   331,   416,    88,   417,    89,   916,   917,   918,   682,
    1746,   572,   332,   634,   635,    36,     6,   490,   436,   682,
     160,   161,   162,   163,   636,   637,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,  1507,   677,  1512,  1965,  1608,    36,  1967,  1385,  1447,
    1385,  1628,  1609,   505,    91,    36,   144,  1969,  1970,  1123,
    1124,  1199,  1040,   431,   126,  1305,   127,     6,  1306,   143,
    1563,   394,  1564,     7,     8,     9,    10,    11,    12,  1624,
      13,  1307,  1308,  1309,   128,    35,  1625,  1222,   129,   445,
     939,   130,    18,  1430,  1238,  1498,  2001,  1229,   683,  1850,
      35,  1491,  1813,   131,    35,   632,    35,   691,   692,  1643,
    1644,   132,  1627,   133,    35,    35,  1640,  1652,    35,  1625,
     686,  1783,    35,  1385,   690,  1787,   695,   134,  1784,   480,
     481,    35,  1788,   446,   702,   709,   135,   493,   713,  1814,
     490,    45,   718,    46,    35,  1313,  1385,  1662,  1314,   959,
     136,   725,   418,   919,     6,  1019,    47,    48,    49,   960,
     137,  1315,  1316,  1875,   632,  1317,  1318,  1696,   547,  1698,
    1385,     6,   138,    50,  1231,   354,  1568,     7,     8,     9,
      10,    11,    12,   447,    13,   448,   683,   683,   683,   683,
    1310,   156,   763,    92,    93,     6,    18,   961,   962,   963,
     964,   965,   966,     6,  1393,  1394,  1407,  1408,   449,     7,
       8,     9,    10,    11,    12,   139,    13,  1409,   220,  1733,
    1902,    94,    95,    96,    97,    98,   140,  1903,    18,    35,
    1374,  1375,  1376,  1377,   119,  1411,   220,  1432,   220,   120,
    1434,   220,   121,  1622,  1623,   141,     6,   490,   157,  1378,
     142,   345,     7,     8,     9,    10,    11,    12,   450,    13,
    1642,   174,   683,  1673,  1674,  1675,  1676,  1677,  1678,   176,
    1319,    18,   776,   777,   778,   779,   175,   888,   780,   177,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,  1063,   921,   683,   922,
     923,   924,   925,   926,   927,   928,   178,  1804,  1804,  1565,
    1566,  1567,    35,   971,     6,  1633,   354,  1712,  1713,   179,
       7,     8,     9,    10,    11,    12,  1798,    13,   967,  1739,
     354,    51,   969,   209,   210,   211,   212,   213,  1545,    18,
     265,   214,  1740,   354,  1131,   180,  1133,   215,   181,   682,
    1390,  1656,  1657,     6,   182,  1018,  1018,   426,   183,     7,
       8,     9,    10,    11,    12,   276,    13,  1024,   490,   184,
     426,   426,   426,   426,  1741,   354,  1161,   241,    18,  1038,
     185,  1406,  1742,   354,   426,  1794,  1795,   169,   277,  1410,
     186,  1412,  1816,   354,  1820,   354,   200,   201,   202,   169,
     203,   204,   205,   206,   187,   683,   207,   208,   209,   210,
     211,   212,   213,   439,  1862,  1863,   214,  1916,   354,   279,
    1830,   188,   215,  1433,  1917,   354,   548,   189,  1435,   440,
     190,   229,   230,  1067,   211,   212,   213,  1552,   191,  1679,
     214,   192,   426,   426,  1918,   354,   215,  1919,   354,  1994,
     354,   441,  1085,  1996,   354,  1997,   354,   324,  1329,  2023,
     354,  1093,  1094,   237,   238,   426,   929,   347,   193,   194,
     195,   266,   267,   268,   269,  1127,  1130,    69,   348,    69,
    1136,  1137,   270,   271,  1933,  1138,   329,   321,   337,   388,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,   389,
     396,   122,   125,   455,   452,   442,   246,   247,   426,    69,
    1162,  1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,
    1172,  1173,  1174,  1175,   463,  1177,     6,   454,  1330,  1181,
     458,   459,     7,     8,     9,    10,    11,    12,   491,    13,
     472,   490,   492,   167,   171,   497,     6,  1974,   498,  1867,
     500,    18,     7,     8,     9,    10,    11,    12,   501,    13,
     502,   508,  1951,   509,   510,   511,   683,   513,   514,   515,
     518,    18,   519,  1331,   520,   242,   683,   196,   197,   198,
    1332,  1333,   443,   521,   523,   524,   525,  2005,   527,   529,
     531,     6,   535,   538,   540,   559,  1900,     7,     8,     9,
      10,    11,    12,  1334,    13,   543,  1335,  1336,   544,  2021,
     546,   556,   557,   250,   251,   263,    18,  1104,  1105,  1106,
    1107,  1108,  1109,  1110,   558,  1117,   426,   560,   567,   568,
     569,   571,   426,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   574,  1831,   576,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   774,   775,   776,   777,   778,   779,     6,
     578,   780,   579,   580,   581,     7,     8,     9,    10,    11,
      12,   584,    13,  1359,  1359,   586,   588,   592,   426,   426,
     426,   593,   595,  1756,    18,  1337,   596,   426,   598,   602,
     604,   606,   608,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   609,   610,   864,   612,   349,   350,   613,   614,
     865,   615,   617,   355,   621,   628,   426,   386,   633,   639,
     357,   640,   687,   866,   696,   426,     6,   697,   719,   699,
     710,  1503,     7,     8,     9,    10,    11,    12,   715,    13,
    1118,  1182,  1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,
     731,    18,   742,   744,   746,   747,   752,   748,   169,   169,
     169,   749,   169,   757,   387,   783,   254,   255,   167,   762,
     397,  -672,   203,   204,   205,   206,   594,   791,   207,   208,
     209,   210,   211,   212,   213,   840,   258,   259,   214,   793,
    1440,  1441,   460,     6,   215,  1445,   465,   426,   850,     7,
       8,     9,    10,    11,    12,   841,    13,   466,   794,   795,
     796,   842,   843,   854,   467,   468,   469,   470,    18,   471,
     677,   879,   475,   476,   477,   882,  1470,   883,   780,     6,
     884,   630,   631,   885,  1883,     7,     8,     9,    10,    11,
      12,   886,    13,   889,  1486,  1487,   907,  1489,  1490,   426,
     975,   913,   976,   698,    18,   977,    35,   984,  1022,   978,
     992,   979,   980,  1039,   981,  1632,   982,  1634,  1635,  1636,
     983,   985,  1639,   993,   994,   995,  1499,     6,   996,   997,
     998,  1649,  1001,     7,     8,     9,    10,    11,    12,   867,
      13,   999,  1000,  1002,   541,   542,   683,  1003,  1004,  1005,
     545,  1006,    18,  1007,  1044,  1010,  1008,  1046,  1559,  1026,
    1009,  1047,  1048,  1050,  1037,  1045,    92,    93,     6,   684,
     685,  1052,  1056,   561,   426,  1053,  1057,  1059,  1569,  1064,
    1570,   169,   169,   851,  1068,  1069,  1070,  1071,  1072,   169,
    1077,  1084,  1086,  1087,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,  1088,
    1089,  1096,  1126,  1139,  1176,  1178,  1720,  1721,  1142,  1194,
    1200,  1201,  1180,  1727,  1179,   620,   688,   689,  1192,   169,
    1202,   169,  1203,     6,  1205,  1221,  1207,  1208,   622,     7,
       8,     9,    10,    11,    12,    69,    13,  1228,   426,  1748,
    1749,  1209,  1211,  1212,    69,  1214,   638,  1215,    18,  1216,
    1219,  1220,  1224,  1751,     6,  1225,  1226,  1264,  1230,  1755,
       7,     8,     9,    10,    11,    12,  1232,    13,  1233,  1234,
    1235,   169,  1236,  1239,  1241,  1244,  1272,  1245,  1246,    18,
    1247,  1248,  1250,   693,   694,  1252,   726,   727,   974,   729,
    1253,  1254,  1255,  1256,  1257,  1258,    35,  1259,  1260,  1261,
    1262,  1265,  1266,  1701,  1267,  1703,  1269,    35,  1270,  1271,
    1275,  1278,  1274,    35,  1277,  1279,  1281,  1291,  1282,   700,
     701,  1796,    35,  1797,  1284,  1285,  1286,  1287,    35,    35,
    1289,  1290,  1292,  1294,  1293,  1295,  1584,  1296,  1297,    69,
      69,  1303,  1298,  1299,  1300,  1301,    69,  1032,  1034,  1035,
    1036,  1302,     6,  1339,  1041,  1340,  1341,  1342,     7,     8,
       9,    10,    11,    12,   790,    13,  1343,   711,   712,  1362,
    1344,  1345,    69,    69,  1346,  1347,  1348,    18,   169,  1349,
    1350,  1351,  1352,    92,    93,   641,  1353,  1354,  1355,  1367,
    1356,  1368,   119,   490,  1383,  1388,  1369,   120,   847,   848,
     121,  1389,  1871,  1872,  1873,  1874,  1370,  1371,  1660,  1392,
    1399,    94,    95,    96,    97,    98,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     220,   666,   667,  1391,  1400,  1403,  1404,  1405,  1413,  1416,
     908,  1415,  1417,  1418,    69,  1419,    69,  1420,  1422,  1492,
    1140,  1141,  1424,  1425,  1436,   764,   765,   766,   767,   768,
     769,   770,   771,  1152,  1437,   772,   773,   774,   775,   776,
     777,   778,   779,   716,   717,   780,   200,   201,   202,  1438,
     203,   204,   205,   206,  1448,  1450,   207,   208,   209,   210,
     211,   212,   213,   668,  1456,  1477,   214,  1484,  1485,  1493,
     669,  1465,   215,  1471,   630,   737,  1472,  1475,  1502,  1204,
    1504,  1206,  1500,  1505,  1508,  1506,  1509,   426,  1213,  1513,
    1585,  1510,  1514,  1542,  1554,  1555,   169,  1548,  1557,  1549,
    1551,   720,   721,   722,   723,  1558,  1629,  1975,  1560,  1977,
    1978,  1561,  1583,  1586,  1589,  1599,  1553,  1602,  1562,  1572,
    1242,  1630,  1579,  1646,  1637,   200,   201,   202,  1611,   203,
     204,   205,   206,  1641,   426,   207,   208,   209,   210,   211,
     212,   213,  1573,  1574,  1654,   214,  1612,  1659,  1578,  1580,
    1667,   215,  1610,  1684,  1613,  1615,  1619,  1616,  1617,   169,
    1620,  1590,  2017,  1687,  1621,  1631,  1645,  1663,  1664,  1665,
    1666,    35,  1668,  1669,  1670,  1671,  1095,  1672,    35,   167,
    1681,  1100,   670,  1101,  1102,  1103,  1686,  1683,   671,   672,
    1685,   167,  1690,  1691,   673,  1692,  1693,   674,  1695,   169,
     909,   910,   675,   676,  1702,   677,  1714,  1717,  1718,  1724,
    1725,  1726,  1728,  1729,  1153,  1730,  1155,  1734,  1157,  1737,
    1743,   169,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1744,
    1111,  1112,  1745,  1100,  1750,  1101,  1102,  1103,  1757,  1758,
    1759,  1760,  1381,  1761,  1767,  1769,  1770,  1771,  1772,  1774,
      35,  1198,    35,  1773,    35,    35,  1780,  1776,  1779,    92,
      93,   641,  1781,  1790,  1782,  1822,  1808,  1791,  1999,  1809,
    1829,  1833,  1864,  1810,  1104,  1105,  1106,  1107,  1108,  1109,
    1110,  1834,  1111,  1112,  1811,  1812,    35,    94,    95,    96,
      97,    98,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,  1815,   666,   667,   200,
     201,   202,  1821,   203,   204,   205,   206,  1839,  1832,   207,
     208,   209,   210,   211,   212,   213,  1842,  1853,  1855,   214,
    1856,  1857,  1439,  1860,  1865,   215,  1866,  1868,  1906,  1446,
    1876,   572,  1884,  1895,  1451,  1885,  1891,  1454,  1896,  1899,
    1915,  1983,  1457,  1901,  1907,  1113,  1909,  1910,  1911,  1912,
    1920,  1926,  1927,  1928,  1467,  1930,  1921,  1931,  1932,   668,
    1934,  1938,  1939,  1799,  1937,  1800,   669,  1476,  1801,  1478,
     200,   201,   202,  1941,   203,   204,   205,   206,  1942,  1943,
     207,   208,   209,   210,   211,   212,   213,  1944,  1945,  1947,
     214,  1949,  1962,  1501,  1948,  1953,   215,  1116,  1954,  1964,
    1591,  1955,  1956,  1957,  1104,  1105,  1106,  1107,  1108,  1109,
    1110,  1968,  1802,  1971,  1972,  1973,  1543,  1544,  1976,  1546,
      92,    93,   391,   159,  1979,  1986,    66,  1988,  1991,  1993,
    2002,  2003,  1398,  2006,  2010,  2009,  1556,  2024,  2008,  2011,
    2015,  2016,   160,   161,   162,   163,   164,  2025,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,  2019,  2029,  2026,  2028,  2035,   670,  1065,
    2031,  1066,  2032,  2037,   671,   672,   629,   392,   785,  1217,
     673,   956,  1495,   674,  1736,  1195,  1360,   611,   675,   676,
       0,   677,     0,  1020,  1638,  1442,  1443,  1444,     0,     0,
       0,     0,  1449,     0,     0,  1452,  1453,     0,     0,     0,
    1455,     0,     0,  1458,  1459,  1460,  1461,     0,     0,  1462,
    1463,  1464,     0,  1466,     0,     0,     0,  1468,  1469,     0,
       0,     0,  1473,  1474,    92,    93,   158,  1803,     0,     0,
     167,   167,   167,  1482,   167,     0,     0,     0,  1799,  1488,
    1800,     0,     0,  1801,     0,     0,   160,   161,   162,   163,
       0,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,     0,     0,  1104,
    1105,  1106,  1107,  1108,  1109,  1110,     0,  1802,     0,  1704,
       0,  1592,     0,     0,     0,  1706,     0,     0,     0,     0,
       0,     0,  1708,     0,     0,     0,     0,     0,     0,   200,
     201,   202,     0,   203,   204,   205,   206,     0,  1716,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
     165,     0,     0,     0,     0,   215,     0,     0,     0,  1738,
     379,    92,    93,   158,   159,     0,   119,    66,     0,     0,
       0,   120,     0,  1747,   121,     0,     0,     0,     0,   393,
       0,     0,   166,   160,   161,   162,   163,   164,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   167,     0,     0,     0,  1650,  1651,
       0,   167,  1653,     0,     0,     0,     0,     0,  1658,     0,
    1661,     0,  1806,     0,   942,     0,   943,   944,     0,   945,
       0,  1731,     0,     0,     0,  1732,     0,     0,  1682,   946,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,  1593,   214,     0,   947,   948,   949,     0,
     215,   167,  1697,   167,  1699,  1700,     0,     0,     0,     0,
     119,     0,     0,   950,     0,   120,     0,     0,   121,     0,
       0,  1595,     0,     0,     0,     0,   166,     0,     0,  1840,
       0,     0,     0,     0,  1852,     0,  1854,  1715,     0,     0,
       0,  1719,     0,  1861,  1722,  1723,     0,     0,     0,     0,
       0,     0,     0,   167,     0,     0,  1870,     0,     0,     0,
     200,   201,   202,  1877,   203,   204,   205,   206,     0,   951,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,  1752,  1753,  1754,     0,  1898,     0,     0,     0,     0,
       0,     0,  1762,  1763,  1764,  1765,  1766,     0,   200,   201,
     202,   165,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,   119,   214,     0,
     380,     0,   120,     0,   215,   121,     0,     0,     0,     0,
       0,   952,     0,   166,     0,     0,     0,     0,   953,     0,
       0,  1946,     0,     0,  1596,     0,     0,     0,     0,     0,
     167,     0,     0,     0,   798,  1807,     0,     0,     0,  1958,
       7,     8,     9,    10,    11,   799,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,  1828,     0,     0,     0,     0,
       0,     0,     0,     0,  1835,  1836,  1837,  1838,     0,     0,
    1841,     0,  1843,     0,     0,     0,     0,     0,     0,     0,
    1858,  1859,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,  1878,  1879,  1880,   215,  1881,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,  1897,   202,   215,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,  1908,     0,   214,     0,     0,     0,  1914,     0,   215,
       0,     0,   800,     0,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,     0,     0,   167,   813,
    1935,     0,   814,     0,     0,   815,     0,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,   833,
    1959,  1960,  1961,     0,   834,     0,     0,   835,     0,     0,
       0,   798,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,   799,     0,    13,     0,     0,     0,     0,     0,
       0,   167,     0,   200,   201,   202,    18,   203,   204,   205,
     206,     0,  1984,   207,   208,   209,   210,   211,   212,   213,
       0,  1992,     0,   214,  1995,  1598,   770,   771,     0,   215,
     772,   773,   774,   775,   776,   777,   778,   779,     0,     0,
     780,   167,  1600,     0,   798,   836,     0,     0,  2013,     0,
       7,     8,     9,    10,    11,   799,     0,    13,     0,     0,
       0,     0,     0,   167,  2022,     0,    92,    93,   158,    18,
       0,     0,     0,     0,     0,  2030,     0,     0,     0,  2034,
       0,     0,     0,     0,  2038,     0,     0,  2040,   160,   161,
     162,   163,     0,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   800,
       0,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   812,     0,     0,     0,   813,     0,     0,   814,
       0,     0,   815,     0,     0,   816,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,     0,     0,     0,   833,     0,     0,     0,
       0,   834,     0,     0,   835,     0,     0,     0,     0,     0,
       0,     0,   800,     0,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,     0,     0,     0,   813,
       0,     0,   814,     0,     0,   815,     0,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,   833,
       0,     0,     0,     0,   834,     0,     0,   835,   798,     0,
       0,     0,  1694,     0,     7,     8,     9,    10,    11,   799,
       0,    13,     0,     0,   200,   201,   202,     0,   203,   204,
     205,   206,     0,    18,   207,   208,   209,   210,   211,   212,
     213,   200,   201,   202,   214,   203,   204,   205,   206,     0,
     215,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,  1601,     0,     0,     0,   215,     0,     0,
     798,    92,    93,     6,     0,  1705,     7,     8,     9,    10,
      11,   799,   119,    13,     0,     0,     0,   120,     0,     0,
     121,     0,     0,     0,     0,    18,     0,     0,   166,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,  1605,   766,   767,   768,   769,   770,
     771,     0,     0,   772,   773,   774,   775,   776,   777,   778,
     779,  1606,     0,   780,     0,     0,   800,     0,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
       0,     0,     0,   813,     0,     0,   814,     0,     0,   815,
       0,     0,   816,     0,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,   833,     0,     0,     0,     0,   834,     0,
       0,   835,     0,     0,     0,     0,     0,     0,   800,     0,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,     0,     0,     0,   813,     0,     0,   814,     0,
       0,   815,     0,     0,   816,     0,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,   833,     0,     0,     0,     0,
     834,     0,     0,   835,   798,     0,     0,     0,     0,  1707,
       7,     8,     9,    10,    11,   799,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,  1823,     0,     0,     0,   119,   215,     0,
       0,     0,   120,     0,     0,   121,   798,     0,     0,     0,
     386,  1709,     7,     8,     9,    10,    11,   799,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
     200,   201,   202,   214,   203,   204,   205,   206,     0,   215,
     207,   208,   209,   210,   211,   212,   213,  1824,     0,     0,
     214,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,     0,   800,     0,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,     0,     0,     0,   813,
       0,     0,   814,     0,     0,   815,     0,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,   833,
       0,     0,     0,     0,   834,     0,     0,   835,     0,     0,
       0,     0,     0,     0,   800,     0,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,     0,     0,
       0,   813,     0,     0,   814,     0,     0,   815,     0,     0,
     816,     0,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,   833,     0,     0,     0,     0,   834,     0,     0,   835,
     798,     0,     0,     0,     0,  1710,     7,     8,     9,    10,
      11,   799,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,   200,   201,   202,    18,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,  1825,     0,     0,     0,     0,   215,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1826,     0,   798,     0,     0,     0,     0,  1711,     7,     8,
       9,    10,    11,   799,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   201,   202,     0,
     203,   204,   205,   206,     0,  1827,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
       0,     0,   215,     0,     0,     0,     0,     0,  1940,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   800,     0,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,     0,     0,     0,   813,     0,     0,   814,     0,
       0,   815,     0,     0,   816,     0,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,   833,     0,     0,     0,     0,
     834,     0,     0,   835,     0,     0,     0,     0,     0,     0,
     800,     0,   801,   802,   803,   804,   805,   806,   807,   808,
     809,   810,   811,   812,     0,     0,     0,   813,     0,     0,
     814,     0,     0,   815,     0,     0,   816,     0,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,   833,     0,     0,
       0,     0,   834,     0,     0,   835,   798,     0,     0,     0,
       0,  1929,     7,     8,     9,    10,    11,   799,     0,    13,
       0,     0,   200,   201,   202,     0,   203,   204,   205,   206,
       0,    18,   207,   208,   209,   210,   211,   212,   213,   200,
     201,   202,   214,   203,   204,   205,   206,     0,   215,   207,
     208,   209,   210,   211,   212,   213,   199,     0,     0,   214,
       0,     0,     0,     0,     0,   215,     0,     0,   798,     0,
       0,     0,     0,  1936,     7,     8,     9,    10,    11,   799,
       0,    13,     0,     0,   200,   201,   202,     0,   203,   204,
     205,   206,     0,    18,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,   200,   201,   202,
     215,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,   767,   768,
     769,   770,   771,   215,     0,   772,   773,   774,   775,   776,
     777,   778,   779,     0,   800,   780,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,     0,     0,
       0,   813,     0,     0,   814,     0,     0,   815,     0,     0,
     816,     0,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,   833,     0,     0,     0,     0,   834,     0,     0,   835,
       0,     0,     0,     0,     0,     0,   800,     0,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
       0,     0,     0,   813,     0,     0,   814,     0,     0,   815,
       0,     0,   816,     0,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,   833,     0,     0,     0,     0,   834,     0,
       0,   835,   798,     0,     0,     0,     0,  1985,     7,     8,
       9,    10,    11,   799,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,   200,   201,   202,    18,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,   200,   201,   202,   214,   203,   204,   205,   206,     0,
     215,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,   216,   798,     0,     0,   215,     0,  1987,
       7,     8,     9,    10,    11,   799,     0,    13,     0,     0,
      92,    93,   158,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,   161,   162,   163,     0,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     0,     0,     0,     0,     0,     0,     0,
     800,     0,   801,   802,   803,   804,   805,   806,   807,   808,
     809,   810,   811,   812,     0,     0,     0,   813,     0,     0,
     814,     0,     0,   815,     0,     0,   816,     0,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,   833,     0,     0,
       0,     0,   834,     0,     0,   835,     0,     0,     0,     0,
       0,     0,   800,     0,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,     0,     0,     0,   813,
       0,     0,   814,     0,     0,   815,     0,     0,   816,     0,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,   833,
       0,     0,     0,     0,   834,     0,     0,   835,   798,     0,
       0,     0,     0,  1989,     7,     8,     9,    10,    11,   799,
       0,    13,    92,    93,   158,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   161,   162,   163,     0,   275,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,  1990,   119,    92,    93,     6,
     474,   120,     0,     0,   121,     0,     0,     0,     0,  1062,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   358,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
       0,   381,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   800,     0,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
     462,     0,     0,   813,     0,     0,   814,     0,     0,   815,
       0,     0,   816,     0,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
      92,    93,     6,   833,     0,     0,     0,     0,   834,     0,
       0,   835,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     0,  1023,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   119,  2014,
       0,   215,     0,   120,     0,   278,   121,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,     0,     0,   215,   764,   765,   766,   767,   768,   769,
     770,   771,     0,     0,   772,   773,   774,   775,   776,   777,
     778,   779,     0,   119,   780,     0,     0,     0,   120,     0,
       0,   121,   200,   201,   202,  1051,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   215,     0,     0,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,    53,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,   120,     0,     0,   121,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,   200,   201,   202,    55,   203,   204,   205,   206,
       0,    56,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,    57,     0,    58,     0,   215,     0,
       0,     0,     0,     0,     0,  1515,     0,     0,    59,     0,
       6,     0,    60,     0,     0,     0,     7,     8,     9,    10,
      11,    12,     0,    13,    61,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,    18,   200,   201,   202,     0,
     203,   204,   205,   206,     0,    62,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
       0,     0,   215,     0,     0,     0,  1516,   369,    19,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,  1517,     0,
      63,    23,    64,     0,     0,    24,     0,     0,     0,   200,
     201,   202,     0,   203,   204,   205,   206,    25,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,  1518,   214,
       0,   304,     0,     0,     0,   215,     0,     0,    26,  1519,
    1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,
    1530,  1531,  1532,  1533,  1534,  1535,  1536,  1537,  1538,  1539,
    1540,  1541,     0,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
       0,     0,     0,    27,   376,    28,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,   200,
     201,   202,   215,   203,   204,   205,   206,   377,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
     378,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,   456,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,   457,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,   618,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,   200,   201,   202,   215,   203,   204,
     205,   206,   619,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,   200,   201,   202,
     215,   203,   204,   205,   206,  1304,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
     200,   201,   202,   215,   203,   204,   205,   206,  1312,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,   200,   201,   202,   215,   203,   204,   205,
     206,  1321,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,   200,   201,   202,   215,
     203,   204,   205,   206,  1550,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,   200,
     201,   202,   215,   203,   204,   205,   206,  1575,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
    1576,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,  1577,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,  1581,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,  1587,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,   200,   201,   202,   215,   203,   204,
     205,   206,  1594,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,   200,   201,   202,
     215,   203,   204,   205,   206,  1614,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
     200,   201,   202,   215,   203,   204,   205,   206,  1777,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,   200,   201,   202,   215,   203,   204,   205,
     206,  1778,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,   200,   201,   202,   215,
     203,   204,   205,   206,  1786,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,   200,
     201,   202,   215,   203,   204,   205,   206,  1792,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
    1793,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,  1817,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,  1818,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,  1819,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,   200,   201,   202,   215,   203,   204,
     205,   206,  1869,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,   200,   201,   202,
     215,   203,   204,   205,   206,  1890,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
     200,   201,   202,   215,   203,   204,   205,   206,  1892,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,   200,   201,   202,   215,   203,   204,   205,
     206,  1922,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,   200,   201,   202,   215,
     203,   204,   205,   206,  1923,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,   200,
     201,   202,   215,   203,   204,   205,   206,  1924,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
    2000,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,  2027,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,  2036,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,  2039,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,     0,     0,   215,   200,   201,
     202,   344,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,   200,   201,   202,   478,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,   200,   201,   202,   554,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,   200,
     201,   202,   555,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   215,   200,   201,   202,   728,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
       0,     0,   215,   200,   201,   202,   846,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     200,   201,   202,   941,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,   200,   201,   202,
    1768,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,     0,     0,   215,   200,   201,   202,  1882,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,     0,     0,
     215,   200,   201,   202,  1950,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,     0,     0,   215,   200,   201,
     202,  1952,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,   200,   201,   202,  1980,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,   200,   201,   202,  1981,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,   200,
     201,   202,  1982,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   215,   200,   201,   202,  2004,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
       0,     0,   215,   200,   201,   202,  2007,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     200,   201,   202,  2033,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,   200,   201,   202,
    2041,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,   359,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,   360,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,   361,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,   362,     0,   215,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,   363,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,   364,     0,   215,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,   365,     0,   215,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
     366,     0,   215,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,   367,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,   368,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,   370,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,   371,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,   372,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,   373,     0,   215,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,   374,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,   375,     0,   215,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,   464,     0,   215,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
     494,     0,   215,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,   549,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,   550,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,   551,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,   552,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,   553,   200,   201,   202,   215,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,   623,   200,   201,   202,
     215,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,   741,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,   844,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,   845,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,  1618,     0,   215,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,  1775,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,  1789,     0,   215,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,  1887,     0,   215,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
    1888,     0,   215,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,  1889,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,  1894,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,  1904,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,  1905,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,  1925,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,  1966,     0,   215,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,  2020,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,   764,
     765,   766,   767,   768,   769,   770,   771,     0,     0,   772,
     773,   774,   775,   776,   777,   778,   779,     0,     0,   780,
       0,     0,     0,  1396,   764,   765,   766,   767,   768,   769,
     770,   771,     0,     0,   772,   773,   774,   775,   776,   777,
     778,   779,     0,     0,   780,     0,   887,   764,   765,   766,
     767,   768,   769,   770,   771,     0,     0,   772,   773,   774,
     775,   776,   777,   778,   779,     0,     0,   780
};

static const yytype_int16 yycheck[] =
{
       5,    85,     7,   498,   641,   143,   144,   492,   879,   957,
     390,   583,    17,   884,   885,     5,   511,   925,   926,     7,
       5,     5,     5,    28,   260,   951,   521,  1437,     7,  1191,
     525,   267,    24,  1195,   529,    40,   173,   963,     5,     5,
    1450,   421,    76,     3,     5,     5,  1456,     3,     3,     5,
       5,     5,     3,   269,     5,  1465,   259,    97,     5,    99,
       5,  1471,  1472,    97,   625,     5,   269,   107,     5,   842,
       5,    11,    12,    13,    14,    15,    16,     5,    18,     5,
       5,     5,   855,   856,   857,   858,    70,   256,     5,    85,
      30,   265,    83,   262,   235,   269,   869,     5,    89,   671,
     672,   673,   674,    70,     5,    65,    97,   744,   100,   746,
      11,    12,    13,    14,    15,    16,   235,    18,    65,     5,
       0,    66,    19,    70,   265,   257,     5,   264,   258,    30,
       5,     6,   270,   271,     9,    10,    24,   267,   143,   144,
     259,   146,   147,   258,    70,   150,   151,   152,   153,   154,
     155,   156,   267,    70,   927,   928,   262,   257,   264,   259,
      83,   146,   147,    64,    70,   150,   151,   152,   153,   154,
     155,   732,    24,    24,    97,   747,    82,   950,   118,   119,
     120,   121,   562,   321,    70,  1056,   323,   671,   672,   673,
     674,     0,    89,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   265,
      83,   783,   100,   269,    87,    88,   221,     5,     6,  1381,
     993,     9,    10,   260,    24,   257,   266,     5,  1099,   108,
     267,     7,   266,    11,    12,    13,    14,    15,    16,   118,
      18,   233,   265,   266,   141,     7,   330,   627,   100,   100,
      83,     3,    30,     5,    87,   259,   259,   259,   250,   265,
     266,   265,   265,   747,    97,   270,   271,   164,   165,   259,
     354,   266,   267,   235,   257,   266,   260,   265,   262,   269,
     259,   765,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   257,   249,   783,
     100,   257,   257,   269,   265,   265,   257,    24,   268,   265,
     448,   265,   268,   268,     5,   262,   321,   268,   890,    97,
      11,    12,    13,    14,    15,    16,   266,    18,   265,   265,
     265,   336,    19,   338,   330,   340,   262,   265,  1111,    30,
     265,   265,   269,   266,  1117,   262,   265,   259,   265,   257,
     487,   336,  1223,   265,   262,   340,   134,   269,   258,   234,
     266,    87,   250,   141,    87,   266,   258,   267,   853,   266,
     265,     5,   266,   267,    97,   267,   262,    11,    12,    13,
      14,    15,    16,   100,    18,   111,    79,    80,   393,   265,
     113,    87,   144,   266,   117,   400,    30,   260,   250,   250,
      87,    97,    89,    99,   267,   265,   890,   259,   259,   414,
    1183,  1184,  1185,   100,   260,   265,  1342,  1343,  1344,  1192,
    1346,   267,  1832,   428,   117,   259,   113,   118,   433,   266,
     267,   265,  1842,   266,   439,    69,   441,   442,   131,   265,
     445,   265,   447,   448,   131,   260,   234,   260,  1221,   265,
     250,   265,   267,    87,   267,   243,   244,  1230,   235,   259,
     267,   268,   214,    97,    98,  1037,    99,     6,     3,     4,
       5,   248,   106,     7,   108,     7,   109,   110,   111,  1051,
    1642,   265,   259,   265,   266,   269,     5,   492,   266,  1061,
      25,    26,    27,    28,   265,   266,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   260,   265,   260,  1934,   260,   269,  1937,   267,  1302,
     267,   265,   267,   250,   131,   269,   257,  1947,  1948,   265,
     266,  1026,   259,   266,     7,   141,     7,     5,   144,   259,
    1421,   330,  1423,    11,    12,    13,    14,    15,    16,   260,
      18,   157,   158,   159,     7,   570,   267,  1051,     7,    97,
     266,     7,    30,   266,  1069,   266,  1986,  1061,   583,   266,
     585,  1354,  1744,     7,   589,   570,   591,   265,   266,  1515,
    1516,     7,   260,     7,   599,   600,   260,  1523,   603,   267,
     585,   260,   607,   267,   589,   260,   591,     7,   267,   388,
     389,   616,   267,   141,   599,   600,     7,   396,   603,   260,
     625,     5,   607,     7,   629,   141,   267,  1535,   144,    87,
       7,   616,   266,   266,     5,     6,    20,    21,    22,    97,
       7,   157,   158,   260,   629,   161,   162,  1573,     8,  1575,
     267,     5,     7,    37,   266,   267,  1429,    11,    12,    13,
      14,    15,    16,   191,    18,   193,   671,   672,   673,   674,
     266,   192,   677,     3,     4,     5,    30,   135,   136,   137,
     138,   139,   140,     5,   265,   266,   266,   267,   216,    11,
      12,    13,    14,    15,    16,     7,    18,   266,   267,  1625,
     260,    31,    32,    33,    34,    35,     7,   267,    30,   714,
     248,   249,   250,   251,   249,   266,   267,   266,   267,   254,
     266,   267,   257,   266,   267,     7,     5,   732,   265,   267,
       7,   266,    11,    12,    13,    14,    15,    16,   266,    18,
    1513,   258,   747,    90,    91,    92,    93,    94,    95,   259,
     266,    30,   250,   251,   252,   253,   265,   762,   256,   259,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   913,    97,   783,    99,
     100,   101,   102,   103,   104,   105,   259,  1735,  1736,  1426,
    1427,  1428,   797,   798,     5,   266,   267,   265,   266,   259,
      11,    12,    13,    14,    15,    16,  1732,    18,   266,   266,
     267,   195,   797,   248,   249,   250,   251,   252,  1390,    30,
       7,   256,   266,   267,   962,   259,   964,   262,   259,  1401,
    1210,  1526,  1527,     5,   259,   840,   841,   842,   259,    11,
      12,    13,    14,    15,    16,     7,    18,   852,   853,   259,
     855,   856,   857,   858,   266,   267,   994,    68,    30,   864,
     259,  1241,   266,   267,   869,   266,   267,   951,     7,  1249,
     259,  1251,   266,   267,   266,   267,   236,   237,   238,   963,
     240,   241,   242,   243,   259,   890,   246,   247,   248,   249,
     250,   251,   252,    97,   266,   267,   256,   266,   267,     7,
    1771,   259,   262,  1283,   266,   267,   266,   259,  1288,   113,
     259,   265,   266,   918,   250,   251,   252,  1401,   259,   266,
     256,   259,   927,   928,   266,   267,   262,   266,   267,   266,
     267,   135,   937,   266,   267,   266,   267,     7,    19,   266,
     267,   946,   947,   265,   266,   950,   266,     5,   259,   259,
     259,   259,   259,   259,   259,   960,   961,   962,     5,   964,
     965,   966,   259,   259,  1890,   970,   259,   267,   259,   235,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   235,
     235,    43,    44,   267,   265,   189,   265,   266,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,     7,  1010,     5,   260,    89,  1014,
     260,   260,    11,    12,    13,    14,    15,    16,     7,    18,
     260,  1026,   259,    85,    86,     5,     5,  1953,     5,  1802,
     265,    30,    11,    12,    13,    14,    15,    16,     5,    18,
     265,     5,  1913,   265,     5,     5,  1051,   265,   265,   265,
     235,    30,   260,   134,     5,   266,  1061,   119,   120,   121,
     141,   142,   266,     5,   265,   265,     5,  1993,   265,     5,
     265,     5,   265,     5,     5,     5,  1849,    11,    12,    13,
      14,    15,    16,   164,    18,     7,   167,   168,     7,  2015,
       7,     7,     7,   265,   266,   157,    30,   123,   124,   125,
     126,   127,   128,   129,     7,   131,  1111,     8,     7,   235,
     265,     7,  1117,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     7,  1772,     7,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   248,   249,   250,   251,   252,   253,     5,
     259,   256,   259,   250,     7,    11,    12,    13,    14,    15,
      16,     7,    18,  1178,  1179,     7,     7,     7,  1183,  1184,
    1185,     5,   235,  1668,    30,   266,     7,  1192,     7,     7,
     265,     7,     7,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     7,     7,    81,     7,   268,   269,     7,     7,
      87,   266,   260,   275,   265,    67,  1221,   262,     7,     5,
     282,   250,     7,   100,   265,  1230,     5,     7,   266,     7,
       7,  1368,    11,    12,    13,    14,    15,    16,     7,    18,
     266,   200,   201,   202,   203,   204,   205,   206,   207,   208,
       8,    30,   260,   259,   259,   259,     5,   259,  1342,  1343,
    1344,   259,  1346,     3,   326,   259,   265,   266,   330,     5,
     332,   259,   240,   241,   242,   243,   518,     7,   246,   247,
     248,   249,   250,   251,   252,   259,   265,   266,   256,   265,
    1295,  1296,   354,     5,   262,  1300,   358,  1302,   260,    11,
      12,    13,    14,    15,    16,   259,    18,   369,   265,   265,
     265,   259,   259,   259,   376,   377,   378,   379,    30,   381,
     265,   259,   384,   385,   386,     5,  1331,     5,   256,     5,
     259,   265,   266,   259,  1829,    11,    12,    13,    14,    15,
      16,   243,    18,   266,  1349,  1350,     3,  1352,  1353,  1354,
     259,   265,   259,   595,    30,   259,  1361,     7,     6,   259,
     265,   259,   259,     5,   259,  1502,   259,  1504,  1505,  1506,
     259,   259,  1510,   259,   259,   259,  1361,     5,   259,   259,
     259,  1519,   265,    11,    12,    13,    14,    15,    16,   266,
      18,   259,   259,   265,   456,   457,  1401,   259,   259,   259,
     462,   259,    30,   259,     5,   259,   265,     5,  1413,   262,
     265,     5,   260,   260,   265,   265,     3,     4,     5,   265,
     266,   259,   259,   485,  1429,   260,   266,   260,  1433,     5,
    1435,  1515,  1516,     5,     5,     5,     5,   265,   265,  1523,
       5,     5,     5,     5,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     5,
       5,     3,     5,     7,     5,   259,  1614,  1615,     7,   267,
       7,     7,   265,  1621,   259,   547,   265,   266,   259,  1573,
       7,  1575,     7,     5,     7,   267,     7,     7,   560,    11,
      12,    13,    14,    15,    16,  1510,    18,     8,  1513,  1647,
    1648,     7,     7,     7,  1519,     7,   578,     7,    30,     7,
       7,     7,   265,  1660,     5,   260,   267,     7,   259,  1666,
      11,    12,    13,    14,    15,    16,     7,    18,     7,     7,
       7,  1625,     7,   265,     5,     7,   259,     7,     7,    30,
       7,     7,     7,   265,   266,     7,   618,   619,   800,   621,
       7,     7,     7,     7,     7,     7,  1571,     7,     7,     7,
       7,     7,     7,  1578,     7,  1580,     5,  1582,     5,     5,
     259,     5,     7,  1588,   259,     5,     7,   260,     7,   265,
     266,  1729,  1597,  1731,     7,     7,     7,     7,  1603,  1604,
       7,     7,   260,   267,   260,   267,     7,   267,   267,  1614,
    1615,   260,   267,   267,   267,   267,  1621,   859,   860,   861,
     862,   267,     5,   267,   866,   260,   267,   267,    11,    12,
      13,    14,    15,    16,   696,    18,   267,   265,   266,     7,
     267,   267,  1647,  1648,   267,   266,   266,    30,  1732,   267,
     267,   267,   267,     3,     4,     5,   267,   267,   267,   265,
     260,   265,   249,  1668,   267,   267,   265,   254,   730,   731,
     257,   267,  1809,  1810,  1811,  1812,   265,   265,   265,     7,
       3,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     267,    61,    62,   267,   260,     7,   113,     7,   259,     7,
     782,   260,     7,     7,  1729,     3,  1731,     7,     7,     5,
     972,   973,     7,     7,     7,   236,   237,   238,   239,   240,
     241,   242,   243,   985,   265,   246,   247,   248,   249,   250,
     251,   252,   253,   265,   266,   256,   236,   237,   238,     7,
     240,   241,   242,   243,     7,   265,   246,   247,   248,   249,
     250,   251,   252,   123,   265,     7,   256,     7,     7,     7,
     130,   265,   262,   265,   265,   266,   265,   265,   265,  1031,
     265,  1033,   209,   265,   260,   265,     5,  1802,  1040,   131,
       7,   259,     7,   267,     5,     5,  1890,   260,     5,   260,
     260,   194,   195,   196,   197,     5,   265,  1954,     7,  1956,
    1957,     7,     7,     7,     7,     7,   260,     7,   260,   260,
    1072,     5,   260,     5,     7,   236,   237,   238,   260,   240,
     241,   242,   243,     7,  1849,   246,   247,   248,   249,   250,
     251,   252,   267,   267,     5,   256,   260,     5,   267,   267,
       3,   262,   267,     7,   267,   267,   260,   267,   267,  1953,
     260,     7,  2009,     7,   267,   267,   265,   265,   265,   265,
     265,  1886,   262,   260,   260,   266,   948,   260,  1893,   951,
     260,    82,   242,    84,    85,    86,   260,   266,   248,   249,
     266,   963,     7,     7,   254,     7,     7,   257,     7,  1993,
     260,   261,   262,   263,     7,   265,     7,     7,     7,     7,
       7,     7,     7,   136,   986,     7,   988,     7,   990,   265,
     267,  2015,   123,   124,   125,   126,   127,   128,   129,   260,
     131,   132,     7,    82,     6,    84,    85,    86,     7,     7,
       7,     7,  1194,     5,   265,   112,     7,   267,   267,   260,
    1965,  1023,  1967,    17,  1969,  1970,   260,   267,   267,     3,
       4,     5,   267,   260,   267,     7,   267,   260,  1983,   265,
       5,     7,     5,   265,   123,   124,   125,   126,   127,   128,
     129,     7,   131,   132,   265,   265,  2001,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,   267,    61,    62,   236,
     237,   238,   267,   240,   241,   242,   243,     7,   265,   246,
     247,   248,   249,   250,   251,   252,   265,     7,     7,   256,
       7,     7,  1294,     7,     5,   262,     5,   259,   266,  1301,
       7,   265,   260,     5,  1306,   260,   260,  1309,     5,     5,
     266,    63,  1314,   260,     7,   266,     7,     7,     7,     7,
       7,     7,     7,     7,  1326,     7,   267,     7,     7,   123,
     265,     7,     7,    82,   265,    84,   130,  1339,    87,  1341,
     236,   237,   238,     7,   240,   241,   242,   243,     7,     7,
     246,   247,   248,   249,   250,   251,   252,     7,     7,   265,
     256,     7,     7,  1365,   265,   265,   262,   266,   265,   267,
       7,   266,   265,   265,   123,   124,   125,   126,   127,   128,
     129,   260,   131,     7,   260,   265,  1388,  1389,   265,  1391,
       3,     4,     5,     6,   266,   265,     9,     7,     7,   267,
       7,     7,  1224,   266,     7,   265,  1408,   133,   266,   265,
     267,   265,    25,    26,    27,    28,    29,     7,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   266,     5,   266,   266,     7,   242,   916,
     265,   917,  2029,   266,   248,   249,   569,    70,   681,  1044,
     254,   794,  1360,   257,  1629,  1020,  1179,   535,   262,   263,
      -1,   265,    -1,   841,  1509,  1297,  1298,  1299,    -1,    -1,
      -1,    -1,  1304,    -1,    -1,  1307,  1308,    -1,    -1,    -1,
    1312,    -1,    -1,  1315,  1316,  1317,  1318,    -1,    -1,  1321,
    1322,  1323,    -1,  1325,    -1,    -1,    -1,  1329,  1330,    -1,
      -1,    -1,  1334,  1335,     3,     4,     5,   266,    -1,    -1,
    1342,  1343,  1344,  1345,  1346,    -1,    -1,    -1,    82,  1351,
      84,    -1,    -1,    87,    -1,    -1,    25,    26,    27,    28,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,    -1,  1581,
      -1,     7,    -1,    -1,    -1,  1587,    -1,    -1,    -1,    -1,
      -1,    -1,  1594,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,  1610,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
     233,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,  1631,
       8,     3,     4,     5,     6,    -1,   249,     9,    -1,    -1,
      -1,   254,    -1,  1645,   257,    -1,    -1,    -1,    -1,   262,
      -1,    -1,   265,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1515,  1516,    -1,    -1,    -1,  1520,  1521,
      -1,  1523,  1524,    -1,    -1,    -1,    -1,    -1,  1530,    -1,
    1532,    -1,   266,    -1,    82,    -1,    84,    85,    -1,    87,
      -1,   210,    -1,    -1,    -1,   214,    -1,    -1,  1550,    97,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,     7,   256,    -1,   114,   115,   116,    -1,
     262,  1573,  1574,  1575,  1576,  1577,    -1,    -1,    -1,    -1,
     249,    -1,    -1,   131,    -1,   254,    -1,    -1,   257,    -1,
      -1,     7,    -1,    -1,    -1,    -1,   265,    -1,    -1,  1781,
      -1,    -1,    -1,    -1,  1786,    -1,  1788,  1609,    -1,    -1,
      -1,  1613,    -1,  1795,  1616,  1617,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1625,    -1,    -1,  1808,    -1,    -1,    -1,
     236,   237,   238,  1815,   240,   241,   242,   243,    -1,   187,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,  1663,  1664,  1665,    -1,  1847,    -1,    -1,    -1,    -1,
      -1,    -1,  1674,  1675,  1676,  1677,  1678,    -1,   236,   237,
     238,   233,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,   249,   256,    -1,
     258,    -1,   254,    -1,   262,   257,    -1,    -1,    -1,    -1,
      -1,   259,    -1,   265,    -1,    -1,    -1,    -1,   266,    -1,
      -1,  1903,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
    1732,    -1,    -1,    -1,     5,  1737,    -1,    -1,    -1,  1921,
      11,    12,    13,    14,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,  1767,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1776,  1777,  1778,  1779,    -1,    -1,
    1782,    -1,  1784,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1792,  1793,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,  1817,  1818,  1819,   262,  1821,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,  1846,   238,   262,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,  1863,    -1,   256,    -1,    -1,    -1,  1869,    -1,   262,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,  1890,   160,
    1892,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,    -1,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
    1922,  1923,  1924,    -1,   195,    -1,    -1,   198,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,  1953,    -1,   236,   237,   238,    30,   240,   241,   242,
     243,    -1,  1964,   246,   247,   248,   249,   250,   251,   252,
      -1,  1973,    -1,   256,  1976,     7,   242,   243,    -1,   262,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
     256,  1993,     7,    -1,     5,   266,    -1,    -1,  2000,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,  2015,  2016,    -1,     3,     4,     5,    30,
      -1,    -1,    -1,    -1,    -1,  2027,    -1,    -1,    -1,  2031,
      -1,    -1,    -1,    -1,  2036,    -1,    -1,  2039,    25,    26,
      27,    28,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,    -1,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
      -1,    -1,    -1,    -1,   195,    -1,    -1,   198,     5,    -1,
      -1,    -1,   266,    -1,    11,    12,    13,    14,    15,    16,
      -1,    18,    -1,    -1,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    30,   246,   247,   248,   249,   250,   251,
     252,   236,   237,   238,   256,   240,   241,   242,   243,    -1,
     262,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,     7,    -1,    -1,    -1,   262,    -1,    -1,
       5,     3,     4,     5,    -1,   266,    11,    12,    13,    14,
      15,    16,   249,    18,    -1,    -1,    -1,   254,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    30,    -1,    -1,   265,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     7,   238,   239,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
     253,     7,    -1,   256,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
      -1,    -1,   169,    -1,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,   195,    -1,
      -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,
     195,    -1,    -1,   198,     5,    -1,    -1,    -1,    -1,   266,
      11,    12,    13,    14,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,     7,    -1,    -1,    -1,   249,   262,    -1,
      -1,    -1,   254,    -1,    -1,   257,     5,    -1,    -1,    -1,
     262,   266,    11,    12,    13,    14,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,   236,   237,   238,    -1,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
     236,   237,   238,   256,   240,   241,   242,   243,    -1,   262,
     246,   247,   248,   249,   250,   251,   252,     7,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,    -1,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
      -1,    -1,    -1,    -1,   195,    -1,    -1,   198,    -1,    -1,
      -1,    -1,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,
     169,    -1,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    -1,   195,    -1,    -1,   198,
       5,    -1,    -1,    -1,    -1,   266,    11,    12,    13,    14,
      15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,   237,   238,    30,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,     7,    -1,    -1,    -1,    -1,   262,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,     5,    -1,    -1,    -1,    -1,   266,    11,    12,
      13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,     7,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,
     195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,
     163,    -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,
      -1,    -1,   195,    -1,    -1,   198,     5,    -1,    -1,    -1,
      -1,   266,    11,    12,    13,    14,    15,    16,    -1,    18,
      -1,    -1,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    30,   246,   247,   248,   249,   250,   251,   252,   236,
     237,   238,   256,   240,   241,   242,   243,    -1,   262,   246,
     247,   248,   249,   250,   251,   252,     8,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,     5,    -1,
      -1,    -1,    -1,   266,    11,    12,    13,    14,    15,    16,
      -1,    18,    -1,    -1,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    30,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,   238,
     262,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,   239,   240,
     241,   242,   243,   262,    -1,   246,   247,   248,   249,   250,
     251,   252,   253,    -1,   143,   256,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,
     169,    -1,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    -1,   195,    -1,    -1,   198,
      -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
      -1,    -1,   169,    -1,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,   195,    -1,
      -1,   198,     5,    -1,    -1,    -1,    -1,   266,    11,    12,
      13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   237,   238,    30,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,   236,   237,   238,   256,   240,   241,   242,   243,    -1,
     262,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,   258,     5,    -1,    -1,   262,    -1,   266,
      11,    12,    13,    14,    15,    16,    -1,    18,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,
     163,    -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,
      -1,    -1,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,    -1,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
      -1,    -1,    -1,    -1,   195,    -1,    -1,   198,     5,    -1,
      -1,    -1,    -1,   266,    11,    12,    13,    14,    15,    16,
      -1,    18,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,     8,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   266,   249,     3,     4,     5,
       6,   254,    -1,    -1,   257,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       8,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
      -1,    -1,   169,    -1,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
       3,     4,     5,   190,    -1,    -1,    -1,    -1,   195,    -1,
      -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,     8,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   249,   266,
      -1,   262,    -1,   254,    -1,   266,   257,   236,   237,   238,
      -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,   262,   236,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   249,   256,    -1,    -1,    -1,   254,    -1,
      -1,   257,   236,   237,   238,   267,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,   262,     3,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
      -1,   254,    -1,    -1,   257,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   262,   236,   237,   238,    63,   240,   241,   242,   243,
      -1,    69,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    82,    -1,    84,    -1,   262,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    96,    -1,
       5,    -1,   100,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,   112,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,   133,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,    -1,   137,   267,    63,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,
     188,    96,   190,    -1,    -1,   100,    -1,    -1,    -1,   236,
     237,   238,    -1,   240,   241,   242,   243,   112,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,   199,   256,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,   133,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,   236,   237,   238,    -1,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   188,   267,   190,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,
     237,   238,   262,   240,   241,   242,   243,   267,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,   236,   237,   238,   262,   240,   241,   242,   243,
     267,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,   236,   237,   238,   262,   240,
     241,   242,   243,   267,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,
     238,   262,   240,   241,   242,   243,   267,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,   236,   237,   238,   262,   240,   241,   242,   243,   267,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,   236,   237,   238,   262,   240,   241,
     242,   243,   267,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,   238,
     262,   240,   241,   242,   243,   267,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
     236,   237,   238,   262,   240,   241,   242,   243,   267,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,   236,   237,   238,   262,   240,   241,   242,
     243,   267,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,   236,   237,   238,   262,
     240,   241,   242,   243,   267,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,
     237,   238,   262,   240,   241,   242,   243,   267,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,   236,   237,   238,   262,   240,   241,   242,   243,
     267,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,   236,   237,   238,   262,   240,
     241,   242,   243,   267,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,
     238,   262,   240,   241,   242,   243,   267,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,   236,   237,   238,   262,   240,   241,   242,   243,   267,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,   236,   237,   238,   262,   240,   241,
     242,   243,   267,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,   238,
     262,   240,   241,   242,   243,   267,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
     236,   237,   238,   262,   240,   241,   242,   243,   267,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,   236,   237,   238,   262,   240,   241,   242,
     243,   267,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,   236,   237,   238,   262,
     240,   241,   242,   243,   267,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,
     237,   238,   262,   240,   241,   242,   243,   267,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,   236,   237,   238,   262,   240,   241,   242,   243,
     267,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,   236,   237,   238,   262,   240,
     241,   242,   243,   267,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,
     238,   262,   240,   241,   242,   243,   267,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,   236,   237,   238,   262,   240,   241,   242,   243,   267,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,   236,   237,   238,   262,   240,   241,
     242,   243,   267,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,   238,
     262,   240,   241,   242,   243,   267,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
     236,   237,   238,   262,   240,   241,   242,   243,   267,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,   236,   237,   238,   262,   240,   241,   242,
     243,   267,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,   236,   237,   238,   262,
     240,   241,   242,   243,   267,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,
     237,   238,   262,   240,   241,   242,   243,   267,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,   236,   237,   238,   262,   240,   241,   242,   243,
     267,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,   236,   237,   238,   262,   240,
     241,   242,   243,   267,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   236,   237,
     238,   262,   240,   241,   242,   243,   267,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,   236,   237,   238,   262,   240,   241,   242,   243,   267,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,   262,   236,   237,
     238,   266,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,   262,   236,   237,   238,   266,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   262,   236,   237,   238,   266,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,   236,
     237,   238,   266,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,   262,   236,   237,   238,   266,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,   262,   236,   237,   238,   266,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,
     236,   237,   238,   266,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,   262,   236,   237,   238,
     266,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,   262,   236,   237,   238,   266,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
     262,   236,   237,   238,   266,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,   262,   236,   237,
     238,   266,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,   262,   236,   237,   238,   266,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   262,   236,   237,   238,   266,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,   236,
     237,   238,   266,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,   262,   236,   237,   238,   266,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,   262,   236,   237,   238,   266,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,
     236,   237,   238,   266,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,   262,   236,   237,   238,
     266,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,   262,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
     262,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,   262,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,   262,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,   262,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,
     260,    -1,   262,   236,   237,   238,    -1,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,   262,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,   238,
      -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,   262,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
     262,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,   262,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,   262,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,   262,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,
     260,    -1,   262,   236,   237,   238,    -1,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,   262,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,   238,
      -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,   262,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
     262,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,   258,   236,   237,   238,   262,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,   258,   236,   237,   238,
     262,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,   262,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
     262,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,   262,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,   262,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,   262,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,
     260,    -1,   262,   236,   237,   238,    -1,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,   262,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,   238,
      -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,   262,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
     262,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,   262,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,   262,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,   236,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,   236,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,    -1,   256,    -1,   258,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,   256
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   271,   272,     0,   273,   274,     5,    11,    12,    13,
      14,    15,    16,    18,    20,    21,    22,    23,    30,    63,
      69,    82,    84,    96,   100,   112,   133,   188,   190,   275,
     276,   434,   447,   448,   456,   457,   269,   257,   262,   457,
     257,     7,     5,   257,   257,     5,     7,    20,    21,    22,
      37,   195,     7,     3,     7,    63,    69,    82,    84,    96,
     100,   112,   133,   188,   190,     6,     9,    10,   234,   457,
     458,   459,   259,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   457,   269,   235,   265,     6,     7,     7,
     457,   131,     3,     4,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   249,
     254,   257,   451,   452,   457,   451,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   259,   257,   449,   277,   333,   318,   324,
     340,   298,   363,   389,   419,   430,   192,   265,     5,     6,
      25,    26,    27,    28,    29,   233,   265,   451,   453,   455,
     459,   451,   258,   267,   258,   265,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   451,   451,   451,     8,
     236,   237,   238,   240,   241,   242,   243,   246,   247,   248,
     249,   250,   251,   252,   256,   262,   258,   458,   458,   260,
     267,   294,     5,    64,   266,   278,   279,   447,   457,   265,
     266,   334,   447,   265,   266,   265,   266,   265,   266,   341,
     447,    68,   266,   299,   447,   457,   265,   266,   364,   447,
     265,   266,   390,   447,   265,   266,   420,   447,   265,   266,
     431,   447,   457,   451,   265,     7,   259,   259,   259,   259,
     259,   259,   451,   454,   455,     8,     7,     7,   266,     7,
     454,     7,   259,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   258,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   267,   258,   267,     7,   457,   265,   295,   297,   259,
     235,   248,   259,   335,   319,   325,   342,   259,   259,   365,
     391,   421,   432,   435,   266,   266,   454,     5,     5,   451,
     451,   458,   458,   266,   267,   451,   258,   451,     8,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   267,
     260,   260,   260,   260,   260,   260,   267,   267,   267,     8,
     258,     8,   458,   454,   235,   265,   262,   451,   235,   235,
     293,     5,    70,   262,   282,   286,   235,   451,    83,    87,
      97,   266,   336,    83,    97,   266,   320,    83,    89,    97,
     266,   326,    69,    87,    97,    98,   106,   108,   266,   343,
     447,   300,     5,   260,   282,   284,   457,    87,    97,   113,
     117,   266,   366,    97,   134,   141,   266,   392,   447,    97,
     113,   135,   189,   266,   422,    97,   141,   191,   193,   216,
     266,   433,   265,   266,   260,   267,   267,   267,   260,   260,
     451,   455,     8,     7,   260,   451,   451,   451,   451,   451,
     451,   451,   260,   258,     6,   451,   451,   451,   266,     5,
     282,   282,   260,   294,     3,   257,   265,   268,   290,   292,
     457,     7,   259,   282,   260,     5,   265,     5,     5,   457,
     265,     5,   265,    24,   100,   250,   301,   302,     5,   265,
       5,     5,   457,   265,   265,   265,   260,   294,   235,   260,
       5,     5,   457,   265,   265,     5,   457,   265,   393,     5,
     457,   265,   457,   457,   457,   265,   457,   458,     5,   436,
       5,   451,   451,     7,     7,   451,     7,     8,   266,   260,
     260,   260,   260,   258,   266,   266,     7,     7,     7,     5,
       8,   451,   291,   454,    65,   287,   290,     7,   235,   265,
     337,     7,   265,   295,     7,   321,     7,   327,   259,   259,
     250,     7,   305,   306,     7,   360,     7,   295,     7,   344,
     350,   357,     7,     5,   301,   235,     7,   295,     7,   367,
     373,   295,     7,   394,   265,   295,     7,   423,     7,     7,
       7,   436,     7,     7,     7,   266,   437,   260,   267,   267,
     451,   265,   451,   258,   266,   294,   268,   283,    67,   337,
     265,   266,   447,     7,   265,   266,   265,   266,   451,     5,
     250,     5,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    61,    62,   123,   130,
     242,   248,   249,   254,   257,   262,   263,   265,   307,   310,
     388,   450,   452,   457,   265,   266,   447,     7,   265,   266,
     447,   265,   266,   265,   266,   447,   265,     7,   301,     7,
     265,   266,   447,   118,   119,   120,   121,   266,   374,   447,
       7,   265,   266,   447,   401,     7,   265,   266,   447,   266,
     194,   195,   196,   197,   438,   447,   451,   451,   266,   451,
       8,     8,   249,   292,   288,   294,   280,   266,   338,   322,
     328,   260,   260,   388,   259,   314,   259,   259,   259,   259,
     311,   312,     5,   307,   307,   307,   307,     3,     3,     5,
     144,   214,     5,   457,   236,   237,   238,   239,   240,   241,
     242,   243,   246,   247,   248,   249,   250,   251,   252,   253,
     256,   262,   264,   259,   315,   315,   361,   345,   351,   358,
     451,     7,   368,   265,   265,   265,   265,   395,     5,    16,
     143,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   160,   163,   166,   169,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   190,   195,   198,   266,   402,   447,   424,
     259,   259,   259,   259,   260,   260,   266,   451,   451,   292,
     260,     5,    66,   289,   259,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    81,    87,   100,   266,   339,    70,
      82,   266,   323,    83,    87,    88,   266,   329,   388,   259,
     388,   307,     5,     5,   259,   259,   243,   258,   457,   266,
     308,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,     3,   451,   260,
     261,   307,   316,   265,   317,    99,   109,   110,   111,   266,
     362,    97,    99,   100,   101,   102,   103,   104,   105,   266,
     346,    97,    99,   107,   266,   352,    87,    97,    99,   266,
     359,   266,    82,    84,    85,    87,    97,   114,   115,   116,
     131,   187,   259,   266,   369,   379,   379,   383,   375,    87,
      97,   135,   136,   137,   138,   139,   140,   266,   396,   447,
     259,   457,   259,   259,   301,   259,   259,   259,   259,   259,
     259,   259,   259,   259,     7,   259,   259,   265,   259,   265,
     259,   265,   265,   259,   259,   259,   259,   259,   259,   259,
     259,   265,   265,   259,   259,   259,   259,   259,   265,   265,
     259,   403,   404,    76,    97,   266,   425,   440,   457,     6,
     440,   284,     6,     8,   457,   290,   262,   284,   284,   284,
     284,   259,   301,   259,   301,   301,   301,   265,   457,     5,
     259,   301,    65,   284,     5,   265,     5,     5,   260,   305,
     260,   267,   259,   260,   305,   305,   259,   266,   307,   260,
     260,   267,    70,   454,     5,   286,   289,   457,     5,     5,
       5,   265,   265,   303,   303,   284,   284,     5,     5,   265,
     355,     5,   265,   353,     5,   457,     5,     5,     5,     5,
       5,   108,   118,   457,   457,   451,     3,   284,   453,   371,
      82,    84,    85,    86,   123,   124,   125,   126,   127,   128,
     129,   131,   132,   266,   380,   387,   266,   131,   266,   384,
     387,    87,   111,   265,   266,   376,     5,   457,   265,   397,
     457,   458,   453,   458,   265,   399,   457,   457,   457,     7,
     301,   301,     7,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   301,   451,   408,   451,   410,   451,   412,   414,
     284,   458,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,     5,   457,   259,   259,
     265,   457,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   443,   259,   442,   267,   443,   439,   444,   451,   290,
       7,     7,     7,     7,   301,     7,   301,     7,     7,     7,
     452,     7,     7,   301,     7,     7,     7,   317,   330,     7,
       7,   267,   307,   313,   265,   260,   267,   305,     8,   307,
     259,   266,     7,     7,     7,     7,     7,     7,   295,   265,
     347,     5,   301,   304,     7,     7,     7,     7,     7,   356,
       7,   354,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   370,     7,     7,     7,     7,   305,     5,
       5,     5,   259,   284,     7,   259,   284,   259,     5,     5,
     377,     7,     7,   398,     7,     7,     7,     7,   400,     7,
       7,   260,   260,   260,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   260,   267,   141,   144,   157,   158,   159,
     266,   409,   267,   141,   144,   157,   158,   161,   162,   266,
     411,   267,    19,    89,   141,   164,   165,   266,   413,    19,
      89,   134,   141,   142,   164,   167,   168,   266,   415,   267,
     260,   267,   267,   267,   267,   267,   267,   266,   266,   267,
     267,   267,   267,   267,   267,   267,   260,   303,   405,   457,
     405,   426,     7,   284,   284,   265,   284,   265,   265,   265,
     265,   265,   444,   284,   248,   249,   250,   251,   267,   441,
     233,   301,   444,   267,   260,   267,   445,   281,   267,   267,
     294,   267,     7,   265,   266,   284,   260,   305,   451,     3,
     260,   309,   284,     7,   113,     7,   294,   266,   267,   266,
     294,   266,   294,   259,   372,   260,     7,     7,     7,     3,
       7,   381,     7,   385,     7,     7,    79,    80,   117,   131,
     266,   378,   266,   294,   266,   294,     7,   265,     7,   301,
     457,   457,   451,   451,   451,   457,   301,   284,     7,   451,
     265,   301,   451,   451,   301,   451,   265,   301,   451,   451,
     451,   451,   451,   451,   451,   265,   451,   301,   451,   451,
     457,   265,   265,   451,   451,   265,   301,     7,   301,   453,
     453,   453,   451,   453,     7,     7,   457,   457,   451,   457,
     457,   284,     5,     7,   406,   406,     5,   118,   266,   447,
     209,   301,   265,   454,   265,   265,   265,   260,   260,     5,
     259,   444,   260,   131,     7,    76,   137,   169,   199,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   267,   301,   301,   452,   301,   331,   260,   260,
     267,   260,   307,   260,     5,     5,   301,     5,     5,   457,
       7,     7,   260,   305,   305,   388,   388,   388,   284,   457,
     457,   401,   260,   267,   267,   267,   267,   267,   267,   260,
     267,   267,   401,     7,     7,     7,     7,   267,   401,     7,
       7,     7,     7,     7,   267,     7,     7,   401,     7,     7,
       7,     7,     7,   401,   401,     7,     7,   416,   260,   267,
     267,   260,   260,   267,   267,   267,   267,   267,   260,   260,
     260,   267,   266,   267,   260,   267,   407,   260,   265,   265,
       5,   267,   454,   266,   454,   454,   454,     7,   442,   458,
     260,     7,   284,   453,   453,   265,     5,   243,   244,   458,
     451,   451,   453,   451,     5,   446,   446,   446,   451,     5,
     265,   451,   303,   265,   265,   265,   265,     3,   262,   260,
     260,   266,   260,    90,    91,    92,    93,    94,    95,   266,
     332,   260,   451,   266,     7,   266,   260,     7,   382,   386,
       7,     7,     7,     7,   266,     7,   453,   451,   453,   451,
     451,   457,     7,   457,   301,   266,   301,   266,   301,   266,
     266,   266,   265,   266,     7,   451,   301,     7,     7,   451,
     458,   458,   451,   451,     7,     7,     7,   458,     7,   136,
       7,   210,   214,   453,     7,   427,   427,   265,   301,   266,
     266,   266,   266,   267,   260,     7,   444,   301,   458,   458,
       6,   454,   451,   451,   451,   454,   290,     7,     7,     7,
       7,     5,   451,   451,   451,   451,   451,   265,   266,   112,
       7,   267,   267,    17,   260,   260,   267,   267,   267,   267,
     260,   267,   267,   260,   267,   417,   267,   260,   267,   260,
     260,   260,   267,   267,   266,   267,   458,   458,   453,    82,
      84,    87,   131,   266,   387,   428,   266,   451,   267,   265,
     265,   265,   265,   444,   260,   267,   266,   267,   267,   267,
     266,   267,     7,     7,     7,     7,     7,     7,   451,     5,
     305,   388,   265,     7,     7,   451,   451,   451,   451,     7,
     301,   451,   265,   451,    19,    87,    89,   100,   113,   131,
     266,   418,   301,     7,   301,     7,     7,     7,   451,   451,
       7,   301,   266,   267,     5,     5,     5,   284,   259,   267,
     301,   454,   454,   454,   454,   260,     7,   301,   451,   451,
     451,   451,   266,   295,   260,   260,   401,   260,   260,   260,
     267,   260,   267,   401,   260,     5,     5,   451,   301,     5,
     284,   260,   260,   267,   260,   260,   266,     7,   451,     7,
       7,     7,     7,   429,   451,   266,   266,   266,   266,   266,
       7,   267,   267,   267,   267,   260,     7,     7,     7,   266,
       7,     7,     7,   453,   265,   451,   266,   265,     7,     7,
       7,     7,     7,     7,     7,     7,   301,   265,   265,     7,
     266,   305,   266,   265,   265,   266,   265,   265,   301,   451,
     451,   451,     7,   348,   267,   401,   260,   401,   260,   401,
     401,     7,   260,   265,   453,   454,   265,   454,   454,   266,
     266,   266,   266,    63,   451,   266,   265,   266,     7,   266,
     266,     7,   451,   267,   266,   451,   266,   266,   285,   457,
     267,   401,     7,     7,   266,   453,   266,   266,   266,   265,
       7,   265,   296,   451,   266,   267,   265,   454,   349,   266,
     260,   453,   451,   266,   133,     7,   266,   267,   266,     5,
     451,   265,   296,   266,   451,     7,   267,   266,   451,   267,
     451,   266
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
#line 340 "GetDP.y"
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
#line 356 "GetDP.y"
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
#line 380 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; ;}
    break;

  case 19:
#line 404 "GetDP.y"
    {            
      strcpy(yyincludename, (yyvsp[(2) - (2)].c)); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 419 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 421 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 423 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 425 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 427 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 429 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 431 "GetDP.y"
    { Help((yyvsp[(2) - (3)].c)); ;}
    break;

  case 28:
#line 433 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 435 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 437 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 439 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 441 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 443 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 445 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 447 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 449 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 451 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 453 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 455 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 457 "GetDP.y"
    { Print_Object((yyvsp[(2) - (3)].i), &Problem_S); ;}
    break;

  case 43:
#line 492 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (4)].c), 0, 0) ; ;}
    break;

  case 44:
#line 495 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 2, (yyvsp[(2) - (5)].i)) ; ;}
    break;

  case 45:
#line 501 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 0, 0) ;
    ;}
    break;

  case 48:
#line 511 "GetDP.y"
    { Add_Group_2(&Group_S, (yyvsp[(1) - (5)].c), 1, 0, 0, 0) ; ;}
    break;

  case 50:
#line 519 "GetDP.y"
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
#line 529 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = (yyvsp[(10) - (10)].l) ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)(yyvsp[(3) - (10)].d) ; 
    ;}
    break;

  case 52:
#line 536 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = (yyvsp[(14) - (18)].l) ; 
      Add_Group(&Group_S, (yyvsp[(1) - (18)].c), 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)(yyvsp[(16) - (18)].d) ; 
    ;}
    break;

  case 53:
#line 546 "GetDP.y"
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
#line 555 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = (yyvsp[(5) - (6)].l) ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 55:
#line 563 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = (yyvsp[(2) - (2)].l) ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 56:
#line 574 "GetDP.y"
    {
      (yyval.i) = (yyvsp[(1) - (1)].i) ;
    ;}
    break;

  case 57:
#line 579 "GetDP.y"
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
#line 596 "GetDP.y"
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
#line 626 "GetDP.y"
    { (yyval.i) = REGION ; ;}
    break;

  case 60:
#line 629 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_Type, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 61:
#line 641 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l) ; ;}
    break;

  case 62:
#line 642 "GetDP.y"
    { (yyval.l) = NULL ; ;}
    break;

  case 63:
#line 649 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  (yyval.l) = NULL ; ;}
    break;

  case 64:
#line 652 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; (yyval.l) = (yyvsp[(3) - (3)].l) ; ;}
    break;

  case 65:
#line 655 "GetDP.y"
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
#line 673 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_SuppList, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 67:
#line 686 "GetDP.y"
    {
      (yyval.l) = List_Create(((List_Nbr((yyvsp[(1) - (1)].l)) > 0)? List_Nbr((yyvsp[(1) - (1)].l)) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(1) - (1)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(1) - (1)].l), i) ) ;
    ;}
    break;

  case 68:
#line 693 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 69:
#line 700 "GetDP.y"
    {
      (yyval.l) = List_Create( 5, 5, sizeof(int)) ;
    ;}
    break;

  case 70:
#line 705 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (3)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(3) - (3)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(3) - (3)].l), i) ) ;
    ;}
    break;

  case 71:
#line 712 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (4)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(4) - (4)].l)) ; i++)
	List_Suppress((yyval.l), (int *)List_Pointer((yyvsp[(4) - (4)].l), i), fcmp_int ) ;
    ;}
    break;

  case 72:
#line 723 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &((yyvsp[(1) - (1)].i))) ;
    ;}
    break;

  case 73:
#line 729 "GetDP.y"
    {
      i = (int)(yyvsp[(2) - (3)].d) ;
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
    ;}
    break;

  case 74:
#line 736 "GetDP.y"
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
#line 747 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(yyvsp[(1) - (3)].i) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?(j<=(yyvsp[(3) - (3)].d)):(j>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 76:
#line 756 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)(yyvsp[(2) - (5)].d) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?(j<=(yyvsp[(5) - (5)].d)):(j>=(yyvsp[(5) - (5)].d)) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 77:
#line 764 "GetDP.y"
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
#line 778 "GetDP.y"
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
#line 791 "GetDP.y"
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
#line 830 "GetDP.y"
    { if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (3)].c), fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, (yyvsp[(3) - (3)].c), 0, 0) ;
      }
      else  Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 82:
#line 840 "GetDP.y"
    { 
      for (k = 0 ; k < (int)(yyvsp[(5) - (6)].d) ; k++) {
	sprintf(tmpstr, "%s_%d", (yyvsp[(3) - (6)].c), k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = ListDummy_L ;
	  Add_Group(&Group_S, (yyvsp[(3) - (6)].c), 2, k+1) ;
	}
      }
      Free((yyvsp[(3) - (6)].c)) ;
    ;}
    break;

  case 85:
#line 862 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(3) - (4)].d) ; ;}
    break;

  case 86:
#line 867 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 87:
#line 868 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 88:
#line 873 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 92:
#line 892 "GetDP.y"
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

  case 93:
#line 912 "GetDP.y"
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

  case 96:
#line 963 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[(3) - (3)].c), fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, (yyvsp[(3) - (3)].c), 0) ;
      }
      else  Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 97:
#line 973 "GetDP.y"
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

  case 98:
#line 996 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = (yyvsp[(3) - (4)].d) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 99:
#line 1002 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (4)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", (yyvsp[(3) - (4)].c)) ;
      Free((yyvsp[(3) - (4)].c)) ;  (yyval.i) = i ;
    ;}
    break;

  case 100:
#line 1008 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 101:
#line 1011 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = (yyvsp[(2) - (2)].l) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 102:
#line 1016 "GetDP.y"
    { Expression_S.Type = UNDEFINED_EXP ; 
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;}
    break;

  case 103:
#line 1023 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 105:
#line 1034 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &((yyvsp[(1) - (1)].i))) ; ;}
    break;

  case 106:
#line 1037 "GetDP.y"
    { List_Add(ListOfInt_L, &((yyvsp[(3) - (3)].i))) ; ;}
    break;

  case 107:
#line 1043 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 108:
#line 1047 "GetDP.y"
    { (yyval.l) = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 110:
#line 1059 "GetDP.y"
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

  case 111:
#line 1072 "GetDP.y"
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

  case 112:
#line 1086 "GetDP.y"
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

  case 113:
#line 1101 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 114:
#line 1107 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 115:
#line 1113 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1119 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1125 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1131 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1137 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1143 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1149 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1155 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1161 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1167 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1173 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1179 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1185 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1191 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1197 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1204 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 132:
#line 1212 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1225 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 135:
#line 1231 "GetDP.y"
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

  case 136:
#line 1305 "GetDP.y"
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

  case 137:
#line 1339 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (1)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (1)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 138:
#line 1348 "GetDP.y"
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

  case 139:
#line 1360 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 140:
#line 1362 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = (yyvsp[(4) - (5)].l) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 141:
#line 1374 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1376 "GetDP.y"
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

  case 143:
#line 1388 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1390 "GetDP.y"
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

  case 145:
#line 1404 "GetDP.y"
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

  case 146:
#line 1416 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 147:
#line 1422 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 148:
#line 1428 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 149:
#line 1430 "GetDP.y"
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

  case 150:
#line 1459 "GetDP.y"
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

  case 151:
#line 1485 "GetDP.y"
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

  case 152:
#line 1498 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 153:
#line 1504 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 154:
#line 1511 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[(2) - (2)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1517 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[(3) - (3)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1524 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[(2) - (2)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1531 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[(3) - (3)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1542 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 159:
#line 1543 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 160:
#line 1544 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 161:
#line 1549 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 162:
#line 1550 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 163:
#line 1556 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 164:
#line 1559 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 165:
#line 1562 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 166:
#line 1577 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 167:
#line 1582 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 168:
#line 1589 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 170:
#line 1598 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 171:
#line 1603 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 172:
#line 1610 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 173:
#line 1613 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 174:
#line 1620 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 176:
#line 1630 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 177:
#line 1633 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 178:
#line 1636 "GetDP.y"
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

  case 179:
#line 1674 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 180:
#line 1680 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 181:
#line 1687 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 183:
#line 1700 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 184:
#line 1707 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 185:
#line 1710 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 186:
#line 1717 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 187:
#line 1720 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 188:
#line 1727 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 190:
#line 1739 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 191:
#line 1749 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 192:
#line 1759 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 193:
#line 1766 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 194:
#line 1769 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 195:
#line 1776 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 197:
#line 1792 "GetDP.y"
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

  case 198:
#line 1840 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 199:
#line 1843 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 200:
#line 1846 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 201:
#line 1849 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 202:
#line 1852 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 203:
#line 1863 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 205:
#line 1873 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 207:
#line 1883 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 209:
#line 1896 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 210:
#line 1903 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 211:
#line 1911 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 212:
#line 1920 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 213:
#line 1923 "GetDP.y"
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

  case 214:
#line 1941 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 215:
#line 1946 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 216:
#line 1951 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 217:
#line 1960 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 219:
#line 1974 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 220:
#line 1984 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 221:
#line 1989 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 222:
#line 1995 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 223:
#line 2000 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 224:
#line 2008 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 225:
#line 2016 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 226:
#line 2025 "GetDP.y"
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

  case 227:
#line 2043 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2052 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2060 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2068 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(2) - (3)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2078 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2088 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2098 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2118 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 236:
#line 2129 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 238:
#line 2140 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 241:
#line 2154 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 242:
#line 2161 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 243:
#line 2169 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 244:
#line 2178 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 245:
#line 2181 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 246:
#line 2184 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 247:
#line 2187 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 248:
#line 2194 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 249:
#line 2200 "GetDP.y"
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

  case 250:
#line 2217 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 251:
#line 2226 "GetDP.y"
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

  case 253:
#line 2247 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 254:
#line 2250 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 255:
#line 2255 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 256:
#line 2260 "GetDP.y"
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

  case 257:
#line 2274 "GetDP.y"
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

  case 258:
#line 2294 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 259:
#line 2299 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 260:
#line 2304 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 261:
#line 2309 "GetDP.y"
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

  case 263:
#line 2343 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 264:
#line 2347 "GetDP.y"
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

  case 265:
#line 2357 "GetDP.y"
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

  case 266:
#line 2421 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 267:
#line 2427 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 268:
#line 2436 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 270:
#line 2447 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 271:
#line 2454 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 272:
#line 2457 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 273:
#line 2464 "GetDP.y"
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

  case 274:
#line 2480 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 275:
#line 2486 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 276:
#line 2489 "GetDP.y"
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

  case 277:
#line 2508 "GetDP.y"
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

  case 278:
#line 2520 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 279:
#line 2527 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 280:
#line 2532 "GetDP.y"
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

  case 281:
#line 2547 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 282:
#line 2553 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 283:
#line 2559 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 284:
#line 2568 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 286:
#line 2580 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 287:
#line 2587 "GetDP.y"
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

  case 288:
#line 2598 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[(2) - (3)].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", (yyvsp[(2) - (3)].c)) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 289:
#line 2612 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 290:
#line 2617 "GetDP.y"
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

  case 291:
#line 2654 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 292:
#line 2663 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 294:
#line 2679 "GetDP.y"
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

  case 295:
#line 2712 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 296:
#line 2715 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 297:
#line 2718 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 298:
#line 2733 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 300:
#line 2743 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 302:
#line 2754 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 304:
#line 2765 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 305:
#line 2772 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 306:
#line 2780 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 308:
#line 2792 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 309:
#line 2798 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 310:
#line 2803 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 312:
#line 2814 "GetDP.y"
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

  case 314:
#line 2837 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 315:
#line 2840 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 316:
#line 2844 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 317:
#line 2847 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 318:
#line 2857 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 319:
#line 2861 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 320:
#line 2869 "GetDP.y"
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

  case 321:
#line 2893 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 322:
#line 2898 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 323:
#line 2904 "GetDP.y"
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

  case 324:
#line 3215 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 325:
#line 3220 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 326:
#line 3229 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 327:
#line 3238 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 328:
#line 3247 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 330:
#line 3255 "GetDP.y"
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

  case 331:
#line 3295 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 332:
#line 3300 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 333:
#line 3305 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 334:
#line 3314 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 335:
#line 3317 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 336:
#line 3320 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 337:
#line 3323 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 338:
#line 3334 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 340:
#line 3345 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 341:
#line 3355 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 342:
#line 3365 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 343:
#line 3379 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 345:
#line 3391 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 346:
#line 3393 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 347:
#line 3395 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 348:
#line 3397 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 349:
#line 3405 "GetDP.y"
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

  case 351:
#line 3430 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 352:
#line 3438 "GetDP.y"
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

  case 353:
#line 3517 "GetDP.y"
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

  case 354:
#line 3571 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 355:
#line 3576 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 356:
#line 3585 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 357:
#line 3594 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 358:
#line 3599 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 359:
#line 3608 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 360:
#line 3619 "GetDP.y"
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

  case 362:
#line 3648 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 363:
#line 3653 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 364:
#line 3661 "GetDP.y"
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

  case 365:
#line 3716 "GetDP.y"
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

  case 366:
#line 3733 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 367:
#line 3734 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 368:
#line 3735 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 369:
#line 3736 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 370:
#line 3737 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 371:
#line 3738 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 372:
#line 3739 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 373:
#line 3740 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 374:
#line 3747 "GetDP.y"
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

  case 375:
#line 3768 "GetDP.y"
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

  case 376:
#line 3792 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 378:
#line 3802 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 380:
#line 3813 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 382:
#line 3825 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 383:
#line 3832 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 384:
#line 3840 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 385:
#line 3843 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 386:
#line 3845 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 388:
#line 3853 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 389:
#line 3858 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 390:
#line 3863 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 391:
#line 3872 "GetDP.y"
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

  case 393:
#line 3892 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 394:
#line 3895 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 395:
#line 3904 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 396:
#line 3907 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 397:
#line 3912 "GetDP.y"
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

  case 398:
#line 3923 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 399:
#line 3928 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 400:
#line 3933 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 402:
#line 3944 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 403:
#line 3953 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 404:
#line 3960 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 405:
#line 3963 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 406:
#line 3975 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(1) - (1)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 407:
#line 3985 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 408:
#line 3991 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 409:
#line 3994 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 410:
#line 4006 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 411:
#line 4014 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 412:
#line 4027 "GetDP.y"
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

  case 413:
#line 4049 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 414:
#line 4056 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 415:
#line 4062 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 416:
#line 4068 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 417:
#line 4074 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 418:
#line 4082 "GetDP.y"
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

  case 419:
#line 4104 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 420:
#line 4111 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 421:
#line 4117 "GetDP.y"
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

  case 422:
#line 4128 "GetDP.y"
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

  case 423:
#line 4139 "GetDP.y"
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

  case 424:
#line 4152 "GetDP.y"
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

  case 425:
#line 4167 "GetDP.y"
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

  case 426:
#line 4182 "GetDP.y"
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

  case 427:
#line 4197 "GetDP.y"
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

  case 428:
#line 4217 "GetDP.y"
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

  case 429:
#line 4238 "GetDP.y"
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

  case 430:
#line 4250 "GetDP.y"
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

  case 431:
#line 4270 "GetDP.y"
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

  case 432:
#line 4287 "GetDP.y"
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

  case 433:
#line 4306 "GetDP.y"
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

  case 434:
#line 4327 "GetDP.y"
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

  case 435:
#line 4341 "GetDP.y"
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

  case 436:
#line 4355 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 437:
#line 4363 "GetDP.y"
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

  case 438:
#line 4397 "GetDP.y"
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

  case 439:
#line 4410 "GetDP.y"
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

  case 440:
#line 4424 "GetDP.y"
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

  case 441:
#line 4437 "GetDP.y"
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

  case 442:
#line 4449 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 444:
#line 4458 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 446:
#line 4467 "GetDP.y"
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

  case 447:
#line 4478 "GetDP.y"
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

  case 448:
#line 4490 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 449:
#line 4500 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 450:
#line 4508 "GetDP.y"
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

  case 451:
#line 4521 "GetDP.y"
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

  case 452:
#line 4534 "GetDP.y"
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

  case 453:
#line 4548 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 454:
#line 4558 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 455:
#line 4568 "GetDP.y"
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

  case 456:
#line 4582 "GetDP.y"
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

  case 457:
#line 4596 "GetDP.y"
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

  case 458:
#line 4615 "GetDP.y"
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

  case 459:
#line 4633 "GetDP.y"
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

  case 460:
#line 4644 "GetDP.y"
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

  case 461:
#line 4659 "GetDP.y"
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

  case 462:
#line 4674 "GetDP.y"
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

  case 463:
#line 4689 "GetDP.y"
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

  case 464:
#line 4704 "GetDP.y"
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

  case 465:
#line 4719 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 466:
#line 4730 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 467:
#line 4735 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 468:
#line 4745 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 470:
#line 4755 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 471:
#line 4758 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 472:
#line 4768 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 473:
#line 4784 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 475:
#line 4800 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 476:
#line 4804 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 477:
#line 4808 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 478:
#line 4812 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 479:
#line 4817 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 480:
#line 4828 "GetDP.y"
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

  case 482:
#line 4845 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 483:
#line 4849 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 484:
#line 4853 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 485:
#line 4857 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 486:
#line 4861 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 487:
#line 4866 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 488:
#line 4877 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 490:
#line 4892 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 491:
#line 4896 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 492:
#line 4900 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 493:
#line 4904 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4908 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 495:
#line 4919 "GetDP.y"
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

  case 497:
#line 4937 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 498:
#line 4941 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 499:
#line 4945 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 500:
#line 4949 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 501:
#line 4954 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 502:
#line 4964 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 503:
#line 4970 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 504:
#line 4976 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 505:
#line 4986 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 506:
#line 4989 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 507:
#line 4994 "GetDP.y"
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

  case 509:
#line 5012 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 510:
#line 5022 "GetDP.y"
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

  case 511:
#line 5051 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 512:
#line 5054 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 513:
#line 5057 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 514:
#line 5065 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 515:
#line 5082 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 517:
#line 5094 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 519:
#line 5103 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 521:
#line 5116 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 522:
#line 5123 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 523:
#line 5131 "GetDP.y"
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

  case 524:
#line 5144 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 525:
#line 5149 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 526:
#line 5155 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 527:
#line 5158 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 528:
#line 5161 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 529:
#line 5167 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 531:
#line 5178 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 532:
#line 5181 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 533:
#line 5187 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 534:
#line 5192 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 535:
#line 5198 "GetDP.y"
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

  case 536:
#line 5210 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 537:
#line 5215 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 539:
#line 5229 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 540:
#line 5236 "GetDP.y"
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

  case 541:
#line 5264 "GetDP.y"
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

  case 542:
#line 5275 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 543:
#line 5280 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 544:
#line 5289 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 545:
#line 5306 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 547:
#line 5318 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 549:
#line 5325 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 551:
#line 5337 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 552:
#line 5344 "GetDP.y"
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

  case 553:
#line 5356 "GetDP.y"
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

  case 554:
#line 5367 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 555:
#line 5372 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 556:
#line 5378 "GetDP.y"
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

  case 557:
#line 5395 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 558:
#line 5405 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 559:
#line 5408 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 560:
#line 5412 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 561:
#line 5425 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 562:
#line 5430 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 563:
#line 5435 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 564:
#line 5444 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 565:
#line 5453 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 566:
#line 5462 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 567:
#line 5468 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 568:
#line 5473 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 569:
#line 5481 "GetDP.y"
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

  case 570:
#line 5493 "GetDP.y"
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

  case 571:
#line 5516 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 572:
#line 5517 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 573:
#line 5518 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 574:
#line 5519 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 575:
#line 5525 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 576:
#line 5527 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 577:
#line 5533 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 578:
#line 5539 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 579:
#line 5546 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 580:
#line 5555 "GetDP.y"
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

  case 581:
#line 5577 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 582:
#line 5585 "GetDP.y"
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

  case 583:
#line 5596 "GetDP.y"
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

  case 584:
#line 5610 "GetDP.y"
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

  case 585:
#line 5631 "GetDP.y"
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

  case 586:
#line 5658 "GetDP.y"
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

  case 587:
#line 5689 "GetDP.y"
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

  case 588:
#line 5709 "GetDP.y"
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

  case 590:
#line 5745 "GetDP.y"
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

  case 591:
#line 5759 "GetDP.y"
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

  case 592:
#line 5773 "GetDP.y"
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

  case 593:
#line 5787 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 594:
#line 5791 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 595:
#line 5795 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 596:
#line 5799 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 597:
#line 5803 "GetDP.y"
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

  case 598:
#line 5813 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 599:
#line 5818 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 600:
#line 5823 "GetDP.y"
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

  case 601:
#line 5843 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 602:
#line 5847 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 603:
#line 5854 "GetDP.y"
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

  case 604:
#line 5864 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 605:
#line 5873 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 606:
#line 5882 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 607:
#line 5889 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 608:
#line 5897 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 609:
#line 5901 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 610:
#line 5910 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 611:
#line 5914 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 612:
#line 5918 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 613:
#line 5926 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 614:
#line 5932 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 615:
#line 5936 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 616:
#line 5944 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 617:
#line 5951 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 618:
#line 5959 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 619:
#line 5966 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 620:
#line 5974 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 621:
#line 5981 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 622:
#line 5989 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 623:
#line 5993 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 624:
#line 6002 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 625:
#line 6008 "GetDP.y"
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

  case 626:
#line 6058 "GetDP.y"
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

  case 627:
#line 6073 "GetDP.y"
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

  case 628:
#line 6089 "GetDP.y"
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

  case 629:
#line 6109 "GetDP.y"
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

  case 630:
#line 6129 "GetDP.y"
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

  case 631:
#line 6167 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 632:
#line 6171 "GetDP.y"
    {
    ;}
    break;

  case 635:
#line 6187 "GetDP.y"
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

  case 636:
#line 6202 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 637:
#line 6208 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 638:
#line 6214 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 639:
#line 6220 "GetDP.y"
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

  case 640:
#line 6236 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 641:
#line 6241 "GetDP.y"
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

  case 642:
#line 6257 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 643:
#line 6262 "GetDP.y"
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

  case 644:
#line 6274 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 645:
#line 6284 "GetDP.y"
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

  case 646:
#line 6298 "GetDP.y"
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

  case 648:
#line 6324 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6330 "GetDP.y"
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

  case 650:
#line 6344 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6350 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 652:
#line 6360 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 653:
#line 6361 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 654:
#line 6362 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 655:
#line 6363 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 656:
#line 6364 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 657:
#line 6365 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 658:
#line 6366 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 659:
#line 6367 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 660:
#line 6368 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 661:
#line 6369 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 662:
#line 6370 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 663:
#line 6371 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 664:
#line 6372 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 665:
#line 6373 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 666:
#line 6374 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 667:
#line 6375 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 668:
#line 6376 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 669:
#line 6377 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 670:
#line 6378 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 671:
#line 6379 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 672:
#line 6380 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 673:
#line 6384 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 674:
#line 6385 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 675:
#line 6386 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 676:
#line 6387 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 677:
#line 6388 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 678:
#line 6389 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 679:
#line 6390 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 680:
#line 6391 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 681:
#line 6392 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 682:
#line 6393 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 683:
#line 6394 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 684:
#line 6395 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 685:
#line 6396 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 686:
#line 6397 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 687:
#line 6398 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 688:
#line 6399 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 689:
#line 6400 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 690:
#line 6401 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 691:
#line 6402 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 692:
#line 6403 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 693:
#line 6404 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 694:
#line 6405 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 695:
#line 6406 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 696:
#line 6407 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 697:
#line 6408 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 698:
#line 6409 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 699:
#line 6410 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 700:
#line 6411 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 701:
#line 6412 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 702:
#line 6413 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 703:
#line 6414 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 704:
#line 6415 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 705:
#line 6416 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 706:
#line 6417 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 707:
#line 6418 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 708:
#line 6419 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 709:
#line 6420 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 710:
#line 6421 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 711:
#line 6423 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 712:
#line 6425 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 713:
#line 6430 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 714:
#line 6431 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 715:
#line 6432 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 716:
#line 6433 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 717:
#line 6434 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 718:
#line 6435 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 719:
#line 6436 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 720:
#line 6438 "GetDP.y"
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

  case 721:
#line 6456 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 722:
#line 6459 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 723:
#line 6465 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 724:
#line 6468 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 725:
#line 6475 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 726:
#line 6481 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 727:
#line 6484 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 728:
#line 6487 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 729:
#line 6499 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 730:
#line 6505 "GetDP.y"
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

  case 731:
#line 6516 "GetDP.y"
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

  case 732:
#line 6532 "GetDP.y"
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

  case 733:
#line 6554 "GetDP.y"
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

  case 734:
#line 6569 "GetDP.y"
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

  case 735:
#line 6607 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 736:
#line 6615 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 737:
#line 6627 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 738:
#line 6635 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 739:
#line 6649 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 740:
#line 6652 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 741:
#line 6659 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 742:
#line 6662 "GetDP.y"
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

  case 743:
#line 6677 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 744:
#line 6682 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 745:
#line 6687 "GetDP.y"
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

  case 746:
#line 6706 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 747:
#line 6716 "GetDP.y"
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


/* Line 1267 of yacc.c.  */
#line 11995 "GetDP.tab.c"
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


#line 6727 "GetDP.y"



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


