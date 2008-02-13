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

/* $Id: GetDP.tab.c,v 1.116 2008-02-13 15:31:38 dular Exp $ */
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
#define YYLAST   7259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  270
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  759
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2054

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
     145,   149,   150,   153,   154,   157,   162,   168,   174,   180,
     182,   188,   190,   192,   193,   194,   213,   214,   221,   224,
     226,   228,   231,   233,   235,   237,   239,   240,   244,   248,
     250,   252,   256,   257,   261,   266,   268,   272,   276,   280,
     286,   292,   300,   302,   303,   307,   314,   315,   317,   322,
     323,   326,   330,   331,   334,   340,   347,   355,   357,   359,
     360,   364,   371,   376,   381,   382,   385,   389,   390,   394,
     396,   400,   401,   404,   406,   407,   408,   416,   420,   424,
     431,   435,   439,   443,   447,   451,   455,   459,   463,   467,
     471,   475,   479,   483,   487,   490,   493,   496,   500,   502,
     506,   509,   511,   514,   515,   521,   522,   530,   531,   543,
     553,   558,   563,   564,   572,   579,   582,   585,   588,   591,
     595,   598,   602,   606,   609,   613,   615,   619,   620,   624,
     631,   632,   637,   638,   641,   645,   650,   651,   656,   657,
     660,   664,   668,   673,   674,   679,   680,   683,   687,   691,
     696,   697,   702,   703,   706,   710,   714,   719,   720,   725,
     726,   729,   733,   737,   741,   745,   749,   753,   754,   757,
     761,   763,   765,   766,   769,   773,   778,   782,   787,   793,
     794,   799,   802,   803,   806,   810,   814,   818,   822,   826,
     830,   838,   842,   846,   850,   854,   858,   866,   874,   882,
     883,   886,   890,   892,   894,   895,   898,   901,   905,   910,
     914,   919,   924,   929,   934,   935,   940,   943,   944,   947,
     951,   955,   960,   965,   973,   977,   981,   985,   989,   990,
     991,   992,  1011,  1012,  1017,  1018,  1021,  1025,  1029,  1033,
    1035,  1039,  1040,  1044,  1046,  1050,  1051,  1055,  1056,  1061,
    1064,  1065,  1068,  1072,  1076,  1080,  1081,  1086,  1089,  1090,
    1093,  1097,  1101,  1105,  1109,  1110,  1113,  1117,  1119,  1121,
    1122,  1125,  1129,  1134,  1138,  1143,  1148,  1149,  1154,  1157,
    1158,  1161,  1165,  1169,  1173,  1177,  1181,  1182,  1188,  1192,
    1193,  1199,  1203,  1207,  1211,  1215,  1219,  1220,  1224,  1225,
    1228,  1231,  1234,  1239,  1244,  1249,  1254,  1255,  1258,  1262,
    1266,  1270,  1271,  1274,  1278,  1282,  1286,  1290,  1291,  1294,
    1295,  1296,  1306,  1310,  1314,  1318,  1321,  1325,  1331,  1332,
    1335,  1339,  1340,  1341,  1351,  1352,  1354,  1356,  1358,  1360,
    1362,  1364,  1366,  1371,  1375,  1376,  1379,  1383,  1385,  1387,
    1388,  1391,  1395,  1400,  1405,  1406,  1412,  1414,  1415,  1420,
    1423,  1426,  1427,  1430,  1434,  1438,  1442,  1446,  1450,  1454,
    1458,  1462,  1464,  1466,  1470,  1471,  1475,  1477,  1481,  1482,
    1486,  1487,  1490,  1494,  1498,  1503,  1508,  1513,  1518,  1524,
    1530,  1533,  1541,  1553,  1561,  1575,  1587,  1597,  1605,  1613,
    1621,  1631,  1641,  1651,  1663,  1675,  1687,  1693,  1711,  1725,
    1741,  1753,  1767,  1768,  1776,  1777,  1785,  1793,  1805,  1811,
    1817,  1827,  1837,  1847,  1853,  1859,  1871,  1881,  1896,  1911,
    1919,  1932,  1943,  1951,  1959,  1967,  1969,  1971,  1973,  1974,
    1977,  1981,  1985,  1988,  1989,  1992,  1996,  2000,  2004,  2008,
    2013,  2014,  2017,  2021,  2025,  2029,  2033,  2037,  2042,  2043,
    2046,  2050,  2054,  2058,  2062,  2067,  2068,  2071,  2075,  2079,
    2083,  2087,  2091,  2096,  2101,  2106,  2107,  2112,  2113,  2116,
    2120,  2124,  2128,  2132,  2136,  2140,  2141,  2144,  2148,  2150,
    2152,  2153,  2156,  2160,  2165,  2169,  2173,  2178,  2179,  2184,
    2187,  2190,  2191,  2194,  2198,  2203,  2204,  2210,  2216,  2219,
    2220,  2223,  2224,  2231,  2235,  2239,  2243,  2247,  2248,  2251,
    2255,  2257,  2259,  2260,  2263,  2267,  2271,  2275,  2279,  2284,
    2285,  2294,  2295,  2296,  2300,  2308,  2316,  2325,  2337,  2344,
    2345,  2356,  2358,  2362,  2369,  2371,  2373,  2375,  2377,  2378,
    2382,  2384,  2387,  2390,  2403,  2406,  2422,  2427,  2440,  2458,
    2481,  2494,  2495,  2498,  2502,  2507,  2512,  2516,  2519,  2522,
    2526,  2530,  2534,  2538,  2542,  2545,  2549,  2553,  2557,  2561,
    2565,  2569,  2573,  2579,  2582,  2585,  2589,  2599,  2603,  2606,
    2616,  2619,  2629,  2632,  2642,  2648,  2652,  2655,  2656,  2659,
    2666,  2675,  2684,  2695,  2697,  2702,  2704,  2710,  2715,  2720,
    2728,  2733,  2741,  2747,  2751,  2755,  2763,  2769,  2778,  2781,
    2782,  2786,  2793,  2799,  2805,  2807,  2809,  2811,  2813,  2815,
    2817,  2819,  2821,  2823,  2825,  2827,  2829,  2831,  2833,  2835,
    2837,  2839,  2841,  2843,  2845,  2847,  2849,  2853,  2856,  2859,
    2863,  2867,  2871,  2875,  2879,  2883,  2887,  2891,  2895,  2899,
    2903,  2907,  2911,  2915,  2920,  2925,  2930,  2935,  2940,  2945,
    2950,  2955,  2960,  2965,  2972,  2977,  2982,  2987,  2992,  2997,
    3002,  3009,  3016,  3023,  3029,  3032,  3034,  3036,  3038,  3040,
    3042,  3044,  3046,  3048,  3049,  3051,  3053,  3057,  3059,  3061,
    3065,  3069,  3073,  3079,  3083,  3088,  3093,  3100,  3109,  3118,
    3124,  3130,  3132,  3134,  3136,  3138,  3140,  3145,  3152,  3154
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     271,     0,    -1,    -1,   272,   273,    -1,    -1,    -1,   273,
     274,   275,    -1,    63,   265,   278,   266,    -1,   100,   265,
     299,   266,    -1,    69,   265,   334,   266,    -1,    82,   265,
     319,   266,    -1,    84,   265,   325,   266,    -1,    96,   265,
     341,   266,    -1,   112,   265,   364,   266,    -1,   133,   265,
     390,   266,    -1,   188,   265,   420,   266,    -1,   190,   265,
     431,   266,    -1,   435,    -1,   449,    -1,    23,   459,    -1,
     276,    -1,    20,     7,    -1,    20,   195,     7,    -1,    20,
      22,     7,    -1,    20,    37,     7,    -1,    20,    21,     7,
      -1,    20,    20,     7,    -1,    20,     5,     7,    -1,    21,
       7,    -1,    22,     7,    -1,    22,    63,     7,    -1,    22,
     100,     7,    -1,    22,    69,     7,    -1,    22,    82,     7,
      -1,    22,    84,     7,    -1,    22,    96,     7,    -1,    22,
     112,     7,    -1,    22,   133,     7,    -1,    22,   188,     7,
      -1,    22,   190,     7,    -1,    22,     3,     7,    -1,    -1,
     277,   439,    -1,    -1,   278,   279,    -1,   458,   235,   283,
       7,    -1,     5,   298,   235,   283,     7,    -1,     5,   296,
     235,   283,     7,    -1,    64,   259,   294,   260,     7,    -1,
     280,    -1,   458,   248,   235,   283,     7,    -1,   449,    -1,
     448,    -1,    -1,    -1,   458,   259,   452,   260,   235,    67,
     281,   259,   262,   291,   282,   267,   262,   291,   267,   452,
     260,     7,    -1,    -1,   287,   259,   288,   284,   289,   260,
      -1,   262,   291,    -1,   283,    -1,   458,    -1,   458,   297,
      -1,    70,    -1,     5,    -1,   291,    -1,    65,    -1,    -1,
     295,   290,   291,    -1,   295,    66,   458,    -1,     5,    -1,
     293,    -1,   265,   292,   266,    -1,    -1,   292,   295,   293,
      -1,   292,   295,   249,   293,    -1,     3,    -1,   257,   452,
     258,    -1,   268,   455,   268,    -1,     3,     8,   452,    -1,
     257,   452,   258,     8,   452,    -1,     3,     8,   452,     8,
     452,    -1,   257,   452,   258,     8,   452,     8,   452,    -1,
     458,    -1,    -1,   294,   295,     5,    -1,   294,   295,     5,
     265,   452,   266,    -1,    -1,   267,    -1,   265,   262,   452,
     266,    -1,    -1,   265,   266,    -1,   265,   452,   266,    -1,
      -1,   299,   300,    -1,    68,   259,   301,   260,     7,    -1,
     458,   259,   260,   235,   302,     7,    -1,   458,   259,   285,
     260,   235,   302,     7,    -1,   449,    -1,   448,    -1,    -1,
     301,   295,     5,    -1,   301,   295,     5,   265,   452,   266,
      -1,    24,   259,   452,   260,    -1,   100,   259,     5,   260,
      -1,    -1,   303,   306,    -1,   250,   250,   250,    -1,    -1,
     265,   305,   266,    -1,   302,    -1,   305,   267,   302,    -1,
      -1,   307,   308,    -1,   311,    -1,    -1,    -1,   308,   236,
     309,   308,     8,   310,   308,    -1,   308,   250,   308,    -1,
     308,   253,   308,    -1,    59,   259,   308,   267,   308,   260,
      -1,   308,   251,   308,    -1,   308,   248,   308,    -1,   308,
     249,   308,    -1,   308,   252,   308,    -1,   308,   256,   308,
      -1,   308,   242,   308,    -1,   308,   243,   308,    -1,   308,
     247,   308,    -1,   308,   246,   308,    -1,   308,   241,   308,
      -1,   308,   240,   308,    -1,   308,   239,   308,    -1,   308,
     238,   308,    -1,   308,   237,   308,    -1,   249,   308,    -1,
     248,   308,    -1,   254,   308,    -1,   257,   308,   258,    -1,
     453,    -1,   451,   316,   318,    -1,     5,   389,    -1,   389,
      -1,   389,   316,    -1,    -1,   123,   312,   259,   306,   260,
      -1,    -1,   130,   313,   259,   306,   267,     3,   260,    -1,
      -1,    61,   259,     5,   259,   314,   306,   260,   260,   265,
     452,   266,    -1,    62,   259,     5,   260,   265,   452,   267,
     452,   266,    -1,    56,   259,   389,   260,    -1,    58,   259,
     389,   260,    -1,    -1,    57,   315,   259,   306,   267,   285,
     260,    -1,   242,     5,   243,   259,   306,   260,    -1,   263,
       5,    -1,   263,   214,    -1,   263,   144,    -1,   263,     3,
      -1,   311,   262,     3,    -1,   262,     3,    -1,   311,   264,
     452,    -1,   259,   261,   260,    -1,   259,   260,    -1,   259,
     317,   260,    -1,   308,    -1,   317,   267,   308,    -1,    -1,
     265,   455,   266,    -1,   265,    70,   259,   285,   260,   266,
      -1,    -1,   319,   265,   320,   266,    -1,    -1,   320,   321,
      -1,    97,     5,     7,    -1,    83,   265,   322,   266,    -1,
      -1,   322,   265,   323,   266,    -1,    -1,   323,   324,    -1,
      70,   285,     7,    -1,    70,    65,     7,    -1,    82,     5,
     318,     7,    -1,    -1,   325,   265,   326,   266,    -1,    -1,
     326,   327,    -1,    97,     5,     7,    -1,    89,   302,     7,
      -1,    83,   265,   328,   266,    -1,    -1,   328,   265,   329,
     266,    -1,    -1,   329,   330,    -1,    87,     5,     7,    -1,
      88,     5,     7,    -1,    83,   265,   331,   266,    -1,    -1,
     331,   265,   332,   266,    -1,    -1,   332,   333,    -1,    90,
       5,     7,    -1,    91,   452,     7,    -1,    92,   452,     7,
      -1,    93,   452,     7,    -1,    94,   452,     7,    -1,    95,
     452,     7,    -1,    -1,   334,   335,    -1,   265,   336,   266,
      -1,   449,    -1,   448,    -1,    -1,   336,   337,    -1,    97,
     458,     7,    -1,    97,     5,   296,     7,    -1,    87,     5,
       7,    -1,    83,   265,   338,   266,    -1,    83,     5,   265,
     338,   266,    -1,    -1,   338,   265,   339,   266,    -1,   338,
     448,    -1,    -1,   339,   340,    -1,    87,     5,     7,    -1,
      70,   285,     7,    -1,    71,   285,     7,    -1,    77,   302,
       7,    -1,    76,   302,     7,    -1,    81,   458,     7,    -1,
      78,   265,   453,   295,   453,   266,     7,    -1,    72,   285,
       7,    -1,    73,   285,     7,    -1,   100,   302,     7,    -1,
      75,   302,     7,    -1,    74,   302,     7,    -1,   100,   259,
     302,   267,   302,   260,     7,    -1,    75,   259,   302,   267,
     302,   260,     7,    -1,    74,   259,   302,   267,   302,   260,
       7,    -1,    -1,   341,   342,    -1,   265,   343,   266,    -1,
     449,    -1,   448,    -1,    -1,   343,   344,    -1,   343,   448,
      -1,    97,   458,     7,    -1,    97,     5,   296,     7,    -1,
      87,     5,     7,    -1,    98,   265,   345,   266,    -1,   106,
     265,   351,   266,    -1,   108,   265,   358,   266,    -1,    69,
     265,   361,   266,    -1,    -1,   345,   265,   346,   266,    -1,
     345,   448,    -1,    -1,   346,   347,    -1,    97,     5,     7,
      -1,    99,     5,     7,    -1,    99,     5,   296,     7,    -1,
     100,     5,   348,     7,    -1,   101,   265,     5,   295,     5,
     266,     7,    -1,   102,   304,     7,    -1,   103,   304,     7,
      -1,   104,   285,     7,    -1,   105,   285,     7,    -1,    -1,
      -1,    -1,   265,   113,     5,     7,   112,     5,   296,     7,
     349,    63,   286,     7,   350,   133,     5,   297,     7,   266,
      -1,    -1,   351,   265,   352,   266,    -1,    -1,   352,   353,
      -1,    97,     5,     7,    -1,   107,   354,     7,    -1,    99,
     356,     7,    -1,     5,    -1,   265,   355,   266,    -1,    -1,
     355,   295,     5,    -1,     5,    -1,   265,   357,   266,    -1,
      -1,   357,   295,     5,    -1,    -1,   358,   265,   359,   266,
      -1,   358,   448,    -1,    -1,   359,   360,    -1,    97,   458,
       7,    -1,    87,     5,     7,    -1,    99,     5,     7,    -1,
      -1,   361,   265,   362,   266,    -1,   361,   448,    -1,    -1,
     362,   363,    -1,    99,     5,     7,    -1,   109,   287,     7,
      -1,   110,   290,     7,    -1,   111,   458,     7,    -1,    -1,
     364,   365,    -1,   265,   366,   266,    -1,   449,    -1,   448,
      -1,    -1,   366,   367,    -1,    97,   458,     7,    -1,    97,
       5,   296,     7,    -1,    87,     5,     7,    -1,   113,   265,
     368,   266,    -1,   117,   265,   374,   266,    -1,    -1,   368,
     265,   369,   266,    -1,   368,   448,    -1,    -1,   369,   370,
      -1,    97,   458,     7,    -1,    87,   108,     7,    -1,    87,
     118,     7,    -1,    87,     5,     7,    -1,   187,   454,     7,
      -1,    -1,   114,   458,   371,   373,     7,    -1,   115,   452,
       7,    -1,    -1,   259,   372,   306,   260,     7,    -1,   131,
     285,     7,    -1,    84,     5,     7,    -1,    85,     5,     7,
      -1,    82,     5,     7,    -1,   116,     3,     7,    -1,    -1,
     259,   458,   260,    -1,    -1,   374,   375,    -1,   374,   449,
      -1,   374,   448,    -1,   118,   265,   380,   266,    -1,   119,
     265,   380,   266,    -1,   120,   265,   384,   266,    -1,   121,
     265,   376,   266,    -1,    -1,   376,   377,    -1,    87,     5,
       7,    -1,   111,     5,     7,    -1,   265,   378,   266,    -1,
      -1,   378,   379,    -1,    79,   389,     7,    -1,    80,   389,
       7,    -1,   117,   389,     7,    -1,   131,   285,     7,    -1,
      -1,   380,   381,    -1,    -1,    -1,   388,   259,   382,   306,
     383,   267,   306,   260,     7,    -1,   131,   285,     7,    -1,
      82,     5,     7,    -1,    84,     5,     7,    -1,   132,     7,
      -1,    85,     5,     7,    -1,    86,   259,     3,   260,     7,
      -1,    -1,   384,   385,    -1,   131,   285,     7,    -1,    -1,
      -1,   388,   259,   386,   306,   387,   267,   389,   260,     7,
      -1,    -1,   123,    -1,   124,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   265,     5,   458,   266,
      -1,   265,   458,   266,    -1,    -1,   390,   391,    -1,   265,
     392,   266,    -1,   449,    -1,   448,    -1,    -1,   392,   393,
      -1,    97,   458,     7,    -1,    97,     5,   296,     7,    -1,
     134,   265,   395,   266,    -1,    -1,   141,   394,   265,   402,
     266,    -1,   448,    -1,    -1,   395,   265,   396,   266,    -1,
     395,   448,    -1,   395,   449,    -1,    -1,   396,   397,    -1,
      97,   458,     7,    -1,    87,     5,     7,    -1,   135,   398,
       7,    -1,   136,   459,     7,    -1,   139,   400,     7,    -1,
     140,   458,     7,    -1,   137,   454,     7,    -1,   138,   459,
       7,    -1,   448,    -1,   458,    -1,   265,   399,   266,    -1,
      -1,   399,   295,   458,    -1,   458,    -1,   265,   401,   266,
      -1,    -1,   401,   295,   458,    -1,    -1,   402,   403,    -1,
       5,   458,     7,    -1,   143,   302,     7,    -1,   156,   265,
     409,   266,    -1,   160,   265,   411,   266,    -1,   163,   265,
     413,   266,    -1,   166,   265,   415,   266,    -1,     5,   259,
     458,   260,     7,    -1,   143,   259,   302,   260,     7,    -1,
     154,     7,    -1,    16,   259,   302,   260,   265,   402,   266,
      -1,    16,   259,   302,   260,   265,   402,   266,    17,   265,
     402,   266,    -1,   145,   259,   458,   267,   302,   260,     7,
      -1,   172,   259,   458,   267,   302,   267,   302,   267,   302,
     267,   302,   260,     7,    -1,   172,   259,   458,   267,   302,
     267,   302,   267,   302,   260,     7,    -1,   172,   259,   458,
     267,   302,   267,   302,   260,     7,    -1,   173,   259,   458,
     267,   454,   260,     7,    -1,   174,   259,   458,   267,   454,
     260,     7,    -1,   152,   259,   458,   267,   302,   260,     7,
      -1,   153,   259,   458,   267,   285,   267,   458,   260,     7,
      -1,   146,   259,   458,   267,   458,   267,   454,   260,     7,
      -1,   147,   259,   458,   267,   458,   267,   452,   260,     7,
      -1,   148,   259,   458,   267,   452,   267,   454,   267,   452,
     260,     7,    -1,   149,   259,   458,   267,   452,   267,   452,
     267,   452,   260,     7,    -1,   150,   259,   458,   267,   452,
     267,   452,   267,   452,   260,     7,    -1,   155,   259,   302,
     260,     7,    -1,   151,   259,   458,   267,   458,   267,   458,
     267,   452,   267,   454,   267,   452,   267,   452,   260,     7,
      -1,   156,   259,   452,   267,   452,   267,   302,   267,   302,
     260,   265,   402,   266,    -1,   160,   259,   452,   267,   452,
     267,   302,   267,   452,   267,   452,   260,   265,   402,   266,
      -1,   163,   259,   452,   267,   452,   267,   302,   260,   265,
     402,   266,    -1,   163,   259,   452,   267,   452,   267,   302,
     267,   452,   260,   265,   402,   266,    -1,    -1,   195,   404,
     259,   406,   407,   260,     7,    -1,    -1,   198,   405,   259,
     406,   407,   260,     7,    -1,   169,   259,   285,   267,   302,
     260,     7,    -1,   169,   259,   285,   267,   302,   267,   452,
     267,   302,   260,     7,    -1,   190,   259,   458,   260,     7,
      -1,   171,   259,   459,   260,     7,    -1,   175,   259,   458,
     267,   454,   267,   452,   260,     7,    -1,   176,   259,   458,
     267,   452,   267,   459,   260,     7,    -1,   177,   259,   458,
     267,   454,   267,   459,   260,     7,    -1,   178,   265,   458,
     266,     7,    -1,   179,   265,   458,   266,     7,    -1,   185,
     265,   458,   267,   285,   267,   459,   267,   302,   266,     7,
      -1,   185,   265,   458,   267,   285,   267,   459,   266,     7,
      -1,   180,   259,   458,   267,   458,   267,   452,   267,   452,
     260,   265,   402,   266,     7,    -1,   181,   259,   458,   267,
     458,   267,   452,   267,   452,   260,   265,   402,   266,     7,
      -1,   182,   259,   458,   267,   452,   260,     7,    -1,   186,
     265,     5,   267,     5,   267,   136,   459,   267,   452,   266,
       7,    -1,   186,   265,     5,   267,     5,   267,   136,   459,
     266,     7,    -1,   186,   265,     5,   267,     5,   266,     7,
      -1,   183,   259,   458,   267,   458,   260,     7,    -1,   184,
     259,   458,   267,   458,   260,     7,    -1,   448,    -1,   304,
      -1,   458,    -1,    -1,   407,   408,    -1,   267,   210,   459,
      -1,   267,   214,   454,    -1,   267,   454,    -1,    -1,   409,
     410,    -1,   157,   452,     7,    -1,   158,   452,     7,    -1,
     144,   302,     7,    -1,   159,   302,     7,    -1,   141,   265,
     402,   266,    -1,    -1,   411,   412,    -1,   157,   452,     7,
      -1,   158,   452,     7,    -1,   144,   302,     7,    -1,   161,
     452,     7,    -1,   162,   452,     7,    -1,   141,   265,   402,
     266,    -1,    -1,   413,   414,    -1,   164,   452,     7,    -1,
      89,   452,     7,    -1,   165,   302,     7,    -1,    19,   452,
       7,    -1,   141,   265,   402,   266,    -1,    -1,   415,   416,
      -1,   164,   452,     7,    -1,   167,   452,     7,    -1,    89,
     452,     7,    -1,    19,   452,     7,    -1,   134,   458,     7,
      -1,   168,   265,   417,   266,    -1,   141,   265,   402,   266,
      -1,   142,   265,   402,   266,    -1,    -1,   417,   265,   418,
     266,    -1,    -1,   418,   419,    -1,    87,     5,     7,    -1,
     113,     5,     7,    -1,   131,   285,     7,    -1,    89,   452,
       7,    -1,   100,   302,     7,    -1,    19,     5,     7,    -1,
      -1,   420,   421,    -1,   265,   422,   266,    -1,   449,    -1,
     448,    -1,    -1,   422,   423,    -1,    97,   458,     7,    -1,
      97,     5,   296,     7,    -1,   135,   458,     7,    -1,   189,
     458,     7,    -1,   113,   265,   424,   266,    -1,    -1,   424,
     265,   425,   266,    -1,   424,   449,    -1,   424,   448,    -1,
      -1,   425,   426,    -1,    97,   458,     7,    -1,    76,   265,
     427,   266,    -1,    -1,   427,   118,   265,   428,   266,    -1,
     427,     5,   265,   428,   266,    -1,   427,   448,    -1,    -1,
     428,   429,    -1,    -1,   388,   259,   430,   306,   260,     7,
      -1,    87,     5,     7,    -1,   131,   285,     7,    -1,    82,
       5,     7,    -1,    84,     5,     7,    -1,    -1,   431,   432,
      -1,   265,   433,   266,    -1,   449,    -1,   448,    -1,    -1,
     433,   434,    -1,    97,   458,     7,    -1,   191,   458,     7,
      -1,   216,     5,     7,    -1,   193,   459,     7,    -1,   141,
     265,   437,   266,    -1,    -1,   190,   458,   192,   458,   436,
     265,   437,   266,    -1,    -1,    -1,   437,   438,   439,    -1,
     194,   259,   441,   444,   445,   260,     7,    -1,   195,   259,
     441,   444,   445,   260,     7,    -1,   195,   259,     6,   267,
     302,   445,   260,     7,    -1,   195,   259,     6,   267,   233,
     259,   459,   260,   445,   260,     7,    -1,   197,   259,     6,
     445,   260,     7,    -1,    -1,   196,   259,   285,   440,   267,
     131,   285,   445,   260,     7,    -1,   448,    -1,   458,   443,
     267,    -1,   458,   443,   442,     5,   443,   267,    -1,   250,
      -1,   251,    -1,   248,    -1,   249,    -1,    -1,   259,   285,
     260,    -1,   200,    -1,   201,   285,    -1,   202,   285,    -1,
     204,   265,   265,   455,   266,   265,   455,   266,   265,   455,
     266,   266,    -1,   203,   285,    -1,   203,   265,   302,   267,
     302,   267,   302,   266,   265,   454,   267,   454,   267,   454,
     266,    -1,   205,   265,   455,   266,    -1,   206,   265,   265,
     455,   266,   265,   455,   266,   266,   265,   452,   266,    -1,
     207,   265,   265,   455,   266,   265,   455,   266,   265,   455,
     266,   266,   265,   452,   267,   452,   266,    -1,   208,   265,
     265,   455,   266,   265,   455,   266,   265,   455,   266,   265,
     455,   266,   266,   265,   452,   267,   452,   267,   452,   266,
      -1,   201,   285,   209,     5,   265,   452,   267,   452,   266,
     265,   452,   266,    -1,    -1,   445,   446,    -1,   267,   210,
     459,    -1,   267,   210,   243,   459,    -1,   267,   210,   244,
     459,    -1,   267,   211,   452,    -1,   267,   219,    -1,   267,
     220,    -1,   267,   215,   452,    -1,   267,   216,     5,    -1,
     267,   217,   447,    -1,   267,   218,   447,    -1,   267,   216,
     447,    -1,   267,   213,    -1,   267,   212,   452,    -1,   267,
     214,   454,    -1,   267,   199,     5,    -1,   267,   222,     5,
      -1,   267,   221,   452,    -1,   267,    76,   454,    -1,   267,
     223,   452,    -1,   267,   223,   265,   455,   266,    -1,   267,
     224,    -1,   267,   225,    -1,   267,   137,   454,    -1,   267,
     169,   265,   302,   267,   302,   267,   302,   266,    -1,   267,
     226,   304,    -1,   267,   227,    -1,   267,   227,   265,   452,
     267,   452,   267,   452,   266,    -1,   267,   228,    -1,   267,
     228,   265,   452,   267,   452,   267,   452,   266,    -1,   267,
     229,    -1,   267,   229,   265,   452,   267,   452,   267,   452,
     266,    -1,   267,   230,   265,   455,   266,    -1,   267,   231,
       3,    -1,   267,   232,    -1,    -1,   447,     6,    -1,    14,
     257,   452,     8,   452,   258,    -1,    14,   257,   452,     8,
     452,     8,   452,   258,    -1,    14,     5,   131,   265,   452,
       8,   452,   266,    -1,    14,     5,   131,   265,   452,     8,
     452,     8,   452,   266,    -1,    15,    -1,    16,   257,   452,
     258,    -1,    18,    -1,    30,   259,   450,   260,     7,    -1,
     458,   235,   454,     7,    -1,   458,   235,     6,     7,    -1,
     458,   235,   233,   259,   459,   260,     7,    -1,   458,   235,
     460,     7,    -1,   458,   235,    29,   259,   459,   260,     7,
      -1,    11,   257,     6,   258,     7,    -1,    11,   458,     7,
      -1,    11,   262,     7,    -1,    11,   257,     6,   267,   455,
     258,     7,    -1,    12,   257,   458,   258,     7,    -1,    12,
     257,   458,   258,   259,   452,   260,     7,    -1,    13,     7,
      -1,    -1,   450,   295,     5,    -1,   450,   295,     5,   265,
     452,   266,    -1,   450,   295,     5,   235,   452,    -1,   450,
     295,     5,   235,     6,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,   458,    -1,   453,    -1,   257,
     452,   258,    -1,   249,   452,    -1,   254,   452,    -1,   452,
     249,   452,    -1,   452,   248,   452,    -1,   452,   250,   452,
      -1,   452,   251,   452,    -1,   452,   252,   452,    -1,   452,
     256,   452,    -1,   452,   242,   452,    -1,   452,   243,   452,
      -1,   452,   247,   452,    -1,   452,   246,   452,    -1,   452,
     241,   452,    -1,   452,   240,   452,    -1,   452,   238,   452,
      -1,   452,   237,   452,    -1,    36,   259,   452,   260,    -1,
      37,   259,   452,   260,    -1,    38,   259,   452,   260,    -1,
      39,   259,   452,   260,    -1,    40,   259,   452,   260,    -1,
      41,   259,   452,   260,    -1,    42,   259,   452,   260,    -1,
      43,   259,   452,   260,    -1,    44,   259,   452,   260,    -1,
      45,   259,   452,   260,    -1,    46,   259,   452,   267,   452,
     260,    -1,    47,   259,   452,   260,    -1,    48,   259,   452,
     260,    -1,    49,   259,   452,   260,    -1,    50,   259,   452,
     260,    -1,    51,   259,   452,   260,    -1,    52,   259,   452,
     260,    -1,    53,   259,   452,   267,   452,   260,    -1,    54,
     259,   452,   267,   452,   260,    -1,    55,   259,   452,   267,
     452,   260,    -1,   452,   236,   452,     8,   452,    -1,   452,
     262,    -1,     4,    -1,     3,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,   458,    -1,    -1,   452,
      -1,   456,    -1,   265,   455,   266,    -1,   452,    -1,   456,
      -1,   455,   267,   452,    -1,   455,   267,   456,    -1,   452,
       8,   452,    -1,   452,     8,   452,     8,   452,    -1,     5,
     265,   266,    -1,     5,   265,   455,   266,    -1,    25,   259,
       5,   260,    -1,    26,   259,     5,   267,     5,   260,    -1,
      27,   259,   452,   267,   452,   267,   452,   260,    -1,    28,
     259,   452,   267,   452,   267,   452,   260,    -1,     5,   269,
     265,   452,   266,    -1,   457,   269,   265,   452,   266,    -1,
       5,    -1,   457,    -1,     6,    -1,   458,    -1,   460,    -1,
      10,   257,   459,   258,    -1,    10,   257,   459,   267,   455,
     258,    -1,   234,    -1,     9,   259,   459,   267,   459,   260,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   340,   340,   340,   376,   380,   379,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   398,   400,   402,
     407,   417,   419,   421,   423,   425,   427,   429,   431,   433,
     435,   437,   439,   441,   443,   445,   447,   449,   451,   453,
     455,   458,   458,   480,   483,   489,   492,   498,   504,   506,
     508,   511,   513,   519,   529,   518,   546,   545,   562,   573,
     578,   595,   625,   628,   641,   642,   649,   651,   654,   672,
     685,   692,   700,   704,   711,   722,   728,   735,   746,   755,
     763,   777,   790,   825,   829,   839,   856,   856,   861,   867,
     868,   873,   881,   884,   889,   891,   911,   955,   957,   961,
     964,   974,   997,  1003,  1010,  1010,  1017,  1025,  1029,  1035,
    1038,  1045,  1045,  1058,  1061,  1074,  1060,  1102,  1108,  1114,
    1120,  1126,  1132,  1138,  1144,  1150,  1156,  1162,  1168,  1174,
    1180,  1186,  1192,  1198,  1205,  1211,  1213,  1224,  1226,  1232,
    1306,  1340,  1349,  1362,  1361,  1376,  1375,  1390,  1389,  1405,
    1417,  1423,  1430,  1429,  1460,  1486,  1499,  1505,  1512,  1518,
    1525,  1532,  1544,  1545,  1546,  1551,  1552,  1558,  1560,  1563,
    1579,  1583,  1591,  1593,  1599,  1604,  1612,  1614,  1622,  1625,
    1631,  1634,  1637,  1676,  1681,  1689,  1695,  1701,  1708,  1711,
    1719,  1721,  1729,  1734,  1740,  1750,  1760,  1768,  1770,  1778,
    1787,  1793,  1841,  1844,  1847,  1850,  1853,  1865,  1869,  1874,
    1879,  1881,  1887,  1893,  1899,  1906,  1914,  1923,  1926,  1945,
    1949,  1954,  1964,  1971,  1977,  1987,  1992,  1998,  2003,  2011,
    2019,  2028,  2046,  2055,  2063,  2071,  2081,  2091,  2101,  2122,
    2127,  2132,  2137,  2139,  2146,  2151,  2153,  2159,  2166,  2174,
    2183,  2186,  2189,  2192,  2200,  2205,  2222,  2232,  2246,  2252,
    2255,  2260,  2265,  2279,  2299,  2304,  2309,  2314,  2343,  2349,
    2353,  2347,  2427,  2432,  2442,  2446,  2452,  2459,  2462,  2469,
    2485,  2492,  2494,  2513,  2525,  2533,  2537,  2553,  2558,  2564,
    2574,  2579,  2585,  2592,  2603,  2618,  2622,  2659,  2669,  2678,
    2684,  2717,  2720,  2723,  2739,  2743,  2748,  2753,  2755,  2762,
    2766,  2772,  2779,  2787,  2797,  2799,  2806,  2810,  2815,  2822,
    2838,  2844,  2847,  2851,  2854,  2864,  2869,  2868,  2900,  2906,
    2905,  3222,  3227,  3236,  3245,  3254,  3259,  3262,  3303,  3307,
    3312,  3317,  3326,  3329,  3332,  3335,  3347,  3352,  3357,  3367,
    3377,  3392,  3398,  3403,  3405,  3407,  3409,  3418,  3436,  3443,
    3451,  3442,  3583,  3588,  3597,  3606,  3611,  3620,  3632,  3646,
    3660,  3666,  3674,  3665,  3746,  3747,  3748,  3749,  3750,  3751,
    3752,  3753,  3759,  3780,  3805,  3809,  3814,  3819,  3821,  3828,
    3833,  3839,  3846,  3854,  3858,  3857,  3862,  3868,  3872,  3877,
    3882,  3892,  3905,  3911,  3914,  3923,  3926,  3931,  3942,  3947,
    3952,  3957,  3963,  3972,  3980,  3982,  3994,  4004,  4011,  4013,
    4026,  4033,  4046,  4068,  4075,  4081,  4087,  4093,  4101,  4123,
    4130,  4136,  4147,  4158,  4171,  4186,  4201,  4216,  4236,  4257,
    4269,  4289,  4306,  4325,  4346,  4360,  4374,  4381,  4415,  4428,
    4442,  4455,  4469,  4468,  4478,  4477,  4486,  4497,  4509,  4519,
    4527,  4540,  4553,  4567,  4577,  4587,  4601,  4615,  4633,  4652,
    4663,  4678,  4693,  4708,  4723,  4738,  4749,  4754,  4765,  4770,
    4774,  4777,  4787,  4804,  4813,  4819,  4823,  4827,  4831,  4836,
    4848,  4858,  4864,  4868,  4872,  4876,  4880,  4885,  4897,  4906,
    4911,  4915,  4919,  4923,  4927,  4939,  4951,  4956,  4960,  4964,
    4968,  4973,  4983,  4989,  4995,  5006,  5008,  5014,  5026,  5031,
    5041,  5070,  5073,  5076,  5084,  5102,  5108,  5113,  5118,  5120,
    5125,  5133,  5137,  5144,  5152,  5165,  5170,  5177,  5179,  5182,
    5184,  5191,  5196,  5201,  5204,  5211,  5215,  5221,  5233,  5240,
    5249,  5254,  5253,  5288,  5299,  5304,  5313,  5331,  5337,  5342,
    5345,  5347,  5352,  5359,  5363,  5370,  5382,  5393,  5398,  5405,
    5404,  5432,  5435,  5434,  5451,  5456,  5461,  5470,  5479,  5489,
    5488,  5499,  5508,  5520,  5544,  5545,  5546,  5547,  5553,  5554,
    5560,  5566,  5573,  5580,  5604,  5611,  5623,  5636,  5656,  5682,
    5715,  5737,  5768,  5772,  5786,  5800,  5814,  5818,  5822,  5826,
    5830,  5840,  5845,  5850,  5870,  5874,  5881,  5891,  5900,  5909,
    5916,  5924,  5928,  5937,  5941,  5945,  5953,  5959,  5963,  5971,
    5978,  5986,  5993,  6001,  6008,  6016,  6020,  6030,  6035,  6085,
    6100,  6116,  6136,  6156,  6194,  6198,  6211,  6213,  6228,  6234,
    6240,  6246,  6262,  6267,  6283,  6288,  6300,  6310,  6324,  6347,
    6350,  6356,  6370,  6376,  6387,  6388,  6389,  6390,  6391,  6392,
    6393,  6394,  6395,  6396,  6397,  6398,  6399,  6400,  6401,  6402,
    6403,  6404,  6405,  6406,  6407,  6411,  6412,  6413,  6414,  6415,
    6416,  6417,  6418,  6419,  6420,  6421,  6422,  6423,  6424,  6425,
    6426,  6427,  6428,  6429,  6430,  6431,  6432,  6433,  6434,  6435,
    6436,  6437,  6438,  6439,  6440,  6441,  6442,  6443,  6444,  6445,
    6446,  6447,  6448,  6450,  6452,  6457,  6458,  6459,  6460,  6461,
    6462,  6463,  6464,  6483,  6485,  6491,  6494,  6501,  6507,  6510,
    6513,  6525,  6531,  6542,  6558,  6580,  6595,  6633,  6641,  6653,
    6661,  6675,  6678,  6685,  6688,  6703,  6708,  6713,  6732,  6742
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
  "ProblemDefinition", "Interactive", "@3", "Groups", "Group",
  "MovingBand2DGroup", "@4", "@5", "ReducedGroupRHS", "@6", "GroupRHS",
  "GroupRHS_MultipleIndex", "FunctionForGroup", "ListOfRegionOrAll",
  "SuppListOfRegion", "SuppListTypeForGroup", "ListOfRegion",
  "RecursiveListOfRegion", "IRegion", "DefineGroups", "Comma",
  "DefineDimension", "MultipleIndex", "Index", "Functions", "Function",
  "DefineFunctions", "Expression", "@7", "ListOfExpression",
  "RecursiveListOfExpression", "WholeQuantityExpression", "@8",
  "WholeQuantity", "@9", "@10", "WholeQuantity_Single", "@11", "@12",
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
     276,   277,   276,   278,   278,   279,   279,   279,   279,   279,
     279,   279,   279,   281,   282,   280,   284,   283,   283,   285,
     285,   286,   287,   287,   288,   288,   289,   289,   289,   290,
     291,   291,   292,   292,   292,   293,   293,   293,   293,   293,
     293,   293,   293,   294,   294,   294,   295,   295,   296,   297,
     297,   298,   299,   299,   300,   300,   300,   300,   300,   301,
     301,   301,   302,   302,   303,   302,   302,   304,   304,   305,
     305,   307,   306,   308,   309,   310,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   311,   311,   311,
     311,   311,   311,   312,   311,   313,   311,   314,   311,   311,
     311,   311,   315,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   316,   316,   316,   317,   317,   318,   318,   318,
     319,   319,   320,   320,   321,   321,   322,   322,   323,   323,
     324,   324,   324,   325,   325,   326,   326,   327,   327,   327,
     328,   328,   329,   329,   330,   330,   330,   331,   331,   332,
     332,   333,   333,   333,   333,   333,   333,   334,   334,   335,
     335,   335,   336,   336,   337,   337,   337,   337,   337,   338,
     338,   338,   339,   339,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   341,
     341,   342,   342,   342,   343,   343,   343,   344,   344,   344,
     344,   344,   344,   344,   345,   345,   345,   346,   346,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   348,   349,
     350,   348,   351,   351,   352,   352,   353,   353,   353,   354,
     354,   355,   355,   356,   356,   357,   357,   358,   358,   358,
     359,   359,   360,   360,   360,   361,   361,   361,   362,   362,
     363,   363,   363,   363,   364,   364,   365,   365,   365,   366,
     366,   367,   367,   367,   367,   367,   368,   368,   368,   369,
     369,   370,   370,   370,   370,   370,   371,   370,   370,   372,
     370,   370,   370,   370,   370,   370,   373,   373,   374,   374,
     374,   374,   375,   375,   375,   375,   376,   376,   377,   377,
     377,   378,   378,   379,   379,   379,   379,   380,   380,   382,
     383,   381,   381,   381,   381,   381,   381,   381,   384,   384,
     385,   386,   387,   385,   388,   388,   388,   388,   388,   388,
     388,   388,   389,   389,   390,   390,   391,   391,   391,   392,
     392,   393,   393,   393,   394,   393,   393,   395,   395,   395,
     395,   396,   396,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   398,   398,   399,   399,   400,   400,   401,   401,
     402,   402,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   404,   403,   405,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   406,   406,   407,   407,
     408,   408,   408,   409,   409,   410,   410,   410,   410,   410,
     411,   411,   412,   412,   412,   412,   412,   412,   413,   413,
     414,   414,   414,   414,   414,   415,   415,   416,   416,   416,
     416,   416,   416,   416,   416,   417,   417,   418,   418,   419,
     419,   419,   419,   419,   419,   420,   420,   421,   421,   421,
     422,   422,   423,   423,   423,   423,   423,   424,   424,   424,
     424,   425,   425,   426,   426,   427,   427,   427,   427,   428,
     428,   430,   429,   429,   429,   429,   429,   431,   431,   432,
     432,   432,   433,   433,   434,   434,   434,   434,   434,   436,
     435,   437,   438,   437,   439,   439,   439,   439,   439,   440,
     439,   439,   441,   441,   442,   442,   442,   442,   443,   443,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   445,   445,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   447,   447,   448,
     448,   448,   448,   448,   448,   448,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   450,
     450,   450,   450,   450,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   453,   453,   453,   453,   453,
     453,   453,   453,   454,   454,   454,   454,   455,   455,   455,
     455,   456,   456,   456,   456,   456,   456,   456,   456,   457,
     457,   458,   458,   459,   459,   459,   459,   459,   459,   460
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     0,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     1,     2,
       1,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     2,     0,     2,     4,     5,     5,     5,     1,
       5,     1,     1,     0,     0,    18,     0,     6,     2,     1,
       1,     2,     1,     1,     1,     1,     0,     3,     3,     1,
       1,     3,     0,     3,     4,     1,     3,     3,     3,     5,
       5,     7,     1,     0,     3,     6,     0,     1,     4,     0,
       2,     3,     0,     2,     5,     6,     7,     1,     1,     0,
       3,     6,     4,     4,     0,     2,     3,     0,     3,     1,
       3,     0,     2,     1,     0,     0,     7,     3,     3,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     3,     1,     3,
       2,     1,     2,     0,     5,     0,     7,     0,    11,     9,
       4,     4,     0,     7,     6,     2,     2,     2,     2,     3,
       2,     3,     3,     2,     3,     1,     3,     0,     3,     6,
       0,     4,     0,     2,     3,     4,     0,     4,     0,     2,
       3,     3,     4,     0,     4,     0,     2,     3,     3,     4,
       0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
       2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
       1,     1,     0,     2,     3,     4,     3,     4,     5,     0,
       4,     2,     0,     2,     3,     3,     3,     3,     3,     3,
       7,     3,     3,     3,     3,     3,     7,     7,     7,     0,
       2,     3,     1,     1,     0,     2,     2,     3,     4,     3,
       4,     4,     4,     4,     0,     4,     2,     0,     2,     3,
       3,     4,     4,     7,     3,     3,     3,     3,     0,     0,
       0,    18,     0,     4,     0,     2,     3,     3,     3,     1,
       3,     0,     3,     1,     3,     0,     3,     0,     4,     2,
       0,     2,     3,     3,     3,     0,     4,     2,     0,     2,
       3,     3,     3,     3,     0,     2,     3,     1,     1,     0,
       2,     3,     4,     3,     4,     4,     0,     4,     2,     0,
       2,     3,     3,     3,     3,     3,     0,     5,     3,     0,
       5,     3,     3,     3,     3,     3,     0,     3,     0,     2,
       2,     2,     4,     4,     4,     4,     0,     2,     3,     3,
       3,     0,     2,     3,     3,     3,     3,     0,     2,     0,
       0,     9,     3,     3,     3,     2,     3,     5,     0,     2,
       3,     0,     0,     9,     0,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     0,     2,     3,     1,     1,     0,
       2,     3,     4,     4,     0,     5,     1,     0,     4,     2,
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
       3,     3,     3,     3,     3,     0,     2,     3,     1,     1,
       0,     2,     3,     4,     3,     3,     4,     0,     4,     2,
       2,     0,     2,     3,     4,     0,     5,     5,     2,     0,
       2,     0,     6,     3,     3,     3,     3,     0,     2,     3,
       1,     1,     0,     2,     3,     3,     3,     3,     4,     0,
       8,     0,     0,     3,     7,     7,     8,    11,     6,     0,
      10,     1,     3,     6,     1,     1,     1,     1,     0,     3,
       1,     2,     2,    12,     2,    15,     4,    12,    17,    22,
      12,     0,     2,     3,     4,     4,     3,     2,     2,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     5,     2,     2,     3,     9,     3,     2,     9,
       2,     9,     2,     9,     5,     3,     2,     0,     2,     6,
       8,     8,    10,     1,     4,     1,     5,     4,     4,     7,
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
       2,     0,     4,     1,     5,    41,   751,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    20,     0,    17,    18,
     752,     0,     0,     0,     0,     0,     0,   658,     0,    21,
       0,     0,     0,     0,     0,    28,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   753,     0,
       0,   758,   754,    19,   755,   659,    43,   207,   170,   183,
     239,    92,   304,   384,   525,   557,     0,     0,   643,     0,
     645,     0,     0,     0,     0,    42,   581,     0,   733,     0,
       0,   654,   653,     0,    27,    26,    25,    23,    24,    22,
      40,    30,    32,    33,    34,    35,    31,    36,    37,    38,
      39,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   726,   725,   751,     0,     0,     0,     0,
       0,     0,   727,   728,   729,   730,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   734,   685,     0,   735,   732,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,   751,     0,     7,
      44,    49,    52,    51,     0,   212,     9,   208,   211,   210,
     172,    10,   185,    11,   244,    12,   240,   243,   242,     0,
       8,    93,    98,    97,     0,   309,    13,   305,   308,   307,
     389,    14,   385,   388,   387,   530,    15,   526,   529,   528,
     562,    16,   558,   561,   560,   569,     0,     0,     0,     0,
     588,     0,     0,   751,    62,     0,    59,   579,     0,    60,
     601,     0,     0,   648,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     687,   688,     0,   737,     0,   738,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,   647,   650,   749,   652,     0,   656,     0,
       0,   756,     0,   646,   660,     0,     0,     0,    83,   733,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   644,   590,     0,     0,     0,
       0,     0,     0,     0,     0,   601,     0,     0,   104,   601,
      75,     0,    72,     0,    58,    70,    82,     0,     0,     0,
     750,   743,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   686,
     736,     0,   741,     0,   702,   701,   700,   699,   695,   696,
     698,   697,   690,   689,   691,   692,   693,   694,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,   751,
       0,     0,     0,     0,     0,     0,   209,   213,     0,     0,
     171,   173,     0,   104,     0,   184,   186,     0,     0,     0,
       0,     0,     0,   241,   245,   246,    86,     0,     0,     0,
       0,     0,     0,   306,   310,     0,     0,   394,   386,   390,
     396,     0,     0,     0,     0,   527,   531,     0,     0,     0,
       0,     0,   559,   563,   571,     0,     0,   591,   592,   104,
     594,     0,     0,     0,     0,     0,     0,     0,   586,   587,
     584,   585,   582,     0,     0,     0,     0,     0,   601,   111,
       0,     0,     0,    86,     0,     0,    65,    56,    64,     0,
       0,   602,   744,   745,     0,     0,     0,     0,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,     0,   714,
     715,   716,   717,   718,   719,     0,     0,     0,     0,   739,
     740,     0,     0,   655,     0,   759,   757,   663,   662,     0,
       0,    91,    63,     0,     0,     0,     0,    45,     0,     0,
       0,   219,     0,   751,     0,   176,     0,   190,     0,     0,
     295,     0,   751,     0,   254,   272,   287,     0,     0,   104,
       0,     0,   751,     0,   316,   338,   751,     0,   397,     0,
     751,     0,   537,     0,     0,     0,   571,     0,     0,     0,
     572,     0,     0,   639,     0,     0,     0,     0,     0,     0,
       0,     0,   589,   588,     0,     0,     0,     0,     0,   105,
       0,     0,    78,    76,    71,     0,    77,     0,    86,   578,
     733,   733,     0,     0,     0,     0,     0,   614,   733,     0,
     637,   637,   637,   607,   608,     0,     0,     0,   623,   624,
     107,   628,   630,   632,     0,     0,   636,     0,     0,     0,
     651,     0,     0,     0,     0,   649,   742,   723,   657,   661,
      88,    47,    46,    48,    84,    50,     0,   219,     0,   216,
       0,     0,   214,     0,   174,     0,   188,   187,     0,   249,
       0,   247,     0,     0,     0,    94,   100,     0,   104,   313,
       0,   311,     0,     0,     0,   391,     0,   420,     0,   532,
       0,   534,   535,   564,   572,   565,   567,   566,   570,     0,
       0,     0,     0,   104,     0,   596,     0,     0,     0,   574,
       0,     0,     0,     0,   106,     0,   751,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,     0,   152,     0,
       0,     0,     0,   143,   145,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   141,     0,   138,   732,   575,
       0,     0,     0,    73,   601,     0,     0,   620,   625,   104,
     617,     0,     0,   603,   606,   615,   616,   609,   610,   613,
     611,   612,   619,   618,     0,   621,   104,   627,     0,     0,
       0,     0,   635,   746,     0,     0,   713,   720,   721,   722,
       0,    53,     0,   222,   217,   221,   215,   178,   175,   192,
     189,   298,   253,   297,   248,   257,   250,   256,   274,   251,
     290,   252,   289,     0,    95,     0,   312,   319,   314,   318,
       0,     0,     0,     0,   315,   339,   341,   340,   392,   401,
     393,   399,   400,     0,   533,   541,   536,   540,   539,   568,
     573,     0,   641,   640,     0,     0,     0,     0,     0,     0,
     583,   102,   103,   601,   576,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   134,   136,     0,   160,
     158,   155,   157,   156,   751,     0,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,   167,    80,    79,
      74,     0,    57,    69,     0,     0,     0,   604,   605,   638,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,   357,   357,   368,   346,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   452,   454,   395,   421,   475,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,   111,   111,     0,   137,     0,   383,     0,
     133,   132,   131,   130,   129,   125,   126,   128,   127,   121,
     122,   117,   120,   123,   118,   124,   159,   161,   163,     0,
     165,     0,     0,   139,     0,     0,    68,    67,   104,   622,
     108,   104,     0,     0,     0,   634,   747,   748,    85,     0,
       0,     0,     0,     0,   104,   104,   104,   104,     0,     0,
       0,   104,   220,   223,     0,     0,   177,   179,     0,     0,
       0,   191,   193,     0,     0,     0,     0,   296,   299,     0,
       0,     0,     0,   107,   107,     0,     0,   255,   258,     0,
       0,     0,   273,   275,     0,     0,     0,   288,   291,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   733,
     329,   317,   320,   374,   374,   374,     0,     0,     0,     0,
       0,   733,     0,     0,     0,   398,   402,   411,     0,     0,
     104,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   430,   104,     0,   483,     0,   490,     0,   498,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   538,   542,   642,     0,     0,     0,     0,
       0,     0,     0,   150,     0,   151,     0,   147,     0,     0,
       0,   111,   382,     0,   162,   164,     0,     0,     0,    81,
     580,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,   104,     0,     0,     0,     0,     0,     0,
     104,     0,     0,     0,   167,   197,     0,     0,     0,     0,
       0,     0,     0,     0,   268,     0,     0,     0,     0,     0,
       0,   283,   285,     0,   279,   281,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   326,     0,     0,
       0,     0,   111,     0,     0,     0,     0,   375,   376,   377,
     378,   379,   380,   381,     0,     0,   342,   358,     0,   343,
       0,   344,   369,     0,     0,     0,   351,   345,   347,     0,
       0,   414,     0,   412,     0,     0,     0,   418,     0,   416,
       0,     0,   422,     0,     0,   423,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   107,   545,     0,     0,     0,     0,     0,     0,
       0,   577,     0,     0,   111,     0,   144,     0,     0,   115,
     166,     0,   168,   104,     0,     0,     0,    54,   225,   226,
     231,   232,     0,   235,     0,   234,   228,   227,    86,   229,
     224,     0,   233,   181,   180,     0,     0,   194,   195,   300,
     301,   302,   303,   259,   260,     0,     0,     0,    86,   264,
     265,   266,   267,   276,    86,   278,    86,   277,   293,   292,
     294,   334,   332,   333,   324,   322,   323,   321,   336,   328,
     335,   331,   325,     0,     0,     0,     0,     0,     0,   365,
     359,     0,   371,     0,     0,     0,   404,   403,    86,   405,
     406,   409,   410,    86,   407,   408,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,   104,     0,     0,   104,   424,   484,     0,     0,   104,
       0,     0,     0,     0,   425,   491,     0,     0,     0,     0,
       0,   104,   426,   499,     0,     0,     0,     0,     0,     0,
       0,     0,   427,   506,   104,     0,   104,   733,   733,   733,
       0,   733,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   476,   478,   477,   478,     0,   543,     0,   733,
       0,     0,     0,     0,     0,   119,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,   104,   104,     0,
     104,   182,   199,   196,   261,     0,   262,     0,   284,     0,
     280,     0,     0,     0,     0,   363,   364,   366,     0,   362,
     111,   370,   111,   348,   349,     0,     0,     0,     0,   350,
     352,   413,     0,   417,     0,   428,   420,   429,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,   420,
       0,     0,     0,     0,     0,   420,     0,     0,     0,     0,
       0,     0,     0,     0,   420,     0,     0,     0,     0,     0,
     420,   420,     0,     0,   515,     0,   459,     0,     0,     0,
       0,     0,     0,   463,   464,     0,     0,     0,     0,     0,
       0,     0,   458,     0,     0,     0,     0,   544,   548,     0,
       0,     0,     0,     0,     0,   153,     0,     0,   146,   116,
       0,   626,   629,   631,   633,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   282,     0,   327,   330,     0,   360,
     372,     0,     0,     0,     0,   415,   419,     0,     0,   733,
       0,   733,     0,     0,     0,     0,     0,   104,     0,   487,
     485,   486,   488,   104,     0,   494,   492,   493,   495,   496,
     104,   503,   501,     0,   500,   502,   510,   509,   511,     0,
       0,   507,   508,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   479,     0,   549,   549,     0,   733,     0,     0,
       0,     0,     0,     0,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,   200,     0,     0,
     337,   367,     0,     0,   353,   354,   355,   356,   431,   433,
       0,     0,     0,     0,     0,     0,   439,     0,     0,   489,
       0,   497,     0,   504,   513,   514,   517,   512,   456,     0,
       0,   437,   438,     0,     0,     0,     0,     0,   469,   473,
     474,     0,   472,     0,   453,     0,   733,   482,   455,   374,
     374,   600,     0,   593,   597,     0,     0,     0,   149,     0,
     238,   237,   230,   236,     0,     0,     0,     0,     0,     0,
       0,   263,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,   104,     0,   104,
       0,     0,     0,     0,     0,     0,   104,     0,   480,   481,
       0,     0,     0,     0,   547,     0,   550,   546,   733,     0,
       0,     0,     0,   201,   202,   203,   204,   205,   206,     0,
       0,     0,   420,   441,   442,     0,     0,     0,     0,   440,
       0,     0,   420,     0,     0,     0,     0,   104,     0,     0,
     516,   518,     0,   436,     0,   460,   461,   462,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,   551,     0,
       0,     0,   148,     0,     0,     0,     0,     0,     0,     0,
       0,   733,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,   471,     0,
     555,   556,   553,   554,   111,   595,     0,     0,     0,   269,
     361,   373,   432,   443,   444,   445,     0,   420,     0,   450,
     420,   524,   519,   522,   523,   520,   521,   457,   435,     0,
     420,   420,   465,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,   598,     0,
       0,     0,   448,   420,   451,   434,     0,     0,   552,     0,
       0,    89,     0,     0,   467,   468,     0,   270,     0,    61,
       0,   449,     0,     0,    90,     0,     0,     0,   447,   599,
      89,     0,     0,   271
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    25,    26,    27,   114,   190,
     191,   950,  1556,   246,   628,   247,  2030,   248,   507,   785,
     935,   354,   503,   355,   418,   186,   316,  2039,   317,   119,
     211,   446,   498,   499,  1532,   942,   619,   620,   773,  1029,
    1550,   774,   892,   893,  1374,   887,   926,  1051,  1053,   116,
     323,   431,   683,   953,  1087,   117,   324,   436,   685,   954,
    1092,  1406,  1680,  1777,   115,   197,   322,   427,   678,   952,
    1083,   118,   206,   325,   444,   692,   956,  1108,  1417,  2008,
    2043,   693,   957,  1113,  1266,  1426,  1263,  1424,   694,   958,
    1118,   688,   955,  1098,   120,   217,   328,   454,   702,   961,
    1132,  1438,  1282,  1573,   703,   855,  1136,  1308,  1455,  1590,
    1133,  1297,  1580,  1782,  1135,  1302,  1582,  1783,  1298,   775,
     121,   222,   329,   459,   589,   706,   966,  1146,  1312,  1458,
    1318,  1463,   863,  1006,  1189,  1190,  1533,  1653,  1752,  1337,
    1486,  1339,  1495,  1341,  1503,  1342,  1513,  1733,  1866,  1921,
     122,   227,   330,   466,   710,  1008,  1194,  1536,  1829,  1886,
    1974,   123,   232,   331,   473,    28,   332,   600,   719,    85,
     357,   239,   493,   347,   345,   359,   511,   799,  1007,    29,
     113,   776,   283,   173,   174,   284,   285,    30,   176,    63,
      64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1547
static const yytype_int16 yypact[] =
{
   -1547,   111, -1547, -1547,   126,  4559,  -212,    66,  -187,   139,
     496,   171,  4562,   183,     3,   -67,   -13,   -11,    20,    38,
      72,    80,   100,   122,    16, -1547, -1547,   787, -1547, -1547,
      45,    90,   140,   295,   328,   368,   402, -1547,   403, -1547,
     441,   444,   465,   483,   485, -1547,   513, -1547,   534,   552,
     564,   567,   609,   619,   643,   670,   673,   675, -1547,   250,
     282, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547,   357,    67, -1547,   371,
   -1547,   451,   464,   473,   488, -1547, -1547,   434,  2334,  4421,
    -155, -1547, -1547,   445, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547,   183,   183,  -168,   161,   469,    98,   120,   516,   410,
     542,   565,   589,   725,   402,   611,  4421,  4421,   402,   426,
      68,   752,  4421, -1547, -1547,  -174,   753,   511,   521,   525,
     529,   537, -1547, -1547, -1547, -1547, -1547,   541,   553,   555,
     562,   576,   590,   594,   626,   635,   681,   694,   706,   715,
     719,   726,   730,   739,   744,   748,   756,   762,  4421,  4421,
    4421,  4343,  3607, -1547,   784, -1547, -1547,   861,  2080,   883,
    4343,    70,   763,  -118,   954, -1547,  1006,    33,   764, -1547,
   -1547, -1547, -1547, -1547,   -65, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,   770,
   -1547, -1547, -1547, -1547,  -115, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547,   754,  3833,  4486,  1290,
     774,   768,  1290,  -161, -1547,    25, -1547, -1547,   778, -1547,
   -1547,  5395,   620, -1547,  1034,  1036,  4421,  4421,   183,  4421,
    4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,
    4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,   183,
     152,   152,  5881,  3607,   176, -1547,  4421,  4421,  4421,  4421,
    4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,  4421,
    4421,  4421, -1547, -1547, -1547, -1547, -1547,   -34, -1547,  4421,
     183, -1547,  4343, -1547,  -160,  4096,   815,   818, -1547,  2035,
     821,  4421,   103,    -7,   700,   930, -1547,    17,    34,   213,
     378,   538,   793,  4421,  4421, -1547, -1547,    68,    68,    30,
     794,   797,   798,   806,   807, -1547,    68,   477,   336, -1547,
    1065,  4421, -1547,  4343, -1547, -1547, -1547,   808,    21,  -102,
   -1547, -1547,   257,   816,   811,  4539,  4567,   820,  5904,  5931,
    5958,  5985,  6012,  6039,  6066,  6093,  6120,  6147,  4590,  6174,
    6201,  6228,  6255,  6282,  6309,  4613,  4636,  4659,   822, -1547,
   -1547,  4343,  4249,  4279,  2601,  1661,  1102,  1102,   968,   968,
     968,   968,   387,   387,   152,   152,   152,   152,  1074,  6336,
     823,   110,  4396,  4421,  4421,  5422,    69,    69,    84,    81,
    1077,    69,  6363,    22,  1081,  1083, -1547, -1547,   824,  1085,
   -1547, -1547,   827,   221,  1088, -1547, -1547,   831,  1092,  1097,
     840,   841,   842, -1547, -1547, -1547,   116,   873,   849,  1106,
    1107,   848,   850, -1547, -1547,  1109,   851, -1547, -1547, -1547,
   -1547,  1112,   853,   402,   402, -1547, -1547,   402,   857,   402,
     183,  1126, -1547, -1547, -1547,  4311,  3552,   923, -1547,   221,
   -1547,   871,  4343,   879,   880,   881,   201,   887, -1547, -1547,
   -1547, -1547, -1547,  1158,   905,   906,   925,   932, -1547, -1547,
     203,  4421,  6390,   318,   330,  1054, -1547, -1547, -1547,  1186,
    3954, -1547, -1547, -1547,  1189,  4421,  4421,  1188, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,  4421, -1547,
   -1547, -1547, -1547, -1547, -1547,  4421,  4421,  4421,  1190,  3607,
   -1547,  4421,  4421, -1547,  1191, -1547, -1547, -1547,  6949,  5449,
    5476, -1547, -1547,  1193,  1195,  1196,  1200, -1547,  1197,   973,
     942, -1547,  1203,   164,  1205, -1547,  1206, -1547,  1207,  1215,
   -1547,  1216,   164,  1218, -1547, -1547, -1547,  1219,  1222,   221,
    1017,  1246,   164,  1247, -1547, -1547,   164,  1248, -1547,   992,
     164,  1267, -1547,  1268,  1269,  1270, -1547,  1271,  1272,  1273,
    1016,  4421,  4421, -1547,  1278,  1018,  4343,   375,  4343,  4343,
    4343,  1279, -1547,   774,  4421,  1283,   183,  1040,   209, -1547,
    2185,  1285,  4365,  1286, -1547,    31, -1547,    68,   245, -1547,
    3043,  3043,  1031,  1293,   175,  4421,  4421, -1547,  3043,  4421,
    1295, -1547, -1547, -1547, -1547,  4421,  1297,  1640, -1547, -1547,
    1032,  1038,  1039,  1042,  1043,  1298, -1547,  1049,  4682,  4705,
   -1547,  6413,  6440,  6467,  6494, -1547,  6949,  6949, -1547, -1547,
   -1547, -1547, -1547, -1547,  1046, -1547,  1245, -1547,   146, -1547,
    1051,  1310, -1547,   456, -1547,   480, -1547, -1547,   181, -1547,
    1315, -1547,   223,   491,   228, -1547,  1066,  1325,   221, -1547,
    1326, -1547,   343,   253,  1328, -1547,   760, -1547,  1330, -1547,
     804, -1547, -1547, -1547,  1070, -1547, -1547, -1547, -1547,   787,
     685,  6521,  1073,   221,   502, -1547,   532,   544,   566, -1547,
    1072,  6544,  1087,  1095, -1547,  1334,   425, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547,  1084, -1547,  1100,
    1101,  1103,  1111, -1547, -1547,  1356,  2185,  2185,  2185,  2185,
    1362,    77,  1361,  4167,   -61,  1114,  1114, -1547,  1115, -1547,
    4421,  4421,    49, -1547, -1547,  1108,    89, -1547, -1547,   221,
   -1547,   183,   183, -1547,  6949,  6949, -1547,  6949, -1547,  1369,
    1369,  1369,  6949, -1547,  4343,  6949,   221, -1547,  4421,  4421,
    4421,  4343, -1547, -1547,  4421,  4421, -1547, -1547, -1547, -1547,
    4421, -1547,   366, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547,  4421, -1547,  1370, -1547, -1547, -1547, -1547,
    1118,  1125,  1130,  1131, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547,  1826, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547,  4421, -1547, -1547,  4421,  1137,  1140,  1141,  1143,  1145,
   -1547, -1547, -1547, -1547, -1547, -1547,  1146,  1120,  1146,  2185,
    1409,  1411,  1156,  1167,  1174,  1173,  1173,  1173,  7001, -1547,
   -1547, -1547, -1547, -1547,    15,  1172, -1547,  2185,  2185,  2185,
    2185,  2185,  2185,  2185,  2185,  2185,  2185,  2185,  2185,  2185,
    2185,  2185,  2185,  1430,  4421,  1895, -1547,  1178,  6949,  4469,
   -1547,   255, -1547, -1547,   402,    25,  1177, -1547, -1547, -1547,
     571, -1547,   580,  4728,  4751,  4774,   585,  6571,  6598,  5503,
    1194, -1547,   789,    60,   147,   453,   855,   443,   438,  5530,
   -1547,  1509, -1547, -1547, -1547, -1547,   990,    53,    -2,   236,
    1198,  1201,  1204,  1208,  1209,  1210,  1212,  1217,  1220,  1447,
    1221,   241,   353,   520,  1213,  1223,  1224,  1225,  1226,  1227,
    1240,  1243,  1244,  1239,  1241,  1251,  1252,  1253,  1256,  1257,
    1260,  1261,  1258, -1547, -1547, -1547, -1547, -1547,     7,  5557,
    4797,   221,  4343,  4343,  4343,  4343,   278,  1202, -1547,  1214,
    4517,  1259,  1276, -1547, -1547,  1262, -1547,  1192, -1547,  2185,
    1954,  1329,  1460,  1460,  1460,   340,   340,   340,   340,   573,
     573,  1173,  1173,  1173,  1173,  1173, -1547, -1547, -1547,  1277,
    4167,   301,  4289, -1547,  4421,  1449, -1547, -1547,   221, -1547,
   -1547,   221,  4421,  4421,  4421, -1547, -1547, -1547, -1547,  1284,
      68,    68,    68,    68,   248,   252,   221,   221,  1266,   402,
    1454,   436, -1547, -1547,    57,  1459, -1547, -1547,  1282,  1470,
    1472, -1547, -1547,  1500,    97,  1544,   402, -1547, -1547,  1546,
    1547,  1548,  1291,  1032,  1032,    68,    68, -1547, -1547,  1550,
      32,    43, -1547, -1547,  1552,   402,  1553, -1547, -1547, -1547,
    1554,  1555,  1556,   143,   402,   402,  4421,  1560,    68,  3043,
   -1547, -1547, -1547,  1296,  1836,   920,   231,  1561,   402,    48,
     183,  3043,   183,    50,   402, -1547, -1547, -1547,   402,  1558,
     221,   221,  1577,   402,   402,   402,   402,   402,   402,   402,
     402,   402, -1547,   221,  4421, -1547,  4421, -1547,  4421, -1547,
   -1547,    68,   183,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,  1583,   402,  1331,
    1333,  1332,   402, -1547, -1547, -1547,  4421,  1335,   605,   613,
     616,   621,  1588, -1547,  1337, -1547,  2185, -1547,  1344,  1338,
    1346, -1547, -1547,  1410, -1547, -1547,  2185,  1340,   631,  6949,
   -1547,  1348, -1547,  4820,  4843,  4866,    25,  1593,  1609,  1611,
    1613,   221,  1614,   221,  1615,  1621,  1622,  1157,  1623,  1624,
     221,  1627,  1628,  1629,  1178, -1547,  1630,  1631,  1635,  1647,
    1648,  1660,  1662,    44,  1403,  1692,  1691,  1693,  1697,  1698,
    1707, -1547, -1547,  1714, -1547, -1547,  1719,  1720,  1730,  1733,
    1734,  1736,  1738,  1740,  1741,  1742,  1743, -1547,  1078,  1744,
    1747,  1748, -1547,  1751,  1752,  1753,  1502, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547,    68,  1755, -1547, -1547,  1504, -1547,
      68, -1547, -1547,  1505,  1754,  1760, -1547, -1547, -1547,  1759,
    1762, -1547,  1763, -1547,  1765,  1766,  1767, -1547,  1769, -1547,
    1770,  1507, -1547,  1518,  1519, -1547,  1516,  1517,  1521,  1522,
    1523,  1524,  1529,  1535,  1543,  1525,  4889,   829,  4912,   734,
    4935,     4,   547,  1545,  1551,  1549,  1559,  1562,  1563,  1565,
    1566,  1568,  1569,  1571,  1572,  1578,  1580,  1581,  1582,  1584,
    1564,    51,    51, -1547,  1807,  5584,  1585,  1587,  1570,  1598,
    1607, -1547,    68,  6976, -1547,  4421, -1547,  1814,  1567, -1547,
    4167,    68, -1547,   221,  4421,  4421,  4421, -1547, -1547, -1547,
   -1547, -1547,  1586, -1547,  1591, -1547, -1547, -1547,  1606, -1547,
   -1547,  1610, -1547, -1547, -1547,  1815,   574, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547,  1816,  1708,  1818,  1606, -1547,
   -1547, -1547, -1547, -1547,   634, -1547,   652, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,  1617, -1547,
   -1547, -1547, -1547,  1620,  1821,  1867,  1872,  1879,  1876, -1547,
   -1547,  1877, -1547,  1878,  1880,   299, -1547, -1547,   672, -1547,
   -1547, -1547, -1547,   676, -1547, -1547,  1881,  1625,  1884,   221,
     402,   402,  4421,  4421,  4421,   402,   221,    68,  1885,  4421,
    1641,   221,  4421,  4421,   221, -1547, -1547,  4421,  1650,   221,
    4421,  4421,  4421,  4421, -1547, -1547,  4421,  4421,  4421,  1651,
    4421,   221, -1547, -1547,  4421,  4421,   402,  1654,  1659,  4421,
    4421,  1690, -1547, -1547,   221,  1886,   221,  3043,  3043,  3043,
    4421,  3043,  1888,  1918,   402,   402,  4421,   402,   402,    68,
    1953,  1959, -1547, -1547, -1547, -1547,   138, -1547,  1705,  3043,
    4343,  1718,  4343,  4343,  1626, -1547,  1724,  4958,  1725, -1547,
    2185,  1727,  1722,  5611,  5638,  5665,  1723,   221,   221,  1157,
     221, -1547, -1547, -1547, -1547,  1986, -1547,  1988, -1547,  1989,
   -1547,  1991,   402,  2006,  2007, -1547, -1547, -1547,  1768, -1547,
   -1547, -1547, -1547, -1547, -1547,  1146,  1146,  1146,    68, -1547,
   -1547, -1547,   402, -1547,   402, -1547, -1547, -1547,  1771,  1756,
    1775,  4981,  5004,  5027,  1776,  1772,  1778, -1547,  5050, -1547,
    2012,  1151,  1199,  2015,  5073, -1547,  2020,  1292,  1482,  1557,
    1619,  5096,  2013,  2154, -1547,  2304,  2022,  2442,  2529,  2023,
   -1547, -1547,  2564,  2629, -1547,   346, -1547,  1779,  1773,  1777,
    1780,  5119,  1781, -1547, -1547,  1782,  1783,  6625,  1791,  1792,
    1786,   683, -1547,   350,   354,  1789,  1790, -1547, -1547,  4421,
    1798,   697,  4421,   702,   705, -1547,  1796,  4421, -1547,  4167,
    1825, -1547, -1547, -1547, -1547,  1795,  1833,  1834,  1829,  1837,
     658,  2051,  1830, -1547, -1547,  1839, -1547, -1547,  2093, -1547,
   -1547,  2096,  2097,  2100,  2101, -1547, -1547,  2469,  2103,  3043,
    4421,  3043,  4421,  4421,   402,  2104,   402,   221,  2956, -1547,
   -1547, -1547, -1547,   221,  3164, -1547, -1547, -1547, -1547, -1547,
     221, -1547, -1547,  3218, -1547, -1547, -1547, -1547, -1547,  3272,
    3458, -1547, -1547,   728,  2105,  4421,   221,  2107,  2108,  4421,
     183,   183,  4421,  4421,  2109,  2110,  2111,   183,  2112,  1984,
    2114,  2990, -1547,  2119, -1547, -1547,  5692,  3043,  1861,  5719,
    1865,  1869,  1870,  5746, -1547,    25,  2125,  2132,  2134,  2135,
    2140,  4421,  4421,  4421,  4421,  4421, -1547, -1547,  2034,  2141,
   -1547, -1547,  1883,  1887, -1547, -1547, -1547, -1547,  2130, -1547,
    1891,  6652,  1892,  5142,  5165,  1896, -1547,  1893,  1897, -1547,
    1898, -1547,   418, -1547, -1547, -1547, -1547, -1547, -1547,  5188,
     440, -1547, -1547,  6679,  1902,  1906,  5211,  5234, -1547, -1547,
   -1547,   729, -1547,   183, -1547,   183,  3043, -1547, -1547,  2046,
    2451, -1547,  1900, -1547, -1547,  1911,  4343,  4421, -1547,  1912,
   -1547, -1547, -1547, -1547,  2171,  2690,  2947,  3245,  3262,  3299,
    2175, -1547, -1547,  1146,  1916,  2176,  2177,  4421,  4421,  4421,
    4421,  2178,   221,  4421,  1917,  4421,   207,   221,  2179,   221,
    2180,  2184,  2201,  4421,  4421,  2202,   221,   735, -1547, -1547,
    2207,  2208,  2209,    68, -1547,  1956, -1547, -1547,  3043,  4421,
     743,  5773,  4421, -1547, -1547, -1547, -1547, -1547, -1547,  1980,
    1992,  1997, -1547, -1547, -1547,  6706,  6733,  6760,  5257, -1547,
    1998,  5280, -1547,  6787,  2243,  2261,  4421,   221,  2262,    68,
   -1547, -1547,  2010, -1547,   499, -1547, -1547, -1547,  6814,  6841,
   -1547,  2005,  2265,  4421,  2266,  2267,  2269,  2270, -1547,  2014,
    5303,  2016, -1547,  6868,  2271,  2276,  2278,  3512,  2279,  2280,
    2283,  3043,  2026,  4421,  3566,  2028,  2287,  2288,  3316,  2289,
    2291,  2292,  2294,  2295,   221,  2038,  2039,  2298, -1547,  5800,
   -1547, -1547, -1547, -1547, -1547, -1547,  4421,  2041,  2300, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547,  2042, -1547,  6895, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,  2050,
   -1547, -1547, -1547,  2306,  2054,  5827,  4421, -1547,  2256,  4421,
    3752,  2059,  3806,  2318,  3860,  4046, -1547,  2326, -1547,  5326,
     402,  5349, -1547, -1547, -1547, -1547,  2327,  2328, -1547,  4421,
    2337,  2076,  4421,  4100, -1547, -1547,  5372, -1547,  2079, -1547,
    6922, -1547,  4421,  2215, -1547,  2342,  5854,  2345, -1547, -1547,
    2076,  2344,  2086, -1547
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547,    36, -1547,  -278, -1547,  1299, -1547, -1547,
    1303,  -353, -1547,  -546, -1547,  -406,  -557,   303, -1547, -1547,
   -1547, -1547,  1048, -1547,  -637, -1547, -1007, -1547,  -702, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547,  1579, -1547,  1110, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,  1687, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
    1436, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1117,  -729,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1546, -1547, -1547, -1547,  1045,   874, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547, -1547,   653, -1547,
   -1547, -1547, -1547, -1547, -1547, -1547, -1547,  1817, -1547,  1695,
   -1547,  2282, -1547,  1799,  2173,  -335, -1547,   372,    14,   -76,
   -1547, -1547,   972,  -519,  -542,  -171,   -87, -1547,    -5,  -108,
     -56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -685
static const yytype_int16 yytable[] =
{
      31,   175,    35,   182,   183,   508,   681,   885,    62,   307,
     486,  1204,   556,   807,   500,   690,  1209,  1210,  1303,    76,
       6,     6,   243,  1497,   350,   700,     6,   560,   350,   704,
       6,    93,   177,   708,   350,   243,     6,  1261,   193,   199,
     578,    86,   208,   213,   219,   224,   229,   234,  1264,   448,
    1697,  1414,   350,     6,     6,     6,     6,    32,     6,   477,
     478,   480,   243,  1708,   895,   896,   897,   898,   487,  1714,
      36,     6,   125,   243,   552,   412,   428,   308,  1723,   783,
     900,   362,   901,  1191,  1729,  1730,   506,   244,   787,   788,
     429,   252,   184,  1498,   933,    32,   796,   625,   -63,   185,
     244,   777,   552,   179,  1192,   413,    62,    62,    32,   194,
      31,     3,   180,    31,   214,    31,    31,    31,    31,   235,
      88,   449,  1242,   240,   240,   249,    -3,   244,   192,   198,
    1084,   450,   207,   212,   218,   223,   228,   233,   244,   244,
     311,   411,  1085,  1655,   327,  1499,    37,   451,  1273,   312,
     367,   452,    77,    78,    79,   934,    80,  1017,   509,  1019,
      77,    78,    79,   618,    80,   510,   187,   244,  1500,  1501,
     319,   388,     7,     8,     9,    77,    78,    79,    45,    80,
       6,    58,   504,   320,    59,    60,   423,  1020,     6,    58,
     424,    14,    59,    60,   321,    77,    78,    79,    66,    80,
     425,   923,   410,   924,  1378,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,   902,   786,  1050,   408,   188,  1914,    77,    78,    79,
    1088,    80,   175,   391,  1089,  1090,   930,    77,    78,    79,
     356,    80,    77,    78,    79,   494,    80,   777,   777,   777,
     777,  1274,    67,    62,    68,   127,  1656,  1150,     6,   430,
     494,  1275,    65,   177,     7,     8,     9,    77,    78,    79,
    1502,    80,   494,  1193,    62,  1443,   494,   447,   351,   245,
     782,    75,   351,    14,    32,    69,   352,   561,   351,   353,
     352,   903,   245,   353,  1915,   479,  1916,  1262,   315,   353,
     453,    90,    32,    70,   540,    62,   351,  1917,  1265,   680,
     455,   607,  1148,  1311,    87,  1317,   806,   353,  1304,   245,
    1918,   495,   249,    33,   126,    88,  1086,  1213,    34,   309,
     245,   245,   249,   249,   249,    91,   495,    71,  1919,   445,
     -63,   249,  1305,   460,   555,    72,   252,   456,   495,   784,
      32,   185,   495,   356,   457,   420,  1947,    77,    78,    79,
     494,    80,   598,   200,   201,    73,  1954,  1546,   546,   426,
     777,   850,   851,   852,   853,    92,   577,   391,  1585,  1586,
      77,    78,    79,   185,    80,   202,   203,    74,   777,   777,
     777,   777,   777,   777,   777,   777,   777,   777,   777,   777,
     777,   777,   777,   777,  1657,    89,   777,     6,   301,    61,
      94,   823,   824,  1091,   302,     6,  1587,    61,   791,   792,
     564,     7,     8,     9,    77,    78,    79,   189,    80,   680,
    1588,     6,   241,    32,   573,   724,   495,   726,   727,   728,
      14,  2010,   390,   391,  2012,   583,   831,   832,    95,   931,
     587,    96,   553,   554,  2014,  2015,   591,   558,   593,   594,
     494,   611,   595,   621,   597,    62,  1256,  1257,   510,   735,
     510,   497,    97,  1920,     6,   461,   510,  2033,   209,   458,
       7,     8,     9,    77,    78,    79,   497,    80,   835,   836,
      98,   462,    99,   840,   841,  1151,  1306,  1307,   497,    14,
    1164,    38,   497,    39,  1373,   -66,  1165,  1231,   733,   111,
     777,  1233,   185,   463,  1380,  1055,    40,    41,    42,   854,
     100,     6,   510,   512,   391,  1114,   793,     7,     8,     9,
      77,    78,    79,    43,    80,  1115,   495,  1116,  1202,   112,
    1109,   101,  1110,   175,   175,   510,    14,     6,  1016,   124,
    1111,   175,  1093,     7,     8,     9,    77,    78,    79,   102,
      80,  1215,  1094,  1095,  1096,  1589,  1504,   464,  1216,   496,
       6,   103,    14,  1689,   104,  1690,     7,     8,     9,    77,
      78,    79,  1057,    80,   624,   185,   497,  1281,   916,   917,
     918,   919,   920,   921,     6,    14,   922,   391,   626,  1315,
       7,     8,     9,    77,    78,    79,  1734,    80,   847,   848,
    1750,    62,  1166,  1735,  1753,   778,   105,  1751,  1167,    14,
     356,  1751,   249,   133,   134,   135,   106,   857,   127,    62,
     862,   823,   951,   940,   868,   467,  1505,   298,   299,   300,
     946,   725,   391,   301,   465,   137,   138,   139,   140,   302,
     107,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   210,   108,  1864,   468,
     109,  1506,   110,   937,   938,  1865,   497,   777,  1507,  1508,
     772,    44,   825,   871,    32,  1240,  1415,   777,    31,   132,
    1868,    31,   833,   181,  1117,    31,   837,  1869,   842,  1112,
     128,  1509,  1885,  1885,  1510,  1511,   849,   856,  1398,  1097,
     861,   827,   828,   129,   867,   488,   489,   490,   491,   469,
       6,   470,   130,    86,   195,   196,     7,     8,     9,    77,
      78,    79,   236,    80,   492,   829,   830,   131,  1770,  1771,
    1772,  1773,  1774,  1775,   471,    14,   838,   839,   250,  1963,
     253,   778,   778,   778,   778,     6,  1964,   905,   876,   391,
     254,     7,     8,     9,    77,    78,    79,   356,    80,  1168,
     255,   204,   205,   432,   256,  1169,    62,    62,   257,   433,
      14,   303,  1227,  1228,  1229,  1230,   258,   434,   877,   391,
     259,    77,    78,    79,   472,    80,  1243,   215,   216,     6,
     878,   391,   260,  1512,   261,     7,     8,     9,    77,    78,
      79,   262,    80,   918,   919,   920,   921,  1258,  1259,   922,
     220,   221,   879,   391,    14,   263,   825,  1059,   391,  1562,
    1563,  1198,  1199,  1200,  1201,  1900,  1060,  1061,  1669,   264,
    1280,  1065,   391,   265,   225,   226,  1691,  1692,  1693,  1070,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,   304,   168,
    1079,  1367,   391,  1387,   169,  1488,  1080,   170,  1489,  1368,
     391,  1218,  1369,   391,   778,   266,   361,  1370,   391,  1081,
     306,  1490,  1491,  1343,   267,  1492,  1493,  1382,   391,  1027,
    1568,   185,   778,   778,   778,   778,   778,   778,   778,   778,
     778,   778,   778,   778,   778,   778,   778,   778,  1570,   185,
     778,   287,   288,   289,  1776,   290,   291,   292,   293,  1056,
     356,   294,   295,   296,   297,   298,   299,   300,  1591,   185,
     268,   301,  1593,   185,    77,    78,    79,   302,    80,  1748,
    1749,   872,  1099,   269,  1100,  1101,  1102,  1103,  1104,  1105,
    1106,   313,  1149,  1758,   391,   270,   435,  2004,  1760,   391,
    1480,  1761,   391,  1481,   271,  1638,  1639,  1640,   272,  1642,
    1147,    81,    82,    83,    84,   273,  1482,  1483,  1484,   274,
     230,   231,  1559,  1806,  1807,  1875,  1876,  1660,   275,   437,
    1494,  1932,  1933,   276,    77,    78,    79,   277,    80,  1941,
     391,   314,  1567,   800,   801,   278,  1448,   438,  1569,   333,
    1571,   279,  1451,   318,   778,   859,   860,   439,   440,   326,
     310,   777,  1314,   346,  1316,   348,   441,   358,   442,   363,
    1678,   364,   175,  1287,  1288,  1289,  1290,  1291,  1292,  1293,
     416,  1300,  1592,   417,   175,  1082,   421,  1594,   474,   481,
     172,   178,   482,   483,  1344,   249,   249,   249,   249,   865,
     866,   484,   485,   501,  1238,   505,   513,  1137,   514,   249,
     517,   543,   538,   545,   557,  1439,   562,  1138,   563,   565,
     566,  1251,   567,   569,  1544,  1485,   570,   571,   237,   238,
     249,   249,   572,  1551,   251,   574,   575,   576,   579,   580,
    1268,   581,   582,   584,   586,   585,   588,   590,   592,  1276,
    1277,  1107,   596,   249,  1901,  1139,  1140,  1141,  1142,  1143,
    1144,   599,   604,  1310,  1313,    62,   606,    62,  1319,  1320,
     280,   281,   282,  1321,   608,   609,   610,   612,  1326,  1327,
    1328,  1329,  1330,  1331,  1332,  1333,  1334,  1790,  1710,  1792,
     133,   134,     6,   613,   614,   615,   249,    62,  1345,  1346,
    1347,  1348,  1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,
    1357,  1358,   617,  1360,   616,   627,  1301,  1364,   142,   143,
     144,   145,   146,   629,   657,   660,   443,   665,   668,  1606,
     671,   778,   672,   673,   675,   674,  1711,   677,   676,  1827,
     679,   778,   682,   684,   686,  1832,   296,   297,   298,   299,
     300,   356,   687,   689,   301,   691,   695,   696,   365,   366,
     302,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,  1650,   698,   699,   701,   705,  1145,   707,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   709,   711,   712,   713,   715,   716,
     717,   409,   718,   722,  1879,   723,   729,   415,   732,   249,
     734,   172,   779,   422,   781,   249,   789,   806,   790,  1716,
     798,   812,   803,   808,   809,   475,   476,   810,   811,   813,
    1694,   820,   821,   414,   287,   288,   289,   826,   290,   291,
     292,   293,   834,   502,   294,   295,   296,   297,   298,   299,
     300,   843,   844,   846,   301,   858,   869,   864,   874,   880,
     302,   884,  1944,   886,   292,   293,  1939,   882,   294,   295,
     296,   297,   298,   299,   300,   883,  1534,  1534,   301,   888,
     889,   894,   890,   539,   302,   899,   904,   249,   932,  1661,
     891,  1663,  1664,   925,  -684,   939,   249,   960,  1283,  1018,
    1284,  1285,  1286,   962,   548,   549,   550,   287,   288,   289,
     963,   290,   291,   292,   293,   964,   965,   294,   295,   296,
     297,   298,   299,   300,  1011,  1012,  1013,   301,  1014,  1986,
    1015,   772,  1839,   302,  1021,  1023,  1022,  1025,  1379,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1024,  1294,  1295,   922,
     175,   175,   175,  1046,   175,   287,   288,   289,  1028,   290,
     291,   292,   293,  1052,  1058,   294,   295,   296,   297,   298,
     299,   300,   175,  1069,  1162,   301,  1220,  1153,  1212,  1239,
    1154,   302,  1203,  1155,  1244,  1599,  1600,  1156,  1157,  1158,
    1604,  1159,   249,   622,  1205,  1246,  1160,  1247,  1170,  1161,
    1163,   568,  1171,  1172,  1173,  1174,  1175,   658,   659,  1717,
     336,   337,   338,   339,   340,   341,   342,   343,   344,  1176,
     661,  1629,  1177,  1178,  1179,  1248,  1180,   662,   663,   664,
    1181,  1182,  1183,   666,   667,  1184,  1185,  1188,  1207,  1645,
    1646,  1211,  1648,  1649,   249,  1186,  1187,   605,   287,   288,
     289,  1237,   290,   291,   292,   293,  1208,  1214,   294,   295,
     296,   297,   298,   299,   300,   778,  1226,  1245,   301,   933,
    1658,  1252,  1253,  1254,   302,  1260,  1255,  1267,  1269,  1270,
    1271,  1272,  1296,  1279,  1718,  1322,  1309,  1685,   909,   910,
     911,   912,   913,   720,   721,   914,   915,   916,   917,   918,
     919,   920,   921,   249,  1325,   922,   731,  1695,  1359,  1696,
    1361,  1120,  1362,  1121,  1122,  1371,  1123,  1363,  1376,  1381,
    1388,  1366,   172,   172,  1372,  1937,  1124,   794,   795,  1375,
     172,   797,   175,  1377,   175,  1383,  1389,   802,  1390,   805,
    1391,  1393,  1395,  1125,  1126,  1127,  1719,   697,  1396,  1397,
    1399,  1400,  1814,  1815,  1402,  1403,  1404,  1407,  1408,  1821,
    1128,  1961,  1409,   133,   134,     6,   906,   907,   908,   909,
     910,   911,   912,   913,  1410,  1411,   914,   915,   916,   917,
     918,   919,   920,   921,   175,  1890,   922,  1412,  1416,  1413,
     175,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,  1129,  1418,  1419,  1795,
    1420,  1797,   912,   913,  1421,  1422,   914,   915,   916,   917,
     918,   919,   920,   921,  1423,  1877,   922,  1878,   287,   288,
     289,  1425,   290,   291,   292,   293,  1427,  1428,   294,   295,
     296,   297,   298,   299,   300,    62,    62,  1429,   301,   175,
    1430,  1431,    62,  1432,   302,  1433,   845,  1434,  1435,  1436,
    1437,  1440,   928,   929,  1441,  1442,  1444,  1445,  1446,  1453,
     356,  1447,  1449,  1450,  1452,  1454,  1456,  1466,  1130,  1457,
    1459,   875,  1460,  1461,  1462,  1131,  1464,  1465,  1467,  1468,
     943,   944,   945,  1469,  1470,  1478,   947,   948,  1471,  1472,
    1473,  1474,   949,   287,   288,   289,  1475,   290,   291,   292,
     293,   175,  1476,   294,   295,   296,   297,   298,   299,   300,
    1477,  1515,  1514,   301,  1537,   959,  1516,  1548,    62,   302,
      62,  1565,  1561,  1564,  1531,  1566,  1517,  1549,  1575,  1518,
    1519,   967,  1520,  1521,  1522,  1523,  1541,   936,  1524,  1525,
      77,    78,   968,  1009,    80,  1526,  1010,  1527,  1528,  1529,
    1539,  1530,  1540,  1557,   941,   287,   288,   289,  1558,   290,
     291,   292,   293,  1542,   175,   294,   295,   296,   297,   298,
     299,   300,  1543,   185,  1576,   301,  1572,  1560,   249,  1577,
    1574,   302,  1578,  1579,  1581,  1583,  1665,  1584,  1595,   168,
    1596,  1597,  1607,  1636,   169,  1643,  1047,   170,   133,   134,
     736,   290,   291,   292,   293,   804,  1609,   294,   295,   296,
     297,   298,   299,   300,   249,  1615,  1624,   301,  1283,  1630,
    1284,  1285,  1286,   302,  1631,  1644,   142,   143,   144,   145,
     146,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,  1634,   761,   762,  1651,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1652,  1294,  1295,   969,
    1659,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,  1662,  1666,  1668,   982,  1670,  1671,   983,
    1675,  1681,   984,  1682,  1683,   985,  1684,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1686,  1687,  2031,  1002,  1152,   763,  1709,
    1721,  1003,  1712,  1699,  1004,   764,  1219,  1715,  1688,  1725,
    1728,  1698,  1705,  1737,  1223,  1224,  1225,  1738,   133,   134,
     419,   136,  1700,  1704,    59,  1706,  1736,  1739,  1741,  1742,
    1743,  1745,  1746,  1747,  1754,  1755,  1762,  1765,  1778,  1197,
     137,   138,   139,   140,   141,  1757,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,  1764,  1005,  1766,  1767,  1768,  1779,  1769,  1278,  1780,
    1781,   172,  1299,  1784,  1785,   244,  1221,  1786,  1787,  1222,
    1789,  1796,  1808,   172,  1811,  1812,  1818,  1819,  1820,  1822,
    1823,  1824,  1232,  1234,  1235,  1236,  1828,  1833,  1880,  1241,
    1881,  1835,  1840,  1882,  1836,  1837,  1336,   765,  1338,  1841,
    1340,  1842,  1843,   766,   767,  1844,  1850,  1854,  1851,   768,
    1852,  1855,   769,  1861,  1853,  1048,  1049,   770,   771,  1857,
     772,  1722,  1871,  1860,  1862,  1863,  1872,  1888,  1365,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1889,  1883,  1893,  1892,
    1899,  1902,  1912,  1903,  1904,  1909,  1923,  1925,   133,   134,
     736,  1926,   908,   909,   910,   911,   912,   913,  1323,  1324,
     914,   915,   916,   917,   918,   919,   920,   921,  1927,  1930,
     922,  1335,  1934,  1935,  1936,  1938,   142,   143,   144,   145,
     146,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   680,   761,   762,  1956,   287,
     288,   289,  1945,   290,   291,   292,   293,  1946,  1952,   294,
     295,   296,   297,   298,   299,   300,  1957,  1960,   167,   301,
    1962,  1967,  1968,  1970,  1971,   302,  1972,  1973,  1979,  1392,
    1975,  1394,  1977,  1980,   168,  1981,  1983,  1984,  1401,   169,
    1985,  1987,   170,  1990,  1991,  1992,  1994,   245,  1995,  1996,
     171,  1997,  1998,  2000,  2001,  2002,  2006,  2007,   763,  2009,
    2013,  1724,  1884,  2016,  2017,   764,   287,   288,   289,  2020,
     290,   291,   292,   293,  2023,  2025,   294,   295,   296,   297,
     298,   299,   300,  2028,  2034,  2035,   301,   133,   134,   135,
     136,  2038,   302,    59,  2037,  2044,   305,  1547,  2047,  2048,
    2050,  2052,  2053,  2051,  1405,   927,  1553,  1554,  1555,   137,
     138,   139,   140,   141,   822,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     287,   288,   289,  1249,   290,   291,   292,   293,  1250,  1134,
     294,   295,   296,   297,   298,   299,   300,  1535,  1830,  1654,
     301,   242,   730,   714,   870,   349,   302,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   765,     0,     0,
       0,  1552,     0,   766,   767,     0,     0,     0,     0,   768,
       0,     0,   769,     0,  1601,  1602,  1603,   770,   771,  1726,
     772,  1608,     0,     0,  1611,  1612,     0,     0,     0,  1614,
       0,     0,  1617,  1618,  1619,  1620,     0,     0,  1621,  1622,
    1623,     0,  1625,     0,   967,     0,  1627,  1628,     0,     0,
       0,  1632,  1633,    77,    78,   968,     0,    80,     0,   172,
     172,   172,  1641,   172,     0,     0,     0,     0,  1647,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,     0,     0,     0,  1598,     0,     0,
       0,     0,     0,     0,  1605,     0,     0,     0,     0,  1610,
       0,     0,  1613,  1880,     0,  1881,  1727,  1616,  1882,     0,
     287,   288,   289,     0,   290,   291,   292,   293,     0,  1626,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,  1635,     0,  1637,     0,   302,   167,     0,     0,
       0,  1731,     0,     0,  1287,  1288,  1289,  1290,  1291,  1292,
    1293,     0,  1883,   168,     0,     0,     0,     0,   169,     0,
       0,   170,     0,     0,     0,     0,     0,     0,     0,   171,
       0,     0,     0,     0,     0,  1676,  1677,     0,  1679,     0,
       0,     0,   969,     0,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,     0,     0,     0,   982,
       0,  1756,   983,     0,  1759,   984,  1732,     0,   985,  1763,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1000,  1001,     0,     0,     0,  1002,
       0,     0,     0,     0,  1003,     0,     0,  1004,     0,     0,
       0,   172,  1791,   172,  1793,  1794,     0,     0,   287,   288,
     289,     0,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,  1894,   301,     0,
       0,     0,     0,     0,   302,     0,     0,  1809,     0,     0,
       0,  1813,     0,     0,  1816,  1817,     0,  1887,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,   172,
       0,     0,     0,     0,     0,  1788,     0,     0,     0,     0,
       0,     0,     0,  1845,  1846,  1847,  1848,  1849,     0,     0,
       0,     0,     0,     0,     0,  1798,     0,     0,     0,     0,
       0,  1800,     0,     0,     0,   287,   288,   289,  1802,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,  1810,   301,     0,     0,     0,     0,
       0,   302,     0,     0,     0,     0,     0,     0,   172,     0,
     287,   288,   289,     0,   290,   291,   292,   293,     0,  1891,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,     0,     0,   302,     0,     0,  1905,
    1906,  1907,  1908,     0,     0,  1911,     0,  1913,     0,   289,
       0,   290,   291,   292,   293,  1928,  1929,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
     172,  1940,     0,   302,  1943,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,  1958,     0,
       0,   302,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1969,     0,     0,     0,     0,
    1910,     0,     0,     0,     0,  1922,     0,  1924,     0,     0,
       0,     0,     0,   172,  1931,  1988,   287,   288,   289,     0,
     290,   291,   292,   293,     0,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,  2005,     0,
       0,     0,   302,     0,  1895,     0,     0,     0,     0,     0,
       0,   967,     0,     0,     0,  1959,     0,     0,     0,     0,
      77,    78,   968,     0,    80,     0,     0,     0,  2019,     0,
       0,  2021,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   135,     0,     0,     0,     0,
       0,  2036,     0,     0,  2040,     0,     0,     0,     0,     0,
       0,     0,  1999,     0,  2046,   137,   138,   139,   140,     0,
       0,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   133,   134,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   137,   138,
     139,   140,     0,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   969,
       0,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,     0,     0,     0,   982,     0,     0,   983,
       0,     0,   984,     0,     0,   985,     0,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,     0,     0,     0,  1002,     0,     0,     0,
       0,  1003,     0,     0,  1004,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   967,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
     968,     0,    80,   287,   288,   289,     0,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
    1825,     0,     0,   301,  1826,     0,     0,     0,     0,   302,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1799,   967,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,   968,     0,    80,     0,     0,   168,
       0,     0,     0,     0,   169,     0,     0,   170,     0,     0,
       0,     0,  1896,     0,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1897,
       0,     0,     0,     0,     0,     0,     0,   967,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,   968,     0,
      80,     0,   168,     0,     0,     0,     0,   169,     0,     0,
     170,     0,     0,     0,     0,     0,  1898,   969,   171,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,     0,     0,  1993,   982,     0,     0,   983,     0,     0,
     984,     0,     0,   985,     0,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,     0,     0,     0,  1002,     0,     0,     0,     0,  1003,
       0,   969,  1004,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,     0,     0,     0,   982,     0,
       0,   983,     0,     0,   984,     0,     0,   985,     0,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,     0,     0,     0,  1002,     0,
       0,     0,     0,  1003,     0,   969,  1004,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,     0,
    1801,     0,   982,     0,     0,   983,     0,     0,   984,     0,
       0,   985,     0,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,     0,
       0,     0,  1002,   967,     0,     0,     0,  1003,     0,     0,
    1004,     0,    77,    78,   968,     0,    80,     0,     0,     0,
       0,   287,   288,   289,  1803,   290,   291,   292,   293,     0,
       0,   294,   295,   296,   297,   298,   299,   300,   287,   288,
     289,   301,   290,   291,   292,   293,     0,   302,   294,   295,
     296,   297,   298,   299,   300,     0,     0,   967,   301,     0,
       0,     0,     0,     0,   302,     0,    77,    78,   968,     0,
      80,     0,     0,     0,     0,   287,   288,   289,  1804,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,   287,   288,   289,   301,   290,   291,   292,   293,
     602,   302,   294,   295,   296,   297,   298,   299,   300,     0,
       0,   967,   301,     0,     0,     0,     0,     0,   302,     0,
      77,    78,   968,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   969,     0,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   286,     0,     0,   982,     0,
       0,   983,     0,     0,   984,     0,     0,   985,     0,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,     0,     0,     0,  1002,     0,
       0,     0,     0,  1003,     0,   969,  1004,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,     0,
       0,     0,   982,     0,     0,   983,     0,     0,   984,     0,
       0,   985,     0,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,     0,
       0,     0,  1002,     0,     0,     0,     0,  1003,     0,   969,
    1004,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,     0,  1805,     0,   982,     0,     0,   983,
       0,     0,   984,     0,     0,   985,     0,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,     0,     0,     0,  1002,   967,     0,     0,
       0,  1003,     0,     0,  1004,     0,    77,    78,   968,     0,
      80,     0,     0,     0,     0,     0,     0,     0,  1982,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   287,   288,
     289,     0,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
     603,   967,     0,     0,   302,     0,     0,     0,     0,     0,
      77,    78,   968,     0,    80,     0,     0,     0,     0,     0,
       0,     0,  1989,     0,     0,     0,     0,     0,     0,     0,
       0,   334,     0,   287,   288,   289,     0,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,   967,     0,     0,     0,   302,
       0,     0,     0,     0,    77,    78,   968,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   969,     0,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,     0,
       0,     0,   982,     0,     0,   983,     0,     0,   984,     0,
       0,   985,     0,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,     0,
       0,     0,  1002,     0,     0,     0,     0,  1003,     0,   969,
    1004,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,     0,     0,     0,   982,     0,     0,   983,
       0,     0,   984,     0,     0,   985,     0,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,     0,     0,     0,  1002,     0,     0,     0,
       0,  1003,     0,   969,  1004,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,     0,  2022,     0,
     982,     0,     0,   983,     0,     0,   984,     0,     0,   985,
     630,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,     0,     0,     0,
    1002,   967,     0,     0,     0,  1003,     0,     0,  1004,     0,
      77,    78,   968,     0,    80,     0,     0,     0,     0,   287,
     288,   289,  2024,   290,   291,   292,   293,     0,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,   631,     0,     0,     0,   302,     0,     0,     0,   133,
     134,     6,     0,     0,     0,   967,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,   968,     0,    80,     0,
       0,     0,     0,   632,     0,     0,  2026,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,     0,   633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,     0,     0,   969,
       0,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,     0,     0,     0,   982,     0,     0,   983,
       0,     0,   984,     0,     0,   985,     0,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,     0,     0,     0,  1002,     0,     0,     0,
       0,  1003,     0,   969,  1004,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   541,     0,     0,
     982,     0,     0,   983,     0,     0,   984,     0,     0,   985,
       0,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,   542,     0,     0,
    1002,     0,   133,   134,   135,  1003,     0,     0,  1004,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2027,     0,   137,   138,   139,   140,     0,   601,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   168,   133,   134,   135,     0,
     169,     0,     0,   170,     0,     0,     0,     0,   414,  1217,
       0,     0,     0,     0,     0,     0,  2041,     0,   137,   138,
     139,   140,     0,   780,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   133,
     134,     6,   547,   906,   907,   908,   909,   910,   911,   912,
     913,     0,     0,   914,   915,   916,   917,   918,   919,   920,
     921,     0,     0,   922,   133,   134,     6,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,  1054,     0,     0,
       0,     0,     0,     0,     0,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,     0,
       0,   302,     0,     0,     0,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,   168,     0,
       0,   302,     0,   169,     0,     0,   170,   287,   288,   289,
       0,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     6,    46,     0,   301,     0,    47,
       7,     8,     9,   302,     0,     0,     0,     0,     0,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,    14,
       0,     0,   168,     0,     0,     0,     0,   169,     0,     0,
     170,   287,   288,   289,     0,   290,   291,   292,   293,     0,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,    15,     0,     0,    48,     0,   302,    16,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    18,    50,   168,    51,     0,     0,     0,
     169,     0,     0,   170,     0,    19,     0,     0,    52,    20,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
     168,    21,     0,     0,    54,   169,     0,     0,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,   287,   288,   289,   301,   290,   291,   292,   293,
       0,   302,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,   335,     0,     0,    23,   302,    24,
      56,     0,    57,   906,   907,   908,   909,   910,   911,   912,
     913,     0,     0,   914,   915,   916,   917,   918,   919,   920,
     921,     0,     0,   922,     0,   287,   288,   289,     0,   290,
     291,   292,   293,     0,  1206,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,     0,
       0,   302,     0,   287,   288,   289,   515,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,   287,   288,   289,   302,
     290,   291,   292,   293,   516,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,   287,
     288,   289,   302,   290,   291,   292,   293,   528,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,   287,   288,   289,   302,   290,   291,   292,   293,
     535,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,   287,   288,   289,   302,   290,
     291,   292,   293,   536,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,   287,   288,
     289,   302,   290,   291,   292,   293,   537,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,   287,   288,   289,   302,   290,   291,   292,   293,   814,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,   287,   288,   289,   302,   290,   291,
     292,   293,   815,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,   287,   288,   289,
     302,   290,   291,   292,   293,  1062,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
     287,   288,   289,   302,   290,   291,   292,   293,  1063,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,   287,   288,   289,   302,   290,   291,   292,
     293,  1064,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,   287,   288,   289,   302,
     290,   291,   292,   293,  1196,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,   287,
     288,   289,   302,   290,   291,   292,   293,  1384,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,   287,   288,   289,   302,   290,   291,   292,   293,
    1385,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,   287,   288,   289,   302,   290,
     291,   292,   293,  1386,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,   287,   288,
     289,   302,   290,   291,   292,   293,  1479,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,   287,   288,   289,   302,   290,   291,   292,   293,  1487,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,   287,   288,   289,   302,   290,   291,
     292,   293,  1496,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,   287,   288,   289,
     302,   290,   291,   292,   293,  1667,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
     287,   288,   289,   302,   290,   291,   292,   293,  1701,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,   287,   288,   289,   302,   290,   291,   292,
     293,  1702,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,   287,   288,   289,   302,
     290,   291,   292,   293,  1703,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,   287,
     288,   289,   302,   290,   291,   292,   293,  1707,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,   287,   288,   289,   302,   290,   291,   292,   293,
    1713,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,   287,   288,   289,   302,   290,
     291,   292,   293,  1720,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,   287,   288,
     289,   302,   290,   291,   292,   293,  1740,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,   287,   288,   289,   302,   290,   291,   292,   293,  1858,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,   287,   288,   289,   302,   290,   291,
     292,   293,  1859,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,   287,   288,   289,
     302,   290,   291,   292,   293,  1867,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
     287,   288,   289,   302,   290,   291,   292,   293,  1873,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,   287,   288,   289,   302,   290,   291,   292,
     293,  1874,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,   287,   288,   289,   302,
     290,   291,   292,   293,  1951,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,   287,
     288,   289,   302,   290,   291,   292,   293,  1953,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,   287,   288,   289,   302,   290,   291,   292,   293,
    1976,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,   287,   288,   289,   302,   290,
     291,   292,   293,  2029,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,   287,   288,
     289,   302,   290,   291,   292,   293,  2032,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,   287,   288,   289,   302,   290,   291,   292,   293,  2042,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,     0,     0,     0,   302,   287,   288,
     289,   360,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,     0,     0,     0,   302,   287,   288,   289,   551,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,     0,
       0,   302,   287,   288,   289,   669,   290,   291,   292,   293,
       0,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,     0,     0,     0,   302,   287,
     288,   289,   670,   290,   291,   292,   293,     0,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,     0,     0,     0,   302,   287,   288,   289,  1068,
     290,   291,   292,   293,     0,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,     0,
       0,     0,   302,   287,   288,   289,  1119,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,     0,     0,     0,   302,
     287,   288,   289,  1195,   290,   291,   292,   293,     0,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,     0,     0,   302,   287,   288,   289,
    1538,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
       0,     0,     0,   302,   287,   288,   289,  1672,   290,   291,
     292,   293,     0,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,     0,     0,     0,
     302,   287,   288,   289,  1673,   290,   291,   292,   293,     0,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,     0,     0,     0,   302,   287,   288,
     289,  1674,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,     0,     0,     0,   302,   287,   288,   289,  1831,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,     0,
       0,   302,   287,   288,   289,  1834,   290,   291,   292,   293,
       0,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,     0,     0,     0,   302,   287,
     288,   289,  1838,   290,   291,   292,   293,     0,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,     0,     0,     0,   302,   287,   288,   289,  1942,
     290,   291,   292,   293,     0,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,     0,
       0,     0,   302,   287,   288,   289,  2003,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,     0,     0,     0,   302,
     287,   288,   289,  2018,   290,   291,   292,   293,     0,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,     0,     0,   302,   287,   288,   289,
    2049,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,   389,
     287,   288,   289,   302,   290,   291,   292,   293,     0,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,   518,     0,   302,   287,   288,   289,
       0,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
       0,   519,     0,   302,   287,   288,   289,     0,   290,   291,
     292,   293,     0,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,     0,   520,     0,
     302,   287,   288,   289,     0,   290,   291,   292,   293,     0,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,     0,   521,     0,   302,   287,   288,
     289,     0,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,     0,   522,     0,   302,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,   523,
       0,   302,   287,   288,   289,     0,   290,   291,   292,   293,
       0,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,     0,   524,     0,   302,   287,
     288,   289,     0,   290,   291,   292,   293,     0,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,     0,   525,     0,   302,   287,   288,   289,     0,
     290,   291,   292,   293,     0,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,     0,
     526,     0,   302,   287,   288,   289,     0,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,     0,   527,     0,   302,
     287,   288,   289,     0,   290,   291,   292,   293,     0,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,   529,     0,   302,   287,   288,   289,
       0,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
       0,   530,     0,   302,   287,   288,   289,     0,   290,   291,
     292,   293,     0,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,     0,   531,     0,
     302,   287,   288,   289,     0,   290,   291,   292,   293,     0,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,     0,   532,     0,   302,   287,   288,
     289,     0,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,     0,   533,     0,   302,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,   534,
       0,   302,   287,   288,   289,     0,   290,   291,   292,   293,
       0,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,     0,   544,     0,   302,   287,
     288,   289,     0,   290,   291,   292,   293,     0,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,     0,   559,     0,   302,   287,   288,   289,     0,
     290,   291,   292,   293,     0,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,   623,   287,
     288,   289,   302,   290,   291,   292,   293,     0,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,     0,   816,     0,   302,   287,   288,   289,     0,
     290,   291,   292,   293,     0,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,     0,
     817,     0,   302,   287,   288,   289,     0,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,     0,   818,     0,   302,
     287,   288,   289,     0,   290,   291,   292,   293,     0,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,   819,     0,   302,   287,   288,   289,
       0,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,   873,
     287,   288,   289,   302,   290,   291,   292,   293,     0,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,   881,     0,   302,   287,   288,   289,
       0,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
       0,  1066,     0,   302,   287,   288,   289,     0,   290,   291,
     292,   293,     0,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,     0,  1067,     0,
     302,   287,   288,   289,     0,   290,   291,   292,   293,     0,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,     0,  1744,     0,   302,   287,   288,
     289,     0,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,     0,  1856,     0,   302,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,  1870,
       0,   302,   287,   288,   289,     0,   290,   291,   292,   293,
       0,     0,   294,   295,   296,   297,   298,   299,   300,     0,
       0,     0,   301,     0,     0,     0,  1948,     0,   302,   287,
     288,   289,     0,   290,   291,   292,   293,     0,     0,   294,
     295,   296,   297,   298,   299,   300,     0,     0,     0,   301,
       0,     0,     0,  1949,     0,   302,   287,   288,   289,     0,
     290,   291,   292,   293,     0,     0,   294,   295,   296,   297,
     298,   299,   300,     0,     0,     0,   301,     0,     0,     0,
    1950,     0,   302,   287,   288,   289,     0,   290,   291,   292,
     293,     0,     0,   294,   295,   296,   297,   298,   299,   300,
       0,     0,     0,   301,     0,     0,     0,  1955,     0,   302,
     287,   288,   289,     0,   290,   291,   292,   293,     0,     0,
     294,   295,   296,   297,   298,   299,   300,     0,     0,     0,
     301,     0,     0,     0,  1965,     0,   302,   287,   288,   289,
       0,   290,   291,   292,   293,     0,     0,   294,   295,   296,
     297,   298,   299,   300,     0,     0,     0,   301,     0,     0,
       0,  1966,     0,   302,   287,   288,   289,     0,   290,   291,
     292,   293,     0,     0,   294,   295,   296,   297,   298,   299,
     300,     0,     0,     0,   301,     0,     0,     0,  1978,     0,
     302,   287,   288,   289,     0,   290,   291,   292,   293,     0,
       0,   294,   295,   296,   297,   298,   299,   300,     0,     0,
       0,   301,     0,     0,     0,  2011,     0,   302,   287,   288,
     289,     0,   290,   291,   292,   293,     0,     0,   294,   295,
     296,   297,   298,   299,   300,     0,     0,     0,   301,     0,
       0,     0,  2045,     0,   302,   287,   288,   289,     0,   290,
     291,   292,   293,     0,     0,   294,   295,   296,   297,   298,
     299,   300,     0,     0,     0,   301,     0,     0,     0,     0,
       0,   302,   906,   907,   908,   909,   910,   911,   912,   913,
       0,     0,   914,   915,   916,   917,   918,   919,   920,   921,
       0,     0,   922,     0,     0,     0,  1545,   906,   907,   908,
     909,   910,   911,   912,   913,     0,     0,   914,   915,   916,
     917,   918,   919,   920,   921,     0,     0,   922,     0,  1026
};

static const yytype_int16 yycheck[] =
{
       5,    88,     7,   111,   112,   358,   563,   736,    13,   180,
     345,  1018,   418,   650,   349,   572,  1023,  1024,  1135,    24,
       5,     5,     5,    19,     3,   582,     5,     5,     3,   586,
       5,    36,    88,   590,     3,     5,     5,     5,   114,   115,
     446,    27,   118,   119,   120,   121,   122,   123,     5,   327,
    1596,     7,     3,     5,     5,     5,     5,   269,     5,   337,
     338,   339,     5,  1609,   766,   767,   768,   769,   346,  1615,
     257,     5,     5,     5,     5,   235,    83,     7,  1624,   625,
       3,   252,     5,    76,  1630,  1631,    65,    70,   630,   631,
      97,   265,   260,    89,     5,   269,   638,   503,   259,   267,
      70,   620,     5,   258,    97,   265,   111,   112,   269,   114,
     115,     0,   267,   118,   119,   120,   121,   122,   123,   124,
     235,    87,    65,   128,   129,   130,     0,    70,   114,   115,
      70,    97,   118,   119,   120,   121,   122,   123,    70,    70,
     258,   312,    82,     5,   259,   141,     7,   113,     5,   267,
     258,   117,    14,    15,    16,    66,    18,   886,   260,   888,
      14,    15,    16,   498,    18,   267,     5,    70,   164,   165,
     235,   279,    11,    12,    13,    14,    15,    16,     7,    18,
       5,     6,   353,   248,     9,    10,    83,   889,     5,     6,
      87,    30,     9,    10,   259,    14,    15,    16,   265,    18,
      97,   262,   310,   264,  1211,   907,   908,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,   919,   920,   921,
     922,   144,   628,   925,   258,    64,    19,    14,    15,    16,
      83,    18,   319,   267,    87,    88,   782,    14,    15,    16,
     245,    18,    14,    15,    16,    24,    18,   766,   767,   768,
     769,   108,   265,   258,   265,   257,   118,   259,     5,   266,
      24,   118,   259,   319,    11,    12,    13,    14,    15,    16,
     266,    18,    24,   266,   279,  1282,    24,   260,   257,   262,
     249,   265,   257,    30,   269,   265,   265,   265,   257,   268,
     265,   214,   262,   268,    87,   265,    89,   265,   265,   268,
     266,     6,   269,   265,   391,   310,   257,   100,   265,   265,
      97,   482,   259,   265,   269,   265,   265,   268,    87,   262,
     113,   100,   327,   257,   257,   235,   266,  1029,   262,   259,
     262,   262,   337,   338,   339,     7,   100,   265,   131,   325,
     259,   346,   111,   329,   260,   265,   265,   134,   100,   627,
     269,   267,   100,   358,   141,   319,  1902,    14,    15,    16,
      24,    18,   470,   265,   266,   265,  1912,  1374,   258,   266,
     889,   118,   119,   120,   121,     7,   260,   267,    79,    80,
      14,    15,    16,   267,    18,   265,   266,   265,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   266,   265,   925,     5,   256,   234,
       7,   265,   266,   266,   262,     5,   117,   234,   243,   244,
     425,    11,    12,    13,    14,    15,    16,   266,    18,   265,
     131,     5,     6,   269,   439,   606,   100,   608,   609,   610,
      30,  1987,   266,   267,  1990,   450,   265,   266,     7,   784,
     455,     7,   416,   417,  2000,  2001,   461,   421,   463,   464,
      24,   260,   467,   260,   469,   470,  1103,  1104,   267,   260,
     267,   250,     7,   266,     5,    97,   267,  2023,    68,   266,
      11,    12,    13,    14,    15,    16,   250,    18,   265,   266,
       7,   113,     7,   265,   266,   259,   265,   266,   250,    30,
     259,     5,   250,     7,  1206,   260,   265,   259,   616,   259,
    1029,   259,   267,   135,  1216,   260,    20,    21,    22,   266,
       7,     5,   267,   266,   267,    87,   634,    11,    12,    13,
      14,    15,    16,    37,    18,    97,   100,    99,   260,   257,
      97,     7,    99,   630,   631,   267,    30,     5,   883,   192,
     107,   638,    99,    11,    12,    13,    14,    15,    16,     7,
      18,   260,   109,   110,   111,   266,    19,   189,   267,   233,
       5,     7,    30,  1580,     7,  1582,    11,    12,    13,    14,
      15,    16,   935,    18,   266,   267,   250,  1129,   248,   249,
     250,   251,   252,   253,     5,    30,   256,   267,   268,  1141,
      11,    12,    13,    14,    15,    16,   260,    18,   265,   266,
     260,   616,   259,   267,   260,   620,     7,   267,   265,    30,
     625,   267,   627,     3,     4,     5,     7,   703,   257,   634,
     706,   265,   266,   804,   710,    97,    89,   250,   251,   252,
     811,   266,   267,   256,   266,    25,    26,    27,    28,   262,
       7,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   266,     7,   260,   141,
       7,   134,     7,   791,   792,   267,   250,  1206,   141,   142,
     265,   195,   678,     8,   269,   259,  1253,  1216,   703,   265,
     260,   706,   688,   258,   266,   710,   692,   267,   694,   266,
     259,   164,  1829,  1830,   167,   168,   702,   703,  1237,   266,
     706,   265,   266,   259,   710,   248,   249,   250,   251,   191,
       5,   193,   259,   719,   265,   266,    11,    12,    13,    14,
      15,    16,   131,    18,   267,   265,   266,   259,    90,    91,
      92,    93,    94,    95,   216,    30,   265,   266,     6,   260,
       7,   766,   767,   768,   769,     5,   267,   772,   266,   267,
     259,    11,    12,    13,    14,    15,    16,   782,    18,   259,
     259,   265,   266,    83,   259,   265,   791,   792,   259,    89,
      30,     7,  1070,  1071,  1072,  1073,   259,    97,   266,   267,
     259,    14,    15,    16,   266,    18,  1084,   265,   266,     5,
     266,   267,   259,   266,   259,    11,    12,    13,    14,    15,
      16,   259,    18,   250,   251,   252,   253,  1105,  1106,   256,
     265,   266,   266,   267,    30,   259,   822,   266,   267,   265,
     266,  1012,  1013,  1014,  1015,  1852,   266,   267,  1550,   259,
    1128,   266,   267,   259,   265,   266,  1585,  1586,  1587,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     7,   249,
      81,   266,   267,  1226,   254,   141,    87,   257,   144,   266,
     267,  1052,   266,   267,   889,   259,   266,   266,   267,   100,
       7,   157,   158,  1171,   259,   161,   162,   266,   267,   904,
     266,   267,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   266,   267,
     925,   236,   237,   238,   266,   240,   241,   242,   243,   934,
     935,   246,   247,   248,   249,   250,   251,   252,   266,   267,
     259,   256,   266,   267,    14,    15,    16,   262,    18,   266,
     267,   266,    97,   259,    99,   100,   101,   102,   103,   104,
     105,     7,   967,   266,   267,   259,   266,  1974,   266,   267,
     141,   266,   267,   144,   259,  1517,  1518,  1519,   259,  1521,
     966,   194,   195,   196,   197,   259,   157,   158,   159,   259,
     265,   266,  1398,   265,   266,   266,   267,  1539,   259,    69,
     266,   266,   267,   259,    14,    15,    16,   259,    18,   266,
     267,     5,  1418,   641,   642,   259,  1294,    87,  1424,   265,
    1426,   259,  1300,   259,  1029,   265,   266,    97,    98,   259,
     267,  1550,  1140,   259,  1142,   267,   106,   259,   108,     5,
    1559,     5,  1129,   123,   124,   125,   126,   127,   128,   129,
     235,   131,  1458,   235,  1141,   266,   235,  1463,   265,   265,
      88,    89,   265,   265,  1172,  1070,  1071,  1072,  1073,   265,
     266,   265,   265,     8,  1079,   267,   260,    87,   267,  1084,
     260,     7,   260,   260,     7,     7,     5,    97,     5,   265,
       5,  1096,   265,     5,  1372,   266,   265,     5,   126,   127,
    1105,  1106,     5,  1381,   132,   265,   265,   265,   235,   260,
    1115,     5,     5,   265,     5,   265,   265,     5,   265,  1124,
    1125,   266,   265,  1128,  1853,   135,   136,   137,   138,   139,
     140,     5,   209,  1138,  1139,  1140,   265,  1142,  1143,  1144,
     168,   169,   170,  1148,   265,   265,   265,   260,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1699,     7,  1701,
       3,     4,     5,     5,   259,   259,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,
    1185,  1186,   250,  1188,   259,   131,   266,  1192,    31,    32,
      33,    34,    35,     7,     5,     7,   266,     7,     7,  1477,
       7,  1206,     7,     7,     7,     5,     7,   265,   235,  1751,
       7,  1216,     7,     7,     7,  1757,   248,   249,   250,   251,
     252,  1226,     7,     7,   256,     7,     7,     5,   256,   257,
     262,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,  1529,   235,     7,     7,     7,   266,   265,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,     7,     7,     7,     7,     7,     7,
       7,   309,   266,     5,  1826,   267,     7,   315,     5,  1294,
     250,   319,     7,   321,     8,  1300,   265,   265,     5,     7,
       5,     3,     5,   265,   265,   333,   334,   265,   265,   260,
    1588,   265,    67,   262,   236,   237,   238,     7,   240,   241,
     242,   243,     7,   351,   246,   247,   248,   249,   250,   251,
     252,   265,     7,     7,   256,     7,   266,     7,   265,   267,
     262,     7,  1899,   259,   242,   243,  1888,   260,   246,   247,
     248,   249,   250,   251,   252,   260,  1361,  1362,   256,   259,
     259,     5,   259,   391,   262,     3,     5,  1372,   260,  1540,
     259,  1542,  1543,   259,   259,     6,  1381,     7,    82,   259,
      84,    85,    86,   265,   412,   413,   414,   236,   237,   238,
     265,   240,   241,   242,   243,   265,   265,   246,   247,   248,
     249,   250,   251,   252,   267,   265,   265,   256,   265,  1951,
     265,   265,  1765,   262,     5,   259,     5,   243,     8,   123,
     124,   125,   126,   127,   128,   129,   259,   131,   132,   256,
    1517,  1518,  1519,     3,  1521,   236,   237,   238,   266,   240,
     241,   242,   243,   265,   267,   246,   247,   248,   249,   250,
     251,   252,  1539,   259,     7,   256,     7,   259,   266,     5,
     259,   262,   260,   259,     5,  1470,  1471,   259,   259,   259,
    1475,   259,  1477,   501,   260,     5,   259,     5,   265,   259,
     259,   433,   259,   259,   259,   259,   259,   515,   516,     7,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   259,
     528,  1506,   259,   259,   265,     5,   265,   535,   536,   537,
     259,   259,   259,   541,   542,   259,   259,   259,   259,  1524,
    1525,   259,  1527,  1528,  1529,   265,   265,   479,   236,   237,
     238,   265,   240,   241,   242,   243,   260,   260,   246,   247,
     248,   249,   250,   251,   252,  1550,   262,   265,   256,     5,
    1536,     5,     5,     5,   262,     5,   265,     5,     5,     5,
       5,     5,   266,     3,     7,     7,     5,  1572,   239,   240,
     241,   242,   243,   601,   602,   246,   247,   248,   249,   250,
     251,   252,   253,  1588,     7,   256,   614,  1592,     5,  1594,
     259,    82,   259,    84,    85,     7,    87,   265,   260,   259,
       7,   266,   630,   631,   267,  1883,    97,   635,   636,   265,
     638,   639,  1699,   267,  1701,   267,     7,   645,     7,   647,
       7,     7,     7,   114,   115,   116,     7,   579,     7,     7,
       7,     7,  1740,  1741,     7,     7,     7,     7,     7,  1747,
     131,  1919,     7,     3,     4,     5,   236,   237,   238,   239,
     240,   241,   242,   243,     7,     7,   246,   247,   248,   249,
     250,   251,   252,   253,  1751,  1836,   256,     7,   265,     7,
    1757,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   187,     5,     7,  1704,
       7,  1706,   242,   243,     7,     7,   246,   247,   248,   249,
     250,   251,   252,   253,     7,  1823,   256,  1825,   236,   237,
     238,     7,   240,   241,   242,   243,     7,     7,   246,   247,
     248,   249,   250,   251,   252,  1740,  1741,     7,   256,  1826,
       7,     7,  1747,     7,   262,     7,   698,     7,     7,     7,
       7,     7,   780,   781,     7,     7,     5,     5,     5,     5,
    1765,   259,     7,   259,   259,     5,     7,   260,   259,     7,
       7,   723,     7,     7,     7,   266,     7,     7,   260,   260,
     808,   809,   810,   267,   267,   260,   814,   815,   267,   267,
     267,   267,   820,   236,   237,   238,   267,   240,   241,   242,
     243,  1888,   267,   246,   247,   248,   249,   250,   251,   252,
     267,   260,   267,   256,     7,   843,   267,     3,  1823,   262,
    1825,   113,     7,     7,   260,     7,   267,   260,     7,   267,
     267,     5,   267,   267,   266,   266,   266,   789,   267,   267,
      14,    15,    16,   871,    18,   267,   874,   267,   267,   267,
     265,   267,   265,   267,   806,   236,   237,   238,   267,   240,
     241,   242,   243,   265,  1951,   246,   247,   248,   249,   250,
     251,   252,   265,   267,     7,   256,   259,   267,  1883,     7,
     260,   262,     3,     7,     7,     7,   260,     7,     7,   249,
     265,     7,     7,     7,   254,     7,   924,   257,     3,     4,
       5,   240,   241,   242,   243,   265,   265,   246,   247,   248,
     249,   250,   251,   252,  1919,   265,   265,   256,    82,   265,
      84,    85,    86,   262,   265,     7,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,   265,    61,    62,     5,   123,
     124,   125,   126,   127,   128,   129,     7,   131,   132,   143,
     265,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   265,   260,   260,   160,   260,   266,   163,
     267,     5,   166,     5,     5,   169,     5,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,     7,     7,  2020,   190,   969,   123,     7,
       7,   195,     7,   267,   198,   130,  1054,     7,   260,     7,
       7,   260,   260,   260,  1062,  1063,  1064,   260,     3,     4,
       5,     6,   267,   267,     9,   267,   267,   267,   267,   267,
     267,   260,   260,   267,   265,   265,   260,   262,     7,  1011,
      25,    26,    27,    28,    29,   267,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   266,   266,   260,   260,   266,   266,   260,  1126,   260,
       7,  1129,   266,     7,     7,    70,  1058,     7,     7,  1061,
       7,     7,     7,  1141,     7,     7,     7,     7,     7,     7,
     136,     7,  1074,  1075,  1076,  1077,     7,   266,    82,  1081,
      84,   266,     7,    87,   265,   265,  1164,   242,  1166,     7,
    1168,     7,     7,   248,   249,     5,   112,    17,     7,   254,
     267,   260,   257,   260,   267,   260,   261,   262,   263,   267,
     265,     7,   260,   267,   267,   267,   260,   267,  1196,   123,
     124,   125,   126,   127,   128,   129,   265,   131,     7,   267,
       5,   265,   265,     7,     7,     7,     7,     7,     3,     4,
       5,     7,   238,   239,   240,   241,   242,   243,  1150,  1151,
     246,   247,   248,   249,   250,   251,   252,   253,     7,     7,
     256,  1163,     5,     5,     5,   259,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,   265,    61,    62,     5,   236,
     237,   238,   260,   240,   241,   242,   243,   260,   260,   246,
     247,   248,   249,   250,   251,   252,     5,     5,   233,   256,
     260,   266,     7,     7,     7,   262,     7,     7,     7,  1231,
     266,  1233,   266,     7,   249,     7,     7,     7,  1240,   254,
       7,   265,   257,   265,     7,     7,     7,   262,     7,     7,
     265,     7,     7,   265,   265,     7,   265,     7,   123,   267,
     260,     7,   266,     7,   260,   130,   236,   237,   238,    63,
     240,   241,   242,   243,   265,     7,   246,   247,   248,   249,
     250,   251,   252,     7,     7,     7,   256,     3,     4,     5,
       6,   265,   262,     9,     7,   266,   266,  1375,   133,     7,
       5,     7,   266,  2050,  1244,   776,  1384,  1385,  1386,    25,
      26,    27,    28,    29,   677,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     236,   237,   238,  1094,   240,   241,   242,   243,  1095,   963,
     246,   247,   248,   249,   250,   251,   252,  1362,  1755,  1535,
     256,   129,   613,   596,   719,   242,   262,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
      -1,  1383,    -1,   248,   249,    -1,    -1,    -1,    -1,   254,
      -1,    -1,   257,    -1,  1472,  1473,  1474,   262,   263,     7,
     265,  1479,    -1,    -1,  1482,  1483,    -1,    -1,    -1,  1487,
      -1,    -1,  1490,  1491,  1492,  1493,    -1,    -1,  1496,  1497,
    1498,    -1,  1500,    -1,     5,    -1,  1504,  1505,    -1,    -1,
      -1,  1509,  1510,    14,    15,    16,    -1,    18,    -1,  1517,
    1518,  1519,  1520,  1521,    -1,    -1,    -1,    -1,  1526,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1539,    -1,    -1,    -1,    -1,    -1,  1469,    -1,    -1,
      -1,    -1,    -1,    -1,  1476,    -1,    -1,    -1,    -1,  1481,
      -1,    -1,  1484,    82,    -1,    84,     7,  1489,    87,    -1,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,  1501,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,  1514,    -1,  1516,    -1,   262,   233,    -1,    -1,
      -1,     7,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,   131,   249,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,
      -1,    -1,    -1,    -1,    -1,  1557,  1558,    -1,  1560,    -1,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,  1659,   163,    -1,  1662,   166,     7,    -1,   169,  1667,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
      -1,    -1,    -1,    -1,   195,    -1,    -1,   198,    -1,    -1,
      -1,  1699,  1700,  1701,  1702,  1703,    -1,    -1,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,     7,   256,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,  1735,    -1,    -1,
      -1,  1739,    -1,    -1,  1742,  1743,    -1,   266,    -1,    -1,
      -1,    -1,    -1,  1751,    -1,    -1,    -1,    -1,    -1,  1757,
      -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1771,  1772,  1773,  1774,  1775,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1707,    -1,    -1,    -1,    -1,
      -1,  1713,    -1,    -1,    -1,   236,   237,   238,  1720,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,  1736,   256,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,  1826,    -1,
     236,   237,   238,    -1,   240,   241,   242,   243,    -1,  1837,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,  1857,
    1858,  1859,  1860,    -1,    -1,  1863,    -1,  1865,    -1,   238,
      -1,   240,   241,   242,   243,  1873,  1874,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
    1888,  1889,    -1,   262,  1892,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,  1916,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1933,    -1,    -1,    -1,    -1,
    1862,    -1,    -1,    -1,    -1,  1867,    -1,  1869,    -1,    -1,
      -1,    -1,    -1,  1951,  1876,  1953,   236,   237,   238,    -1,
     240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    -1,  1976,    -1,
      -1,    -1,   262,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,  1917,    -1,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,  2006,    -1,
      -1,  2009,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,  2029,    -1,    -1,  2032,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1964,    -1,  2042,    25,    26,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,   236,   237,   238,    -1,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
     210,    -1,    -1,   256,   214,    -1,    -1,    -1,    -1,   262,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    -1,    -1,   249,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,    -1,     7,    -1,    -1,   265,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    -1,   249,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,     7,   143,   265,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,    -1,     7,   160,    -1,    -1,   163,    -1,    -1,
     166,    -1,    -1,   169,    -1,   171,   172,   173,   174,   175,
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
      -1,    -1,   190,     5,    -1,    -1,    -1,   195,    -1,    -1,
     198,    -1,    14,    15,    16,    -1,    18,    -1,    -1,    -1,
      -1,   236,   237,   238,   266,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,   236,   237,
     238,   256,   240,   241,   242,   243,    -1,   262,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,     5,   256,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,   236,   237,   238,   266,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,   236,   237,   238,   256,   240,   241,   242,   243,
       8,   262,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,     5,   256,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     8,    -1,    -1,   160,    -1,
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
     184,   185,   186,    -1,    -1,    -1,   190,     5,    -1,    -1,
      -1,   195,    -1,    -1,   198,    -1,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   237,
     238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,
     258,     5,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,   236,   237,   238,    -1,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,     5,    -1,    -1,    -1,   262,
      -1,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
      -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
      -1,   169,    -1,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
      -1,    -1,   190,    -1,    -1,    -1,    -1,   195,    -1,   143,
     198,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,   195,    -1,   143,   198,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,   266,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,
      76,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,    -1,    -1,    -1,
     190,     5,    -1,    -1,    -1,   195,    -1,    -1,   198,    -1,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,   236,
     237,   238,   266,   240,   241,   242,   243,    -1,    -1,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,   137,    -1,    -1,    -1,   262,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,   169,    -1,    -1,   266,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,   195,    -1,   143,   198,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     8,    -1,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,
      -1,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,     8,    -1,    -1,
     190,    -1,     3,     4,     5,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    25,    26,    27,    28,    -1,     8,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   249,     3,     4,     5,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,    -1,   262,    70,
      -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,    25,    26,
      27,    28,    -1,     8,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
       4,     5,     6,   236,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,   256,     3,     4,     5,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   249,    -1,
      -1,   262,    -1,   254,    -1,    -1,   257,   236,   237,   238,
      -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,     5,     3,    -1,   256,    -1,     7,
      11,    12,    13,   262,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,   249,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     257,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
      -1,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,   256,    63,    -1,    -1,    63,    -1,   262,    69,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    84,    82,   249,    84,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    96,    -1,    -1,    96,   100,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,   112,    -1,    -1,   112,   254,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
     251,   252,   236,   237,   238,   256,   240,   241,   242,   243,
      -1,   262,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,   258,    -1,    -1,   188,   262,   190,
     188,    -1,   190,   236,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
     253,    -1,    -1,   256,    -1,   236,   237,   238,    -1,   240,
     241,   242,   243,    -1,   267,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   262,    -1,   236,   237,   238,   267,   240,   241,   242,
     243,    -1,    -1,   246,   247,   248,   249,   250,   251,   252,
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
     249,   250,   251,   252,    -1,    -1,    -1,   256,    -1,   258,
     236,   237,   238,   262,   240,   241,   242,   243,    -1,    -1,
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
     250,   251,   252,    -1,    -1,    -1,   256,    -1,   258,   236,
     237,   238,   262,   240,   241,   242,   243,    -1,    -1,   246,
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
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   262,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,   256,    -1,    -1,    -1,   260,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,    -1,   256,    -1,   258
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   271,   272,     0,   273,   274,     5,    11,    12,    13,
      20,    21,    22,    23,    30,    63,    69,    82,    84,    96,
     100,   112,   133,   188,   190,   275,   276,   277,   435,   449,
     457,   458,   269,   257,   262,   458,   257,     7,     5,     7,
      20,    21,    22,    37,   195,     7,     3,     7,    63,    69,
      82,    84,    96,   100,   112,   133,   188,   190,     6,     9,
      10,   234,   458,   459,   460,   259,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   458,    14,    15,    16,
      18,   194,   195,   196,   197,   439,   448,   269,   235,   265,
       6,     7,     7,   458,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,   259,   257,   450,   278,   334,   319,   325,   341,   299,
     364,   390,   420,   431,   192,     5,   257,   257,   259,   259,
     259,   259,   265,     3,     4,     5,     6,    25,    26,    27,
      28,    29,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   233,   249,   254,
     257,   265,   452,   453,   454,   456,   458,   460,   452,   258,
     267,   258,   459,   459,   260,   267,   295,     5,    64,   266,
     279,   280,   448,   449,   458,   265,   266,   335,   448,   449,
     265,   266,   265,   266,   265,   266,   342,   448,   449,    68,
     266,   300,   448,   449,   458,   265,   266,   365,   448,   449,
     265,   266,   391,   448,   449,   265,   266,   421,   448,   449,
     265,   266,   432,   448,   449,   458,   131,   452,   452,   441,
     458,     6,   441,     5,    70,   262,   283,   285,   287,   458,
       6,   452,   265,     7,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     452,   452,   452,   452,   455,   456,     8,   236,   237,   238,
     240,   241,   242,   243,   246,   247,   248,   249,   250,   251,
     252,   256,   262,     7,     7,   266,     7,   455,     7,   259,
     267,   258,   267,     7,     5,   265,   296,   298,   259,   235,
     248,   259,   336,   320,   326,   343,   259,   259,   366,   392,
     422,   433,   436,   265,     8,   258,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   444,   259,   443,   267,   444,
       3,   257,   265,   268,   291,   293,   458,   440,   259,   445,
     266,   266,   455,     5,     5,   452,   452,   459,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   459,   258,
     266,   267,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   258,   452,
     459,   455,   235,   265,   262,   452,   235,   235,   294,     5,
     283,   235,   452,    83,    87,    97,   266,   337,    83,    97,
     266,   321,    83,    89,    97,   266,   327,    69,    87,    97,
      98,   106,   108,   266,   344,   448,   301,   260,   285,    87,
      97,   113,   117,   266,   367,    97,   134,   141,   266,   393,
     448,    97,   113,   135,   189,   266,   423,    97,   141,   191,
     193,   216,   266,   434,   265,   452,   452,   285,   285,   265,
     285,   265,   265,   265,   265,   265,   445,   285,   248,   249,
     250,   251,   267,   442,    24,   100,   233,   250,   302,   303,
     445,     8,   452,   292,   455,   267,    65,   288,   291,   260,
     267,   446,   266,   260,   267,   267,   267,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   267,   260,
     260,   260,   260,   260,   260,   267,   267,   267,   260,   452,
     456,     8,     8,     7,   260,   260,   258,     6,   452,   452,
     452,   266,     5,   283,   283,   260,   295,     7,   283,   260,
       5,   265,     5,     5,   458,   265,     5,   265,   302,     5,
     265,     5,     5,   458,   265,   265,   265,   260,   295,   235,
     260,     5,     5,   458,   265,   265,     5,   458,   265,   394,
       5,   458,   265,   458,   458,   458,   265,   458,   459,     5,
     437,     8,     8,   258,   209,   302,   265,   455,   265,   265,
     265,   260,   260,     5,   259,   259,   259,   250,   445,   306,
     307,   260,   452,   258,   266,   295,   268,   131,   284,     7,
      76,   137,   169,   199,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,     5,   452,   452,
       7,   452,   452,   452,   452,     7,   452,   452,     7,   266,
     266,     7,     7,     7,     5,     7,   235,   265,   338,     7,
     265,   296,     7,   322,     7,   328,     7,     7,   361,     7,
     296,     7,   345,   351,   358,     7,     5,   302,   235,     7,
     296,     7,   368,   374,   296,     7,   395,   265,   296,     7,
     424,     7,     7,     7,   437,     7,     7,     7,   266,   438,
     452,   452,     5,   267,   455,   266,   455,   455,   455,     7,
     443,   452,     5,   459,   250,   260,     5,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    61,    62,   123,   130,   242,   248,   249,   254,   257,
     262,   263,   265,   308,   311,   389,   451,   453,   458,     7,
       8,     8,   249,   293,   285,   289,   295,   454,   454,   265,
       5,   243,   244,   459,   452,   452,   454,   452,     5,   447,
     447,   447,   452,     5,   265,   452,   265,   304,   265,   265,
     265,   265,     3,   260,   267,   267,   260,   260,   260,   260,
     265,    67,   338,   265,   266,   448,     7,   265,   266,   265,
     266,   265,   266,   448,     7,   265,   266,   448,   265,   266,
     265,   266,   448,   265,     7,   302,     7,   265,   266,   448,
     118,   119,   120,   121,   266,   375,   448,   449,     7,   265,
     266,   448,   449,   402,     7,   265,   266,   448,   449,   266,
     439,     8,   266,   258,   265,   302,   266,   266,   266,   266,
     267,   260,   260,   260,     7,   389,   259,   315,   259,   259,
     259,   259,   312,   313,     5,   308,   308,   308,   308,     3,
       3,     5,   144,   214,     5,   458,   236,   237,   238,   239,
     240,   241,   242,   243,   246,   247,   248,   249,   250,   251,
     252,   253,   256,   262,   264,   259,   316,   316,   452,   452,
     293,   445,   260,     5,    66,   290,   302,   459,   459,     6,
     455,   302,   305,   452,   452,   452,   455,   452,   452,   452,
     281,   266,   339,   323,   329,   362,   346,   352,   359,   452,
       7,   369,   265,   265,   265,   265,   396,     5,    16,   143,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   160,   163,   166,   169,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   190,   195,   198,   266,   403,   448,   425,   452,
     452,   267,   265,   265,   265,   265,   445,   389,   259,   389,
     308,     5,     5,   259,   259,   243,   258,   458,   266,   309,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,     3,   452,   260,   261,
     308,   317,   265,   318,     8,   260,   458,   291,   267,   266,
     266,   267,   267,   267,   267,   266,   260,   260,   266,   259,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    81,
      87,   100,   266,   340,    70,    82,   266,   324,    83,    87,
      88,   266,   330,    99,   109,   110,   111,   266,   363,    97,
      99,   100,   101,   102,   103,   104,   105,   266,   347,    97,
      99,   107,   266,   353,    87,    97,    99,   266,   360,   266,
      82,    84,    85,    87,    97,   114,   115,   116,   131,   187,
     259,   266,   370,   380,   380,   384,   376,    87,    97,   135,
     136,   137,   138,   139,   140,   266,   397,   448,   259,   458,
     259,   259,   302,   259,   259,   259,   259,   259,   259,   259,
     259,   259,     7,   259,   259,   265,   259,   265,   259,   265,
     265,   259,   259,   259,   259,   259,   259,   259,   259,   265,
     265,   259,   259,   259,   259,   259,   265,   265,   259,   404,
     405,    76,    97,   266,   426,   266,   267,   302,   455,   455,
     455,   455,   260,   260,   306,   260,   267,   259,   260,   306,
     306,   259,   266,   308,   260,   260,   267,    70,   455,   452,
       7,   302,   302,   452,   452,   452,   262,   285,   285,   285,
     285,   259,   302,   259,   302,   302,   302,   265,   458,     5,
     259,   302,    65,   285,     5,   265,     5,     5,     5,   287,
     290,   458,     5,     5,     5,   265,   304,   304,   285,   285,
       5,     5,   265,   356,     5,   265,   354,     5,   458,     5,
       5,     5,     5,     5,   108,   118,   458,   458,   452,     3,
     285,   454,   372,    82,    84,    85,    86,   123,   124,   125,
     126,   127,   128,   129,   131,   132,   266,   381,   388,   266,
     131,   266,   385,   388,    87,   111,   265,   266,   377,     5,
     458,   265,   398,   458,   459,   454,   459,   265,   400,   458,
     458,   458,     7,   302,   302,     7,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   302,   452,   409,   452,   411,
     452,   413,   415,   285,   459,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,     5,
     458,   259,   259,   265,   458,   452,   266,   266,   266,   266,
     266,     7,   267,   308,   314,   265,   260,   267,   306,     8,
     308,   259,   266,   267,   267,   267,   267,   291,     7,     7,
       7,     7,   302,     7,   302,     7,     7,     7,   453,     7,
       7,   302,     7,     7,     7,   318,   331,     7,     7,     7,
       7,     7,     7,     7,     7,   296,   265,   348,     5,     7,
       7,     7,     7,     7,   357,     7,   355,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,   371,     7,
       7,     7,     7,   306,     5,     5,     5,   259,   285,     7,
     259,   285,   259,     5,     5,   378,     7,     7,   399,     7,
       7,     7,     7,   401,     7,     7,   260,   260,   260,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   260,   267,
     141,   144,   157,   158,   159,   266,   410,   267,   141,   144,
     157,   158,   161,   162,   266,   412,   267,    19,    89,   141,
     164,   165,   266,   414,    19,    89,   134,   141,   142,   164,
     167,   168,   266,   416,   267,   260,   267,   267,   267,   267,
     267,   267,   266,   266,   267,   267,   267,   267,   267,   267,
     267,   260,   304,   406,   458,   406,   427,     7,   266,   265,
     265,   266,   265,   265,   285,   260,   306,   452,     3,   260,
     310,   285,   302,   452,   452,   452,   282,   267,   267,   295,
     267,     7,   265,   266,     7,   113,     7,   295,   266,   295,
     266,   295,   259,   373,   260,     7,     7,     7,     3,     7,
     382,     7,   386,     7,     7,    79,    80,   117,   131,   266,
     379,   266,   295,   266,   295,     7,   265,     7,   302,   458,
     458,   452,   452,   452,   458,   302,   285,     7,   452,   265,
     302,   452,   452,   302,   452,   265,   302,   452,   452,   452,
     452,   452,   452,   452,   265,   452,   302,   452,   452,   458,
     265,   265,   452,   452,   265,   302,     7,   302,   454,   454,
     454,   452,   454,     7,     7,   458,   458,   452,   458,   458,
     285,     5,     7,   407,   407,     5,   118,   266,   448,   265,
     454,   455,   265,   455,   455,   260,   260,   267,   260,   308,
     260,   266,   266,   266,   266,   267,   302,   302,   453,   302,
     332,     5,     5,     5,     5,   458,     7,     7,   260,   306,
     306,   389,   389,   389,   285,   458,   458,   402,   260,   267,
     267,   267,   267,   267,   267,   260,   267,   267,   402,     7,
       7,     7,     7,   267,   402,     7,     7,     7,     7,     7,
     267,     7,     7,   402,     7,     7,     7,     7,     7,   402,
     402,     7,     7,   417,   260,   267,   267,   260,   260,   267,
     267,   267,   267,   267,   260,   260,   260,   267,   266,   267,
     260,   267,   408,   260,   265,   265,   452,   267,   266,   452,
     266,   266,   260,   452,   266,   262,   260,   260,   266,   260,
      90,    91,    92,    93,    94,    95,   266,   333,     7,   266,
     260,     7,   383,   387,     7,     7,     7,     7,   266,     7,
     454,   452,   454,   452,   452,   458,     7,   458,   302,   266,
     302,   266,   302,   266,   266,   266,   265,   266,     7,   452,
     302,     7,     7,   452,   459,   459,   452,   452,     7,     7,
       7,   459,     7,   136,     7,   210,   214,   454,     7,   428,
     428,   266,   454,   266,   266,   266,   265,   265,   266,   291,
       7,     7,     7,     7,     5,   452,   452,   452,   452,   452,
     112,     7,   267,   267,    17,   260,   260,   267,   267,   267,
     267,   260,   267,   267,   260,   267,   418,   267,   260,   267,
     260,   260,   260,   267,   267,   266,   267,   459,   459,   454,
      82,    84,    87,   131,   266,   388,   429,   266,   267,   265,
     455,   452,   267,     7,     7,     7,     7,     7,     7,     5,
     306,   389,   265,     7,     7,   452,   452,   452,   452,     7,
     302,   452,   265,   452,    19,    87,    89,   100,   113,   131,
     266,   419,   302,     7,   302,     7,     7,     7,   452,   452,
       7,   302,   266,   267,     5,     5,     5,   285,   259,   454,
     452,   266,   266,   452,   296,   260,   260,   402,   260,   260,
     260,   267,   260,   267,   402,   260,     5,     5,   452,   302,
       5,   285,   260,   260,   267,   260,   260,   266,     7,   452,
       7,     7,     7,     7,   430,   266,   267,   266,   260,     7,
       7,     7,   266,     7,     7,     7,   454,   265,   452,   266,
     265,     7,     7,     7,     7,     7,     7,     7,     7,   302,
     265,   265,     7,   266,   306,   452,   265,     7,   349,   267,
     402,   260,   402,   260,   402,   402,     7,   260,   266,   452,
      63,   452,   266,   265,   266,     7,   266,   266,     7,   267,
     286,   458,   267,   402,     7,     7,   452,     7,   265,   297,
     452,   266,   267,   350,   266,   260,   452,   133,     7,   266,
       5,   297,     7,   266
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
#line 403 "GetDP.y"
    {            
      strcpy(yyincludename, (yyvsp[(2) - (2)].c)); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 418 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 420 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 422 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 424 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 426 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 428 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 430 "GetDP.y"
    { Help((yyvsp[(2) - (3)].c)); ;}
    break;

  case 28:
#line 432 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 434 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 436 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 438 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 440 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 442 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 444 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 446 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 448 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 450 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 452 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 454 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 456 "GetDP.y"
    { Print_Object((yyvsp[(2) - (3)].i), &Problem_S); ;}
    break;

  case 41:
#line 458 "GetDP.y"
    {
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 42:
#line 466 "GetDP.y"
    {
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;}
    break;

  case 45:
#line 490 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (4)].c), 0, 0) ; ;}
    break;

  case 46:
#line 493 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 2, (yyvsp[(2) - (5)].i)) ; ;}
    break;

  case 47:
#line 499 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, (yyvsp[(1) - (5)].c), 0, 0) ;
    ;}
    break;

  case 50:
#line 509 "GetDP.y"
    { Add_Group_2(&Group_S, (yyvsp[(1) - (5)].c), 1, 0, 0, 0) ; ;}
    break;

  case 53:
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

  case 54:
#line 529 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = (yyvsp[(10) - (10)].l) ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)(yyvsp[(3) - (10)].d) ; 
    ;}
    break;

  case 55:
#line 536 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = (yyvsp[(14) - (18)].l) ; 
      Add_Group(&Group_S, (yyvsp[(1) - (18)].c), 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)(yyvsp[(16) - (18)].d) ; 
    ;}
    break;

  case 56:
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

  case 57:
#line 555 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = (yyvsp[(5) - (6)].l) ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 58:
#line 563 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = (yyvsp[(2) - (2)].l) ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 59:
#line 574 "GetDP.y"
    {
      (yyval.i) = (yyvsp[(1) - (1)].i) ;
    ;}
    break;

  case 60:
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

  case 61:
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

  case 62:
#line 626 "GetDP.y"
    { (yyval.i) = REGION ; ;}
    break;

  case 63:
#line 629 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_Type, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 64:
#line 641 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l) ; ;}
    break;

  case 65:
#line 642 "GetDP.y"
    { (yyval.l) = NULL ; ;}
    break;

  case 66:
#line 649 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  (yyval.l) = NULL ; ;}
    break;

  case 67:
#line 652 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; (yyval.l) = (yyvsp[(3) - (3)].l) ; ;}
    break;

  case 68:
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

  case 69:
#line 673 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_SuppList, (yyvsp[(1) - (1)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", (yyvsp[(1) - (1)].c));
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 70:
#line 686 "GetDP.y"
    {
      (yyval.l) = List_Create(((List_Nbr((yyvsp[(1) - (1)].l)) > 0)? List_Nbr((yyvsp[(1) - (1)].l)) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(1) - (1)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(1) - (1)].l), i) ) ;
    ;}
    break;

  case 71:
#line 693 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 72:
#line 700 "GetDP.y"
    {
      (yyval.l) = List_Create( 5, 5, sizeof(int)) ;
    ;}
    break;

  case 73:
#line 705 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (3)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(3) - (3)].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[(3) - (3)].l), i) ) ;
    ;}
    break;

  case 74:
#line 712 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (4)].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[(4) - (4)].l)) ; i++)
	List_Suppress((yyval.l), (int *)List_Pointer((yyvsp[(4) - (4)].l), i), fcmp_int ) ;
    ;}
    break;

  case 75:
#line 723 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &((yyvsp[(1) - (1)].i))) ;
    ;}
    break;

  case 76:
#line 729 "GetDP.y"
    {
      i = (int)(yyvsp[(2) - (3)].d) ;
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
    ;}
    break;

  case 77:
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

  case 78:
#line 747 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(yyvsp[(1) - (3)].i) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?(j<=(yyvsp[(3) - (3)].d)):(j>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 79:
#line 756 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)(yyvsp[(2) - (5)].d) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?(j<=(yyvsp[(5) - (5)].d)):(j>=(yyvsp[(5) - (5)].d)) ; ((yyvsp[(2) - (5)].d)<(yyvsp[(5) - (5)].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 80:
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

  case 81:
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

  case 82:
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

  case 84:
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

  case 85:
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

  case 88:
#line 862 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(3) - (4)].d) ; ;}
    break;

  case 89:
#line 867 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 90:
#line 868 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 91:
#line 873 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 95:
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

  case 96:
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

  case 100:
#line 965 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[(3) - (3)].c), fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, (yyvsp[(3) - (3)].c), 0) ;
      }
      else  Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 101:
#line 975 "GetDP.y"
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

  case 102:
#line 998 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = (yyvsp[(3) - (4)].d) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 103:
#line 1004 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(3) - (4)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", (yyvsp[(3) - (4)].c)) ;
      Free((yyvsp[(3) - (4)].c)) ;  (yyval.i) = i ;
    ;}
    break;

  case 104:
#line 1010 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 105:
#line 1013 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = (yyvsp[(2) - (2)].l) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 106:
#line 1018 "GetDP.y"
    { Expression_S.Type = UNDEFINED_EXP ; 
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;}
    break;

  case 107:
#line 1025 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 109:
#line 1036 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &((yyvsp[(1) - (1)].i))) ; ;}
    break;

  case 110:
#line 1039 "GetDP.y"
    { List_Add(ListOfInt_L, &((yyvsp[(3) - (3)].i))) ; ;}
    break;

  case 111:
#line 1045 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 112:
#line 1049 "GetDP.y"
    { (yyval.l) = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 114:
#line 1061 "GetDP.y"
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

  case 115:
#line 1074 "GetDP.y"
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

  case 116:
#line 1088 "GetDP.y"
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

  case 117:
#line 1103 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1109 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1115 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1121 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1127 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1133 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1139 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1145 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1151 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1157 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1163 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1169 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1175 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1181 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1187 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1193 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 133:
#line 1199 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 134:
#line 1206 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1214 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 138:
#line 1227 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[(1) - (1)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 139:
#line 1233 "GetDP.y"
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
#line 1307 "GetDP.y"
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
#line 1341 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[(1) - (1)].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(1) - (1)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 142:
#line 1350 "GetDP.y"
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
#line 1362 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1364 "GetDP.y"
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
#line 1376 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1378 "GetDP.y"
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
#line 1390 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 148:
#line 1392 "GetDP.y"
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
#line 1406 "GetDP.y"
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
#line 1418 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 151:
#line 1424 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[(3) - (4)].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 152:
#line 1430 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 153:
#line 1432 "GetDP.y"
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
#line 1461 "GetDP.y"
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
#line 1487 "GetDP.y"
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
#line 1500 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1506 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1513 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[(2) - (2)].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1519 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[(3) - (3)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1526 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[(2) - (2)].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1533 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[(3) - (3)].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 162:
#line 1544 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 163:
#line 1545 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 164:
#line 1546 "GetDP.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 165:
#line 1551 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 166:
#line 1552 "GetDP.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + 1 ; ;}
    break;

  case 167:
#line 1558 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 168:
#line 1561 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 169:
#line 1564 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[(4) - (6)].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 170:
#line 1579 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 171:
#line 1584 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 172:
#line 1591 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 174:
#line 1600 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[(2) - (3)].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 175:
#line 1605 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 176:
#line 1612 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 177:
#line 1615 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &JacobianCase_S) ; ;}
    break;

  case 178:
#line 1622 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 180:
#line 1632 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 181:
#line 1635 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 182:
#line 1638 "GetDP.y"
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
#line 1676 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 184:
#line 1682 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 185:
#line 1689 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 187:
#line 1702 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[(2) - (3)].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 188:
#line 1709 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[(2) - (3)].i) ;  ;}
    break;

  case 189:
#line 1712 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 190:
#line 1719 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 191:
#line 1722 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &IntegrationCase_S) ; ;}
    break;

  case 192:
#line 1729 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 194:
#line 1741 "GetDP.y"
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
#line 1751 "GetDP.y"
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
#line 1761 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 197:
#line 1768 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 198:
#line 1771 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &QuadratureCase_S) ; ;}
    break;

  case 199:
#line 1778 "GetDP.y"
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
#line 1794 "GetDP.y"
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
#line 1842 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 203:
#line 1845 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 204:
#line 1848 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 205:
#line 1851 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 206:
#line 1854 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 207:
#line 1865 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 209:
#line 1875 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 212:
#line 1887 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 214:
#line 1900 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (3)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 215:
#line 1907 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[(2) - (4)].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 216:
#line 1915 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 217:
#line 1924 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 218:
#line 1927 "GetDP.y"
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
#line 1945 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 220:
#line 1950 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 221:
#line 1955 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 222:
#line 1964 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 224:
#line 1978 "GetDP.y"
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
#line 1988 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 226:
#line 1993 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 227:
#line 1999 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 228:
#line 2004 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2012 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[(2) - (3)].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2020 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[(3) - (7)].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[(5) - (7)].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2029 "GetDP.y"
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
#line 2047 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[(2) - (3)].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2056 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2064 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[(2) - (3)].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2072 "GetDP.y"
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
#line 2082 "GetDP.y"
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
#line 2092 "GetDP.y"
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
#line 2102 "GetDP.y"
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
#line 2122 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 241:
#line 2133 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 244:
#line 2146 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 247:
#line 2160 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (3)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 248:
#line 2167 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[(2) - (4)].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 249:
#line 2175 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 250:
#line 2184 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 251:
#line 2187 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 252:
#line 2190 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 253:
#line 2193 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 254:
#line 2200 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 255:
#line 2206 "GetDP.y"
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
#line 2223 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 257:
#line 2232 "GetDP.y"
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
#line 2253 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 260:
#line 2256 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (3)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (3)].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 261:
#line 2261 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[(2) - (4)].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[(2) - (4)].c) ; BasisFunction_S.Dimension = (yyvsp[(3) - (4)].i) ; ;}
    break;

  case 262:
#line 2266 "GetDP.y"
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
#line 2280 "GetDP.y"
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
#line 2300 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 265:
#line 2305 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 266:
#line 2310 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 267:
#line 2315 "GetDP.y"
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
#line 2349 "GetDP.y"
    {
      Nbr_Index = (yyvsp[(7) - (8)].i) ;
    ;}
    break;

  case 270:
#line 2353 "GetDP.y"
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
#line 2363 "GetDP.y"
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
#line 2427 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 273:
#line 2433 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &SubSpace_S) ; 
    ;}
    break;

  case 274:
#line 2442 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 276:
#line 2453 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[(2) - (3)].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 277:
#line 2460 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 278:
#line 2463 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 279:
#line 2470 "GetDP.y"
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
#line 2486 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 281:
#line 2492 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 282:
#line 2495 "GetDP.y"
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
#line 2514 "GetDP.y"
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
#line 2526 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 285:
#line 2533 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 286:
#line 2538 "GetDP.y"
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
#line 2553 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 288:
#line 2559 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 289:
#line 2565 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 290:
#line 2574 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 292:
#line 2586 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[(2) - (3)].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 293:
#line 2593 "GetDP.y"
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
#line 2604 "GetDP.y"
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
#line 2618 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 296:
#line 2623 "GetDP.y"
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
#line 2660 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 298:
#line 2669 "GetDP.y"
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
#line 2685 "GetDP.y"
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
#line 2718 "GetDP.y"
    { Type_Function = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 302:
#line 2721 "GetDP.y"
    { Type_SuppList = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 303:
#line 2724 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c), fcmp_Constraint_Name) ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 304:
#line 2739 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 306:
#line 2749 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 309:
#line 2762 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 311:
#line 2773 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (3)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 312:
#line 2780 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[(2) - (4)].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 313:
#line 2788 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 315:
#line 2800 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 316:
#line 2806 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 317:
#line 2811 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 319:
#line 2822 "GetDP.y"
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

  case 321:
#line 2845 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 322:
#line 2848 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 323:
#line 2852 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 324:
#line 2855 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 325:
#line 2865 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 326:
#line 2869 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[(2) - (2)].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[(2) - (2)].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 327:
#line 2877 "GetDP.y"
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

  case 328:
#line 2901 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (int)(yyvsp[(2) - (3)].d) ;
    ;}
    break;

  case 329:
#line 2906 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 330:
#line 2912 "GetDP.y"
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

  case 331:
#line 3223 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 332:
#line 3228 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 333:
#line 3237 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 334:
#line 3246 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 335:
#line 3255 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 337:
#line 3263 "GetDP.y"
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

  case 338:
#line 3303 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 339:
#line 3308 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[(1) - (2)].l), &EquationTerm_S) ;
    ;}
    break;

  case 340:
#line 3313 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 341:
#line 3318 "GetDP.y"
    {
      (yyval.l) = (yyvsp[(1) - (2)].l) ;
    ;}
    break;

  case 342:
#line 3327 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 343:
#line 3330 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 344:
#line 3333 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 345:
#line 3336 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 346:
#line 3347 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 348:
#line 3358 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 349:
#line 3368 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[(2) - (3)].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 350:
#line 3378 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 351:
#line 3392 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 353:
#line 3404 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 354:
#line 3406 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 355:
#line 3408 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[(2) - (3)].t).Int2 ; ;}
    break;

  case 356:
#line 3410 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 357:
#line 3418 "GetDP.y"
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

  case 359:
#line 3443 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 360:
#line 3451 "GetDP.y"
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

  case 361:
#line 3530 "GetDP.y"
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

  case 362:
#line 3584 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 363:
#line 3589 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 364:
#line 3598 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 365:
#line 3607 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 366:
#line 3612 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[(2) - (3)].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 367:
#line 3621 "GetDP.y"
    { if ( (yyvsp[(3) - (5)].i) == 1 || (yyvsp[(3) - (5)].i) == 2 || (yyvsp[(3) - (5)].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[(3) - (5)].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[(3) - (5)].i)) ;
    ;}
    break;

  case 368:
#line 3632 "GetDP.y"
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

  case 370:
#line 3661 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[(2) - (3)].i)) ;
    ;}
    break;

  case 371:
#line 3666 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 372:
#line 3674 "GetDP.y"
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

  case 373:
#line 3729 "GetDP.y"
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

  case 374:
#line 3746 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 375:
#line 3747 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 376:
#line 3748 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 377:
#line 3749 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 378:
#line 3750 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 379:
#line 3751 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 380:
#line 3752 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 381:
#line 3753 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 382:
#line 3760 "GetDP.y"
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

  case 383:
#line 3781 "GetDP.y"
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

  case 384:
#line 3805 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 386:
#line 3815 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 389:
#line 3828 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 391:
#line 3840 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (3)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 392:
#line 3847 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[(2) - (4)].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[(2) - (4)].c) ;
    ;}
    break;

  case 393:
#line 3855 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 394:
#line 3858 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 395:
#line 3860 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[(4) - (5)].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 397:
#line 3868 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 398:
#line 3873 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[(1) - (4)].l), &DefineSystem_S) ;
    ;}
    break;

  case 399:
#line 3878 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 400:
#line 3883 "GetDP.y"
    {
       (yyval.l) = (yyvsp[(1) - (2)].l) ;
     ;}
    break;

  case 401:
#line 3892 "GetDP.y"
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

  case 403:
#line 3912 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 404:
#line 3915 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[(2) - (3)].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[(2) - (3)].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 405:
#line 3924 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 406:
#line 3927 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 407:
#line 3932 "GetDP.y"
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

  case 408:
#line 3943 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 409:
#line 3948 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 410:
#line 3953 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 412:
#line 3964 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 413:
#line 3973 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 414:
#line 3980 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 415:
#line 3983 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 416:
#line 3995 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(1) - (1)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 417:
#line 4005 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 418:
#line 4011 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 419:
#line 4014 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 420:
#line 4026 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 421:
#line 4034 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 422:
#line 4047 "GetDP.y"
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

  case 423:
#line 4069 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 424:
#line 4076 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 425:
#line 4082 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 426:
#line 4088 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 427:
#line 4094 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 428:
#line 4102 "GetDP.y"
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

  case 429:
#line 4124 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 430:
#line 4131 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 431:
#line 4137 "GetDP.y"
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

  case 432:
#line 4148 "GetDP.y"
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

  case 433:
#line 4159 "GetDP.y"
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

  case 434:
#line 4172 "GetDP.y"
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

  case 435:
#line 4187 "GetDP.y"
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

  case 436:
#line 4202 "GetDP.y"
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

  case 437:
#line 4217 "GetDP.y"
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

  case 438:
#line 4237 "GetDP.y"
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

  case 439:
#line 4258 "GetDP.y"
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

  case 440:
#line 4270 "GetDP.y"
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

  case 441:
#line 4290 "GetDP.y"
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

  case 442:
#line 4307 "GetDP.y"
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

  case 443:
#line 4326 "GetDP.y"
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

  case 444:
#line 4347 "GetDP.y"
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

  case 445:
#line 4361 "GetDP.y"
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

  case 446:
#line 4375 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 447:
#line 4383 "GetDP.y"
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
#line 4417 "GetDP.y"
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
#line 4430 "GetDP.y"
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
#line 4444 "GetDP.y"
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
#line 4457 "GetDP.y"
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
#line 4469 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 454:
#line 4478 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 456:
#line 4487 "GetDP.y"
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
#line 4498 "GetDP.y"
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
#line 4510 "GetDP.y"
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
#line 4520 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 460:
#line 4528 "GetDP.y"
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
#line 4541 "GetDP.y"
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
#line 4554 "GetDP.y"
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
#line 4568 "GetDP.y"
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
#line 4578 "GetDP.y"
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
#line 4588 "GetDP.y"
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
#line 4602 "GetDP.y"
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
#line 4616 "GetDP.y"
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
#line 4635 "GetDP.y"
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
#line 4653 "GetDP.y"
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
#line 4664 "GetDP.y"
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
#line 4679 "GetDP.y"
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
#line 4694 "GetDP.y"
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
#line 4709 "GetDP.y"
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
#line 4724 "GetDP.y"
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
#line 4739 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 476:
#line 4750 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 477:
#line 4755 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 478:
#line 4765 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 480:
#line 4775 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 481:
#line 4778 "GetDP.y"
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
#line 4788 "GetDP.y"
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
#line 4804 "GetDP.y"
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
#line 4820 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 486:
#line 4824 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 487:
#line 4828 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 488:
#line 4832 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 489:
#line 4837 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 490:
#line 4848 "GetDP.y"
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
#line 4865 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 493:
#line 4869 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4873 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 495:
#line 4877 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 496:
#line 4881 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 497:
#line 4886 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 498:
#line 4897 "GetDP.y"
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
#line 4912 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 501:
#line 4916 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 4920 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 503:
#line 4924 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 504:
#line 4928 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 505:
#line 4939 "GetDP.y"
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
#line 4957 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 508:
#line 4961 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 509:
#line 4965 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 510:
#line 4969 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 511:
#line 4974 "GetDP.y"
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
#line 4984 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 513:
#line 4990 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 514:
#line 4996 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 515:
#line 5006 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 516:
#line 5009 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 517:
#line 5014 "GetDP.y"
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
#line 5032 "GetDP.y"
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
#line 5042 "GetDP.y"
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
#line 5071 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 522:
#line 5074 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 523:
#line 5077 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 524:
#line 5085 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 525:
#line 5102 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 527:
#line 5114 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 530:
#line 5125 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 532:
#line 5138 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 533:
#line 5145 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 534:
#line 5153 "GetDP.y"
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
#line 5166 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 536:
#line 5171 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 537:
#line 5177 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 538:
#line 5180 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 539:
#line 5183 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 540:
#line 5185 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 541:
#line 5191 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 543:
#line 5202 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 544:
#line 5205 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 545:
#line 5211 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 546:
#line 5216 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 547:
#line 5222 "GetDP.y"
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
#line 5234 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 549:
#line 5240 "GetDP.y"
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
#line 5254 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 552:
#line 5261 "GetDP.y"
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
#line 5289 "GetDP.y"
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
#line 5300 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 555:
#line 5305 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 556:
#line 5314 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 557:
#line 5331 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 559:
#line 5343 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 562:
#line 5352 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 564:
#line 5364 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 565:
#line 5371 "GetDP.y"
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

  case 566:
#line 5383 "GetDP.y"
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

  case 567:
#line 5394 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 568:
#line 5399 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 569:
#line 5405 "GetDP.y"
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

  case 570:
#line 5422 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 571:
#line 5432 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 572:
#line 5435 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 573:
#line 5439 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 574:
#line 5452 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 575:
#line 5457 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 576:
#line 5462 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 577:
#line 5471 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 578:
#line 5480 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 579:
#line 5489 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 580:
#line 5495 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 581:
#line 5500 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 582:
#line 5509 "GetDP.y"
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

  case 583:
#line 5521 "GetDP.y"
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

  case 584:
#line 5544 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 585:
#line 5545 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 586:
#line 5546 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 587:
#line 5547 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 588:
#line 5553 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 589:
#line 5555 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 590:
#line 5561 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 591:
#line 5567 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 592:
#line 5574 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 593:
#line 5583 "GetDP.y"
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

  case 594:
#line 5605 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 595:
#line 5613 "GetDP.y"
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

  case 596:
#line 5624 "GetDP.y"
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

  case 597:
#line 5638 "GetDP.y"
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

  case 598:
#line 5659 "GetDP.y"
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

  case 599:
#line 5686 "GetDP.y"
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

  case 600:
#line 5717 "GetDP.y"
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

  case 601:
#line 5737 "GetDP.y"
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

  case 603:
#line 5773 "GetDP.y"
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

  case 604:
#line 5787 "GetDP.y"
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

  case 605:
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
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 606:
#line 5815 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 607:
#line 5819 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 608:
#line 5823 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 609:
#line 5827 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 610:
#line 5831 "GetDP.y"
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

  case 611:
#line 5841 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 612:
#line 5846 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 613:
#line 5851 "GetDP.y"
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

  case 614:
#line 5871 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 615:
#line 5875 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 616:
#line 5882 "GetDP.y"
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

  case 617:
#line 5892 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 618:
#line 5901 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[(3) - (3)].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[(3) - (3)].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 619:
#line 5910 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 620:
#line 5917 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 621:
#line 5925 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 622:
#line 5929 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[(4) - (5)].l)) ; i++){
	List_Read((yyvsp[(4) - (5)].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 623:
#line 5938 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 624:
#line 5942 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 625:
#line 5946 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 626:
#line 5954 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 627:
#line 5960 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 628:
#line 5964 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 629:
#line 5972 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 630:
#line 5979 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 631:
#line 5987 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 632:
#line 5994 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 633:
#line 6002 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 634:
#line 6009 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 635:
#line 6017 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 636:
#line 6021 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 637:
#line 6030 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 638:
#line 6036 "GetDP.y"
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

  case 639:
#line 6086 "GetDP.y"
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

  case 640:
#line 6101 "GetDP.y"
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

  case 641:
#line 6117 "GetDP.y"
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

  case 642:
#line 6137 "GetDP.y"
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

  case 643:
#line 6157 "GetDP.y"
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

  case 644:
#line 6195 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 645:
#line 6199 "GetDP.y"
    {
    ;}
    break;

  case 647:
#line 6214 "GetDP.y"
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
#line 6229 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6235 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6241 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6247 "GetDP.y"
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
#line 6263 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 653:
#line 6268 "GetDP.y"
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
#line 6284 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 655:
#line 6289 "GetDP.y"
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
#line 6301 "GetDP.y"
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
#line 6311 "GetDP.y"
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
#line 6325 "GetDP.y"
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
#line 6351 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 661:
#line 6357 "GetDP.y"
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
#line 6371 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 663:
#line 6377 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 664:
#line 6387 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 665:
#line 6388 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 666:
#line 6389 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 667:
#line 6390 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 668:
#line 6391 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 669:
#line 6392 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 670:
#line 6393 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 671:
#line 6394 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 672:
#line 6395 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 673:
#line 6396 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 674:
#line 6397 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 675:
#line 6398 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 676:
#line 6399 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 677:
#line 6400 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 678:
#line 6401 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 679:
#line 6402 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 680:
#line 6403 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 681:
#line 6404 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 682:
#line 6405 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 683:
#line 6406 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 684:
#line 6407 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 685:
#line 6411 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 686:
#line 6412 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 687:
#line 6413 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 688:
#line 6414 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 689:
#line 6415 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 690:
#line 6416 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 691:
#line 6417 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 692:
#line 6418 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 693:
#line 6419 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 694:
#line 6420 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 695:
#line 6421 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 696:
#line 6422 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 697:
#line 6423 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 698:
#line 6424 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 699:
#line 6425 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 700:
#line 6426 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 701:
#line 6427 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 702:
#line 6428 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 703:
#line 6429 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 704:
#line 6430 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 705:
#line 6431 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 706:
#line 6432 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6433 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 708:
#line 6434 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6435 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 710:
#line 6436 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6437 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 712:
#line 6438 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 713:
#line 6439 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 714:
#line 6440 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 715:
#line 6441 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 716:
#line 6442 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 717:
#line 6443 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 718:
#line 6444 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 719:
#line 6445 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 720:
#line 6446 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 721:
#line 6447 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 722:
#line 6448 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 723:
#line 6450 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 724:
#line 6452 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 725:
#line 6457 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 726:
#line 6458 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 727:
#line 6459 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 728:
#line 6460 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 729:
#line 6461 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 730:
#line 6462 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 731:
#line 6463 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 732:
#line 6465 "GetDP.y"
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
#line 6483 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 734:
#line 6486 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 735:
#line 6492 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 736:
#line 6495 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 737:
#line 6502 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 738:
#line 6508 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 739:
#line 6511 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 740:
#line 6514 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 741:
#line 6526 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 742:
#line 6532 "GetDP.y"
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
#line 6543 "GetDP.y"
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
#line 6559 "GetDP.y"
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
#line 6581 "GetDP.y"
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
#line 6596 "GetDP.y"
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
#line 6634 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 748:
#line 6642 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 749:
#line 6654 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 750:
#line 6662 "GetDP.y"
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
#line 6676 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 752:
#line 6679 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 753:
#line 6686 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 754:
#line 6689 "GetDP.y"
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
#line 6704 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 756:
#line 6709 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 757:
#line 6714 "GetDP.y"
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
#line 6733 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 759:
#line 6743 "GetDP.y"
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
#line 11993 "GetDP.tab.c"
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


#line 6754 "GetDP.y"



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


