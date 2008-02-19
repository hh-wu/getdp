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

/* $Id: GetDP.tab.c,v 1.118 2008-02-19 08:50:37 dular Exp $ */
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
#define YYLAST   7457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  270
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  190
/* YYNRULES -- Number of rules.  */
#define YYNRULES  749
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2048

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
     296,   297,   301,   308,   315,   325,   326,   328,   333,   334,
     337,   341,   342,   345,   351,   358,   366,   368,   369,   373,
     380,   385,   390,   391,   394,   398,   399,   403,   405,   409,
     410,   413,   415,   416,   417,   425,   429,   433,   440,   444,
     448,   452,   456,   460,   464,   468,   472,   476,   480,   484,
     488,   492,   496,   499,   502,   505,   509,   511,   515,   518,
     520,   523,   524,   530,   531,   539,   540,   552,   562,   567,
     572,   573,   581,   588,   591,   594,   597,   600,   604,   607,
     611,   615,   618,   622,   624,   628,   629,   633,   640,   641,
     646,   647,   650,   654,   659,   660,   665,   666,   669,   673,
     677,   682,   683,   688,   689,   692,   696,   700,   705,   706,
     711,   712,   715,   719,   723,   728,   729,   734,   735,   738,
     742,   746,   750,   754,   758,   762,   763,   766,   770,   772,
     773,   776,   780,   785,   789,   794,   800,   801,   806,   809,
     810,   813,   817,   821,   825,   829,   833,   837,   845,   849,
     853,   857,   861,   865,   873,   881,   889,   890,   893,   897,
     899,   900,   903,   906,   910,   915,   919,   924,   929,   934,
     939,   940,   945,   948,   949,   952,   956,   960,   965,   970,
     978,   982,   986,   990,   994,   995,   996,   997,  1016,  1017,
    1022,  1023,  1026,  1030,  1034,  1038,  1040,  1044,  1045,  1049,
    1051,  1055,  1056,  1060,  1061,  1066,  1069,  1070,  1073,  1077,
    1081,  1085,  1086,  1091,  1094,  1095,  1098,  1102,  1106,  1110,
    1114,  1115,  1118,  1122,  1124,  1125,  1128,  1132,  1137,  1141,
    1146,  1151,  1152,  1157,  1160,  1161,  1164,  1168,  1172,  1176,
    1180,  1184,  1185,  1191,  1195,  1196,  1202,  1206,  1210,  1214,
    1218,  1222,  1223,  1227,  1228,  1231,  1234,  1239,  1244,  1249,
    1254,  1255,  1258,  1262,  1266,  1270,  1271,  1274,  1278,  1282,
    1286,  1290,  1291,  1294,  1295,  1296,  1306,  1310,  1314,  1318,
    1321,  1325,  1331,  1332,  1335,  1339,  1340,  1341,  1351,  1352,
    1354,  1356,  1358,  1360,  1362,  1364,  1366,  1371,  1375,  1376,
    1379,  1383,  1385,  1386,  1389,  1393,  1398,  1403,  1404,  1410,
    1412,  1413,  1418,  1421,  1422,  1425,  1429,  1433,  1437,  1441,
    1445,  1449,  1453,  1457,  1459,  1461,  1465,  1466,  1470,  1472,
    1476,  1477,  1481,  1482,  1485,  1489,  1493,  1498,  1503,  1508,
    1513,  1519,  1525,  1528,  1536,  1548,  1556,  1570,  1582,  1592,
    1600,  1608,  1616,  1626,  1636,  1646,  1658,  1670,  1682,  1688,
    1706,  1720,  1736,  1748,  1762,  1763,  1771,  1772,  1780,  1788,
    1800,  1806,  1812,  1822,  1832,  1842,  1848,  1854,  1866,  1876,
    1891,  1906,  1914,  1927,  1938,  1946,  1954,  1962,  1964,  1966,
    1968,  1969,  1972,  1976,  1980,  1983,  1984,  1987,  1991,  1995,
    1999,  2003,  2008,  2009,  2012,  2016,  2020,  2024,  2028,  2032,
    2037,  2038,  2041,  2045,  2049,  2053,  2057,  2062,  2063,  2066,
    2070,  2074,  2078,  2082,  2086,  2091,  2096,  2101,  2102,  2107,
    2108,  2111,  2115,  2119,  2123,  2127,  2131,  2135,  2136,  2139,
    2143,  2145,  2146,  2149,  2153,  2158,  2162,  2166,  2171,  2172,
    2177,  2180,  2181,  2184,  2188,  2193,  2194,  2200,  2206,  2209,
    2210,  2213,  2214,  2221,  2225,  2229,  2233,  2237,  2238,  2241,
    2245,  2247,  2248,  2251,  2255,  2259,  2263,  2267,  2272,  2273,
    2282,  2283,  2284,  2288,  2296,  2304,  2313,  2325,  2332,  2333,
    2344,  2346,  2350,  2357,  2359,  2361,  2363,  2365,  2366,  2370,
    2372,  2375,  2378,  2391,  2394,  2410,  2415,  2428,  2446,  2469,
    2482,  2483,  2486,  2490,  2495,  2500,  2504,  2507,  2510,  2514,
    2518,  2522,  2526,  2530,  2533,  2537,  2541,  2545,  2549,  2553,
    2557,  2561,  2567,  2570,  2573,  2577,  2587,  2591,  2594,  2604,
    2607,  2617,  2620,  2630,  2636,  2640,  2643,  2644,  2647,  2654,
    2663,  2672,  2683,  2685,  2690,  2692,  2694,  2700,  2705,  2710,
    2718,  2723,  2731,  2737,  2741,  2745,  2753,  2759,  2768,  2771,
    2772,  2776,  2783,  2789,  2795,  2797,  2799,  2801,  2803,  2805,
    2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,
    2827,  2829,  2831,  2833,  2835,  2837,  2839,  2843,  2846,  2849,
    2853,  2857,  2861,  2865,  2869,  2873,  2877,  2881,  2885,  2889,
    2893,  2897,  2901,  2905,  2910,  2915,  2920,  2925,  2930,  2935,
    2940,  2945,  2950,  2955,  2962,  2967,  2972,  2977,  2982,  2987,
    2992,  2999,  3006,  3013,  3019,  3022,  3024,  3026,  3028,  3030,
    3032,  3034,  3036,  3038,  3039,  3041,  3043,  3047,  3049,  3051,
    3055,  3059,  3063,  3069,  3073,  3078,  3083,  3090,  3099,  3108,
    3114,  3120,  3122,  3124,  3126,  3128,  3130,  3135,  3142,  3144
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
     451,     8,   451,    -1,   457,    -1,    -1,   293,   294,   457,
      -1,   293,   294,   457,   235,   265,   266,    -1,   293,   294,
     457,   265,   451,   266,    -1,   293,   294,   457,   265,   451,
     266,   235,   265,   266,    -1,    -1,   267,    -1,   265,   262,
     451,   266,    -1,    -1,   265,   266,    -1,   265,   451,   266,
      -1,    -1,   298,   299,    -1,    68,   259,   300,   260,     7,
      -1,   457,   259,   260,   235,   301,     7,    -1,   457,   259,
     284,   260,   235,   301,     7,    -1,   447,    -1,    -1,   300,
     294,     5,    -1,   300,   294,     5,   265,   451,   266,    -1,
      24,   259,   451,   260,    -1,   100,   259,     5,   260,    -1,
      -1,   302,   305,    -1,   250,   250,   250,    -1,    -1,   265,
     304,   266,    -1,   301,    -1,   304,   267,   301,    -1,    -1,
     306,   307,    -1,   310,    -1,    -1,    -1,   307,   236,   308,
     307,     8,   309,   307,    -1,   307,   250,   307,    -1,   307,
     253,   307,    -1,    59,   259,   307,   267,   307,   260,    -1,
     307,   251,   307,    -1,   307,   248,   307,    -1,   307,   249,
     307,    -1,   307,   252,   307,    -1,   307,   256,   307,    -1,
     307,   242,   307,    -1,   307,   243,   307,    -1,   307,   247,
     307,    -1,   307,   246,   307,    -1,   307,   241,   307,    -1,
     307,   240,   307,    -1,   307,   239,   307,    -1,   307,   238,
     307,    -1,   307,   237,   307,    -1,   249,   307,    -1,   248,
     307,    -1,   254,   307,    -1,   257,   307,   258,    -1,   452,
      -1,   450,   315,   317,    -1,     5,   388,    -1,   388,    -1,
     388,   315,    -1,    -1,   123,   311,   259,   305,   260,    -1,
      -1,   130,   312,   259,   305,   267,     3,   260,    -1,    -1,
      61,   259,     5,   259,   313,   305,   260,   260,   265,   451,
     266,    -1,    62,   259,     5,   260,   265,   451,   267,   451,
     266,    -1,    56,   259,   388,   260,    -1,    58,   259,   388,
     260,    -1,    -1,    57,   314,   259,   305,   267,   284,   260,
      -1,   242,     5,   243,   259,   305,   260,    -1,   263,     5,
      -1,   263,   214,    -1,   263,   144,    -1,   263,     3,    -1,
     310,   262,     3,    -1,   262,     3,    -1,   310,   264,   451,
      -1,   259,   261,   260,    -1,   259,   260,    -1,   259,   316,
     260,    -1,   307,    -1,   316,   267,   307,    -1,    -1,   265,
     454,   266,    -1,   265,    70,   259,   284,   260,   266,    -1,
      -1,   318,   265,   319,   266,    -1,    -1,   319,   320,    -1,
      97,     5,     7,    -1,    83,   265,   321,   266,    -1,    -1,
     321,   265,   322,   266,    -1,    -1,   322,   323,    -1,    70,
     284,     7,    -1,    70,    65,     7,    -1,    82,     5,   317,
       7,    -1,    -1,   324,   265,   325,   266,    -1,    -1,   325,
     326,    -1,    97,     5,     7,    -1,    89,   301,     7,    -1,
      83,   265,   327,   266,    -1,    -1,   327,   265,   328,   266,
      -1,    -1,   328,   329,    -1,    87,     5,     7,    -1,    88,
       5,     7,    -1,    83,   265,   330,   266,    -1,    -1,   330,
     265,   331,   266,    -1,    -1,   331,   332,    -1,    90,     5,
       7,    -1,    91,   451,     7,    -1,    92,   451,     7,    -1,
      93,   451,     7,    -1,    94,   451,     7,    -1,    95,   451,
       7,    -1,    -1,   333,   334,    -1,   265,   335,   266,    -1,
     447,    -1,    -1,   335,   336,    -1,    97,   457,     7,    -1,
      97,     5,   295,     7,    -1,    87,     5,     7,    -1,    83,
     265,   337,   266,    -1,    83,     5,   265,   337,   266,    -1,
      -1,   337,   265,   338,   266,    -1,   337,   447,    -1,    -1,
     338,   339,    -1,    87,     5,     7,    -1,    70,   284,     7,
      -1,    71,   284,     7,    -1,    77,   301,     7,    -1,    76,
     301,     7,    -1,    81,   457,     7,    -1,    78,   265,   452,
     294,   452,   266,     7,    -1,    72,   284,     7,    -1,    73,
     284,     7,    -1,   100,   301,     7,    -1,    75,   301,     7,
      -1,    74,   301,     7,    -1,   100,   259,   301,   267,   301,
     260,     7,    -1,    75,   259,   301,   267,   301,   260,     7,
      -1,    74,   259,   301,   267,   301,   260,     7,    -1,    -1,
     340,   341,    -1,   265,   342,   266,    -1,   447,    -1,    -1,
     342,   343,    -1,   342,   447,    -1,    97,   457,     7,    -1,
      97,     5,   295,     7,    -1,    87,     5,     7,    -1,    98,
     265,   344,   266,    -1,   106,   265,   350,   266,    -1,   108,
     265,   357,   266,    -1,    69,   265,   360,   266,    -1,    -1,
     344,   265,   345,   266,    -1,   344,   447,    -1,    -1,   345,
     346,    -1,    97,     5,     7,    -1,    99,     5,     7,    -1,
      99,     5,   295,     7,    -1,   100,     5,   347,     7,    -1,
     101,   265,     5,   294,     5,   266,     7,    -1,   102,   303,
       7,    -1,   103,   303,     7,    -1,   104,   284,     7,    -1,
     105,   284,     7,    -1,    -1,    -1,    -1,   265,   113,     5,
       7,   112,     5,   295,     7,   348,    63,   285,     7,   349,
     133,     5,   296,     7,   266,    -1,    -1,   350,   265,   351,
     266,    -1,    -1,   351,   352,    -1,    97,     5,     7,    -1,
     107,   353,     7,    -1,    99,   355,     7,    -1,     5,    -1,
     265,   354,   266,    -1,    -1,   354,   294,     5,    -1,     5,
      -1,   265,   356,   266,    -1,    -1,   356,   294,     5,    -1,
      -1,   357,   265,   358,   266,    -1,   357,   447,    -1,    -1,
     358,   359,    -1,    97,   457,     7,    -1,    87,     5,     7,
      -1,    99,     5,     7,    -1,    -1,   360,   265,   361,   266,
      -1,   360,   447,    -1,    -1,   361,   362,    -1,    99,     5,
       7,    -1,   109,   286,     7,    -1,   110,   289,     7,    -1,
     111,   457,     7,    -1,    -1,   363,   364,    -1,   265,   365,
     266,    -1,   447,    -1,    -1,   365,   366,    -1,    97,   457,
       7,    -1,    97,     5,   295,     7,    -1,    87,     5,     7,
      -1,   113,   265,   367,   266,    -1,   117,   265,   373,   266,
      -1,    -1,   367,   265,   368,   266,    -1,   367,   447,    -1,
      -1,   368,   369,    -1,    97,   457,     7,    -1,    87,   108,
       7,    -1,    87,   118,     7,    -1,    87,     5,     7,    -1,
     187,   453,     7,    -1,    -1,   114,   457,   370,   372,     7,
      -1,   115,   451,     7,    -1,    -1,   259,   371,   305,   260,
       7,    -1,   131,   284,     7,    -1,    84,     5,     7,    -1,
      85,     5,     7,    -1,    82,     5,     7,    -1,   116,     3,
       7,    -1,    -1,   259,   457,   260,    -1,    -1,   373,   374,
      -1,   373,   447,    -1,   118,   265,   379,   266,    -1,   119,
     265,   379,   266,    -1,   120,   265,   383,   266,    -1,   121,
     265,   375,   266,    -1,    -1,   375,   376,    -1,    87,     5,
       7,    -1,   111,     5,     7,    -1,   265,   377,   266,    -1,
      -1,   377,   378,    -1,    79,   388,     7,    -1,    80,   388,
       7,    -1,   117,   388,     7,    -1,   131,   284,     7,    -1,
      -1,   379,   380,    -1,    -1,    -1,   387,   259,   381,   305,
     382,   267,   305,   260,     7,    -1,   131,   284,     7,    -1,
      82,     5,     7,    -1,    84,     5,     7,    -1,   132,     7,
      -1,    85,     5,     7,    -1,    86,   259,     3,   260,     7,
      -1,    -1,   383,   384,    -1,   131,   284,     7,    -1,    -1,
      -1,   387,   259,   385,   305,   386,   267,   388,   260,     7,
      -1,    -1,   123,    -1,   124,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   265,     5,   457,   266,
      -1,   265,   457,   266,    -1,    -1,   389,   390,    -1,   265,
     391,   266,    -1,   447,    -1,    -1,   391,   392,    -1,    97,
     457,     7,    -1,    97,     5,   295,     7,    -1,   134,   265,
     394,   266,    -1,    -1,   141,   393,   265,   401,   266,    -1,
     447,    -1,    -1,   394,   265,   395,   266,    -1,   394,   447,
      -1,    -1,   395,   396,    -1,    97,   457,     7,    -1,    87,
       5,     7,    -1,   135,   397,     7,    -1,   136,   458,     7,
      -1,   139,   399,     7,    -1,   140,   457,     7,    -1,   137,
     453,     7,    -1,   138,   458,     7,    -1,   447,    -1,   457,
      -1,   265,   398,   266,    -1,    -1,   398,   294,   457,    -1,
     457,    -1,   265,   400,   266,    -1,    -1,   400,   294,   457,
      -1,    -1,   401,   402,    -1,     5,   457,     7,    -1,   143,
     301,     7,    -1,   156,   265,   408,   266,    -1,   160,   265,
     410,   266,    -1,   163,   265,   412,   266,    -1,   166,   265,
     414,   266,    -1,     5,   259,   457,   260,     7,    -1,   143,
     259,   301,   260,     7,    -1,   154,     7,    -1,    16,   259,
     301,   260,   265,   401,   266,    -1,    16,   259,   301,   260,
     265,   401,   266,    17,   265,   401,   266,    -1,   145,   259,
     457,   267,   301,   260,     7,    -1,   172,   259,   457,   267,
     301,   267,   301,   267,   301,   267,   301,   260,     7,    -1,
     172,   259,   457,   267,   301,   267,   301,   267,   301,   260,
       7,    -1,   172,   259,   457,   267,   301,   267,   301,   260,
       7,    -1,   173,   259,   457,   267,   453,   260,     7,    -1,
     174,   259,   457,   267,   453,   260,     7,    -1,   152,   259,
     457,   267,   301,   260,     7,    -1,   153,   259,   457,   267,
     284,   267,   457,   260,     7,    -1,   146,   259,   457,   267,
     457,   267,   453,   260,     7,    -1,   147,   259,   457,   267,
     457,   267,   451,   260,     7,    -1,   148,   259,   457,   267,
     451,   267,   453,   267,   451,   260,     7,    -1,   149,   259,
     457,   267,   451,   267,   451,   267,   451,   260,     7,    -1,
     150,   259,   457,   267,   451,   267,   451,   267,   451,   260,
       7,    -1,   155,   259,   301,   260,     7,    -1,   151,   259,
     457,   267,   457,   267,   457,   267,   451,   267,   453,   267,
     451,   267,   451,   260,     7,    -1,   156,   259,   451,   267,
     451,   267,   301,   267,   301,   260,   265,   401,   266,    -1,
     160,   259,   451,   267,   451,   267,   301,   267,   451,   267,
     451,   260,   265,   401,   266,    -1,   163,   259,   451,   267,
     451,   267,   301,   260,   265,   401,   266,    -1,   163,   259,
     451,   267,   451,   267,   301,   267,   451,   260,   265,   401,
     266,    -1,    -1,   195,   403,   259,   405,   406,   260,     7,
      -1,    -1,   198,   404,   259,   405,   406,   260,     7,    -1,
     169,   259,   284,   267,   301,   260,     7,    -1,   169,   259,
     284,   267,   301,   267,   451,   267,   301,   260,     7,    -1,
     190,   259,   457,   260,     7,    -1,   171,   259,   458,   260,
       7,    -1,   175,   259,   457,   267,   453,   267,   451,   260,
       7,    -1,   176,   259,   457,   267,   451,   267,   458,   260,
       7,    -1,   177,   259,   457,   267,   453,   267,   458,   260,
       7,    -1,   178,   265,   457,   266,     7,    -1,   179,   265,
     457,   266,     7,    -1,   185,   265,   457,   267,   284,   267,
     458,   267,   301,   266,     7,    -1,   185,   265,   457,   267,
     284,   267,   458,   266,     7,    -1,   180,   259,   457,   267,
     457,   267,   451,   267,   451,   260,   265,   401,   266,     7,
      -1,   181,   259,   457,   267,   457,   267,   451,   267,   451,
     260,   265,   401,   266,     7,    -1,   182,   259,   457,   267,
     451,   260,     7,    -1,   186,   265,     5,   267,     5,   267,
     136,   458,   267,   451,   266,     7,    -1,   186,   265,     5,
     267,     5,   267,   136,   458,   266,     7,    -1,   186,   265,
       5,   267,     5,   266,     7,    -1,   183,   259,   457,   267,
     457,   260,     7,    -1,   184,   259,   457,   267,   457,   260,
       7,    -1,   447,    -1,   303,    -1,   457,    -1,    -1,   406,
     407,    -1,   267,   210,   458,    -1,   267,   214,   453,    -1,
     267,   453,    -1,    -1,   408,   409,    -1,   157,   451,     7,
      -1,   158,   451,     7,    -1,   144,   301,     7,    -1,   159,
     301,     7,    -1,   141,   265,   401,   266,    -1,    -1,   410,
     411,    -1,   157,   451,     7,    -1,   158,   451,     7,    -1,
     144,   301,     7,    -1,   161,   451,     7,    -1,   162,   451,
       7,    -1,   141,   265,   401,   266,    -1,    -1,   412,   413,
      -1,   164,   451,     7,    -1,    89,   451,     7,    -1,   165,
     301,     7,    -1,    19,   451,     7,    -1,   141,   265,   401,
     266,    -1,    -1,   414,   415,    -1,   164,   451,     7,    -1,
     167,   451,     7,    -1,    89,   451,     7,    -1,    19,   451,
       7,    -1,   134,   457,     7,    -1,   168,   265,   416,   266,
      -1,   141,   265,   401,   266,    -1,   142,   265,   401,   266,
      -1,    -1,   416,   265,   417,   266,    -1,    -1,   417,   418,
      -1,    87,     5,     7,    -1,   113,     5,     7,    -1,   131,
     284,     7,    -1,    89,   451,     7,    -1,   100,   301,     7,
      -1,    19,     5,     7,    -1,    -1,   419,   420,    -1,   265,
     421,   266,    -1,   447,    -1,    -1,   421,   422,    -1,    97,
     457,     7,    -1,    97,     5,   295,     7,    -1,   135,   457,
       7,    -1,   189,   457,     7,    -1,   113,   265,   423,   266,
      -1,    -1,   423,   265,   424,   266,    -1,   423,   447,    -1,
      -1,   424,   425,    -1,    97,   457,     7,    -1,    76,   265,
     426,   266,    -1,    -1,   426,   118,   265,   427,   266,    -1,
     426,     5,   265,   427,   266,    -1,   426,   447,    -1,    -1,
     427,   428,    -1,    -1,   387,   259,   429,   305,   260,     7,
      -1,    87,     5,     7,    -1,   131,   284,     7,    -1,    82,
       5,     7,    -1,    84,     5,     7,    -1,    -1,   430,   431,
      -1,   265,   432,   266,    -1,   447,    -1,    -1,   432,   433,
      -1,    97,   457,     7,    -1,   191,   457,     7,    -1,   216,
       5,     7,    -1,   193,   458,     7,    -1,   141,   265,   436,
     266,    -1,    -1,   190,   457,   192,   457,   435,   265,   436,
     266,    -1,    -1,    -1,   436,   437,   438,    -1,   194,   259,
     440,   443,   444,   260,     7,    -1,   195,   259,   440,   443,
     444,   260,     7,    -1,   195,   259,     6,   267,   301,   444,
     260,     7,    -1,   195,   259,     6,   267,   233,   259,   458,
     260,   444,   260,     7,    -1,   197,   259,     6,   444,   260,
       7,    -1,    -1,   196,   259,   284,   439,   267,   131,   284,
     444,   260,     7,    -1,   447,    -1,   457,   442,   267,    -1,
     457,   442,   441,     5,   442,   267,    -1,   250,    -1,   251,
      -1,   248,    -1,   249,    -1,    -1,   259,   284,   260,    -1,
     200,    -1,   201,   284,    -1,   202,   284,    -1,   204,   265,
     265,   454,   266,   265,   454,   266,   265,   454,   266,   266,
      -1,   203,   284,    -1,   203,   265,   301,   267,   301,   267,
     301,   266,   265,   453,   267,   453,   267,   453,   266,    -1,
     205,   265,   454,   266,    -1,   206,   265,   265,   454,   266,
     265,   454,   266,   266,   265,   451,   266,    -1,   207,   265,
     265,   454,   266,   265,   454,   266,   265,   454,   266,   266,
     265,   451,   267,   451,   266,    -1,   208,   265,   265,   454,
     266,   265,   454,   266,   265,   454,   266,   265,   454,   266,
     266,   265,   451,   267,   451,   267,   451,   266,    -1,   201,
     284,   209,     5,   265,   451,   267,   451,   266,   265,   451,
     266,    -1,    -1,   444,   445,    -1,   267,   210,   458,    -1,
     267,   210,   243,   458,    -1,   267,   210,   244,   458,    -1,
     267,   211,   451,    -1,   267,   219,    -1,   267,   220,    -1,
     267,   215,   451,    -1,   267,   216,     5,    -1,   267,   217,
     446,    -1,   267,   218,   446,    -1,   267,   216,   446,    -1,
     267,   213,    -1,   267,   212,   451,    -1,   267,   214,   453,
      -1,   267,   199,     5,    -1,   267,   222,     5,    -1,   267,
     221,   451,    -1,   267,    76,   453,    -1,   267,   223,   451,
      -1,   267,   223,   265,   454,   266,    -1,   267,   224,    -1,
     267,   225,    -1,   267,   137,   453,    -1,   267,   169,   265,
     301,   267,   301,   267,   301,   266,    -1,   267,   226,   303,
      -1,   267,   227,    -1,   267,   227,   265,   451,   267,   451,
     267,   451,   266,    -1,   267,   228,    -1,   267,   228,   265,
     451,   267,   451,   267,   451,   266,    -1,   267,   229,    -1,
     267,   229,   265,   451,   267,   451,   267,   451,   266,    -1,
     267,   230,   265,   454,   266,    -1,   267,   231,     3,    -1,
     267,   232,    -1,    -1,   446,     6,    -1,    14,   257,   451,
       8,   451,   258,    -1,    14,   257,   451,     8,   451,     8,
     451,   258,    -1,    14,     5,   131,   265,   451,     8,   451,
     266,    -1,    14,     5,   131,   265,   451,     8,   451,     8,
     451,   266,    -1,    15,    -1,    16,   257,   451,   258,    -1,
      18,    -1,   448,    -1,    30,   259,   449,   260,     7,    -1,
     457,   235,   453,     7,    -1,   457,   235,     6,     7,    -1,
     457,   235,   233,   259,   458,   260,     7,    -1,   457,   235,
     459,     7,    -1,   457,   235,    29,   259,   458,   260,     7,
      -1,    11,   257,     6,   258,     7,    -1,    11,   457,     7,
      -1,    11,   262,     7,    -1,    11,   257,     6,   267,   454,
     258,     7,    -1,    12,   257,   457,   258,     7,    -1,    12,
     257,   457,   258,   259,   451,   260,     7,    -1,    13,     7,
      -1,    -1,   449,   294,   457,    -1,   449,   294,   457,   265,
     451,   266,    -1,   449,   294,   457,   235,   451,    -1,   449,
     294,   457,   235,     6,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,   457,    -1,   452,    -1,   257,
     451,   258,    -1,   249,   451,    -1,   254,   451,    -1,   451,
     249,   451,    -1,   451,   248,   451,    -1,   451,   250,   451,
      -1,   451,   251,   451,    -1,   451,   252,   451,    -1,   451,
     256,   451,    -1,   451,   242,   451,    -1,   451,   243,   451,
      -1,   451,   247,   451,    -1,   451,   246,   451,    -1,   451,
     241,   451,    -1,   451,   240,   451,    -1,   451,   238,   451,
      -1,   451,   237,   451,    -1,    36,   259,   451,   260,    -1,
      37,   259,   451,   260,    -1,    38,   259,   451,   260,    -1,
      39,   259,   451,   260,    -1,    40,   259,   451,   260,    -1,
      41,   259,   451,   260,    -1,    42,   259,   451,   260,    -1,
      43,   259,   451,   260,    -1,    44,   259,   451,   260,    -1,
      45,   259,   451,   260,    -1,    46,   259,   451,   267,   451,
     260,    -1,    47,   259,   451,   260,    -1,    48,   259,   451,
     260,    -1,    49,   259,   451,   260,    -1,    50,   259,   451,
     260,    -1,    51,   259,   451,   260,    -1,    52,   259,   451,
     260,    -1,    53,   259,   451,   267,   451,   260,    -1,    54,
     259,   451,   267,   451,   260,    -1,    55,   259,   451,   267,
     451,   260,    -1,   451,   236,   451,     8,   451,    -1,   451,
     262,    -1,     4,    -1,     3,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,   457,    -1,    -1,   451,
      -1,   455,    -1,   265,   454,   266,    -1,   451,    -1,   455,
      -1,   454,   267,   451,    -1,   454,   267,   455,    -1,   451,
       8,   451,    -1,   451,     8,   451,     8,   451,    -1,     5,
     265,   266,    -1,     5,   265,   454,   266,    -1,    25,   259,
       5,   260,    -1,    26,   259,     5,   267,     5,   260,    -1,
      27,   259,   451,   267,   451,   267,   451,   260,    -1,    28,
     259,   451,   267,   451,   267,   451,   260,    -1,     5,   269,
     265,   451,   266,    -1,   456,   269,   265,   451,   266,    -1,
       5,    -1,   456,    -1,     6,    -1,   457,    -1,   459,    -1,
      10,   257,   458,   258,    -1,    10,   257,   458,   267,   454,
     258,    -1,   234,    -1,     9,   259,   458,   267,   458,   260,
      -1
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
     825,   829,   839,   850,   865,   886,   886,   891,   897,   898,
     903,   911,   914,   919,   921,   941,   985,   989,   992,  1002,
    1025,  1031,  1038,  1038,  1045,  1053,  1057,  1063,  1066,  1073,
    1073,  1086,  1089,  1102,  1088,  1130,  1136,  1142,  1148,  1154,
    1160,  1166,  1172,  1178,  1184,  1190,  1196,  1202,  1208,  1214,
    1220,  1226,  1233,  1239,  1241,  1252,  1254,  1260,  1334,  1368,
    1377,  1390,  1389,  1404,  1403,  1418,  1417,  1433,  1445,  1451,
    1458,  1457,  1488,  1514,  1527,  1533,  1540,  1546,  1553,  1560,
    1572,  1573,  1574,  1579,  1580,  1586,  1588,  1591,  1607,  1611,
    1619,  1621,  1627,  1632,  1640,  1642,  1650,  1653,  1659,  1662,
    1665,  1704,  1709,  1717,  1723,  1729,  1736,  1739,  1747,  1749,
    1757,  1762,  1768,  1778,  1788,  1796,  1798,  1806,  1815,  1821,
    1869,  1872,  1875,  1878,  1881,  1893,  1897,  1902,  1907,  1913,
    1919,  1925,  1932,  1940,  1949,  1952,  1971,  1975,  1980,  1990,
    1997,  2003,  2013,  2018,  2024,  2029,  2037,  2045,  2054,  2072,
    2081,  2089,  2097,  2107,  2117,  2127,  2148,  2153,  2158,  2163,
    2170,  2175,  2177,  2183,  2190,  2198,  2207,  2210,  2213,  2216,
    2224,  2229,  2246,  2256,  2270,  2276,  2279,  2284,  2289,  2303,
    2323,  2328,  2333,  2338,  2367,  2373,  2377,  2371,  2451,  2456,
    2466,  2470,  2476,  2483,  2486,  2493,  2509,  2516,  2518,  2537,
    2549,  2557,  2561,  2577,  2582,  2588,  2598,  2603,  2609,  2616,
    2627,  2642,  2646,  2683,  2693,  2702,  2708,  2741,  2744,  2747,
    2763,  2767,  2772,  2777,  2784,  2788,  2794,  2801,  2809,  2819,
    2821,  2828,  2832,  2837,  2844,  2860,  2866,  2869,  2873,  2876,
    2886,  2891,  2890,  2922,  2928,  2927,  3244,  3249,  3258,  3267,
    3276,  3281,  3284,  3325,  3329,  3334,  3343,  3346,  3349,  3352,
    3364,  3369,  3374,  3384,  3394,  3409,  3415,  3420,  3422,  3424,
    3426,  3435,  3453,  3460,  3468,  3459,  3600,  3605,  3614,  3623,
    3628,  3637,  3649,  3663,  3677,  3683,  3691,  3682,  3763,  3764,
    3765,  3766,  3767,  3768,  3769,  3770,  3776,  3797,  3822,  3826,
    3831,  3836,  3843,  3848,  3854,  3861,  3869,  3873,  3872,  3877,
    3883,  3887,  3892,  3902,  3915,  3921,  3924,  3933,  3936,  3941,
    3952,  3957,  3962,  3967,  3973,  3982,  3990,  3992,  4004,  4014,
    4021,  4023,  4036,  4043,  4056,  4078,  4085,  4091,  4097,  4103,
    4111,  4133,  4140,  4146,  4157,  4168,  4181,  4196,  4211,  4226,
    4246,  4267,  4279,  4299,  4316,  4335,  4356,  4370,  4384,  4391,
    4425,  4438,  4452,  4465,  4479,  4478,  4488,  4487,  4496,  4507,
    4519,  4529,  4537,  4550,  4563,  4577,  4587,  4597,  4611,  4625,
    4643,  4662,  4673,  4688,  4703,  4718,  4733,  4748,  4759,  4764,
    4775,  4780,  4784,  4787,  4797,  4814,  4823,  4829,  4833,  4837,
    4841,  4846,  4858,  4868,  4874,  4878,  4882,  4886,  4890,  4895,
    4907,  4916,  4921,  4925,  4929,  4933,  4937,  4949,  4961,  4966,
    4970,  4974,  4978,  4983,  4993,  4999,  5005,  5016,  5018,  5024,
    5036,  5041,  5051,  5080,  5083,  5086,  5094,  5112,  5118,  5123,
    5128,  5133,  5141,  5145,  5152,  5160,  5173,  5178,  5185,  5187,
    5190,  5197,  5202,  5207,  5210,  5217,  5221,  5227,  5239,  5245,
    5254,  5259,  5258,  5293,  5304,  5309,  5318,  5336,  5342,  5347,
    5350,  5355,  5362,  5366,  5373,  5385,  5396,  5401,  5408,  5407,
    5435,  5438,  5437,  5454,  5459,  5464,  5473,  5482,  5492,  5491,
    5502,  5510,  5522,  5546,  5547,  5548,  5549,  5555,  5556,  5562,
    5568,  5575,  5582,  5606,  5613,  5625,  5638,  5658,  5684,  5717,
    5739,  5770,  5774,  5788,  5802,  5816,  5820,  5824,  5828,  5832,
    5842,  5847,  5852,  5872,  5876,  5883,  5893,  5902,  5911,  5918,
    5926,  5930,  5939,  5943,  5947,  5955,  5961,  5965,  5973,  5980,
    5988,  5995,  6003,  6010,  6018,  6022,  6032,  6037,  6087,  6102,
    6118,  6138,  6158,  6196,  6200,  6204,  6214,  6216,  6231,  6237,
    6243,  6249,  6265,  6270,  6286,  6291,  6303,  6313,  6327,  6350,
    6353,  6359,  6373,  6379,  6390,  6391,  6392,  6393,  6394,  6395,
    6396,  6397,  6398,  6399,  6400,  6401,  6402,  6403,  6404,  6405,
    6406,  6407,  6408,  6409,  6410,  6414,  6415,  6416,  6417,  6418,
    6419,  6420,  6421,  6422,  6423,  6424,  6425,  6426,  6427,  6428,
    6429,  6430,  6431,  6432,  6433,  6434,  6435,  6436,  6437,  6438,
    6439,  6440,  6441,  6442,  6443,  6444,  6445,  6446,  6447,  6448,
    6449,  6450,  6451,  6453,  6455,  6460,  6461,  6462,  6463,  6464,
    6465,  6466,  6467,  6486,  6488,  6494,  6497,  6504,  6510,  6513,
    6516,  6528,  6534,  6545,  6561,  6583,  6598,  6636,  6644,  6656,
    6664,  6678,  6681,  6688,  6691,  6706,  6711,  6716,  6735,  6745
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
     293,   293,   293,   293,   293,   294,   294,   295,   296,   296,
     297,   298,   298,   299,   299,   299,   299,   300,   300,   300,
     301,   301,   302,   301,   301,   303,   303,   304,   304,   306,
     305,   307,   308,   309,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   310,   310,   310,   310,   310,
     310,   311,   310,   312,   310,   313,   310,   310,   310,   310,
     314,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     315,   315,   315,   316,   316,   317,   317,   317,   318,   318,
     319,   319,   320,   320,   321,   321,   322,   322,   323,   323,
     323,   324,   324,   325,   325,   326,   326,   326,   327,   327,
     328,   328,   329,   329,   329,   330,   330,   331,   331,   332,
     332,   332,   332,   332,   332,   333,   333,   334,   334,   335,
     335,   336,   336,   336,   336,   336,   337,   337,   337,   338,
     338,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   340,   340,   341,   341,
     342,   342,   342,   343,   343,   343,   343,   343,   343,   343,
     344,   344,   344,   345,   345,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   347,   348,   349,   347,   350,   350,
     351,   351,   352,   352,   352,   353,   353,   354,   354,   355,
     355,   356,   356,   357,   357,   357,   358,   358,   359,   359,
     359,   360,   360,   360,   361,   361,   362,   362,   362,   362,
     363,   363,   364,   364,   365,   365,   366,   366,   366,   366,
     366,   367,   367,   367,   368,   368,   369,   369,   369,   369,
     369,   370,   369,   369,   371,   369,   369,   369,   369,   369,
     369,   372,   372,   373,   373,   373,   374,   374,   374,   374,
     375,   375,   376,   376,   376,   377,   377,   378,   378,   378,
     378,   379,   379,   381,   382,   380,   380,   380,   380,   380,
     380,   380,   383,   383,   384,   385,   386,   384,   387,   387,
     387,   387,   387,   387,   387,   387,   388,   388,   389,   389,
     390,   390,   391,   391,   392,   392,   392,   393,   392,   392,
     394,   394,   394,   395,   395,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   397,   397,   398,   398,   399,   399,
     400,   400,   401,   401,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   403,   402,   404,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   405,   405,
     406,   406,   407,   407,   407,   408,   408,   409,   409,   409,
     409,   409,   410,   410,   411,   411,   411,   411,   411,   411,
     412,   412,   413,   413,   413,   413,   413,   414,   414,   415,
     415,   415,   415,   415,   415,   415,   415,   416,   416,   417,
     417,   418,   418,   418,   418,   418,   418,   419,   419,   420,
     420,   421,   421,   422,   422,   422,   422,   422,   423,   423,
     423,   424,   424,   425,   425,   426,   426,   426,   426,   427,
     427,   429,   428,   428,   428,   428,   428,   430,   430,   431,
     431,   432,   432,   433,   433,   433,   433,   433,   435,   434,
     436,   437,   436,   438,   438,   438,   438,   438,   439,   438,
     438,   440,   440,   441,   441,   441,   441,   442,   442,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     444,   444,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   446,   446,   447,   447,
     447,   447,   447,   447,   447,   447,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   449,
     449,   449,   449,   449,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   452,   452,   452,   452,   452,
     452,   452,   452,   453,   453,   453,   453,   454,   454,   454,
     454,   455,   455,   455,   455,   455,   455,   455,   455,   456,
     456,   457,   457,   458,   458,   458,   458,   458,   458,   459
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
       3,     2,     3,     1,     3,     0,     3,     6,     0,     4,
       0,     2,     3,     4,     0,     4,     0,     2,     3,     3,
       4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
       0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     0,     2,     3,     1,     0,
       2,     3,     4,     3,     4,     5,     0,     4,     2,     0,
       2,     3,     3,     3,     3,     3,     3,     7,     3,     3,
       3,     3,     3,     7,     7,     7,     0,     2,     3,     1,
       0,     2,     2,     3,     4,     3,     4,     4,     4,     4,
       0,     4,     2,     0,     2,     3,     3,     4,     4,     7,
       3,     3,     3,     3,     0,     0,     0,    18,     0,     4,
       0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
       3,     0,     3,     0,     4,     2,     0,     2,     3,     3,
       3,     0,     4,     2,     0,     2,     3,     3,     3,     3,
       0,     2,     3,     1,     0,     2,     3,     4,     3,     4,
       4,     0,     4,     2,     0,     2,     3,     3,     3,     3,
       3,     0,     5,     3,     0,     5,     3,     3,     3,     3,
       3,     0,     3,     0,     2,     2,     4,     4,     4,     4,
       0,     2,     3,     3,     3,     0,     2,     3,     3,     3,
       3,     0,     2,     0,     0,     9,     3,     3,     3,     2,
       3,     5,     0,     2,     3,     0,     0,     9,     0,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     0,     2,
       3,     1,     0,     2,     3,     4,     4,     0,     5,     1,
       0,     4,     2,     0,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     3,     0,     3,     1,     3,
       0,     3,     0,     2,     3,     3,     4,     4,     4,     4,
       5,     5,     2,     7,    11,     7,    13,    11,     9,     7,
       7,     7,     9,     9,     9,    11,    11,    11,     5,    17,
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
       6,     6,     6,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     3,     1,     1,     3,
       3,     3,     5,     3,     4,     4,     6,     8,     8,     5,
       5,     1,     1,     1,     1,     1,     4,     6,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     4,     1,     5,     0,   741,     0,     0,     0,
       0,   632,     0,   634,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    17,    18,   635,   742,     0,     0,     0,     0,     0,
       0,   648,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   743,     0,     0,   748,   744,
      19,   745,   649,    41,   205,   168,   181,   236,    91,   300,
     378,   517,   547,     0,     0,   723,     0,     0,   644,   643,
       0,     0,   716,   715,   717,   718,   719,   720,   721,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   722,     0,    27,    26,    25,    23,
      24,    22,    40,    30,    32,    33,    34,    35,    31,    36,
      37,    38,    39,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   741,     0,
       0,     0,     0,     0,     0,     0,     0,   724,     0,   725,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   714,   633,     0,     0,     0,
      86,     0,   741,     0,     7,    42,    47,    49,     0,   209,
       9,   206,   208,   170,    10,   183,    11,   240,    12,   237,
     239,     0,     8,    92,    96,     0,   304,    13,   301,   303,
     382,    14,   379,   381,   521,    15,   518,   520,   551,    16,
     548,   550,   558,     0,     0,   638,     0,     0,     0,     0,
       0,     0,   727,     0,   728,     0,   637,   640,   739,   642,
       0,   646,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   676,     0,     0,   692,   691,   690,
     689,   685,   686,   688,   687,   680,   679,   681,   682,   683,
     684,     0,   746,     0,   636,   650,     0,     0,     0,    80,
     723,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,   740,   733,     0,     0,     0,     0,
       0,     0,     0,   726,     0,   731,     0,     0,     0,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,     0,
     704,   705,   706,   707,   708,   709,     0,     0,     0,     0,
     628,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   741,    59,     0,     0,     0,     0,     0,     0,     0,
       0,   207,   210,     0,     0,   169,   171,     0,   102,     0,
     182,   184,     0,     0,     0,     0,     0,     0,   238,   241,
     242,    85,   741,     0,    56,     0,    57,     0,     0,     0,
       0,   302,   305,     0,     0,   387,   380,   383,   389,     0,
       0,     0,     0,   519,   522,     0,     0,     0,     0,     0,
     549,   552,   560,   734,   735,     0,     0,     0,     0,     0,
     729,   730,     0,   645,     0,     0,     0,     0,     0,     0,
       0,   713,   749,   747,   653,   652,     0,     0,    90,    60,
       0,     0,     0,     0,    72,     0,    69,     0,    55,    67,
      79,    43,     0,     0,     0,     0,   216,     0,   741,     0,
     174,     0,   188,     0,     0,     0,     0,   109,     0,   291,
       0,   741,     0,   250,   268,   283,     0,     0,   102,     0,
       0,   741,     0,   311,   333,   741,     0,   390,     0,   741,
       0,   528,     0,     0,     0,   560,     0,     0,     0,   561,
       0,     0,     0,   641,   639,   732,   647,     0,   630,   703,
     710,   711,   712,   629,   651,    87,    45,    44,    46,    81,
       0,     0,    85,     0,    62,    53,    61,    48,     0,   216,
       0,   213,     0,     0,   211,     0,   172,     0,     0,     0,
       0,   186,   103,     0,   185,     0,   245,     0,   243,     0,
       0,     0,    93,    98,     0,   102,   308,     0,   306,     0,
       0,     0,   384,     0,   412,     0,   523,     0,   525,   526,
     553,   561,   554,   556,   555,   559,     0,   736,     0,     0,
       0,     0,     0,    75,    73,    68,     0,    74,    85,    50,
       0,   219,   214,   218,   212,   176,   173,   190,   187,     0,
       0,   104,   741,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,     0,   150,     0,     0,     0,     0,   141,
     143,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,   139,     0,   136,   722,   294,   249,   293,   244,   253,
     246,   252,   270,   247,   286,   248,   285,     0,    94,     0,
     307,   314,   309,   313,     0,     0,     0,     0,   310,   334,
     335,   385,   393,   386,   392,     0,   524,   531,   527,   530,
     557,     0,     0,     0,     0,   562,   570,     0,     0,   631,
       0,     0,     0,     0,     0,    70,     0,     0,     0,   215,
       0,     0,     0,   100,   101,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   132,   134,     0,   158,
     156,   153,   155,   154,   741,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   140,   165,     0,     0,
       0,     0,     0,    95,     0,   351,   351,   362,   340,     0,
     741,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   444,   446,   388,   413,
     467,     0,     0,     0,     0,     0,   737,   738,    82,    83,
      77,    76,    71,    54,    66,     0,     0,     0,     0,     0,
       0,     0,   102,   102,   102,   102,     0,     0,     0,   102,
     217,   220,     0,     0,   175,   177,     0,     0,     0,   189,
     191,     0,   109,     0,     0,     0,     0,   109,   109,     0,
     135,     0,   377,     0,   131,   130,   129,   128,   127,   123,
     124,   126,   125,   119,   120,   115,   118,   121,   116,   122,
     157,   159,   161,     0,   163,     0,     0,   137,     0,     0,
       0,     0,   292,   295,     0,     0,     0,     0,   105,   105,
       0,     0,   251,   254,     0,     0,     0,   269,   271,     0,
       0,     0,   284,   287,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   723,   324,   312,   315,   368,   368,
     368,     0,     0,     0,     0,     0,   723,     0,     0,     0,
     391,   394,   403,     0,     0,   102,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   102,     0,
     475,     0,   482,     0,   490,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   529,   532,
       0,   577,     0,     0,   568,   590,     0,     0,    65,    64,
       0,     0,     0,     0,     0,   102,     0,   102,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,   165,   195,
       0,     0,   148,     0,   149,     0,   145,     0,     0,     0,
     109,   376,     0,   160,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   264,     0,   102,     0,     0,     0,
       0,     0,   279,   281,     0,   275,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,     0,
       0,     0,     0,   109,     0,     0,     0,     0,   369,   370,
     371,   372,   373,   374,   375,     0,     0,   336,   352,     0,
     337,     0,   338,   363,     0,     0,     0,   345,   339,   341,
       0,     0,   406,     0,   404,     0,     0,     0,   410,     0,
     408,     0,     0,   414,     0,     0,   415,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   105,   535,     0,   579,     0,     0,     0,
       0,     0,     0,     0,     0,   590,     0,     0,   102,   590,
       0,     0,     0,    78,    51,   222,   223,   228,   229,     0,
     232,     0,   231,   225,   224,    85,   226,   221,     0,   230,
     179,   178,     0,     0,   192,   193,     0,     0,   109,     0,
     142,     0,     0,   113,   164,     0,   166,   296,   297,   298,
     299,   255,   256,     0,     0,     0,    85,   107,     0,   260,
     261,   262,   263,   272,    85,   274,    85,   273,   289,   288,
     290,   329,   327,   328,   319,   317,   318,   316,   331,   323,
     330,   326,   320,     0,     0,     0,     0,     0,     0,   359,
     353,     0,   365,     0,     0,     0,   396,   395,    85,   397,
     398,   401,   402,    85,   399,   400,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,   102,     0,     0,   102,   416,   476,     0,     0,   102,
       0,     0,     0,     0,   417,   483,     0,     0,     0,     0,
       0,   102,   418,   491,     0,     0,     0,     0,     0,     0,
       0,     0,   419,   498,   102,     0,   102,   723,   723,   723,
       0,   723,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   468,   470,   469,   470,     0,   533,   580,   581,
     102,   583,     0,     0,     0,     0,     0,     0,     0,   575,
     576,   573,   574,   571,     0,     0,   590,     0,     0,     0,
       0,   591,    84,     0,   102,   102,     0,   102,   180,   197,
     194,     0,   117,     0,     0,     0,   152,     0,     0,   257,
       0,   258,     0,   106,   102,   280,     0,   276,     0,     0,
       0,     0,   357,   358,   360,     0,   356,   109,   364,   109,
     342,   343,     0,     0,     0,     0,   344,   346,   405,     0,
     409,     0,   420,   412,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   438,     0,   412,     0,     0,     0,
       0,     0,   412,     0,     0,     0,     0,     0,     0,     0,
       0,   412,     0,     0,     0,     0,     0,   412,   412,     0,
       0,   507,     0,   451,     0,     0,     0,     0,     0,     0,
     455,   456,     0,     0,     0,     0,     0,     0,     0,   450,
       0,     0,   741,     0,   534,   538,     0,     0,     0,     0,
       0,     0,     0,     0,   578,   577,     0,     0,     0,     0,
     567,   723,   723,     0,     0,     0,     0,     0,   603,   723,
       0,   626,   626,   626,   596,   597,     0,     0,     0,   612,
     613,   105,   617,   619,   621,     0,     0,   625,     0,     0,
       0,     0,     0,     0,   151,     0,     0,   144,   114,     0,
       0,     0,   108,   282,   278,     0,   322,   325,     0,   354,
     366,     0,     0,     0,     0,   407,   411,     0,     0,   723,
       0,   723,     0,     0,     0,     0,     0,   102,     0,   479,
     477,   478,   480,   102,     0,   486,   484,   485,   487,   488,
     102,   495,   493,     0,   492,   494,   502,   501,   503,     0,
       0,   499,   500,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   723,   471,     0,   539,   539,     0,   102,     0,   585,
       0,     0,     0,   563,     0,     0,     0,   564,   590,   609,
     614,   102,   606,     0,     0,   592,   595,   604,   605,   598,
     599,   602,   600,   601,   608,   607,     0,   610,   616,     0,
       0,     0,     0,   624,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   198,     0,     0,   167,
       0,     0,   332,   361,     0,     0,   347,   348,   349,   350,
     423,   425,     0,     0,     0,     0,     0,     0,   431,     0,
       0,   481,     0,   489,     0,   496,   505,   506,   509,   504,
     448,     0,     0,   429,   430,     0,     0,     0,     0,     0,
     461,   465,   466,     0,   464,     0,   445,     0,   723,   474,
     447,   368,   368,     0,     0,     0,     0,     0,     0,   572,
     590,   565,     0,     0,   593,   594,   627,     0,     0,     0,
       0,     0,     0,   235,   234,   227,   233,     0,     0,     0,
       0,     0,     0,     0,   147,     0,   259,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,   102,     0,   102,     0,     0,     0,     0,     0,
       0,   102,     0,   472,   473,     0,     0,     0,     0,   537,
       0,   540,   536,     0,   102,     0,     0,     0,     0,     0,
       0,   102,   611,     0,     0,     0,   623,     0,   199,   200,
     201,   202,   203,   204,     0,     0,     0,     0,   412,   433,
     434,     0,     0,     0,     0,   432,     0,     0,   412,     0,
       0,     0,     0,   102,     0,     0,   508,   510,     0,   428,
       0,   452,   453,   454,     0,     0,   458,     0,     0,     0,
       0,     0,     0,     0,   541,     0,     0,     0,     0,     0,
       0,     0,   569,     0,     0,     0,     0,     0,   146,     0,
       0,     0,     0,     0,     0,     0,   723,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,   463,     0,   545,   546,   543,   544,   109,
       0,     0,     0,     0,     0,     0,   566,   102,     0,     0,
       0,     0,   265,   355,   367,   424,   435,   436,   437,     0,
     412,     0,   442,   412,   516,   511,   514,   515,   512,   513,
     449,   427,     0,   412,   412,   457,     0,     0,     0,   723,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,   615,   618,   620,   622,     0,
       0,   440,   412,   443,   426,     0,     0,   542,     0,   723,
       0,     0,     0,     0,     0,    88,     0,     0,   459,   460,
     589,     0,   582,   586,     0,     0,   266,     0,    58,     0,
     441,   723,     0,     0,     0,    89,     0,     0,     0,     0,
       0,   439,   584,     0,     0,    88,     0,     0,     0,   587,
       0,     0,     0,   267,     0,     0,     0,   588
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    29,    30,   146,   225,   226,
     738,  1393,   424,   628,   425,  2004,   395,   565,   736,   856,
     488,   562,   489,   390,   221,   327,  2018,   328,   151,   243,
     421,   506,   507,  1362,  1248,   582,   583,   679,   893,  1407,
     680,   752,   753,  1228,   747,   786,   915,   917,   148,   334,
     406,   575,   741,   875,   149,   335,   411,   577,   742,   880,
    1223,  1553,  1686,   147,   231,   333,   402,   570,   740,   871,
     150,   239,   336,   419,   589,   789,   933,  1245,  1969,  2024,
     590,   790,   938,  1087,  1256,  1084,  1254,   591,   791,   943,
     585,   788,   923,   152,   248,   339,   432,   599,   794,   957,
    1268,  1103,  1420,   600,   709,   961,  1129,  1285,  1437,   958,
    1118,  1427,  1694,   960,  1123,  1429,  1695,  1119,   681,   153,
     252,   340,   437,   528,   603,   799,   971,  1133,  1288,  1139,
    1293,   715,   839,  1014,  1015,  1363,  1500,  1632,  1158,  1316,
    1160,  1325,  1162,  1333,  1163,  1343,  1613,  1791,  1857,   154,
     256,   341,   444,   607,   841,  1019,  1366,  1741,  1811,  1919,
     155,   260,   342,   451,    31,   343,   539,   616,   725,  1200,
    1020,  1384,  1197,  1195,  1201,  1391,  1661,   840,    33,   145,
     682,   272,   123,   168,   273,   274,    34,   124,    70,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1417
static const yytype_int16 yypact[] =
{
   -1417,   110, -1417, -1417,   154,  4778,  -110,    66,   -86,   234,
      42, -1417,   -42, -1417,    86,   240,  1737,   155,    -9,    14,
      22,    24,    60,    65,    89,    94,    97,    99,    17, -1417,
   -1417, -1417, -1417, -1417,   108,    57,   137,   399,   400,   423,
     449, -1417,   334,  4634,  4634,   476, -1417,   484,   502,   507,
     510,   516, -1417,   519, -1417,   534,   548,   551,   568,   570,
     613,   616,   626,   637,   648, -1417,   307,   210, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417,   473,   385,  2469,  4634,  -175, -1417, -1417,
     413,   437, -1417, -1417, -1417, -1417, -1417, -1417, -1417,   445,
     454,   456,   464,   478,   495,   520,   531,   543,   561,   563,
     571,   593,   621,   644,   658,   660,   677,   678,   680,  4634,
    4634,  4634,  4056, -1417, -1417,  6081, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417,   155,   155,   -15,    52,   106,   -40,    72,
     335,   246,   624,   801,  1005,  1091,   449,  4634,   117,   720,
     681,   683,   688,   702,   708,   710,  4556,  4126,   728, -1417,
     739,  5568,   751,  4556,    43,  4634,  4634,  4634,  4634,  4634,
    4634,  4634,  4634,  4634,  4634,  4634,  4634,  4634,  4634,  4634,
    4634,  4634,  4634,  4634,  4634,  4634,   173,   173,  6104,  4634,
    4634,  4634,  4634,  4634,  4634,  4634,  4634,  4634,  4634,  4634,
    4634,  4634,  4634,  4634,  4634, -1417, -1417,   530,   -92,   800,
   -1417,   449,   363,   711, -1417, -1417, -1417, -1417,  -104, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417,   712, -1417, -1417, -1417,  -132, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417,  5595,  1114, -1417,   813,   823,  4634,  4634,
     155,   155,  4126,   204, -1417,  4634, -1417, -1417, -1417, -1417,
     -36, -1417,  4634,  4463,  6127,  6154,  6181,  6208,  6235,  6262,
    6289,  6316,  6343,  6370,  2516,  6397,  6424,  6451,  6478,  6505,
    6532,  4705,  4763,  4786, -1417,  3760,  4493,  2293,  1200,   837,
     837,   499,   499,   499,   499,   123,   123,   173,   173,   173,
     173,   155, -1417,  4556, -1417,   -72,  2214,   606,   656, -1417,
    2349,   672,  4634,    -3,     7,   189,  1026, -1417,    55,   344,
     706,   433,   512,   700, -1417, -1417,   222,   729,   740,  4809,
    4832,   753,   754, -1417,  4556,  4524,  1002,  6559,  4634, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,  4634,
   -1417, -1417, -1417, -1417, -1417, -1417,  4634,  4634,  4634,  4634,
   -1417,  4634,   762,   -35,  4609,  4634,  4634,  5622,    67,    67,
     116,   -16, -1417,    36,  1004,   765,    67,  6586,    38,  1021,
    1022, -1417, -1417,   763,  1025, -1417, -1417,   767,   266,  1028,
   -1417, -1417,   769,  1038,  1042,   783,   784,   786, -1417, -1417,
   -1417,   120,   -49,   817, -1417,   793, -1417,  1049,  1050,   792,
     794, -1417, -1417,  1053,   796, -1417, -1417, -1417, -1417,  1057,
     798,   449,   449, -1417, -1417,   449,   799,   449,   155,  1063,
   -1417, -1417, -1417, -1417, -1417,  1065,  4634,  4634,  1070,  1074,
    4126, -1417,  4634, -1417,  1075,  1655,  6613,  6640,  6667,  6694,
    6721,  7172, -1417, -1417, -1417,  7172,  5649,  5676, -1417, -1417,
    1087,  1090,  1093,   449,  1100,  4634, -1417,  4556, -1417, -1417,
   -1417, -1417,    23,  1094,   863,   846, -1417,  1105,   376,  1107,
   -1417,  1108, -1417,   861,   867,   872,  1120, -1417,  1121, -1417,
    1122,   376,  1123, -1417, -1417, -1417,  1124,  1130,   266,   901,
    1131,   376,  1136, -1417, -1417,   376,  1163, -1417,   915,   376,
    1174, -1417,  1178,  1180,  1183, -1417,  1193,  1194,  1197,   871,
     957,  4855,  4878, -1417, -1417,  7172, -1417,  4634, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,   -21,
    4634,  6744,   273,   322, -1417, -1417, -1417, -1417,  1151, -1417,
    1261, -1417,   962,  1212, -1417,   465, -1417,   468,  4634,  1220,
     977, -1417, -1417,  2108, -1417,  1292, -1417,  1221, -1417,  1325,
     487,  1361, -1417,   982,  1241,   266, -1417,  1244, -1417,  1462,
     224,  1245, -1417,  1488, -1417,  1246, -1417,  1518, -1417, -1417,
   -1417,   983, -1417, -1417, -1417, -1417,   727, -1417,  4634,  4634,
    5703,   989,  4634,  4578,  1248, -1417,    26, -1417,   143, -1417,
    1595, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,  6767,
     997, -1417,   387, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417,  1000, -1417,  1001,  1003,  1009,  1010, -1417,
   -1417,  1256,  2108,  2108,  2108,  2108,  1277,   183,  1276,  4380,
    -208,  1027,  1027, -1417,  1029, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417,  4634, -1417,  1280,
   -1417, -1417, -1417, -1417,  1033,  1034,  1036,  1044, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417,  1060, -1417, -1417, -1417, -1417,
   -1417,  1031,  1035,  1052,  1062, -1417, -1417,  6794,  6821, -1417,
    1058,  5730,  4634,  4634,    39, -1417,  1067,    20,  1066, -1417,
    1242,     3,   130, -1417, -1417, -1417,  1068,  1069,  1068,  2108,
    1288,  1327,  1076,  1086,  1103,  1078,  1078,  1078,  7199, -1417,
   -1417, -1417, -1417, -1417,    16,  1081, -1417,  2108,  2108,  2108,
    2108,  2108,  2108,  2108,  2108,  2108,  2108,  2108,  2108,  2108,
    2108,  2108,  2108,  1345,  4634,  2048, -1417,  1095,   494,   448,
     460,   -10,  5757, -1417,  1665, -1417, -1417, -1417, -1417,   434,
       8,  -129,   111,  1092,  1099,  1106,  1110,  1111,  1125,  1126,
    1127,  1129,  1352,  1133,    41,   179,   320,  1097,  1135,  1138,
    1139,  1140,  1141,  1144,  1145,  1146,  1102,  1116,  1147,  1148,
    1150,  1152,  1153,  1117,  1118,  1159, -1417, -1417, -1417, -1417,
   -1417,   -18,   449,   777,    70,  1358, -1417, -1417, -1417,  1154,
    7172,  4682, -1417, -1417, -1417,   449,    36,  1128,    70,    70,
      70,    70,   119,   134,   266,   266,  1155,   449,  1405,   260,
   -1417, -1417,    64,  1414, -1417, -1417,  1156,  1417,  1418, -1417,
   -1417,  1164, -1417,  1165,  1702,  1167,  1168, -1417, -1417,  1170,
   -1417,  1161, -1417,  2108,  3054,  2344,   946,   946,   946,   923,
     923,   923,   923,   536,   536,  1078,  1078,  1078,  1078,  1078,
   -1417, -1417, -1417,  1171,  4380,   160,  4502, -1417,  1427,   100,
    1428,   449, -1417, -1417,  1430,  1434,  1439,  1188,  1189,  1189,
      70,    70, -1417, -1417,  1453,    40,    44, -1417, -1417,  1454,
     449,  1455, -1417, -1417, -1417,  1456,  1458,  1460,    54,   449,
     449,  4634,  1463,    70,  2604, -1417, -1417, -1417,  2192,  2282,
     535,   211,  1464,   449,    46,   155,  2604,   155,    47,   449,
   -1417, -1417, -1417,   449,  1461,   266,   266,  1465,   449,   449,
     449,   449,   449,   449,   449,   449,   449, -1417,   266,  4634,
   -1417,  4634, -1417,  4634, -1417, -1417,    70,   155,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,  1466,   449,  1211,  1222,  1214,   449, -1417, -1417,
     749,  1225,  1218,   749, -1417, -1417,  1223,  4634, -1417, -1417,
      36,  1479,  1480,  1483,  1484,   266,  1487,   266,  1491,  1498,
    1502,   529,  1503,  1505,   266,  1506,  1510,  1512,  1095, -1417,
    1514,  1515, -1417,  1240, -1417,  2108, -1417,  1259,  1265,  1268,
   -1417, -1417,  1740, -1417, -1417,  2108,  1269,   538,  1530,  1531,
    1532,  1533,  1534,     9,  1281,  1537,   266,  1538,  1542,  1543,
    1544,  1545, -1417, -1417,  1546, -1417, -1417,  1547,  1549,  1552,
    1553,  1560,  1562,  1563,  1566,  1567,  1568,  1569, -1417,  1394,
    1571,  1575,  1577, -1417,  1582,  1583,  1587,  1334, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417,    70,  1588, -1417, -1417,  1335,
   -1417,    70, -1417, -1417,  1337,  1596,  1597, -1417, -1417, -1417,
    1605,  1607, -1417,  1610, -1417,  1616,  1617,  1621, -1417,  1622,
   -1417,  1626,  1343, -1417,  1378,  1379, -1417,  1380,  1384,  1385,
    1386,  1388,  1391,  1392,  1393,  1395,  1401,  4901,   652,  4924,
     770,  4947,   315,   317,  1397,  1406,  1398,  1400,  1403,  1404,
    1407,  1429,  1431,  1432,  1448,  1449,  1450,  1451,  1457,  1468,
    1469,  1412,    48,    48, -1417,  1666, -1417,    70,    70,     6,
    1472,  1473,  1476,  1477,  1478, -1417,    70,   458,    91, -1417,
    1489,   193,  1459,  7172, -1417, -1417, -1417, -1417, -1417,  1490,
   -1417,  1492, -1417, -1417, -1417,  1493, -1417, -1417,  1494, -1417,
   -1417, -1417,  1722,   559, -1417, -1417,    70,  3310, -1417,  4634,
   -1417,  1730,  1485, -1417,  4380,    70, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417,  1739,  1642,  1751,  1493, -1417,   566, -1417,
   -1417, -1417, -1417, -1417,   569, -1417,   577, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,  1504, -1417,
   -1417, -1417, -1417,  1507,  1758,  1763,  1764,  1769,  1766, -1417,
   -1417,  1767, -1417,  1770,  1771,   277, -1417, -1417,   579, -1417,
   -1417, -1417, -1417,   582, -1417, -1417,  1778,  1511,  1779,   266,
     449,   449,  4634,  4634,  4634,   449,   266,    70,  1780,  4634,
    1524,   266,  4634,  4634,   266, -1417, -1417,  4634,  1526,   266,
    4634,  4634,  4634,  4634, -1417, -1417,  4634,  4634,  4634,  1527,
    4634,   266, -1417, -1417,  4634,  4634,   449,  1528,  1529,  4634,
    4634,  1536, -1417, -1417,   266,  1788,   266,  2604,  2604,  2604,
    4634,  2604,  1790,  1791,   449,   449,  4634,   449,   449,    70,
    1794,  1795, -1417, -1417, -1417, -1417,  1550, -1417,  1598, -1417,
     266, -1417,  1539,  4556,  1540,  1548,  1555,   202,  1551, -1417,
   -1417, -1417, -1417, -1417,  1803,  1559, -1417,   206,  1678,  1815,
    4766, -1417, -1417,  1556,   266,   266,   529,   266, -1417, -1417,
   -1417,  1564, -1417,  1565,  4970,  1576, -1417,  2108,  1578, -1417,
    1805, -1417,  1822, -1417,   266, -1417,  1823, -1417,  1824,   449,
    1828,  1832, -1417, -1417, -1417,  1580, -1417, -1417, -1417, -1417,
   -1417, -1417,  1068,  1068,  1068,    70, -1417, -1417, -1417,   449,
   -1417,   449, -1417, -1417, -1417,  1581,  1579,  1584,  4993,  5016,
    5039,  1586,  1585,  1589, -1417,  5062, -1417,  1835,  1781,  1939,
    1836,  5085, -1417,  1837,  2185,  2431,  2448,  2694,  5108,  2717,
    2734, -1417,  2762,  1840,  2848,  2892,  1841, -1417, -1417,  3094,
    3453, -1417,   253, -1417,  1590,  1599,  1602,  1604,  5131,  1606,
   -1417, -1417,  1613,  1615,  6848,  1603,  1612,  1623,   591, -1417,
     255,   258,   447,  1601, -1417, -1417,  1826,  1632,  4556,   594,
    4556,  4556,  4556,  1848, -1417,  1225,   155,   268,  1857,    70,
   -1417,  2604,  2604,  1609,  1878,   147,  4634,  4634, -1417,  2604,
    4634,  1883, -1417, -1417, -1417, -1417,  4634,  1884,   643, -1417,
   -1417,  1189,  1635,  1643,  1644,  1645,  1909, -1417,  1651,  1654,
    1656,  1652,  1659,   321, -1417,  1662,  4634, -1417,  4380,  1657,
    1919,  1663, -1417, -1417, -1417,  1668, -1417, -1417,  1923, -1417,
   -1417,  1925,  1926,  1927,  1928, -1417, -1417,  2731,  1929,  2604,
    4634,  2604,  4634,  4634,   449,  1940,   449,   266,  3046, -1417,
   -1417, -1417, -1417,   266,  3237, -1417, -1417, -1417, -1417, -1417,
     266, -1417, -1417,  3426, -1417, -1417, -1417, -1417, -1417,  3480,
    3668, -1417, -1417,   598,  1952,  4634,   266,  1953,  1954,  4634,
     155,   155,  4634,  4634,  1956,  1957,  1958,   155,  1960,  1838,
    1965,  2525, -1417,  1966, -1417, -1417,  1710,   266,   599, -1417,
     602,   605,   608, -1417,  1727,  1735,  1990, -1417, -1417, -1417,
   -1417,   266, -1417,   155,   155, -1417,  7172,  7172, -1417,  7172,
   -1417,  1992,  1992,  1992,  7172, -1417,  4556,  7172, -1417,  4634,
    4634,  4634,  4556, -1417,    36,  1993,  1994,  1996,  1997,  2000,
    4634,  4634,  4634,  4634,  4634, -1417, -1417,  1734,  5784, -1417,
    1894,  2001, -1417, -1417,  1742,  1743, -1417, -1417, -1417, -1417,
    1995, -1417,  1754,  6875,  1744,  5154,  5177,  1748, -1417,  1756,
    1759, -1417,  1768, -1417,   269, -1417, -1417, -1417, -1417, -1417,
   -1417,  5200,   346, -1417, -1417,  6902,  1765,  1774,  5223,  5246,
   -1417, -1417, -1417,   610, -1417,   155, -1417,   155,  2604, -1417,
   -1417,   859,  2211,  4634,  1772,  1773,  1775,  1776,  1777, -1417,
   -1417, -1417,   347,  1782, -1417, -1417, -1417,   612,  5269,  5292,
    5315,   618,  1783, -1417, -1417, -1417, -1417,  2037,  3470,  3507,
    3524,  3803,  3820,  4634, -1417,  2040, -1417, -1417,  1068,  1789,
    2039,  2041,  4634,  4634,  4634,  4634,  2049,   266,  4634,  1793,
    4634,   208,   266,  2052,   266,  2054,  2055,  2056,  4634,  4634,
    2057,   266,   620, -1417, -1417,  2050,  2060,  2061,    70, -1417,
    1808, -1417, -1417,  5338,   266,  4556,  4556,  4556,  4556,   348,
    2062,   266, -1417,  4634,  4634,  4634, -1417,  4634, -1417, -1417,
   -1417, -1417, -1417, -1417,  5811,  1807,  1810,  1813, -1417, -1417,
   -1417,  6929,  6956,  6983,  5361, -1417,  1814,  5384, -1417,  7010,
    2063,  2070,  4634,   266,  2071,    70, -1417, -1417,  1817, -1417,
     357, -1417, -1417, -1417,  7037,  7064, -1417,  1842,  2107,  4634,
    2109,  2110,  2113,  2114, -1417,  4634,  1849,   627,   629,   632,
     635,  2116, -1417,  1858,  5407,  5430,  5453,  7091, -1417,  2117,
    2119,  2120,  3722,  2121,  2122,  2123,  2604,  1866,  4634,  3776,
    1867,  2126,  2127,  4099,  2128,  2129,  2130,  2131,  2161,   266,
    1907,  1908,  2167, -1417,  5838, -1417, -1417, -1417, -1417, -1417,
    5865,  1918,  1931,  1932,  1934,  1935, -1417,   266,  4634,  4634,
    4634,  2177, -1417, -1417, -1417, -1417, -1417, -1417, -1417,  1936,
   -1417,  7118, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417,  1933, -1417, -1417, -1417,  2187,  1942,  1941,  2604,
    4556,  1943,  4556,  4556,  1938,  5892,  5919,  5946, -1417,  2142,
    4634,  3964,  1944,  4018,  2203,  4072,  4260, -1417,  2204,  4634,
    1946,   639,  4634,   646,   663, -1417, -1417, -1417, -1417,   449,
    5476, -1417, -1417, -1417, -1417,  2208,  2209, -1417,  5973,  2604,
    1959,  6000,  1961,  1955,  2215,  1963,  4634,  4314, -1417, -1417,
   -1417,  1962, -1417, -1417,  1970,  4556, -1417,  1964, -1417,  7145,
   -1417,  2604,  4634,   667,  2090, -1417,  2217,  1971,  5499,  1973,
    2221, -1417, -1417,  4634,  1975,  1963,  6027,  4634,  2229, -1417,
    5522,  1976,  4634, -1417,  5545,  4634,  6054, -1417
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417,  -204, -1417,  -763, -1417,  1324, -1417, -1417,  1350,
    -488, -1417,  -513, -1417,  -373,  -491,   209, -1417, -1417, -1417,
   -1417,   420, -1417,  -910, -1417,  -873, -1417,  -274, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417,  1593, -1417,  1224, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417,  1711, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,  1475,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417,  -957,  -634, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1416, -1417, -1417, -1417,  1096,   916, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417, -1417,   647, -1417, -1417,
   -1417, -1417, -1417, -1417, -1417, -1417,  1750, -1417, -1417, -1417,
    1440, -1417,   771,  1264, -1162, -1417,  -623,    27, -1417, -1417,
   -1417,  1500,  -573,  -930,   -95,   -84, -1417,    -5,  -138,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -675
static const yytype_int16 yytable[] =
{
      35,   169,    39,  1124,   566,   217,   218,   573,   745,  1053,
     683,   422,    69,     6,  1058,  1059,  1242,   483,  1077,  1078,
     587,     6,     6,    83,  1102,   854,   484,  1577,     6,   484,
     597,     6,    32,  1377,   601,    90,  1136,  1387,   605,   484,
    1588,     6,   484,   495,     6,  1082,  1594,    42,   517,  1085,
     281,     6,     6,     6,   783,  1603,   784,   222,  1016,  1094,
     422,  1609,  1610,     7,     8,     9,    10,    11,    12,   422,
      13,     6,   479,   872,   170,   422,   392,   939,   280,  1017,
     398,  1024,    18,   172,   399,   873,   855,   940,   564,   941,
     403,    45,   173,    46,   400,  1031,  1032,  1033,  1034,   683,
     683,   683,   683,    85,   404,   479,    47,    48,    49,  1047,
       3,     6,   881,   735,   883,   503,   223,     7,     8,     9,
      10,    11,    12,    50,    13,   392,   394,   338,    44,  1046,
     975,   330,   351,   352,   392,   503,    18,   392,    69,    69,
     392,   228,    35,   503,   331,    35,   245,    35,    35,    35,
      35,   262,     6,    65,    -3,   332,    66,    67,   503,    36,
       6,    65,  1095,   384,    66,    67,   322,  1079,  1080,   346,
     392,    40,  1096,   227,   232,   323,   683,   240,   244,   249,
     253,   257,   261,   382,   480,   481,   760,  1232,   761,   626,
    1101,   504,   493,   385,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     -60,   504,   683,   876,   621,    44,   325,   877,   878,   504,
      36,   852,   356,   473,  1517,   233,   234,  1850,   383,     6,
    1273,   354,   354,  1164,   504,     7,     8,     9,    10,    11,
      12,    41,    13,   -60,   622,   219,   169,    52,  1018,   264,
      72,     6,   220,    36,    18,   737,   942,     7,     8,     9,
      10,    11,    12,   401,    13,    69,    69,   973,   393,   874,
     461,  1370,   407,   405,   572,   734,    18,    36,   408,    73,
     485,    51,    82,   485,   503,    36,   409,    74,   486,    75,
     503,   487,    85,   485,   487,  1851,   485,  1852,  1125,    43,
     989,   486,   282,   496,   487,  1083,   990,   487,  1853,  1086,
     537,  1132,  1138,  1076,   241,   423,    69,   393,   224,   170,
     683,  1854,  1126,    37,  1385,    76,   393,   762,    38,   393,
      77,    35,   393,   426,  1327,    35,  1334,   235,   236,  1855,
       6,   505,   704,   705,   706,   707,     7,     8,     9,    10,
      11,    12,  1278,    13,    78,  1403,  1432,  1433,  1281,    79,
     504,   505,    80,   420,    81,    18,   504,   438,  1029,   505,
     976,   229,   230,   211,   212,   213,   482,    84,  1035,   214,
     516,    68,   264,   220,   505,   215,    36,   220,   490,    68,
    1653,  1654,   563,  1037,  1434,   499,   879,   763,   755,   756,
     757,   758,    86,   -63,  1328,    87,  1335,    88,  1435,   512,
     220,  1679,  1680,  1681,  1682,  1683,  1684,  1485,  1486,  1487,
    1064,  1489,  1892,   522,  1368,  1369,  1371,  1065,   526,   214,
      89,   427,  1899,  1378,   530,   215,   532,   533,   991,     6,
     534,   428,   536,    69,   992,     7,     8,     9,    10,    11,
      12,  1336,    13,  1389,     6,   410,  1329,   429,  1337,  1338,
    1390,   430,  1513,  1401,    18,    91,  1518,   144,  1215,  1390,
     353,   354,  1408,  1390,  1856,   884,  1127,  1128,   559,  1330,
    1331,  1339,   683,   126,  1340,  1341,  1752,   490,   453,   354,
     708,   127,   683,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   128,
     505,   914,   242,  1614,   129,  1630,   505,   130,  1633,  1044,
    1615,   962,  1631,   131,  1971,  1631,   132,  1973,  1646,  1789,
     439,   963,    92,    93,     6,  1390,  1790,  1975,  1976,   625,
     220,   133,  1204,  1436,  1453,   924,   440,   925,   926,   927,
     928,   929,   930,   931,  1569,   134,  1570,   934,   135,   935,
      94,    95,    96,    97,    98,    35,   143,   936,   441,   964,
     965,   966,   967,   968,   969,   136,  2007,   137,   684,   993,
      35,  1332,  1243,  1342,    35,   994,    35,  1685,  1819,   354,
     627,  1649,  1650,   918,    35,    35,  1497,   633,    35,  1658,
     237,   238,    35,   919,   920,   921,  1793,  1820,  1881,   445,
     431,    35,   687,  1794,  1390,  1390,   691,  1908,   696,  1062,
     138,   490,   442,   139,  1909,    35,   703,   710,   326,     6,
     714,  1668,    36,   140,   719,     7,     8,     9,    10,    11,
      12,   572,    13,   726,   141,    36,    92,    93,     6,  1702,
     157,  1704,   678,   446,    18,   142,    36,   633,  1108,  1109,
    1110,  1111,  1112,  1113,  1114,   156,  1121,   684,   684,   684,
     684,   174,  1574,   765,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   443,
     970,  1739,   175,   447,   176,   448,  1379,  1380,  1381,  1382,
      35,     6,  1634,   177,   932,   178,    36,     7,     8,     9,
      10,    11,    12,   179,    13,  1383,   937,   265,   449,   490,
     635,   636,     6,   637,   638,   276,    18,   180,     7,     8,
       9,    10,    11,    12,   684,    13,   277,   209,   210,   211,
     212,   213,   692,   693,   181,   214,  1648,    18,   279,   891,
     922,   215,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   450,   182,
     684,  1227,     6,  1022,  1810,  1810,   778,   779,   780,   781,
     183,  1234,   782,  1310,    35,   974,  1311,   321,  1571,  1572,
    1573,  1122,   184,   433,  1236,   354,     6,   324,  1804,  1312,
    1313,  1314,     7,     8,     9,    10,    11,    12,   347,    13,
     185,  1067,   186,  1551,  1399,  1400,   972,  1135,   348,  1137,
     187,    18,  1413,  1414,   683,  1415,   220,  1021,  1021,   426,
     434,   388,  1396,  1417,   220,  1438,   220,   435,  1440,   220,
    1028,   490,   188,   426,   426,   426,   426,  1628,  1629,  1165,
    1639,   354,  1042,  1718,  1719,  1745,   354,   426,  1746,   354,
     169,  1747,   354,  1412,  1748,   354,  1800,  1801,  1822,   354,
     189,  1416,   169,  1418,  1826,   354,  1868,  1869,   684,   246,
     247,   389,   119,  1922,   354,  1923,   354,   120,  1924,   354,
     121,  1925,   354,   190,  1836,  2000,   354,   396,  1666,  1662,
    1663,  1318,  2002,   354,  1319,  1439,  1071,   191,  1315,   192,
    1441,   721,   722,   723,   724,   426,   426,  1320,  1321,  2003,
     354,  1322,  1323,  2029,   354,  1089,   193,   194,   594,   195,
     266,  1805,   267,  1806,  1097,  1098,  1807,   268,   426,  1186,
    1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1131,  1134,
      69,   269,    69,  1140,  1141,   452,  1939,   270,  1142,   271,
     329,   337,   436,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1108,  1109,  1110,  1111,  1112,  1113,  1114,   454,
    1808,   426,    69,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,   455,  1181,   463,
       6,   491,  1185,   458,   459,   699,     7,     8,     9,    10,
      11,    12,   472,    13,   492,   490,   497,   498,   500,  1980,
     501,     6,   502,   508,   509,    18,  1324,     7,     8,     9,
      10,    11,    12,   510,    13,  1873,  1957,   511,   513,   514,
     684,   515,   518,   519,   520,   521,    18,   523,   525,   524,
     684,   527,   529,   531,   535,   800,   250,   251,   538,  2011,
     540,     7,     8,     9,    10,    11,   801,   543,    13,   205,
     206,   544,   546,   207,   208,   209,   210,   211,   212,   213,
      18,  2027,  1906,   214,   556,   412,     6,   557,   568,   215,
     558,   567,     7,     8,     9,    10,    11,    12,   560,    13,
     426,   569,   571,   413,   574,   576,   426,    92,    93,   158,
     578,    18,   580,   414,   415,  1809,   579,   581,   584,   586,
     588,   592,   416,  1558,   417,   593,   595,   615,   596,   160,
     161,   162,   163,   598,  1837,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     602,   776,   777,   778,   779,   780,   781,  1364,  1364,   782,
     604,   606,   426,   426,   426,   608,  1762,   609,   772,   773,
     610,   426,   774,   775,   776,   777,   778,   779,   780,   781,
     612,   613,   782,   802,   614,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,   617,   629,   634,
     815,   426,   977,   816,   386,   640,   817,   641,   688,   818,
     426,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   834,   697,   698,   720,
     835,   700,   711,   716,   730,   836,   733,   744,   837,   746,
     748,   754,   749,   169,   169,   169,     6,   169,   750,   751,
     254,   255,     7,     8,     9,    10,    11,    12,  1509,    13,
     759,   764,  1036,  1038,  1039,  1040,   785,   793,  -674,  1045,
     842,    18,   418,   885,   843,  1446,  1447,     6,   795,   796,
    1451,   797,   426,     7,     8,     9,    10,    11,    12,   798,
      13,   844,   858,   859,   860,   861,   862,   863,   864,   865,
     866,   845,    18,   867,   848,   857,   838,   853,   882,   868,
       6,  1476,   886,   678,   782,   887,     7,     8,     9,    10,
      11,    12,   869,    13,  1889,   888,   889,   892,   910,  1492,
    1493,   978,  1495,  1496,   426,    18,   258,   259,   979,   987,
     916,    35,   995,   119,  1025,   980,     6,  1004,   120,   981,
     982,   121,     7,     8,     9,    10,    11,    12,  1645,    13,
     345,  1005,  1011,  1012,   983,   984,   985,  1655,   986,  1026,
    1030,    18,   988,  1505,   996,  1144,  1145,   997,   998,   999,
    1000,  1269,   684,  1001,  1002,  1003,  1006,  1007,  1156,  1008,
    1043,  1009,  1010,  1638,  1565,  1640,  1641,  1642,  1013,  1048,
    1041,  1049,  1050,  1051,  1052,  1054,  1056,  1061,  1057,  1060,
     426,  1063,  1068,   854,  1575,  1072,  1576,   169,   169,  1073,
     203,   204,   205,   206,  1074,   169,   207,   208,   209,   210,
     211,   212,   213,  1075,  1076,  1209,   214,  1211,  1081,  1088,
    1090,  1091,   215,  1092,  1218,  1093,  1100,     6,  1143,  1130,
    1182,  1180,  1146,     7,     8,     9,    10,    11,    12,  1184,
      13,  1183,  1726,  1727,  1196,  1198,  1205,  1206,  1202,  1733,
    1207,  1208,    18,     6,  1210,   169,  1247,   169,  1212,     7,
       8,     9,    10,    11,    12,  1213,    13,  1226,   870,  1214,
    1216,    69,  1217,  1219,   426,  1754,  1755,  1220,    18,  1221,
      69,  1224,  1225,     6,  1229,  1230,   631,   632,  1235,     7,
       8,     9,    10,    11,    12,  1231,    13,  1237,  1238,  1239,
    1240,  1241,  1246,   122,   125,  1249,  1244,   169,    18,  1250,
    1251,  1252,  1253,  1255,  1257,  1502,  1258,   685,   686,  1259,
    1260,     7,     8,     9,    10,    11,    12,  1261,    13,  1262,
    1263,  1757,    35,  1264,  1265,  1266,  1267,  1761,  1270,  1707,
      18,  1709,  1271,    35,  1272,   167,   171,  1274,  1275,    35,
     689,   690,  1276,  1277,  1280,  1279,  1282,  1802,    35,  1803,
       6,  1283,  1284,  1296,    35,    35,     7,     8,     9,    10,
      11,    12,  1286,    13,  1287,    69,    69,  1289,  1386,   196,
     197,   198,    69,  1290,  1291,    18,   694,   695,  1292,  1294,
     200,   201,   202,  1295,   203,   204,   205,   206,  1297,  1298,
     207,   208,   209,   210,   211,   212,   213,  1299,    69,    69,
     214,  1300,  1301,  1302,   169,  1303,   215,   263,  1304,  1305,
    1306,  1308,  1307,   547,  1344,  1346,  1345,  1347,  1503,   490,
    1348,  1349,  1361,  1367,  1350,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,  1351,  1352,  1353,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,  1354,  1355,  1356,  1357,  1445,
    1877,  1878,  1879,  1880,  1358,  1392,  1452,   701,   702,  1398,
      69,  1457,    69,  1405,  1460,  1359,  1360,  1372,  1373,  1463,
      53,  1374,  1375,  1376,    54,  1406,  1409,   945,  1233,   946,
     947,  1473,   948,   712,   713,  1410,  1388,  1394,  1411,  1395,
     220,  1397,   949,  1419,  1482,  1422,  1484,  1421,   349,   350,
    1423,  1424,  1425,  1426,  1428,   355,  1443,  1430,  1431,   950,
     951,   952,   357,   717,   718,  1442,  1444,  1454,  1590,  1456,
    1507,  1462,  1471,  1477,  1478,  1483,   953,  1490,  1491,  1498,
      55,  1481,  1499,   426,  1508,  1510,    56,  1506,  1515,  1519,
    1560,  1514,   169,  1511,  1549,  1550,  1504,  1552,  1516,    57,
    1512,    58,  1520,  1548,  1554,  1555,   387,  1561,  1563,  1564,
     167,  1636,   397,    59,  1562,  1566,  1557,    60,  1559,  1567,
    1568,  1578,  1589,  1592,  1595,  1585,  1579,  1605,  1608,    61,
     426,  1580,   954,  1584,   460,  1643,  1586,  1616,   465,  1617,
     631,   739,  1618,  1625,  1647,  1981,  1635,  1983,  1984,   466,
      62,  1619,  1626,  1621,  1651,   169,   467,   468,   469,   470,
    1622,   471,  1623,  1652,   475,   476,   477,    35,  1660,  1665,
    1627,   200,   201,   202,    35,   203,   204,   205,   206,  1637,
    1669,   207,   208,   209,   210,   211,   212,   213,  1670,  1671,
    1672,   214,  1673,  1674,  1675,   169,  1676,   215,  1677,  1678,
    2023,   548,  1687,  1689,   955,    63,  1690,    64,  1692,  1691,
    1693,   956,  1696,  1697,  1698,  1699,  1701,   169,   766,   767,
     768,   769,   770,   771,   772,   773,  1591,  1708,   774,   775,
     776,   777,   778,   779,   780,   781,   541,   542,   782,  1720,
    1723,  1724,   545,  1730,  1731,  1732,    35,  1734,    35,  1055,
      35,    35,  1736,  1740,  1735,  1743,   766,   767,   768,   769,
     770,   771,   772,   773,  2005,   561,   774,   775,   776,   777,
     778,   779,   780,   781,  1749,  1750,   782,  1751,  1756,  1773,
    1763,  1764,    35,  1765,  1766,  1767,  1775,  1710,  1776,  1777,
    1778,  1782,  1779,  1712,  1780,  1785,  1786,   200,   201,   202,
    1714,   203,   204,   205,   206,  1796,  1787,   207,   208,   209,
     210,   211,   212,   213,  1797,  1788,  1722,   214,  1815,  1814,
    1816,  1817,  1818,   215,  1828,  1835,  1839,   620,  1840,  1821,
    1827,    92,    93,   642,  1838,  1870,  1845,  1744,  1848,  1859,
     623,  1861,  1862,  1863,  1866,  1871,  1872,  1874,  1901,  1882,
    1890,  1753,   572,  1891,  1897,  1902,  1905,  1907,   639,    94,
      95,    96,    97,    98,   643,   644,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,  1912,   667,
     668,    92,    93,   642,  1913,  1921,  1915,  1916,   727,   728,
    1917,  1918,   731,  1926,  1932,  1927,  1933,  1934,  1936,  1937,
    1938,  1940,  1943,  1944,  1945,  1947,  1948,  1949,  1950,    94,
      95,    96,    97,    98,   643,   644,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,  1951,   667,
     668,   669,  1953,  1954,  1955,   200,   201,   202,   670,   203,
     204,   205,   206,  1959,  1968,   207,   208,   209,   210,   211,
     212,   213,  1596,  1974,  1977,   214,  1960,   792,  1961,  1962,
    1963,   215,  1978,  1970,  1985,  1989,  1979,  1846,  1982,  1992,
    1994,  1997,  1858,  1999,  1860,  2008,  2009,    92,    93,     6,
    2015,  1867,  2016,  2030,  2031,  2012,  2035,  2014,  2017,  2021,
    2025,   669,   850,   851,  1876,  2022,  2041,  2032,   670,  2034,
    2037,  1883,  2043,  1069,  2038,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
    1070,   959,  1222,  1904,  1104,   787,  1105,  1106,  1107,  1365,
     630,  1501,  1742,  1023,   911,   611,  1644,  1199,     0,     0,
     671,     0,     0,  1805,     0,  1806,   672,   673,  1807,     0,
       0,     0,   674,     0,     0,   675,     0,     0,   912,   913,
     676,   677,     0,   678,     0,  1108,  1109,  1110,  1111,  1112,
    1113,  1114,     0,  1115,  1116,     0,     0,     0,     0,  1952,
       0,     0,     0,     0,  1108,  1109,  1110,  1111,  1112,  1113,
    1114,     0,  1808,     0,     0,     0,     0,  1964,     0,     0,
     671,     0,    92,    93,   391,   159,   672,   673,    66,     0,
       0,     0,   674,     0,  1104,   675,  1105,  1106,  1107,     0,
     676,   677,     0,   678,   160,   161,   162,   163,   164,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,  1108,  1109,  1110,  1111,  1112,
    1113,  1114,     0,  1115,  1116,     0,     0,     0,     0,   392,
       0,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,  1597,     0,
       0,   214,     0,     0,     0,     0,     0,   215,     0,     0,
       0,  1099,     0,     0,   167,  1598,     0,     0,  1117,     0,
       0,     0,     0,   119,     0,     0,   167,     0,   120,     0,
       0,   121,    92,    93,   158,   159,   386,  1812,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1157,
       0,  1159,     0,  1161,   160,   161,   162,   163,   164,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,     0,     0,  1203,    92,    93,
     158,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,  1120,   214,
     160,   161,   162,   163,     0,   215,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,     0,   165,   769,   770,   771,   772,   773,     0,     0,
     774,   775,   776,   777,   778,   779,   780,   781,   119,     0,
     782,     0,     0,   120,     0,     0,   121,    92,    93,   158,
       0,   393,     0,     0,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
     161,   162,   163,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
       0,     0,     0,     0,     0,     0,     0,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,   200,   201,   202,   214,   203,   204,
     205,   206,     0,   215,   207,   208,   209,   210,   211,   212,
     213,  1599,   165,     0,   214,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,   120,  1601,     0,   121,     0,     0,  1404,
       0,     0,     0,     0,   166,  1737,   800,     0,     0,  1738,
       0,  1602,     7,     8,     9,    10,    11,   801,     0,    13,
       0,     0,   200,   201,   202,     0,   203,   204,   205,   206,
       0,    18,   207,   208,   209,   210,   211,   212,   213,  1604,
       0,     0,   214,     0,   119,     0,     0,     0,   215,   120,
       0,     0,   121,   369,     0,     0,     0,     0,     0,     0,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1448,  1449,  1450,     0,     0,     0,     0,  1455,
       0,     0,  1458,  1459,     0,     0,     0,  1461,     0,     0,
    1464,  1465,  1466,  1467,     0,     0,  1468,  1469,  1470,     0,
    1472,     0,     0,     0,  1474,  1475,     0,     0,     0,  1479,
    1480,     0,     0,     0,     0,     0,     0,   167,   167,   167,
    1488,   167,     0,   119,     0,  1606,  1494,     0,   120,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,   802,     0,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,     0,     0,
       0,   815,     0,     0,   816,     0,     0,   817,     0,  1607,
     818,     0,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,   833,   834,     0,     0,
       0,   835,     0,     0,     0,     0,   836,     0,     0,   837,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,   200,   201,   202,   215,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
     200,   201,   202,   214,   203,   204,   205,   206,     0,   215,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,  1700,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   167,   167,     0,   215,     0,  1656,  1657,     0,   167,
    1659,     0,     0,     0,     0,     0,  1664,     0,  1667,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   800,     0,     0,     0,     0,  1688,     7,     8,     9,
      10,    11,   801,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,   167,
    1703,   167,  1705,  1706,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,  1611,     0,     0,   214,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,  1721,     0,     0,     0,  1725,
       0,     0,  1728,  1729,     0,     0,     0,     0,   200,   201,
     202,   167,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1758,
    1759,  1760,     0,     0,     0,     0,     0,     0,     0,     0,
    1768,  1769,  1770,  1771,  1772,     0,     0,     0,     0,   802,
       0,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,     0,     0,     0,   815,     0,     0,   816,
       0,     0,   817,     0,     0,   818,     0,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,     0,     0,     0,   835,     0,   167,     0,
       0,   836,   800,  1813,   837,     0,     0,     0,     7,     8,
       9,    10,    11,   801,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,  1834,     0,     0,     0,     0,     0,     0,
       0,     0,  1841,  1842,  1843,  1844,     0,     0,  1847,     0,
    1849,     0,   768,   769,   770,   771,   772,   773,  1864,  1865,
     774,   775,   776,   777,   778,   779,   780,   781,     0,     0,
     782,     0,  1711,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1884,  1885,  1886,     0,  1887,     0,     0,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,  1903,     0,     0,     0,   215,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1914,
       0,     0,     0,     0,     0,  1920,     0,     0,     0,     0,
     802,     0,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   814,     0,     0,   167,   815,  1941,     0,
     816,     0,     0,   817,     0,     0,   818,     0,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,   834,     0,     0,     0,   835,  1965,  1966,
    1967,   800,   836,     0,     0,   837,     0,     7,     8,     9,
      10,    11,   801,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,   167,
    1612,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1990,     0,     0,     0,     0,     0,     0,  1829,     0,  1998,
       0,     0,  2001,     0,     0,   800,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,   801,     0,    13,   167,
       0,     0,     0,  1713,     0,     0,  2019,     0,     0,     0,
      18,     0,     0,     0,  1830,     0,     0,     0,     0,     0,
       0,   167,  2028,     0,     0,     0,     0,     0,     0,     0,
       0,  1831,     0,  2036,     0,     0,     0,  2040,     0,     0,
       0,     0,  2044,     0,     0,  2046,   766,   767,   768,   769,
     770,   771,   772,   773,     0,     0,   774,   775,   776,   777,
     778,   779,   780,   781,     0,     0,   782,     0,     0,   802,
    1402,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,     0,     0,     0,   815,     0,     0,   816,
       0,     0,   817,     0,     0,   818,     0,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,     0,     0,     0,   835,     0,     0,     0,
       0,   836,     0,   802,   837,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,     0,     0,     0,
     815,     0,     0,   816,     0,     0,   817,     0,     0,   818,
       0,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   834,     0,     0,     0,
     835,     0,     0,   800,     0,   836,     0,     0,   837,     7,
       8,     9,    10,    11,   801,     0,    13,     0,     0,   200,
     201,   202,  1715,   203,   204,   205,   206,     0,    18,   207,
     208,   209,   210,   211,   212,   213,   200,   201,   202,   214,
     203,   204,   205,   206,     0,   215,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,   800,     0,     0,
       0,     0,   215,     7,     8,     9,    10,    11,   801,     0,
      13,     0,     0,   200,   201,   202,  1716,   203,   204,   205,
     206,     0,    18,   207,   208,   209,   210,   211,   212,   213,
     200,   201,   202,   214,   203,   204,   205,   206,   379,   215,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,   800,     0,     0,     0,     0,   215,     7,     8,     9,
      10,    11,   801,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
    1832,   802,     0,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   812,   813,   814,     0,     0,  1833,   815,     0,
       0,   816,     0,     0,   817,     0,     0,   818,     0,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,     0,     0,     0,   835,     0,
       0,     0,     0,   836,     0,   802,   837,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,     0,
       0,     0,   815,     0,     0,   816,     0,     0,   817,     0,
       0,   818,     0,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,     0,
       0,     0,   835,     0,     0,     0,     0,   836,     0,   802,
     837,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,     0,  1717,     0,   815,     0,     0,   816,
       0,     0,   817,     0,     0,   818,     0,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,     0,     0,     0,   835,     0,     0,   800,
       0,   836,     0,     0,   837,     7,     8,     9,    10,    11,
     801,     0,    13,     0,     0,     0,     0,     0,  1935,     0,
       0,     0,     0,     0,    18,     0,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,   380,     0,
       0,     0,   215,   800,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    11,   801,     0,    13,     0,     0,   200,
     201,   202,  1942,   203,   204,   205,   206,     0,    18,   207,
     208,   209,   210,   211,   212,   213,   200,   201,   202,   214,
     203,   204,   205,   206,   199,   215,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,   800,     0,     0,
       0,     0,   215,     7,     8,     9,    10,    11,   801,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,  1946,   802,     0,   803,
     804,   805,   806,   807,   808,   809,   810,   811,   812,   813,
     814,     0,     0,     0,   815,     0,     0,   816,     0,     0,
     817,     0,     0,   818,   275,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
     834,     0,     0,     0,   835,     0,     0,     0,     0,   836,
       0,   802,   837,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   812,   813,   814,     0,     0,     0,   815,     0,
       0,   816,     0,     0,   817,     0,     0,   818,     0,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,     0,     0,     0,   835,     0,
       0,     0,     0,   836,     0,   802,   837,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,     0,
    1991,     0,   815,     0,     0,   816,     0,     0,   817,     0,
       0,   818,     0,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,     0,
       0,     0,   835,     0,     0,   800,     0,   836,     0,     0,
     837,     7,     8,     9,    10,    11,   801,     0,    13,     0,
       0,     0,     0,     0,  1993,     0,     0,     0,     0,     0,
      18,     0,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,   800,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
     801,     0,    13,     0,     0,   200,   201,   202,  1995,   203,
     204,   205,   206,     0,    18,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   802,     0,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,     0,     0,     0,
     815,     0,     0,   816,     0,     0,   817,     0,     0,   818,
       0,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   834,     0,     0,     0,
     835,     0,     0,     0,     0,   836,     0,   802,   837,   803,
     804,   805,   806,   807,   808,   809,   810,   811,   812,   813,
     814,   358,     0,     0,   815,     0,     0,   816,     0,     0,
     817,     0,     0,   818,     0,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
     834,   381,     0,     0,   835,    92,    93,   158,     0,   836,
       0,     0,   837,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1996,   160,   161,   162,
     163,     0,   462,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,     0,    92,
      93,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1066,     0,     0,     0,     0,     0,     0,     0,
    2020,   160,   161,   162,   163,     0,   732,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    92,    93,     6,   474,   766,   767,   768,   769,
     770,   771,   772,   773,     0,     0,   774,   775,   776,   777,
     778,   779,   780,   781,     0,     0,   782,    92,    93,     6,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
    1027,     0,     0,     0,     0,     0,     0,     0,     0,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   215,     0,     0,     0,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,   119,     0,     0,     0,   215,   120,     0,     0,   121,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     6,     0,     0,   215,     0,     0,     7,
       8,     9,    10,    11,    12,     0,    13,     0,    14,    15,
      16,    17,     0,     0,     0,   119,     0,     0,    18,     0,
     120,     0,     0,   121,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,     0,     0,
     215,    19,  1521,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,     0,
      21,     0,    22,   120,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,    24,     0,
       0,     0,     0,   119,     0,     0,     0,     0,   120,     0,
      25,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1522,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,  1523,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,  1524,    27,   215,    28,     0,
       0,     0,   376,     0,     0,     0,  1525,  1526,  1527,  1528,
    1529,  1530,  1531,  1532,  1533,  1534,  1535,  1536,  1537,  1538,
    1539,  1540,  1541,  1542,  1543,  1544,  1545,  1546,  1547,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
     377,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,   378,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,   456,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,   457,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,   200,   201,   202,   215,   203,   204,
     205,   206,   618,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,   200,   201,   202,
     215,   203,   204,   205,   206,   619,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
     200,   201,   202,   215,   203,   204,   205,   206,  1309,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,   200,   201,   202,   215,   203,   204,   205,
     206,  1317,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,   200,   201,   202,   215,
     203,   204,   205,   206,  1326,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,   200,
     201,   202,   215,   203,   204,   205,   206,  1556,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
    1581,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,  1582,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,  1583,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,  1587,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,   200,   201,   202,   215,   203,   204,
     205,   206,  1593,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,   200,   201,   202,
     215,   203,   204,   205,   206,  1600,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
     200,   201,   202,   215,   203,   204,   205,   206,  1620,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,   200,   201,   202,   215,   203,   204,   205,
     206,  1783,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,   200,   201,   202,   215,
     203,   204,   205,   206,  1784,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,   200,
     201,   202,   215,   203,   204,   205,   206,  1792,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
    1798,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,  1799,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,  1823,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,  1824,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,   200,   201,   202,   215,   203,   204,
     205,   206,  1825,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,   200,   201,   202,
     215,   203,   204,   205,   206,  1875,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
     200,   201,   202,   215,   203,   204,   205,   206,  1896,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,   200,   201,   202,   215,   203,   204,   205,
     206,  1898,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,   200,   201,   202,   215,
     203,   204,   205,   206,  1928,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,   200,
     201,   202,   215,   203,   204,   205,   206,  1929,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,   200,   201,   202,   215,   203,   204,   205,   206,
    1930,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,   200,   201,   202,   215,   203,
     204,   205,   206,  2006,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,   200,   201,
     202,   215,   203,   204,   205,   206,  2033,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,   200,   201,   202,   215,   203,   204,   205,   206,  2042,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,   200,   201,   202,   215,   203,   204,
     205,   206,  2045,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,     0,     0,
     215,   200,   201,   202,   278,   203,   204,   205,   206,     0,
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
       0,     0,     0,     0,     0,   215,   200,   201,   202,   729,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
       0,     0,   215,   200,   201,   202,   849,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     200,   201,   202,   944,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,   200,   201,   202,
    1774,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,     0,     0,   215,   200,   201,   202,  1888,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,     0,     0,
     215,   200,   201,   202,  1956,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,     0,     0,   215,   200,   201,
     202,  1958,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,   200,   201,   202,  1986,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,   200,   201,   202,  1987,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,   200,
     201,   202,  1988,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   215,   200,   201,   202,  2010,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
       0,     0,   215,   200,   201,   202,  2013,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,     0,     0,   215,
     200,   201,   202,  2039,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,   200,   201,   202,
    2047,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,   216,
     200,   201,   202,   215,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,   304,   200,   201,   202,   215,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,   359,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,   360,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,   361,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,   362,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,   363,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,   364,     0,   215,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,   365,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,   366,     0,   215,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,   367,     0,   215,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
     368,     0,   215,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,   370,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,   371,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,   372,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,   373,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,   374,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,   375,     0,   215,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,   464,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,   494,     0,   215,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,   549,     0,   215,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
     550,     0,   215,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,   551,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,   552,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,   553,
     200,   201,   202,   215,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,   624,   200,   201,   202,   215,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,   743,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,   846,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,   847,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,  1624,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,  1781,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,  1795,     0,   215,   200,   201,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,   210,   211,
     212,   213,     0,     0,     0,   214,     0,     0,     0,  1893,
       0,   215,   200,   201,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   214,     0,     0,     0,  1894,     0,   215,   200,
     201,   202,     0,   203,   204,   205,   206,     0,     0,   207,
     208,   209,   210,   211,   212,   213,     0,     0,     0,   214,
       0,     0,     0,  1895,     0,   215,   200,   201,   202,     0,
     203,   204,   205,   206,     0,     0,   207,   208,   209,   210,
     211,   212,   213,     0,     0,     0,   214,     0,     0,     0,
    1900,     0,   215,   200,   201,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,   210,   211,   212,   213,
       0,     0,     0,   214,     0,     0,     0,  1910,     0,   215,
     200,   201,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
     214,     0,     0,     0,  1911,     0,   215,   200,   201,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
     210,   211,   212,   213,     0,     0,     0,   214,     0,     0,
       0,  1931,     0,   215,   200,   201,   202,     0,   203,   204,
     205,   206,     0,     0,   207,   208,   209,   210,   211,   212,
     213,     0,     0,     0,   214,     0,     0,     0,  1972,     0,
     215,   200,   201,   202,     0,   203,   204,   205,   206,     0,
       0,   207,   208,   209,   210,   211,   212,   213,     0,     0,
       0,   214,     0,     0,     0,  2026,     0,   215,   200,   201,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,   210,   211,   212,   213,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,   766,   767,   768,   769,   770,
     771,   772,   773,     0,     0,   774,   775,   776,   777,   778,
     779,   780,   781,     0,     0,   782,     0,   890
};

static const yytype_int16 yycheck[] =
{
       5,    85,     7,   960,   492,   143,   144,   498,   642,   882,
     583,     5,    17,     5,   887,   888,     7,   390,   928,   929,
     511,     5,     5,    28,   954,     5,     3,  1443,     5,     3,
     521,     5,     5,  1195,   525,    40,   966,  1199,   529,     3,
    1456,     5,     3,     5,     5,     5,  1462,     5,   421,     5,
       7,     5,     5,     5,   262,  1471,   264,     5,    76,     5,
       5,  1477,  1478,    11,    12,    13,    14,    15,    16,     5,
      18,     5,     5,    70,    85,     5,    70,    87,   173,    97,
      83,   844,    30,   258,    87,    82,    66,    97,    65,    99,
      83,     5,   267,     7,    97,   858,   859,   860,   861,   672,
     673,   674,   675,   235,    97,     5,    20,    21,    22,   872,
       0,     5,   746,   626,   748,    24,    64,    11,    12,    13,
      14,    15,    16,    37,    18,    70,   330,   259,   257,    65,
     259,   235,   270,   271,    70,    24,    30,    70,   143,   144,
      70,   146,   147,    24,   248,   150,   151,   152,   153,   154,
     155,   156,     5,     6,     0,   259,     9,    10,    24,   269,
       5,     6,   108,   235,     9,    10,   258,   930,   931,   264,
      70,   257,   118,   146,   147,   267,   749,   150,   151,   152,
     153,   154,   155,   321,   388,   389,     3,  1060,     5,   562,
     953,   100,   396,   265,   767,   768,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     259,   100,   785,    83,   235,   257,   221,    87,    88,   100,
     269,   734,   258,   258,  1386,   265,   266,    19,   323,     5,
    1103,   267,   267,   996,   100,    11,    12,    13,    14,    15,
      16,     7,    18,   259,   265,   260,   330,     7,   266,   265,
     259,     5,   267,   269,    30,   628,   266,    11,    12,    13,
      14,    15,    16,   266,    18,   270,   271,   259,   262,   266,
     354,   265,    83,   266,   265,   249,    30,   269,    89,   265,
     257,   195,   265,   257,    24,   269,    97,   265,   265,   265,
      24,   268,   235,   257,   268,    87,   257,    89,    87,   257,
     259,   265,   259,   265,   268,   265,   265,   268,   100,   265,
     448,   265,   265,   265,    68,   260,   321,   262,   266,   330,
     893,   113,   111,   257,   233,   265,   262,   144,   262,   262,
     265,   336,   262,   338,    19,   340,    19,   265,   266,   131,
       5,   250,   118,   119,   120,   121,    11,    12,    13,    14,
      15,    16,  1115,    18,   265,  1228,    79,    80,  1121,   265,
     100,   250,   265,   336,   265,    30,   100,   340,   856,   250,
     259,   265,   266,   250,   251,   252,   260,   269,   259,   256,
     260,   234,   265,   267,   250,   262,   269,   267,   393,   234,
     243,   244,   487,   259,   117,   400,   266,   214,   672,   673,
     674,   675,   265,   260,    89,     6,    89,     7,   131,   414,
     267,    90,    91,    92,    93,    94,    95,  1347,  1348,  1349,
     260,  1351,  1838,   428,  1187,  1188,  1189,   267,   433,   256,
       7,    87,  1848,  1196,   439,   262,   441,   442,   259,     5,
     445,    97,   447,   448,   265,    11,    12,    13,    14,    15,
      16,   134,    18,   260,     5,   266,   141,   113,   141,   142,
     267,   117,   260,  1226,    30,   131,   260,   257,  1041,   267,
     266,   267,  1235,   267,   266,   749,   265,   266,   483,   164,
     165,   164,  1055,     7,   167,   168,  1648,   492,   266,   267,
     266,     7,  1065,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,     7,
     250,   785,   266,   260,     7,   260,   250,     7,   260,   259,
     267,    87,   267,     7,  1940,   267,     7,  1943,   260,   260,
      97,    97,     3,     4,     5,   267,   267,  1953,  1954,   266,
     267,     7,  1030,   266,  1307,    97,   113,    99,   100,   101,
     102,   103,   104,   105,  1427,     7,  1429,    97,     7,    99,
      31,    32,    33,    34,    35,   570,   259,   107,   135,   135,
     136,   137,   138,   139,   140,     7,  1992,     7,   583,   259,
     585,   266,  1073,   266,   589,   265,   591,   266,  1750,   267,
     268,  1521,  1522,    99,   599,   600,  1359,   570,   603,  1529,
     265,   266,   607,   109,   110,   111,   260,   260,   260,    97,
     266,   616,   585,   267,   267,   267,   589,   260,   591,   893,
       7,   626,   189,     7,   267,   630,   599,   600,   265,     5,
     603,  1541,   269,     7,   607,    11,    12,    13,    14,    15,
      16,   265,    18,   616,     7,   269,     3,     4,     5,  1579,
     265,  1581,   265,   141,    30,     7,   269,   630,   123,   124,
     125,   126,   127,   128,   129,   192,   131,   672,   673,   674,
     675,   258,  1435,   678,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   266,
     266,  1631,   265,   191,   259,   193,   248,   249,   250,   251,
     715,     5,   265,   259,   266,   259,   269,    11,    12,    13,
      14,    15,    16,   259,    18,   267,   266,     7,   216,   734,
     265,   266,     5,   265,   266,     7,    30,   259,    11,    12,
      13,    14,    15,    16,   749,    18,     7,   248,   249,   250,
     251,   252,   265,   266,   259,   256,  1519,    30,     7,   764,
     266,   262,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   266,   259,
     785,  1055,     5,     6,  1741,  1742,   250,   251,   252,   253,
     259,  1065,   256,   141,   799,   800,   144,   267,  1432,  1433,
    1434,   266,   259,    97,   266,   267,     5,     7,  1738,   157,
     158,   159,    11,    12,    13,    14,    15,    16,     5,    18,
     259,   916,   259,  1396,   265,   266,   799,   965,     5,   967,
     259,    30,   266,   267,  1407,   266,   267,   842,   843,   844,
     134,   235,  1215,   266,   267,   266,   267,   141,   266,   267,
     855,   856,   259,   858,   859,   860,   861,   266,   267,   997,
     266,   267,   867,   265,   266,   266,   267,   872,   266,   267,
     954,   266,   267,  1246,   266,   267,   266,   267,   266,   267,
     259,  1254,   966,  1256,   266,   267,   266,   267,   893,   265,
     266,   235,   249,   266,   267,   266,   267,   254,   266,   267,
     257,   266,   267,   259,  1777,   266,   267,   235,   265,  1532,
    1533,   141,   266,   267,   144,  1288,   921,   259,   266,   259,
    1293,   194,   195,   196,   197,   930,   931,   157,   158,   266,
     267,   161,   162,   266,   267,   940,   259,   259,   518,   259,
     259,    82,   259,    84,   949,   950,    87,   259,   953,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   963,   964,
     965,   259,   967,   968,   969,   265,  1896,   259,   973,   259,
     259,   259,   266,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   123,   124,   125,   126,   127,   128,   129,   260,
     131,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,   267,  1013,     7,
       5,     7,  1017,   260,   260,   595,    11,    12,    13,    14,
      15,    16,   260,    18,   259,  1030,     5,     5,   265,  1959,
       5,     5,   265,     5,   265,    30,   266,    11,    12,    13,
      14,    15,    16,     5,    18,  1808,  1919,     5,   265,   265,
    1055,   265,   235,   260,     5,     5,    30,   265,     5,   265,
    1065,   265,     5,   265,   265,     5,   265,   266,     5,  1999,
       5,    11,    12,    13,    14,    15,    16,     7,    18,   242,
     243,     7,     7,   246,   247,   248,   249,   250,   251,   252,
      30,  2021,  1855,   256,     7,    69,     5,     7,   235,   262,
       7,     7,    11,    12,    13,    14,    15,    16,     8,    18,
    1115,   265,     7,    87,     7,     7,  1121,     3,     4,     5,
     259,    30,   250,    97,    98,   266,   259,     7,     7,     7,
       7,     7,   106,  1407,   108,     5,   235,   266,     7,    25,
      26,    27,    28,     7,  1778,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       7,   248,   249,   250,   251,   252,   253,  1182,  1183,   256,
     265,     7,  1187,  1188,  1189,     7,  1674,     7,   242,   243,
       7,  1196,   246,   247,   248,   249,   250,   251,   252,   253,
       7,     7,   256,   143,     7,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   260,    67,     7,
     160,  1226,   802,   163,   262,     5,   166,   250,     7,   169,
    1235,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   265,     7,   266,
     190,     7,     7,     7,   265,   195,     8,   260,   198,   259,
     259,     5,   259,  1347,  1348,  1349,     5,  1351,   259,   259,
     265,   266,    11,    12,    13,    14,    15,    16,  1373,    18,
       3,     5,   862,   863,   864,   865,   259,     7,   259,   869,
     259,    30,   266,     5,   259,  1300,  1301,     5,   265,   265,
    1305,   265,  1307,    11,    12,    13,    14,    15,    16,   265,
      18,   259,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   259,    30,    81,   266,   259,   266,   260,   259,    87,
       5,  1336,     5,   265,   256,   259,    11,    12,    13,    14,
      15,    16,   100,    18,  1835,   259,   243,   266,     3,  1354,
    1355,   259,  1357,  1358,  1359,    30,   265,   266,   259,     7,
     265,  1366,   265,   249,     6,   259,     5,   265,   254,   259,
     259,   257,    11,    12,    13,    14,    15,    16,  1516,    18,
     266,   265,   265,   265,   259,   259,   259,  1525,   259,   235,
     262,    30,   259,  1366,   259,   975,   976,   259,   259,   259,
     259,     7,  1407,   259,   259,   259,   259,   259,   988,   259,
       5,   259,   259,  1508,  1419,  1510,  1511,  1512,   259,     5,
     265,   265,     5,     5,   260,   260,   259,   266,   260,   259,
    1435,   260,     5,     5,  1439,     5,  1441,  1521,  1522,     5,
     240,   241,   242,   243,     5,  1529,   246,   247,   248,   249,
     250,   251,   252,   265,   265,  1035,   256,  1037,     5,     5,
       5,     5,   262,     5,  1044,     5,     3,     5,     7,     5,
     259,     5,     7,    11,    12,    13,    14,    15,    16,   265,
      18,   259,  1620,  1621,   259,   267,     7,     7,   265,  1627,
       7,     7,    30,     5,     7,  1579,  1076,  1581,     7,    11,
      12,    13,    14,    15,    16,     7,    18,   267,   266,     7,
       7,  1516,     7,     7,  1519,  1653,  1654,     7,    30,     7,
    1525,     7,     7,     5,   265,   260,   265,   266,   259,    11,
      12,    13,    14,    15,    16,   267,    18,     7,     7,     7,
       7,     7,     5,    43,    44,     7,   265,  1631,    30,     7,
       7,     7,     7,     7,     7,     5,     7,   265,   266,     7,
       7,    11,    12,    13,    14,    15,    16,     7,    18,     7,
       7,  1666,  1577,     7,     7,     7,     7,  1672,     7,  1584,
      30,  1586,     7,  1588,     7,    85,    86,     5,     5,  1594,
     265,   266,     5,   259,   259,     7,   259,  1735,  1603,  1737,
       5,     5,     5,   260,  1609,  1610,    11,    12,    13,    14,
      15,    16,     7,    18,     7,  1620,  1621,     7,  1198,   119,
     120,   121,  1627,     7,     7,    30,   265,   266,     7,     7,
     236,   237,   238,     7,   240,   241,   242,   243,   260,   260,
     246,   247,   248,   249,   250,   251,   252,   267,  1653,  1654,
     256,   267,   267,   267,  1738,   267,   262,   157,   267,   267,
     267,   260,   267,     8,   267,   267,   260,   267,   118,  1674,
     267,   267,   260,     7,   267,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   267,   266,   266,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   267,   267,   267,   267,  1299,
    1815,  1816,  1817,  1818,   267,   266,  1306,   265,   266,     7,
    1735,  1311,  1737,     3,  1314,   267,   267,   265,   265,  1319,
       3,   265,   265,   265,     7,   260,     7,    82,     8,    84,
      85,  1331,    87,   265,   266,   113,   267,   267,     7,   267,
     267,   267,    97,   259,  1344,     7,  1346,   260,   268,   269,
       7,     7,     3,     7,     7,   275,   265,     7,     7,   114,
     115,   116,   282,   265,   266,     7,     7,     7,     7,   265,
    1370,   265,   265,   265,   265,     7,   131,     7,     7,     5,
      63,   265,     7,  1808,   265,   265,    69,   209,     5,   131,
       5,   260,  1896,   265,  1394,  1395,   266,  1397,   259,    82,
     265,    84,     7,   267,   260,   260,   326,     5,     5,     5,
     330,     5,   332,    96,  1414,     7,   260,   100,   260,     7,
     260,   260,     7,     7,     7,   260,   267,     7,     7,   112,
    1855,   267,   187,   267,   354,     7,   267,   267,   358,   260,
     265,   266,   260,   260,     7,  1960,   265,  1962,  1963,   369,
     133,   267,   260,   267,   265,  1959,   376,   377,   378,   379,
     267,   381,   267,     5,   384,   385,   386,  1892,     5,     5,
     267,   236,   237,   238,  1899,   240,   241,   242,   243,   267,
     265,   246,   247,   248,   249,   250,   251,   252,   265,   265,
     265,   256,     3,   262,   260,  1999,   260,   262,   266,   260,
    2015,   266,   260,   266,   259,   188,     7,   190,   260,   266,
       7,   266,     7,     7,     7,     7,     7,  2021,   236,   237,
     238,   239,   240,   241,   242,   243,     7,     7,   246,   247,
     248,   249,   250,   251,   252,   253,   456,   457,   256,     7,
       7,     7,   462,     7,     7,     7,  1971,     7,  1973,   267,
    1975,  1976,     7,     7,   136,   265,   236,   237,   238,   239,
     240,   241,   242,   243,  1989,   485,   246,   247,   248,   249,
     250,   251,   252,   253,   267,   260,   256,     7,     6,   265,
       7,     7,  2007,     7,     7,     5,   112,  1587,     7,   267,
     267,   267,    17,  1593,   260,   267,   260,   236,   237,   238,
    1600,   240,   241,   242,   243,   260,   267,   246,   247,   248,
     249,   250,   251,   252,   260,   267,  1616,   256,   265,   267,
     265,   265,   265,   262,     7,     5,     7,   547,     7,   267,
     267,     3,     4,     5,   265,     5,     7,  1637,   265,     7,
     560,     7,     7,     7,     7,     5,     5,   259,     5,     7,
     260,  1651,   265,   260,   260,     5,     5,   260,   578,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   266,    61,
      62,     3,     4,     5,     7,   266,     7,     7,   618,   619,
       7,     7,   622,     7,     7,   267,     7,     7,     7,     7,
       7,   265,   265,     7,     7,     7,     7,     7,     7,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     7,    61,
      62,   123,   265,   265,     7,   236,   237,   238,   130,   240,
     241,   242,   243,   265,     7,   246,   247,   248,   249,   250,
     251,   252,     7,   260,     7,   256,   265,   697,   266,   265,
     265,   262,   260,   267,   266,    63,   265,  1787,   265,   265,
       7,     7,  1792,   267,  1794,     7,     7,     3,     4,     5,
     265,  1801,     7,   133,     7,   266,     5,   266,   265,   267,
     266,   123,   732,   733,  1814,   265,     7,   266,   130,   266,
     265,  1821,   266,   919,  2035,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     920,   796,  1048,  1853,    82,   682,    84,    85,    86,  1183,
     569,  1365,  1635,   843,   784,   535,  1515,  1023,    -1,    -1,
     242,    -1,    -1,    82,    -1,    84,   248,   249,    87,    -1,
      -1,    -1,   254,    -1,    -1,   257,    -1,    -1,   260,   261,
     262,   263,    -1,   265,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,   131,   132,    -1,    -1,    -1,    -1,  1909,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,   131,    -1,    -1,    -1,    -1,  1927,    -1,    -1,
     242,    -1,     3,     4,     5,     6,   248,   249,     9,    -1,
      -1,    -1,   254,    -1,    82,   257,    84,    85,    86,    -1,
     262,   263,    -1,   265,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   123,   124,   125,   126,   127,
     128,   129,    -1,   131,   132,    -1,    -1,    -1,    -1,    70,
      -1,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,     7,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   951,    -1,    -1,   954,     7,    -1,    -1,   266,    -1,
      -1,    -1,    -1,   249,    -1,    -1,   966,    -1,   254,    -1,
      -1,   257,     3,     4,     5,     6,   262,   266,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   989,
      -1,   991,    -1,   993,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,  1027,     3,     4,
       5,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,   266,   256,
      25,    26,    27,    28,    -1,   262,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,   233,   239,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,   253,   249,    -1,
     256,    -1,    -1,   254,    -1,    -1,   257,     3,     4,     5,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   237,   238,
      -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,   236,   237,   238,   256,   240,   241,
     242,   243,    -1,   262,   246,   247,   248,   249,   250,   251,
     252,     7,   233,    -1,   256,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,   254,     7,    -1,   257,    -1,    -1,  1229,
      -1,    -1,    -1,    -1,   265,   210,     5,    -1,    -1,   214,
      -1,     7,    11,    12,    13,    14,    15,    16,    -1,    18,
      -1,    -1,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    30,   246,   247,   248,   249,   250,   251,   252,     7,
      -1,    -1,   256,    -1,   249,    -1,    -1,    -1,   262,   254,
      -1,    -1,   257,   267,    -1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1302,  1303,  1304,    -1,    -1,    -1,    -1,  1309,
      -1,    -1,  1312,  1313,    -1,    -1,    -1,  1317,    -1,    -1,
    1320,  1321,  1322,  1323,    -1,    -1,  1326,  1327,  1328,    -1,
    1330,    -1,    -1,    -1,  1334,  1335,    -1,    -1,    -1,  1339,
    1340,    -1,    -1,    -1,    -1,    -1,    -1,  1347,  1348,  1349,
    1350,  1351,    -1,   249,    -1,     7,  1356,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,
      -1,    -1,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,     7,
     169,    -1,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    -1,   195,    -1,    -1,   198,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,   236,   237,   238,   262,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
     236,   237,   238,   256,   240,   241,   242,   243,    -1,   262,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,   262,   266,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,  1521,  1522,    -1,   262,    -1,  1526,  1527,    -1,  1529,
    1530,    -1,    -1,    -1,    -1,    -1,  1536,    -1,  1538,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,  1556,    11,    12,    13,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,  1579,
    1580,  1581,  1582,  1583,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,     7,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,  1615,    -1,    -1,    -1,  1619,
      -1,    -1,  1622,  1623,    -1,    -1,    -1,    -1,   236,   237,
     238,  1631,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1669,
    1670,  1671,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1680,  1681,  1682,  1683,  1684,    -1,    -1,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,   190,    -1,  1738,    -1,
      -1,   195,     5,  1743,   198,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,  1773,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1782,  1783,  1784,  1785,    -1,    -1,  1788,    -1,
    1790,    -1,   238,   239,   240,   241,   242,   243,  1798,  1799,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,    -1,
     256,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1823,  1824,  1825,    -1,  1827,    -1,    -1,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,  1852,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1869,
      -1,    -1,    -1,    -1,    -1,  1875,    -1,    -1,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    -1,    -1,  1896,   160,  1898,    -1,
     163,    -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,    -1,    -1,   190,  1928,  1929,
    1930,     5,   195,    -1,    -1,   198,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,  1959,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1970,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,  1979,
      -1,    -1,  1982,    -1,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,  1999,
      -1,    -1,    -1,   266,    -1,    -1,  2006,    -1,    -1,    -1,
      30,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,  2021,  2022,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,  2033,    -1,    -1,    -1,  2037,    -1,    -1,
      -1,    -1,  2042,    -1,    -1,  2045,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,   256,    -1,    -1,   143,
     260,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,   195,    -1,   143,   198,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,    -1,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,
      -1,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,    -1,    -1,    -1,
     190,    -1,    -1,     5,    -1,   195,    -1,    -1,   198,    11,
      12,    13,    14,    15,    16,    -1,    18,    -1,    -1,   236,
     237,   238,   266,   240,   241,   242,   243,    -1,    30,   246,
     247,   248,   249,   250,   251,   252,   236,   237,   238,   256,
     240,   241,   242,   243,    -1,   262,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,     5,    -1,    -1,
      -1,    -1,   262,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,   236,   237,   238,   266,   240,   241,   242,
     243,    -1,    30,   246,   247,   248,   249,   250,   251,   252,
     236,   237,   238,   256,   240,   241,   242,   243,     8,   262,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,     5,    -1,    -1,    -1,    -1,   262,    11,    12,    13,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
       7,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,    -1,     7,   160,    -1,
      -1,   163,    -1,    -1,   166,    -1,    -1,   169,    -1,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    -1,    -1,    -1,   190,    -1,
      -1,    -1,    -1,   195,    -1,   143,   198,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
      -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
      -1,   169,    -1,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
      -1,    -1,   190,    -1,    -1,    -1,    -1,   195,    -1,   143,
     198,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,   266,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,     5,
      -1,   195,    -1,    -1,   198,    11,    12,    13,    14,    15,
      16,    -1,    18,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    30,    -1,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,   258,    -1,
      -1,    -1,   262,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    -1,    -1,   236,
     237,   238,   266,   240,   241,   242,   243,    -1,    30,   246,
     247,   248,   249,   250,   251,   252,   236,   237,   238,   256,
     240,   241,   242,   243,     8,   262,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,     5,    -1,    -1,
      -1,    -1,   262,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,     7,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,
     166,    -1,    -1,   169,     8,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,   195,
      -1,   143,   198,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,    -1,    -1,   160,    -1,
      -1,   163,    -1,    -1,   166,    -1,    -1,   169,    -1,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    -1,    -1,    -1,   190,    -1,
      -1,    -1,    -1,   195,    -1,   143,   198,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
     266,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
      -1,   169,    -1,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
      -1,    -1,   190,    -1,    -1,     5,    -1,   195,    -1,    -1,
     198,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,
      30,    -1,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    -1,    18,    -1,    -1,   236,   237,   238,   266,   240,
     241,   242,   243,    -1,    30,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   262,   236,   237,   238,    -1,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,    -1,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,
      -1,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,    -1,    -1,    -1,
     190,    -1,    -1,    -1,    -1,   195,    -1,   143,   198,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     8,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,
     166,    -1,    -1,   169,    -1,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,     8,    -1,    -1,   190,     3,     4,     5,    -1,   195,
      -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266,    25,    26,    27,
      28,    -1,     8,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     266,    25,    26,    27,    28,    -1,     8,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,     4,     5,     6,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,    -1,   256,     3,     4,     5,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,   249,    -1,    -1,    -1,   262,   254,    -1,    -1,   257,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,     5,    -1,    -1,   262,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      22,    23,    -1,    -1,    -1,   249,    -1,    -1,    30,    -1,
     254,    -1,    -1,   257,   236,   237,   238,    -1,   240,   241,
     242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
     262,    63,    76,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      82,    -1,    84,   254,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,   254,    -1,
     112,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,   169,    -1,    -1,   256,    -1,
      -1,   236,   237,   238,   262,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,    -1,   199,   188,   262,   190,    -1,
      -1,    -1,   267,    -1,    -1,    -1,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   236,
     237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
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
      -1,   256,    -1,    -1,   236,   237,   238,   262,   240,   241,
     242,   243,   267,    -1,   246,   247,   248,   249,   250,   251,
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
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,   258,
     236,   237,   238,   262,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,   258,   236,   237,   238,   262,   240,   241,   242,
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
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,   258,
     236,   237,   238,   262,   240,   241,   242,   243,    -1,    -1,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,   258,   236,   237,   238,   262,   240,   241,   242,
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
      -1,   256,    -1,    -1,    -1,   260,    -1,   262,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,   262,   236,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,   253,    -1,    -1,   256,    -1,   258
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
     260,   260,   260,   258,   266,   266,     7,     7,     7,   457,
       8,   451,   291,   454,    65,   287,   290,     7,   235,   265,
     337,     7,   265,   295,     7,   321,     7,   327,   259,   259,
     250,     7,   305,   306,     7,   360,     7,   295,     7,   344,
     350,   357,     7,     5,   301,   235,     7,   295,     7,   367,
     373,   295,     7,   394,   265,   295,     7,   423,     7,     7,
       7,   436,     7,     7,     7,   266,   437,   260,   267,   267,
     451,   235,   265,   451,   258,   266,   294,   268,   283,    67,
     337,   265,   266,   447,     7,   265,   266,   265,   266,   451,
       5,   250,     5,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    61,    62,   123,
     130,   242,   248,   249,   254,   257,   262,   263,   265,   307,
     310,   388,   450,   452,   457,   265,   266,   447,     7,   265,
     266,   447,   265,   266,   265,   266,   447,   265,     7,   301,
       7,   265,   266,   447,   118,   119,   120,   121,   266,   374,
     447,     7,   265,   266,   447,   401,     7,   265,   266,   447,
     266,   194,   195,   196,   197,   438,   447,   451,   451,   266,
     265,   451,     8,     8,   249,   292,   288,   294,   280,   266,
     338,   322,   328,   260,   260,   388,   259,   314,   259,   259,
     259,   259,   311,   312,     5,   307,   307,   307,   307,     3,
       3,     5,   144,   214,     5,   457,   236,   237,   238,   239,
     240,   241,   242,   243,   246,   247,   248,   249,   250,   251,
     252,   253,   256,   262,   264,   259,   315,   315,   361,   345,
     351,   358,   451,     7,   368,   265,   265,   265,   265,   395,
       5,    16,   143,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   160,   163,   166,   169,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   190,   195,   198,   266,   402,
     447,   424,   259,   259,   259,   259,   260,   260,   266,   266,
     451,   451,   292,   260,     5,    66,   289,   259,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    81,    87,   100,
     266,   339,    70,    82,   266,   323,    83,    87,    88,   266,
     329,   388,   259,   388,   307,     5,     5,   259,   259,   243,
     258,   457,   266,   308,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
       3,   451,   260,   261,   307,   316,   265,   317,    99,   109,
     110,   111,   266,   362,    97,    99,   100,   101,   102,   103,
     104,   105,   266,   346,    97,    99,   107,   266,   352,    87,
      97,    99,   266,   359,   266,    82,    84,    85,    87,    97,
     114,   115,   116,   131,   187,   259,   266,   369,   379,   379,
     383,   375,    87,    97,   135,   136,   137,   138,   139,   140,
     266,   396,   447,   259,   457,   259,   259,   301,   259,   259,
     259,   259,   259,   259,   259,   259,   259,     7,   259,   259,
     265,   259,   265,   259,   265,   265,   259,   259,   259,   259,
     259,   259,   259,   259,   265,   265,   259,   259,   259,   259,
     259,   265,   265,   259,   403,   404,    76,    97,   266,   425,
     440,   457,     6,   440,   284,     6,   235,     8,   457,   290,
     262,   284,   284,   284,   284,   259,   301,   259,   301,   301,
     301,   265,   457,     5,   259,   301,    65,   284,     5,   265,
       5,     5,   260,   305,   260,   267,   259,   260,   305,   305,
     259,   266,   307,   260,   260,   267,    70,   454,     5,   286,
     289,   457,     5,     5,     5,   265,   265,   303,   303,   284,
     284,     5,     5,   265,   355,     5,   265,   353,     5,   457,
       5,     5,     5,     5,     5,   108,   118,   457,   457,   451,
       3,   284,   453,   371,    82,    84,    85,    86,   123,   124,
     125,   126,   127,   128,   129,   131,   132,   266,   380,   387,
     266,   131,   266,   384,   387,    87,   111,   265,   266,   376,
       5,   457,   265,   397,   457,   458,   453,   458,   265,   399,
     457,   457,   457,     7,   301,   301,     7,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   301,   451,   408,   451,
     410,   451,   412,   414,   284,   458,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
       5,   457,   259,   259,   265,   457,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   443,   259,   442,   267,   443,
     439,   444,   265,   451,   290,     7,     7,     7,     7,   301,
       7,   301,     7,     7,     7,   452,     7,     7,   301,     7,
       7,     7,   317,   330,     7,     7,   267,   307,   313,   265,
     260,   267,   305,     8,   307,   259,   266,     7,     7,     7,
       7,     7,     7,   295,   265,   347,     5,   301,   304,     7,
       7,     7,     7,     7,   356,     7,   354,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,   370,     7,
       7,     7,     7,   305,     5,     5,     5,   259,   284,     7,
     259,   284,   259,     5,     5,   377,     7,     7,   398,     7,
       7,     7,     7,   400,     7,     7,   260,   260,   260,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   260,   267,
     141,   144,   157,   158,   159,   266,   409,   267,   141,   144,
     157,   158,   161,   162,   266,   411,   267,    19,    89,   141,
     164,   165,   266,   413,    19,    89,   134,   141,   142,   164,
     167,   168,   266,   415,   267,   260,   267,   267,   267,   267,
     267,   267,   266,   266,   267,   267,   267,   267,   267,   267,
     267,   260,   303,   405,   457,   405,   426,     7,   284,   284,
     265,   284,   265,   265,   265,   265,   265,   444,   284,   248,
     249,   250,   251,   267,   441,   233,   301,   444,   267,   260,
     267,   445,   266,   281,   267,   267,   294,   267,     7,   265,
     266,   284,   260,   305,   451,     3,   260,   309,   284,     7,
     113,     7,   294,   266,   267,   266,   294,   266,   294,   259,
     372,   260,     7,     7,     7,     3,     7,   381,     7,   385,
       7,     7,    79,    80,   117,   131,   266,   378,   266,   294,
     266,   294,     7,   265,     7,   301,   457,   457,   451,   451,
     451,   457,   301,   284,     7,   451,   265,   301,   451,   451,
     301,   451,   265,   301,   451,   451,   451,   451,   451,   451,
     451,   265,   451,   301,   451,   451,   457,   265,   265,   451,
     451,   265,   301,     7,   301,   453,   453,   453,   451,   453,
       7,     7,   457,   457,   451,   457,   457,   284,     5,     7,
     406,   406,     5,   118,   266,   447,   209,   301,   265,   454,
     265,   265,   265,   260,   260,     5,   259,   444,   260,   131,
       7,    76,   137,   169,   199,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   267,   301,
     301,   452,   301,   331,   260,   260,   267,   260,   307,   260,
       5,     5,   301,     5,     5,   457,     7,     7,   260,   305,
     305,   388,   388,   388,   284,   457,   457,   401,   260,   267,
     267,   267,   267,   267,   267,   260,   267,   267,   401,     7,
       7,     7,     7,   267,   401,     7,     7,     7,     7,     7,
     267,     7,     7,   401,     7,     7,     7,     7,     7,   401,
     401,     7,     7,   416,   260,   267,   267,   260,   260,   267,
     267,   267,   267,   267,   260,   260,   260,   267,   266,   267,
     260,   267,   407,   260,   265,   265,     5,   267,   454,   266,
     454,   454,   454,     7,   442,   458,   260,     7,   284,   453,
     453,   265,     5,   243,   244,   458,   451,   451,   453,   451,
       5,   446,   446,   446,   451,     5,   265,   451,   303,   265,
     265,   265,   265,     3,   262,   260,   260,   266,   260,    90,
      91,    92,    93,    94,    95,   266,   332,   260,   451,   266,
       7,   266,   260,     7,   382,   386,     7,     7,     7,     7,
     266,     7,   453,   451,   453,   451,   451,   457,     7,   457,
     301,   266,   301,   266,   301,   266,   266,   266,   265,   266,
       7,   451,   301,     7,     7,   451,   458,   458,   451,   451,
       7,     7,     7,   458,     7,   136,     7,   210,   214,   453,
       7,   427,   427,   265,   301,   266,   266,   266,   266,   267,
     260,     7,   444,   301,   458,   458,     6,   454,   451,   451,
     451,   454,   290,     7,     7,     7,     7,     5,   451,   451,
     451,   451,   451,   265,   266,   112,     7,   267,   267,    17,
     260,   260,   267,   267,   267,   267,   260,   267,   267,   260,
     267,   417,   267,   260,   267,   260,   260,   260,   267,   267,
     266,   267,   458,   458,   453,    82,    84,    87,   131,   266,
     387,   428,   266,   451,   267,   265,   265,   265,   265,   444,
     260,   267,   266,   267,   267,   267,   266,   267,     7,     7,
       7,     7,     7,     7,   451,     5,   305,   388,   265,     7,
       7,   451,   451,   451,   451,     7,   301,   451,   265,   451,
      19,    87,    89,   100,   113,   131,   266,   418,   301,     7,
     301,     7,     7,     7,   451,   451,     7,   301,   266,   267,
       5,     5,     5,   284,   259,   267,   301,   454,   454,   454,
     454,   260,     7,   301,   451,   451,   451,   451,   266,   295,
     260,   260,   401,   260,   260,   260,   267,   260,   267,   401,
     260,     5,     5,   451,   301,     5,   284,   260,   260,   267,
     260,   260,   266,     7,   451,     7,     7,     7,     7,   429,
     451,   266,   266,   266,   266,   266,     7,   267,   267,   267,
     267,   260,     7,     7,     7,   266,     7,     7,     7,   453,
     265,   451,   266,   265,     7,     7,     7,     7,     7,     7,
       7,     7,   301,   265,   265,     7,   266,   305,   266,   265,
     265,   266,   265,   265,   301,   451,   451,   451,     7,   348,
     267,   401,   260,   401,   260,   401,   401,     7,   260,   265,
     453,   454,   265,   454,   454,   266,   266,   266,   266,    63,
     451,   266,   265,   266,     7,   266,   266,     7,   451,   267,
     266,   451,   266,   266,   285,   457,   267,   401,     7,     7,
     266,   453,   266,   266,   266,   265,     7,   265,   296,   451,
     266,   267,   265,   454,   349,   266,   260,   453,   451,   266,
     133,     7,   266,   267,   266,     5,   451,   265,   296,   266,
     451,     7,   267,   266,   451,   267,   451,   266
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
	Group_S.InitialList = List_Create( 5, 5, sizeof(int)) ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, (yyvsp[(3) - (3)].c), 0, 0) ;
      }
      else  Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 82:
#line 840 "GetDP.y"
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
#line 851 "GetDP.y"
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
#line 866 "GetDP.y"
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
#line 892 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(3) - (4)].d) ; ;}
    break;

  case 88:
#line 897 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 89:
#line 898 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 90:
#line 903 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 94:
#line 922 "GetDP.y"
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
#line 942 "GetDP.y"
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
#line 993 "GetDP.y"
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
#line 1003 "GetDP.y"
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
#line 1026 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = (yyvsp[(3) - (4)].d) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 101:
#line 1032 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (4)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", (yyvsp[(3) - (4)].c)) ;
      Free((yyvsp[(3) - (4)].c)) ;  (yyval.i) = i ;
    ;}
    break;

  case 102:
#line 1038 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 103:
#line 1041 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = (yyvsp[(2) - (2)].l) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 104:
#line 1046 "GetDP.y"
    { Expression_S.Type = UNDEFINED_EXP ; 
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;}
    break;

  case 105:
#line 1053 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1064 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &((yyvsp[(1) - (1)].i))) ; ;}
    break;

  case 108:
#line 1067 "GetDP.y"
    { List_Add(ListOfInt_L, &((yyvsp[(3) - (3)].i))) ; ;}
    break;

  case 109:
#line 1073 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1077 "GetDP.y"
    { (yyval.l) = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1089 "GetDP.y"
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
#line 1102 "GetDP.y"
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
#line 1116 "GetDP.y"
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
#line 1131 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1137 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1143 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1149 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1155 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1161 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1167 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1173 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1179 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1185 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1191 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1197 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1203 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1209 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1215 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1221 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1227 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1234 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1242 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1255 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1261 "GetDP.y"
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
#line 1335 "GetDP.y"
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
#line 1369 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (1)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (1)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1378 "GetDP.y"
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
#line 1390 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1392 "GetDP.y"
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
#line 1404 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1406 "GetDP.y"
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
#line 1418 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1420 "GetDP.y"
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
#line 1434 "GetDP.y"
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
#line 1446 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1452 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1458 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1460 "GetDP.y"
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
#line 1489 "GetDP.y"
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
#line 1515 "GetDP.y"
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
#line 1528 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1534 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1541 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[(2) - (2)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1547 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[(3) - (3)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1554 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[(2) - (2)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1561 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[(3) - (3)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1572 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 161:
#line 1573 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 162:
#line 1574 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 163:
#line 1579 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 164:
#line 1580 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 165:
#line 1586 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 166:
#line 1589 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 167:
#line 1592 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 168:
#line 1607 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 169:
#line 1612 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 170:
#line 1619 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 172:
#line 1628 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 173:
#line 1633 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 174:
#line 1640 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 175:
#line 1643 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 176:
#line 1650 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 178:
#line 1660 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 179:
#line 1663 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 180:
#line 1666 "GetDP.y"
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

  case 181:
#line 1704 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 182:
#line 1710 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 183:
#line 1717 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 185:
#line 1730 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 186:
#line 1737 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 187:
#line 1740 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 188:
#line 1747 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 189:
#line 1750 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 190:
#line 1757 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 192:
#line 1769 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 193:
#line 1779 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 194:
#line 1789 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 195:
#line 1796 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 196:
#line 1799 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 197:
#line 1806 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 199:
#line 1822 "GetDP.y"
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

  case 200:
#line 1870 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 201:
#line 1873 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 202:
#line 1876 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 203:
#line 1879 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 204:
#line 1882 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 205:
#line 1893 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 207:
#line 1903 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 209:
#line 1913 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 211:
#line 1926 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 212:
#line 1933 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 213:
#line 1941 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 214:
#line 1950 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 215:
#line 1953 "GetDP.y"
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

  case 216:
#line 1971 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 217:
#line 1976 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 218:
#line 1981 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 219:
#line 1990 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 221:
#line 2004 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 222:
#line 2014 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 223:
#line 2019 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 224:
#line 2025 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 225:
#line 2030 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 226:
#line 2038 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 227:
#line 2046 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2055 "GetDP.y"
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

  case 229:
#line 2073 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2082 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2090 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2098 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(2) - (3)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2108 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2118 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2128 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[(3) - (7)].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = (yyvsp[(5) - (7)].i) ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2148 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 238:
#line 2159 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 240:
#line 2170 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 243:
#line 2184 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 244:
#line 2191 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 245:
#line 2199 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 246:
#line 2208 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 247:
#line 2211 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 248:
#line 2214 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 249:
#line 2217 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 250:
#line 2224 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 251:
#line 2230 "GetDP.y"
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

  case 252:
#line 2247 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 253:
#line 2256 "GetDP.y"
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

  case 255:
#line 2277 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 256:
#line 2280 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 257:
#line 2285 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 258:
#line 2290 "GetDP.y"
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

  case 259:
#line 2304 "GetDP.y"
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

  case 260:
#line 2324 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 261:
#line 2329 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 262:
#line 2334 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 263:
#line 2339 "GetDP.y"
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

  case 265:
#line 2373 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 266:
#line 2377 "GetDP.y"
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

  case 267:
#line 2387 "GetDP.y"
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

  case 268:
#line 2451 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 269:
#line 2457 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 270:
#line 2466 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 272:
#line 2477 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 273:
#line 2484 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 274:
#line 2487 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 275:
#line 2494 "GetDP.y"
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

  case 276:
#line 2510 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 277:
#line 2516 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 278:
#line 2519 "GetDP.y"
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

  case 279:
#line 2538 "GetDP.y"
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

  case 280:
#line 2550 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 281:
#line 2557 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 282:
#line 2562 "GetDP.y"
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

  case 283:
#line 2577 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 284:
#line 2583 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 285:
#line 2589 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 286:
#line 2598 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 288:
#line 2610 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 289:
#line 2617 "GetDP.y"
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

  case 290:
#line 2628 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[(2) - (3)].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", (yyvsp[(2) - (3)].c)) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 291:
#line 2642 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 292:
#line 2647 "GetDP.y"
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

  case 293:
#line 2684 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 294:
#line 2693 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 296:
#line 2709 "GetDP.y"
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

  case 297:
#line 2742 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 298:
#line 2745 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 299:
#line 2748 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 300:
#line 2763 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 302:
#line 2773 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 304:
#line 2784 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 306:
#line 2795 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 307:
#line 2802 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 308:
#line 2810 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 310:
#line 2822 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 311:
#line 2828 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 312:
#line 2833 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 314:
#line 2844 "GetDP.y"
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

  case 316:
#line 2867 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 317:
#line 2870 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 318:
#line 2874 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 319:
#line 2877 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 320:
#line 2887 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 321:
#line 2891 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 322:
#line 2899 "GetDP.y"
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

  case 323:
#line 2923 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 324:
#line 2928 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 325:
#line 2934 "GetDP.y"
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

  case 326:
#line 3245 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 327:
#line 3250 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 328:
#line 3259 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 329:
#line 3268 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 330:
#line 3277 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 332:
#line 3285 "GetDP.y"
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

  case 333:
#line 3325 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 334:
#line 3330 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 335:
#line 3335 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 336:
#line 3344 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 337:
#line 3347 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 338:
#line 3350 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 339:
#line 3353 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 340:
#line 3364 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 342:
#line 3375 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 343:
#line 3385 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 344:
#line 3395 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 345:
#line 3409 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 347:
#line 3421 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 348:
#line 3423 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 349:
#line 3425 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 350:
#line 3427 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 351:
#line 3435 "GetDP.y"
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

  case 353:
#line 3460 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 354:
#line 3468 "GetDP.y"
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

  case 355:
#line 3547 "GetDP.y"
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

  case 356:
#line 3601 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 357:
#line 3606 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 358:
#line 3615 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 359:
#line 3624 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 360:
#line 3629 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 361:
#line 3638 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 362:
#line 3649 "GetDP.y"
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

  case 364:
#line 3678 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 365:
#line 3683 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 366:
#line 3691 "GetDP.y"
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

  case 367:
#line 3746 "GetDP.y"
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

  case 368:
#line 3763 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 369:
#line 3764 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 370:
#line 3765 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 371:
#line 3766 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 372:
#line 3767 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 373:
#line 3768 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 374:
#line 3769 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 375:
#line 3770 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 376:
#line 3777 "GetDP.y"
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

  case 377:
#line 3798 "GetDP.y"
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

  case 378:
#line 3822 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 380:
#line 3832 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 382:
#line 3843 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 384:
#line 3855 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 385:
#line 3862 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 386:
#line 3870 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 387:
#line 3873 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 388:
#line 3875 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 390:
#line 3883 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 391:
#line 3888 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 392:
#line 3893 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 393:
#line 3902 "GetDP.y"
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

  case 395:
#line 3922 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 396:
#line 3925 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 397:
#line 3934 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 398:
#line 3937 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 399:
#line 3942 "GetDP.y"
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

  case 400:
#line 3953 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 401:
#line 3958 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 402:
#line 3963 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 404:
#line 3974 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 405:
#line 3983 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 406:
#line 3990 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 407:
#line 3993 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 408:
#line 4005 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(1) - (1)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 409:
#line 4015 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 410:
#line 4021 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 411:
#line 4024 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 412:
#line 4036 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 413:
#line 4044 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 414:
#line 4057 "GetDP.y"
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

  case 415:
#line 4079 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 416:
#line 4086 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 417:
#line 4092 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 418:
#line 4098 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 419:
#line 4104 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 420:
#line 4112 "GetDP.y"
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

  case 421:
#line 4134 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 422:
#line 4141 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 423:
#line 4147 "GetDP.y"
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

  case 424:
#line 4158 "GetDP.y"
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

  case 425:
#line 4169 "GetDP.y"
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

  case 426:
#line 4182 "GetDP.y"
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

  case 427:
#line 4197 "GetDP.y"
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

  case 428:
#line 4212 "GetDP.y"
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

  case 429:
#line 4227 "GetDP.y"
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

  case 430:
#line 4247 "GetDP.y"
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

  case 431:
#line 4268 "GetDP.y"
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

  case 432:
#line 4280 "GetDP.y"
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

  case 433:
#line 4300 "GetDP.y"
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

  case 434:
#line 4317 "GetDP.y"
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

  case 435:
#line 4336 "GetDP.y"
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

  case 436:
#line 4357 "GetDP.y"
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

  case 437:
#line 4371 "GetDP.y"
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

  case 438:
#line 4385 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 439:
#line 4393 "GetDP.y"
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

  case 440:
#line 4427 "GetDP.y"
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

  case 441:
#line 4440 "GetDP.y"
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

  case 442:
#line 4454 "GetDP.y"
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

  case 443:
#line 4467 "GetDP.y"
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

  case 444:
#line 4479 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 446:
#line 4488 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 448:
#line 4497 "GetDP.y"
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

  case 449:
#line 4508 "GetDP.y"
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

  case 450:
#line 4520 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[(3) - (5)].c));
    ;}
    break;

  case 451:
#line 4530 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 452:
#line 4538 "GetDP.y"
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

  case 453:
#line 4551 "GetDP.y"
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

  case 454:
#line 4564 "GetDP.y"
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

  case 455:
#line 4578 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 456:
#line 4588 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[(3) - (5)].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[(3) - (5)].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[(3) - (5)].c)) ;
    ;}
    break;

  case 457:
#line 4598 "GetDP.y"
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

  case 458:
#line 4612 "GetDP.y"
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

  case 459:
#line 4626 "GetDP.y"
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

  case 460:
#line 4645 "GetDP.y"
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

  case 461:
#line 4663 "GetDP.y"
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

  case 462:
#line 4674 "GetDP.y"
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

  case 463:
#line 4689 "GetDP.y"
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

  case 464:
#line 4704 "GetDP.y"
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

  case 465:
#line 4719 "GetDP.y"
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

  case 466:
#line 4734 "GetDP.y"
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

  case 467:
#line 4749 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 468:
#line 4760 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 469:
#line 4765 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 470:
#line 4775 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 472:
#line 4785 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 473:
#line 4788 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[(3) - (3)].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 474:
#line 4798 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[(2) - (2)].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(2) - (2)].l)) ; i++) {
	List_Read((yyvsp[(2) - (2)].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 475:
#line 4814 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 477:
#line 4830 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 478:
#line 4834 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 479:
#line 4838 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 480:
#line 4842 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 481:
#line 4847 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 482:
#line 4858 "GetDP.y"
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

  case 484:
#line 4875 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 485:
#line 4879 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 486:
#line 4883 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 487:
#line 4887 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 488:
#line 4891 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 489:
#line 4896 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 490:
#line 4907 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 492:
#line 4922 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 493:
#line 4926 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4930 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 495:
#line 4934 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 496:
#line 4938 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 497:
#line 4949 "GetDP.y"
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

  case 499:
#line 4967 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 500:
#line 4971 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 501:
#line 4975 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 4979 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 503:
#line 4984 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(2) - (3)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 504:
#line 4994 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 505:
#line 5000 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 506:
#line 5006 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 507:
#line 5016 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 508:
#line 5019 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 509:
#line 5024 "GetDP.y"
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

  case 511:
#line 5042 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 512:
#line 5052 "GetDP.y"
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

  case 513:
#line 5081 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 514:
#line 5084 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 515:
#line 5087 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 516:
#line 5095 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 517:
#line 5112 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 519:
#line 5124 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 521:
#line 5133 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 523:
#line 5146 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 524:
#line 5153 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 525:
#line 5161 "GetDP.y"
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

  case 526:
#line 5174 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 527:
#line 5179 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 528:
#line 5185 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 529:
#line 5188 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 530:
#line 5191 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 531:
#line 5197 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 533:
#line 5208 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 534:
#line 5211 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 535:
#line 5217 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 536:
#line 5222 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 537:
#line 5228 "GetDP.y"
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

  case 538:
#line 5240 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 539:
#line 5245 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 541:
#line 5259 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 542:
#line 5266 "GetDP.y"
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

  case 543:
#line 5294 "GetDP.y"
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

  case 544:
#line 5305 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 545:
#line 5310 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 546:
#line 5319 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 547:
#line 5336 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 549:
#line 5348 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 551:
#line 5355 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 553:
#line 5367 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 554:
#line 5374 "GetDP.y"
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

  case 555:
#line 5386 "GetDP.y"
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

  case 556:
#line 5397 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 557:
#line 5402 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 558:
#line 5408 "GetDP.y"
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

  case 559:
#line 5425 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 560:
#line 5435 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 561:
#line 5438 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 562:
#line 5442 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 563:
#line 5455 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 564:
#line 5460 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 565:
#line 5465 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 566:
#line 5474 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 567:
#line 5483 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 568:
#line 5492 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 569:
#line 5498 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 570:
#line 5503 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 571:
#line 5511 "GetDP.y"
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

  case 572:
#line 5523 "GetDP.y"
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

  case 573:
#line 5546 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 574:
#line 5547 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 575:
#line 5548 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 576:
#line 5549 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 577:
#line 5555 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 578:
#line 5557 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 579:
#line 5563 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 580:
#line 5569 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 581:
#line 5576 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 582:
#line 5585 "GetDP.y"
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

  case 583:
#line 5607 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 584:
#line 5615 "GetDP.y"
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

  case 585:
#line 5626 "GetDP.y"
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

  case 586:
#line 5640 "GetDP.y"
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

  case 587:
#line 5661 "GetDP.y"
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

  case 588:
#line 5688 "GetDP.y"
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

  case 589:
#line 5719 "GetDP.y"
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

  case 590:
#line 5739 "GetDP.y"
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

  case 592:
#line 5775 "GetDP.y"
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

  case 593:
#line 5789 "GetDP.y"
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

  case 594:
#line 5803 "GetDP.y"
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

  case 595:
#line 5817 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 596:
#line 5821 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 597:
#line 5825 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 598:
#line 5829 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 599:
#line 5833 "GetDP.y"
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

  case 600:
#line 5843 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 601:
#line 5848 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 602:
#line 5853 "GetDP.y"
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

  case 603:
#line 5873 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 604:
#line 5877 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 605:
#line 5884 "GetDP.y"
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

  case 606:
#line 5894 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 607:
#line 5903 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 608:
#line 5912 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 609:
#line 5919 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 610:
#line 5927 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 611:
#line 5931 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 612:
#line 5940 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 613:
#line 5944 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 614:
#line 5948 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 615:
#line 5956 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 616:
#line 5962 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 617:
#line 5966 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 618:
#line 5974 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 619:
#line 5981 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 620:
#line 5989 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 621:
#line 5996 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 622:
#line 6004 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 623:
#line 6011 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 624:
#line 6019 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 625:
#line 6023 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 626:
#line 6032 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 627:
#line 6038 "GetDP.y"
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

  case 628:
#line 6088 "GetDP.y"
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

  case 629:
#line 6103 "GetDP.y"
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

  case 630:
#line 6119 "GetDP.y"
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

  case 631:
#line 6139 "GetDP.y"
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

  case 632:
#line 6159 "GetDP.y"
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

  case 633:
#line 6197 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 634:
#line 6201 "GetDP.y"
    {
    ;}
    break;

  case 637:
#line 6217 "GetDP.y"
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

  case 638:
#line 6232 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 639:
#line 6238 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
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

  case 642:
#line 6266 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 643:
#line 6271 "GetDP.y"
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

  case 644:
#line 6287 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 645:
#line 6292 "GetDP.y"
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

  case 646:
#line 6304 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[(3) - (5)].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 647:
#line 6314 "GetDP.y"
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

  case 648:
#line 6328 "GetDP.y"
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

  case 650:
#line 6354 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6360 "GetDP.y"
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

  case 652:
#line 6374 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 653:
#line 6380 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 654:
#line 6390 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 655:
#line 6391 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 656:
#line 6392 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 657:
#line 6393 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 658:
#line 6394 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 659:
#line 6395 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 660:
#line 6396 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 661:
#line 6397 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 662:
#line 6398 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 663:
#line 6399 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 664:
#line 6400 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 665:
#line 6401 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 666:
#line 6402 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 667:
#line 6403 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 668:
#line 6404 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 669:
#line 6405 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 670:
#line 6406 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 671:
#line 6407 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 672:
#line 6408 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 673:
#line 6409 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 674:
#line 6410 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 675:
#line 6414 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 676:
#line 6415 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 677:
#line 6416 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 678:
#line 6417 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 679:
#line 6418 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 680:
#line 6419 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 681:
#line 6420 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 682:
#line 6421 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 683:
#line 6422 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 684:
#line 6423 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 685:
#line 6424 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 686:
#line 6425 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 687:
#line 6426 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 688:
#line 6427 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 689:
#line 6428 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 690:
#line 6429 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 691:
#line 6430 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 692:
#line 6431 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 693:
#line 6432 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 694:
#line 6433 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 695:
#line 6434 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 696:
#line 6435 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 697:
#line 6436 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 698:
#line 6437 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 699:
#line 6438 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 700:
#line 6439 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 701:
#line 6440 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 702:
#line 6441 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 703:
#line 6442 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 704:
#line 6443 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 705:
#line 6444 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 706:
#line 6445 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6446 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 708:
#line 6447 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 709:
#line 6448 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 710:
#line 6449 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 711:
#line 6450 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 712:
#line 6451 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 713:
#line 6453 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 714:
#line 6455 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 715:
#line 6460 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 716:
#line 6461 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 717:
#line 6462 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 718:
#line 6463 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 719:
#line 6464 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 720:
#line 6465 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 721:
#line 6466 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 722:
#line 6468 "GetDP.y"
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

  case 723:
#line 6486 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 724:
#line 6489 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 725:
#line 6495 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 726:
#line 6498 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 727:
#line 6505 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 728:
#line 6511 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 729:
#line 6514 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 730:
#line 6517 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 731:
#line 6529 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 732:
#line 6535 "GetDP.y"
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

  case 733:
#line 6546 "GetDP.y"
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

  case 734:
#line 6562 "GetDP.y"
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

  case 735:
#line 6584 "GetDP.y"
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

  case 736:
#line 6599 "GetDP.y"
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

  case 737:
#line 6637 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 738:
#line 6645 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 739:
#line 6657 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 740:
#line 6665 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      /* error in some cases?!?
      $$ = (char *)Realloc($1,(strlen($1)+strlen(tmpstr)+1)*sizeof(char)) ;
      */
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 741:
#line 6679 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 742:
#line 6682 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 743:
#line 6689 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 744:
#line 6692 "GetDP.y"
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

  case 745:
#line 6707 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 746:
#line 6712 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 747:
#line 6717 "GetDP.y"
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

  case 748:
#line 6736 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 749:
#line 6746 "GetDP.y"
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
#line 12017 "GetDP.tab.c"
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


#line 6757 "GetDP.y"



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


