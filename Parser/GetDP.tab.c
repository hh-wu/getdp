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
     tFor = 268,
     tEndFor = 269,
     tIf = 270,
     tElse = 271,
     tEndIf = 272,
     tFlag = 273,
     tHelp = 274,
     tCpu = 275,
     tCheck = 276,
     tInclude = 277,
     tConstant = 278,
     tList = 279,
     tListAlt = 280,
     tLinSpace = 281,
     tLogSpace = 282,
     tListFromFile = 283,
     tDefineConstant = 284,
     tPi = 285,
     t0D = 286,
     t1D = 287,
     t2D = 288,
     t3D = 289,
     tExp = 290,
     tLog = 291,
     tLog10 = 292,
     tSqrt = 293,
     tSin = 294,
     tAsin = 295,
     tCos = 296,
     tAcos = 297,
     tTan = 298,
     tAtan = 299,
     tAtan2 = 300,
     tSinh = 301,
     tCosh = 302,
     tTanh = 303,
     tFabs = 304,
     tFloor = 305,
     tCeil = 306,
     tFmod = 307,
     tModulo = 308,
     tHypot = 309,
     tSolidAngle = 310,
     tTrace = 311,
     tOrder = 312,
     tCrossProduct = 313,
     tDofValue = 314,
     tMHTransform = 315,
     tMHJacNL = 316,
     tGroup = 317,
     tDefineGroup = 318,
     tAll = 319,
     tInSupport = 320,
     tMovingBand2D = 321,
     tDefineFunction = 322,
     tConstraint = 323,
     tRegion = 324,
     tSubRegion = 325,
     tRegionRef = 326,
     tSubRegionRef = 327,
     tFilter = 328,
     tCoefficient = 329,
     tValue = 330,
     tTimeFunction = 331,
     tBranch = 332,
     tNode = 333,
     tLoop = 334,
     tNameOfResolution = 335,
     tJacobian = 336,
     tCase = 337,
     tIntegration = 338,
     tFMMIntegration = 339,
     tMatrix = 340,
     tType = 341,
     tSubType = 342,
     tCriterion = 343,
     tGeoElement = 344,
     tNumberOfPoints = 345,
     tMaxNumberOfPoints = 346,
     tNumberOfDivisions = 347,
     tMaxNumberOfDivisions = 348,
     tStoppingCriterion = 349,
     tFunctionSpace = 350,
     tName = 351,
     tBasisFunction = 352,
     tNameOfCoef = 353,
     tFunction = 354,
     tdFunction = 355,
     tSubFunction = 356,
     tSubdFunction = 357,
     tSupport = 358,
     tEntity = 359,
     tSubSpace = 360,
     tNameOfBasisFunction = 361,
     tGlobalQuantity = 362,
     tEntityType = 363,
     tEntitySubType = 364,
     tNameOfConstraint = 365,
     tFormulation = 366,
     tQuantity = 367,
     tNameOfSpace = 368,
     tIndexOfSystem = 369,
     tSymmetry = 370,
     tEquation = 371,
     tGalerkin = 372,
     tdeRham = 373,
     tGlobalTerm = 374,
     tGlobalEquation = 375,
     tDiscreteGeometry = 376,
     tDt = 377,
     tDtDof = 378,
     tDtDt = 379,
     tDtDtDof = 380,
     tJacNL = 381,
     tNeverDt = 382,
     tDtNL = 383,
     tAtAnteriorTimeStep = 384,
     tIn = 385,
     tFull_Matrix = 386,
     tResolution = 387,
     tDefineSystem = 388,
     tNameOfFormulation = 389,
     tNameOfMesh = 390,
     tFrequency = 391,
     tSolver = 392,
     tOriginSystem = 393,
     tDestinationSystem = 394,
     tOperation = 395,
     tOperationEnd = 396,
     tSetTime = 397,
     tDTime = 398,
     tSetFrequency = 399,
     tFourierTransform = 400,
     tFourierTransformJ = 401,
     tLanczos = 402,
     tEigenSolve = 403,
     tEigenSolveJac = 404,
     tPerturbation = 405,
     tUpdate = 406,
     tUpdateConstraint = 407,
     tBreak = 408,
     tEvaluate = 409,
     tTimeLoopTheta = 410,
     tTime0 = 411,
     tTimeMax = 412,
     tTheta = 413,
     tTimeLoopNewmark = 414,
     tBeta = 415,
     tGamma = 416,
     tIterativeLoop = 417,
     tNbrMaxIteration = 418,
     tRelaxationFactor = 419,
     tIterativeTimeReduction = 420,
     tDivisionCoefficient = 421,
     tChangeOfState = 422,
     tChangeOfCoordinates = 423,
     tChangeOfCoordinates2 = 424,
     tSystemCommand = 425,
     tGenerateFMMGroups = 426,
     tGenerateOnly = 427,
     tGenerateOnlyJac = 428,
     tSolveJac_AdaptRelax = 429,
     tSaveSolutionExtendedMH = 430,
     tSaveSolutionMHtoTime = 431,
     tInit_MovingBand2D = 432,
     tMesh_MovingBand2D = 433,
     tGenerate_MH_Moving = 434,
     tGenerate_MH_Moving_Separate = 435,
     tAdd_MH_Moving = 436,
     tGenerateGroup = 437,
     tGenerateJacGroup = 438,
     tSaveMesh = 439,
     tDeformeMesh = 440,
     tDummyFrequency = 441,
     tPostProcessing = 442,
     tNameOfSystem = 443,
     tPostOperation = 444,
     tNameOfPostProcessing = 445,
     tUsingPost = 446,
     tAppend = 447,
     tPlot = 448,
     tPrint = 449,
     tPrintGroup = 450,
     tEcho = 451,
     tWrite = 452,
     tAdapt = 453,
     tOnGlobal = 454,
     tOnRegion = 455,
     tOnElementsOf = 456,
     tOnGrid = 457,
     tOnSection = 458,
     tOnPoint = 459,
     tOnLine = 460,
     tOnPlane = 461,
     tOnBox = 462,
     tWithArgument = 463,
     tFile = 464,
     tDepth = 465,
     tDimension = 466,
     tComma = 467,
     tTimeStep = 468,
     tHarmonicToTime = 469,
     tFormat = 470,
     tHeader = 471,
     tFooter = 472,
     tSkin = 473,
     tSmoothing = 474,
     tTarget = 475,
     tSort = 476,
     tIso = 477,
     tNoNewLine = 478,
     tDecomposeInSimplex = 479,
     tChangeOfValues = 480,
     tTimeLegend = 481,
     tFrequencyLegend = 482,
     tEigenvalueLegend = 483,
     tEvaluationPoints = 484,
     tStore = 485,
     tLastTimeStepOnly = 486,
     tStr = 487,
     tDate = 488,
     tDEF = 489,
     tOR = 490,
     tAND = 491,
     tAPPROXEQUAL = 492,
     tNOTEQUAL = 493,
     tEQUAL = 494,
     tGREATERGREATER = 495,
     tLESSLESS = 496,
     tGREATEROREQUAL = 497,
     tLESSOREQUAL = 498,
     tCROSSPRODUCT = 499,
     UNARYPREC = 500,
     tSHOW = 501
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
#define tFor 268
#define tEndFor 269
#define tIf 270
#define tElse 271
#define tEndIf 272
#define tFlag 273
#define tHelp 274
#define tCpu 275
#define tCheck 276
#define tInclude 277
#define tConstant 278
#define tList 279
#define tListAlt 280
#define tLinSpace 281
#define tLogSpace 282
#define tListFromFile 283
#define tDefineConstant 284
#define tPi 285
#define t0D 286
#define t1D 287
#define t2D 288
#define t3D 289
#define tExp 290
#define tLog 291
#define tLog10 292
#define tSqrt 293
#define tSin 294
#define tAsin 295
#define tCos 296
#define tAcos 297
#define tTan 298
#define tAtan 299
#define tAtan2 300
#define tSinh 301
#define tCosh 302
#define tTanh 303
#define tFabs 304
#define tFloor 305
#define tCeil 306
#define tFmod 307
#define tModulo 308
#define tHypot 309
#define tSolidAngle 310
#define tTrace 311
#define tOrder 312
#define tCrossProduct 313
#define tDofValue 314
#define tMHTransform 315
#define tMHJacNL 316
#define tGroup 317
#define tDefineGroup 318
#define tAll 319
#define tInSupport 320
#define tMovingBand2D 321
#define tDefineFunction 322
#define tConstraint 323
#define tRegion 324
#define tSubRegion 325
#define tRegionRef 326
#define tSubRegionRef 327
#define tFilter 328
#define tCoefficient 329
#define tValue 330
#define tTimeFunction 331
#define tBranch 332
#define tNode 333
#define tLoop 334
#define tNameOfResolution 335
#define tJacobian 336
#define tCase 337
#define tIntegration 338
#define tFMMIntegration 339
#define tMatrix 340
#define tType 341
#define tSubType 342
#define tCriterion 343
#define tGeoElement 344
#define tNumberOfPoints 345
#define tMaxNumberOfPoints 346
#define tNumberOfDivisions 347
#define tMaxNumberOfDivisions 348
#define tStoppingCriterion 349
#define tFunctionSpace 350
#define tName 351
#define tBasisFunction 352
#define tNameOfCoef 353
#define tFunction 354
#define tdFunction 355
#define tSubFunction 356
#define tSubdFunction 357
#define tSupport 358
#define tEntity 359
#define tSubSpace 360
#define tNameOfBasisFunction 361
#define tGlobalQuantity 362
#define tEntityType 363
#define tEntitySubType 364
#define tNameOfConstraint 365
#define tFormulation 366
#define tQuantity 367
#define tNameOfSpace 368
#define tIndexOfSystem 369
#define tSymmetry 370
#define tEquation 371
#define tGalerkin 372
#define tdeRham 373
#define tGlobalTerm 374
#define tGlobalEquation 375
#define tDiscreteGeometry 376
#define tDt 377
#define tDtDof 378
#define tDtDt 379
#define tDtDtDof 380
#define tJacNL 381
#define tNeverDt 382
#define tDtNL 383
#define tAtAnteriorTimeStep 384
#define tIn 385
#define tFull_Matrix 386
#define tResolution 387
#define tDefineSystem 388
#define tNameOfFormulation 389
#define tNameOfMesh 390
#define tFrequency 391
#define tSolver 392
#define tOriginSystem 393
#define tDestinationSystem 394
#define tOperation 395
#define tOperationEnd 396
#define tSetTime 397
#define tDTime 398
#define tSetFrequency 399
#define tFourierTransform 400
#define tFourierTransformJ 401
#define tLanczos 402
#define tEigenSolve 403
#define tEigenSolveJac 404
#define tPerturbation 405
#define tUpdate 406
#define tUpdateConstraint 407
#define tBreak 408
#define tEvaluate 409
#define tTimeLoopTheta 410
#define tTime0 411
#define tTimeMax 412
#define tTheta 413
#define tTimeLoopNewmark 414
#define tBeta 415
#define tGamma 416
#define tIterativeLoop 417
#define tNbrMaxIteration 418
#define tRelaxationFactor 419
#define tIterativeTimeReduction 420
#define tDivisionCoefficient 421
#define tChangeOfState 422
#define tChangeOfCoordinates 423
#define tChangeOfCoordinates2 424
#define tSystemCommand 425
#define tGenerateFMMGroups 426
#define tGenerateOnly 427
#define tGenerateOnlyJac 428
#define tSolveJac_AdaptRelax 429
#define tSaveSolutionExtendedMH 430
#define tSaveSolutionMHtoTime 431
#define tInit_MovingBand2D 432
#define tMesh_MovingBand2D 433
#define tGenerate_MH_Moving 434
#define tGenerate_MH_Moving_Separate 435
#define tAdd_MH_Moving 436
#define tGenerateGroup 437
#define tGenerateJacGroup 438
#define tSaveMesh 439
#define tDeformeMesh 440
#define tDummyFrequency 441
#define tPostProcessing 442
#define tNameOfSystem 443
#define tPostOperation 444
#define tNameOfPostProcessing 445
#define tUsingPost 446
#define tAppend 447
#define tPlot 448
#define tPrint 449
#define tPrintGroup 450
#define tEcho 451
#define tWrite 452
#define tAdapt 453
#define tOnGlobal 454
#define tOnRegion 455
#define tOnElementsOf 456
#define tOnGrid 457
#define tOnSection 458
#define tOnPoint 459
#define tOnLine 460
#define tOnPlane 461
#define tOnBox 462
#define tWithArgument 463
#define tFile 464
#define tDepth 465
#define tDimension 466
#define tComma 467
#define tTimeStep 468
#define tHarmonicToTime 469
#define tFormat 470
#define tHeader 471
#define tFooter 472
#define tSkin 473
#define tSmoothing 474
#define tTarget 475
#define tSort 476
#define tIso 477
#define tNoNewLine 478
#define tDecomposeInSimplex 479
#define tChangeOfValues 480
#define tTimeLegend 481
#define tFrequencyLegend 482
#define tEigenvalueLegend 483
#define tEvaluationPoints 484
#define tStore 485
#define tLastTimeStepOnly 486
#define tStr 487
#define tDate 488
#define tDEF 489
#define tOR 490
#define tAND 491
#define tAPPROXEQUAL 492
#define tNOTEQUAL 493
#define tEQUAL 494
#define tGREATERGREATER 495
#define tLESSLESS 496
#define tGREATEROREQUAL 497
#define tLESSOREQUAL 498
#define tCROSSPRODUCT 499
#define UNARYPREC 500
#define tSHOW 501




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.114 2008-02-08 15:52:06 dular Exp $ */
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
#line 777 "GetDP.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 790 "GetDP.tab.c"

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
#define YYLAST   6944

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  269
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  757
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2049

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   501

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   253,     2,   261,   262,   251,     2,     2,
     256,   257,   249,   247,   266,   248,   260,   250,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     241,     2,   242,   235,   267,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   258,     2,   259,   255,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   264,     2,   265,   268,     2,     2,     2,
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
     236,   237,   238,   239,   240,   243,   244,   245,   246,   252,
     254,   263
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
    2728,  2733,  2741,  2747,  2751,  2755,  2763,  2769,  2778,  2779,
    2783,  2789,  2795,  2797,  2799,  2801,  2803,  2805,  2807,  2809,
    2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,  2827,  2829,
    2831,  2833,  2835,  2837,  2839,  2843,  2846,  2849,  2853,  2857,
    2861,  2865,  2869,  2873,  2877,  2881,  2885,  2889,  2893,  2897,
    2901,  2905,  2910,  2915,  2920,  2925,  2930,  2935,  2940,  2945,
    2950,  2955,  2962,  2967,  2972,  2977,  2982,  2987,  2992,  2999,
    3006,  3013,  3019,  3022,  3024,  3026,  3028,  3030,  3032,  3034,
    3036,  3038,  3039,  3041,  3043,  3047,  3049,  3051,  3055,  3059,
    3063,  3069,  3073,  3078,  3083,  3090,  3099,  3108,  3114,  3120,
    3122,  3124,  3126,  3128,  3130,  3135,  3142,  3144
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     270,     0,    -1,    -1,   271,   272,    -1,    -1,    -1,   272,
     273,   274,    -1,    62,   264,   277,   265,    -1,    99,   264,
     298,   265,    -1,    68,   264,   333,   265,    -1,    81,   264,
     318,   265,    -1,    83,   264,   324,   265,    -1,    95,   264,
     340,   265,    -1,   111,   264,   363,   265,    -1,   132,   264,
     389,   265,    -1,   187,   264,   419,   265,    -1,   189,   264,
     430,   265,    -1,   434,    -1,   448,    -1,    22,   458,    -1,
     275,    -1,    19,     7,    -1,    19,   194,     7,    -1,    19,
      21,     7,    -1,    19,    36,     7,    -1,    19,    20,     7,
      -1,    19,    19,     7,    -1,    19,     5,     7,    -1,    20,
       7,    -1,    21,     7,    -1,    21,    62,     7,    -1,    21,
      99,     7,    -1,    21,    68,     7,    -1,    21,    81,     7,
      -1,    21,    83,     7,    -1,    21,    95,     7,    -1,    21,
     111,     7,    -1,    21,   132,     7,    -1,    21,   187,     7,
      -1,    21,   189,     7,    -1,    21,     3,     7,    -1,    -1,
     276,   438,    -1,    -1,   277,   278,    -1,   457,   234,   282,
       7,    -1,     5,   297,   234,   282,     7,    -1,     5,   295,
     234,   282,     7,    -1,    63,   258,   293,   259,     7,    -1,
     279,    -1,   457,   247,   234,   282,     7,    -1,   448,    -1,
     447,    -1,    -1,    -1,   457,   258,   451,   259,   234,    66,
     280,   258,   261,   290,   281,   266,   261,   290,   266,   451,
     259,     7,    -1,    -1,   286,   258,   287,   283,   288,   259,
      -1,   261,   290,    -1,   282,    -1,   457,    -1,   457,   296,
      -1,    69,    -1,     5,    -1,   290,    -1,    64,    -1,    -1,
     294,   289,   290,    -1,   294,    65,   457,    -1,     5,    -1,
     292,    -1,   264,   291,   265,    -1,    -1,   291,   294,   292,
      -1,   291,   294,   248,   292,    -1,     3,    -1,   256,   451,
     257,    -1,   267,   454,   267,    -1,     3,     8,   451,    -1,
     256,   451,   257,     8,   451,    -1,     3,     8,   451,     8,
     451,    -1,   256,   451,   257,     8,   451,     8,   451,    -1,
     457,    -1,    -1,   293,   294,     5,    -1,   293,   294,     5,
     264,   451,   265,    -1,    -1,   266,    -1,   264,   261,   451,
     265,    -1,    -1,   264,   265,    -1,   264,   451,   265,    -1,
      -1,   298,   299,    -1,    67,   258,   300,   259,     7,    -1,
     457,   258,   259,   234,   301,     7,    -1,   457,   258,   284,
     259,   234,   301,     7,    -1,   448,    -1,   447,    -1,    -1,
     300,   294,     5,    -1,   300,   294,     5,   264,   451,   265,
      -1,    23,   258,   451,   259,    -1,    99,   258,     5,   259,
      -1,    -1,   302,   305,    -1,   249,   249,   249,    -1,    -1,
     264,   304,   265,    -1,   301,    -1,   304,   266,   301,    -1,
      -1,   306,   307,    -1,   310,    -1,    -1,    -1,   307,   235,
     308,   307,     8,   309,   307,    -1,   307,   249,   307,    -1,
     307,   252,   307,    -1,    58,   258,   307,   266,   307,   259,
      -1,   307,   250,   307,    -1,   307,   247,   307,    -1,   307,
     248,   307,    -1,   307,   251,   307,    -1,   307,   255,   307,
      -1,   307,   241,   307,    -1,   307,   242,   307,    -1,   307,
     246,   307,    -1,   307,   245,   307,    -1,   307,   240,   307,
      -1,   307,   239,   307,    -1,   307,   238,   307,    -1,   307,
     237,   307,    -1,   307,   236,   307,    -1,   248,   307,    -1,
     247,   307,    -1,   253,   307,    -1,   256,   307,   257,    -1,
     452,    -1,   450,   315,   317,    -1,     5,   388,    -1,   388,
      -1,   388,   315,    -1,    -1,   122,   311,   258,   305,   259,
      -1,    -1,   129,   312,   258,   305,   266,     3,   259,    -1,
      -1,    60,   258,     5,   258,   313,   305,   259,   259,   264,
     451,   265,    -1,    61,   258,     5,   259,   264,   451,   266,
     451,   265,    -1,    55,   258,   388,   259,    -1,    57,   258,
     388,   259,    -1,    -1,    56,   314,   258,   305,   266,   284,
     259,    -1,   241,     5,   242,   258,   305,   259,    -1,   262,
       5,    -1,   262,   213,    -1,   262,   143,    -1,   262,     3,
      -1,   310,   261,     3,    -1,   261,     3,    -1,   310,   263,
     451,    -1,   258,   260,   259,    -1,   258,   259,    -1,   258,
     316,   259,    -1,   307,    -1,   316,   266,   307,    -1,    -1,
     264,   454,   265,    -1,   264,    69,   258,   284,   259,   265,
      -1,    -1,   318,   264,   319,   265,    -1,    -1,   319,   320,
      -1,    96,     5,     7,    -1,    82,   264,   321,   265,    -1,
      -1,   321,   264,   322,   265,    -1,    -1,   322,   323,    -1,
      69,   284,     7,    -1,    69,    64,     7,    -1,    81,     5,
     317,     7,    -1,    -1,   324,   264,   325,   265,    -1,    -1,
     325,   326,    -1,    96,     5,     7,    -1,    88,   301,     7,
      -1,    82,   264,   327,   265,    -1,    -1,   327,   264,   328,
     265,    -1,    -1,   328,   329,    -1,    86,     5,     7,    -1,
      87,     5,     7,    -1,    82,   264,   330,   265,    -1,    -1,
     330,   264,   331,   265,    -1,    -1,   331,   332,    -1,    89,
       5,     7,    -1,    90,   451,     7,    -1,    91,   451,     7,
      -1,    92,   451,     7,    -1,    93,   451,     7,    -1,    94,
     451,     7,    -1,    -1,   333,   334,    -1,   264,   335,   265,
      -1,   448,    -1,   447,    -1,    -1,   335,   336,    -1,    96,
     457,     7,    -1,    96,     5,   295,     7,    -1,    86,     5,
       7,    -1,    82,   264,   337,   265,    -1,    82,     5,   264,
     337,   265,    -1,    -1,   337,   264,   338,   265,    -1,   337,
     447,    -1,    -1,   338,   339,    -1,    86,     5,     7,    -1,
      69,   284,     7,    -1,    70,   284,     7,    -1,    76,   301,
       7,    -1,    75,   301,     7,    -1,    80,   457,     7,    -1,
      77,   264,   452,   294,   452,   265,     7,    -1,    71,   284,
       7,    -1,    72,   284,     7,    -1,    99,   301,     7,    -1,
      74,   301,     7,    -1,    73,   301,     7,    -1,    99,   258,
     301,   266,   301,   259,     7,    -1,    74,   258,   301,   266,
     301,   259,     7,    -1,    73,   258,   301,   266,   301,   259,
       7,    -1,    -1,   340,   341,    -1,   264,   342,   265,    -1,
     448,    -1,   447,    -1,    -1,   342,   343,    -1,   342,   447,
      -1,    96,   457,     7,    -1,    96,     5,   295,     7,    -1,
      86,     5,     7,    -1,    97,   264,   344,   265,    -1,   105,
     264,   350,   265,    -1,   107,   264,   357,   265,    -1,    68,
     264,   360,   265,    -1,    -1,   344,   264,   345,   265,    -1,
     344,   447,    -1,    -1,   345,   346,    -1,    96,     5,     7,
      -1,    98,     5,     7,    -1,    98,     5,   295,     7,    -1,
      99,     5,   347,     7,    -1,   100,   264,     5,   294,     5,
     265,     7,    -1,   101,   303,     7,    -1,   102,   303,     7,
      -1,   103,   284,     7,    -1,   104,   284,     7,    -1,    -1,
      -1,    -1,   264,   112,     5,     7,   111,     5,   295,     7,
     348,    62,   285,     7,   349,   132,     5,   296,     7,   265,
      -1,    -1,   350,   264,   351,   265,    -1,    -1,   351,   352,
      -1,    96,     5,     7,    -1,   106,   353,     7,    -1,    98,
     355,     7,    -1,     5,    -1,   264,   354,   265,    -1,    -1,
     354,   294,     5,    -1,     5,    -1,   264,   356,   265,    -1,
      -1,   356,   294,     5,    -1,    -1,   357,   264,   358,   265,
      -1,   357,   447,    -1,    -1,   358,   359,    -1,    96,   457,
       7,    -1,    86,     5,     7,    -1,    98,     5,     7,    -1,
      -1,   360,   264,   361,   265,    -1,   360,   447,    -1,    -1,
     361,   362,    -1,    98,     5,     7,    -1,   108,   286,     7,
      -1,   109,   289,     7,    -1,   110,   457,     7,    -1,    -1,
     363,   364,    -1,   264,   365,   265,    -1,   448,    -1,   447,
      -1,    -1,   365,   366,    -1,    96,   457,     7,    -1,    96,
       5,   295,     7,    -1,    86,     5,     7,    -1,   112,   264,
     367,   265,    -1,   116,   264,   373,   265,    -1,    -1,   367,
     264,   368,   265,    -1,   367,   447,    -1,    -1,   368,   369,
      -1,    96,   457,     7,    -1,    86,   107,     7,    -1,    86,
     117,     7,    -1,    86,     5,     7,    -1,   186,   453,     7,
      -1,    -1,   113,   457,   370,   372,     7,    -1,   114,     3,
       7,    -1,    -1,   258,   371,   305,   259,     7,    -1,   130,
     284,     7,    -1,    83,     5,     7,    -1,    84,     5,     7,
      -1,    81,     5,     7,    -1,   115,     3,     7,    -1,    -1,
     258,   457,   259,    -1,    -1,   373,   374,    -1,   373,   448,
      -1,   373,   447,    -1,   117,   264,   379,   265,    -1,   118,
     264,   379,   265,    -1,   119,   264,   383,   265,    -1,   120,
     264,   375,   265,    -1,    -1,   375,   376,    -1,    86,     5,
       7,    -1,   110,     5,     7,    -1,   264,   377,   265,    -1,
      -1,   377,   378,    -1,    78,   388,     7,    -1,    79,   388,
       7,    -1,   116,   388,     7,    -1,   130,   284,     7,    -1,
      -1,   379,   380,    -1,    -1,    -1,   387,   258,   381,   305,
     382,   266,   305,   259,     7,    -1,   130,   284,     7,    -1,
      81,     5,     7,    -1,    83,     5,     7,    -1,   131,     7,
      -1,    84,     5,     7,    -1,    85,   258,     3,   259,     7,
      -1,    -1,   383,   384,    -1,   130,   284,     7,    -1,    -1,
      -1,   387,   258,   385,   305,   386,   266,   388,   259,     7,
      -1,    -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,
     126,    -1,   127,    -1,   128,    -1,   264,     5,   457,   265,
      -1,   264,   457,   265,    -1,    -1,   389,   390,    -1,   264,
     391,   265,    -1,   448,    -1,   447,    -1,    -1,   391,   392,
      -1,    96,   457,     7,    -1,    96,     5,   295,     7,    -1,
     133,   264,   394,   265,    -1,    -1,   140,   393,   264,   401,
     265,    -1,   447,    -1,    -1,   394,   264,   395,   265,    -1,
     394,   447,    -1,   394,   448,    -1,    -1,   395,   396,    -1,
      96,   457,     7,    -1,    86,     5,     7,    -1,   134,   397,
       7,    -1,   135,   458,     7,    -1,   138,   399,     7,    -1,
     139,   457,     7,    -1,   136,   453,     7,    -1,   137,   458,
       7,    -1,   447,    -1,   457,    -1,   264,   398,   265,    -1,
      -1,   398,   294,   457,    -1,   457,    -1,   264,   400,   265,
      -1,    -1,   400,   294,   457,    -1,    -1,   401,   402,    -1,
       5,   457,     7,    -1,   142,   301,     7,    -1,   155,   264,
     408,   265,    -1,   159,   264,   410,   265,    -1,   162,   264,
     412,   265,    -1,   165,   264,   414,   265,    -1,     5,   258,
     457,   259,     7,    -1,   142,   258,   301,   259,     7,    -1,
     153,     7,    -1,    15,   258,   301,   259,   264,   401,   265,
      -1,    15,   258,   301,   259,   264,   401,   265,    16,   264,
     401,   265,    -1,   144,   258,   457,   266,   301,   259,     7,
      -1,   171,   258,   457,   266,   301,   266,   301,   266,   301,
     266,   301,   259,     7,    -1,   171,   258,   457,   266,   301,
     266,   301,   266,   301,   259,     7,    -1,   171,   258,   457,
     266,   301,   266,   301,   259,     7,    -1,   172,   258,   457,
     266,   453,   259,     7,    -1,   173,   258,   457,   266,   453,
     259,     7,    -1,   151,   258,   457,   266,   301,   259,     7,
      -1,   152,   258,   457,   266,   284,   266,   457,   259,     7,
      -1,   145,   258,   457,   266,   457,   266,   453,   259,     7,
      -1,   146,   258,   457,   266,   457,   266,   451,   259,     7,
      -1,   147,   258,   457,   266,   451,   266,   453,   266,   451,
     259,     7,    -1,   148,   258,   457,   266,   451,   266,   451,
     266,   451,   259,     7,    -1,   149,   258,   457,   266,   451,
     266,   451,   266,   451,   259,     7,    -1,   154,   258,   301,
     259,     7,    -1,   150,   258,   457,   266,   457,   266,   457,
     266,   451,   266,   453,   266,   451,   266,   451,   259,     7,
      -1,   155,   258,   451,   266,   451,   266,   301,   266,   301,
     259,   264,   401,   265,    -1,   159,   258,   451,   266,   451,
     266,   301,   266,   451,   266,   451,   259,   264,   401,   265,
      -1,   162,   258,   451,   266,   451,   266,   301,   259,   264,
     401,   265,    -1,   162,   258,   451,   266,   451,   266,   301,
     266,   451,   259,   264,   401,   265,    -1,    -1,   194,   403,
     258,   405,   406,   259,     7,    -1,    -1,   197,   404,   258,
     405,   406,   259,     7,    -1,   168,   258,   284,   266,   301,
     259,     7,    -1,   168,   258,   284,   266,   301,   266,   451,
     266,   301,   259,     7,    -1,   189,   258,   457,   259,     7,
      -1,   170,   258,   458,   259,     7,    -1,   174,   258,   457,
     266,   453,   266,   451,   259,     7,    -1,   175,   258,   457,
     266,   451,   266,   458,   259,     7,    -1,   176,   258,   457,
     266,   453,   266,   458,   259,     7,    -1,   177,   264,   457,
     265,     7,    -1,   178,   264,   457,   265,     7,    -1,   184,
     264,   457,   266,   284,   266,   458,   266,   301,   265,     7,
      -1,   184,   264,   457,   266,   284,   266,   458,   265,     7,
      -1,   179,   258,   457,   266,   457,   266,   451,   266,   451,
     259,   264,   401,   265,     7,    -1,   180,   258,   457,   266,
     457,   266,   451,   266,   451,   259,   264,   401,   265,     7,
      -1,   181,   258,   457,   266,   451,   259,     7,    -1,   185,
     264,     5,   266,     5,   266,   135,   458,   266,   451,   265,
       7,    -1,   185,   264,     5,   266,     5,   266,   135,   458,
     265,     7,    -1,   185,   264,     5,   266,     5,   265,     7,
      -1,   182,   258,   457,   266,   457,   259,     7,    -1,   183,
     258,   457,   266,   457,   259,     7,    -1,   447,    -1,   303,
      -1,   457,    -1,    -1,   406,   407,    -1,   266,   209,   458,
      -1,   266,   213,   453,    -1,   266,   453,    -1,    -1,   408,
     409,    -1,   156,   451,     7,    -1,   157,   451,     7,    -1,
     143,   301,     7,    -1,   158,   301,     7,    -1,   140,   264,
     401,   265,    -1,    -1,   410,   411,    -1,   156,   451,     7,
      -1,   157,   451,     7,    -1,   143,   301,     7,    -1,   160,
     451,     7,    -1,   161,   451,     7,    -1,   140,   264,   401,
     265,    -1,    -1,   412,   413,    -1,   163,   451,     7,    -1,
      88,   451,     7,    -1,   164,   301,     7,    -1,    18,   451,
       7,    -1,   140,   264,   401,   265,    -1,    -1,   414,   415,
      -1,   163,   451,     7,    -1,   166,   451,     7,    -1,    88,
     451,     7,    -1,    18,   451,     7,    -1,   133,   457,     7,
      -1,   167,   264,   416,   265,    -1,   140,   264,   401,   265,
      -1,   141,   264,   401,   265,    -1,    -1,   416,   264,   417,
     265,    -1,    -1,   417,   418,    -1,    86,     5,     7,    -1,
     112,     5,     7,    -1,   130,   284,     7,    -1,    88,   451,
       7,    -1,    99,   301,     7,    -1,    18,     5,     7,    -1,
      -1,   419,   420,    -1,   264,   421,   265,    -1,   448,    -1,
     447,    -1,    -1,   421,   422,    -1,    96,   457,     7,    -1,
      96,     5,   295,     7,    -1,   134,   457,     7,    -1,   188,
     457,     7,    -1,   112,   264,   423,   265,    -1,    -1,   423,
     264,   424,   265,    -1,   423,   448,    -1,   423,   447,    -1,
      -1,   424,   425,    -1,    96,   457,     7,    -1,    75,   264,
     426,   265,    -1,    -1,   426,   117,   264,   427,   265,    -1,
     426,     5,   264,   427,   265,    -1,   426,   447,    -1,    -1,
     427,   428,    -1,    -1,   387,   258,   429,   305,   259,     7,
      -1,    86,     5,     7,    -1,   130,   284,     7,    -1,    81,
       5,     7,    -1,    83,     5,     7,    -1,    -1,   430,   431,
      -1,   264,   432,   265,    -1,   448,    -1,   447,    -1,    -1,
     432,   433,    -1,    96,   457,     7,    -1,   190,   457,     7,
      -1,   215,     5,     7,    -1,   192,   458,     7,    -1,   140,
     264,   436,   265,    -1,    -1,   189,   457,   191,   457,   435,
     264,   436,   265,    -1,    -1,    -1,   436,   437,   438,    -1,
     193,   258,   440,   443,   444,   259,     7,    -1,   194,   258,
     440,   443,   444,   259,     7,    -1,   194,   258,     6,   266,
     301,   444,   259,     7,    -1,   194,   258,     6,   266,   232,
     258,   458,   259,   444,   259,     7,    -1,   196,   258,     6,
     444,   259,     7,    -1,    -1,   195,   258,   284,   439,   266,
     130,   284,   444,   259,     7,    -1,   447,    -1,   457,   442,
     266,    -1,   457,   442,   441,     5,   442,   266,    -1,   249,
      -1,   250,    -1,   247,    -1,   248,    -1,    -1,   258,   284,
     259,    -1,   199,    -1,   200,   284,    -1,   201,   284,    -1,
     203,   264,   264,   454,   265,   264,   454,   265,   264,   454,
     265,   265,    -1,   202,   284,    -1,   202,   264,   301,   266,
     301,   266,   301,   265,   264,   453,   266,   453,   266,   453,
     265,    -1,   204,   264,   454,   265,    -1,   205,   264,   264,
     454,   265,   264,   454,   265,   265,   264,   451,   265,    -1,
     206,   264,   264,   454,   265,   264,   454,   265,   264,   454,
     265,   265,   264,   451,   266,   451,   265,    -1,   207,   264,
     264,   454,   265,   264,   454,   265,   264,   454,   265,   264,
     454,   265,   265,   264,   451,   266,   451,   266,   451,   265,
      -1,   200,   284,   208,     5,   264,   451,   266,   451,   265,
     264,   451,   265,    -1,    -1,   444,   445,    -1,   266,   209,
     458,    -1,   266,   209,   242,   458,    -1,   266,   209,   243,
     458,    -1,   266,   210,   451,    -1,   266,   218,    -1,   266,
     219,    -1,   266,   214,   451,    -1,   266,   215,     5,    -1,
     266,   216,   446,    -1,   266,   217,   446,    -1,   266,   215,
     446,    -1,   266,   212,    -1,   266,   211,   451,    -1,   266,
     213,   453,    -1,   266,   198,     5,    -1,   266,   221,     5,
      -1,   266,   220,   451,    -1,   266,    75,   453,    -1,   266,
     222,   451,    -1,   266,   222,   264,   454,   265,    -1,   266,
     223,    -1,   266,   224,    -1,   266,   136,   453,    -1,   266,
     168,   264,   301,   266,   301,   266,   301,   265,    -1,   266,
     225,   303,    -1,   266,   226,    -1,   266,   226,   264,   451,
     266,   451,   266,   451,   265,    -1,   266,   227,    -1,   266,
     227,   264,   451,   266,   451,   266,   451,   265,    -1,   266,
     228,    -1,   266,   228,   264,   451,   266,   451,   266,   451,
     265,    -1,   266,   229,   264,   454,   265,    -1,   266,   230,
       3,    -1,   266,   231,    -1,    -1,   446,     6,    -1,    13,
     256,   451,     8,   451,   257,    -1,    13,   256,   451,     8,
     451,     8,   451,   257,    -1,    13,     5,   130,   264,   451,
       8,   451,   265,    -1,    13,     5,   130,   264,   451,     8,
     451,     8,   451,   265,    -1,    14,    -1,    15,   256,   451,
     257,    -1,    17,    -1,    29,   258,   449,   259,     7,    -1,
     457,   234,   453,     7,    -1,   457,   234,     6,     7,    -1,
     457,   234,   232,   258,   458,   259,     7,    -1,   457,   234,
     459,     7,    -1,   457,   234,    28,   258,   458,   259,     7,
      -1,    11,   256,     6,   257,     7,    -1,    11,   457,     7,
      -1,    11,   261,     7,    -1,    11,   256,     6,   266,   454,
     257,     7,    -1,    12,   256,   457,   257,     7,    -1,    12,
     256,   457,   257,   258,   451,   259,     7,    -1,    -1,   449,
     294,     5,    -1,   449,   294,     5,   234,   451,    -1,   449,
     294,     5,   234,     6,    -1,    35,    -1,    36,    -1,    37,
      -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,   457,    -1,   452,    -1,   256,
     451,   257,    -1,   248,   451,    -1,   253,   451,    -1,   451,
     248,   451,    -1,   451,   247,   451,    -1,   451,   249,   451,
      -1,   451,   250,   451,    -1,   451,   251,   451,    -1,   451,
     255,   451,    -1,   451,   241,   451,    -1,   451,   242,   451,
      -1,   451,   246,   451,    -1,   451,   245,   451,    -1,   451,
     240,   451,    -1,   451,   239,   451,    -1,   451,   237,   451,
      -1,   451,   236,   451,    -1,    35,   258,   451,   259,    -1,
      36,   258,   451,   259,    -1,    37,   258,   451,   259,    -1,
      38,   258,   451,   259,    -1,    39,   258,   451,   259,    -1,
      40,   258,   451,   259,    -1,    41,   258,   451,   259,    -1,
      42,   258,   451,   259,    -1,    43,   258,   451,   259,    -1,
      44,   258,   451,   259,    -1,    45,   258,   451,   266,   451,
     259,    -1,    46,   258,   451,   259,    -1,    47,   258,   451,
     259,    -1,    48,   258,   451,   259,    -1,    49,   258,   451,
     259,    -1,    50,   258,   451,   259,    -1,    51,   258,   451,
     259,    -1,    52,   258,   451,   266,   451,   259,    -1,    53,
     258,   451,   266,   451,   259,    -1,    54,   258,   451,   266,
     451,   259,    -1,   451,   235,   451,     8,   451,    -1,   451,
     261,    -1,     4,    -1,     3,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,   457,    -1,    -1,   451,
      -1,   455,    -1,   264,   454,   265,    -1,   451,    -1,   455,
      -1,   454,   266,   451,    -1,   454,   266,   455,    -1,   451,
       8,   451,    -1,   451,     8,   451,     8,   451,    -1,     5,
     264,   265,    -1,     5,   264,   454,   265,    -1,    24,   258,
       5,   259,    -1,    25,   258,     5,   266,     5,   259,    -1,
      26,   258,   451,   266,   451,   266,   451,   259,    -1,    27,
     258,   451,   266,   451,   266,   451,   259,    -1,     5,   268,
     264,   451,   265,    -1,   456,   268,   264,   451,   265,    -1,
       5,    -1,   456,    -1,     6,    -1,   457,    -1,   459,    -1,
      10,   256,   458,   257,    -1,    10,   256,   458,   266,   454,
     257,    -1,   233,    -1,     9,   258,   458,   266,   458,   259,
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
    3882,  3892,  3905,  3911,  3914,  3923,  3926,  3931,  3936,  3941,
    3946,  3951,  3957,  3966,  3974,  3976,  3988,  3998,  4005,  4007,
    4020,  4027,  4040,  4062,  4069,  4075,  4081,  4087,  4095,  4117,
    4124,  4130,  4141,  4152,  4165,  4180,  4195,  4210,  4230,  4251,
    4263,  4283,  4300,  4319,  4340,  4354,  4368,  4375,  4409,  4422,
    4436,  4449,  4463,  4462,  4472,  4471,  4480,  4491,  4503,  4513,
    4521,  4534,  4547,  4561,  4571,  4581,  4595,  4609,  4627,  4646,
    4657,  4672,  4687,  4702,  4717,  4732,  4743,  4748,  4759,  4764,
    4768,  4771,  4781,  4798,  4807,  4813,  4817,  4821,  4825,  4830,
    4842,  4852,  4858,  4862,  4866,  4870,  4874,  4879,  4891,  4900,
    4905,  4909,  4913,  4917,  4921,  4933,  4945,  4950,  4954,  4958,
    4962,  4967,  4977,  4983,  4989,  5000,  5002,  5008,  5020,  5025,
    5035,  5064,  5067,  5070,  5078,  5096,  5102,  5107,  5112,  5114,
    5119,  5127,  5131,  5138,  5146,  5159,  5164,  5171,  5173,  5176,
    5178,  5185,  5190,  5195,  5198,  5205,  5209,  5215,  5227,  5234,
    5243,  5248,  5247,  5282,  5293,  5298,  5307,  5325,  5331,  5336,
    5339,  5341,  5346,  5353,  5357,  5364,  5376,  5387,  5392,  5399,
    5398,  5426,  5429,  5428,  5445,  5450,  5455,  5464,  5473,  5483,
    5482,  5493,  5502,  5514,  5538,  5539,  5540,  5541,  5547,  5548,
    5554,  5560,  5567,  5574,  5598,  5605,  5617,  5630,  5650,  5676,
    5709,  5731,  5762,  5766,  5780,  5794,  5808,  5812,  5816,  5820,
    5824,  5834,  5839,  5844,  5864,  5868,  5875,  5885,  5894,  5903,
    5910,  5918,  5922,  5931,  5935,  5939,  5947,  5953,  5957,  5965,
    5972,  5980,  5987,  5995,  6002,  6010,  6014,  6024,  6029,  6079,
    6094,  6110,  6130,  6150,  6188,  6192,  6205,  6207,  6222,  6228,
    6234,  6240,  6256,  6261,  6277,  6282,  6294,  6304,  6320,  6323,
    6329,  6335,  6347,  6348,  6349,  6350,  6351,  6352,  6353,  6354,
    6355,  6356,  6357,  6358,  6359,  6360,  6361,  6362,  6363,  6364,
    6365,  6366,  6367,  6371,  6372,  6373,  6374,  6375,  6376,  6377,
    6378,  6379,  6380,  6381,  6382,  6383,  6384,  6385,  6386,  6387,
    6388,  6389,  6390,  6391,  6392,  6393,  6394,  6395,  6396,  6397,
    6398,  6399,  6400,  6401,  6402,  6403,  6404,  6405,  6406,  6407,
    6408,  6410,  6412,  6417,  6418,  6419,  6420,  6421,  6422,  6423,
    6424,  6443,  6445,  6451,  6454,  6461,  6467,  6470,  6473,  6485,
    6491,  6502,  6518,  6540,  6555,  6593,  6601,  6613,  6621,  6635,
    6638,  6645,  6648,  6663,  6668,  6673,  6692,  6702
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT", "tFLOAT", "tSTRING", "tBIGSTR",
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead", "tFor",
  "tEndFor", "tIf", "tElse", "tEndIf", "tFlag", "tHelp", "tCpu", "tCheck",
  "tInclude", "tConstant", "tList", "tListAlt", "tLinSpace", "tLogSpace",
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
     485,   486,   487,   488,   489,    63,   490,   491,   492,   493,
     494,    60,    62,   495,   496,   497,   498,    43,    45,    42,
      47,    37,   499,    33,   500,    94,    40,    41,    91,    93,
      46,    35,    36,   501,   123,   125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   269,   271,   270,   272,   273,   272,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   276,   275,   277,   277,   278,   278,   278,   278,   278,
     278,   278,   278,   280,   281,   279,   283,   282,   282,   284,
     284,   285,   286,   286,   287,   287,   288,   288,   288,   289,
     290,   290,   291,   291,   291,   292,   292,   292,   292,   292,
     292,   292,   292,   293,   293,   293,   294,   294,   295,   296,
     296,   297,   298,   298,   299,   299,   299,   299,   299,   300,
     300,   300,   301,   301,   302,   301,   301,   303,   303,   304,
     304,   306,   305,   307,   308,   309,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   310,   310,   310,
     310,   310,   310,   311,   310,   312,   310,   313,   310,   310,
     310,   310,   314,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   315,   315,   315,   316,   316,   317,   317,   317,
     318,   318,   319,   319,   320,   320,   321,   321,   322,   322,
     323,   323,   323,   324,   324,   325,   325,   326,   326,   326,
     327,   327,   328,   328,   329,   329,   329,   330,   330,   331,
     331,   332,   332,   332,   332,   332,   332,   333,   333,   334,
     334,   334,   335,   335,   336,   336,   336,   336,   336,   337,
     337,   337,   338,   338,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   340,
     340,   341,   341,   341,   342,   342,   342,   343,   343,   343,
     343,   343,   343,   343,   344,   344,   344,   345,   345,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   347,   348,
     349,   347,   350,   350,   351,   351,   352,   352,   352,   353,
     353,   354,   354,   355,   355,   356,   356,   357,   357,   357,
     358,   358,   359,   359,   359,   360,   360,   360,   361,   361,
     362,   362,   362,   362,   363,   363,   364,   364,   364,   365,
     365,   366,   366,   366,   366,   366,   367,   367,   367,   368,
     368,   369,   369,   369,   369,   369,   370,   369,   369,   371,
     369,   369,   369,   369,   369,   369,   372,   372,   373,   373,
     373,   373,   374,   374,   374,   374,   375,   375,   376,   376,
     376,   377,   377,   378,   378,   378,   378,   379,   379,   381,
     382,   380,   380,   380,   380,   380,   380,   380,   383,   383,
     384,   385,   386,   384,   387,   387,   387,   387,   387,   387,
     387,   387,   388,   388,   389,   389,   390,   390,   390,   391,
     391,   392,   392,   392,   393,   392,   392,   394,   394,   394,
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
     418,   418,   418,   418,   418,   419,   419,   420,   420,   420,
     421,   421,   422,   422,   422,   422,   422,   423,   423,   423,
     423,   424,   424,   425,   425,   426,   426,   426,   426,   427,
     427,   429,   428,   428,   428,   428,   428,   430,   430,   431,
     431,   431,   432,   432,   433,   433,   433,   433,   433,   435,
     434,   436,   437,   436,   438,   438,   438,   438,   438,   439,
     438,   438,   440,   440,   441,   441,   441,   441,   442,   442,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   444,   444,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   446,   446,   447,
     447,   447,   447,   447,   447,   447,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   449,   449,
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
       4,     7,     5,     3,     3,     7,     5,     8,     0,     3,
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
       2,     0,     4,     1,     5,    41,   749,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   750,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,    28,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   751,     0,     0,   756,
     752,    19,   753,   658,    43,   207,   170,   183,   239,    92,
     304,   384,   525,   557,     0,     0,   643,     0,   645,     0,
       0,     0,     0,    42,   581,     0,   731,     0,     0,   654,
     653,     0,    27,    26,    25,    23,    24,    22,    40,    30,
      32,    33,    34,    35,    31,    36,    37,    38,    39,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,   723,   749,     0,     0,     0,     0,     0,     0,
     725,   726,   727,   728,   729,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     732,   683,     0,   733,   730,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,   749,     0,     7,    44,    49,
      52,    51,     0,   212,     9,   208,   211,   210,   172,    10,
     185,    11,   244,    12,   240,   243,   242,     0,     8,    93,
      98,    97,     0,   309,    13,   305,   308,   307,   389,    14,
     385,   388,   387,   530,    15,   526,   529,   528,   562,    16,
     558,   561,   560,   569,     0,     0,     0,     0,   588,     0,
       0,   749,    62,     0,    59,   579,     0,    60,   601,     0,
       0,   648,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   685,   686,
       0,   735,     0,   736,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     722,   647,   650,   747,   652,     0,   656,     0,     0,   754,
       0,   646,   659,     0,     0,     0,    83,   731,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   644,   590,     0,     0,     0,     0,     0,
       0,     0,     0,   601,     0,     0,   104,   601,    75,     0,
      72,     0,    58,    70,    82,     0,     0,     0,   748,   741,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   684,   734,     0,
     739,     0,   700,   699,   698,   697,   693,   694,   696,   695,
     688,   687,   689,   690,   691,   692,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,   749,     0,     0,     0,
       0,     0,     0,   209,   213,     0,     0,   171,   173,     0,
     104,     0,   184,   186,     0,     0,     0,     0,     0,     0,
     241,   245,   246,    86,     0,     0,     0,     0,     0,     0,
     306,   310,     0,     0,   394,   386,   390,   396,     0,     0,
       0,     0,   527,   531,     0,     0,     0,     0,     0,   559,
     563,   571,     0,     0,   591,   592,   104,   594,     0,     0,
       0,     0,     0,     0,     0,   586,   587,   584,   585,   582,
       0,     0,     0,     0,     0,   601,   111,     0,     0,     0,
      86,     0,     0,    65,    56,    64,     0,     0,   602,   742,
     743,     0,     0,     0,     0,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,     0,   712,   713,   714,   715,
     716,   717,     0,     0,     0,     0,   737,   738,     0,     0,
     655,     0,   757,   755,   661,   660,     0,    91,    63,     0,
       0,     0,     0,    45,     0,     0,     0,   219,     0,   749,
       0,   176,     0,   190,     0,     0,   295,     0,   749,     0,
     254,   272,   287,     0,     0,   104,     0,     0,   749,     0,
     316,   338,   749,     0,   397,     0,   749,     0,   537,     0,
       0,     0,   571,     0,     0,     0,   572,     0,     0,   639,
       0,     0,     0,     0,     0,     0,     0,     0,   589,   588,
       0,     0,     0,     0,     0,   105,     0,     0,    78,    76,
      71,     0,    77,     0,    86,   578,   731,   731,     0,     0,
       0,     0,     0,   614,   731,     0,   637,   637,   637,   607,
     608,     0,     0,     0,   623,   624,   107,   628,   630,   632,
       0,     0,   636,     0,     0,     0,   651,     0,     0,     0,
       0,   649,   740,   721,   657,    88,    47,    46,    48,    84,
      50,     0,   219,     0,   216,     0,     0,   214,     0,   174,
       0,   188,   187,     0,   249,     0,   247,     0,     0,     0,
      94,   100,     0,   104,   313,     0,   311,     0,     0,     0,
     391,     0,   420,     0,   532,     0,   534,   535,   564,   572,
     565,   567,   566,   570,     0,     0,     0,     0,   104,     0,
     596,     0,     0,     0,   574,     0,     0,     0,     0,   106,
       0,   749,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,     0,   152,     0,     0,     0,     0,   143,   145,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     141,     0,   138,   730,   575,     0,     0,     0,    73,   601,
       0,     0,   620,   625,   104,   617,     0,     0,   603,   606,
     615,   616,   609,   610,   613,   611,   612,   619,   618,     0,
     621,   104,   627,     0,     0,     0,     0,   635,   744,     0,
       0,   711,   718,   719,   720,     0,    53,     0,   222,   217,
     221,   215,   178,   175,   192,   189,   298,   253,   297,   248,
     257,   250,   256,   274,   251,   290,   252,   289,     0,    95,
       0,   312,   319,   314,   318,     0,     0,     0,     0,   315,
     339,   341,   340,   392,   401,   393,   399,   400,     0,   533,
     541,   536,   540,   539,   568,   573,     0,   641,   640,     0,
       0,     0,     0,     0,     0,   583,   102,   103,   601,   576,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   134,   136,     0,   160,   158,   155,   157,   156,   749,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,   167,    80,    79,    74,     0,    57,    69,     0,
       0,     0,   604,   605,   638,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,   357,   357,   368,
     346,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   452,   454,
     395,   421,   475,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,   111,   111,
       0,   137,     0,   383,     0,   133,   132,   131,   130,   129,
     125,   126,   128,   127,   121,   122,   117,   120,   123,   118,
     124,   159,   161,   163,     0,   165,     0,     0,   139,     0,
       0,    68,    67,   104,   622,   108,   104,     0,     0,     0,
     634,   745,   746,    85,     0,     0,     0,     0,     0,   104,
     104,   104,   104,     0,     0,     0,   104,   220,   223,     0,
       0,   177,   179,     0,     0,     0,   191,   193,     0,     0,
       0,     0,   296,   299,     0,     0,     0,     0,   107,   107,
       0,     0,   255,   258,     0,     0,     0,   273,   275,     0,
       0,     0,   288,   291,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   731,   329,   317,   320,   374,   374,
     374,     0,     0,     0,     0,     0,   731,     0,     0,     0,
     398,   402,   411,     0,     0,   104,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   430,   104,     0,
     483,     0,   490,     0,   498,   505,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   538,   542,
     642,     0,     0,     0,     0,     0,     0,     0,   150,     0,
     151,     0,   147,     0,     0,     0,   111,   382,     0,   162,
     164,     0,     0,     0,    81,   580,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,   104,     0,   104,     0,
       0,     0,     0,     0,     0,   104,     0,     0,     0,   167,
     197,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,     0,   283,   285,     0,   279,
     281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,   111,     0,     0,
       0,     0,   375,   376,   377,   378,   379,   380,   381,     0,
       0,   342,   358,     0,   343,     0,   344,   369,     0,     0,
       0,   351,   345,   347,     0,     0,   414,     0,   412,     0,
       0,     0,   418,     0,   416,     0,     0,   422,     0,     0,
     423,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   107,   545,     0,
       0,     0,     0,     0,     0,     0,   577,     0,     0,   111,
       0,   144,     0,     0,   115,   166,     0,   168,   104,     0,
       0,     0,    54,   225,   226,   231,   232,     0,   235,     0,
     234,   228,   227,    86,   229,   224,     0,   233,   181,   180,
       0,     0,   194,   195,   300,   301,   302,   303,   259,   260,
       0,     0,     0,    86,   264,   265,   266,   267,   276,    86,
     278,    86,   277,   293,   292,   294,   334,   332,   333,   324,
     322,   323,   321,   336,   328,   335,   331,   325,     0,     0,
       0,     0,     0,     0,   365,   359,     0,   371,     0,     0,
       0,   404,   403,    86,   405,   406,   409,   410,    86,   407,
     408,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,   104,     0,     0,     0,     0,   104,     0,     0,   104,
     424,   484,     0,     0,   104,     0,     0,     0,     0,   425,
     491,     0,     0,     0,     0,     0,   104,   426,   499,     0,
       0,     0,     0,     0,     0,     0,     0,   427,   506,   104,
       0,   104,   731,   731,   731,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,   478,   477,
     478,     0,   543,     0,   731,     0,     0,     0,     0,     0,
     119,     0,     0,     0,   154,     0,     0,     0,     0,     0,
       0,     0,   104,   104,     0,   104,   182,   199,   196,   261,
       0,   262,     0,   284,     0,   280,     0,     0,     0,     0,
     363,   364,   366,     0,   362,   111,   370,   111,   348,   349,
       0,     0,     0,     0,   350,   352,   413,     0,   417,     0,
     428,   420,   429,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,   420,     0,     0,     0,     0,     0,
     420,     0,     0,     0,     0,     0,     0,     0,     0,   420,
       0,     0,     0,     0,     0,   420,   420,     0,     0,   515,
       0,   459,     0,     0,     0,     0,     0,     0,   463,   464,
       0,     0,     0,     0,     0,     0,     0,   458,     0,     0,
       0,     0,   544,   548,     0,     0,     0,     0,     0,     0,
     153,     0,     0,   146,   116,     0,   626,   629,   631,   633,
       0,     0,     0,     0,     0,     0,     0,     0,   286,   282,
       0,   327,   330,     0,   360,   372,     0,     0,     0,     0,
     415,   419,     0,     0,   731,     0,   731,     0,     0,     0,
       0,     0,   104,     0,   487,   485,   486,   488,   104,     0,
     494,   492,   493,   495,   496,   104,   503,   501,     0,   500,
     502,   510,   509,   511,     0,     0,   507,   508,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   731,   479,     0,   549,
     549,     0,   731,     0,     0,     0,     0,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,   200,     0,     0,   337,   367,     0,     0,   353,
     354,   355,   356,   431,   433,     0,     0,     0,     0,     0,
       0,   439,     0,     0,   489,     0,   497,     0,   504,   513,
     514,   517,   512,   456,     0,     0,   437,   438,     0,     0,
       0,     0,     0,   469,   473,   474,     0,   472,     0,   453,
       0,   731,   482,   455,   374,   374,   600,     0,   593,   597,
       0,     0,     0,   149,     0,   238,   237,   230,   236,     0,
       0,     0,     0,     0,     0,     0,   263,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,   104,     0,   104,     0,     0,     0,     0,     0,
       0,   104,     0,   480,   481,     0,     0,     0,     0,   547,
       0,   550,   546,   731,     0,     0,     0,     0,   201,   202,
     203,   204,   205,   206,     0,     0,     0,   420,   441,   442,
       0,     0,     0,     0,   440,     0,     0,   420,     0,     0,
       0,     0,   104,     0,     0,   516,   518,     0,   436,     0,
     460,   461,   462,     0,     0,   466,     0,     0,     0,     0,
       0,     0,     0,   551,     0,     0,     0,   148,     0,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,   471,     0,   555,   556,   553,   554,   111,
     595,     0,     0,     0,   269,   361,   373,   432,   443,   444,
     445,     0,   420,     0,   450,   420,   524,   519,   522,   523,
     520,   521,   457,   435,     0,   420,   420,   465,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,   470,     0,   598,     0,     0,     0,   448,   420,   451,
     434,     0,     0,   552,     0,     0,    89,     0,     0,   467,
     468,     0,   270,     0,    61,     0,   449,     0,     0,    90,
       0,     0,     0,   447,   599,    89,     0,     0,   271
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   112,   188,
     189,   945,  1551,   244,   624,   245,  2025,   246,   504,   780,
     930,   352,   500,   353,   415,   184,   314,  2034,   315,   117,
     209,   443,   495,   496,  1527,   937,   615,   616,   768,  1024,
    1545,   769,   887,   888,  1369,   882,   921,  1046,  1048,   114,
     321,   428,   678,   948,  1082,   115,   322,   433,   680,   949,
    1087,  1401,  1675,  1772,   113,   195,   320,   424,   673,   947,
    1078,   116,   204,   323,   441,   687,   951,  1103,  1412,  2003,
    2038,   688,   952,  1108,  1261,  1421,  1258,  1419,   689,   953,
    1113,   683,   950,  1093,   118,   215,   326,   451,   697,   956,
    1127,  1433,  1277,  1568,   698,   850,  1131,  1303,  1450,  1585,
    1128,  1292,  1575,  1777,  1130,  1297,  1577,  1778,  1293,   770,
     119,   220,   327,   456,   585,   701,   961,  1141,  1307,  1453,
    1313,  1458,   858,  1001,  1184,  1185,  1528,  1648,  1747,  1332,
    1481,  1334,  1490,  1336,  1498,  1337,  1508,  1728,  1861,  1916,
     120,   225,   328,   463,   705,  1003,  1189,  1531,  1824,  1881,
    1969,   121,   230,   329,   470,    27,   330,   596,   714,    83,
     355,   237,   490,   345,   343,   357,   508,   794,  1002,    28,
     111,   771,   281,   171,   172,   282,   283,    29,   174,    61,
      62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1463
static const yytype_int16 yypact[] =
{
   -1463,    70, -1463, -1463,   119,  4498,  -179,    88,  -129,   621,
     134,  1388,   530,  -112,   -97,   -81,   -56,   -51,   -21,    26,
      30,    86,   113,    11, -1463, -1463,   694, -1463, -1463,    -1,
      79,   121,   419,   430,   439,   408,   462, -1463,   476,   492,
     510,   520,   538, -1463,   540, -1463,   543,   555,   560,   569,
     571,   594,   640,   643,   645,   653, -1463,   261,   266, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463,   340,    24, -1463,   363, -1463,   357,
     412,   437,   441, -1463, -1463,   420,  2709,  4448,  -127, -1463,
   -1463,   464, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,   530,
     530,  -178,   216,   304,   -40,    62,   323,   343,   407,   460,
     479,   501,   408,   589,  4448,  4448,   408,   473,    81,   723,
    4448, -1463, -1463,   -98,   738,   465,   497,   522,   542,   544,
   -1463, -1463, -1463, -1463, -1463,   551,   556,   558,   566,   572,
     576,   582,   585,   597,   600,   604,   616,   627,   635,   661,
     677,   680,   687,   691,   726,   748,  4448,  4448,  4448,  4343,
    3010, -1463,   743, -1463, -1463,   761,  2803,   784,  4343,    44,
     667,  -108,   789, -1463,   861,   -84,   768, -1463, -1463, -1463,
   -1463, -1463,   -73, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463,   772, -1463, -1463,
   -1463, -1463,  -175, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463,   771,  3027,  5592,  2127,   779,   746,
    2127,  -158, -1463,    21, -1463, -1463,   780, -1463, -1463,  3618,
    1899, -1463,  1036,  1039,  4448,  4448,   530,  4448,  4448,  4448,
    4448,  4448,  4448,  4448,  4448,  4448,  4448,  4448,  4448,  4448,
    4448,  4448,  4448,  4448,  4448,  4448,  4448,   530,  -152,  -152,
    5615,  3010,   238, -1463,  4448,  4448,  4448,  4448,  4448,  4448,
    4448,  4448,  4448,  4448,  4448,  4448,  4448,  4448,  4448,  4448,
   -1463, -1463, -1463, -1463, -1463,   -55, -1463,  4448,   530, -1463,
    4343, -1463,   811,  4157,   812,   814, -1463,  2089,   815,  4448,
     287,    49,   356,   158, -1463,    51,   364,   367,   486,   577,
     788,  4448,  4448, -1463, -1463,    81,    81,    10,   790,   792,
     793,   800,   801, -1463,    81,   573,   515, -1463,  1050,  4448,
   -1463,  4343, -1463, -1463, -1463,   802,    20,  -174, -1463, -1463,
     315,   808,   804,  3389,  3682,   813,  5638,  5665,  5692,  5719,
    5746,  5773,  5800,  5827,  5854,  5881,  3889,  5908,  5935,  5962,
    5989,  6016,  6043,  4289,  4322,  4365,   818, -1463, -1463,  4343,
    3064,  3308,  3081,  2326,  2195,  2195,   754,   754,   754,   754,
      -9,    -9,  -152,  -152,  -152,  -152,  1064,  6070,   829,   -43,
    4396,  4448,  5160,    82,    82,     3,   190,  1066,    82,  6097,
      14,  1084,  1086, -1463, -1463,   833,  1088, -1463, -1463,   834,
      48,  1094, -1463, -1463,   837,  1097,  1099,   845,   849,   855,
   -1463, -1463, -1463,    87,   888,   864,  1119,  1120,   862,   867,
   -1463, -1463,  1130,   872, -1463, -1463, -1463, -1463,  1132,   875,
     408,   408, -1463, -1463,   408,   877,   408,   530,  1137, -1463,
   -1463, -1463,  3325,  1555,   951, -1463,    48, -1463,   913,  4343,
     916,   917,   919,   105,   925, -1463, -1463, -1463, -1463, -1463,
    1180,   928,   929,   930,   945, -1463, -1463,   108,  4448,  6124,
     324,   337,  1065, -1463, -1463, -1463,  1190,  4015, -1463, -1463,
   -1463,  1193,  4448,  4448,  1194, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463,  4448, -1463, -1463, -1463, -1463,
   -1463, -1463,  4448,  4448,  4448,  1195,  3010, -1463,  4448,  4448,
   -1463,  1200, -1463, -1463, -1463,  6683,  5187, -1463, -1463,  1201,
    1202,  1203,  1206, -1463,  1205,   981,   953, -1463,  1216,   -11,
    1217, -1463,  1229, -1463,  1230,  1231, -1463,  1234,   -11,  1236,
   -1463, -1463, -1463,  1237,  1243,    48,  1013,  1244,   -11,  1253,
   -1463, -1463,   -11,  1262, -1463,   985,   -11,  1263, -1463,  1264,
    1266,  1267, -1463,  1268,  1269,  1270,  1014,  4448,  4448, -1463,
    1245,  1015,  4343,   373,  4343,  4343,  4343,  1273, -1463,   779,
    4448,  1277,   530,  1034,   120, -1463,  2252,  1278,  3357,  1279,
   -1463,    33, -1463,    81,   198, -1463,  2813,  2813,  1022,  1283,
     172,  4448,  4448, -1463,  2813,  4448,  1284, -1463, -1463, -1463,
   -1463,  4448,  1287,  2372, -1463, -1463,  1027,  1032,  1033,  1038,
    1042,  1291, -1463,  1041,  4418,  4470, -1463,  6147,  6174,  6201,
    6228, -1463,  6683,  6683, -1463, -1463, -1463, -1463, -1463,  1048,
   -1463,  1254, -1463,   111, -1463,  1060,  1315, -1463,   450, -1463,
     470, -1463, -1463,   222, -1463,  1317, -1463,   348,   484,   394,
   -1463,  1061,  1319,    48, -1463,  1324, -1463,   426,   205,  1327,
   -1463,   546, -1463,  1330, -1463,   580, -1463, -1463, -1463,  1073,
   -1463, -1463, -1463, -1463,   694,   681,  6255,  1075,    48,   488,
   -1463,   495,   505,   508, -1463,  1074,  6278,  1082,  1087, -1463,
    1336,     0, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463,  1090, -1463,  1091,  1092,  1095,  1096, -1463, -1463,
    1350,  2252,  2252,  2252,  2252,  1353,    69,  1355,  4219,   -58,
    1103,  1103, -1463,  1106, -1463,  4448,  4448,    39, -1463, -1463,
    1098,    53, -1463, -1463,    48, -1463,   530,   530, -1463,  6683,
    6683, -1463,  6683, -1463,  1361,  1361,  1361,  6683, -1463,  4343,
    6683,    48, -1463,  4448,  4448,  4448,  4343, -1463, -1463,  4448,
    4448, -1463, -1463, -1463, -1463,  4448, -1463,   511, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,  4448, -1463,
    1369, -1463, -1463, -1463, -1463,  1113,  1121,  1122,  1123, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,  2934, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463,  4448, -1463, -1463,  4448,
    1124,  1125,  1129,  1134,  1135, -1463, -1463, -1463, -1463, -1463,
   -1463,  1136,  1138,  1136,  2252,  1392,  1414,  1162,  1164,  1181,
    1169,  1169,  1169,  2023, -1463, -1463, -1463, -1463, -1463,    -2,
    1161, -1463,  2252,  2252,  2252,  2252,  2252,  2252,  2252,  2252,
    2252,  2252,  2252,  2252,  2252,  2252,  2252,  2252,  1427,  4448,
    1983, -1463,  1171,  6683,  3601, -1463,   305, -1463, -1463,   408,
      21,  1174, -1463, -1463, -1463,   512, -1463,   524,  4493,  4516,
    4539,   528,  6305,  6332,  5214,  1196, -1463,   777,    -6,   415,
     318,   980,   606,   457,  5241, -1463,  2377, -1463, -1463, -1463,
   -1463,  1093,    15,    89,   110,  1199,  1204,  1208,  1210,  1214,
    1215,  1220,  1221,  1222,  1444,  1223,   224,   359,   452,  1189,
    1224,  1226,  1227,  1228,  1240,  1249,  1250,  1255,  1211,  1238,
    1271,  1272,  1280,  1285,  1288,  1239,  1248,  1290, -1463, -1463,
   -1463, -1463, -1463,     5,  5268,  4562,    48,  4343,  4343,  4343,
    4343,   306,  1241, -1463,  1265,  2740,  1292,  1293, -1463, -1463,
    1295, -1463,  1209, -1463,  2252,  2782,  2641,  1497,  1497,  1497,
    1242,  1242,  1242,  1242,   631,   631,  1169,  1169,  1169,  1169,
    1169, -1463, -1463, -1463,  1296,  4219,   311,  2873, -1463,  4448,
    1452, -1463, -1463,    48, -1463, -1463,    48,  4448,  4448,  4448,
   -1463, -1463, -1463, -1463,  1281,    81,    81,    81,    81,   288,
     406,    48,    48,  1294,   408,  1459,   445, -1463, -1463,    68,
    1490, -1463, -1463,  1297,  1496,  1539, -1463, -1463,  1544,    71,
    1546,   408, -1463, -1463,  1551,  1552,  1554,  1300,  1027,  1027,
      81,    81, -1463, -1463,  1560,    27,    28, -1463, -1463,  1561,
     408,  1563, -1463, -1463, -1463,  1564,  1567,  1568,    52,   408,
     408,  1557,  1571,    81,  2813, -1463, -1463, -1463,  2263,  2413,
    1030,    -4,  1574,   408,    29,   530,  2813,   530,    32,   408,
   -1463, -1463, -1463,   408,  1569,    48,    48,  1573,   408,   408,
     408,   408,   408,   408,   408,   408,   408, -1463,    48,  4448,
   -1463,  4448, -1463,  4448, -1463, -1463,    81,   530,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,  1580,   408,  1332,  1337,  1340,   408, -1463, -1463,
   -1463,  4448,  1341,   533,   547,   562,   567,  1598, -1463,  1342,
   -1463,  2252, -1463,  1346,  1357,  1348, -1463, -1463,  3650, -1463,
   -1463,  2252,  1354,   599,  6683, -1463,  1351, -1463,  4585,  4608,
    4631,    21,  1611,  1612,  1614,  1622,    48,  1624,    48,  1626,
    1629,  1630,  1188,  1640,  1648,    48,  1649,  1650,  1653,  1171,
   -1463,  1655,  1656,  1658,  1659,  1661,  1665,  1670,    34,  1422,
    1673,  1680,  1681,  1683,  1684,  1685, -1463, -1463,  1686, -1463,
   -1463,  1690,  1694,  1699,  1700,  1708,  1709,  1713,  1714,  1715,
    1716,  1718, -1463,  1720,  1721,  1722,  1725, -1463,  1728,  1730,
    1735,  1483, -1463, -1463, -1463, -1463, -1463, -1463, -1463,    81,
    1744, -1463, -1463,  1495, -1463,    81, -1463, -1463,  1498,  1749,
    1752, -1463, -1463, -1463,  1754,  1755, -1463,  1756, -1463,  1757,
    1759,  1760, -1463,  1761, -1463,  1762,  1511, -1463,  1512,  1513,
   -1463,  1515,  1516,  1541,  1542,  1543,  1545,  1548,  1553,  1556,
    1558,  4654,   794,  4677,   960,  4700,   514,   433,  1562,  1565,
    1566,  1570,  1572,  1585,  1586,  1599,  1601,  1602,  1604,  1605,
    1606,  1616,  1617,  1625,  1627,  1575,    35,    35, -1463,  1813,
    5295,  1613,  1631,  1603,  1632,  1633, -1463,    81,  1166, -1463,
    4448, -1463,  1818,  1642, -1463,  4219,    81, -1463,    48,  4448,
    4448,  4448, -1463, -1463, -1463, -1463, -1463,  1641, -1463,  1644,
   -1463, -1463, -1463,  1645, -1463, -1463,  1646, -1463, -1463, -1463,
    1820,   608, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
    1822,  1786,  1823,  1645, -1463, -1463, -1463, -1463, -1463,   612,
   -1463,   626, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463,  1647, -1463, -1463, -1463, -1463,  1654,  1824,
    1826,  1892,  1903,  1901, -1463, -1463,  1907, -1463,  1910,  1911,
     552, -1463, -1463,   630, -1463, -1463, -1463, -1463,   648, -1463,
   -1463,  1912,  1657,  1913,    48,   408,   408,  4448,  4448,  4448,
     408,    48,    81,  1915,  4448,  1663,    48,  4448,  4448,    48,
   -1463, -1463,  4448,  1693,    48,  4448,  4448,  4448,  4448, -1463,
   -1463,  4448,  4448,  4448,  1698,  4448,    48, -1463, -1463,  4448,
    4448,   408,  1707,  1711,  4448,  4448,  1712, -1463, -1463,    48,
    1956,    48,  2813,  2813,  2813,  4448,  2813,  1965,  1966,   408,
     408,  4448,   408,   408,    81,  1972,  1971, -1463, -1463, -1463,
   -1463,   139, -1463,  1717,  2813,  4343,  1726,  4343,  4343,  1723,
   -1463,  1724,  4723,  1732, -1463,  2252,  1733,  1729,  5322,  5349,
    5376,  1727,    48,    48,  1188,    48, -1463, -1463, -1463, -1463,
    1974, -1463,  1979, -1463,  1980, -1463,  1984,   408,  1988,  1990,
   -1463, -1463, -1463,  1740, -1463, -1463, -1463, -1463, -1463, -1463,
    1136,  1136,  1136,    81, -1463, -1463, -1463,   408, -1463,   408,
   -1463, -1463, -1463,  1741,  1736,  1737,  4746,  4769,  4792,  1738,
    1742,  1743, -1463,  4815, -1463,  1999,   491,  1017,  2000,  4838,
   -1463,  2001,  1068,  1133,  1197,  1286,  4861,  1352,  1403, -1463,
    1434,  2004,  1463,  1538,  2005, -1463, -1463,  1608,  1639, -1463,
     377, -1463,  1776,  1790,  1795,  1779,  4884,  1789, -1463, -1463,
    1819,  1821,  6359,  1825,  1827,  1830,   675, -1463,   378,   397,
    1833,  1835, -1463, -1463,  4448,  1834,   678,  4448,   682,   688,
   -1463,  1829,  4448, -1463,  4219,  1836, -1463, -1463, -1463, -1463,
    1841,  1831,  1832,  1838,  1845,   714,  2099,  1842, -1463, -1463,
    1849, -1463, -1463,  2102, -1463, -1463,  2103,  2104,  2111,  2137,
   -1463, -1463,  2988,  2138,  2813,  4448,  2813,  4448,  4448,   408,
    2139,   408,    48,  3042, -1463, -1463, -1463, -1463,    48,  3227,
   -1463, -1463, -1463, -1463, -1463,    48, -1463, -1463,  3281, -1463,
   -1463, -1463, -1463, -1463,  3335,  3520, -1463, -1463,   716,  2142,
    4448,    48,  2143,  2144,  4448,   530,   530,  4448,  4448,  2146,
    2147,  2149,   530,  2150,  2024,  2153,  2761, -1463,  2154, -1463,
   -1463,  5403,  2813,  1897,  5430,  1898,  1902,  1908,  5457, -1463,
      21,  2158,  2160,  2164,  2166,  2169,  4448,  4448,  4448,  4448,
    4448, -1463, -1463,  2065,  2170, -1463, -1463,  1914,  1916, -1463,
   -1463, -1463, -1463,  2165, -1463,  1925,  6386,  1919,  4907,  4930,
    1924, -1463,  1932,  1929, -1463,  1931, -1463,   403, -1463, -1463,
   -1463, -1463, -1463, -1463,  4953,   422, -1463, -1463,  6413,  1939,
    1940,  4976,  4999, -1463, -1463, -1463,   717, -1463,   530, -1463,
     530,  2813, -1463, -1463,  1500,  2698, -1463,  1936, -1463, -1463,
    1943,  4343,  4448, -1463,  1937, -1463, -1463, -1463, -1463,  2197,
    1719,  1811,  1828,  2354,  2420,  2203, -1463, -1463,  1136,  1945,
    2204,  2205,  4448,  4448,  4448,  4448,  2211,    48,  4448,  1946,
    4448,   536,    48,  2212,    48,  2213,  2214,  2216,  4448,  4448,
    2218,    48,   745, -1463, -1463,  2221,  2222,  2223,    81, -1463,
    1975, -1463, -1463,  2813,  4448,   751,  5484,  4448, -1463, -1463,
   -1463, -1463, -1463, -1463,  1968,  1970,  1978, -1463, -1463, -1463,
    6440,  6467,  6494,  5022, -1463,  1981,  5045, -1463,  6521,  2233,
    2243,  4448,    48,  2245,    81, -1463, -1463,  1992, -1463,   454,
   -1463, -1463, -1463,  6548,  6575, -1463,  1987,  2246,  4448,  2260,
    2269,  2270,  2304, -1463,  2049,  5068,  2050, -1463,  6602,  2309,
    2310,  2311,  3574,  2312,  2313,  2317,  2813,  2071,  4448,  3628,
    2072,  2331,  2332,  2448,  2333,  2334,  2336,  2342,  2344,    48,
    2088,  2090,  2349, -1463,  5511, -1463, -1463, -1463, -1463, -1463,
   -1463,  4448,  2093,  2352, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463,  2094, -1463,  6629, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463,  2105, -1463, -1463, -1463,  2355,  2106,
    5538,  4448, -1463,  2305,  4448,  3813,  2107,  3867,  2359,  3921,
    4106, -1463,  2361, -1463,  5091,   408,  5114, -1463, -1463, -1463,
   -1463,  2362,  2363, -1463,  4448,  2365,  2109,  4448,  4160, -1463,
   -1463,  5137, -1463,  2113, -1463,  6656, -1463,  4448,  2247, -1463,
    2373,  5565,  2378, -1463, -1463,  2109,  2375,  2119, -1463
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463,   192, -1463,  -282, -1463,  1303, -1463, -1463,
    1310,  -351, -1463,  -571, -1463,  -366,  -547,   383, -1463, -1463,
   -1463, -1463,   770, -1463,  -632, -1463,  -991, -1463,  -716, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463,  1662, -1463,  1191, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,  1777, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
    1443, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1119,  -721,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1462, -1463, -1463, -1463,  1072,   902, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463, -1463,   684, -1463,
   -1463, -1463, -1463, -1463, -1463, -1463, -1463,  1856, -1463,  1745,
   -1463,  2324, -1463,  1843,  2217,  -330, -1463,   391,   -22,   -52,
   -1463, -1463,   701,  -514,  -491,  -172,   -85, -1463,    -5,  -101,
     -34
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -683
static const yytype_int16 yytable[] =
{
      30,   173,    34,     6,    84,   505,   305,    60,   180,   181,
     880,  1298,   676,   483,   802,   241,     6,   497,    74,   556,
       6,   685,  1199,   348,   348,     6,     6,  1204,  1205,   123,
      91,   695,  1256,  1259,     6,   699,   348,     6,     6,   703,
       6,  1409,   348,   445,     6,   890,   891,   892,   893,   552,
     778,   306,   175,   474,   475,   477,   241,  1268,   928,    86,
     191,   197,   484,  1079,   206,   211,   217,   222,   227,   232,
       3,   491,   895,   241,   896,  1080,   548,   574,   360,   242,
    1186,   182,  1299,   325,   503,   506,   241,   548,   183,    31,
     190,   196,   507,     6,   205,   210,   216,   221,   226,   231,
     -63,  1187,   772,   299,    60,    60,  1300,   192,    30,   300,
      31,    30,   212,    30,    30,    30,    30,   233,   929,    -3,
     242,   238,   238,   247,    75,    76,    77,    35,    78,  1692,
     177,   425,  1237,   491,   621,   782,   783,   242,   409,   178,
     242,    43,  1703,   791,  1650,   426,    63,   492,  1709,   309,
     242,   242,    75,    76,    77,   365,    78,  1718,   310,  1269,
    1012,   317,  1014,  1724,  1725,   614,   250,    64,  1015,  1270,
      31,    75,    76,    77,   318,    78,   386,     6,    56,   501,
     313,    57,    58,    65,    31,   319,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,   406,   918,  1045,   919,   925,   408,    66,   492,
       6,   389,   897,    67,   543,  1373,     7,     8,    75,    76,
      77,   185,    78,   389,   198,   199,   434,     7,     8,    75,
      76,    77,   173,    78,    13,    75,    76,    77,   354,    78,
     296,   297,   298,    68,   435,    13,   299,   772,   772,   772,
     772,    60,   300,   675,   436,   437,  1651,    31,   781,  1081,
    1301,  1302,   551,   438,   767,   439,    31,    85,    31,   183,
    1188,   243,    60,  1143,   476,    73,   349,   349,   557,   186,
     124,   777,   898,   175,   350,   350,  1438,   351,   351,   349,
      69,  1257,  1260,  1306,    70,   349,  1312,   494,   675,   801,
     351,   442,   307,    60,   537,   457,   351,   603,  1208,     6,
     444,   491,   243,    86,   427,     7,     8,    75,    76,    77,
     247,    78,   845,   846,   847,   848,   200,   201,     6,   243,
     247,   247,   247,    13,     7,     8,    75,    76,    77,   247,
      78,   779,   243,   243,    32,   125,   573,  1145,     6,    33,
      71,   354,    13,   183,     7,     8,    75,    76,    77,   494,
      78,    75,    76,    77,   607,    78,   594,   617,  1146,   420,
     772,   507,    13,   421,   507,   818,   819,    72,  1541,   730,
      75,    76,    77,   422,    78,    87,   507,   492,   772,   772,
     772,   772,   772,   772,   772,   772,   772,   772,   772,   772,
     772,   772,   772,   772,  1652,    59,   772,    75,    76,    77,
     207,    78,     6,     6,   786,   787,  1088,   560,     7,     8,
      75,    76,    77,   440,    78,    88,  1089,  1090,  1091,   491,
     719,   569,   721,   722,   723,  1942,    13,    89,   429,    75,
      76,    77,   579,    78,   430,  1949,    90,   583,   -63,   926,
     446,  1499,   431,   587,   250,   589,   590,   -66,    31,   591,
     447,   593,    60,   452,   183,     6,  1251,  1252,   491,    92,
     849,     7,     8,    75,    76,    77,   448,    78,     6,   239,
     449,   187,  1159,    93,     6,  1368,   826,   827,  1160,    13,
       7,     8,    75,    76,    77,  1375,    78,  1083,  1705,    94,
     453,  1084,  1085,   388,   389,   492,     6,   454,    13,   417,
     772,   728,     7,     8,    75,    76,    77,    95,    78,   109,
    2005,  1500,   110,  2007,    75,    76,    77,    96,    78,   788,
      13,   122,  1492,  2009,  2010,     6,    56,   494,   491,    57,
      58,   173,   173,  1109,   492,    97,  1226,    98,  1011,   173,
      99,     6,   423,  1110,  1909,  1111,  2028,     7,     8,    75,
      76,    77,   100,    78,  1050,  1197,  1501,   101,   193,   194,
    1210,   507,   507,  1502,  1503,    13,   102,  1211,   103,  1052,
     509,   389,   458,  1092,  1684,     6,  1685,   202,   203,   620,
     183,     7,     8,    75,    76,    77,  1504,    78,   459,  1505,
    1506,   104,  1493,   389,   622,   549,   550,    60,   208,    13,
     554,   773,   830,   831,   492,   126,   354,  1161,   247,   125,
     460,   432,  1910,  1162,  1911,    60,    36,   935,    37,   450,
    1580,  1581,   455,  1276,   941,  1912,  1729,  1745,   720,   389,
      38,    39,    40,  1730,  1746,  1310,   852,   105,  1913,   857,
     106,   820,   107,   863,  1494,   494,  1748,    41,   835,   836,
     108,   828,  1859,  1746,  1228,   832,  1914,   837,  1582,  1860,
     127,   213,   214,   464,   461,   844,   851,  1495,  1496,   856,
    1086,  1863,  1583,   862,   130,   932,   933,   772,  1864,   866,
     842,   843,    84,    30,   494,   128,    30,   772,  1507,   129,
      30,  1410,  1104,  1235,  1105,  1880,  1880,    75,    76,    77,
    1163,    78,  1106,  1958,   822,   823,  1164,   465,  1393,   234,
    1959,   179,  1112,   252,   218,   219,   285,   286,   287,   248,
     288,   289,   290,   291,   824,   825,   292,   293,   294,   295,
     296,   297,   298,   223,   224,   251,   299,   493,   833,   834,
     301,   462,   300,   871,   389,   253,   773,   773,   773,   773,
     872,   389,   900,    59,   494,   228,   229,   466,   302,   467,
     873,   389,   354,   874,   389,   818,   946,  1054,   389,  1497,
     254,    60,    60,  1222,  1223,  1224,  1225,   170,   176,  1055,
    1056,   304,   468,  1060,   389,   820,   311,  1238,  1362,   389,
     255,  1915,   256,  1765,  1766,  1767,  1768,  1769,  1770,   257,
     854,   855,  1363,   389,   258,    42,   259,  1584,  1253,  1254,
     485,   486,   487,   488,   260,   235,   236,  1364,   389,  1664,
     261,   249,  1365,   389,   262,  1193,  1194,  1195,  1196,   489,
     263,  1275,   469,   264,   860,   861,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,   265,  1895,  1074,   266,  1686,
    1687,  1688,   267,  1075,  1377,   389,   312,   278,   279,   280,
    1382,  1107,  1557,  1558,   268,  1213,  1076,  1563,   183,   773,
     913,   914,   915,   916,  1338,   269,   917,    79,    80,    81,
      82,  1565,   183,   270,  1022,  1586,   183,   773,   773,   773,
     773,   773,   773,   773,   773,   773,   773,   773,   773,   773,
     773,   773,   773,  1588,   183,   773,   285,   286,   287,   271,
     288,   289,   290,   291,  1051,   354,   292,   293,   294,   295,
     296,   297,   298,   308,  1475,   272,   299,  1476,   273,  1142,
    1743,  1744,   300,  1753,   389,   274,   867,  1755,   389,   275,
    1477,  1478,  1479,  1756,   389,   363,   364,  1144,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,  1999,  1771,
    1801,  1802,  1870,  1871,   276,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   294,   295,   296,   297,   298,   277,  1443,   407,   299,
    1927,  1928,   346,  1446,   412,   300,  1936,   389,   170,   773,
     419,  1633,  1634,  1635,  1706,  1637,   316,  1554,   795,   796,
     324,   772,   472,   473,  1309,   331,  1311,   344,   356,   173,
    1673,   361,  1077,  1655,   362,   410,   413,  1562,   414,   418,
     499,   173,   471,  1564,   478,  1566,   479,   480,   498,  1480,
     247,   247,   247,   247,   481,   482,  1339,   510,   502,  1233,
     511,   540,   514,   553,   247,  1711,  1094,   535,  1095,  1096,
    1097,  1098,  1099,  1100,  1101,  1539,  1246,  1587,   542,   558,
     536,   559,  1589,   562,  1546,   247,   247,   561,   563,   565,
    1483,   566,   567,  1484,   568,  1263,    75,    76,    77,   570,
      78,   545,   546,   571,  1271,  1272,  1485,  1486,   247,   572,
    1487,  1488,   575,   576,   577,   578,   580,  1896,  1305,  1308,
      60,   581,    60,  1314,  1315,   582,   584,   586,  1316,   588,
    1712,   592,   595,  1321,  1322,  1323,  1324,  1325,  1326,  1327,
    1328,  1329,  1282,  1283,  1284,  1285,  1286,  1287,  1288,   600,
    1295,   247,    60,  1340,  1341,  1342,  1343,  1344,  1345,  1346,
    1347,  1348,  1349,  1350,  1351,  1352,  1353,   602,  1355,  1132,
     604,   605,  1359,   606,   608,   609,   610,   611,   612,  1133,
    1601,   131,   132,     6,   613,   623,   773,   625,   653,   618,
     564,   656,   661,  1785,  1713,  1787,   773,   664,   666,   667,
     668,   669,   670,   654,   655,   671,   354,   672,   140,   141,
     142,   143,   144,   674,   677,  1489,   657,  1134,  1135,  1136,
    1137,  1138,  1139,   658,   659,   660,   679,   681,   682,   662,
     663,   684,  1645,   686,   690,  1102,   601,   693,   691,   702,
     717,   694,   285,   286,   287,  1822,   288,   289,   290,   291,
     696,  1827,   292,   293,   294,   295,   296,   297,   298,   700,
     704,   706,   299,   707,   708,   710,   711,   712,   300,   713,
     724,   718,   727,   729,   247,   774,   784,   776,   785,   793,
     247,   801,   798,  1714,   807,  1296,   803,   804,   715,   716,
     808,  1689,   805,   285,   286,   287,   806,   288,   289,   290,
     291,   726,   815,   292,   293,   294,   295,   296,   297,   298,
     816,   411,   821,   299,   829,   838,   839,   170,   170,   300,
    1874,   841,   789,   790,   853,   170,   792,   859,   864,   869,
     875,   877,   797,   879,   800,   692,   878,  1939,   881,   883,
     884,  1529,  1529,   885,   886,   889,   894,   927,  1140,  1716,
     899,   920,   247,  1656,  -682,  1658,  1659,   934,   285,   286,
     287,   247,   288,   289,   290,   291,   955,   957,   292,   293,
     294,   295,   296,   297,   298,   958,   959,   960,   299,  1007,
    1006,    44,  1934,  1008,   300,    45,  1013,  1016,  1009,  1010,
     767,   901,   902,   903,   904,   905,   906,   907,   908,  1834,
    1717,   909,   910,   911,   912,   913,   914,   915,   916,  1017,
    1018,   917,  1019,  1020,   917,  1540,  1023,   173,   173,   173,
    1041,   173,   285,   286,   287,  1047,   288,   289,   290,   291,
    1053,  1719,   292,   293,   294,   295,   296,   297,   298,   173,
      46,  1157,   299,  1165,  1064,  1981,    47,  1148,   300,  1215,
    1594,  1595,  1149,   840,  1234,  1599,  1150,   247,  1151,    48,
    1721,    49,  1152,  1153,  1207,  1174,   923,   924,  1154,  1155,
    1156,  1158,  1166,    50,  1167,  1168,  1169,    51,   870,   911,
     912,   913,   914,   915,   916,  1239,  1624,   917,  1170,    52,
    1198,  1241,  1175,  1181,   938,   939,   940,  1171,  1172,  1653,
     942,   943,  1182,  1173,  1640,  1641,   944,  1643,  1644,   247,
      53,   285,   286,   287,  1200,   288,   289,   290,   291,  1176,
    1177,   292,   293,   294,   295,   296,   297,   298,  1178,   954,
     773,   299,  1221,  1179,  1242,  1722,  1180,   300,  1183,  1243,
    1202,   928,  1203,  1206,   931,  1209,  1247,  1248,  1232,  1249,
    1273,  1240,  1680,   598,  1250,  1255,  1262,  1004,  1264,  1265,
    1005,   936,  1266,  1267,  1274,    54,  1317,    55,   247,  1304,
    1320,  1875,  1690,  1876,  1691,  1354,  1877,   285,   286,   287,
    1356,   288,   289,   290,   291,  1357,  1932,   292,   293,   294,
     295,   296,   297,   298,  1358,  1366,  1361,   299,  1367,   173,
    1370,   173,  1376,   300,  1372,  1726,  1371,  1378,  1383,  1384,
    1042,  1385,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1386,
    1878,  1388,  1956,  1390,  1809,  1810,  1391,  1392,   285,   286,
     287,  1816,   288,   289,   290,   291,  1727,  1394,   292,   293,
     294,   295,   296,   297,   298,  1395,  1397,  1398,   299,  1885,
    1399,   173,  1402,  1403,   300,  1404,  1405,   173,  1406,   285,
     286,   287,  1407,   288,   289,   290,   291,  1408,  1413,   292,
     293,   294,   295,   296,   297,   298,  1411,  1414,  1415,   299,
    1416,  1417,  1418,  1420,  1790,   300,  1792,  1422,   285,   286,
     287,  1423,   288,   289,   290,   291,  1424,  1425,   292,   293,
     294,   295,   296,   297,   298,  1426,  1427,  1872,   299,  1873,
    1428,  1429,  1430,  1431,   300,  1432,  1889,  1434,  1435,  1436,
      60,    60,  1437,  1439,  1147,  1440,   173,    60,   907,   908,
    1441,  1442,   909,   910,   911,   912,   913,   914,   915,   916,
    1214,  1444,   917,  1445,  1448,   354,  1447,  1449,  1218,  1219,
    1220,  1451,  1452,  1454,  1455,  1879,  1456,  1457,  1459,  1460,
    1461,  1462,  1463,   285,   286,   287,  1192,   288,   289,   290,
     291,  1464,  1465,   292,   293,   294,   295,   296,   297,   298,
     285,   286,   287,   299,   288,   289,   290,   291,   173,   300,
     292,   293,   294,   295,   296,   297,   298,  1466,  1467,  1468,
     299,  1469,   599,    60,  1470,    60,   300,  1473,  1890,  1471,
    1532,  1543,  1472,  1216,  1510,   170,  1217,  1556,  1509,  1559,
    1561,  1570,  1511,  1571,  1526,  1891,  1512,   170,  1513,  1227,
    1229,  1230,  1231,   285,   286,   287,  1236,   288,   289,   290,
     291,  1514,  1515,   292,   293,   294,   295,   296,   297,   298,
    1331,   173,  1333,   299,  1335,  1516,  1517,  1518,  1536,   300,
    1519,  1520,  1521,   247,   285,   286,   287,  1534,   288,   289,
     290,   291,  1522,  1523,   292,   293,   294,   295,   296,   297,
     298,  1524,  1360,  1525,   299,  1535,  1537,  1538,  1560,  1572,
     300,  1544,   131,   132,   133,  1567,  1573,  1552,  1574,   247,
    1553,   183,  1555,  1569,  1576,  1318,  1319,  1578,  1579,  1590,
    1592,  1591,  1602,   135,   136,   137,   138,  1604,  1330,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   285,   286,   287,  1610,   288,   289,
     290,   291,  1619,  1631,   292,   293,   294,   295,   296,   297,
     298,  1625,  1638,  1639,   299,  1626,  1629,  1646,  1647,  1676,
     300,  1654,  1660,  1661,  1677,  1678,   131,   132,   731,  1679,
    1657,  1663,  1665,  1670,  1666,  1681,  1387,  1682,  1389,  1683,
    1693,  1700,  1694,  1695,  1699,  1396,  1704,  1707,  1710,  1701,
    2026,  1720,  1723,   140,   141,   142,   143,   144,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,  1731,   756,   757,  1734,   285,   286,   287,  1732,
     288,   289,   290,   291,  1733,  1736,   292,   293,   294,   295,
     296,   297,   298,   285,   286,   287,   299,   288,   289,   290,
     291,  1542,   300,   292,   293,   294,   295,   296,   297,   298,
    1548,  1549,  1550,   299,  1740,  1737,  1741,  1738,  1757,   300,
    1761,  1762,   131,   132,   416,   134,  1742,  1749,    57,  1750,
    1752,  1759,  1760,  1763,  1764,   758,  1773,  1774,  1775,  1776,
    1779,  1780,   759,   135,   136,   137,   138,   139,  1781,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,  1782,  1784,  1791,   166,  1547,  1803,
    1806,  1807,   167,  1813,  1814,   168,  1815,  1817,   242,  1818,
    1819,  1823,  1828,  1830,   359,  1835,  1831,  1836,  1596,  1597,
    1598,  1837,  1832,  1838,  1839,  1603,  1845,  1846,  1606,  1607,
    1847,  1849,  1848,  1609,  1850,  1852,  1612,  1613,  1614,  1615,
    1855,  1856,  1616,  1617,  1618,  1857,  1620,  1858,  1866,  1867,
    1622,  1623,  1883,  1887,  1888,  1627,  1628,  1884,  1894,  1897,
    1907,  1898,  1899,   170,   170,   170,  1636,   170,  1904,  1918,
    1920,  1921,  1642,  1922,   760,  1925,  1929,  1930,  1931,  1940,
     761,   762,   675,  1933,  1593,   170,   763,  1941,  1951,   764,
    1947,  1600,  1043,  1044,   765,   766,  1605,   767,  1952,  1608,
    1955,  1957,  1962,  1963,  1611,   131,   132,   731,   901,   902,
     903,   904,   905,   906,   907,   908,  1621,  1965,   909,   910,
     911,   912,   913,   914,   915,   916,  1966,  1967,   917,  1630,
    1021,  1632,   140,   141,   142,   143,   144,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,  1968,   756,   757,  1970,  1972,  1974,  1975,  1976,  1978,
    1979,   165,  1671,  1672,  1980,  1674,   334,   335,   336,   337,
     338,   339,   340,   341,   342,  1982,  1985,   166,  1986,  1987,
    1989,  1990,   167,  1991,  1278,   168,  1279,  1280,  1281,  1992,
     243,  1993,  1995,   169,  1996,  1751,  1997,  2001,  1754,  2002,
    2004,  1892,  2011,  1758,  2008,  2012,  2020,  2015,  2023,  2029,
    2030,  2018,  2032,  2033,   758,   131,   132,     6,  2039,  2042,
    2043,   759,  2047,  2045,  2048,  1282,  1283,  1284,  1285,  1286,
    1287,  1288,  1244,  1289,  1290,   170,  1786,   170,  1788,  1789,
    1245,  1129,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,  1893,  2046,  1530,
    1400,  1804,  1649,   922,  1825,  1808,   290,   291,  1811,  1812,
     292,   293,   294,   295,   296,   297,   298,   170,   709,   817,
     299,   240,   725,   170,     0,  1988,   300,   347,  1115,   865,
    1116,  1117,     0,  1118,     0,     0,     0,  1840,  1841,  1842,
    1843,  1844,  1793,  1119,     0,     0,     0,     0,  1795,     0,
       0,     0,     0,     0,     0,  1797,     0,     0,     0,     0,
    1120,  1121,  1122,   760,  1278,     0,  1279,  1280,  1281,   761,
     762,  1805,     0,     0,     0,   763,     0,  1123,   764,     0,
       0,     0,     0,   765,   766,     0,   767,     0,     0,     0,
       0,     0,   170,     0,     0,     0,     0,     0,  1291,     0,
       0,     0,     0,  1886,     0,  1282,  1283,  1284,  1285,  1286,
    1287,  1288,     0,  1289,  1290,     0,     0,     0,     0,     0,
       0,     0,     0,  1900,  1901,  1902,  1903,     0,     0,  1906,
       0,  1908,     0,  1124,     0,   288,   289,   290,   291,  1923,
    1924,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,   170,  1935,     0,   300,  1938,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,  1953,     0,     0,   300,     0,     0,     0,     0,
     166,     0,     0,     0,     0,   167,     0,  1905,   168,  1964,
       0,     0,  1917,     0,  1919,  1125,   799,     0,     0,     0,
       0,  1926,  1126,     0,     0,     0,     0,   170,     0,  1983,
       0,     0,     0,     0,     0,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,  2000,     0,     0,   299,     0,     0,  1294,     0,
       0,   300,  1954,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,  2014,   299,     0,  2016,     0,     0,     0,   300,
       0,     0,   131,   132,   133,   134,     0,     0,    57,     0,
       0,     0,     0,     0,     0,  2031,     0,     0,  2035,  1994,
       0,     0,     0,   135,   136,   137,   138,   139,  2041,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   131,   132,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1875,
       0,  1876,     0,     0,  1877,   135,   136,   137,   138,     0,
       0,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   131,   132,   133,     0,
    1282,  1283,  1284,  1285,  1286,  1287,  1288,     0,  1878,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
     138,     0,     0,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,   904,
     905,   906,   907,   908,     0,     0,   909,   910,   911,   912,
     913,   914,   915,   916,     0,     0,   917,   135,   136,   137,
     138,     0,     0,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   962,
       0,   165,  1212,     0,     0,     0,     0,    75,    76,   963,
       0,    78,     0,     0,     0,     0,     0,   166,     0,     0,
       0,     0,   167,  1882,     0,   168,     0,     0,     0,     0,
    1820,     0,     0,   169,  1821,   901,   902,   903,   904,   905,
     906,   907,   908,     0,     0,   909,   910,   911,   912,   913,
     914,   915,   916,   962,     0,   917,     0,     0,     0,     0,
       0,    75,    76,   963,     0,    78,  1201,     0,     0,   166,
       0,     0,     0,     0,   167,     0,     0,   168,   284,   903,
     904,   905,   906,   907,   908,   169,     0,   909,   910,   911,
     912,   913,   914,   915,   916,   332,     0,   917,   285,   286,
     287,     0,   288,   289,   290,   291,     0,   962,   292,   293,
     294,   295,   296,   297,   298,    75,    76,   963,   299,    78,
       0,   166,     0,     0,   300,     0,   167,     0,   303,   168,
       0,     0,   538,     0,     0,     0,   964,   169,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
       0,     0,     0,   977,     0,     0,   978,     0,     0,   979,
       0,     0,   980,     0,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
       0,   166,     0,   997,     0,     0,   167,     0,   998,   168,
     964,   999,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,     0,     0,     0,   977,     0,     0,
     978,     0,     0,   979,     0,     0,   980,     0,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,     0,     0,     0,   997,     0,     0,
       0,     0,   998,     0,   964,   999,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,     0,  1000,
       0,   977,     0,     0,   978,     0,     0,   979,     0,     0,
     980,     0,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,     0,     0,
       0,   997,   962,     0,     0,     0,   998,     0,     0,   999,
      75,    76,   963,     0,    78,   285,   286,   287,     0,   288,
     289,   290,   291,  1783,     0,   292,   293,   294,   295,   296,
     297,   298,   285,   286,   287,   299,   288,   289,   290,   291,
       0,   300,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,   962,     0,   300,     0,
       0,     0,     0,     0,    75,    76,   963,     0,    78,   285,
     286,   287,     0,   288,   289,   290,   291,  1794,     0,   292,
     293,   294,   295,   296,   297,   298,   539,     0,   287,   299,
     288,   289,   290,   291,     0,   300,   292,   293,   294,   295,
     296,   297,   298,   597,     0,     0,   299,     0,     0,     0,
     962,     0,   300,     0,     0,     0,     0,     0,    75,    76,
     963,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   775,     0,     0,     0,   964,
       0,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,     0,     0,     0,   977,     0,     0,   978,
       0,     0,   979,     0,     0,   980,     0,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,     0,   997,     0,     0,     0,
       0,   998,     0,   964,   999,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,     0,     0,     0,
     977,     0,     0,   978,     0,     0,   979,     0,     0,   980,
       0,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,     0,     0,     0,
     997,     0,     0,     0,     0,   998,     0,   964,   999,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,     0,  1796,     0,   977,     0,     0,   978,     0,     0,
     979,     0,     0,   980,     0,   981,   982,   983,   984,   985,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     0,     0,     0,   997,   962,     0,     0,     0,   998,
       0,     0,   999,    75,    76,   963,     0,    78,     0,     0,
       0,     0,     0,   285,   286,   287,  1798,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
     285,   286,   287,   299,   288,   289,   290,   291,     0,   300,
     292,   293,   294,   295,   296,   297,   298,     0,     0,   962,
     299,     0,     0,     0,     0,     0,   300,    75,    76,   963,
       0,    78,   285,   286,   287,     0,   288,   289,   290,   291,
    1799,     0,   292,   293,   294,   295,   296,   297,   298,  1049,
       0,     0,   299,     0,     0,     0,     0,     0,   300,     0,
       0,     0,     0,     0,   285,   286,   287,     0,   288,   289,
     290,   291,     0,   962,   292,   293,   294,   295,   296,   297,
     298,    75,    76,   963,   299,    78,     0,     0,     0,     0,
     300,     0,     0,     0,     0,   512,     0,     0,  1374,     0,
       0,     0,   964,     0,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,     0,     0,     0,   977,
       0,     0,   978,     0,     0,   979,     0,     0,   980,     0,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,     0,     0,     0,   997,
       0,     0,     0,     0,   998,     0,   964,   999,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
       0,     0,     0,   977,     0,     0,   978,     0,     0,   979,
       0,     0,   980,     0,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
       0,     0,     0,   997,     0,     0,     0,     0,   998,     0,
     964,   999,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,     0,  1800,     0,   977,     0,     0,
     978,     0,     0,   979,     0,     0,   980,     0,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,     0,     0,     0,   997,   962,     0,
       0,     0,   998,     0,     0,   999,    75,    76,   963,     0,
      78,     0,     0,     0,     0,     0,   285,   286,   287,  1977,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,   285,   286,   287,   299,   288,   289,   290,
     291,     0,   300,   292,   293,   294,   295,   296,   297,   298,
       0,     0,   962,   299,     0,     0,     0,     0,     0,   300,
      75,    76,   963,   358,    78,   901,   902,   903,   904,   905,
     906,   907,   908,  1984,     0,   909,   910,   911,   912,   913,
     914,   915,   916,     0,     0,   917,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   285,   286,   287,
       0,   288,   289,   290,   291,     0,   962,   292,   293,   294,
     295,   296,   297,   298,    75,    76,   963,   299,    78,     0,
       0,     0,     0,   300,     0,     0,     0,     0,   513,     0,
       0,     0,     0,     0,     0,   964,     0,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,     0,
       0,     0,   977,     0,     0,   978,     0,     0,   979,     0,
       0,   980,     0,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,     0,
       0,     0,   997,     0,     0,     0,     0,   998,     0,   964,
     999,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,     0,     0,     0,   977,     0,     0,   978,
       0,     0,   979,     0,     0,   980,     0,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,     0,   997,     0,     0,     0,
       0,   998,     0,   964,   999,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,     0,  2017,     0,
     977,     0,     0,   978,     0,     0,   979,     0,     0,   980,
     626,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,     0,     0,     0,
     997,   962,     0,     0,     0,   998,     0,     0,   999,    75,
      76,   963,     0,    78,   285,   286,   287,     0,   288,   289,
     290,   291,  2019,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,     0,     0,
     300,   627,     0,     0,     0,   525,     0,     0,     0,     0,
     131,   132,     6,     0,     0,   962,     0,     0,     0,     0,
       0,     0,     0,    75,    76,   963,     0,    78,     0,     0,
       0,     0,     0,   628,     0,     0,  2021,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,   629,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,     0,   964,     0,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,     0,     0,     0,   977,     0,     0,   978,     0,
       0,   979,     0,     0,   980,     0,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,     0,     0,     0,   997,     0,     0,     0,     0,
     998,     0,   964,   999,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,     0,     0,     0,   977,
       0,     0,   978,     0,     0,   979,     0,     0,   980,     0,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   131,   132,   133,   997,
       0,     0,     0,     0,   998,     0,     0,   999,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
     138,  2022,     0,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,     0,   131,
     132,     6,   544,     0,     0,   166,     0,     0,     0,     0,
     167,     0,     0,   168,     0,     0,     0,     0,   411,     0,
       0,     0,     0,     0,     0,  2036,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   131,   132,     6,   901,   902,   903,   904,   905,   906,
     907,   908,     0,     0,   909,   910,   911,   912,   913,   914,
     915,   916,     0,     0,   917,     0,     0,     0,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,     6,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,     0,     0,     0,   285,   286,   287,    13,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,     0,     0,
     300,     0,     0,     0,     0,   532,     0,   285,   286,   287,
      14,   288,   289,   290,   291,     0,    15,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,    16,
       0,    17,     0,   300,     0,     0,     0,     0,   533,     0,
       0,   166,     0,    18,     0,     0,   167,    19,     0,   168,
     285,   286,   287,     0,   288,   289,   290,   291,     0,    20,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,     0,     0,   300,     0,     0,     0,
      21,   534,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,   167,
       0,     0,   168,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
       0,     0,     0,     0,   809,    22,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,   166,     0,     0,     0,
       0,   167,     0,     0,   168,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,   285,   286,
     287,   300,   288,   289,   290,   291,   810,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,   285,   286,   287,   300,   288,   289,   290,   291,  1057,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,   285,   286,   287,   300,   288,   289,
     290,   291,  1058,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,   285,   286,   287,
     300,   288,   289,   290,   291,  1059,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
     285,   286,   287,   300,   288,   289,   290,   291,  1191,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,   285,   286,   287,   300,   288,   289,   290,
     291,  1379,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,   285,   286,   287,   300,
     288,   289,   290,   291,  1380,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,   285,
     286,   287,   300,   288,   289,   290,   291,  1381,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,   285,   286,   287,   300,   288,   289,   290,   291,
    1474,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,   285,   286,   287,   300,   288,
     289,   290,   291,  1482,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,   285,   286,
     287,   300,   288,   289,   290,   291,  1491,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,   285,   286,   287,   300,   288,   289,   290,   291,  1662,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,   285,   286,   287,   300,   288,   289,
     290,   291,  1696,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,   285,   286,   287,
     300,   288,   289,   290,   291,  1697,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
     285,   286,   287,   300,   288,   289,   290,   291,  1698,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,   285,   286,   287,   300,   288,   289,   290,
     291,  1702,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,   285,   286,   287,   300,
     288,   289,   290,   291,  1708,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,   285,
     286,   287,   300,   288,   289,   290,   291,  1715,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,   285,   286,   287,   300,   288,   289,   290,   291,
    1735,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,   285,   286,   287,   300,   288,
     289,   290,   291,  1853,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,   285,   286,
     287,   300,   288,   289,   290,   291,  1854,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,   285,   286,   287,   300,   288,   289,   290,   291,  1862,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,   285,   286,   287,   300,   288,   289,
     290,   291,  1868,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,   285,   286,   287,
     300,   288,   289,   290,   291,  1869,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
     285,   286,   287,   300,   288,   289,   290,   291,  1946,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,   285,   286,   287,   300,   288,   289,   290,
     291,  1948,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,   285,   286,   287,   300,
     288,   289,   290,   291,  1971,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,   285,
     286,   287,   300,   288,   289,   290,   291,  2024,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,   285,   286,   287,   300,   288,   289,   290,   291,
    2027,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,   285,   286,   287,   300,   288,
     289,   290,   291,  2037,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,     0,
       0,   300,   285,   286,   287,   547,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,   285,
     286,   287,   665,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,     0,     0,   300,   285,   286,   287,  1063,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
       0,     0,   300,   285,   286,   287,  1114,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
     285,   286,   287,  1190,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,     0,     0,   300,   285,   286,   287,
    1533,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,     0,     0,   300,   285,   286,   287,  1667,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,     0,     0,
     300,   285,   286,   287,  1668,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,     0,     0,   300,   285,   286,
     287,  1669,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,     0,     0,   300,   285,   286,   287,  1826,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,     0,
       0,   300,   285,   286,   287,  1829,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,   285,
     286,   287,  1833,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,     0,     0,   300,   285,   286,   287,  1937,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
       0,     0,   300,   285,   286,   287,  1998,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
     285,   286,   287,  2013,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,     0,     0,   300,   285,   286,   287,
    2044,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,   333,
     285,   286,   287,   300,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,   387,   285,   286,   287,   300,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,   515,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,   516,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,   517,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,   518,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,   519,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,   520,     0,   300,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,   521,
       0,   300,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,   522,     0,   300,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,   523,     0,   300,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
     524,     0,   300,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,   526,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,   527,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,   528,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,   529,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,   530,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,   531,     0,   300,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,   541,
       0,   300,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,   555,     0,   300,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,   619,   285,   286,   287,   300,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,   811,     0,   300,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,   812,     0,   300,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
     813,     0,   300,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,   814,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,   868,   285,   286,   287,   300,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,   876,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,  1061,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,  1062,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,  1739,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,  1851,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,  1865,     0,   300,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,  1943,
       0,   300,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,  1944,     0,   300,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,  1945,     0,   300,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
    1950,     0,   300,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,  1960,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,  1961,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,  1973,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,  2006,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,  2040,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,     0,     0,   300
};

static const yytype_int16 yycheck[] =
{
       5,    86,     7,     5,    26,   356,   178,    12,   109,   110,
     731,  1130,   559,   343,   646,     5,     5,   347,    23,     5,
       5,   568,  1013,     3,     3,     5,     5,  1018,  1019,     5,
      35,   578,     5,     5,     5,   582,     3,     5,     5,   586,
       5,     7,     3,   325,     5,   761,   762,   763,   764,   415,
     621,     7,    86,   335,   336,   337,     5,     5,     5,   234,
     112,   113,   344,    69,   116,   117,   118,   119,   120,   121,
       0,    23,     3,     5,     5,    81,     5,   443,   250,    69,
      75,   259,    86,   258,    64,   259,     5,     5,   266,   268,
     112,   113,   266,     5,   116,   117,   118,   119,   120,   121,
     258,    96,   616,   255,   109,   110,   110,   112,   113,   261,
     268,   116,   117,   118,   119,   120,   121,   122,    65,     0,
      69,   126,   127,   128,    13,    14,    15,   256,    17,  1591,
     257,    82,    64,    23,   500,   626,   627,    69,   310,   266,
      69,     7,  1604,   634,     5,    96,   258,    99,  1610,   257,
      69,    69,    13,    14,    15,   256,    17,  1619,   266,   107,
     881,   234,   883,  1625,  1626,   495,   264,   264,   884,   117,
     268,    13,    14,    15,   247,    17,   277,     5,     6,   351,
     264,     9,    10,   264,   268,   258,   902,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   257,   261,   920,   263,   777,   308,   264,    99,
       5,   266,   143,   264,   257,  1206,    11,    12,    13,    14,
      15,     5,    17,   266,   264,   265,    68,    11,    12,    13,
      14,    15,   317,    17,    29,    13,    14,    15,   243,    17,
     249,   250,   251,   264,    86,    29,   255,   761,   762,   763,
     764,   256,   261,   264,    96,    97,   117,   268,   624,   265,
     264,   265,   259,   105,   264,   107,   268,   268,   268,   266,
     265,   261,   277,   258,   264,   264,   256,   256,   264,    63,
     256,   248,   213,   317,   264,   264,  1277,   267,   267,   256,
     264,   264,   264,   264,   264,   256,   264,   249,   264,   264,
     267,   323,   258,   308,   389,   327,   267,   479,  1024,     5,
     259,    23,   261,   234,   265,    11,    12,    13,    14,    15,
     325,    17,   117,   118,   119,   120,   264,   265,     5,   261,
     335,   336,   337,    29,    11,    12,    13,    14,    15,   344,
      17,   623,   261,   261,   256,   256,   259,   258,     5,   261,
     264,   356,    29,   266,    11,    12,    13,    14,    15,   249,
      17,    13,    14,    15,   259,    17,   467,   259,   258,    82,
     884,   266,    29,    86,   266,   264,   265,   264,  1369,   259,
      13,    14,    15,    96,    17,   264,   266,    99,   902,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   265,   233,   920,    13,    14,    15,
      67,    17,     5,     5,   242,   243,    98,   422,    11,    12,
      13,    14,    15,   265,    17,     6,   108,   109,   110,    23,
     602,   436,   604,   605,   606,  1897,    29,     7,    82,    13,
      14,    15,   447,    17,    88,  1907,     7,   452,   258,   779,
      86,    18,    96,   458,   264,   460,   461,   259,   268,   464,
      96,   466,   467,    96,   266,     5,  1098,  1099,    23,     7,
     265,    11,    12,    13,    14,    15,   112,    17,     5,     6,
     116,   265,   258,     7,     5,  1201,   264,   265,   264,    29,
      11,    12,    13,    14,    15,  1211,    17,    82,     7,     7,
     133,    86,    87,   265,   266,    99,     5,   140,    29,   317,
    1024,   612,    11,    12,    13,    14,    15,     7,    17,   258,
    1982,    88,   256,  1985,    13,    14,    15,     7,    17,   630,
      29,   191,    18,  1995,  1996,     5,     6,   249,    23,     9,
      10,   626,   627,    86,    99,     7,   258,     7,   878,   634,
       7,     5,   265,    96,    18,    98,  2018,    11,    12,    13,
      14,    15,     7,    17,   259,   259,   133,     7,   264,   265,
     259,   266,   266,   140,   141,    29,     7,   266,     7,   930,
     265,   266,    96,   265,  1575,     5,  1577,   264,   265,   265,
     266,    11,    12,    13,    14,    15,   163,    17,   112,   166,
     167,     7,    88,   266,   267,   413,   414,   612,   265,    29,
     418,   616,   264,   265,    99,   258,   621,   258,   623,   256,
     134,   265,    86,   264,    88,   630,     5,   799,     7,   265,
      78,    79,   265,  1124,   806,    99,   259,   259,   265,   266,
      19,    20,    21,   266,   266,  1136,   698,     7,   112,   701,
       7,   673,     7,   705,   140,   249,   259,    36,   264,   265,
       7,   683,   259,   266,   258,   687,   130,   689,   116,   266,
     258,   264,   265,    96,   188,   697,   698,   163,   164,   701,
     265,   259,   130,   705,   264,   786,   787,  1201,   266,     8,
     264,   265,   714,   698,   249,   258,   701,  1211,   265,   258,
     705,  1248,    96,   258,    98,  1824,  1825,    13,    14,    15,
     258,    17,   106,   259,   264,   265,   264,   140,  1232,   130,
     266,   257,   265,   258,   264,   265,   235,   236,   237,     6,
     239,   240,   241,   242,   264,   265,   245,   246,   247,   248,
     249,   250,   251,   264,   265,     7,   255,   232,   264,   265,
       7,   265,   261,   265,   266,   258,   761,   762,   763,   764,
     265,   266,   767,   233,   249,   264,   265,   190,     7,   192,
     265,   266,   777,   265,   266,   264,   265,   265,   266,   265,
     258,   786,   787,  1065,  1066,  1067,  1068,    86,    87,   265,
     266,     7,   215,   265,   266,   817,     7,  1079,   265,   266,
     258,   265,   258,    89,    90,    91,    92,    93,    94,   258,
     264,   265,   265,   266,   258,   194,   258,   265,  1100,  1101,
     247,   248,   249,   250,   258,   124,   125,   265,   266,  1545,
     258,   130,   265,   266,   258,  1007,  1008,  1009,  1010,   266,
     258,  1123,   265,   258,   264,   265,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   258,  1847,    80,   258,  1580,
    1581,  1582,   258,    86,   265,   266,     5,   166,   167,   168,
    1221,   265,   264,   265,   258,  1047,    99,   265,   266,   884,
     249,   250,   251,   252,  1166,   258,   255,   193,   194,   195,
     196,   265,   266,   258,   899,   265,   266,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   265,   266,   920,   235,   236,   237,   258,
     239,   240,   241,   242,   929,   930,   245,   246,   247,   248,
     249,   250,   251,   266,   140,   258,   255,   143,   258,   961,
     265,   266,   261,   265,   266,   258,   265,   265,   266,   258,
     156,   157,   158,   265,   266,   254,   255,   962,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,  1969,   265,
     264,   265,   265,   266,   258,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   247,   248,   249,   250,   251,   258,  1289,   307,   255,
     265,   266,   266,  1295,   313,   261,   265,   266,   317,  1024,
     319,  1512,  1513,  1514,     7,  1516,   258,  1393,   637,   638,
     258,  1545,   331,   332,  1135,   264,  1137,   258,   258,  1124,
    1554,     5,   265,  1534,     5,   234,   234,  1413,   234,   234,
     349,  1136,   264,  1419,   264,  1421,   264,   264,     8,   265,
    1065,  1066,  1067,  1068,   264,   264,  1167,   259,   266,  1074,
     266,     7,   259,     7,  1079,     7,    96,   259,    98,    99,
     100,   101,   102,   103,   104,  1367,  1091,  1453,   259,     5,
     389,     5,  1458,     5,  1376,  1100,  1101,   264,   264,     5,
     140,   264,     5,   143,     5,  1110,    13,    14,    15,   264,
      17,   410,   411,   264,  1119,  1120,   156,   157,  1123,   264,
     160,   161,   234,   259,     5,     5,   264,  1848,  1133,  1134,
    1135,   264,  1137,  1138,  1139,     5,   264,     5,  1143,   264,
       7,   264,     5,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,   122,   123,   124,   125,   126,   127,   128,   208,
     130,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,  1179,  1180,  1181,   264,  1183,    86,
     264,   264,  1187,   264,   259,     5,   258,   258,   258,    96,
    1472,     3,     4,     5,   249,   130,  1201,     7,     5,   498,
     430,     7,     7,  1694,     7,  1696,  1211,     7,     7,     7,
       7,     5,     7,   512,   513,   234,  1221,   264,    30,    31,
      32,    33,    34,     7,     7,   265,   525,   134,   135,   136,
     137,   138,   139,   532,   533,   534,     7,     7,     7,   538,
     539,     7,  1524,     7,     7,   265,   476,   234,     5,   264,
       5,     7,   235,   236,   237,  1746,   239,   240,   241,   242,
       7,  1752,   245,   246,   247,   248,   249,   250,   251,     7,
       7,     7,   255,     7,     7,     7,     7,     7,   261,   265,
       7,   266,     5,   249,  1289,     7,   264,     8,     5,     5,
    1295,   264,     5,     7,     3,   265,   264,   264,   597,   598,
     259,  1583,   264,   235,   236,   237,   264,   239,   240,   241,
     242,   610,   264,   245,   246,   247,   248,   249,   250,   251,
      66,   261,     7,   255,     7,   264,     7,   626,   627,   261,
    1821,     7,   631,   632,     7,   634,   635,     7,   265,   264,
     266,   259,   641,     7,   643,   575,   259,  1894,   258,   258,
     258,  1356,  1357,   258,   258,     5,     3,   259,   265,     7,
       5,   258,  1367,  1535,   258,  1537,  1538,     6,   235,   236,
     237,  1376,   239,   240,   241,   242,     7,   264,   245,   246,
     247,   248,   249,   250,   251,   264,   264,   264,   255,   264,
     266,     3,  1883,   264,   261,     7,   258,     5,   264,   264,
     264,   235,   236,   237,   238,   239,   240,   241,   242,  1760,
       7,   245,   246,   247,   248,   249,   250,   251,   252,     5,
     258,   255,   258,   242,   255,   259,   265,  1512,  1513,  1514,
       3,  1516,   235,   236,   237,   264,   239,   240,   241,   242,
     266,     7,   245,   246,   247,   248,   249,   250,   251,  1534,
      62,     7,   255,   264,   258,  1946,    68,   258,   261,     7,
    1465,  1466,   258,   693,     5,  1470,   258,  1472,   258,    81,
       7,    83,   258,   258,   265,   264,   775,   776,   258,   258,
     258,   258,   258,    95,   258,   258,   258,    99,   718,   247,
     248,   249,   250,   251,   252,     5,  1501,   255,   258,   111,
     259,     5,   264,   264,   803,   804,   805,   258,   258,  1531,
     809,   810,   264,   258,  1519,  1520,   815,  1522,  1523,  1524,
     132,   235,   236,   237,   259,   239,   240,   241,   242,   258,
     258,   245,   246,   247,   248,   249,   250,   251,   258,   838,
    1545,   255,   261,   258,     5,     7,   258,   261,   258,     5,
     258,     5,   259,   258,   784,   259,     5,     5,   264,     5,
       3,   264,  1567,     8,   264,     5,     5,   866,     5,     5,
     869,   801,     5,     5,     3,   187,     7,   189,  1583,     5,
       7,    81,  1587,    83,  1589,     5,    86,   235,   236,   237,
     258,   239,   240,   241,   242,   258,  1878,   245,   246,   247,
     248,   249,   250,   251,   264,     7,   265,   255,   266,  1694,
     264,  1696,   258,   261,   266,     7,   259,   266,     7,     7,
     919,     7,   122,   123,   124,   125,   126,   127,   128,     7,
     130,     7,  1914,     7,  1735,  1736,     7,     7,   235,   236,
     237,  1742,   239,   240,   241,   242,     7,     7,   245,   246,
     247,   248,   249,   250,   251,     7,     7,     7,   255,  1831,
       7,  1746,     7,     7,   261,     7,     7,  1752,     7,   235,
     236,   237,     7,   239,   240,   241,   242,     7,     5,   245,
     246,   247,   248,   249,   250,   251,   264,     7,     7,   255,
       7,     7,     7,     7,  1699,   261,  1701,     7,   235,   236,
     237,     7,   239,   240,   241,   242,     7,     7,   245,   246,
     247,   248,   249,   250,   251,     7,     7,  1818,   255,  1820,
       7,     7,     7,     7,   261,     7,     7,     7,     7,     7,
    1735,  1736,     7,     5,   964,     5,  1821,  1742,   241,   242,
       5,   258,   245,   246,   247,   248,   249,   250,   251,   252,
    1049,     7,   255,   258,     5,  1760,   258,     5,  1057,  1058,
    1059,     7,     7,     7,     7,   265,     7,     7,     7,     7,
     259,   259,   259,   235,   236,   237,  1006,   239,   240,   241,
     242,   266,   266,   245,   246,   247,   248,   249,   250,   251,
     235,   236,   237,   255,   239,   240,   241,   242,  1883,   261,
     245,   246,   247,   248,   249,   250,   251,   266,   266,   266,
     255,   266,   257,  1818,   266,  1820,   261,   259,     7,   266,
       7,     3,   266,  1053,   259,  1124,  1056,     7,   266,     7,
       7,     7,   266,     7,   259,     7,   266,  1136,   266,  1069,
    1070,  1071,  1072,   235,   236,   237,  1076,   239,   240,   241,
     242,   266,   266,   245,   246,   247,   248,   249,   250,   251,
    1159,  1946,  1161,   255,  1163,   266,   265,   265,   265,   261,
     266,   266,   266,  1878,   235,   236,   237,   264,   239,   240,
     241,   242,   266,   266,   245,   246,   247,   248,   249,   250,
     251,   266,  1191,   266,   255,   264,   264,   264,   112,     7,
     261,   259,     3,     4,     5,   258,     3,   266,     7,  1914,
     266,   266,   266,   259,     7,  1145,  1146,     7,     7,     7,
       7,   264,     7,    24,    25,    26,    27,   264,  1158,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   235,   236,   237,   264,   239,   240,
     241,   242,   264,     7,   245,   246,   247,   248,   249,   250,
     251,   264,     7,     7,   255,   264,   264,     5,     7,     5,
     261,   264,   259,   259,     5,     5,     3,     4,     5,     5,
     264,   259,   259,   266,   265,     7,  1226,     7,  1228,   259,
     259,   259,   266,   266,   266,  1235,     7,     7,     7,   266,
    2015,     7,     7,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,   266,    60,    61,   266,   235,   236,   237,   259,
     239,   240,   241,   242,   259,   266,   245,   246,   247,   248,
     249,   250,   251,   235,   236,   237,   255,   239,   240,   241,
     242,  1370,   261,   245,   246,   247,   248,   249,   250,   251,
    1379,  1380,  1381,   255,   259,   266,   259,   266,   259,   261,
     259,   259,     3,     4,     5,     6,   266,   264,     9,   264,
     266,   265,   261,   265,   259,   122,     7,   265,   259,     7,
       7,     7,   129,    24,    25,    26,    27,    28,     7,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     7,     7,     7,   248,  1378,     7,
       7,     7,   253,     7,     7,   256,     7,     7,    69,   135,
       7,     7,   265,   265,   265,     7,   264,     7,  1467,  1468,
    1469,     7,   264,     7,     5,  1474,   111,     7,  1477,  1478,
     266,    16,   266,  1482,   259,   266,  1485,  1486,  1487,  1488,
     266,   259,  1491,  1492,  1493,   266,  1495,   266,   259,   259,
    1499,  1500,   266,   266,     7,  1504,  1505,   264,     5,   264,
     264,     7,     7,  1512,  1513,  1514,  1515,  1516,     7,     7,
       7,     7,  1521,     7,   241,     7,     5,     5,     5,   259,
     247,   248,   264,   258,  1464,  1534,   253,   259,     5,   256,
     259,  1471,   259,   260,   261,   262,  1476,   264,     5,  1479,
       5,   259,   265,     7,  1484,     3,     4,     5,   235,   236,
     237,   238,   239,   240,   241,   242,  1496,     7,   245,   246,
     247,   248,   249,   250,   251,   252,     7,     7,   255,  1509,
     257,  1511,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     7,    60,    61,   265,   265,     7,     7,     7,     7,
       7,   232,  1552,  1553,     7,  1555,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   264,   264,   248,     7,     7,
       7,     7,   253,     7,    81,   256,    83,    84,    85,     7,
     261,     7,   264,   264,   264,  1654,     7,   264,  1657,     7,
     266,     7,     7,  1662,   259,   259,     7,    62,     7,     7,
       7,   264,     7,   264,   122,     3,     4,     5,   265,   132,
       7,   129,     7,     5,   265,   122,   123,   124,   125,   126,
     127,   128,  1089,   130,   131,  1694,  1695,  1696,  1697,  1698,
    1090,   958,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     7,  2045,  1357,
    1239,  1730,  1530,   771,  1750,  1734,   241,   242,  1737,  1738,
     245,   246,   247,   248,   249,   250,   251,  1746,   592,   672,
     255,   127,   609,  1752,    -1,     7,   261,   240,    81,   714,
      83,    84,    -1,    86,    -1,    -1,    -1,  1766,  1767,  1768,
    1769,  1770,  1702,    96,    -1,    -1,    -1,    -1,  1708,    -1,
      -1,    -1,    -1,    -1,    -1,  1715,    -1,    -1,    -1,    -1,
     113,   114,   115,   241,    81,    -1,    83,    84,    85,   247,
     248,  1731,    -1,    -1,    -1,   253,    -1,   130,   256,    -1,
      -1,    -1,    -1,   261,   262,    -1,   264,    -1,    -1,    -1,
      -1,    -1,  1821,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,  1832,    -1,   122,   123,   124,   125,   126,
     127,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1852,  1853,  1854,  1855,    -1,    -1,  1858,
      -1,  1860,    -1,   186,    -1,   239,   240,   241,   242,  1868,
    1869,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,  1883,  1884,    -1,   261,  1887,   235,
     236,   237,    -1,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,  1911,    -1,    -1,   261,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,   253,    -1,  1857,   256,  1928,
      -1,    -1,  1862,    -1,  1864,   258,   264,    -1,    -1,    -1,
      -1,  1871,   265,    -1,    -1,    -1,    -1,  1946,    -1,  1948,
      -1,    -1,    -1,    -1,    -1,   235,   236,   237,    -1,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,  1971,    -1,    -1,   255,    -1,    -1,   265,    -1,
      -1,   261,  1912,   235,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,  2001,   255,    -1,  2004,    -1,    -1,    -1,   261,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,  2024,    -1,    -1,  2027,  1959,
      -1,    -1,    -1,    24,    25,    26,    27,    28,  2037,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    -1,    -1,    86,    24,    25,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,    -1,
     122,   123,   124,   125,   126,   127,   128,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,   238,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,   255,    24,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,   232,    69,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,   253,   265,    -1,   256,    -1,    -1,    -1,    -1,
     209,    -1,    -1,   264,   213,   235,   236,   237,   238,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,   252,     5,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,   266,    -1,    -1,   248,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,     8,   237,
     238,   239,   240,   241,   242,   264,    -1,   245,   246,   247,
     248,   249,   250,   251,   252,     8,    -1,   255,   235,   236,
     237,    -1,   239,   240,   241,   242,    -1,     5,   245,   246,
     247,   248,   249,   250,   251,    13,    14,    15,   255,    17,
      -1,   248,    -1,    -1,   261,    -1,   253,    -1,   265,   256,
      -1,    -1,     8,    -1,    -1,    -1,   142,   264,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,   248,    -1,   189,    -1,    -1,   253,    -1,   194,   256,
     142,   197,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
      -1,    -1,   194,    -1,   142,   197,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,   265,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      -1,   189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,
      13,    14,    15,    -1,    17,   235,   236,   237,    -1,   239,
     240,   241,   242,   265,    -1,   245,   246,   247,   248,   249,
     250,   251,   235,   236,   237,   255,   239,   240,   241,   242,
      -1,   261,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,     5,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,   235,
     236,   237,    -1,   239,   240,   241,   242,   265,    -1,   245,
     246,   247,   248,   249,   250,   251,     8,    -1,   237,   255,
     239,   240,   241,   242,    -1,   261,   245,   246,   247,   248,
     249,   250,   251,     8,    -1,    -1,   255,    -1,    -1,    -1,
       5,    -1,   261,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   194,    -1,   142,   197,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,   265,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,   194,
      -1,    -1,   197,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,   235,   236,   237,   265,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
     235,   236,   237,   255,   239,   240,   241,   242,    -1,   261,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,     5,
     255,    -1,    -1,    -1,    -1,    -1,   261,    13,    14,    15,
      -1,    17,   235,   236,   237,    -1,   239,   240,   241,   242,
     265,    -1,   245,   246,   247,   248,   249,   250,   251,     8,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,    -1,    -1,   235,   236,   237,    -1,   239,   240,
     241,   242,    -1,     5,   245,   246,   247,   248,   249,   250,
     251,    13,    14,    15,   255,    17,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,   266,    -1,    -1,     8,    -1,
      -1,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
      -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,
     142,   197,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,   265,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,   189,     5,    -1,
      -1,    -1,   194,    -1,    -1,   197,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,   235,   236,   237,   265,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,   235,   236,   237,   255,   239,   240,   241,
     242,    -1,   261,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,     5,   255,    -1,    -1,    -1,    -1,    -1,   261,
      13,    14,    15,   265,    17,   235,   236,   237,   238,   239,
     240,   241,   242,   265,    -1,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,   236,   237,
      -1,   239,   240,   241,   242,    -1,     5,   245,   246,   247,
     248,   249,   250,   251,    13,    14,    15,   255,    17,    -1,
      -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,
     197,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   194,    -1,   142,   197,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,   265,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      75,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,
      14,    15,    -1,    17,   235,   236,   237,    -1,   239,   240,
     241,   242,   265,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
     261,   136,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,   265,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
     194,    -1,   142,   197,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,     3,     4,     5,   189,
      -1,    -1,    -1,    -1,   194,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,   265,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,     3,
       4,     5,     6,    -1,    -1,   248,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,   265,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     3,     4,     5,   235,   236,   237,   238,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,   255,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,   235,   236,   237,    29,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,   266,    -1,   235,   236,   237,
      62,   239,   240,   241,   242,    -1,    68,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    81,
      -1,    83,    -1,   261,    -1,    -1,    -1,    -1,   266,    -1,
      -1,   248,    -1,    95,    -1,    -1,   253,    99,    -1,   256,
     235,   236,   237,    -1,   239,   240,   241,   242,    -1,   111,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
     132,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,   253,
      -1,    -1,   256,   235,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,    -1,   266,   187,    -1,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,
      -1,   253,    -1,    -1,   256,   235,   236,   237,    -1,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,   235,   236,
     237,   261,   239,   240,   241,   242,   266,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,   235,   236,   237,   261,   239,   240,   241,   242,   266,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,   235,   236,   237,   261,   239,   240,
     241,   242,   266,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,   235,   236,   237,
     261,   239,   240,   241,   242,   266,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
     235,   236,   237,   261,   239,   240,   241,   242,   266,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,   235,   236,   237,   261,   239,   240,   241,
     242,   266,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,   235,   236,   237,   261,
     239,   240,   241,   242,   266,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,   235,
     236,   237,   261,   239,   240,   241,   242,   266,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,   235,   236,   237,   261,   239,   240,   241,   242,
     266,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,   235,   236,   237,   261,   239,
     240,   241,   242,   266,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,   235,   236,
     237,   261,   239,   240,   241,   242,   266,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,   235,   236,   237,   261,   239,   240,   241,   242,   266,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,   235,   236,   237,   261,   239,   240,
     241,   242,   266,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,   235,   236,   237,
     261,   239,   240,   241,   242,   266,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
     235,   236,   237,   261,   239,   240,   241,   242,   266,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,   235,   236,   237,   261,   239,   240,   241,
     242,   266,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,   235,   236,   237,   261,
     239,   240,   241,   242,   266,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,   235,
     236,   237,   261,   239,   240,   241,   242,   266,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,   235,   236,   237,   261,   239,   240,   241,   242,
     266,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,   235,   236,   237,   261,   239,
     240,   241,   242,   266,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,   235,   236,
     237,   261,   239,   240,   241,   242,   266,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,   235,   236,   237,   261,   239,   240,   241,   242,   266,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,   235,   236,   237,   261,   239,   240,
     241,   242,   266,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,   235,   236,   237,
     261,   239,   240,   241,   242,   266,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
     235,   236,   237,   261,   239,   240,   241,   242,   266,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,   235,   236,   237,   261,   239,   240,   241,
     242,   266,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,   235,   236,   237,   261,
     239,   240,   241,   242,   266,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,   235,
     236,   237,   261,   239,   240,   241,   242,   266,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,   235,   236,   237,   261,   239,   240,   241,   242,
     266,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,   235,   236,   237,   261,   239,
     240,   241,   242,   266,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      -1,   261,   235,   236,   237,   265,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,   235,
     236,   237,   265,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,    -1,    -1,   261,   235,   236,   237,   265,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,   261,   235,   236,   237,   265,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
     235,   236,   237,   265,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,   235,   236,   237,
     265,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,   261,   235,   236,   237,   265,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
     261,   235,   236,   237,   265,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,   261,   235,   236,
     237,   265,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261,   235,   236,   237,   265,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      -1,   261,   235,   236,   237,   265,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,   235,
     236,   237,   265,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,    -1,    -1,   261,   235,   236,   237,   265,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,   261,   235,   236,   237,   265,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
     235,   236,   237,   265,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,   235,   236,   237,
     265,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,
     235,   236,   237,   261,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,   257,   235,   236,   237,   261,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     235,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
      -1,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   235,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   235,   236,   237,    -1,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   235,   236,   237,    -1,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   235,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
     236,   237,    -1,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   235,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     235,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
      -1,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   235,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   235,   236,   237,    -1,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   235,   236,   237,    -1,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   235,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
     236,   237,    -1,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,   257,   235,   236,   237,   261,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
     236,   237,    -1,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   235,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     235,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,   257,   235,   236,   237,   261,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     235,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
      -1,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   235,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   235,   236,   237,    -1,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   235,   236,   237,    -1,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   235,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
     236,   237,    -1,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   235,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     235,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
      -1,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   235,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   235,   236,   237,    -1,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   270,   271,     0,   272,   273,     5,    11,    12,    19,
      20,    21,    22,    29,    62,    68,    81,    83,    95,    99,
     111,   132,   187,   189,   274,   275,   276,   434,   448,   456,
     457,   268,   256,   261,   457,   256,     5,     7,    19,    20,
      21,    36,   194,     7,     3,     7,    62,    68,    81,    83,
      95,    99,   111,   132,   187,   189,     6,     9,    10,   233,
     457,   458,   459,   258,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   457,    13,    14,    15,    17,   193,
     194,   195,   196,   438,   447,   268,   234,   264,     6,     7,
       7,   457,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,   258,
     256,   449,   277,   333,   318,   324,   340,   298,   363,   389,
     419,   430,   191,     5,   256,   256,   258,   258,   258,   258,
     264,     3,     4,     5,     6,    24,    25,    26,    27,    28,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   232,   248,   253,   256,   264,
     451,   452,   453,   455,   457,   459,   451,   257,   266,   257,
     458,   458,   259,   266,   294,     5,    63,   265,   278,   279,
     447,   448,   457,   264,   265,   334,   447,   448,   264,   265,
     264,   265,   264,   265,   341,   447,   448,    67,   265,   299,
     447,   448,   457,   264,   265,   364,   447,   448,   264,   265,
     390,   447,   448,   264,   265,   420,   447,   448,   264,   265,
     431,   447,   448,   457,   130,   451,   451,   440,   457,     6,
     440,     5,    69,   261,   282,   284,   286,   457,     6,   451,
     264,     7,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   451,   451,
     451,   451,   454,   455,     8,   235,   236,   237,   239,   240,
     241,   242,   245,   246,   247,   248,   249,   250,   251,   255,
     261,     7,     7,   265,     7,   454,     7,   258,   266,   257,
     266,     7,     5,   264,   295,   297,   258,   234,   247,   258,
     335,   319,   325,   342,   258,   258,   365,   391,   421,   432,
     435,   264,     8,   257,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   443,   258,   442,   266,   443,     3,   256,
     264,   267,   290,   292,   457,   439,   258,   444,   265,   265,
     454,     5,     5,   451,   451,   458,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   458,   257,   265,   266,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   257,   451,   458,   454,
     234,   261,   451,   234,   234,   293,     5,   282,   234,   451,
      82,    86,    96,   265,   336,    82,    96,   265,   320,    82,
      88,    96,   265,   326,    68,    86,    96,    97,   105,   107,
     265,   343,   447,   300,   259,   284,    86,    96,   112,   116,
     265,   366,    96,   133,   140,   265,   392,   447,    96,   112,
     134,   188,   265,   422,    96,   140,   190,   192,   215,   265,
     433,   264,   451,   451,   284,   284,   264,   284,   264,   264,
     264,   264,   264,   444,   284,   247,   248,   249,   250,   266,
     441,    23,    99,   232,   249,   301,   302,   444,     8,   451,
     291,   454,   266,    64,   287,   290,   259,   266,   445,   265,
     259,   266,   266,   266,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   266,   259,   259,   259,   259,
     259,   259,   266,   266,   266,   259,   451,   455,     8,     8,
       7,   259,   259,   257,     6,   451,   451,   265,     5,   282,
     282,   259,   294,     7,   282,   259,     5,   264,     5,     5,
     457,   264,     5,   264,   301,     5,   264,     5,     5,   457,
     264,   264,   264,   259,   294,   234,   259,     5,     5,   457,
     264,   264,     5,   457,   264,   393,     5,   457,   264,   457,
     457,   457,   264,   457,   458,     5,   436,     8,     8,   257,
     208,   301,   264,   454,   264,   264,   264,   259,   259,     5,
     258,   258,   258,   249,   444,   305,   306,   259,   451,   257,
     265,   294,   267,   130,   283,     7,    75,   136,   168,   198,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     5,   451,   451,     7,   451,   451,   451,
     451,     7,   451,   451,     7,   265,     7,     7,     7,     5,
       7,   234,   264,   337,     7,   264,   295,     7,   321,     7,
     327,     7,     7,   360,     7,   295,     7,   344,   350,   357,
       7,     5,   301,   234,     7,   295,     7,   367,   373,   295,
       7,   394,   264,   295,     7,   423,     7,     7,     7,   436,
       7,     7,     7,   265,   437,   451,   451,     5,   266,   454,
     265,   454,   454,   454,     7,   442,   451,     5,   458,   249,
     259,     5,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    60,    61,   122,   129,
     241,   247,   248,   253,   256,   261,   262,   264,   307,   310,
     388,   450,   452,   457,     7,     8,     8,   248,   292,   284,
     288,   294,   453,   453,   264,     5,   242,   243,   458,   451,
     451,   453,   451,     5,   446,   446,   446,   451,     5,   264,
     451,   264,   303,   264,   264,   264,   264,     3,   259,   266,
     266,   259,   259,   259,   259,   264,    66,   337,   264,   265,
     447,     7,   264,   265,   264,   265,   264,   265,   447,     7,
     264,   265,   447,   264,   265,   264,   265,   447,   264,     7,
     301,     7,   264,   265,   447,   117,   118,   119,   120,   265,
     374,   447,   448,     7,   264,   265,   447,   448,   401,     7,
     264,   265,   447,   448,   265,   438,     8,   265,   257,   264,
     301,   265,   265,   265,   265,   266,   259,   259,   259,     7,
     388,   258,   314,   258,   258,   258,   258,   311,   312,     5,
     307,   307,   307,   307,     3,     3,     5,   143,   213,     5,
     457,   235,   236,   237,   238,   239,   240,   241,   242,   245,
     246,   247,   248,   249,   250,   251,   252,   255,   261,   263,
     258,   315,   315,   451,   451,   292,   444,   259,     5,    65,
     289,   301,   458,   458,     6,   454,   301,   304,   451,   451,
     451,   454,   451,   451,   451,   280,   265,   338,   322,   328,
     361,   345,   351,   358,   451,     7,   368,   264,   264,   264,
     264,   395,     5,    15,   142,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   159,   162,   165,
     168,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   189,   194,   197,
     265,   402,   447,   424,   451,   451,   266,   264,   264,   264,
     264,   444,   388,   258,   388,   307,     5,     5,   258,   258,
     242,   257,   457,   265,   308,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,     3,   451,   259,   260,   307,   316,   264,   317,     8,
     259,   457,   290,   266,   265,   265,   266,   266,   266,   266,
     265,   259,   259,   265,   258,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    80,    86,    99,   265,   339,    69,
      81,   265,   323,    82,    86,    87,   265,   329,    98,   108,
     109,   110,   265,   362,    96,    98,    99,   100,   101,   102,
     103,   104,   265,   346,    96,    98,   106,   265,   352,    86,
      96,    98,   265,   359,   265,    81,    83,    84,    86,    96,
     113,   114,   115,   130,   186,   258,   265,   369,   379,   379,
     383,   375,    86,    96,   134,   135,   136,   137,   138,   139,
     265,   396,   447,   258,   457,   258,   258,   301,   258,   258,
     258,   258,   258,   258,   258,   258,   258,     7,   258,   258,
     264,   258,   264,   258,   264,   264,   258,   258,   258,   258,
     258,   258,   258,   258,   264,   264,   258,   258,   258,   258,
     258,   264,   264,   258,   403,   404,    75,    96,   265,   425,
     265,   266,   301,   454,   454,   454,   454,   259,   259,   305,
     259,   266,   258,   259,   305,   305,   258,   265,   307,   259,
     259,   266,    69,   454,   451,     7,   301,   301,   451,   451,
     451,   261,   284,   284,   284,   284,   258,   301,   258,   301,
     301,   301,   264,   457,     5,   258,   301,    64,   284,     5,
     264,     5,     5,     5,   286,   289,   457,     5,     5,     5,
     264,   303,   303,   284,   284,     5,     5,   264,   355,     5,
     264,   353,     5,   457,     5,     5,     5,     5,     5,   107,
     117,   457,   457,     3,     3,   284,   453,   371,    81,    83,
      84,    85,   122,   123,   124,   125,   126,   127,   128,   130,
     131,   265,   380,   387,   265,   130,   265,   384,   387,    86,
     110,   264,   265,   376,     5,   457,   264,   397,   457,   458,
     453,   458,   264,   399,   457,   457,   457,     7,   301,   301,
       7,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     301,   451,   408,   451,   410,   451,   412,   414,   284,   458,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,     5,   457,   258,   258,   264,   457,
     451,   265,   265,   265,   265,   265,     7,   266,   307,   313,
     264,   259,   266,   305,     8,   307,   258,   265,   266,   266,
     266,   266,   290,     7,     7,     7,     7,   301,     7,   301,
       7,     7,     7,   452,     7,     7,   301,     7,     7,     7,
     317,   330,     7,     7,     7,     7,     7,     7,     7,     7,
     295,   264,   347,     5,     7,     7,     7,     7,     7,   356,
       7,   354,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   370,     7,     7,     7,     7,   305,     5,
       5,     5,   258,   284,     7,   258,   284,   258,     5,     5,
     377,     7,     7,   398,     7,     7,     7,     7,   400,     7,
       7,   259,   259,   259,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   259,   266,   140,   143,   156,   157,   158,
     265,   409,   266,   140,   143,   156,   157,   160,   161,   265,
     411,   266,    18,    88,   140,   163,   164,   265,   413,    18,
      88,   133,   140,   141,   163,   166,   167,   265,   415,   266,
     259,   266,   266,   266,   266,   266,   266,   265,   265,   266,
     266,   266,   266,   266,   266,   266,   259,   303,   405,   457,
     405,   426,     7,   265,   264,   264,   265,   264,   264,   284,
     259,   305,   451,     3,   259,   309,   284,   301,   451,   451,
     451,   281,   266,   266,   294,   266,     7,   264,   265,     7,
     112,     7,   294,   265,   294,   265,   294,   258,   372,   259,
       7,     7,     7,     3,     7,   381,     7,   385,     7,     7,
      78,    79,   116,   130,   265,   378,   265,   294,   265,   294,
       7,   264,     7,   301,   457,   457,   451,   451,   451,   457,
     301,   284,     7,   451,   264,   301,   451,   451,   301,   451,
     264,   301,   451,   451,   451,   451,   451,   451,   451,   264,
     451,   301,   451,   451,   457,   264,   264,   451,   451,   264,
     301,     7,   301,   453,   453,   453,   451,   453,     7,     7,
     457,   457,   451,   457,   457,   284,     5,     7,   406,   406,
       5,   117,   265,   447,   264,   453,   454,   264,   454,   454,
     259,   259,   266,   259,   307,   259,   265,   265,   265,   265,
     266,   301,   301,   452,   301,   331,     5,     5,     5,     5,
     457,     7,     7,   259,   305,   305,   388,   388,   388,   284,
     457,   457,   401,   259,   266,   266,   266,   266,   266,   266,
     259,   266,   266,   401,     7,     7,     7,     7,   266,   401,
       7,     7,     7,     7,     7,   266,     7,     7,   401,     7,
       7,     7,     7,     7,   401,   401,     7,     7,   416,   259,
     266,   266,   259,   259,   266,   266,   266,   266,   266,   259,
     259,   259,   266,   265,   266,   259,   266,   407,   259,   264,
     264,   451,   266,   265,   451,   265,   265,   259,   451,   265,
     261,   259,   259,   265,   259,    89,    90,    91,    92,    93,
      94,   265,   332,     7,   265,   259,     7,   382,   386,     7,
       7,     7,     7,   265,     7,   453,   451,   453,   451,   451,
     457,     7,   457,   301,   265,   301,   265,   301,   265,   265,
     265,   264,   265,     7,   451,   301,     7,     7,   451,   458,
     458,   451,   451,     7,     7,     7,   458,     7,   135,     7,
     209,   213,   453,     7,   427,   427,   265,   453,   265,   265,
     265,   264,   264,   265,   290,     7,     7,     7,     7,     5,
     451,   451,   451,   451,   451,   111,     7,   266,   266,    16,
     259,   259,   266,   266,   266,   266,   259,   266,   266,   259,
     266,   417,   266,   259,   266,   259,   259,   259,   266,   266,
     265,   266,   458,   458,   453,    81,    83,    86,   130,   265,
     387,   428,   265,   266,   264,   454,   451,   266,     7,     7,
       7,     7,     7,     7,     5,   305,   388,   264,     7,     7,
     451,   451,   451,   451,     7,   301,   451,   264,   451,    18,
      86,    88,    99,   112,   130,   265,   418,   301,     7,   301,
       7,     7,     7,   451,   451,     7,   301,   265,   266,     5,
       5,     5,   284,   258,   453,   451,   265,   265,   451,   295,
     259,   259,   401,   259,   259,   259,   266,   259,   266,   401,
     259,     5,     5,   451,   301,     5,   284,   259,   259,   266,
     259,   259,   265,     7,   451,     7,     7,     7,     7,   429,
     265,   266,   265,   259,     7,     7,     7,   265,     7,     7,
       7,   453,   264,   451,   265,   264,     7,     7,     7,     7,
       7,     7,     7,     7,   301,   264,   264,     7,   265,   305,
     451,   264,     7,   348,   266,   401,   259,   401,   259,   401,
     401,     7,   259,   265,   451,    62,   451,   265,   264,   265,
       7,   265,   265,     7,   266,   285,   457,   266,   401,     7,
       7,   451,     7,   264,   296,   451,   265,   266,   349,   265,
     259,   451,   132,     7,   265,     5,   296,     7,   265
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
      DefineQuantity_S.DofDataIndex = (yyvsp[(2) - (3)].i) ; 
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
      DefineSystem_S.OriginSystemIndex = (yyvsp[(2) - (3)].l) ;
    ;}
    break;

  case 408:
#line 3937 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 409:
#line 3942 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[(2) - (3)].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 410:
#line 3947 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 412:
#line 3958 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(1) - (1)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(1) - (1)].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[(1) - (1)].c)) ;
    ;}
    break;

  case 413:
#line 3967 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ; ;}
    break;

  case 414:
#line 3974 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 415:
#line 3977 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[(3) - (3)].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 416:
#line 3989 "GetDP.y"
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
#line 3999 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l) ;  ;}
    break;

  case 418:
#line 4005 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 419:
#line 4008 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[(3) - (3)].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(3) - (3)].c)) ;
      else  
	List_Add((yyvsp[(1) - (3)].l), &i) ;
      (yyval.l) = (yyvsp[(1) - (3)].l) ; Free((yyvsp[(3) - (3)].c)) ;
    ;}
    break;

  case 420:
#line 4020 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 421:
#line 4028 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[(1) - (2)].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 422:
#line 4041 "GetDP.y"
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
#line 4063 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 424:
#line 4070 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 425:
#line 4076 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 426:
#line 4082 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 427:
#line 4088 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 428:
#line 4096 "GetDP.y"
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
#line 4118 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 430:
#line 4125 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 431:
#line 4131 "GetDP.y"
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
#line 4142 "GetDP.y"
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
#line 4153 "GetDP.y"
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
#line 4166 "GetDP.y"
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
#line 4181 "GetDP.y"
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
#line 4196 "GetDP.y"
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
#line 4211 "GetDP.y"
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
#line 4231 "GetDP.y"
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
#line 4252 "GetDP.y"
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
#line 4264 "GetDP.y"
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
#line 4284 "GetDP.y"
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
#line 4301 "GetDP.y"
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
#line 4320 "GetDP.y"
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
#line 4341 "GetDP.y"
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
#line 4355 "GetDP.y"
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
#line 4369 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[(3) - (5)].i) ;
    ;}
    break;

  case 447:
#line 4377 "GetDP.y"
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
#line 4411 "GetDP.y"
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
#line 4424 "GetDP.y"
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
#line 4438 "GetDP.y"
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
#line 4451 "GetDP.y"
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
#line 4463 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 454:
#line 4472 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 456:
#line 4481 "GetDP.y"
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
#line 4492 "GetDP.y"
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
#line 4504 "GetDP.y"
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
#line 4514 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[(3) - (5)].c) ; 
    ;}
    break;

  case 460:
#line 4522 "GetDP.y"
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
#line 4535 "GetDP.y"
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
#line 4548 "GetDP.y"
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
#line 4562 "GetDP.y"
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
#line 4572 "GetDP.y"
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
#line 4582 "GetDP.y"
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
#line 4596 "GetDP.y"
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
#line 4610 "GetDP.y"
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
#line 4629 "GetDP.y"
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
#line 4647 "GetDP.y"
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
#line 4658 "GetDP.y"
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
#line 4673 "GetDP.y"
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
#line 4688 "GetDP.y"
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
#line 4703 "GetDP.y"
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
#line 4718 "GetDP.y"
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
#line 4733 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 476:
#line 4744 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 477:
#line 4749 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[(1) - (1)].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[(1) - (1)].c)) ;
      Free((yyvsp[(1) - (1)].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 478:
#line 4759 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 480:
#line 4769 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[(3) - (3)].c) ; ;}
    break;

  case 481:
#line 4772 "GetDP.y"
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
#line 4782 "GetDP.y"
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
#line 4798 "GetDP.y"
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
#line 4814 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 486:
#line 4818 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 487:
#line 4822 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 488:
#line 4826 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 489:
#line 4831 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 490:
#line 4842 "GetDP.y"
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
#line 4859 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 493:
#line 4863 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 494:
#line 4867 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 495:
#line 4871 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 496:
#line 4875 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 497:
#line 4880 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 498:
#line 4891 "GetDP.y"
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
#line 4906 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 501:
#line 4910 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 502:
#line 4914 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[(2) - (3)].i) ; ;}
    break;

  case 503:
#line 4918 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 504:
#line 4922 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 505:
#line 4933 "GetDP.y"
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
#line 4951 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 508:
#line 4955 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 509:
#line 4959 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 510:
#line 4963 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[(2) - (3)].d) ; ;}
    break;

  case 511:
#line 4968 "GetDP.y"
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
#line 4978 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 513:
#line 4984 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 514:
#line 4990 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[(3) - (4)].l) ;
    ;}
    break;

  case 515:
#line 5000 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 516:
#line 5003 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &ChangeOfState_S) ; ;}
    break;

  case 517:
#line 5008 "GetDP.y"
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
#line 5026 "GetDP.y"
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
#line 5036 "GetDP.y"
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
#line 5065 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 522:
#line 5068 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[(2) - (3)].d) ; ;}
    break;

  case 523:
#line 5071 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[(2) - (3)].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[(2) - (3)].i) ;
    ;}
    break;

  case 524:
#line 5079 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[(2) - (3)].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[(2) - (3)].c)) ;
      Free((yyvsp[(2) - (3)].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 525:
#line 5096 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 527:
#line 5108 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 530:
#line 5119 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 532:
#line 5132 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (3)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 533:
#line 5139 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[(2) - (4)].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[(2) - (4)].c) ; 
    ;}
    break;

  case 534:
#line 5147 "GetDP.y"
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
#line 5160 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 536:
#line 5165 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 537:
#line 5171 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 538:
#line 5174 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[(1) - (4)].l), &PostQuantity_S) ; ;}
    break;

  case 539:
#line 5177 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 540:
#line 5179 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 541:
#line 5185 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 543:
#line 5196 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[(2) - (3)].c) ; ;}
    break;

  case 544:
#line 5199 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 545:
#line 5205 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 546:
#line 5210 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[(1) - (5)].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 547:
#line 5216 "GetDP.y"
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
#line 5228 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (2)].l) ; ;}
    break;

  case 549:
#line 5234 "GetDP.y"
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
#line 5248 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 552:
#line 5255 "GetDP.y"
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
#line 5283 "GetDP.y"
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
#line 5294 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[(2) - (3)].i)) ;
   ;}
    break;

  case 555:
#line 5299 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[(2) - (3)].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 556:
#line 5308 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[(2) - (3)].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[(2) - (3)].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[(2) - (3)].c)) ;
    ;}
    break;

  case 557:
#line 5325 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 559:
#line 5337 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 562:
#line 5346 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 564:
#line 5358 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[(2) - (3)].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[(2) - (3)].c) ; 
    ;}
    break;

  case 565:
#line 5365 "GetDP.y"
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
#line 5377 "GetDP.y"
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
#line 5388 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[(2) - (3)].c) ;
    ;}
    break;

  case 568:
#line 5393 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[(3) - (4)].l) ; ;}
    break;

  case 569:
#line 5399 "GetDP.y"
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
#line 5416 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[(7) - (8)].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 571:
#line 5426 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 572:
#line 5429 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 573:
#line 5433 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[(1) - (3)].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 574:
#line 5446 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 575:
#line 5451 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 576:
#line 5456 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (8)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[(5) - (8)].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 577:
#line 5465 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (11)].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[(7) - (11)].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 578:
#line 5474 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[(3) - (6)].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 579:
#line 5483 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(3) - (3)].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 580:
#line 5489 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[(7) - (10)].i)) ;
    ;}
    break;

  case 581:
#line 5494 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 582:
#line 5503 "GetDP.y"
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
#line 5515 "GetDP.y"
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
#line 5538 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 585:
#line 5539 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 586:
#line 5540 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 587:
#line 5541 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 588:
#line 5547 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 589:
#line 5549 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[(2) - (3)].i)) ; ;}
    break;

  case 590:
#line 5555 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 591:
#line 5561 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 592:
#line 5568 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 593:
#line 5577 "GetDP.y"
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
#line 5599 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[(2) - (2)].i)) ;
    ;}
    break;

  case 595:
#line 5607 "GetDP.y"
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
#line 5618 "GetDP.y"
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
#line 5632 "GetDP.y"
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
#line 5653 "GetDP.y"
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
#line 5680 "GetDP.y"
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
#line 5711 "GetDP.y"
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
#line 5731 "GetDP.y"
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
#line 5767 "GetDP.y"
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
#line 5781 "GetDP.y"
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
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 606:
#line 5809 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 607:
#line 5813 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 608:
#line 5817 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 609:
#line 5821 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[(3) - (3)].d) ; 
    ;}
    break;

  case 610:
#line 5825 "GetDP.y"
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
#line 5835 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 612:
#line 5840 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 613:
#line 5845 "GetDP.y"
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
#line 5865 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 615:
#line 5869 "GetDP.y"
    { 
      if((int)(yyvsp[(3) - (3)].d) >= 1 && (int)(yyvsp[(3) - (3)].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 616:
#line 5876 "GetDP.y"
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
#line 5886 "GetDP.y"
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
#line 5895 "GetDP.y"
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
#line 5904 "GetDP.y"
    { 
      if((yyvsp[(3) - (3)].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[(3) - (3)].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 620:
#line 5911 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 621:
#line 5919 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[(3) - (3)].d);
    ;}
    break;

  case 622:
#line 5923 "GetDP.y"
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
#line 5932 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 624:
#line 5936 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 625:
#line 5940 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 626:
#line 5948 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[(4) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[(6) - (9)].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[(8) - (9)].i) ;
    ;}
    break;

  case 627:
#line 5954 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 628:
#line 5958 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 629:
#line 5966 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 630:
#line 5973 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 631:
#line 5981 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 632:
#line 5988 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 633:
#line 5996 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[(4) - (9)].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[(6) - (9)].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[(8) - (9)].d) ;
    ;}
    break;

  case 634:
#line 6003 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[(4) - (5)].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[(4) - (5)].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[(4) - (5)].l) ;
      }
    ;}
    break;

  case 635:
#line 6011 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[(3) - (3)].i) - 1 ;
    ;}
    break;

  case 636:
#line 6015 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 637:
#line 6024 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 638:
#line 6030 "GetDP.y"
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
#line 6080 "GetDP.y"
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
#line 6095 "GetDP.y"
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
#line 6111 "GetDP.y"
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
#line 6131 "GetDP.y"
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
#line 6151 "GetDP.y"
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
#line 6189 "GetDP.y"
    {
      if(!(yyvsp[(3) - (4)].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 645:
#line 6193 "GetDP.y"
    {
    ;}
    break;

  case 647:
#line 6208 "GetDP.y"
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
#line 6223 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6229 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (7)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (7)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6235 "GetDP.y"
    { Constant_S.Name = (yyvsp[(1) - (4)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(3) - (4)].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6241 "GetDP.y"
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
#line 6257 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 653:
#line 6262 "GetDP.y"
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
#line 6278 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 655:
#line 6283 "GetDP.y"
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
#line 6295 "GetDP.y"
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
#line 6305 "GetDP.y"
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

  case 659:
#line 6324 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (3)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 660:
#line 6330 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[(5) - (5)].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 661:
#line 6336 "GetDP.y"
    { Constant_S.Name = (yyvsp[(3) - (5)].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[(5) - (5)].c) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 662:
#line 6347 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 663:
#line 6348 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 664:
#line 6349 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 665:
#line 6350 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 666:
#line 6351 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 667:
#line 6352 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 668:
#line 6353 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 669:
#line 6354 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 670:
#line 6355 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 671:
#line 6356 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 672:
#line 6357 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 673:
#line 6358 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 674:
#line 6359 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 675:
#line 6360 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 676:
#line 6361 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 677:
#line 6362 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 678:
#line 6363 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 679:
#line 6364 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 680:
#line 6365 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 681:
#line 6366 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 682:
#line 6367 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c);       ;}
    break;

  case 683:
#line 6371 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ;          ;}
    break;

  case 684:
#line 6372 "GetDP.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d) ;          ;}
    break;

  case 685:
#line 6373 "GetDP.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 686:
#line 6374 "GetDP.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d) ;         ;}
    break;

  case 687:
#line 6375 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 688:
#line 6376 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 689:
#line 6377 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 690:
#line 6378 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 691:
#line 6379 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d) ;  ;}
    break;

  case 692:
#line 6380 "GetDP.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d)) ;  ;}
    break;

  case 693:
#line 6381 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 694:
#line 6382 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d) ;     ;}
    break;

  case 695:
#line 6383 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 696:
#line 6384 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 697:
#line 6385 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 698:
#line 6386 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 699:
#line 6387 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 700:
#line 6388 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d) ;    ;}
    break;

  case 701:
#line 6389 "GetDP.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 702:
#line 6390 "GetDP.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 703:
#line 6391 "GetDP.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 704:
#line 6392 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 705:
#line 6393 "GetDP.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 706:
#line 6394 "GetDP.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 707:
#line 6395 "GetDP.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 708:
#line 6396 "GetDP.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 709:
#line 6397 "GetDP.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 710:
#line 6398 "GetDP.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 711:
#line 6399 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d)); ;}
    break;

  case 712:
#line 6400 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 713:
#line 6401 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 714:
#line 6402 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 715:
#line 6403 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 716:
#line 6404 "GetDP.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 717:
#line 6405 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 718:
#line 6406 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 719:
#line 6407 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d),(yyvsp[(5) - (6)].d));  ;}
    break;

  case 720:
#line 6408 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d)*(yyvsp[(3) - (6)].d)+(yyvsp[(5) - (6)].d)*(yyvsp[(5) - (6)].d));  ;}
    break;

  case 721:
#line 6410 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d)? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d) ; ;}
    break;

  case 722:
#line 6412 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[(1) - (2)].d)); ;}
    break;

  case 723:
#line 6417 "GetDP.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d) ; ;}
    break;

  case 724:
#line 6418 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[(1) - (1)].i) ; ;}
    break;

  case 725:
#line 6419 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 726:
#line 6420 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 727:
#line 6421 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 728:
#line 6422 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 729:
#line 6423 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 730:
#line 6425 "GetDP.y"
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
#line 6443 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 732:
#line 6446 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 733:
#line 6452 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 734:
#line 6455 "GetDP.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 735:
#line 6462 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d))) ; 
    ;}
    break;

  case 736:
#line 6468 "GetDP.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 737:
#line 6471 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].d))) ; ;}
    break;

  case 738:
#line 6474 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[(3) - (3)].l)) ; i++){
	List_Read((yyvsp[(3) - (3)].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 739:
#line 6486 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[(1) - (3)].d) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d<=(yyvsp[(3) - (3)].d)):(d>=(yyvsp[(3) - (3)].d)) ; ((yyvsp[(1) - (3)].d)<(yyvsp[(3) - (3)].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 740:
#line 6492 "GetDP.y"
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
#line 6503 "GetDP.y"
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
#line 6519 "GetDP.y"
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
#line 6541 "GetDP.y"
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
#line 6556 "GetDP.y"
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
#line 6594 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 746:
#line 6602 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[(7) - (8)].d) ; i++) {
	d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 747:
#line 6614 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c)) ;
    ;}
    break;

  case 748:
#line 6622 "GetDP.y"
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
#line 6636 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 750:
#line 6639 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 751:
#line 6646 "GetDP.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c) ; ;}
    break;

  case 752:
#line 6649 "GetDP.y"
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
#line 6664 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c) ;
    ;}
    break;

  case 754:
#line 6669 "GetDP.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 755:
#line 6674 "GetDP.y"
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
#line 6693 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 757:
#line 6703 "GetDP.y"
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
#line 11878 "GetDP.tab.c"
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


#line 6714 "GetDP.y"



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


